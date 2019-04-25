// Copyright 2016 The SwiftShader Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef sw_Sampler_hpp
#define sw_Sampler_hpp

#include "Device/Color.hpp"
#include "Device/Config.hpp"
#include "System/Types.hpp"
#include "Vulkan/VkFormat.h"

namespace vk
{
	class Image;
}

namespace sw
{
	struct Mipmap
	{
		const void *buffer[6];

		float4 fWidth;
		float4 fHeight;
		float4 fDepth;

		short uHalf[4];
		short vHalf[4];
		short wHalf[4];
		short width[4];
		short height[4];
		short depth[4];
		short onePitchP[4];
		int4 pitchP;
		int4 sliceP;
	};

	struct Texture
	{
		Mipmap mipmap[MIPMAP_LEVELS];

		float4 widthHeightLOD;
		float4 widthLOD;
		float4 heightLOD;
		float4 depthLOD;

		word4 borderColor4[4];   // FIXME(b/129523279): Part of Vulkan sampler.
		float4 borderColorF[4];  // FIXME(b/129523279): Part of Vulkan sampler.
		float maxAnisotropy;     // FIXME(b/129523279): Part of Vulkan sampler.
		float minLod;  // FIXME(b/129523279): Part of Vulkan sampler.
		float maxLod;  // FIXME(b/129523279): Part of Vulkan sampler.
	};

	enum SamplerType
	{
		SAMPLER_PIXEL,
		SAMPLER_VERTEX
	};

	enum TextureType ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		TEXTURE_NULL,       // TODO(b/129523279): Eliminate
		TEXTURE_1D,
		TEXTURE_2D,
		TEXTURE_3D,
		TEXTURE_RECTANGLE,  // TODO(b/129523279): Eliminate
		TEXTURE_CUBE,
		TEXTURE_1D_ARRAY,
		TEXTURE_2D_ARRAY,
		TEXTURE_CUBE_ARRAY,

		TEXTURE_LAST = TEXTURE_CUBE_ARRAY
	};

	enum FilterType ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		FILTER_POINT,
		FILTER_GATHER,
		FILTER_MIN_POINT_MAG_LINEAR,
		FILTER_MIN_LINEAR_MAG_POINT,
		FILTER_LINEAR,
		FILTER_ANISOTROPIC,

		FILTER_LAST = FILTER_ANISOTROPIC
	};

	enum MipmapType ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		MIPMAP_NONE,
		MIPMAP_POINT,
		MIPMAP_LINEAR,

		MIPMAP_LAST = MIPMAP_LINEAR
	};

	enum AddressingMode ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		ADDRESSING_WRAP,
		ADDRESSING_CLAMP,
		ADDRESSING_MIRROR,
		ADDRESSING_MIRRORONCE,
		ADDRESSING_BORDER,     // Single color
		ADDRESSING_SEAMLESS,   // Border of pixels
		ADDRESSING_LAYER,
		ADDRESSING_TEXELFETCH,

		ADDRESSING_LAST = ADDRESSING_TEXELFETCH
	};

	enum CompareFunc ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		COMPARE_BYPASS,
		COMPARE_LESSEQUAL,
		COMPARE_GREATEREQUAL,
		COMPARE_LESS,
		COMPARE_GREATER,
		COMPARE_EQUAL,
		COMPARE_NOTEQUAL,
		COMPARE_ALWAYS,
		COMPARE_NEVER,

		COMPARE_LAST = COMPARE_NEVER
	};

	enum SwizzleType ENUM_UNDERLYING_TYPE_UNSIGNED_INT
	{
		SWIZZLE_RED,
		SWIZZLE_GREEN,
		SWIZZLE_BLUE,
		SWIZZLE_ALPHA,
		SWIZZLE_ZERO,
		SWIZZLE_ONE,

		SWIZZLE_LAST = SWIZZLE_ONE
	};

	class Sampler
	{
	public:
		struct State
		{
			State();

			TextureType textureType;
			vk::Format textureFormat;
			FilterType textureFilter;
			AddressingMode addressingModeU;
			AddressingMode addressingModeV;
			AddressingMode addressingModeW;
			MipmapType mipmapFilter;
			bool sRGB;
			VkComponentMapping swizzle;
			bool highPrecisionFiltering;
			CompareFunc compare;

			#if PERF_PROFILE
			bool compressedFormat;
			#endif
		};

		Sampler();

		~Sampler();

		State samplerState() const;

		void setTextureLevel(int face, int level, vk::Image *image, TextureType type);

		void setTextureFilter(FilterType textureFilter);
		void setMipmapFilter(MipmapType mipmapFilter);
		void setGatherEnable(bool enable);
		void setAddressingModeU(AddressingMode addressingMode);
		void setAddressingModeV(AddressingMode addressingMode);
		void setAddressingModeW(AddressingMode addressingMode);
		void setReadSRGB(bool sRGB);
		void setBorderColor(const Color<float> &borderColor);
		void setMaxAnisotropy(float maxAnisotropy);
		void setHighPrecisionFiltering(bool highPrecisionFiltering);
		void setCompareFunc(CompareFunc compare);
		void setMinLod(float minLod);
		void setMaxLod(float maxLod);

		static void setFilterQuality(FilterType maximumFilterQuality);
		static void setMipmapQuality(MipmapType maximumFilterQuality);
		void setMipmapLOD(float lod);

		bool hasTexture() const;
		bool hasUnsignedTexture() const;
		bool hasCubeTexture() const;
		bool hasVolumeTexture() const;

		const Texture &getTextureData();

	private:
		MipmapType mipmapFilter() const;
		TextureType getTextureType() const;
		FilterType getTextureFilter() const;
		AddressingMode getAddressingModeU() const;
		AddressingMode getAddressingModeV() const;
		AddressingMode getAddressingModeW() const;
		CompareFunc getCompareFunc() const;

		vk::Format textureFormat;
		TextureType textureType;

		FilterType textureFilter;
		AddressingMode addressingModeU;
		AddressingMode addressingModeV;
		AddressingMode addressingModeW;
		MipmapType mipmapFilterState;
		bool sRGB;
		bool gather;
		bool highPrecisionFiltering;
		int border;

		VkComponentMapping swizzle;
		CompareFunc compare;

		Texture texture;
		float exp2LOD;

		static FilterType maximumTextureFilterQuality;
		static MipmapType maximumMipmapFilterQuality;
	};
}

#endif   // sw_Sampler_hpp

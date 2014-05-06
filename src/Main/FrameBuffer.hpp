// SwiftShader Software Renderer
//
// Copyright(c) 2005-2012 TransGaming Inc.
//
// All rights reserved. No part of this software may be copied, distributed, transmitted,
// transcribed, stored in a retrieval system, translated into any human or computer
// language by any means, or disclosed to third parties without the explicit written
// agreement of TransGaming Inc. Without such an agreement, no rights or licenses, express
// or implied, including but not limited to any patent rights, are granted to you.
//

#ifndef	sw_FrameBuffer_hpp
#define	sw_FrameBuffer_hpp

#include "Reactor/Nucleus.hpp"
#include "Renderer/Surface.hpp"
#include "Common/Thread.hpp"

namespace sw
{
	class Surface;

	struct BlitState
	{
		int width;
		int height;
		int depth;   // Display bit depth; 32 = X8R8G8B8, 24 = R8G8B8, 16 = R5G6B5
		int stride;
		bool HDR;    // A16B16G16R16 source color buffer
		int cursorWidth;
		int cursorHeight;
	};

	class FrameBuffer
	{
	public:
		FrameBuffer(int width, int height, bool fullscreen, bool topLeftOrigin);

		virtual ~FrameBuffer();

		int getWidth() const;
		int getHeight() const;
		int getStride() const;

		virtual void flip(void *source, bool HDR) = 0;
		virtual void blit(void *source, const Rect *sourceRect, const Rect *destRect, bool HDR) = 0;

		virtual void *lock() = 0;
		virtual void unlock() = 0;

		static void setCursorImage(sw::Surface *cursor);
		static void setCursorOrigin(int x0, int y0);
		static void setCursorPosition(int x, int y);

		static Routine *copyRoutine(const BlitState &state);

	protected:
		void copy(void *source, bool HDR);
		
		int width;
		int height;
		int stride;
		int bitDepth;
		bool HDRdisplay;
		bool windowed;

		void *locked;   // Video memory back buffer

	private:
		void copyLocked();

		static void threadFunction(void *parameters);

		void *target;   // Render target buffer

		void (*blitFunction)(void *dst, void *src);
		Routine *blitRoutine;
		BlitState blitState;

		static void blend(const BlitState &state, const Pointer<Byte> &d, const Pointer<Byte> &s, const Pointer<Byte> &c);
		static void initializeLogo();

		static Surface *logo;
		static unsigned int *logoImage;

		static void *cursor;
		static int cursorWidth;
		static int cursorHeight;
		static int cursorHotspotX;
		static int cursorHotspotY;
		static int cursorPositionX;
		static int cursorPositionY;
		static int cursorX;
		static int cursorY;

		Thread *blitThread;
		Event syncEvent;
		Event blitEvent;
		volatile bool terminate;

		static bool topLeftOrigin;
	};

	class FrameBufferWin;
}

extern "C"
{
	#if defined(_WIN32)
	sw::FrameBuffer *createFrameBuffer(HWND windowHandle, int width, int height);
	sw::FrameBufferWin *createFrameBufferWin(HWND windowHandle, int width, int height, bool fullscreen, bool topLeftOrigin);
	#else
	sw::FrameBuffer *createFrameBuffer(unsigned long window, int width, int height);
	#endif
}

#endif	 //	sw_FrameBuffer_hpp
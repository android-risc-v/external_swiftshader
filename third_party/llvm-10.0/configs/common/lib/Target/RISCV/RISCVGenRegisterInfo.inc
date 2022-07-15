/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass RISCVMCRegisterClasses[];

namespace RISCV {
enum {
  NoRegister,
  VL = 1,
  VTYPE = 2,
  V0 = 3,
  V1 = 4,
  V2 = 5,
  V3 = 6,
  V4 = 7,
  V5 = 8,
  V6 = 9,
  V7 = 10,
  V8 = 11,
  V9 = 12,
  V10 = 13,
  V11 = 14,
  V12 = 15,
  V13 = 16,
  V14 = 17,
  V15 = 18,
  V16 = 19,
  V17 = 20,
  V18 = 21,
  V19 = 22,
  V20 = 23,
  V21 = 24,
  V22 = 25,
  V23 = 26,
  V24 = 27,
  V25 = 28,
  V26 = 29,
  V27 = 30,
  V28 = 31,
  V29 = 32,
  V30 = 33,
  V31 = 34,
  X0 = 35,
  X1 = 36,
  X2 = 37,
  X3 = 38,
  X4 = 39,
  X5 = 40,
  X6 = 41,
  X7 = 42,
  X8 = 43,
  X9 = 44,
  X10 = 45,
  X11 = 46,
  X12 = 47,
  X13 = 48,
  X14 = 49,
  X15 = 50,
  X16 = 51,
  X17 = 52,
  X18 = 53,
  X19 = 54,
  X20 = 55,
  X21 = 56,
  X22 = 57,
  X23 = 58,
  X24 = 59,
  X25 = 60,
  X26 = 61,
  X27 = 62,
  X28 = 63,
  X29 = 64,
  X30 = 65,
  X31 = 66,
  F0_D = 67,
  F1_D = 68,
  F2_D = 69,
  F3_D = 70,
  F4_D = 71,
  F5_D = 72,
  F6_D = 73,
  F7_D = 74,
  F8_D = 75,
  F9_D = 76,
  F10_D = 77,
  F11_D = 78,
  F12_D = 79,
  F13_D = 80,
  F14_D = 81,
  F15_D = 82,
  F16_D = 83,
  F17_D = 84,
  F18_D = 85,
  F19_D = 86,
  F20_D = 87,
  F21_D = 88,
  F22_D = 89,
  F23_D = 90,
  F24_D = 91,
  F25_D = 92,
  F26_D = 93,
  F27_D = 94,
  F28_D = 95,
  F29_D = 96,
  F30_D = 97,
  F31_D = 98,
  F0_F = 99,
  F1_F = 100,
  F2_F = 101,
  F3_F = 102,
  F4_F = 103,
  F5_F = 104,
  F6_F = 105,
  F7_F = 106,
  F8_F = 107,
  F9_F = 108,
  F10_F = 109,
  F11_F = 110,
  F12_F = 111,
  F13_F = 112,
  F14_F = 113,
  F15_F = 114,
  F16_F = 115,
  F17_F = 116,
  F18_F = 117,
  F19_F = 118,
  F20_F = 119,
  F21_F = 120,
  F22_F = 121,
  F23_F = 122,
  F24_F = 123,
  F25_F = 124,
  F26_F = 125,
  F27_F = 126,
  F28_F = 127,
  F29_F = 128,
  F30_F = 129,
  F31_F = 130,
  V0M2 = 131,
  V0M4 = 132,
  V0M8 = 133,
  V2M2 = 134,
  V4M2 = 135,
  V4M4 = 136,
  V6M2 = 137,
  V8M2 = 138,
  V8M4 = 139,
  V8M8 = 140,
  V10M2 = 141,
  V12M2 = 142,
  V12M4 = 143,
  V14M2 = 144,
  V16M2 = 145,
  V16M4 = 146,
  V16M8 = 147,
  V18M2 = 148,
  V20M2 = 149,
  V20M4 = 150,
  V22M2 = 151,
  V24M2 = 152,
  V24M4 = 153,
  V24M8 = 154,
  V26M2 = 155,
  V28M2 = 156,
  V28M4 = 157,
  V30M2 = 158,
  NUM_TARGET_REGS 	// 159
};
} // end namespace RISCV

// Register classes

namespace RISCV {
enum {
  FPR32RegClassID = 0,
  GPRRegClassID = 1,
  GPRNoX0RegClassID = 2,
  GPRNoX0X2RegClassID = 3,
  GPRTCRegClassID = 4,
  FPR32CRegClassID = 5,
  GPRCRegClassID = 6,
  GPRC_and_GPRTCRegClassID = 7,
  GPRX0RegClassID = 8,
  SPRegClassID = 9,
  FPR64RegClassID = 10,
  VMRegClassID = 11,
  VRRegClassID = 12,
  FPR64CRegClassID = 13,
  VMV0RegClassID = 14,
  VRM2RegClassID = 15,
  VRM2_with_sub_vrm2_in_VMV0RegClassID = 16,
  VRM4RegClassID = 17,
  VRM4_with_sub_vrm2_in_VMV0RegClassID = 18,
  VRM8RegClassID = 19,
  VRM8_with_sub_vrm2_in_VMV0RegClassID = 20,

  };
} // end namespace RISCV


// Register alternate name indices

namespace RISCV {
enum {
  ABIRegAltName,	// 0
  NoRegAltName,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};
} // end namespace RISCV


// Subregister indices

namespace RISCV {
enum : uint16_t {
  NoSubRegister,
  sub_32,	// 1
  sub_vrm2,	// 2
  sub_vrm2_hi,	// 3
  sub_vrm4,	// 4
  sub_vrm4_hi,	// 5
  sub_vrm8,	// 6
  sub_vrm8_hi,	// 7
  sub_vrm4_hi_then_sub_vrm2,	// 8
  sub_vrm4_hi_then_sub_vrm2_hi,	// 9
  sub_vrm8_hi_then_sub_vrm2,	// 10
  sub_vrm8_hi_then_sub_vrm2_hi,	// 11
  sub_vrm8_hi_then_sub_vrm4,	// 12
  sub_vrm8_hi_then_sub_vrm4_hi,	// 13
  sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2,	// 14
  sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi,	// 15
  NUM_TARGET_SUBREGS
};
} // end namespace RISCV

// Register pressure sets enum.
namespace RISCV {
enum RegisterPressureSets {
  GPRX0 = 0,
  SP = 1,
  VMV0 = 2,
  FPR32C = 3,
  GPRC = 4,
  VRM8_with_sub_vrm2_in_VMV0 = 5,
  GPRTC = 6,
  FPR32 = 7,
  GPR = 8,
  VM = 9,
};
} // end namespace RISCV

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg RISCVRegDiffLists[] = {
  /* 0 */ 2, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 9 */ 10, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 18 */ 18, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 27 */ 26, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 36 */ 2, 1, 1, 1, 0,
  /* 41 */ 6, 1, 1, 1, 0,
  /* 46 */ 10, 1, 1, 1, 0,
  /* 51 */ 14, 1, 1, 1, 0,
  /* 56 */ 18, 1, 1, 1, 0,
  /* 61 */ 22, 1, 1, 1, 0,
  /* 66 */ 26, 1, 1, 1, 0,
  /* 71 */ 30, 1, 1, 1, 0,
  /* 76 */ 124, 1, 1, 0,
  /* 80 */ 125, 1, 1, 0,
  /* 84 */ 126, 1, 1, 0,
  /* 88 */ 127, 1, 1, 0,
  /* 92 */ 128, 1, 1, 0,
  /* 96 */ 2, 1, 0,
  /* 99 */ 32, 1, 0,
  /* 102 */ 65254, 1, 0,
  /* 105 */ 65258, 1, 0,
  /* 108 */ 65260, 1, 0,
  /* 111 */ 65264, 1, 0,
  /* 114 */ 65266, 1, 0,
  /* 117 */ 65270, 1, 0,
  /* 120 */ 65272, 1, 0,
  /* 123 */ 65535, 65408, 1, 130, 65407, 1, 0,
  /* 130 */ 65535, 65535, 65408, 1, 130, 65407, 1, 130, 65535, 65408, 1, 129, 65408, 1, 0,
  /* 145 */ 65535, 65409, 1, 129, 65408, 1, 0,
  /* 152 */ 65535, 65535, 65409, 1, 129, 65408, 1, 129, 65535, 65409, 1, 128, 65409, 1, 0,
  /* 167 */ 65535, 65410, 1, 128, 65409, 1, 0,
  /* 174 */ 65535, 65535, 65410, 1, 128, 65409, 1, 128, 65535, 65410, 1, 127, 65410, 1, 0,
  /* 189 */ 65535, 65411, 1, 127, 65410, 1, 0,
  /* 196 */ 65535, 65535, 65411, 1, 127, 65410, 1, 127, 65535, 65411, 1, 126, 65411, 1, 0,
  /* 211 */ 125, 65534, 1, 0,
  /* 215 */ 126, 65534, 1, 0,
  /* 219 */ 127, 65534, 1, 0,
  /* 223 */ 128, 65534, 1, 0,
  /* 227 */ 129, 65534, 1, 0,
  /* 231 */ 32, 0,
  /* 233 */ 65503, 0,
  /* 235 */ 65504, 0,
  /* 237 */ 124, 1, 65533, 0,
  /* 241 */ 125, 1, 65533, 0,
  /* 245 */ 126, 1, 65533, 0,
  /* 249 */ 127, 1, 65533, 0,
  /* 253 */ 128, 1, 65533, 0,
  /* 257 */ 124, 65535, 65533, 0,
  /* 261 */ 125, 65535, 65533, 0,
  /* 265 */ 126, 65535, 65533, 0,
  /* 269 */ 127, 65535, 65533, 0,
  /* 273 */ 128, 65535, 65533, 0,
  /* 277 */ 65535, 0,
};

extern const LaneBitmask RISCVLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 4 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000004), LaneBitmask::getAll(),
  /* 7 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000004), LaneBitmask(0x0000000000000008), LaneBitmask(0x0000000000000010), LaneBitmask::getAll(),
  /* 12 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000004), LaneBitmask(0x0000000000000008), LaneBitmask(0x0000000000000010), LaneBitmask(0x0000000000000020), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000100), LaneBitmask::getAll(),
};

extern const uint16_t RISCVSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 3, 0,
  /* 5 */ 4, 2, 3, 5, 8, 9, 0,
  /* 12 */ 6, 4, 2, 3, 5, 8, 9, 7, 12, 10, 11, 13, 14, 15, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits RISCVSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
  { 65535, 64 },	// sub_vrm2
  { 65535, 64 },	// sub_vrm2_hi
  { 65535, 128 },	// sub_vrm4
  { 65535, 128 },	// sub_vrm4_hi
  { 65535, 256 },	// sub_vrm8
  { 65535, 256 },	// sub_vrm8_hi
  { 65535, 65535 },	// sub_vrm4_hi_then_sub_vrm2
  { 65535, 65535 },	// sub_vrm4_hi_then_sub_vrm2_hi
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm2
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm2_hi
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm4
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm4_hi
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
  { 65535, 65535 },	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RISCVRegStrings[] = {
  /* 0 */ "V10\0"
  /* 4 */ "X10\0"
  /* 8 */ "V20\0"
  /* 12 */ "X20\0"
  /* 16 */ "V30\0"
  /* 20 */ "X30\0"
  /* 24 */ "V0\0"
  /* 27 */ "X0\0"
  /* 30 */ "V11\0"
  /* 34 */ "X11\0"
  /* 38 */ "V21\0"
  /* 42 */ "X21\0"
  /* 46 */ "V31\0"
  /* 50 */ "X31\0"
  /* 54 */ "V1\0"
  /* 57 */ "X1\0"
  /* 60 */ "V12\0"
  /* 64 */ "X12\0"
  /* 68 */ "V22\0"
  /* 72 */ "X22\0"
  /* 76 */ "V10M2\0"
  /* 82 */ "V20M2\0"
  /* 88 */ "V30M2\0"
  /* 94 */ "V0M2\0"
  /* 99 */ "V12M2\0"
  /* 105 */ "V22M2\0"
  /* 111 */ "V2M2\0"
  /* 116 */ "V14M2\0"
  /* 122 */ "V24M2\0"
  /* 128 */ "V4M2\0"
  /* 133 */ "V16M2\0"
  /* 139 */ "V26M2\0"
  /* 145 */ "V6M2\0"
  /* 150 */ "V18M2\0"
  /* 156 */ "V28M2\0"
  /* 162 */ "V8M2\0"
  /* 167 */ "V2\0"
  /* 170 */ "X2\0"
  /* 173 */ "V13\0"
  /* 177 */ "X13\0"
  /* 181 */ "V23\0"
  /* 185 */ "X23\0"
  /* 189 */ "V3\0"
  /* 192 */ "X3\0"
  /* 195 */ "V14\0"
  /* 199 */ "X14\0"
  /* 203 */ "V24\0"
  /* 207 */ "X24\0"
  /* 211 */ "V20M4\0"
  /* 217 */ "V0M4\0"
  /* 222 */ "V12M4\0"
  /* 228 */ "V24M4\0"
  /* 234 */ "V4M4\0"
  /* 239 */ "V16M4\0"
  /* 245 */ "V28M4\0"
  /* 251 */ "V8M4\0"
  /* 256 */ "V4\0"
  /* 259 */ "X4\0"
  /* 262 */ "V15\0"
  /* 266 */ "X15\0"
  /* 270 */ "V25\0"
  /* 274 */ "X25\0"
  /* 278 */ "V5\0"
  /* 281 */ "X5\0"
  /* 284 */ "V16\0"
  /* 288 */ "X16\0"
  /* 292 */ "V26\0"
  /* 296 */ "X26\0"
  /* 300 */ "V6\0"
  /* 303 */ "X6\0"
  /* 306 */ "V17\0"
  /* 310 */ "X17\0"
  /* 314 */ "V27\0"
  /* 318 */ "X27\0"
  /* 322 */ "V7\0"
  /* 325 */ "X7\0"
  /* 328 */ "V18\0"
  /* 332 */ "X18\0"
  /* 336 */ "V28\0"
  /* 340 */ "X28\0"
  /* 344 */ "V0M8\0"
  /* 349 */ "V24M8\0"
  /* 355 */ "V16M8\0"
  /* 361 */ "V8M8\0"
  /* 366 */ "V8\0"
  /* 369 */ "X8\0"
  /* 372 */ "V19\0"
  /* 376 */ "X19\0"
  /* 380 */ "V29\0"
  /* 384 */ "X29\0"
  /* 388 */ "V9\0"
  /* 391 */ "X9\0"
  /* 394 */ "F10_D\0"
  /* 400 */ "F20_D\0"
  /* 406 */ "F30_D\0"
  /* 412 */ "F0_D\0"
  /* 417 */ "F11_D\0"
  /* 423 */ "F21_D\0"
  /* 429 */ "F31_D\0"
  /* 435 */ "F1_D\0"
  /* 440 */ "F12_D\0"
  /* 446 */ "F22_D\0"
  /* 452 */ "F2_D\0"
  /* 457 */ "F13_D\0"
  /* 463 */ "F23_D\0"
  /* 469 */ "F3_D\0"
  /* 474 */ "F14_D\0"
  /* 480 */ "F24_D\0"
  /* 486 */ "F4_D\0"
  /* 491 */ "F15_D\0"
  /* 497 */ "F25_D\0"
  /* 503 */ "F5_D\0"
  /* 508 */ "F16_D\0"
  /* 514 */ "F26_D\0"
  /* 520 */ "F6_D\0"
  /* 525 */ "F17_D\0"
  /* 531 */ "F27_D\0"
  /* 537 */ "F7_D\0"
  /* 542 */ "F18_D\0"
  /* 548 */ "F28_D\0"
  /* 554 */ "F8_D\0"
  /* 559 */ "F19_D\0"
  /* 565 */ "F29_D\0"
  /* 571 */ "F9_D\0"
  /* 576 */ "VTYPE\0"
  /* 582 */ "F10_F\0"
  /* 588 */ "F20_F\0"
  /* 594 */ "F30_F\0"
  /* 600 */ "F0_F\0"
  /* 605 */ "F11_F\0"
  /* 611 */ "F21_F\0"
  /* 617 */ "F31_F\0"
  /* 623 */ "F1_F\0"
  /* 628 */ "F12_F\0"
  /* 634 */ "F22_F\0"
  /* 640 */ "F2_F\0"
  /* 645 */ "F13_F\0"
  /* 651 */ "F23_F\0"
  /* 657 */ "F3_F\0"
  /* 662 */ "F14_F\0"
  /* 668 */ "F24_F\0"
  /* 674 */ "F4_F\0"
  /* 679 */ "F15_F\0"
  /* 685 */ "F25_F\0"
  /* 691 */ "F5_F\0"
  /* 696 */ "F16_F\0"
  /* 702 */ "F26_F\0"
  /* 708 */ "F6_F\0"
  /* 713 */ "F17_F\0"
  /* 719 */ "F27_F\0"
  /* 725 */ "F7_F\0"
  /* 730 */ "F18_F\0"
  /* 736 */ "F28_F\0"
  /* 742 */ "F8_F\0"
  /* 747 */ "F19_F\0"
  /* 753 */ "F29_F\0"
  /* 759 */ "F9_F\0"
  /* 764 */ "VL\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc RISCVRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 764, 8, 8, 1, 4433, 0 },
  { 576, 8, 8, 1, 4433, 0 },
  { 24, 8, 92, 1, 4433, 0 },
  { 54, 8, 88, 1, 4433, 0 },
  { 167, 8, 227, 1, 4433, 0 },
  { 189, 8, 223, 1, 4433, 0 },
  { 256, 8, 253, 1, 4433, 0 },
  { 278, 8, 249, 1, 4433, 0 },
  { 300, 8, 273, 1, 4433, 0 },
  { 322, 8, 269, 1, 4433, 0 },
  { 366, 8, 88, 1, 4433, 0 },
  { 388, 8, 84, 1, 4433, 0 },
  { 0, 8, 223, 1, 4433, 0 },
  { 30, 8, 219, 1, 4433, 0 },
  { 60, 8, 249, 1, 4433, 0 },
  { 173, 8, 245, 1, 4433, 0 },
  { 195, 8, 269, 1, 4433, 0 },
  { 262, 8, 265, 1, 4433, 0 },
  { 284, 8, 84, 1, 4433, 0 },
  { 306, 8, 80, 1, 4433, 0 },
  { 328, 8, 219, 1, 4433, 0 },
  { 372, 8, 215, 1, 4433, 0 },
  { 8, 8, 245, 1, 4433, 0 },
  { 38, 8, 241, 1, 4433, 0 },
  { 68, 8, 265, 1, 4433, 0 },
  { 181, 8, 261, 1, 4433, 0 },
  { 203, 8, 80, 1, 4433, 0 },
  { 270, 8, 76, 1, 4433, 0 },
  { 292, 8, 215, 1, 4433, 0 },
  { 314, 8, 211, 1, 4433, 0 },
  { 336, 8, 241, 1, 4433, 0 },
  { 380, 8, 237, 1, 4433, 0 },
  { 16, 8, 261, 1, 4433, 0 },
  { 46, 8, 257, 1, 4433, 0 },
  { 27, 8, 8, 1, 4433, 0 },
  { 57, 8, 8, 1, 4433, 0 },
  { 170, 8, 8, 1, 4433, 0 },
  { 192, 8, 8, 1, 4433, 0 },
  { 259, 8, 8, 1, 4433, 0 },
  { 281, 8, 8, 1, 4433, 0 },
  { 303, 8, 8, 1, 4433, 0 },
  { 325, 8, 8, 1, 4433, 0 },
  { 369, 8, 8, 1, 4433, 0 },
  { 391, 8, 8, 1, 4433, 0 },
  { 4, 8, 8, 1, 4433, 0 },
  { 34, 8, 8, 1, 4433, 0 },
  { 64, 8, 8, 1, 4433, 0 },
  { 177, 8, 8, 1, 4433, 0 },
  { 199, 8, 8, 1, 4433, 0 },
  { 266, 8, 8, 1, 4433, 0 },
  { 288, 8, 8, 1, 4433, 0 },
  { 310, 8, 8, 1, 4433, 0 },
  { 332, 8, 8, 1, 4433, 0 },
  { 376, 8, 8, 1, 4433, 0 },
  { 12, 8, 8, 1, 4433, 0 },
  { 42, 8, 8, 1, 4433, 0 },
  { 72, 8, 8, 1, 4433, 0 },
  { 185, 8, 8, 1, 4433, 0 },
  { 207, 8, 8, 1, 4433, 0 },
  { 274, 8, 8, 1, 4433, 0 },
  { 296, 8, 8, 1, 4433, 0 },
  { 318, 8, 8, 1, 4433, 0 },
  { 340, 8, 8, 1, 4433, 0 },
  { 384, 8, 8, 1, 4433, 0 },
  { 20, 8, 8, 1, 4433, 0 },
  { 50, 8, 8, 1, 4433, 0 },
  { 412, 231, 8, 0, 4433, 2 },
  { 435, 231, 8, 0, 4433, 2 },
  { 452, 231, 8, 0, 4433, 2 },
  { 469, 231, 8, 0, 4433, 2 },
  { 486, 231, 8, 0, 4433, 2 },
  { 503, 231, 8, 0, 4433, 2 },
  { 520, 231, 8, 0, 4433, 2 },
  { 537, 231, 8, 0, 4433, 2 },
  { 554, 231, 8, 0, 4433, 2 },
  { 571, 231, 8, 0, 4433, 2 },
  { 394, 231, 8, 0, 4433, 2 },
  { 417, 231, 8, 0, 4433, 2 },
  { 440, 231, 8, 0, 4433, 2 },
  { 457, 231, 8, 0, 4433, 2 },
  { 474, 231, 8, 0, 4433, 2 },
  { 491, 231, 8, 0, 4433, 2 },
  { 508, 231, 8, 0, 4433, 2 },
  { 525, 231, 8, 0, 4433, 2 },
  { 542, 231, 8, 0, 4433, 2 },
  { 559, 231, 8, 0, 4433, 2 },
  { 400, 231, 8, 0, 4433, 2 },
  { 423, 231, 8, 0, 4433, 2 },
  { 446, 231, 8, 0, 4433, 2 },
  { 463, 231, 8, 0, 4433, 2 },
  { 480, 231, 8, 0, 4433, 2 },
  { 497, 231, 8, 0, 4433, 2 },
  { 514, 231, 8, 0, 4433, 2 },
  { 531, 231, 8, 0, 4433, 2 },
  { 548, 231, 8, 0, 4433, 2 },
  { 565, 231, 8, 0, 4433, 2 },
  { 406, 231, 8, 0, 4433, 2 },
  { 429, 231, 8, 0, 4433, 2 },
  { 600, 8, 235, 1, 3729, 0 },
  { 623, 8, 235, 1, 3729, 0 },
  { 640, 8, 235, 1, 3729, 0 },
  { 657, 8, 235, 1, 3729, 0 },
  { 674, 8, 235, 1, 3729, 0 },
  { 691, 8, 235, 1, 3729, 0 },
  { 708, 8, 235, 1, 3729, 0 },
  { 725, 8, 235, 1, 3729, 0 },
  { 742, 8, 235, 1, 3729, 0 },
  { 759, 8, 235, 1, 3729, 0 },
  { 582, 8, 235, 1, 3729, 0 },
  { 605, 8, 235, 1, 3729, 0 },
  { 628, 8, 235, 1, 3729, 0 },
  { 645, 8, 235, 1, 3729, 0 },
  { 662, 8, 235, 1, 3729, 0 },
  { 679, 8, 235, 1, 3729, 0 },
  { 696, 8, 235, 1, 3729, 0 },
  { 713, 8, 235, 1, 3729, 0 },
  { 730, 8, 235, 1, 3729, 0 },
  { 747, 8, 235, 1, 3729, 0 },
  { 588, 8, 235, 1, 3729, 0 },
  { 611, 8, 235, 1, 3729, 0 },
  { 634, 8, 235, 1, 3729, 0 },
  { 651, 8, 235, 1, 3729, 0 },
  { 668, 8, 235, 1, 3729, 0 },
  { 685, 8, 235, 1, 3729, 0 },
  { 702, 8, 235, 1, 3729, 0 },
  { 719, 8, 235, 1, 3729, 0 },
  { 736, 8, 235, 1, 3729, 0 },
  { 753, 8, 235, 1, 3729, 0 },
  { 594, 8, 235, 1, 3729, 0 },
  { 617, 8, 235, 1, 3729, 0 },
  { 94, 142, 6, 2, 1536, 4 },
  { 217, 123, 7, 5, 576, 7 },
  { 344, 130, 8, 12, 0, 12 },
  { 111, 127, 212, 2, 1922, 4 },
  { 128, 142, 238, 2, 1922, 4 },
  { 234, 138, 239, 5, 656, 7 },
  { 145, 142, 258, 2, 1874, 4 },
  { 162, 164, 6, 2, 1874, 4 },
  { 251, 145, 7, 5, 736, 7 },
  { 361, 152, 8, 12, 144, 12 },
  { 76, 142, 212, 2, 1826, 4 },
  { 99, 164, 238, 2, 1826, 4 },
  { 222, 160, 239, 5, 816, 7 },
  { 116, 164, 258, 2, 1778, 4 },
  { 133, 186, 6, 2, 1778, 4 },
  { 239, 167, 7, 5, 896, 7 },
  { 355, 174, 8, 12, 288, 12 },
  { 150, 164, 212, 2, 1730, 4 },
  { 82, 186, 238, 2, 1730, 4 },
  { 211, 182, 239, 5, 976, 7 },
  { 105, 186, 258, 2, 1682, 4 },
  { 122, 208, 6, 2, 1682, 4 },
  { 228, 189, 7, 5, 1056, 7 },
  { 349, 196, 8, 12, 432, 12 },
  { 139, 186, 212, 2, 1634, 4 },
  { 156, 208, 238, 2, 1634, 4 },
  { 245, 204, 239, 5, 1136, 7 },
  { 88, 208, 258, 2, 1584, 4 },
};

extern const MCPhysReg RISCVRegUnitRoots[][2] = {
  { RISCV::VL },
  { RISCV::VTYPE },
  { RISCV::V0 },
  { RISCV::V1 },
  { RISCV::V2 },
  { RISCV::V3 },
  { RISCV::V4 },
  { RISCV::V5 },
  { RISCV::V6 },
  { RISCV::V7 },
  { RISCV::V8 },
  { RISCV::V9 },
  { RISCV::V10 },
  { RISCV::V11 },
  { RISCV::V12 },
  { RISCV::V13 },
  { RISCV::V14 },
  { RISCV::V15 },
  { RISCV::V16 },
  { RISCV::V17 },
  { RISCV::V18 },
  { RISCV::V19 },
  { RISCV::V20 },
  { RISCV::V21 },
  { RISCV::V22 },
  { RISCV::V23 },
  { RISCV::V24 },
  { RISCV::V25 },
  { RISCV::V26 },
  { RISCV::V27 },
  { RISCV::V28 },
  { RISCV::V29 },
  { RISCV::V30 },
  { RISCV::V31 },
  { RISCV::X0 },
  { RISCV::X1 },
  { RISCV::X2 },
  { RISCV::X3 },
  { RISCV::X4 },
  { RISCV::X5 },
  { RISCV::X6 },
  { RISCV::X7 },
  { RISCV::X8 },
  { RISCV::X9 },
  { RISCV::X10 },
  { RISCV::X11 },
  { RISCV::X12 },
  { RISCV::X13 },
  { RISCV::X14 },
  { RISCV::X15 },
  { RISCV::X16 },
  { RISCV::X17 },
  { RISCV::X18 },
  { RISCV::X19 },
  { RISCV::X20 },
  { RISCV::X21 },
  { RISCV::X22 },
  { RISCV::X23 },
  { RISCV::X24 },
  { RISCV::X25 },
  { RISCV::X26 },
  { RISCV::X27 },
  { RISCV::X28 },
  { RISCV::X29 },
  { RISCV::X30 },
  { RISCV::X31 },
  { RISCV::F0_F },
  { RISCV::F1_F },
  { RISCV::F2_F },
  { RISCV::F3_F },
  { RISCV::F4_F },
  { RISCV::F5_F },
  { RISCV::F6_F },
  { RISCV::F7_F },
  { RISCV::F8_F },
  { RISCV::F9_F },
  { RISCV::F10_F },
  { RISCV::F11_F },
  { RISCV::F12_F },
  { RISCV::F13_F },
  { RISCV::F14_F },
  { RISCV::F15_F },
  { RISCV::F16_F },
  { RISCV::F17_F },
  { RISCV::F18_F },
  { RISCV::F19_F },
  { RISCV::F20_F },
  { RISCV::F21_F },
  { RISCV::F22_F },
  { RISCV::F23_F },
  { RISCV::F24_F },
  { RISCV::F25_F },
  { RISCV::F26_F },
  { RISCV::F27_F },
  { RISCV::F28_F },
  { RISCV::F29_F },
  { RISCV::F30_F },
  { RISCV::F31_F },
};

namespace {     // Register classes...
  // FPR32 Register Class...
  const MCPhysReg FPR32[] = {
    RISCV::F0_F, RISCV::F1_F, RISCV::F2_F, RISCV::F3_F, RISCV::F4_F, RISCV::F5_F, RISCV::F6_F, RISCV::F7_F, RISCV::F10_F, RISCV::F11_F, RISCV::F12_F, RISCV::F13_F, RISCV::F14_F, RISCV::F15_F, RISCV::F16_F, RISCV::F17_F, RISCV::F28_F, RISCV::F29_F, RISCV::F30_F, RISCV::F31_F, RISCV::F8_F, RISCV::F9_F, RISCV::F18_F, RISCV::F19_F, RISCV::F20_F, RISCV::F21_F, RISCV::F22_F, RISCV::F23_F, RISCV::F24_F, RISCV::F25_F, RISCV::F26_F, RISCV::F27_F, 
  };

  // FPR32 Bit set.
  const uint8_t FPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPR Register Class...
  const MCPhysReg GPR[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X0, RISCV::X1, RISCV::X2, RISCV::X3, RISCV::X4, 
  };

  // GPR Bit set.
  const uint8_t GPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPRNoX0 Register Class...
  const MCPhysReg GPRNoX0[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X1, RISCV::X2, RISCV::X3, RISCV::X4, 
  };

  // GPRNoX0 Bit set.
  const uint8_t GPRNoX0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPRNoX0X2 Register Class...
  const MCPhysReg GPRNoX0X2[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X1, RISCV::X3, RISCV::X4, 
  };

  // GPRNoX0X2 Bit set.
  const uint8_t GPRNoX0X2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xd0, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPRTC Register Class...
  const MCPhysReg GPRTC[] = {
    RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, 
  };

  // GPRTC Bit set.
  const uint8_t GPRTCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x1f, 0x80, 0x07, 
  };

  // FPR32C Register Class...
  const MCPhysReg FPR32C[] = {
    RISCV::F10_F, RISCV::F11_F, RISCV::F12_F, RISCV::F13_F, RISCV::F14_F, RISCV::F15_F, RISCV::F8_F, RISCV::F9_F, 
  };

  // FPR32C Bit set.
  const uint8_t FPR32CBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // GPRC Register Class...
  const MCPhysReg GPRC[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X8, RISCV::X9, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // GPRC_and_GPRTC Register Class...
  const MCPhysReg GPRC_and_GPRTC[] = {
    RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, 
  };

  // GPRC_and_GPRTC Bit set.
  const uint8_t GPRC_and_GPRTCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x07, 
  };

  // GPRX0 Register Class...
  const MCPhysReg GPRX0[] = {
    RISCV::X0, 
  };

  // GPRX0 Bit set.
  const uint8_t GPRX0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // SP Register Class...
  const MCPhysReg SP[] = {
    RISCV::X2, 
  };

  // SP Bit set.
  const uint8_t SPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // FPR64 Register Class...
  const MCPhysReg FPR64[] = {
    RISCV::F0_D, RISCV::F1_D, RISCV::F2_D, RISCV::F3_D, RISCV::F4_D, RISCV::F5_D, RISCV::F6_D, RISCV::F7_D, RISCV::F10_D, RISCV::F11_D, RISCV::F12_D, RISCV::F13_D, RISCV::F14_D, RISCV::F15_D, RISCV::F16_D, RISCV::F17_D, RISCV::F28_D, RISCV::F29_D, RISCV::F30_D, RISCV::F31_D, RISCV::F8_D, RISCV::F9_D, RISCV::F18_D, RISCV::F19_D, RISCV::F20_D, RISCV::F21_D, RISCV::F22_D, RISCV::F23_D, RISCV::F24_D, RISCV::F25_D, RISCV::F26_D, RISCV::F27_D, 
  };

  // FPR64 Bit set.
  const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // VM Register Class...
  const MCPhysReg VM[] = {
    RISCV::V25, RISCV::V26, RISCV::V27, RISCV::V28, RISCV::V29, RISCV::V30, RISCV::V31, RISCV::V8, RISCV::V9, RISCV::V10, RISCV::V11, RISCV::V12, RISCV::V13, RISCV::V14, RISCV::V15, RISCV::V16, RISCV::V17, RISCV::V18, RISCV::V19, RISCV::V20, RISCV::V21, RISCV::V22, RISCV::V23, RISCV::V24, RISCV::V0, RISCV::V1, RISCV::V2, RISCV::V3, RISCV::V4, RISCV::V5, RISCV::V6, RISCV::V7, 
  };

  // VM Bit set.
  const uint8_t VMBits[] = {
    0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // VR Register Class...
  const MCPhysReg VR[] = {
    RISCV::V25, RISCV::V26, RISCV::V27, RISCV::V28, RISCV::V29, RISCV::V30, RISCV::V31, RISCV::V8, RISCV::V9, RISCV::V10, RISCV::V11, RISCV::V12, RISCV::V13, RISCV::V14, RISCV::V15, RISCV::V16, RISCV::V17, RISCV::V18, RISCV::V19, RISCV::V20, RISCV::V21, RISCV::V22, RISCV::V23, RISCV::V24, RISCV::V0, RISCV::V1, RISCV::V2, RISCV::V3, RISCV::V4, RISCV::V5, RISCV::V6, RISCV::V7, 
  };

  // VR Bit set.
  const uint8_t VRBits[] = {
    0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // FPR64C Register Class...
  const MCPhysReg FPR64C[] = {
    RISCV::F10_D, RISCV::F11_D, RISCV::F12_D, RISCV::F13_D, RISCV::F14_D, RISCV::F15_D, RISCV::F8_D, RISCV::F9_D, 
  };

  // FPR64C Bit set.
  const uint8_t FPR64CBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // VMV0 Register Class...
  const MCPhysReg VMV0[] = {
    RISCV::V0, 
  };

  // VMV0 Bit set.
  const uint8_t VMV0Bits[] = {
    0x08, 
  };

  // VRM2 Register Class...
  const MCPhysReg VRM2[] = {
    RISCV::V26M2, RISCV::V28M2, RISCV::V30M2, RISCV::V8M2, RISCV::V10M2, RISCV::V12M2, RISCV::V14M2, RISCV::V16M2, RISCV::V18M2, RISCV::V20M2, RISCV::V22M2, RISCV::V24M2, RISCV::V0M2, RISCV::V2M2, RISCV::V4M2, RISCV::V6M2, 
  };

  // VRM2 Bit set.
  const uint8_t VRM2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x66, 0xb3, 0x59, 
  };

  // VRM2_with_sub_vrm2_in_VMV0 Register Class...
  const MCPhysReg VRM2_with_sub_vrm2_in_VMV0[] = {
    RISCV::V0M2, 
  };

  // VRM2_with_sub_vrm2_in_VMV0 Bit set.
  const uint8_t VRM2_with_sub_vrm2_in_VMV0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // VRM4 Register Class...
  const MCPhysReg VRM4[] = {
    RISCV::V28M4, RISCV::V8M4, RISCV::V12M4, RISCV::V16M4, RISCV::V20M4, RISCV::V24M4, RISCV::V0M4, RISCV::V4M4, 
  };

  // VRM4 Bit set.
  const uint8_t VRM4Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x89, 0x44, 0x22, 
  };

  // VRM4_with_sub_vrm2_in_VMV0 Register Class...
  const MCPhysReg VRM4_with_sub_vrm2_in_VMV0[] = {
    RISCV::V0M4, 
  };

  // VRM4_with_sub_vrm2_in_VMV0 Bit set.
  const uint8_t VRM4_with_sub_vrm2_in_VMV0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // VRM8 Register Class...
  const MCPhysReg VRM8[] = {
    RISCV::V8M8, RISCV::V16M8, RISCV::V24M8, RISCV::V0M8, 
  };

  // VRM8 Bit set.
  const uint8_t VRM8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 
  };

  // VRM8_with_sub_vrm2_in_VMV0 Register Class...
  const MCPhysReg VRM8_with_sub_vrm2_in_VMV0[] = {
    RISCV::V0M8, 
  };

  // VRM8_with_sub_vrm2_in_VMV0 Bit set.
  const uint8_t VRM8_with_sub_vrm2_in_VMV0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RISCVRegClassStrings[] = {
  /* 0 */ "VRM2_with_sub_vrm2_in_VMV0\0"
  /* 27 */ "VRM4_with_sub_vrm2_in_VMV0\0"
  /* 54 */ "VRM8_with_sub_vrm2_in_VMV0\0"
  /* 81 */ "GPRX0\0"
  /* 87 */ "GPRNoX0\0"
  /* 95 */ "FPR32\0"
  /* 101 */ "VRM2\0"
  /* 106 */ "GPRNoX0X2\0"
  /* 116 */ "FPR64\0"
  /* 122 */ "VRM4\0"
  /* 127 */ "VRM8\0"
  /* 132 */ "FPR32C\0"
  /* 139 */ "FPR64C\0"
  /* 146 */ "GPRC\0"
  /* 151 */ "GPRC_and_GPRTC\0"
  /* 166 */ "VM\0"
  /* 169 */ "SP\0"
  /* 172 */ "GPR\0"
  /* 176 */ "VR\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass RISCVMCRegisterClasses[] = {
  { FPR32, FPR32Bits, 95, 32, sizeof(FPR32Bits), RISCV::FPR32RegClassID, 1, true },
  { GPR, GPRBits, 172, 32, sizeof(GPRBits), RISCV::GPRRegClassID, 1, true },
  { GPRNoX0, GPRNoX0Bits, 87, 31, sizeof(GPRNoX0Bits), RISCV::GPRNoX0RegClassID, 1, true },
  { GPRNoX0X2, GPRNoX0X2Bits, 106, 30, sizeof(GPRNoX0X2Bits), RISCV::GPRNoX0X2RegClassID, 1, true },
  { GPRTC, GPRTCBits, 160, 15, sizeof(GPRTCBits), RISCV::GPRTCRegClassID, 1, true },
  { FPR32C, FPR32CBits, 132, 8, sizeof(FPR32CBits), RISCV::FPR32CRegClassID, 1, true },
  { GPRC, GPRCBits, 146, 8, sizeof(GPRCBits), RISCV::GPRCRegClassID, 1, true },
  { GPRC_and_GPRTC, GPRC_and_GPRTCBits, 151, 6, sizeof(GPRC_and_GPRTCBits), RISCV::GPRC_and_GPRTCRegClassID, 1, true },
  { GPRX0, GPRX0Bits, 81, 1, sizeof(GPRX0Bits), RISCV::GPRX0RegClassID, 1, true },
  { SP, SPBits, 169, 1, sizeof(SPBits), RISCV::SPRegClassID, 1, true },
  { FPR64, FPR64Bits, 116, 32, sizeof(FPR64Bits), RISCV::FPR64RegClassID, 1, true },
  { VM, VMBits, 166, 32, sizeof(VMBits), RISCV::VMRegClassID, 1, true },
  { VR, VRBits, 176, 32, sizeof(VRBits), RISCV::VRRegClassID, 1, true },
  { FPR64C, FPR64CBits, 139, 8, sizeof(FPR64CBits), RISCV::FPR64CRegClassID, 1, true },
  { VMV0, VMV0Bits, 22, 1, sizeof(VMV0Bits), RISCV::VMV0RegClassID, 1, true },
  { VRM2, VRM2Bits, 101, 16, sizeof(VRM2Bits), RISCV::VRM2RegClassID, 1, true },
  { VRM2_with_sub_vrm2_in_VMV0, VRM2_with_sub_vrm2_in_VMV0Bits, 0, 1, sizeof(VRM2_with_sub_vrm2_in_VMV0Bits), RISCV::VRM2_with_sub_vrm2_in_VMV0RegClassID, 1, true },
  { VRM4, VRM4Bits, 122, 8, sizeof(VRM4Bits), RISCV::VRM4RegClassID, 1, true },
  { VRM4_with_sub_vrm2_in_VMV0, VRM4_with_sub_vrm2_in_VMV0Bits, 27, 1, sizeof(VRM4_with_sub_vrm2_in_VMV0Bits), RISCV::VRM4_with_sub_vrm2_in_VMV0RegClassID, 1, true },
  { VRM8, VRM8Bits, 127, 4, sizeof(VRM8Bits), RISCV::VRM8RegClassID, 1, true },
  { VRM8_with_sub_vrm2_in_VMV0, VRM8_with_sub_vrm2_in_VMV0Bits, 54, 1, sizeof(VRM8_with_sub_vrm2_in_VMV0Bits), RISCV::VRM8_with_sub_vrm2_in_VMV0RegClassID, 1, true },
};

// RISCV Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0Dwarf2L[] = {
  { 0U, RISCV::X0 },
  { 1U, RISCV::X1 },
  { 2U, RISCV::X2 },
  { 3U, RISCV::X3 },
  { 4U, RISCV::X4 },
  { 5U, RISCV::X5 },
  { 6U, RISCV::X6 },
  { 7U, RISCV::X7 },
  { 8U, RISCV::X8 },
  { 9U, RISCV::X9 },
  { 10U, RISCV::X10 },
  { 11U, RISCV::X11 },
  { 12U, RISCV::X12 },
  { 13U, RISCV::X13 },
  { 14U, RISCV::X14 },
  { 15U, RISCV::X15 },
  { 16U, RISCV::X16 },
  { 17U, RISCV::X17 },
  { 18U, RISCV::X18 },
  { 19U, RISCV::X19 },
  { 20U, RISCV::X20 },
  { 21U, RISCV::X21 },
  { 22U, RISCV::X22 },
  { 23U, RISCV::X23 },
  { 24U, RISCV::X24 },
  { 25U, RISCV::X25 },
  { 26U, RISCV::X26 },
  { 27U, RISCV::X27 },
  { 28U, RISCV::X28 },
  { 29U, RISCV::X29 },
  { 30U, RISCV::X30 },
  { 31U, RISCV::X31 },
  { 32U, RISCV::F0_F },
  { 33U, RISCV::F1_F },
  { 34U, RISCV::F2_F },
  { 35U, RISCV::F3_F },
  { 36U, RISCV::F4_F },
  { 37U, RISCV::F5_F },
  { 38U, RISCV::F6_F },
  { 39U, RISCV::F7_F },
  { 40U, RISCV::F8_F },
  { 41U, RISCV::F9_F },
  { 42U, RISCV::F10_F },
  { 43U, RISCV::F11_F },
  { 44U, RISCV::F12_F },
  { 45U, RISCV::F13_F },
  { 46U, RISCV::F14_F },
  { 47U, RISCV::F15_F },
  { 48U, RISCV::F16_F },
  { 49U, RISCV::F17_F },
  { 50U, RISCV::F18_F },
  { 51U, RISCV::F19_F },
  { 52U, RISCV::F20_F },
  { 53U, RISCV::F21_F },
  { 54U, RISCV::F22_F },
  { 55U, RISCV::F23_F },
  { 56U, RISCV::F24_F },
  { 57U, RISCV::F25_F },
  { 58U, RISCV::F26_F },
  { 59U, RISCV::F27_F },
  { 60U, RISCV::F28_F },
  { 61U, RISCV::F29_F },
  { 62U, RISCV::F30_F },
  { 63U, RISCV::F31_F },
  { 64U, RISCV::V0 },
  { 65U, RISCV::V1 },
  { 66U, RISCV::V2 },
  { 67U, RISCV::V3 },
  { 68U, RISCV::V4 },
  { 69U, RISCV::V5 },
  { 70U, RISCV::V6 },
  { 71U, RISCV::V7 },
  { 72U, RISCV::V8 },
  { 73U, RISCV::V9 },
  { 74U, RISCV::V10 },
  { 75U, RISCV::V11 },
  { 76U, RISCV::V12 },
  { 77U, RISCV::V13 },
  { 78U, RISCV::V14 },
  { 79U, RISCV::V15 },
  { 80U, RISCV::V16 },
  { 81U, RISCV::V17 },
  { 82U, RISCV::V18 },
  { 83U, RISCV::V19 },
  { 84U, RISCV::V20 },
  { 85U, RISCV::V21 },
  { 86U, RISCV::V22 },
  { 87U, RISCV::V23 },
  { 88U, RISCV::V24 },
  { 89U, RISCV::V25 },
  { 90U, RISCV::V26 },
  { 91U, RISCV::V27 },
  { 92U, RISCV::V28 },
  { 93U, RISCV::V29 },
  { 94U, RISCV::V30 },
  { 95U, RISCV::V31 },
};
extern const unsigned RISCVDwarfFlavour0Dwarf2LSize = array_lengthof(RISCVDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0Dwarf2L[] = {
  { 0U, RISCV::X0 },
  { 1U, RISCV::X1 },
  { 2U, RISCV::X2 },
  { 3U, RISCV::X3 },
  { 4U, RISCV::X4 },
  { 5U, RISCV::X5 },
  { 6U, RISCV::X6 },
  { 7U, RISCV::X7 },
  { 8U, RISCV::X8 },
  { 9U, RISCV::X9 },
  { 10U, RISCV::X10 },
  { 11U, RISCV::X11 },
  { 12U, RISCV::X12 },
  { 13U, RISCV::X13 },
  { 14U, RISCV::X14 },
  { 15U, RISCV::X15 },
  { 16U, RISCV::X16 },
  { 17U, RISCV::X17 },
  { 18U, RISCV::X18 },
  { 19U, RISCV::X19 },
  { 20U, RISCV::X20 },
  { 21U, RISCV::X21 },
  { 22U, RISCV::X22 },
  { 23U, RISCV::X23 },
  { 24U, RISCV::X24 },
  { 25U, RISCV::X25 },
  { 26U, RISCV::X26 },
  { 27U, RISCV::X27 },
  { 28U, RISCV::X28 },
  { 29U, RISCV::X29 },
  { 30U, RISCV::X30 },
  { 31U, RISCV::X31 },
  { 32U, RISCV::F0_F },
  { 33U, RISCV::F1_F },
  { 34U, RISCV::F2_F },
  { 35U, RISCV::F3_F },
  { 36U, RISCV::F4_F },
  { 37U, RISCV::F5_F },
  { 38U, RISCV::F6_F },
  { 39U, RISCV::F7_F },
  { 40U, RISCV::F8_F },
  { 41U, RISCV::F9_F },
  { 42U, RISCV::F10_F },
  { 43U, RISCV::F11_F },
  { 44U, RISCV::F12_F },
  { 45U, RISCV::F13_F },
  { 46U, RISCV::F14_F },
  { 47U, RISCV::F15_F },
  { 48U, RISCV::F16_F },
  { 49U, RISCV::F17_F },
  { 50U, RISCV::F18_F },
  { 51U, RISCV::F19_F },
  { 52U, RISCV::F20_F },
  { 53U, RISCV::F21_F },
  { 54U, RISCV::F22_F },
  { 55U, RISCV::F23_F },
  { 56U, RISCV::F24_F },
  { 57U, RISCV::F25_F },
  { 58U, RISCV::F26_F },
  { 59U, RISCV::F27_F },
  { 60U, RISCV::F28_F },
  { 61U, RISCV::F29_F },
  { 62U, RISCV::F30_F },
  { 63U, RISCV::F31_F },
  { 64U, RISCV::V0 },
  { 65U, RISCV::V1 },
  { 66U, RISCV::V2 },
  { 67U, RISCV::V3 },
  { 68U, RISCV::V4 },
  { 69U, RISCV::V5 },
  { 70U, RISCV::V6 },
  { 71U, RISCV::V7 },
  { 72U, RISCV::V8 },
  { 73U, RISCV::V9 },
  { 74U, RISCV::V10 },
  { 75U, RISCV::V11 },
  { 76U, RISCV::V12 },
  { 77U, RISCV::V13 },
  { 78U, RISCV::V14 },
  { 79U, RISCV::V15 },
  { 80U, RISCV::V16 },
  { 81U, RISCV::V17 },
  { 82U, RISCV::V18 },
  { 83U, RISCV::V19 },
  { 84U, RISCV::V20 },
  { 85U, RISCV::V21 },
  { 86U, RISCV::V22 },
  { 87U, RISCV::V23 },
  { 88U, RISCV::V24 },
  { 89U, RISCV::V25 },
  { 90U, RISCV::V26 },
  { 91U, RISCV::V27 },
  { 92U, RISCV::V28 },
  { 93U, RISCV::V29 },
  { 94U, RISCV::V30 },
  { 95U, RISCV::V31 },
};
extern const unsigned RISCVEHFlavour0Dwarf2LSize = array_lengthof(RISCVEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0L2Dwarf[] = {
  { RISCV::V0, 64U },
  { RISCV::V1, 65U },
  { RISCV::V2, 66U },
  { RISCV::V3, 67U },
  { RISCV::V4, 68U },
  { RISCV::V5, 69U },
  { RISCV::V6, 70U },
  { RISCV::V7, 71U },
  { RISCV::V8, 72U },
  { RISCV::V9, 73U },
  { RISCV::V10, 74U },
  { RISCV::V11, 75U },
  { RISCV::V12, 76U },
  { RISCV::V13, 77U },
  { RISCV::V14, 78U },
  { RISCV::V15, 79U },
  { RISCV::V16, 80U },
  { RISCV::V17, 81U },
  { RISCV::V18, 82U },
  { RISCV::V19, 83U },
  { RISCV::V20, 84U },
  { RISCV::V21, 85U },
  { RISCV::V22, 86U },
  { RISCV::V23, 87U },
  { RISCV::V24, 88U },
  { RISCV::V25, 89U },
  { RISCV::V26, 90U },
  { RISCV::V27, 91U },
  { RISCV::V28, 92U },
  { RISCV::V29, 93U },
  { RISCV::V30, 94U },
  { RISCV::V31, 95U },
  { RISCV::X0, 0U },
  { RISCV::X1, 1U },
  { RISCV::X2, 2U },
  { RISCV::X3, 3U },
  { RISCV::X4, 4U },
  { RISCV::X5, 5U },
  { RISCV::X6, 6U },
  { RISCV::X7, 7U },
  { RISCV::X8, 8U },
  { RISCV::X9, 9U },
  { RISCV::X10, 10U },
  { RISCV::X11, 11U },
  { RISCV::X12, 12U },
  { RISCV::X13, 13U },
  { RISCV::X14, 14U },
  { RISCV::X15, 15U },
  { RISCV::X16, 16U },
  { RISCV::X17, 17U },
  { RISCV::X18, 18U },
  { RISCV::X19, 19U },
  { RISCV::X20, 20U },
  { RISCV::X21, 21U },
  { RISCV::X22, 22U },
  { RISCV::X23, 23U },
  { RISCV::X24, 24U },
  { RISCV::X25, 25U },
  { RISCV::X26, 26U },
  { RISCV::X27, 27U },
  { RISCV::X28, 28U },
  { RISCV::X29, 29U },
  { RISCV::X30, 30U },
  { RISCV::X31, 31U },
  { RISCV::F0_D, 32U },
  { RISCV::F1_D, 33U },
  { RISCV::F2_D, 34U },
  { RISCV::F3_D, 35U },
  { RISCV::F4_D, 36U },
  { RISCV::F5_D, 37U },
  { RISCV::F6_D, 38U },
  { RISCV::F7_D, 39U },
  { RISCV::F8_D, 40U },
  { RISCV::F9_D, 41U },
  { RISCV::F10_D, 42U },
  { RISCV::F11_D, 43U },
  { RISCV::F12_D, 44U },
  { RISCV::F13_D, 45U },
  { RISCV::F14_D, 46U },
  { RISCV::F15_D, 47U },
  { RISCV::F16_D, 48U },
  { RISCV::F17_D, 49U },
  { RISCV::F18_D, 50U },
  { RISCV::F19_D, 51U },
  { RISCV::F20_D, 52U },
  { RISCV::F21_D, 53U },
  { RISCV::F22_D, 54U },
  { RISCV::F23_D, 55U },
  { RISCV::F24_D, 56U },
  { RISCV::F25_D, 57U },
  { RISCV::F26_D, 58U },
  { RISCV::F27_D, 59U },
  { RISCV::F28_D, 60U },
  { RISCV::F29_D, 61U },
  { RISCV::F30_D, 62U },
  { RISCV::F31_D, 63U },
  { RISCV::F0_F, 32U },
  { RISCV::F1_F, 33U },
  { RISCV::F2_F, 34U },
  { RISCV::F3_F, 35U },
  { RISCV::F4_F, 36U },
  { RISCV::F5_F, 37U },
  { RISCV::F6_F, 38U },
  { RISCV::F7_F, 39U },
  { RISCV::F8_F, 40U },
  { RISCV::F9_F, 41U },
  { RISCV::F10_F, 42U },
  { RISCV::F11_F, 43U },
  { RISCV::F12_F, 44U },
  { RISCV::F13_F, 45U },
  { RISCV::F14_F, 46U },
  { RISCV::F15_F, 47U },
  { RISCV::F16_F, 48U },
  { RISCV::F17_F, 49U },
  { RISCV::F18_F, 50U },
  { RISCV::F19_F, 51U },
  { RISCV::F20_F, 52U },
  { RISCV::F21_F, 53U },
  { RISCV::F22_F, 54U },
  { RISCV::F23_F, 55U },
  { RISCV::F24_F, 56U },
  { RISCV::F25_F, 57U },
  { RISCV::F26_F, 58U },
  { RISCV::F27_F, 59U },
  { RISCV::F28_F, 60U },
  { RISCV::F29_F, 61U },
  { RISCV::F30_F, 62U },
  { RISCV::F31_F, 63U },
  { RISCV::V0M2, 64U },
  { RISCV::V0M4, 64U },
  { RISCV::V0M8, 64U },
  { RISCV::V2M2, 66U },
  { RISCV::V4M2, 68U },
  { RISCV::V4M4, 68U },
  { RISCV::V6M2, 70U },
  { RISCV::V8M2, 72U },
  { RISCV::V8M4, 72U },
  { RISCV::V8M8, 72U },
  { RISCV::V10M2, 74U },
  { RISCV::V12M2, 76U },
  { RISCV::V12M4, 76U },
  { RISCV::V14M2, 78U },
  { RISCV::V16M2, 80U },
  { RISCV::V16M4, 80U },
  { RISCV::V16M8, 80U },
  { RISCV::V18M2, 82U },
  { RISCV::V20M2, 84U },
  { RISCV::V20M4, 84U },
  { RISCV::V22M2, 86U },
  { RISCV::V24M2, 88U },
  { RISCV::V24M4, 88U },
  { RISCV::V24M8, 88U },
  { RISCV::V26M2, 90U },
  { RISCV::V28M2, 92U },
  { RISCV::V28M4, 92U },
  { RISCV::V30M2, 94U },
};
extern const unsigned RISCVDwarfFlavour0L2DwarfSize = array_lengthof(RISCVDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0L2Dwarf[] = {
  { RISCV::V0, 64U },
  { RISCV::V1, 65U },
  { RISCV::V2, 66U },
  { RISCV::V3, 67U },
  { RISCV::V4, 68U },
  { RISCV::V5, 69U },
  { RISCV::V6, 70U },
  { RISCV::V7, 71U },
  { RISCV::V8, 72U },
  { RISCV::V9, 73U },
  { RISCV::V10, 74U },
  { RISCV::V11, 75U },
  { RISCV::V12, 76U },
  { RISCV::V13, 77U },
  { RISCV::V14, 78U },
  { RISCV::V15, 79U },
  { RISCV::V16, 80U },
  { RISCV::V17, 81U },
  { RISCV::V18, 82U },
  { RISCV::V19, 83U },
  { RISCV::V20, 84U },
  { RISCV::V21, 85U },
  { RISCV::V22, 86U },
  { RISCV::V23, 87U },
  { RISCV::V24, 88U },
  { RISCV::V25, 89U },
  { RISCV::V26, 90U },
  { RISCV::V27, 91U },
  { RISCV::V28, 92U },
  { RISCV::V29, 93U },
  { RISCV::V30, 94U },
  { RISCV::V31, 95U },
  { RISCV::X0, 0U },
  { RISCV::X1, 1U },
  { RISCV::X2, 2U },
  { RISCV::X3, 3U },
  { RISCV::X4, 4U },
  { RISCV::X5, 5U },
  { RISCV::X6, 6U },
  { RISCV::X7, 7U },
  { RISCV::X8, 8U },
  { RISCV::X9, 9U },
  { RISCV::X10, 10U },
  { RISCV::X11, 11U },
  { RISCV::X12, 12U },
  { RISCV::X13, 13U },
  { RISCV::X14, 14U },
  { RISCV::X15, 15U },
  { RISCV::X16, 16U },
  { RISCV::X17, 17U },
  { RISCV::X18, 18U },
  { RISCV::X19, 19U },
  { RISCV::X20, 20U },
  { RISCV::X21, 21U },
  { RISCV::X22, 22U },
  { RISCV::X23, 23U },
  { RISCV::X24, 24U },
  { RISCV::X25, 25U },
  { RISCV::X26, 26U },
  { RISCV::X27, 27U },
  { RISCV::X28, 28U },
  { RISCV::X29, 29U },
  { RISCV::X30, 30U },
  { RISCV::X31, 31U },
  { RISCV::F0_D, 32U },
  { RISCV::F1_D, 33U },
  { RISCV::F2_D, 34U },
  { RISCV::F3_D, 35U },
  { RISCV::F4_D, 36U },
  { RISCV::F5_D, 37U },
  { RISCV::F6_D, 38U },
  { RISCV::F7_D, 39U },
  { RISCV::F8_D, 40U },
  { RISCV::F9_D, 41U },
  { RISCV::F10_D, 42U },
  { RISCV::F11_D, 43U },
  { RISCV::F12_D, 44U },
  { RISCV::F13_D, 45U },
  { RISCV::F14_D, 46U },
  { RISCV::F15_D, 47U },
  { RISCV::F16_D, 48U },
  { RISCV::F17_D, 49U },
  { RISCV::F18_D, 50U },
  { RISCV::F19_D, 51U },
  { RISCV::F20_D, 52U },
  { RISCV::F21_D, 53U },
  { RISCV::F22_D, 54U },
  { RISCV::F23_D, 55U },
  { RISCV::F24_D, 56U },
  { RISCV::F25_D, 57U },
  { RISCV::F26_D, 58U },
  { RISCV::F27_D, 59U },
  { RISCV::F28_D, 60U },
  { RISCV::F29_D, 61U },
  { RISCV::F30_D, 62U },
  { RISCV::F31_D, 63U },
  { RISCV::F0_F, 32U },
  { RISCV::F1_F, 33U },
  { RISCV::F2_F, 34U },
  { RISCV::F3_F, 35U },
  { RISCV::F4_F, 36U },
  { RISCV::F5_F, 37U },
  { RISCV::F6_F, 38U },
  { RISCV::F7_F, 39U },
  { RISCV::F8_F, 40U },
  { RISCV::F9_F, 41U },
  { RISCV::F10_F, 42U },
  { RISCV::F11_F, 43U },
  { RISCV::F12_F, 44U },
  { RISCV::F13_F, 45U },
  { RISCV::F14_F, 46U },
  { RISCV::F15_F, 47U },
  { RISCV::F16_F, 48U },
  { RISCV::F17_F, 49U },
  { RISCV::F18_F, 50U },
  { RISCV::F19_F, 51U },
  { RISCV::F20_F, 52U },
  { RISCV::F21_F, 53U },
  { RISCV::F22_F, 54U },
  { RISCV::F23_F, 55U },
  { RISCV::F24_F, 56U },
  { RISCV::F25_F, 57U },
  { RISCV::F26_F, 58U },
  { RISCV::F27_F, 59U },
  { RISCV::F28_F, 60U },
  { RISCV::F29_F, 61U },
  { RISCV::F30_F, 62U },
  { RISCV::F31_F, 63U },
  { RISCV::V0M2, 64U },
  { RISCV::V0M4, 64U },
  { RISCV::V0M8, 64U },
  { RISCV::V2M2, 66U },
  { RISCV::V4M2, 68U },
  { RISCV::V4M4, 68U },
  { RISCV::V6M2, 70U },
  { RISCV::V8M2, 72U },
  { RISCV::V8M4, 72U },
  { RISCV::V8M8, 72U },
  { RISCV::V10M2, 74U },
  { RISCV::V12M2, 76U },
  { RISCV::V12M4, 76U },
  { RISCV::V14M2, 78U },
  { RISCV::V16M2, 80U },
  { RISCV::V16M4, 80U },
  { RISCV::V16M8, 80U },
  { RISCV::V18M2, 82U },
  { RISCV::V20M2, 84U },
  { RISCV::V20M4, 84U },
  { RISCV::V22M2, 86U },
  { RISCV::V24M2, 88U },
  { RISCV::V24M4, 88U },
  { RISCV::V24M8, 88U },
  { RISCV::V26M2, 90U },
  { RISCV::V28M2, 92U },
  { RISCV::V28M4, 92U },
  { RISCV::V30M2, 94U },
};
extern const unsigned RISCVEHFlavour0L2DwarfSize = array_lengthof(RISCVEHFlavour0L2Dwarf);

extern const uint16_t RISCVRegEncodingTable[] = {
  0,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  0,
  2,
  4,
  4,
  6,
  8,
  8,
  8,
  10,
  12,
  12,
  14,
  16,
  16,
  16,
  18,
  20,
  20,
  22,
  24,
  24,
  24,
  26,
  28,
  28,
  30,
};
static inline void InitRISCVMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(RISCVRegDesc, 159, RA, PC, RISCVMCRegisterClasses, 21, RISCVRegUnitRoots, 98, RISCVRegDiffLists, RISCVLaneMaskLists, RISCVRegStrings, RISCVRegClassStrings, RISCVSubRegIdxLists, 16,
RISCVSubRegIdxRanges, RISCVRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(RISCVDwarfFlavour0Dwarf2L, RISCVDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(RISCVEHFlavour0Dwarf2L, RISCVEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(RISCVDwarfFlavour0L2Dwarf, RISCVDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(RISCVEHFlavour0L2Dwarf, RISCVEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class RISCVFrameLowering;

struct RISCVGenRegisterInfo : public TargetRegisterInfo {
  explicit RISCVGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const RISCVFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace RISCV { // Register classes
  extern const TargetRegisterClass FPR32RegClass;
  extern const TargetRegisterClass GPRRegClass;
  extern const TargetRegisterClass GPRNoX0RegClass;
  extern const TargetRegisterClass GPRNoX0X2RegClass;
  extern const TargetRegisterClass GPRTCRegClass;
  extern const TargetRegisterClass FPR32CRegClass;
  extern const TargetRegisterClass GPRCRegClass;
  extern const TargetRegisterClass GPRC_and_GPRTCRegClass;
  extern const TargetRegisterClass GPRX0RegClass;
  extern const TargetRegisterClass SPRegClass;
  extern const TargetRegisterClass FPR64RegClass;
  extern const TargetRegisterClass VMRegClass;
  extern const TargetRegisterClass VRRegClass;
  extern const TargetRegisterClass FPR64CRegClass;
  extern const TargetRegisterClass VMV0RegClass;
  extern const TargetRegisterClass VRM2RegClass;
  extern const TargetRegisterClass VRM2_with_sub_vrm2_in_VMV0RegClass;
  extern const TargetRegisterClass VRM4RegClass;
  extern const TargetRegisterClass VRM4_with_sub_vrm2_in_VMV0RegClass;
  extern const TargetRegisterClass VRM8RegClass;
  extern const TargetRegisterClass VRM8_with_sub_vrm2_in_VMV0RegClass;
} // end namespace RISCV

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass RISCVMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::nxv1i1, MVT::nxv2i1, MVT::nxv4i1, MVT::nxv8i1, MVT::nxv16i1, MVT::nxv32i1, MVT::Other,
  /* 15 */ MVT::nxv8i8, MVT::nxv4i16, MVT::nxv2i32, MVT::nxv1i64, MVT::Other,
  /* 20 */ MVT::nxv16i8, MVT::nxv8i16, MVT::nxv4i32, MVT::nxv2i64, MVT::Other,
  /* 25 */ MVT::nxv32i8, MVT::nxv16i16, MVT::nxv8i32, MVT::nxv4i64, MVT::Other,
  /* 30 */ MVT::nxv32i16, MVT::nxv16i32, MVT::nxv8i64, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_vrm2", "sub_vrm2_hi", "sub_vrm4", "sub_vrm4_hi", "sub_vrm8", "sub_vrm8_hi", "sub_vrm4_hi_then_sub_vrm2", "sub_vrm4_hi_then_sub_vrm2_hi", "sub_vrm8_hi_then_sub_vrm2", "sub_vrm8_hi_then_sub_vrm2_hi", "sub_vrm8_hi_then_sub_vrm4", "sub_vrm8_hi_then_sub_vrm4_hi", "sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2", "sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // sub_32
  LaneBitmask(0x0000000000000002), // sub_vrm2
  LaneBitmask(0x0000000000000004), // sub_vrm2_hi
  LaneBitmask(0x0000000000000006), // sub_vrm4
  LaneBitmask(0x0000000000000018), // sub_vrm4_hi
  LaneBitmask(0x000000000000001E), // sub_vrm8
  LaneBitmask(0x00000000000001E0), // sub_vrm8_hi
  LaneBitmask(0x0000000000000008), // sub_vrm4_hi_then_sub_vrm2
  LaneBitmask(0x0000000000000010), // sub_vrm4_hi_then_sub_vrm2_hi
  LaneBitmask(0x0000000000000020), // sub_vrm8_hi_then_sub_vrm2
  LaneBitmask(0x0000000000000040), // sub_vrm8_hi_then_sub_vrm2_hi
  LaneBitmask(0x0000000000000060), // sub_vrm8_hi_then_sub_vrm4
  LaneBitmask(0x0000000000000180), // sub_vrm8_hi_then_sub_vrm4_hi
  LaneBitmask(0x0000000000000080), // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
  LaneBitmask(0x0000000000000100), // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 32, 32, 32, VTLists+4 },    // FPR32
  { 32, 32, 32, VTLists+0 },    // GPR
  { 32, 32, 32, VTLists+0 },    // GPRNoX0
  { 32, 32, 32, VTLists+0 },    // GPRNoX0X2
  { 32, 32, 32, VTLists+0 },    // GPRTC
  { 32, 32, 32, VTLists+4 },    // FPR32C
  { 32, 32, 32, VTLists+0 },    // GPRC
  { 32, 32, 32, VTLists+0 },    // GPRC_and_GPRTC
  { 32, 32, 32, VTLists+0 },    // GPRX0
  { 32, 32, 32, VTLists+0 },    // SP
  { 64, 64, 64, VTLists+6 },    // FPR64
  { 64, 64, 64, VTLists+8 },    // VM
  { 64, 64, 64, VTLists+15 },    // VR
  { 64, 64, 64, VTLists+6 },    // FPR64C
  { 64, 64, 64, VTLists+8 },    // VMV0
  { 128, 128, 64, VTLists+20 },    // VRM2
  { 128, 128, 64, VTLists+20 },    // VRM2_with_sub_vrm2_in_VMV0
  { 256, 256, 64, VTLists+25 },    // VRM4
  { 256, 256, 64, VTLists+25 },    // VRM4_with_sub_vrm2_in_VMV0
  { 512, 512, 64, VTLists+30 },    // VRM8
  { 512, 512, 64, VTLists+30 },    // VRM8_with_sub_vrm2_in_VMV0
  // Mode = 1 (RV32)
  { 32, 32, 32, VTLists+4 },    // FPR32
  { 32, 32, 32, VTLists+0 },    // GPR
  { 32, 32, 32, VTLists+0 },    // GPRNoX0
  { 32, 32, 32, VTLists+0 },    // GPRNoX0X2
  { 32, 32, 32, VTLists+0 },    // GPRTC
  { 32, 32, 32, VTLists+4 },    // FPR32C
  { 32, 32, 32, VTLists+0 },    // GPRC
  { 32, 32, 32, VTLists+0 },    // GPRC_and_GPRTC
  { 32, 32, 32, VTLists+0 },    // GPRX0
  { 32, 32, 32, VTLists+0 },    // SP
  { 64, 64, 64, VTLists+6 },    // FPR64
  { 64, 64, 64, VTLists+8 },    // VM
  { 64, 64, 64, VTLists+15 },    // VR
  { 64, 64, 64, VTLists+6 },    // FPR64C
  { 64, 64, 64, VTLists+8 },    // VMV0
  { 128, 128, 64, VTLists+20 },    // VRM2
  { 128, 128, 64, VTLists+20 },    // VRM2_with_sub_vrm2_in_VMV0
  { 256, 256, 64, VTLists+25 },    // VRM4
  { 256, 256, 64, VTLists+25 },    // VRM4_with_sub_vrm2_in_VMV0
  { 512, 512, 64, VTLists+30 },    // VRM8
  { 512, 512, 64, VTLists+30 },    // VRM8_with_sub_vrm2_in_VMV0
  // Mode = 2 (RV64)
  { 32, 32, 32, VTLists+4 },    // FPR32
  { 64, 64, 64, VTLists+2 },    // GPR
  { 64, 64, 64, VTLists+2 },    // GPRNoX0
  { 64, 64, 64, VTLists+2 },    // GPRNoX0X2
  { 64, 64, 64, VTLists+2 },    // GPRTC
  { 32, 32, 32, VTLists+4 },    // FPR32C
  { 64, 64, 64, VTLists+2 },    // GPRC
  { 64, 64, 64, VTLists+2 },    // GPRC_and_GPRTC
  { 64, 64, 64, VTLists+2 },    // GPRX0
  { 64, 64, 64, VTLists+2 },    // SP
  { 64, 64, 64, VTLists+6 },    // FPR64
  { 64, 64, 64, VTLists+8 },    // VM
  { 64, 64, 64, VTLists+15 },    // VR
  { 64, 64, 64, VTLists+6 },    // FPR64C
  { 64, 64, 64, VTLists+8 },    // VMV0
  { 128, 128, 64, VTLists+20 },    // VRM2
  { 128, 128, 64, VTLists+20 },    // VRM2_with_sub_vrm2_in_VMV0
  { 256, 256, 64, VTLists+25 },    // VRM4
  { 256, 256, 64, VTLists+25 },    // VRM4_with_sub_vrm2_in_VMV0
  { 512, 512, 64, VTLists+30 },    // VRM8
  { 512, 512, 64, VTLists+30 },    // VRM8_with_sub_vrm2_in_VMV0
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t FPR32SubClassMask[] = {
  0x00000021, 
  0x00002400, // sub_32
};

static const uint32_t GPRSubClassMask[] = {
  0x000003de, 
};

static const uint32_t GPRNoX0SubClassMask[] = {
  0x000002dc, 
};

static const uint32_t GPRNoX0X2SubClassMask[] = {
  0x000000d8, 
};

static const uint32_t GPRTCSubClassMask[] = {
  0x00000090, 
};

static const uint32_t FPR32CSubClassMask[] = {
  0x00000020, 
  0x00002000, // sub_32
};

static const uint32_t GPRCSubClassMask[] = {
  0x000000c0, 
};

static const uint32_t GPRC_and_GPRTCSubClassMask[] = {
  0x00000080, 
};

static const uint32_t GPRX0SubClassMask[] = {
  0x00000100, 
};

static const uint32_t SPSubClassMask[] = {
  0x00000200, 
};

static const uint32_t FPR64SubClassMask[] = {
  0x00002400, 
};

static const uint32_t VMSubClassMask[] = {
  0x00005800, 
  0x001f8000, // sub_vrm2
  0x001f8000, // sub_vrm2_hi
  0x001e0000, // sub_vrm4_hi_then_sub_vrm2
  0x001e0000, // sub_vrm4_hi_then_sub_vrm2_hi
  0x00180000, // sub_vrm8_hi_then_sub_vrm2
  0x00180000, // sub_vrm8_hi_then_sub_vrm2_hi
  0x00180000, // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
  0x00180000, // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
};

static const uint32_t VRSubClassMask[] = {
  0x00005800, 
  0x001f8000, // sub_vrm2
  0x001f8000, // sub_vrm2_hi
  0x001e0000, // sub_vrm4_hi_then_sub_vrm2
  0x001e0000, // sub_vrm4_hi_then_sub_vrm2_hi
  0x00180000, // sub_vrm8_hi_then_sub_vrm2
  0x00180000, // sub_vrm8_hi_then_sub_vrm2_hi
  0x00180000, // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
  0x00180000, // sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
};

static const uint32_t FPR64CSubClassMask[] = {
  0x00002000, 
};

static const uint32_t VMV0SubClassMask[] = {
  0x00004000, 
  0x00150000, // sub_vrm2
};

static const uint32_t VRM2SubClassMask[] = {
  0x00018000, 
  0x001e0000, // sub_vrm4
  0x001e0000, // sub_vrm4_hi
  0x00180000, // sub_vrm8_hi_then_sub_vrm4
  0x00180000, // sub_vrm8_hi_then_sub_vrm4_hi
};

static const uint32_t VRM2_with_sub_vrm2_in_VMV0SubClassMask[] = {
  0x00010000, 
  0x00140000, // sub_vrm4
};

static const uint32_t VRM4SubClassMask[] = {
  0x00060000, 
  0x00180000, // sub_vrm8
  0x00180000, // sub_vrm8_hi
};

static const uint32_t VRM4_with_sub_vrm2_in_VMV0SubClassMask[] = {
  0x00040000, 
  0x00100000, // sub_vrm8
};

static const uint32_t VRM8SubClassMask[] = {
  0x00180000, 
};

static const uint32_t VRM8_with_sub_vrm2_in_VMV0SubClassMask[] = {
  0x00100000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 0,
  /* 4 */ 4, 0,
  /* 6 */ 6, 0,
  /* 8 */ 6, 7, 0,
  /* 11 */ 4, 5, 12, 13, 0,
  /* 16 */ 2, 3, 8, 9, 10, 11, 14, 15, 0,
};

static const TargetRegisterClass *const GPRNoX0Superclasses[] = {
  &RISCV::GPRRegClass,
  nullptr
};

static const TargetRegisterClass *const GPRNoX0X2Superclasses[] = {
  &RISCV::GPRRegClass,
  &RISCV::GPRNoX0RegClass,
  nullptr
};

static const TargetRegisterClass *const GPRTCSuperclasses[] = {
  &RISCV::GPRRegClass,
  &RISCV::GPRNoX0RegClass,
  &RISCV::GPRNoX0X2RegClass,
  nullptr
};

static const TargetRegisterClass *const FPR32CSuperclasses[] = {
  &RISCV::FPR32RegClass,
  nullptr
};

static const TargetRegisterClass *const GPRCSuperclasses[] = {
  &RISCV::GPRRegClass,
  &RISCV::GPRNoX0RegClass,
  &RISCV::GPRNoX0X2RegClass,
  nullptr
};

static const TargetRegisterClass *const GPRC_and_GPRTCSuperclasses[] = {
  &RISCV::GPRRegClass,
  &RISCV::GPRNoX0RegClass,
  &RISCV::GPRNoX0X2RegClass,
  &RISCV::GPRTCRegClass,
  &RISCV::GPRCRegClass,
  nullptr
};

static const TargetRegisterClass *const GPRX0Superclasses[] = {
  &RISCV::GPRRegClass,
  nullptr
};

static const TargetRegisterClass *const SPSuperclasses[] = {
  &RISCV::GPRRegClass,
  &RISCV::GPRNoX0RegClass,
  nullptr
};

static const TargetRegisterClass *const VMSuperclasses[] = {
  &RISCV::VRRegClass,
  nullptr
};

static const TargetRegisterClass *const VRSuperclasses[] = {
  &RISCV::VMRegClass,
  nullptr
};

static const TargetRegisterClass *const FPR64CSuperclasses[] = {
  &RISCV::FPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const VMV0Superclasses[] = {
  &RISCV::VMRegClass,
  &RISCV::VRRegClass,
  nullptr
};

static const TargetRegisterClass *const VRM2_with_sub_vrm2_in_VMV0Superclasses[] = {
  &RISCV::VRM2RegClass,
  nullptr
};

static const TargetRegisterClass *const VRM4_with_sub_vrm2_in_VMV0Superclasses[] = {
  &RISCV::VRM4RegClass,
  nullptr
};

static const TargetRegisterClass *const VRM8_with_sub_vrm2_in_VMV0Superclasses[] = {
  &RISCV::VRM8RegClass,
  nullptr
};


namespace RISCV {   // Register class instances
  extern const TargetRegisterClass FPR32RegClass = {
    &RISCVMCRegisterClasses[FPR32RegClassID],
    FPR32SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPRRegClass = {
    &RISCVMCRegisterClasses[GPRRegClassID],
    GPRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPRNoX0RegClass = {
    &RISCVMCRegisterClasses[GPRNoX0RegClassID],
    GPRNoX0SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRNoX0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRNoX0X2RegClass = {
    &RISCVMCRegisterClasses[GPRNoX0X2RegClassID],
    GPRNoX0X2SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRNoX0X2Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRTCRegClass = {
    &RISCVMCRegisterClasses[GPRTCRegClassID],
    GPRTCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRTCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FPR32CRegClass = {
    &RISCVMCRegisterClasses[FPR32CRegClassID],
    FPR32CSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR32CSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRCRegClass = {
    &RISCVMCRegisterClasses[GPRCRegClassID],
    GPRCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRC_and_GPRTCRegClass = {
    &RISCVMCRegisterClasses[GPRC_and_GPRTCRegClassID],
    GPRC_and_GPRTCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRC_and_GPRTCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRX0RegClass = {
    &RISCVMCRegisterClasses[GPRX0RegClassID],
    GPRX0SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPRX0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass SPRegClass = {
    &RISCVMCRegisterClasses[SPRegClassID],
    SPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    SPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FPR64RegClass = {
    &RISCVMCRegisterClasses[FPR64RegClassID],
    FPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VMRegClass = {
    &RISCVMCRegisterClasses[VMRegClassID],
    VMSubClassMask,
    SuperRegIdxSeqs + 16,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VRRegClass = {
    &RISCVMCRegisterClasses[VRRegClassID],
    VRSubClassMask,
    SuperRegIdxSeqs + 16,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FPR64CRegClass = {
    &RISCVMCRegisterClasses[FPR64CRegClassID],
    FPR64CSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR64CSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VMV0RegClass = {
    &RISCVMCRegisterClasses[VMV0RegClassID],
    VMV0SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VMV0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VRM2RegClass = {
    &RISCVMCRegisterClasses[VRM2RegClassID],
    VRM2SubClassMask,
    SuperRegIdxSeqs + 11,
    LaneBitmask(0x0000000000000006),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VRM2_with_sub_vrm2_in_VMV0RegClass = {
    &RISCVMCRegisterClasses[VRM2_with_sub_vrm2_in_VMV0RegClassID],
    VRM2_with_sub_vrm2_in_VMV0SubClassMask,
    SuperRegIdxSeqs + 4,
    LaneBitmask(0x0000000000000006),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VRM2_with_sub_vrm2_in_VMV0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VRM4RegClass = {
    &RISCVMCRegisterClasses[VRM4RegClassID],
    VRM4SubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x000000000000001E),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VRM4_with_sub_vrm2_in_VMV0RegClass = {
    &RISCVMCRegisterClasses[VRM4_with_sub_vrm2_in_VMV0RegClassID],
    VRM4_with_sub_vrm2_in_VMV0SubClassMask,
    SuperRegIdxSeqs + 6,
    LaneBitmask(0x000000000000001E),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VRM4_with_sub_vrm2_in_VMV0Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VRM8RegClass = {
    &RISCVMCRegisterClasses[VRM8RegClassID],
    VRM8SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000001FE),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VRM8_with_sub_vrm2_in_VMV0RegClass = {
    &RISCVMCRegisterClasses[VRM8_with_sub_vrm2_in_VMV0RegClassID],
    VRM8_with_sub_vrm2_in_VMV0SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000001FE),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VRM8_with_sub_vrm2_in_VMV0Superclasses,
    nullptr
  };

} // end namespace RISCV

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &RISCV::FPR32RegClass,
    &RISCV::GPRRegClass,
    &RISCV::GPRNoX0RegClass,
    &RISCV::GPRNoX0X2RegClass,
    &RISCV::GPRTCRegClass,
    &RISCV::FPR32CRegClass,
    &RISCV::GPRCRegClass,
    &RISCV::GPRC_and_GPRTCRegClass,
    &RISCV::GPRX0RegClass,
    &RISCV::SPRegClass,
    &RISCV::FPR64RegClass,
    &RISCV::VMRegClass,
    &RISCV::VRRegClass,
    &RISCV::FPR64CRegClass,
    &RISCV::VMV0RegClass,
    &RISCV::VRM2RegClass,
    &RISCV::VRM2_with_sub_vrm2_in_VMV0RegClass,
    &RISCV::VRM4RegClass,
    &RISCV::VRM4_with_sub_vrm2_in_VMV0RegClass,
    &RISCV::VRM8RegClass,
    &RISCV::VRM8_with_sub_vrm2_in_VMV0RegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc RISCVRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
};
unsigned RISCVGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[15] = {
    0, 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 2, 3, 0, 0, 
  };
  static const uint8_t Rows[4][15] = {
    { 0, RISCV::sub_vrm2, RISCV::sub_vrm2_hi, RISCV::sub_vrm4, RISCV::sub_vrm4_hi, 0, 0, RISCV::sub_vrm4_hi_then_sub_vrm2, RISCV::sub_vrm4_hi_then_sub_vrm2_hi, 0, 0, 0, 0, 0, 0, },
    { 0, RISCV::sub_vrm4_hi_then_sub_vrm2, RISCV::sub_vrm4_hi_then_sub_vrm2_hi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, RISCV::sub_vrm8_hi_then_sub_vrm2, RISCV::sub_vrm8_hi_then_sub_vrm2_hi, RISCV::sub_vrm8_hi_then_sub_vrm4, RISCV::sub_vrm8_hi_then_sub_vrm4_hi, 0, 0, RISCV::sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2, RISCV::sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi, 0, 0, 0, 0, 0, 0, },
    { 0, RISCV::sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2, RISCV::sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 15);
  --IdxB; assert(IdxB < 15);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 },   // Sequence 12
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  7 }, { LaneBitmask::getNone(), 0 },   // Sequence 14
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  8 }, { LaneBitmask::getNone(), 0 }  // Sequence 16
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to sub_32
    &LaneMaskComposeSequences[2], // to sub_vrm2
    &LaneMaskComposeSequences[4], // to sub_vrm2_hi
    &LaneMaskComposeSequences[0], // to sub_vrm4
    &LaneMaskComposeSequences[4], // to sub_vrm4_hi
    &LaneMaskComposeSequences[0], // to sub_vrm8
    &LaneMaskComposeSequences[6], // to sub_vrm8_hi
    &LaneMaskComposeSequences[8], // to sub_vrm4_hi_then_sub_vrm2
    &LaneMaskComposeSequences[6], // to sub_vrm4_hi_then_sub_vrm2_hi
    &LaneMaskComposeSequences[10], // to sub_vrm8_hi_then_sub_vrm2
    &LaneMaskComposeSequences[12], // to sub_vrm8_hi_then_sub_vrm2_hi
    &LaneMaskComposeSequences[6], // to sub_vrm8_hi_then_sub_vrm4
    &LaneMaskComposeSequences[12], // to sub_vrm8_hi_then_sub_vrm4_hi
    &LaneMaskComposeSequences[14], // to sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
    &LaneMaskComposeSequences[16] // to sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
  };

LaneBitmask RISCVGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 15 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask RISCVGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 15 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *RISCVGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[21][15] = {
    {	// FPR32
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPR
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRNoX0
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRNoX0X2
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRTC
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// FPR32C
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRC
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRC_and_GPRTC
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// GPRX0
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// SP
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// FPR64
      11,	// sub_32 -> FPR64
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VM
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VR
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// FPR64C
      14,	// sub_32 -> FPR64C
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VMV0
      0,	// sub_32
      0,	// sub_vrm2
      0,	// sub_vrm2_hi
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VRM2
      0,	// sub_32
      16,	// sub_vrm2 -> VRM2
      16,	// sub_vrm2_hi -> VRM2
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VRM2_with_sub_vrm2_in_VMV0
      0,	// sub_32
      17,	// sub_vrm2 -> VRM2_with_sub_vrm2_in_VMV0
      17,	// sub_vrm2_hi -> VRM2_with_sub_vrm2_in_VMV0
      0,	// sub_vrm4
      0,	// sub_vrm4_hi
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      0,	// sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm4_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VRM4
      0,	// sub_32
      18,	// sub_vrm2 -> VRM4
      18,	// sub_vrm2_hi -> VRM4
      18,	// sub_vrm4 -> VRM4
      18,	// sub_vrm4_hi -> VRM4
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      18,	// sub_vrm4_hi_then_sub_vrm2 -> VRM4
      18,	// sub_vrm4_hi_then_sub_vrm2_hi -> VRM4
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VRM4_with_sub_vrm2_in_VMV0
      0,	// sub_32
      19,	// sub_vrm2 -> VRM4_with_sub_vrm2_in_VMV0
      19,	// sub_vrm2_hi -> VRM4_with_sub_vrm2_in_VMV0
      19,	// sub_vrm4 -> VRM4_with_sub_vrm2_in_VMV0
      19,	// sub_vrm4_hi -> VRM4_with_sub_vrm2_in_VMV0
      0,	// sub_vrm8
      0,	// sub_vrm8_hi
      19,	// sub_vrm4_hi_then_sub_vrm2 -> VRM4_with_sub_vrm2_in_VMV0
      19,	// sub_vrm4_hi_then_sub_vrm2_hi -> VRM4_with_sub_vrm2_in_VMV0
      0,	// sub_vrm8_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm2_hi
      0,	// sub_vrm8_hi_then_sub_vrm4
      0,	// sub_vrm8_hi_then_sub_vrm4_hi
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2
      0,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi
    },
    {	// VRM8
      0,	// sub_32
      20,	// sub_vrm2 -> VRM8
      20,	// sub_vrm2_hi -> VRM8
      20,	// sub_vrm4 -> VRM8
      20,	// sub_vrm4_hi -> VRM8
      20,	// sub_vrm8 -> VRM8
      20,	// sub_vrm8_hi -> VRM8
      20,	// sub_vrm4_hi_then_sub_vrm2 -> VRM8
      20,	// sub_vrm4_hi_then_sub_vrm2_hi -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm2 -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm2_hi -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm4 -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm4_hi -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2 -> VRM8
      20,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi -> VRM8
    },
    {	// VRM8_with_sub_vrm2_in_VMV0
      0,	// sub_32
      21,	// sub_vrm2 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm2_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm4 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm4_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm4_hi_then_sub_vrm2 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm4_hi_then_sub_vrm2_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm2 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm2_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm4 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm4_hi -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2 -> VRM8_with_sub_vrm2_in_VMV0
      21,	// sub_vrm8_hi_then_sub_vrm4_hi_then_sub_vrm2_hi -> VRM8_with_sub_vrm2_in_VMV0
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 15 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &RISCVGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// FPR32
    {1, 32},  	// GPR
    {1, 31},  	// GPRNoX0
    {1, 30},  	// GPRNoX0X2
    {1, 15},  	// GPRTC
    {1, 8},  	// FPR32C
    {1, 8},  	// GPRC
    {1, 6},  	// GPRC_and_GPRTC
    {1, 1},  	// GPRX0
    {1, 1},  	// SP
    {1, 32},  	// FPR64
    {1, 32},  	// VM
    {1, 32},  	// VR
    {1, 8},  	// FPR64C
    {1, 1},  	// VMV0
    {2, 32},  	// VRM2
    {2, 2},  	// VRM2_with_sub_vrm2_in_VMV0
    {4, 32},  	// VRM4
    {4, 4},  	// VRM4_with_sub_vrm2_in_VMV0
    {8, 32},  	// VRM8
    {8, 8},  	// VRM8_with_sub_vrm2_in_VMV0
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned RISCVGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 98 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned RISCVGenRegisterInfo::getNumRegPressureSets() const {
  return 10;
}

// Get the name of this register unit pressure set.
const char *RISCVGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "GPRX0",
    "SP",
    "VMV0",
    "FPR32C",
    "GPRC",
    "VRM8_with_sub_vrm2_in_VMV0",
    "GPRTC",
    "FPR32",
    "GPR",
    "VM",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned RISCVGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: GPRX0
    1,  	// 1: SP
    4,  	// 2: VMV0
    8,  	// 3: FPR32C
    8,  	// 4: GPRC
    8,  	// 5: VRM8_with_sub_vrm2_in_VMV0
    17,  	// 6: GPRTC
    32,  	// 7: FPR32
    32,  	// 8: GPR
    32,  	// 9: VM
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 3, 7, -1,
  /* 3 */ 0, 8, -1,
  /* 6 */ 1, 8, -1,
  /* 9 */ 4, 6, 8, -1,
  /* 13 */ 2, 5, 9, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* RISCVGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,4,4,4,10,0,9,9,3,6,1,15,15,0,13,15,13,15,13,15,14,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* RISCVGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 98 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    2,2,13,13,13,13,14,14,14,14,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,3,4,6,4,4,10,10,10,9,9,9,9,9,9,9,9,10,10,4,4,4,4,4,4,4,4,4,4,10,10,10,10,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc RISCVRegDesc[];
extern const MCPhysReg RISCVRegDiffLists[];
extern const LaneBitmask RISCVLaneMaskLists[];
extern const char RISCVRegStrings[];
extern const char RISCVRegClassStrings[];
extern const MCPhysReg RISCVRegUnitRoots[][2];
extern const uint16_t RISCVSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits RISCVSubRegIdxRanges[];
extern const uint16_t RISCVRegEncodingTable[];
// RISCV Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0Dwarf2L[];
extern const unsigned RISCVDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0Dwarf2L[];
extern const unsigned RISCVEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVDwarfFlavour0L2Dwarf[];
extern const unsigned RISCVDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair RISCVEHFlavour0L2Dwarf[];
extern const unsigned RISCVEHFlavour0L2DwarfSize;

RISCVGenRegisterInfo::
RISCVGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(RISCVRegInfoDesc, RegisterClasses, RegisterClasses+21,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFE00), RegClassInfos, HwMode) {
  InitMCRegisterInfo(RISCVRegDesc, 159, RA, PC,
                     RISCVMCRegisterClasses, 21,
                     RISCVRegUnitRoots,
                     98,
                     RISCVRegDiffLists,
                     RISCVLaneMaskLists,
                     RISCVRegStrings,
                     RISCVRegClassStrings,
                     RISCVSubRegIdxLists,
                     16,
                     RISCVSubRegIdxRanges,
                     RISCVRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(RISCVDwarfFlavour0Dwarf2L, RISCVDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(RISCVEHFlavour0Dwarf2L, RISCVEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(RISCVDwarfFlavour0L2Dwarf, RISCVDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(RISCVEHFlavour0L2Dwarf, RISCVEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_ILP32D_LP64D_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::F8_D, RISCV::F9_D, RISCV::F18_D, RISCV::F19_D, RISCV::F20_D, RISCV::F21_D, RISCV::F22_D, RISCV::F23_D, RISCV::F24_D, RISCV::F25_D, RISCV::F26_D, RISCV::F27_D, 0 };
static const uint32_t CSR_ILP32D_LP64D_RegMask[] = { 0x00000000, 0x7fe018d0, 0x7fe01800, 0x7fe01800, 0x00000000, };
static const MCPhysReg CSR_ILP32F_LP64F_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::F8_F, RISCV::F9_F, RISCV::F18_F, RISCV::F19_F, RISCV::F20_F, RISCV::F21_F, RISCV::F22_F, RISCV::F23_F, RISCV::F24_F, RISCV::F25_F, RISCV::F26_F, RISCV::F27_F, 0 };
static const uint32_t CSR_ILP32F_LP64F_RegMask[] = { 0x00000000, 0x7fe018d0, 0x00000000, 0x7fe01800, 0x00000000, };
static const MCPhysReg CSR_ILP32_LP64_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X8, RISCV::X9, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, 0 };
static const uint32_t CSR_ILP32_LP64_RegMask[] = { 0x00000000, 0x7fe018d0, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Interrupt_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X8, RISCV::X9, RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, 0 };
static const uint32_t CSR_Interrupt_RegMask[] = { 0x00000000, 0xffffffd0, 0x00000007, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_XLEN_F32_Interrupt_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X8, RISCV::X9, RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::F0_F, RISCV::F1_F, RISCV::F2_F, RISCV::F3_F, RISCV::F4_F, RISCV::F5_F, RISCV::F6_F, RISCV::F7_F, RISCV::F10_F, RISCV::F11_F, RISCV::F12_F, RISCV::F13_F, RISCV::F14_F, RISCV::F15_F, RISCV::F16_F, RISCV::F17_F, RISCV::F28_F, RISCV::F29_F, RISCV::F30_F, RISCV::F31_F, RISCV::F8_F, RISCV::F9_F, RISCV::F18_F, RISCV::F19_F, RISCV::F20_F, RISCV::F21_F, RISCV::F22_F, RISCV::F23_F, RISCV::F24_F, RISCV::F25_F, RISCV::F26_F, RISCV::F27_F, 0 };
static const uint32_t CSR_XLEN_F32_Interrupt_RegMask[] = { 0x00000000, 0xffffffd0, 0x00000007, 0xfffffff8, 0x00000007, };
static const MCPhysReg CSR_XLEN_F64_Interrupt_SaveList[] = { RISCV::X1, RISCV::X3, RISCV::X4, RISCV::X5, RISCV::X6, RISCV::X7, RISCV::X8, RISCV::X9, RISCV::X10, RISCV::X11, RISCV::X12, RISCV::X13, RISCV::X14, RISCV::X15, RISCV::X16, RISCV::X17, RISCV::X18, RISCV::X19, RISCV::X20, RISCV::X21, RISCV::X22, RISCV::X23, RISCV::X24, RISCV::X25, RISCV::X26, RISCV::X27, RISCV::X28, RISCV::X29, RISCV::X30, RISCV::X31, RISCV::F0_D, RISCV::F1_D, RISCV::F2_D, RISCV::F3_D, RISCV::F4_D, RISCV::F5_D, RISCV::F6_D, RISCV::F7_D, RISCV::F10_D, RISCV::F11_D, RISCV::F12_D, RISCV::F13_D, RISCV::F14_D, RISCV::F15_D, RISCV::F16_D, RISCV::F17_D, RISCV::F28_D, RISCV::F29_D, RISCV::F30_D, RISCV::F31_D, RISCV::F8_D, RISCV::F9_D, RISCV::F18_D, RISCV::F19_D, RISCV::F20_D, RISCV::F21_D, RISCV::F22_D, RISCV::F23_D, RISCV::F24_D, RISCV::F25_D, RISCV::F26_D, RISCV::F27_D, 0 };
static const uint32_t CSR_XLEN_F64_Interrupt_RegMask[] = { 0x00000000, 0xffffffd0, 0xffffffff, 0xffffffff, 0x00000007, };


ArrayRef<const uint32_t *> RISCVGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_ILP32D_LP64D_RegMask,
    CSR_ILP32F_LP64F_RegMask,
    CSR_ILP32_LP64_RegMask,
    CSR_Interrupt_RegMask,
    CSR_NoRegs_RegMask,
    CSR_XLEN_F32_Interrupt_RegMask,
    CSR_XLEN_F64_Interrupt_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> RISCVGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_ILP32D_LP64D",
    "CSR_ILP32F_LP64F",
    "CSR_ILP32_LP64",
    "CSR_Interrupt",
    "CSR_NoRegs",
    "CSR_XLEN_F32_Interrupt",
    "CSR_XLEN_F64_Interrupt",
  };
  return makeArrayRef(Names);
}

const RISCVFrameLowering *
RISCVGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const RISCVFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


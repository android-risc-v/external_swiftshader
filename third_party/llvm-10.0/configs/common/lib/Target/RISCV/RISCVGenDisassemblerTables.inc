/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * RISCV Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * Have a static const max_size_in_bits equal to the number of bits in the
//   encoding.
// * be default-constructible and copy-constructible
// * be constructible from a uint64_t
// * be constructible from an APInt (this can be private)
// * Support getBitsSet(loBit, hiBit)
// * be convertible to uint64_t
// * Support the ~, &, ==, !=, and |= operators with other objects of the same type
// * Support shift (<<, >>) with signed and unsigned integers on the RHS
// * Support put (<<) to raw_ostream&
template<typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::true_type) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::false_type) {
  assert(startBit + numBits <= InsnType::max_size_in_bits && "Instruction field out of bounds!");
  InsnType fieldMask = InsnType::getBitsSet(0, numBits);
  return (insn >> startBit) & fieldMask;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
  return fieldFromInstruction(insn, startBit, numBits, std::is_integral<InsnType>());
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3 */       MCD::OPC_FilterValue, 0, 132, 0, 0, // Skip to: 140
/* 8 */       MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 11 */      MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 41
/* 16 */      MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 32
/* 21 */      MCD::OPC_CheckField, 2, 11, 0, 4, 0, 0, // Skip to: 32
/* 28 */      MCD::OPC_Decode, 167, 3, 0, // Opcode: C_UNIMP
/* 32 */      MCD::OPC_CheckPredicate, 0, 24, 3, 0, // Skip to: 829
/* 37 */      MCD::OPC_Decode, 243, 2, 1, // Opcode: C_ADDI4SPN
/* 41 */      MCD::OPC_FilterValue, 1, 41, 0, 0, // Skip to: 87
/* 46 */      MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 62
/* 51 */      MCD::OPC_CheckField, 2, 11, 0, 4, 0, 0, // Skip to: 62
/* 58 */      MCD::OPC_Decode, 150, 3, 0, // Opcode: C_NOP
/* 62 */      MCD::OPC_CheckPredicate, 1, 11, 0, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 78
/* 74 */      MCD::OPC_Decode, 151, 3, 2, // Opcode: C_NOP_HINT
/* 78 */      MCD::OPC_CheckPredicate, 0, 234, 2, 0, // Skip to: 829
/* 83 */      MCD::OPC_Decode, 241, 2, 3, // Opcode: C_ADDI
/* 87 */      MCD::OPC_FilterValue, 2, 225, 2, 0, // Skip to: 829
/* 92 */      MCD::OPC_CheckPredicate, 1, 18, 0, 0, // Skip to: 115
/* 97 */      MCD::OPC_CheckField, 12, 1, 0, 11, 0, 0, // Skip to: 115
/* 104 */     MCD::OPC_CheckField, 2, 5, 0, 4, 0, 0, // Skip to: 115
/* 111 */     MCD::OPC_Decode, 157, 3, 4, // Opcode: C_SLLI64_HINT
/* 115 */     MCD::OPC_CheckPredicate, 1, 11, 0, 0, // Skip to: 131
/* 120 */     MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 158, 3, 5, // Opcode: C_SLLI_HINT
/* 131 */     MCD::OPC_CheckPredicate, 0, 181, 2, 0, // Skip to: 829
/* 136 */     MCD::OPC_Decode, 156, 3, 6, // Opcode: C_SLLI
/* 140 */     MCD::OPC_FilterValue, 1, 45, 0, 0, // Skip to: 190
/* 145 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 148 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 162
/* 153 */     MCD::OPC_CheckPredicate, 2, 159, 2, 0, // Skip to: 829
/* 158 */     MCD::OPC_Decode, 255, 2, 7, // Opcode: C_FLD
/* 162 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 176
/* 167 */     MCD::OPC_CheckPredicate, 3, 145, 2, 0, // Skip to: 829
/* 172 */     MCD::OPC_Decode, 244, 2, 3, // Opcode: C_ADDIW
/* 176 */     MCD::OPC_FilterValue, 2, 136, 2, 0, // Skip to: 829
/* 181 */     MCD::OPC_CheckPredicate, 2, 131, 2, 0, // Skip to: 829
/* 186 */     MCD::OPC_Decode, 128, 3, 8, // Opcode: C_FLDSP
/* 190 */     MCD::OPC_FilterValue, 2, 61, 0, 0, // Skip to: 256
/* 195 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 198 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 212
/* 203 */     MCD::OPC_CheckPredicate, 0, 109, 2, 0, // Skip to: 829
/* 208 */     MCD::OPC_Decode, 145, 3, 9, // Opcode: C_LW
/* 212 */     MCD::OPC_FilterValue, 1, 25, 0, 0, // Skip to: 242
/* 217 */     MCD::OPC_CheckPredicate, 1, 11, 0, 0, // Skip to: 233
/* 222 */     MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 233
/* 229 */     MCD::OPC_Decode, 142, 3, 10, // Opcode: C_LI_HINT
/* 233 */     MCD::OPC_CheckPredicate, 0, 79, 2, 0, // Skip to: 829
/* 238 */     MCD::OPC_Decode, 141, 3, 11, // Opcode: C_LI
/* 242 */     MCD::OPC_FilterValue, 2, 70, 2, 0, // Skip to: 829
/* 247 */     MCD::OPC_CheckPredicate, 0, 65, 2, 0, // Skip to: 829
/* 252 */     MCD::OPC_Decode, 146, 3, 12, // Opcode: C_LWSP
/* 256 */     MCD::OPC_FilterValue, 3, 76, 0, 0, // Skip to: 337
/* 261 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 264 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 278
/* 269 */     MCD::OPC_CheckPredicate, 3, 43, 2, 0, // Skip to: 829
/* 274 */     MCD::OPC_Decode, 139, 3, 13, // Opcode: C_LD
/* 278 */     MCD::OPC_FilterValue, 1, 40, 0, 0, // Skip to: 323
/* 283 */     MCD::OPC_ExtractField, 7, 5,  // Inst{11-7} ...
/* 286 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 300
/* 291 */     MCD::OPC_CheckPredicate, 1, 18, 0, 0, // Skip to: 314
/* 296 */     MCD::OPC_Decode, 144, 3, 10, // Opcode: C_LUI_HINT
/* 300 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 314
/* 305 */     MCD::OPC_CheckPredicate, 0, 4, 0, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 242, 2, 14, // Opcode: C_ADDI16SP
/* 314 */     MCD::OPC_CheckPredicate, 0, 254, 1, 0, // Skip to: 829
/* 319 */     MCD::OPC_Decode, 143, 3, 15, // Opcode: C_LUI
/* 323 */     MCD::OPC_FilterValue, 2, 245, 1, 0, // Skip to: 829
/* 328 */     MCD::OPC_CheckPredicate, 3, 240, 1, 0, // Skip to: 829
/* 333 */     MCD::OPC_Decode, 140, 3, 16, // Opcode: C_LDSP
/* 337 */     MCD::OPC_FilterValue, 4, 81, 1, 0, // Skip to: 679
/* 342 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 345 */     MCD::OPC_FilterValue, 1, 213, 0, 0, // Skip to: 563
/* 350 */     MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 353 */     MCD::OPC_FilterValue, 0, 32, 0, 0, // Skip to: 390
/* 358 */     MCD::OPC_CheckPredicate, 1, 18, 0, 0, // Skip to: 381
/* 363 */     MCD::OPC_CheckField, 12, 1, 0, 11, 0, 0, // Skip to: 381
/* 370 */     MCD::OPC_CheckField, 2, 5, 0, 4, 0, 0, // Skip to: 381
/* 377 */     MCD::OPC_Decode, 162, 3, 17, // Opcode: C_SRLI64_HINT
/* 381 */     MCD::OPC_CheckPredicate, 0, 187, 1, 0, // Skip to: 829
/* 386 */     MCD::OPC_Decode, 161, 3, 18, // Opcode: C_SRLI
/* 390 */     MCD::OPC_FilterValue, 1, 32, 0, 0, // Skip to: 427
/* 395 */     MCD::OPC_CheckPredicate, 1, 18, 0, 0, // Skip to: 418
/* 400 */     MCD::OPC_CheckField, 12, 1, 0, 11, 0, 0, // Skip to: 418
/* 407 */     MCD::OPC_CheckField, 2, 5, 0, 4, 0, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 160, 3, 17, // Opcode: C_SRAI64_HINT
/* 418 */     MCD::OPC_CheckPredicate, 0, 150, 1, 0, // Skip to: 829
/* 423 */     MCD::OPC_Decode, 159, 3, 18, // Opcode: C_SRAI
/* 427 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 441
/* 432 */     MCD::OPC_CheckPredicate, 0, 136, 1, 0, // Skip to: 829
/* 437 */     MCD::OPC_Decode, 251, 2, 19, // Opcode: C_ANDI
/* 441 */     MCD::OPC_FilterValue, 3, 127, 1, 0, // Skip to: 829
/* 446 */     MCD::OPC_ExtractField, 5, 2,  // Inst{6-5} ...
/* 449 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 485
/* 454 */     MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 457 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 471
/* 462 */     MCD::OPC_CheckPredicate, 0, 106, 1, 0, // Skip to: 829
/* 467 */     MCD::OPC_Decode, 163, 3, 20, // Opcode: C_SUB
/* 471 */     MCD::OPC_FilterValue, 1, 97, 1, 0, // Skip to: 829
/* 476 */     MCD::OPC_CheckPredicate, 3, 92, 1, 0, // Skip to: 829
/* 481 */     MCD::OPC_Decode, 164, 3, 20, // Opcode: C_SUBW
/* 485 */     MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 521
/* 490 */     MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 493 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 507
/* 498 */     MCD::OPC_CheckPredicate, 0, 70, 1, 0, // Skip to: 829
/* 503 */     MCD::OPC_Decode, 168, 3, 20, // Opcode: C_XOR
/* 507 */     MCD::OPC_FilterValue, 1, 61, 1, 0, // Skip to: 829
/* 512 */     MCD::OPC_CheckPredicate, 3, 56, 1, 0, // Skip to: 829
/* 517 */     MCD::OPC_Decode, 248, 2, 20, // Opcode: C_ADDW
/* 521 */     MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 542
/* 526 */     MCD::OPC_CheckPredicate, 0, 42, 1, 0, // Skip to: 829
/* 531 */     MCD::OPC_CheckField, 12, 1, 0, 35, 1, 0, // Skip to: 829
/* 538 */     MCD::OPC_Decode, 153, 3, 20, // Opcode: C_OR
/* 542 */     MCD::OPC_FilterValue, 3, 26, 1, 0, // Skip to: 829
/* 547 */     MCD::OPC_CheckPredicate, 0, 21, 1, 0, // Skip to: 829
/* 552 */     MCD::OPC_CheckField, 12, 1, 0, 14, 1, 0, // Skip to: 829
/* 559 */     MCD::OPC_Decode, 250, 2, 20, // Opcode: C_AND
/* 563 */     MCD::OPC_FilterValue, 2, 5, 1, 0, // Skip to: 829
/* 568 */     MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 571 */     MCD::OPC_FilterValue, 0, 41, 0, 0, // Skip to: 617
/* 576 */     MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 592
/* 581 */     MCD::OPC_CheckField, 2, 5, 0, 4, 0, 0, // Skip to: 592
/* 588 */     MCD::OPC_Decode, 138, 3, 21, // Opcode: C_JR
/* 592 */     MCD::OPC_CheckPredicate, 1, 11, 0, 0, // Skip to: 608
/* 597 */     MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 608
/* 604 */     MCD::OPC_Decode, 148, 3, 22, // Opcode: C_MV_HINT
/* 608 */     MCD::OPC_CheckPredicate, 0, 216, 0, 0, // Skip to: 829
/* 613 */     MCD::OPC_Decode, 147, 3, 23, // Opcode: C_MV
/* 617 */     MCD::OPC_FilterValue, 1, 207, 0, 0, // Skip to: 829
/* 622 */     MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 638
/* 627 */     MCD::OPC_CheckField, 2, 10, 0, 4, 0, 0, // Skip to: 638
/* 634 */     MCD::OPC_Decode, 254, 2, 0, // Opcode: C_EBREAK
/* 638 */     MCD::OPC_CheckPredicate, 1, 11, 0, 0, // Skip to: 654
/* 643 */     MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 654
/* 650 */     MCD::OPC_Decode, 249, 2, 24, // Opcode: C_ADD_HINT
/* 654 */     MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 670
/* 659 */     MCD::OPC_CheckField, 2, 5, 0, 4, 0, 0, // Skip to: 670
/* 666 */     MCD::OPC_Decode, 137, 3, 21, // Opcode: C_JALR
/* 670 */     MCD::OPC_CheckPredicate, 0, 154, 0, 0, // Skip to: 829
/* 675 */     MCD::OPC_Decode, 240, 2, 25, // Opcode: C_ADD
/* 679 */     MCD::OPC_FilterValue, 5, 45, 0, 0, // Skip to: 729
/* 684 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 687 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 701
/* 692 */     MCD::OPC_CheckPredicate, 2, 132, 0, 0, // Skip to: 829
/* 697 */     MCD::OPC_Decode, 131, 3, 7, // Opcode: C_FSD
/* 701 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 715
/* 706 */     MCD::OPC_CheckPredicate, 0, 118, 0, 0, // Skip to: 829
/* 711 */     MCD::OPC_Decode, 135, 3, 26, // Opcode: C_J
/* 715 */     MCD::OPC_FilterValue, 2, 109, 0, 0, // Skip to: 829
/* 720 */     MCD::OPC_CheckPredicate, 2, 104, 0, 0, // Skip to: 829
/* 725 */     MCD::OPC_Decode, 132, 3, 27, // Opcode: C_FSDSP
/* 729 */     MCD::OPC_FilterValue, 6, 45, 0, 0, // Skip to: 779
/* 734 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 737 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 751
/* 742 */     MCD::OPC_CheckPredicate, 0, 82, 0, 0, // Skip to: 829
/* 747 */     MCD::OPC_Decode, 165, 3, 9, // Opcode: C_SW
/* 751 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 765
/* 756 */     MCD::OPC_CheckPredicate, 0, 68, 0, 0, // Skip to: 829
/* 761 */     MCD::OPC_Decode, 252, 2, 28, // Opcode: C_BEQZ
/* 765 */     MCD::OPC_FilterValue, 2, 59, 0, 0, // Skip to: 829
/* 770 */     MCD::OPC_CheckPredicate, 0, 54, 0, 0, // Skip to: 829
/* 775 */     MCD::OPC_Decode, 166, 3, 29, // Opcode: C_SWSP
/* 779 */     MCD::OPC_FilterValue, 7, 45, 0, 0, // Skip to: 829
/* 784 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 787 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 801
/* 792 */     MCD::OPC_CheckPredicate, 3, 32, 0, 0, // Skip to: 829
/* 797 */     MCD::OPC_Decode, 154, 3, 13, // Opcode: C_SD
/* 801 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 815
/* 806 */     MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 829
/* 811 */     MCD::OPC_Decode, 253, 2, 28, // Opcode: C_BNEZ
/* 815 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 829
/* 820 */     MCD::OPC_CheckPredicate, 3, 4, 0, 0, // Skip to: 829
/* 825 */     MCD::OPC_Decode, 155, 3, 30, // Opcode: C_SDSP
/* 829 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 7,  // Inst{6-0} ...
/* 3 */       MCD::OPC_FilterValue, 3, 76, 0, 0, // Skip to: 84
/* 8 */       MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 20
/* 16 */      MCD::OPC_Decode, 130, 4, 31, // Opcode: LB
/* 20 */      MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 29
/* 25 */      MCD::OPC_Decode, 133, 4, 31, // Opcode: LH
/* 29 */      MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 38
/* 34 */      MCD::OPC_Decode, 144, 4, 31, // Opcode: LW
/* 38 */      MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 52
/* 43 */      MCD::OPC_CheckPredicate, 4, 96, 42, 0, // Skip to: 10896
/* 48 */      MCD::OPC_Decode, 132, 4, 31, // Opcode: LD
/* 52 */      MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 61
/* 57 */      MCD::OPC_Decode, 131, 4, 31, // Opcode: LBU
/* 61 */      MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 70
/* 66 */      MCD::OPC_Decode, 134, 4, 31, // Opcode: LHU
/* 70 */      MCD::OPC_FilterValue, 6, 69, 42, 0, // Skip to: 10896
/* 75 */      MCD::OPC_CheckPredicate, 4, 64, 42, 0, // Skip to: 10896
/* 80 */      MCD::OPC_Decode, 145, 4, 31, // Opcode: LWU
/* 84 */      MCD::OPC_FilterValue, 7, 20, 2, 0, // Skip to: 621
/* 89 */      MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 92 */      MCD::OPC_FilterValue, 0, 131, 0, 0, // Skip to: 228
/* 97 */      MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 100 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 136
/* 105 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 108 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 122
/* 113 */     MCD::OPC_CheckPredicate, 5, 26, 42, 0, // Skip to: 10896
/* 118 */     MCD::OPC_Decode, 225, 5, 32, // Opcode: VLBU_V
/* 122 */     MCD::OPC_FilterValue, 16, 17, 42, 0, // Skip to: 10896
/* 127 */     MCD::OPC_CheckPredicate, 5, 12, 42, 0, // Skip to: 10896
/* 132 */     MCD::OPC_Decode, 224, 5, 32, // Opcode: VLBUFF_V
/* 136 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 150
/* 141 */     MCD::OPC_CheckPredicate, 5, 254, 41, 0, // Skip to: 10896
/* 146 */     MCD::OPC_Decode, 233, 5, 33, // Opcode: VLSBU_V
/* 150 */     MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 164
/* 155 */     MCD::OPC_CheckPredicate, 5, 240, 41, 0, // Skip to: 10896
/* 160 */     MCD::OPC_Decode, 244, 5, 34, // Opcode: VLXBU_V
/* 164 */     MCD::OPC_FilterValue, 4, 31, 0, 0, // Skip to: 200
/* 169 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 172 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 186
/* 177 */     MCD::OPC_CheckPredicate, 5, 218, 41, 0, // Skip to: 10896
/* 182 */     MCD::OPC_Decode, 226, 5, 32, // Opcode: VLB_V
/* 186 */     MCD::OPC_FilterValue, 16, 209, 41, 0, // Skip to: 10896
/* 191 */     MCD::OPC_CheckPredicate, 5, 204, 41, 0, // Skip to: 10896
/* 196 */     MCD::OPC_Decode, 223, 5, 32, // Opcode: VLBFF_V
/* 200 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 214
/* 205 */     MCD::OPC_CheckPredicate, 5, 190, 41, 0, // Skip to: 10896
/* 210 */     MCD::OPC_Decode, 234, 5, 33, // Opcode: VLSB_V
/* 214 */     MCD::OPC_FilterValue, 7, 181, 41, 0, // Skip to: 10896
/* 219 */     MCD::OPC_CheckPredicate, 5, 176, 41, 0, // Skip to: 10896
/* 224 */     MCD::OPC_Decode, 245, 5, 34, // Opcode: VLXB_V
/* 228 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 242
/* 233 */     MCD::OPC_CheckPredicate, 6, 162, 41, 0, // Skip to: 10896
/* 238 */     MCD::OPC_Decode, 211, 3, 35, // Opcode: FLW
/* 242 */     MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 256
/* 247 */     MCD::OPC_CheckPredicate, 7, 148, 41, 0, // Skip to: 10896
/* 252 */     MCD::OPC_Decode, 206, 3, 36, // Opcode: FLD
/* 256 */     MCD::OPC_FilterValue, 5, 131, 0, 0, // Skip to: 392
/* 261 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 264 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 300
/* 269 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 272 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 286
/* 277 */     MCD::OPC_CheckPredicate, 5, 118, 41, 0, // Skip to: 10896
/* 282 */     MCD::OPC_Decode, 231, 5, 32, // Opcode: VLHU_V
/* 286 */     MCD::OPC_FilterValue, 16, 109, 41, 0, // Skip to: 10896
/* 291 */     MCD::OPC_CheckPredicate, 5, 104, 41, 0, // Skip to: 10896
/* 296 */     MCD::OPC_Decode, 230, 5, 32, // Opcode: VLHUFF_V
/* 300 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 314
/* 305 */     MCD::OPC_CheckPredicate, 5, 90, 41, 0, // Skip to: 10896
/* 310 */     MCD::OPC_Decode, 236, 5, 33, // Opcode: VLSHU_V
/* 314 */     MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 328
/* 319 */     MCD::OPC_CheckPredicate, 5, 76, 41, 0, // Skip to: 10896
/* 324 */     MCD::OPC_Decode, 247, 5, 34, // Opcode: VLXHU_V
/* 328 */     MCD::OPC_FilterValue, 4, 31, 0, 0, // Skip to: 364
/* 333 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 336 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 350
/* 341 */     MCD::OPC_CheckPredicate, 5, 54, 41, 0, // Skip to: 10896
/* 346 */     MCD::OPC_Decode, 232, 5, 32, // Opcode: VLH_V
/* 350 */     MCD::OPC_FilterValue, 16, 45, 41, 0, // Skip to: 10896
/* 355 */     MCD::OPC_CheckPredicate, 5, 40, 41, 0, // Skip to: 10896
/* 360 */     MCD::OPC_Decode, 229, 5, 32, // Opcode: VLHFF_V
/* 364 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 378
/* 369 */     MCD::OPC_CheckPredicate, 5, 26, 41, 0, // Skip to: 10896
/* 374 */     MCD::OPC_Decode, 237, 5, 33, // Opcode: VLSH_V
/* 378 */     MCD::OPC_FilterValue, 7, 17, 41, 0, // Skip to: 10896
/* 383 */     MCD::OPC_CheckPredicate, 5, 12, 41, 0, // Skip to: 10896
/* 388 */     MCD::OPC_Decode, 248, 5, 34, // Opcode: VLXH_V
/* 392 */     MCD::OPC_FilterValue, 6, 131, 0, 0, // Skip to: 528
/* 397 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 400 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 436
/* 405 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 408 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 422
/* 413 */     MCD::OPC_CheckPredicate, 5, 238, 40, 0, // Skip to: 10896
/* 418 */     MCD::OPC_Decode, 242, 5, 32, // Opcode: VLWU_V
/* 422 */     MCD::OPC_FilterValue, 16, 229, 40, 0, // Skip to: 10896
/* 427 */     MCD::OPC_CheckPredicate, 5, 224, 40, 0, // Skip to: 10896
/* 432 */     MCD::OPC_Decode, 241, 5, 32, // Opcode: VLWUFF_V
/* 436 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 450
/* 441 */     MCD::OPC_CheckPredicate, 5, 210, 40, 0, // Skip to: 10896
/* 446 */     MCD::OPC_Decode, 238, 5, 33, // Opcode: VLSWU_V
/* 450 */     MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 464
/* 455 */     MCD::OPC_CheckPredicate, 5, 196, 40, 0, // Skip to: 10896
/* 460 */     MCD::OPC_Decode, 249, 5, 34, // Opcode: VLXWU_V
/* 464 */     MCD::OPC_FilterValue, 4, 31, 0, 0, // Skip to: 500
/* 469 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 472 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 486
/* 477 */     MCD::OPC_CheckPredicate, 5, 174, 40, 0, // Skip to: 10896
/* 482 */     MCD::OPC_Decode, 243, 5, 32, // Opcode: VLW_V
/* 486 */     MCD::OPC_FilterValue, 16, 165, 40, 0, // Skip to: 10896
/* 491 */     MCD::OPC_CheckPredicate, 5, 160, 40, 0, // Skip to: 10896
/* 496 */     MCD::OPC_Decode, 240, 5, 32, // Opcode: VLWFF_V
/* 500 */     MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 514
/* 505 */     MCD::OPC_CheckPredicate, 5, 146, 40, 0, // Skip to: 10896
/* 510 */     MCD::OPC_Decode, 239, 5, 33, // Opcode: VLSW_V
/* 514 */     MCD::OPC_FilterValue, 7, 137, 40, 0, // Skip to: 10896
/* 519 */     MCD::OPC_CheckPredicate, 5, 132, 40, 0, // Skip to: 10896
/* 524 */     MCD::OPC_Decode, 250, 5, 34, // Opcode: VLXW_V
/* 528 */     MCD::OPC_FilterValue, 7, 123, 40, 0, // Skip to: 10896
/* 533 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 536 */     MCD::OPC_FilterValue, 0, 52, 0, 0, // Skip to: 593
/* 541 */     MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 544 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 558
/* 549 */     MCD::OPC_CheckPredicate, 5, 102, 40, 0, // Skip to: 10896
/* 554 */     MCD::OPC_Decode, 228, 5, 32, // Opcode: VLE_V
/* 558 */     MCD::OPC_FilterValue, 8, 16, 0, 0, // Skip to: 579
/* 563 */     MCD::OPC_CheckPredicate, 5, 88, 40, 0, // Skip to: 10896
/* 568 */     MCD::OPC_CheckField, 25, 1, 1, 81, 40, 0, // Skip to: 10896
/* 575 */     MCD::OPC_Decode, 222, 5, 37, // Opcode: VL1R_V
/* 579 */     MCD::OPC_FilterValue, 16, 72, 40, 0, // Skip to: 10896
/* 584 */     MCD::OPC_CheckPredicate, 5, 67, 40, 0, // Skip to: 10896
/* 589 */     MCD::OPC_Decode, 227, 5, 32, // Opcode: VLEFF_V
/* 593 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 607
/* 598 */     MCD::OPC_CheckPredicate, 5, 53, 40, 0, // Skip to: 10896
/* 603 */     MCD::OPC_Decode, 235, 5, 33, // Opcode: VLSE_V
/* 607 */     MCD::OPC_FilterValue, 3, 44, 40, 0, // Skip to: 10896
/* 612 */     MCD::OPC_CheckPredicate, 5, 39, 40, 0, // Skip to: 10896
/* 617 */     MCD::OPC_Decode, 246, 5, 34, // Opcode: VLXE_V
/* 621 */     MCD::OPC_FilterValue, 15, 52, 0, 0, // Skip to: 678
/* 626 */     MCD::OPC_ExtractField, 7, 13,  // Inst{19-7} ...
/* 629 */     MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 662
/* 634 */     MCD::OPC_ExtractField, 28, 4,  // Inst{31-28} ...
/* 637 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 646
/* 642 */     MCD::OPC_Decode, 201, 3, 38, // Opcode: FENCE
/* 646 */     MCD::OPC_FilterValue, 8, 5, 40, 0, // Skip to: 10896
/* 651 */     MCD::OPC_CheckField, 20, 8, 51, 254, 39, 0, // Skip to: 10896
/* 658 */     MCD::OPC_Decode, 203, 3, 0, // Opcode: FENCE_TSO
/* 662 */     MCD::OPC_FilterValue, 32, 245, 39, 0, // Skip to: 10896
/* 667 */     MCD::OPC_CheckField, 20, 12, 0, 238, 39, 0, // Skip to: 10896
/* 674 */     MCD::OPC_Decode, 202, 3, 0, // Opcode: FENCE_I
/* 678 */     MCD::OPC_FilterValue, 19, 224, 1, 0, // Skip to: 1163
/* 683 */     MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 686 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 695
/* 691 */     MCD::OPC_Decode, 245, 1, 31, // Opcode: ADDI
/* 695 */     MCD::OPC_FilterValue, 1, 30, 1, 0, // Skip to: 986
/* 700 */     MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 703 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 712
/* 708 */     MCD::OPC_Decode, 209, 4, 39, // Opcode: SLLI
/* 712 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 726
/* 717 */     MCD::OPC_CheckPredicate, 8, 190, 39, 0, // Skip to: 10896
/* 722 */     MCD::OPC_Decode, 206, 4, 40, // Opcode: SHFLI
/* 726 */     MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 740
/* 731 */     MCD::OPC_CheckPredicate, 9, 176, 39, 0, // Skip to: 10896
/* 736 */     MCD::OPC_Decode, 214, 4, 39, // Opcode: SLOI
/* 740 */     MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 754
/* 745 */     MCD::OPC_CheckPredicate, 10, 162, 39, 0, // Skip to: 10896
/* 750 */     MCD::OPC_Decode, 189, 4, 39, // Opcode: SBSETI
/* 754 */     MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 768
/* 759 */     MCD::OPC_CheckPredicate, 10, 148, 39, 0, // Skip to: 10896
/* 764 */     MCD::OPC_Decode, 178, 4, 39, // Opcode: SBCLRI
/* 768 */     MCD::OPC_FilterValue, 24, 199, 0, 0, // Skip to: 972
/* 773 */     MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 776 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 790
/* 781 */     MCD::OPC_CheckPredicate, 9, 126, 39, 0, // Skip to: 10896
/* 786 */     MCD::OPC_Decode, 220, 2, 41, // Opcode: CLZ
/* 790 */     MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 804
/* 795 */     MCD::OPC_CheckPredicate, 9, 112, 39, 0, // Skip to: 10896
/* 800 */     MCD::OPC_Decode, 238, 2, 41, // Opcode: CTZ
/* 804 */     MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 818
/* 809 */     MCD::OPC_CheckPredicate, 9, 98, 39, 0, // Skip to: 10896
/* 814 */     MCD::OPC_Decode, 164, 4, 41, // Opcode: PCNT
/* 818 */     MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 832
/* 823 */     MCD::OPC_CheckPredicate, 11, 84, 39, 0, // Skip to: 10896
/* 828 */     MCD::OPC_Decode, 210, 2, 41, // Opcode: BMATFLIP
/* 832 */     MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 846
/* 837 */     MCD::OPC_CheckPredicate, 9, 70, 39, 0, // Skip to: 10896
/* 842 */     MCD::OPC_Decode, 201, 4, 41, // Opcode: SEXTB
/* 846 */     MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 860
/* 851 */     MCD::OPC_CheckPredicate, 9, 56, 39, 0, // Skip to: 10896
/* 856 */     MCD::OPC_Decode, 202, 4, 41, // Opcode: SEXTH
/* 860 */     MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 874
/* 865 */     MCD::OPC_CheckPredicate, 12, 42, 39, 0, // Skip to: 10896
/* 870 */     MCD::OPC_Decode, 224, 2, 41, // Opcode: CRC32B
/* 874 */     MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 888
/* 879 */     MCD::OPC_CheckPredicate, 12, 28, 39, 0, // Skip to: 10896
/* 884 */     MCD::OPC_Decode, 230, 2, 41, // Opcode: CRC32H
/* 888 */     MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 902
/* 893 */     MCD::OPC_CheckPredicate, 12, 14, 39, 0, // Skip to: 10896
/* 898 */     MCD::OPC_Decode, 231, 2, 41, // Opcode: CRC32W
/* 902 */     MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 916
/* 907 */     MCD::OPC_CheckPredicate, 13, 0, 39, 0, // Skip to: 10896
/* 912 */     MCD::OPC_Decode, 229, 2, 41, // Opcode: CRC32D
/* 916 */     MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 930
/* 921 */     MCD::OPC_CheckPredicate, 12, 242, 38, 0, // Skip to: 10896
/* 926 */     MCD::OPC_Decode, 225, 2, 41, // Opcode: CRC32CB
/* 930 */     MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 944
/* 935 */     MCD::OPC_CheckPredicate, 12, 228, 38, 0, // Skip to: 10896
/* 940 */     MCD::OPC_Decode, 227, 2, 41, // Opcode: CRC32CH
/* 944 */     MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 958
/* 949 */     MCD::OPC_CheckPredicate, 12, 214, 38, 0, // Skip to: 10896
/* 954 */     MCD::OPC_Decode, 228, 2, 41, // Opcode: CRC32CW
/* 958 */     MCD::OPC_FilterValue, 27, 205, 38, 0, // Skip to: 10896
/* 963 */     MCD::OPC_CheckPredicate, 13, 200, 38, 0, // Skip to: 10896
/* 968 */     MCD::OPC_Decode, 226, 2, 41, // Opcode: CRC32CD
/* 972 */     MCD::OPC_FilterValue, 26, 191, 38, 0, // Skip to: 10896
/* 977 */     MCD::OPC_CheckPredicate, 10, 186, 38, 0, // Skip to: 10896
/* 982 */     MCD::OPC_Decode, 185, 4, 39, // Opcode: SBINVI
/* 986 */     MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 995
/* 991 */     MCD::OPC_Decode, 218, 4, 31, // Opcode: SLTI
/* 995 */     MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 1004
/* 1000 */    MCD::OPC_Decode, 219, 4, 31, // Opcode: SLTIU
/* 1004 */    MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 1013
/* 1009 */    MCD::OPC_Decode, 208, 7, 31, // Opcode: XORI
/* 1013 */    MCD::OPC_FilterValue, 5, 127, 0, 0, // Skip to: 1145
/* 1018 */    MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 1021 */    MCD::OPC_FilterValue, 0, 105, 0, 0, // Skip to: 1131
/* 1026 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 1029 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1038
/* 1034 */    MCD::OPC_Decode, 227, 4, 39, // Opcode: SRLI
/* 1038 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1052
/* 1043 */    MCD::OPC_CheckPredicate, 8, 120, 38, 0, // Skip to: 10896
/* 1048 */    MCD::OPC_Decode, 241, 4, 40, // Opcode: UNSHFLI
/* 1052 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1066
/* 1057 */    MCD::OPC_CheckPredicate, 9, 106, 38, 0, // Skip to: 10896
/* 1062 */    MCD::OPC_Decode, 231, 4, 39, // Opcode: SROI
/* 1066 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1080
/* 1071 */    MCD::OPC_CheckPredicate, 8, 92, 38, 0, // Skip to: 10896
/* 1076 */    MCD::OPC_Decode, 249, 3, 39, // Opcode: GORCI
/* 1080 */    MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 1089
/* 1085 */    MCD::OPC_Decode, 222, 4, 39, // Opcode: SRAI
/* 1089 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 1103
/* 1094 */    MCD::OPC_CheckPredicate, 10, 69, 38, 0, // Skip to: 10896
/* 1099 */    MCD::OPC_Decode, 182, 4, 39, // Opcode: SBEXTI
/* 1103 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 1117
/* 1108 */    MCD::OPC_CheckPredicate, 14, 55, 38, 0, // Skip to: 10896
/* 1113 */    MCD::OPC_Decode, 173, 4, 39, // Opcode: RORI
/* 1117 */    MCD::OPC_FilterValue, 13, 46, 38, 0, // Skip to: 10896
/* 1122 */    MCD::OPC_CheckPredicate, 8, 41, 38, 0, // Skip to: 10896
/* 1127 */    MCD::OPC_Decode, 253, 3, 39, // Opcode: GREVI
/* 1131 */    MCD::OPC_FilterValue, 1, 32, 38, 0, // Skip to: 10896
/* 1136 */    MCD::OPC_CheckPredicate, 15, 27, 38, 0, // Skip to: 10896
/* 1141 */    MCD::OPC_Decode, 242, 3, 42, // Opcode: FSRI
/* 1145 */    MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 1154
/* 1150 */    MCD::OPC_Decode, 157, 4, 31, // Opcode: ORI
/* 1154 */    MCD::OPC_FilterValue, 7, 9, 38, 0, // Skip to: 10896
/* 1159 */    MCD::OPC_Decode, 196, 2, 31, // Opcode: ANDI
/* 1163 */    MCD::OPC_FilterValue, 23, 4, 0, 0, // Skip to: 1172
/* 1168 */    MCD::OPC_Decode, 198, 2, 43, // Opcode: AUIPC
/* 1172 */    MCD::OPC_FilterValue, 27, 66, 1, 0, // Skip to: 1499
/* 1177 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1180 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 1194
/* 1185 */    MCD::OPC_CheckPredicate, 4, 234, 37, 0, // Skip to: 10896
/* 1190 */    MCD::OPC_Decode, 246, 1, 31, // Opcode: ADDIW
/* 1194 */    MCD::OPC_FilterValue, 1, 172, 0, 0, // Skip to: 1371
/* 1199 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1202 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1223
/* 1207 */    MCD::OPC_CheckPredicate, 4, 212, 37, 0, // Skip to: 10896
/* 1212 */    MCD::OPC_CheckField, 25, 1, 0, 205, 37, 0, // Skip to: 10896
/* 1219 */    MCD::OPC_Decode, 211, 4, 44, // Opcode: SLLIW
/* 1223 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1237
/* 1228 */    MCD::OPC_CheckPredicate, 16, 191, 37, 0, // Skip to: 10896
/* 1233 */    MCD::OPC_Decode, 210, 4, 39, // Opcode: SLLIUW
/* 1237 */    MCD::OPC_FilterValue, 8, 16, 0, 0, // Skip to: 1258
/* 1242 */    MCD::OPC_CheckPredicate, 16, 177, 37, 0, // Skip to: 10896
/* 1247 */    MCD::OPC_CheckField, 25, 1, 0, 170, 37, 0, // Skip to: 10896
/* 1254 */    MCD::OPC_Decode, 215, 4, 44, // Opcode: SLOIW
/* 1258 */    MCD::OPC_FilterValue, 10, 16, 0, 0, // Skip to: 1279
/* 1263 */    MCD::OPC_CheckPredicate, 17, 156, 37, 0, // Skip to: 10896
/* 1268 */    MCD::OPC_CheckField, 25, 1, 0, 149, 37, 0, // Skip to: 10896
/* 1275 */    MCD::OPC_Decode, 190, 4, 44, // Opcode: SBSETIW
/* 1279 */    MCD::OPC_FilterValue, 18, 16, 0, 0, // Skip to: 1300
/* 1284 */    MCD::OPC_CheckPredicate, 17, 135, 37, 0, // Skip to: 10896
/* 1289 */    MCD::OPC_CheckField, 25, 1, 0, 128, 37, 0, // Skip to: 10896
/* 1296 */    MCD::OPC_Decode, 179, 4, 44, // Opcode: SBCLRIW
/* 1300 */    MCD::OPC_FilterValue, 24, 45, 0, 0, // Skip to: 1350
/* 1305 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 1308 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 1322
/* 1313 */    MCD::OPC_CheckPredicate, 16, 106, 37, 0, // Skip to: 10896
/* 1318 */    MCD::OPC_Decode, 221, 2, 41, // Opcode: CLZW
/* 1322 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 1336
/* 1327 */    MCD::OPC_CheckPredicate, 16, 92, 37, 0, // Skip to: 10896
/* 1332 */    MCD::OPC_Decode, 239, 2, 41, // Opcode: CTZW
/* 1336 */    MCD::OPC_FilterValue, 2, 83, 37, 0, // Skip to: 10896
/* 1341 */    MCD::OPC_CheckPredicate, 16, 78, 37, 0, // Skip to: 10896
/* 1346 */    MCD::OPC_Decode, 165, 4, 41, // Opcode: PCNTW
/* 1350 */    MCD::OPC_FilterValue, 26, 69, 37, 0, // Skip to: 10896
/* 1355 */    MCD::OPC_CheckPredicate, 17, 64, 37, 0, // Skip to: 10896
/* 1360 */    MCD::OPC_CheckField, 25, 1, 0, 57, 37, 0, // Skip to: 10896
/* 1367 */    MCD::OPC_Decode, 186, 4, 44, // Opcode: SBINVIW
/* 1371 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1385
/* 1376 */    MCD::OPC_CheckPredicate, 16, 43, 37, 0, // Skip to: 10896
/* 1381 */    MCD::OPC_Decode, 247, 1, 31, // Opcode: ADDIWU
/* 1385 */    MCD::OPC_FilterValue, 5, 34, 37, 0, // Skip to: 10896
/* 1390 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 1393 */    MCD::OPC_FilterValue, 0, 87, 0, 0, // Skip to: 1485
/* 1398 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 1401 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 1415
/* 1406 */    MCD::OPC_CheckPredicate, 4, 13, 37, 0, // Skip to: 10896
/* 1411 */    MCD::OPC_Decode, 228, 4, 44, // Opcode: SRLIW
/* 1415 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 1429
/* 1420 */    MCD::OPC_CheckPredicate, 16, 255, 36, 0, // Skip to: 10896
/* 1425 */    MCD::OPC_Decode, 232, 4, 44, // Opcode: SROIW
/* 1429 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 1443
/* 1434 */    MCD::OPC_CheckPredicate, 18, 241, 36, 0, // Skip to: 10896
/* 1439 */    MCD::OPC_Decode, 250, 3, 44, // Opcode: GORCIW
/* 1443 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 1457
/* 1448 */    MCD::OPC_CheckPredicate, 4, 227, 36, 0, // Skip to: 10896
/* 1453 */    MCD::OPC_Decode, 223, 4, 44, // Opcode: SRAIW
/* 1457 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 1471
/* 1462 */    MCD::OPC_CheckPredicate, 19, 213, 36, 0, // Skip to: 10896
/* 1467 */    MCD::OPC_Decode, 174, 4, 44, // Opcode: RORIW
/* 1471 */    MCD::OPC_FilterValue, 13, 204, 36, 0, // Skip to: 10896
/* 1476 */    MCD::OPC_CheckPredicate, 18, 199, 36, 0, // Skip to: 10896
/* 1481 */    MCD::OPC_Decode, 254, 3, 44, // Opcode: GREVIW
/* 1485 */    MCD::OPC_FilterValue, 2, 190, 36, 0, // Skip to: 10896
/* 1490 */    MCD::OPC_CheckPredicate, 20, 185, 36, 0, // Skip to: 10896
/* 1495 */    MCD::OPC_Decode, 243, 3, 45, // Opcode: FSRIW
/* 1499 */    MCD::OPC_FilterValue, 35, 44, 0, 0, // Skip to: 1548
/* 1504 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1507 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1516
/* 1512 */    MCD::OPC_Decode, 176, 4, 46, // Opcode: SB
/* 1516 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1525
/* 1521 */    MCD::OPC_Decode, 204, 4, 46, // Opcode: SH
/* 1525 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1534
/* 1530 */    MCD::OPC_Decode, 238, 4, 46, // Opcode: SW
/* 1534 */    MCD::OPC_FilterValue, 3, 141, 36, 0, // Skip to: 10896
/* 1539 */    MCD::OPC_CheckPredicate, 4, 136, 36, 0, // Skip to: 10896
/* 1544 */    MCD::OPC_Decode, 200, 4, 46, // Opcode: SD
/* 1548 */    MCD::OPC_FilterValue, 39, 81, 1, 0, // Skip to: 1890
/* 1553 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1556 */    MCD::OPC_FilterValue, 0, 66, 0, 0, // Skip to: 1627
/* 1561 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1564 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1585
/* 1569 */    MCD::OPC_CheckPredicate, 5, 106, 36, 0, // Skip to: 10896
/* 1574 */    MCD::OPC_CheckField, 20, 5, 0, 99, 36, 0, // Skip to: 10896
/* 1581 */    MCD::OPC_Decode, 252, 6, 32, // Opcode: VSB_V
/* 1585 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1599
/* 1590 */    MCD::OPC_CheckPredicate, 5, 85, 36, 0, // Skip to: 10896
/* 1595 */    MCD::OPC_Decode, 146, 7, 33, // Opcode: VSSB_V
/* 1599 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1613
/* 1604 */    MCD::OPC_CheckPredicate, 5, 71, 36, 0, // Skip to: 10896
/* 1609 */    MCD::OPC_Decode, 167, 7, 34, // Opcode: VSXB_V
/* 1613 */    MCD::OPC_FilterValue, 7, 62, 36, 0, // Skip to: 10896
/* 1618 */    MCD::OPC_CheckPredicate, 5, 57, 36, 0, // Skip to: 10896
/* 1623 */    MCD::OPC_Decode, 162, 7, 34, // Opcode: VSUXB_V
/* 1627 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1641
/* 1632 */    MCD::OPC_CheckPredicate, 6, 43, 36, 0, // Skip to: 10896
/* 1637 */    MCD::OPC_Decode, 247, 3, 47, // Opcode: FSW
/* 1641 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1655
/* 1646 */    MCD::OPC_CheckPredicate, 7, 29, 36, 0, // Skip to: 10896
/* 1651 */    MCD::OPC_Decode, 230, 3, 48, // Opcode: FSD
/* 1655 */    MCD::OPC_FilterValue, 5, 66, 0, 0, // Skip to: 1726
/* 1660 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1663 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1684
/* 1668 */    MCD::OPC_CheckPredicate, 5, 7, 36, 0, // Skip to: 10896
/* 1673 */    MCD::OPC_CheckField, 20, 5, 0, 0, 36, 0, // Skip to: 10896
/* 1680 */    MCD::OPC_Decode, 128, 7, 32, // Opcode: VSH_V
/* 1684 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1698
/* 1689 */    MCD::OPC_CheckPredicate, 5, 242, 35, 0, // Skip to: 10896
/* 1694 */    MCD::OPC_Decode, 148, 7, 33, // Opcode: VSSH_V
/* 1698 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1712
/* 1703 */    MCD::OPC_CheckPredicate, 5, 228, 35, 0, // Skip to: 10896
/* 1708 */    MCD::OPC_Decode, 169, 7, 34, // Opcode: VSXH_V
/* 1712 */    MCD::OPC_FilterValue, 7, 219, 35, 0, // Skip to: 10896
/* 1717 */    MCD::OPC_CheckPredicate, 5, 214, 35, 0, // Skip to: 10896
/* 1722 */    MCD::OPC_Decode, 164, 7, 34, // Opcode: VSUXH_V
/* 1726 */    MCD::OPC_FilterValue, 6, 66, 0, 0, // Skip to: 1797
/* 1731 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1734 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 1755
/* 1739 */    MCD::OPC_CheckPredicate, 5, 192, 35, 0, // Skip to: 10896
/* 1744 */    MCD::OPC_CheckField, 20, 5, 0, 185, 35, 0, // Skip to: 10896
/* 1751 */    MCD::OPC_Decode, 166, 7, 32, // Opcode: VSW_V
/* 1755 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1769
/* 1760 */    MCD::OPC_CheckPredicate, 5, 171, 35, 0, // Skip to: 10896
/* 1765 */    MCD::OPC_Decode, 159, 7, 33, // Opcode: VSSW_V
/* 1769 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1783
/* 1774 */    MCD::OPC_CheckPredicate, 5, 157, 35, 0, // Skip to: 10896
/* 1779 */    MCD::OPC_Decode, 170, 7, 34, // Opcode: VSXW_V
/* 1783 */    MCD::OPC_FilterValue, 7, 148, 35, 0, // Skip to: 10896
/* 1788 */    MCD::OPC_CheckPredicate, 5, 143, 35, 0, // Skip to: 10896
/* 1793 */    MCD::OPC_Decode, 165, 7, 34, // Opcode: VSUXW_V
/* 1797 */    MCD::OPC_FilterValue, 7, 134, 35, 0, // Skip to: 10896
/* 1802 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 1805 */    MCD::OPC_FilterValue, 0, 38, 0, 0, // Skip to: 1848
/* 1810 */    MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 1813 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 1827
/* 1818 */    MCD::OPC_CheckPredicate, 5, 113, 35, 0, // Skip to: 10896
/* 1823 */    MCD::OPC_Decode, 255, 6, 32, // Opcode: VSE_V
/* 1827 */    MCD::OPC_FilterValue, 8, 104, 35, 0, // Skip to: 10896
/* 1832 */    MCD::OPC_CheckPredicate, 5, 99, 35, 0, // Skip to: 10896
/* 1837 */    MCD::OPC_CheckField, 25, 1, 1, 92, 35, 0, // Skip to: 10896
/* 1844 */    MCD::OPC_Decode, 243, 6, 37, // Opcode: VS1R_V
/* 1848 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1862
/* 1853 */    MCD::OPC_CheckPredicate, 5, 78, 35, 0, // Skip to: 10896
/* 1858 */    MCD::OPC_Decode, 147, 7, 33, // Opcode: VSSE_V
/* 1862 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 1876
/* 1867 */    MCD::OPC_CheckPredicate, 5, 64, 35, 0, // Skip to: 10896
/* 1872 */    MCD::OPC_Decode, 168, 7, 34, // Opcode: VSXE_V
/* 1876 */    MCD::OPC_FilterValue, 7, 55, 35, 0, // Skip to: 10896
/* 1881 */    MCD::OPC_CheckPredicate, 5, 50, 35, 0, // Skip to: 10896
/* 1886 */    MCD::OPC_Decode, 163, 7, 34, // Opcode: VSUXE_V
/* 1890 */    MCD::OPC_FilterValue, 47, 107, 6, 0, // Skip to: 3538
/* 1895 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 1898 */    MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 1934
/* 1903 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1906 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1920
/* 1911 */    MCD::OPC_CheckPredicate, 21, 20, 35, 0, // Skip to: 10896
/* 1916 */    MCD::OPC_Decode, 255, 1, 49, // Opcode: AMOADD_W
/* 1920 */    MCD::OPC_FilterValue, 3, 11, 35, 0, // Skip to: 10896
/* 1925 */    MCD::OPC_CheckPredicate, 22, 6, 35, 0, // Skip to: 10896
/* 1930 */    MCD::OPC_Decode, 251, 1, 49, // Opcode: AMOADD_D
/* 1934 */    MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 1970
/* 1939 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1942 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1956
/* 1947 */    MCD::OPC_CheckPredicate, 21, 240, 34, 0, // Skip to: 10896
/* 1952 */    MCD::OPC_Decode, 130, 2, 49, // Opcode: AMOADD_W_RL
/* 1956 */    MCD::OPC_FilterValue, 3, 231, 34, 0, // Skip to: 10896
/* 1961 */    MCD::OPC_CheckPredicate, 22, 226, 34, 0, // Skip to: 10896
/* 1966 */    MCD::OPC_Decode, 254, 1, 49, // Opcode: AMOADD_D_RL
/* 1970 */    MCD::OPC_FilterValue, 2, 31, 0, 0, // Skip to: 2006
/* 1975 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 1978 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 1992
/* 1983 */    MCD::OPC_CheckPredicate, 21, 204, 34, 0, // Skip to: 10896
/* 1988 */    MCD::OPC_Decode, 128, 2, 49, // Opcode: AMOADD_W_AQ
/* 1992 */    MCD::OPC_FilterValue, 3, 195, 34, 0, // Skip to: 10896
/* 1997 */    MCD::OPC_CheckPredicate, 22, 190, 34, 0, // Skip to: 10896
/* 2002 */    MCD::OPC_Decode, 252, 1, 49, // Opcode: AMOADD_D_AQ
/* 2006 */    MCD::OPC_FilterValue, 3, 31, 0, 0, // Skip to: 2042
/* 2011 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2014 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2028
/* 2019 */    MCD::OPC_CheckPredicate, 21, 168, 34, 0, // Skip to: 10896
/* 2024 */    MCD::OPC_Decode, 129, 2, 49, // Opcode: AMOADD_W_AQ_RL
/* 2028 */    MCD::OPC_FilterValue, 3, 159, 34, 0, // Skip to: 10896
/* 2033 */    MCD::OPC_CheckPredicate, 22, 154, 34, 0, // Skip to: 10896
/* 2038 */    MCD::OPC_Decode, 253, 1, 49, // Opcode: AMOADD_D_AQ_RL
/* 2042 */    MCD::OPC_FilterValue, 4, 31, 0, 0, // Skip to: 2078
/* 2047 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2050 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2064
/* 2055 */    MCD::OPC_CheckPredicate, 21, 132, 34, 0, // Skip to: 10896
/* 2060 */    MCD::OPC_Decode, 183, 2, 49, // Opcode: AMOSWAP_W
/* 2064 */    MCD::OPC_FilterValue, 3, 123, 34, 0, // Skip to: 10896
/* 2069 */    MCD::OPC_CheckPredicate, 22, 118, 34, 0, // Skip to: 10896
/* 2074 */    MCD::OPC_Decode, 179, 2, 49, // Opcode: AMOSWAP_D
/* 2078 */    MCD::OPC_FilterValue, 5, 31, 0, 0, // Skip to: 2114
/* 2083 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2086 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2100
/* 2091 */    MCD::OPC_CheckPredicate, 21, 96, 34, 0, // Skip to: 10896
/* 2096 */    MCD::OPC_Decode, 186, 2, 49, // Opcode: AMOSWAP_W_RL
/* 2100 */    MCD::OPC_FilterValue, 3, 87, 34, 0, // Skip to: 10896
/* 2105 */    MCD::OPC_CheckPredicate, 22, 82, 34, 0, // Skip to: 10896
/* 2110 */    MCD::OPC_Decode, 182, 2, 49, // Opcode: AMOSWAP_D_RL
/* 2114 */    MCD::OPC_FilterValue, 6, 31, 0, 0, // Skip to: 2150
/* 2119 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2122 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2136
/* 2127 */    MCD::OPC_CheckPredicate, 21, 60, 34, 0, // Skip to: 10896
/* 2132 */    MCD::OPC_Decode, 184, 2, 49, // Opcode: AMOSWAP_W_AQ
/* 2136 */    MCD::OPC_FilterValue, 3, 51, 34, 0, // Skip to: 10896
/* 2141 */    MCD::OPC_CheckPredicate, 22, 46, 34, 0, // Skip to: 10896
/* 2146 */    MCD::OPC_Decode, 180, 2, 49, // Opcode: AMOSWAP_D_AQ
/* 2150 */    MCD::OPC_FilterValue, 7, 31, 0, 0, // Skip to: 2186
/* 2155 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2158 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2172
/* 2163 */    MCD::OPC_CheckPredicate, 21, 24, 34, 0, // Skip to: 10896
/* 2168 */    MCD::OPC_Decode, 185, 2, 49, // Opcode: AMOSWAP_W_AQ_RL
/* 2172 */    MCD::OPC_FilterValue, 3, 15, 34, 0, // Skip to: 10896
/* 2177 */    MCD::OPC_CheckPredicate, 22, 10, 34, 0, // Skip to: 10896
/* 2182 */    MCD::OPC_Decode, 181, 2, 49, // Opcode: AMOSWAP_D_AQ_RL
/* 2186 */    MCD::OPC_FilterValue, 8, 45, 0, 0, // Skip to: 2236
/* 2191 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2194 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2215
/* 2199 */    MCD::OPC_CheckPredicate, 21, 244, 33, 0, // Skip to: 10896
/* 2204 */    MCD::OPC_CheckField, 20, 5, 0, 237, 33, 0, // Skip to: 10896
/* 2211 */    MCD::OPC_Decode, 139, 4, 41, // Opcode: LR_W
/* 2215 */    MCD::OPC_FilterValue, 3, 228, 33, 0, // Skip to: 10896
/* 2220 */    MCD::OPC_CheckPredicate, 22, 223, 33, 0, // Skip to: 10896
/* 2225 */    MCD::OPC_CheckField, 20, 5, 0, 216, 33, 0, // Skip to: 10896
/* 2232 */    MCD::OPC_Decode, 135, 4, 41, // Opcode: LR_D
/* 2236 */    MCD::OPC_FilterValue, 9, 45, 0, 0, // Skip to: 2286
/* 2241 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2244 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2265
/* 2249 */    MCD::OPC_CheckPredicate, 21, 194, 33, 0, // Skip to: 10896
/* 2254 */    MCD::OPC_CheckField, 20, 5, 0, 187, 33, 0, // Skip to: 10896
/* 2261 */    MCD::OPC_Decode, 142, 4, 41, // Opcode: LR_W_RL
/* 2265 */    MCD::OPC_FilterValue, 3, 178, 33, 0, // Skip to: 10896
/* 2270 */    MCD::OPC_CheckPredicate, 22, 173, 33, 0, // Skip to: 10896
/* 2275 */    MCD::OPC_CheckField, 20, 5, 0, 166, 33, 0, // Skip to: 10896
/* 2282 */    MCD::OPC_Decode, 138, 4, 41, // Opcode: LR_D_RL
/* 2286 */    MCD::OPC_FilterValue, 10, 45, 0, 0, // Skip to: 2336
/* 2291 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2294 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2315
/* 2299 */    MCD::OPC_CheckPredicate, 21, 144, 33, 0, // Skip to: 10896
/* 2304 */    MCD::OPC_CheckField, 20, 5, 0, 137, 33, 0, // Skip to: 10896
/* 2311 */    MCD::OPC_Decode, 140, 4, 41, // Opcode: LR_W_AQ
/* 2315 */    MCD::OPC_FilterValue, 3, 128, 33, 0, // Skip to: 10896
/* 2320 */    MCD::OPC_CheckPredicate, 22, 123, 33, 0, // Skip to: 10896
/* 2325 */    MCD::OPC_CheckField, 20, 5, 0, 116, 33, 0, // Skip to: 10896
/* 2332 */    MCD::OPC_Decode, 136, 4, 41, // Opcode: LR_D_AQ
/* 2336 */    MCD::OPC_FilterValue, 11, 45, 0, 0, // Skip to: 2386
/* 2341 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2344 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2365
/* 2349 */    MCD::OPC_CheckPredicate, 21, 94, 33, 0, // Skip to: 10896
/* 2354 */    MCD::OPC_CheckField, 20, 5, 0, 87, 33, 0, // Skip to: 10896
/* 2361 */    MCD::OPC_Decode, 141, 4, 41, // Opcode: LR_W_AQ_RL
/* 2365 */    MCD::OPC_FilterValue, 3, 78, 33, 0, // Skip to: 10896
/* 2370 */    MCD::OPC_CheckPredicate, 22, 73, 33, 0, // Skip to: 10896
/* 2375 */    MCD::OPC_CheckField, 20, 5, 0, 66, 33, 0, // Skip to: 10896
/* 2382 */    MCD::OPC_Decode, 137, 4, 41, // Opcode: LR_D_AQ_RL
/* 2386 */    MCD::OPC_FilterValue, 12, 31, 0, 0, // Skip to: 2422
/* 2391 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2394 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2408
/* 2399 */    MCD::OPC_CheckPredicate, 21, 44, 33, 0, // Skip to: 10896
/* 2404 */    MCD::OPC_Decode, 196, 4, 49, // Opcode: SC_W
/* 2408 */    MCD::OPC_FilterValue, 3, 35, 33, 0, // Skip to: 10896
/* 2413 */    MCD::OPC_CheckPredicate, 22, 30, 33, 0, // Skip to: 10896
/* 2418 */    MCD::OPC_Decode, 192, 4, 49, // Opcode: SC_D
/* 2422 */    MCD::OPC_FilterValue, 13, 31, 0, 0, // Skip to: 2458
/* 2427 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2430 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2444
/* 2435 */    MCD::OPC_CheckPredicate, 21, 8, 33, 0, // Skip to: 10896
/* 2440 */    MCD::OPC_Decode, 199, 4, 49, // Opcode: SC_W_RL
/* 2444 */    MCD::OPC_FilterValue, 3, 255, 32, 0, // Skip to: 10896
/* 2449 */    MCD::OPC_CheckPredicate, 22, 250, 32, 0, // Skip to: 10896
/* 2454 */    MCD::OPC_Decode, 195, 4, 49, // Opcode: SC_D_RL
/* 2458 */    MCD::OPC_FilterValue, 14, 31, 0, 0, // Skip to: 2494
/* 2463 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2466 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2480
/* 2471 */    MCD::OPC_CheckPredicate, 21, 228, 32, 0, // Skip to: 10896
/* 2476 */    MCD::OPC_Decode, 197, 4, 49, // Opcode: SC_W_AQ
/* 2480 */    MCD::OPC_FilterValue, 3, 219, 32, 0, // Skip to: 10896
/* 2485 */    MCD::OPC_CheckPredicate, 22, 214, 32, 0, // Skip to: 10896
/* 2490 */    MCD::OPC_Decode, 193, 4, 49, // Opcode: SC_D_AQ
/* 2494 */    MCD::OPC_FilterValue, 15, 31, 0, 0, // Skip to: 2530
/* 2499 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2502 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2516
/* 2507 */    MCD::OPC_CheckPredicate, 21, 192, 32, 0, // Skip to: 10896
/* 2512 */    MCD::OPC_Decode, 198, 4, 49, // Opcode: SC_W_AQ_RL
/* 2516 */    MCD::OPC_FilterValue, 3, 183, 32, 0, // Skip to: 10896
/* 2521 */    MCD::OPC_CheckPredicate, 22, 178, 32, 0, // Skip to: 10896
/* 2526 */    MCD::OPC_Decode, 194, 4, 49, // Opcode: SC_D_AQ_RL
/* 2530 */    MCD::OPC_FilterValue, 16, 31, 0, 0, // Skip to: 2566
/* 2535 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2538 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2552
/* 2543 */    MCD::OPC_CheckPredicate, 21, 156, 32, 0, // Skip to: 10896
/* 2548 */    MCD::OPC_Decode, 191, 2, 49, // Opcode: AMOXOR_W
/* 2552 */    MCD::OPC_FilterValue, 3, 147, 32, 0, // Skip to: 10896
/* 2557 */    MCD::OPC_CheckPredicate, 22, 142, 32, 0, // Skip to: 10896
/* 2562 */    MCD::OPC_Decode, 187, 2, 49, // Opcode: AMOXOR_D
/* 2566 */    MCD::OPC_FilterValue, 17, 31, 0, 0, // Skip to: 2602
/* 2571 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2574 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2588
/* 2579 */    MCD::OPC_CheckPredicate, 21, 120, 32, 0, // Skip to: 10896
/* 2584 */    MCD::OPC_Decode, 194, 2, 49, // Opcode: AMOXOR_W_RL
/* 2588 */    MCD::OPC_FilterValue, 3, 111, 32, 0, // Skip to: 10896
/* 2593 */    MCD::OPC_CheckPredicate, 22, 106, 32, 0, // Skip to: 10896
/* 2598 */    MCD::OPC_Decode, 190, 2, 49, // Opcode: AMOXOR_D_RL
/* 2602 */    MCD::OPC_FilterValue, 18, 31, 0, 0, // Skip to: 2638
/* 2607 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2610 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2624
/* 2615 */    MCD::OPC_CheckPredicate, 21, 84, 32, 0, // Skip to: 10896
/* 2620 */    MCD::OPC_Decode, 192, 2, 49, // Opcode: AMOXOR_W_AQ
/* 2624 */    MCD::OPC_FilterValue, 3, 75, 32, 0, // Skip to: 10896
/* 2629 */    MCD::OPC_CheckPredicate, 22, 70, 32, 0, // Skip to: 10896
/* 2634 */    MCD::OPC_Decode, 188, 2, 49, // Opcode: AMOXOR_D_AQ
/* 2638 */    MCD::OPC_FilterValue, 19, 31, 0, 0, // Skip to: 2674
/* 2643 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2646 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2660
/* 2651 */    MCD::OPC_CheckPredicate, 21, 48, 32, 0, // Skip to: 10896
/* 2656 */    MCD::OPC_Decode, 193, 2, 49, // Opcode: AMOXOR_W_AQ_RL
/* 2660 */    MCD::OPC_FilterValue, 3, 39, 32, 0, // Skip to: 10896
/* 2665 */    MCD::OPC_CheckPredicate, 22, 34, 32, 0, // Skip to: 10896
/* 2670 */    MCD::OPC_Decode, 189, 2, 49, // Opcode: AMOXOR_D_AQ_RL
/* 2674 */    MCD::OPC_FilterValue, 32, 31, 0, 0, // Skip to: 2710
/* 2679 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2682 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2696
/* 2687 */    MCD::OPC_CheckPredicate, 21, 12, 32, 0, // Skip to: 10896
/* 2692 */    MCD::OPC_Decode, 175, 2, 49, // Opcode: AMOOR_W
/* 2696 */    MCD::OPC_FilterValue, 3, 3, 32, 0, // Skip to: 10896
/* 2701 */    MCD::OPC_CheckPredicate, 22, 254, 31, 0, // Skip to: 10896
/* 2706 */    MCD::OPC_Decode, 171, 2, 49, // Opcode: AMOOR_D
/* 2710 */    MCD::OPC_FilterValue, 33, 31, 0, 0, // Skip to: 2746
/* 2715 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2718 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2732
/* 2723 */    MCD::OPC_CheckPredicate, 21, 232, 31, 0, // Skip to: 10896
/* 2728 */    MCD::OPC_Decode, 178, 2, 49, // Opcode: AMOOR_W_RL
/* 2732 */    MCD::OPC_FilterValue, 3, 223, 31, 0, // Skip to: 10896
/* 2737 */    MCD::OPC_CheckPredicate, 22, 218, 31, 0, // Skip to: 10896
/* 2742 */    MCD::OPC_Decode, 174, 2, 49, // Opcode: AMOOR_D_RL
/* 2746 */    MCD::OPC_FilterValue, 34, 31, 0, 0, // Skip to: 2782
/* 2751 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2754 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2768
/* 2759 */    MCD::OPC_CheckPredicate, 21, 196, 31, 0, // Skip to: 10896
/* 2764 */    MCD::OPC_Decode, 176, 2, 49, // Opcode: AMOOR_W_AQ
/* 2768 */    MCD::OPC_FilterValue, 3, 187, 31, 0, // Skip to: 10896
/* 2773 */    MCD::OPC_CheckPredicate, 22, 182, 31, 0, // Skip to: 10896
/* 2778 */    MCD::OPC_Decode, 172, 2, 49, // Opcode: AMOOR_D_AQ
/* 2782 */    MCD::OPC_FilterValue, 35, 31, 0, 0, // Skip to: 2818
/* 2787 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2790 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2804
/* 2795 */    MCD::OPC_CheckPredicate, 21, 160, 31, 0, // Skip to: 10896
/* 2800 */    MCD::OPC_Decode, 177, 2, 49, // Opcode: AMOOR_W_AQ_RL
/* 2804 */    MCD::OPC_FilterValue, 3, 151, 31, 0, // Skip to: 10896
/* 2809 */    MCD::OPC_CheckPredicate, 22, 146, 31, 0, // Skip to: 10896
/* 2814 */    MCD::OPC_Decode, 173, 2, 49, // Opcode: AMOOR_D_AQ_RL
/* 2818 */    MCD::OPC_FilterValue, 48, 31, 0, 0, // Skip to: 2854
/* 2823 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2826 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2840
/* 2831 */    MCD::OPC_CheckPredicate, 21, 124, 31, 0, // Skip to: 10896
/* 2836 */    MCD::OPC_Decode, 135, 2, 49, // Opcode: AMOAND_W
/* 2840 */    MCD::OPC_FilterValue, 3, 115, 31, 0, // Skip to: 10896
/* 2845 */    MCD::OPC_CheckPredicate, 22, 110, 31, 0, // Skip to: 10896
/* 2850 */    MCD::OPC_Decode, 131, 2, 49, // Opcode: AMOAND_D
/* 2854 */    MCD::OPC_FilterValue, 49, 31, 0, 0, // Skip to: 2890
/* 2859 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2862 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2876
/* 2867 */    MCD::OPC_CheckPredicate, 21, 88, 31, 0, // Skip to: 10896
/* 2872 */    MCD::OPC_Decode, 138, 2, 49, // Opcode: AMOAND_W_RL
/* 2876 */    MCD::OPC_FilterValue, 3, 79, 31, 0, // Skip to: 10896
/* 2881 */    MCD::OPC_CheckPredicate, 22, 74, 31, 0, // Skip to: 10896
/* 2886 */    MCD::OPC_Decode, 134, 2, 49, // Opcode: AMOAND_D_RL
/* 2890 */    MCD::OPC_FilterValue, 50, 31, 0, 0, // Skip to: 2926
/* 2895 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2898 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2912
/* 2903 */    MCD::OPC_CheckPredicate, 21, 52, 31, 0, // Skip to: 10896
/* 2908 */    MCD::OPC_Decode, 136, 2, 49, // Opcode: AMOAND_W_AQ
/* 2912 */    MCD::OPC_FilterValue, 3, 43, 31, 0, // Skip to: 10896
/* 2917 */    MCD::OPC_CheckPredicate, 22, 38, 31, 0, // Skip to: 10896
/* 2922 */    MCD::OPC_Decode, 132, 2, 49, // Opcode: AMOAND_D_AQ
/* 2926 */    MCD::OPC_FilterValue, 51, 31, 0, 0, // Skip to: 2962
/* 2931 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2934 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2948
/* 2939 */    MCD::OPC_CheckPredicate, 21, 16, 31, 0, // Skip to: 10896
/* 2944 */    MCD::OPC_Decode, 137, 2, 49, // Opcode: AMOAND_W_AQ_RL
/* 2948 */    MCD::OPC_FilterValue, 3, 7, 31, 0, // Skip to: 10896
/* 2953 */    MCD::OPC_CheckPredicate, 22, 2, 31, 0, // Skip to: 10896
/* 2958 */    MCD::OPC_Decode, 133, 2, 49, // Opcode: AMOAND_D_AQ_RL
/* 2962 */    MCD::OPC_FilterValue, 64, 31, 0, 0, // Skip to: 2998
/* 2967 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 2970 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 2984
/* 2975 */    MCD::OPC_CheckPredicate, 21, 236, 30, 0, // Skip to: 10896
/* 2980 */    MCD::OPC_Decode, 167, 2, 49, // Opcode: AMOMIN_W
/* 2984 */    MCD::OPC_FilterValue, 3, 227, 30, 0, // Skip to: 10896
/* 2989 */    MCD::OPC_CheckPredicate, 22, 222, 30, 0, // Skip to: 10896
/* 2994 */    MCD::OPC_Decode, 163, 2, 49, // Opcode: AMOMIN_D
/* 2998 */    MCD::OPC_FilterValue, 65, 31, 0, 0, // Skip to: 3034
/* 3003 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3006 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3020
/* 3011 */    MCD::OPC_CheckPredicate, 21, 200, 30, 0, // Skip to: 10896
/* 3016 */    MCD::OPC_Decode, 170, 2, 49, // Opcode: AMOMIN_W_RL
/* 3020 */    MCD::OPC_FilterValue, 3, 191, 30, 0, // Skip to: 10896
/* 3025 */    MCD::OPC_CheckPredicate, 22, 186, 30, 0, // Skip to: 10896
/* 3030 */    MCD::OPC_Decode, 166, 2, 49, // Opcode: AMOMIN_D_RL
/* 3034 */    MCD::OPC_FilterValue, 66, 31, 0, 0, // Skip to: 3070
/* 3039 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3042 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3056
/* 3047 */    MCD::OPC_CheckPredicate, 21, 164, 30, 0, // Skip to: 10896
/* 3052 */    MCD::OPC_Decode, 168, 2, 49, // Opcode: AMOMIN_W_AQ
/* 3056 */    MCD::OPC_FilterValue, 3, 155, 30, 0, // Skip to: 10896
/* 3061 */    MCD::OPC_CheckPredicate, 22, 150, 30, 0, // Skip to: 10896
/* 3066 */    MCD::OPC_Decode, 164, 2, 49, // Opcode: AMOMIN_D_AQ
/* 3070 */    MCD::OPC_FilterValue, 67, 31, 0, 0, // Skip to: 3106
/* 3075 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3078 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3092
/* 3083 */    MCD::OPC_CheckPredicate, 21, 128, 30, 0, // Skip to: 10896
/* 3088 */    MCD::OPC_Decode, 169, 2, 49, // Opcode: AMOMIN_W_AQ_RL
/* 3092 */    MCD::OPC_FilterValue, 3, 119, 30, 0, // Skip to: 10896
/* 3097 */    MCD::OPC_CheckPredicate, 22, 114, 30, 0, // Skip to: 10896
/* 3102 */    MCD::OPC_Decode, 165, 2, 49, // Opcode: AMOMIN_D_AQ_RL
/* 3106 */    MCD::OPC_FilterValue, 80, 31, 0, 0, // Skip to: 3142
/* 3111 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3114 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3128
/* 3119 */    MCD::OPC_CheckPredicate, 21, 92, 30, 0, // Skip to: 10896
/* 3124 */    MCD::OPC_Decode, 151, 2, 49, // Opcode: AMOMAX_W
/* 3128 */    MCD::OPC_FilterValue, 3, 83, 30, 0, // Skip to: 10896
/* 3133 */    MCD::OPC_CheckPredicate, 22, 78, 30, 0, // Skip to: 10896
/* 3138 */    MCD::OPC_Decode, 147, 2, 49, // Opcode: AMOMAX_D
/* 3142 */    MCD::OPC_FilterValue, 81, 31, 0, 0, // Skip to: 3178
/* 3147 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3150 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3164
/* 3155 */    MCD::OPC_CheckPredicate, 21, 56, 30, 0, // Skip to: 10896
/* 3160 */    MCD::OPC_Decode, 154, 2, 49, // Opcode: AMOMAX_W_RL
/* 3164 */    MCD::OPC_FilterValue, 3, 47, 30, 0, // Skip to: 10896
/* 3169 */    MCD::OPC_CheckPredicate, 22, 42, 30, 0, // Skip to: 10896
/* 3174 */    MCD::OPC_Decode, 150, 2, 49, // Opcode: AMOMAX_D_RL
/* 3178 */    MCD::OPC_FilterValue, 82, 31, 0, 0, // Skip to: 3214
/* 3183 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3186 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3200
/* 3191 */    MCD::OPC_CheckPredicate, 21, 20, 30, 0, // Skip to: 10896
/* 3196 */    MCD::OPC_Decode, 152, 2, 49, // Opcode: AMOMAX_W_AQ
/* 3200 */    MCD::OPC_FilterValue, 3, 11, 30, 0, // Skip to: 10896
/* 3205 */    MCD::OPC_CheckPredicate, 22, 6, 30, 0, // Skip to: 10896
/* 3210 */    MCD::OPC_Decode, 148, 2, 49, // Opcode: AMOMAX_D_AQ
/* 3214 */    MCD::OPC_FilterValue, 83, 31, 0, 0, // Skip to: 3250
/* 3219 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3222 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3236
/* 3227 */    MCD::OPC_CheckPredicate, 21, 240, 29, 0, // Skip to: 10896
/* 3232 */    MCD::OPC_Decode, 153, 2, 49, // Opcode: AMOMAX_W_AQ_RL
/* 3236 */    MCD::OPC_FilterValue, 3, 231, 29, 0, // Skip to: 10896
/* 3241 */    MCD::OPC_CheckPredicate, 22, 226, 29, 0, // Skip to: 10896
/* 3246 */    MCD::OPC_Decode, 149, 2, 49, // Opcode: AMOMAX_D_AQ_RL
/* 3250 */    MCD::OPC_FilterValue, 96, 31, 0, 0, // Skip to: 3286
/* 3255 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3258 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3272
/* 3263 */    MCD::OPC_CheckPredicate, 21, 204, 29, 0, // Skip to: 10896
/* 3268 */    MCD::OPC_Decode, 159, 2, 49, // Opcode: AMOMINU_W
/* 3272 */    MCD::OPC_FilterValue, 3, 195, 29, 0, // Skip to: 10896
/* 3277 */    MCD::OPC_CheckPredicate, 22, 190, 29, 0, // Skip to: 10896
/* 3282 */    MCD::OPC_Decode, 155, 2, 49, // Opcode: AMOMINU_D
/* 3286 */    MCD::OPC_FilterValue, 97, 31, 0, 0, // Skip to: 3322
/* 3291 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3294 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3308
/* 3299 */    MCD::OPC_CheckPredicate, 21, 168, 29, 0, // Skip to: 10896
/* 3304 */    MCD::OPC_Decode, 162, 2, 49, // Opcode: AMOMINU_W_RL
/* 3308 */    MCD::OPC_FilterValue, 3, 159, 29, 0, // Skip to: 10896
/* 3313 */    MCD::OPC_CheckPredicate, 22, 154, 29, 0, // Skip to: 10896
/* 3318 */    MCD::OPC_Decode, 158, 2, 49, // Opcode: AMOMINU_D_RL
/* 3322 */    MCD::OPC_FilterValue, 98, 31, 0, 0, // Skip to: 3358
/* 3327 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3330 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3344
/* 3335 */    MCD::OPC_CheckPredicate, 21, 132, 29, 0, // Skip to: 10896
/* 3340 */    MCD::OPC_Decode, 160, 2, 49, // Opcode: AMOMINU_W_AQ
/* 3344 */    MCD::OPC_FilterValue, 3, 123, 29, 0, // Skip to: 10896
/* 3349 */    MCD::OPC_CheckPredicate, 22, 118, 29, 0, // Skip to: 10896
/* 3354 */    MCD::OPC_Decode, 156, 2, 49, // Opcode: AMOMINU_D_AQ
/* 3358 */    MCD::OPC_FilterValue, 99, 31, 0, 0, // Skip to: 3394
/* 3363 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3366 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3380
/* 3371 */    MCD::OPC_CheckPredicate, 21, 96, 29, 0, // Skip to: 10896
/* 3376 */    MCD::OPC_Decode, 161, 2, 49, // Opcode: AMOMINU_W_AQ_RL
/* 3380 */    MCD::OPC_FilterValue, 3, 87, 29, 0, // Skip to: 10896
/* 3385 */    MCD::OPC_CheckPredicate, 22, 82, 29, 0, // Skip to: 10896
/* 3390 */    MCD::OPC_Decode, 157, 2, 49, // Opcode: AMOMINU_D_AQ_RL
/* 3394 */    MCD::OPC_FilterValue, 112, 31, 0, 0, // Skip to: 3430
/* 3399 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3402 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3416
/* 3407 */    MCD::OPC_CheckPredicate, 21, 60, 29, 0, // Skip to: 10896
/* 3412 */    MCD::OPC_Decode, 143, 2, 49, // Opcode: AMOMAXU_W
/* 3416 */    MCD::OPC_FilterValue, 3, 51, 29, 0, // Skip to: 10896
/* 3421 */    MCD::OPC_CheckPredicate, 22, 46, 29, 0, // Skip to: 10896
/* 3426 */    MCD::OPC_Decode, 139, 2, 49, // Opcode: AMOMAXU_D
/* 3430 */    MCD::OPC_FilterValue, 113, 31, 0, 0, // Skip to: 3466
/* 3435 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3438 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3452
/* 3443 */    MCD::OPC_CheckPredicate, 21, 24, 29, 0, // Skip to: 10896
/* 3448 */    MCD::OPC_Decode, 146, 2, 49, // Opcode: AMOMAXU_W_RL
/* 3452 */    MCD::OPC_FilterValue, 3, 15, 29, 0, // Skip to: 10896
/* 3457 */    MCD::OPC_CheckPredicate, 22, 10, 29, 0, // Skip to: 10896
/* 3462 */    MCD::OPC_Decode, 142, 2, 49, // Opcode: AMOMAXU_D_RL
/* 3466 */    MCD::OPC_FilterValue, 114, 31, 0, 0, // Skip to: 3502
/* 3471 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3474 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3488
/* 3479 */    MCD::OPC_CheckPredicate, 21, 244, 28, 0, // Skip to: 10896
/* 3484 */    MCD::OPC_Decode, 144, 2, 49, // Opcode: AMOMAXU_W_AQ
/* 3488 */    MCD::OPC_FilterValue, 3, 235, 28, 0, // Skip to: 10896
/* 3493 */    MCD::OPC_CheckPredicate, 22, 230, 28, 0, // Skip to: 10896
/* 3498 */    MCD::OPC_Decode, 140, 2, 49, // Opcode: AMOMAXU_D_AQ
/* 3502 */    MCD::OPC_FilterValue, 115, 221, 28, 0, // Skip to: 10896
/* 3507 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3510 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3524
/* 3515 */    MCD::OPC_CheckPredicate, 21, 208, 28, 0, // Skip to: 10896
/* 3520 */    MCD::OPC_Decode, 145, 2, 49, // Opcode: AMOMAXU_W_AQ_RL
/* 3524 */    MCD::OPC_FilterValue, 3, 199, 28, 0, // Skip to: 10896
/* 3529 */    MCD::OPC_CheckPredicate, 22, 194, 28, 0, // Skip to: 10896
/* 3534 */    MCD::OPC_Decode, 141, 2, 49, // Opcode: AMOMAXU_D_AQ_RL
/* 3538 */    MCD::OPC_FilterValue, 51, 9, 3, 0, // Skip to: 4320
/* 3543 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 3546 */    MCD::OPC_FilterValue, 0, 35, 0, 0, // Skip to: 3586
/* 3551 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 3554 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3563
/* 3559 */    MCD::OPC_Decode, 244, 1, 49, // Opcode: ADD
/* 3563 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3577
/* 3568 */    MCD::OPC_CheckPredicate, 23, 155, 28, 0, // Skip to: 10896
/* 3573 */    MCD::OPC_Decode, 151, 4, 49, // Opcode: MUL
/* 3577 */    MCD::OPC_FilterValue, 32, 146, 28, 0, // Skip to: 10896
/* 3582 */    MCD::OPC_Decode, 234, 4, 49, // Opcode: SUB
/* 3586 */    MCD::OPC_FilterValue, 1, 168, 0, 0, // Skip to: 3759
/* 3591 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3594 */    MCD::OPC_FilterValue, 0, 96, 0, 0, // Skip to: 3695
/* 3599 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3602 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3611
/* 3607 */    MCD::OPC_Decode, 208, 4, 49, // Opcode: SLL
/* 3611 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3625
/* 3616 */    MCD::OPC_CheckPredicate, 8, 107, 28, 0, // Skip to: 10896
/* 3621 */    MCD::OPC_Decode, 205, 4, 49, // Opcode: SHFL
/* 3625 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 3639
/* 3630 */    MCD::OPC_CheckPredicate, 9, 93, 28, 0, // Skip to: 10896
/* 3635 */    MCD::OPC_Decode, 213, 4, 49, // Opcode: SLO
/* 3639 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 3653
/* 3644 */    MCD::OPC_CheckPredicate, 10, 79, 28, 0, // Skip to: 10896
/* 3649 */    MCD::OPC_Decode, 188, 4, 49, // Opcode: SBSET
/* 3653 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 3667
/* 3658 */    MCD::OPC_CheckPredicate, 10, 65, 28, 0, // Skip to: 10896
/* 3663 */    MCD::OPC_Decode, 177, 4, 49, // Opcode: SBCLR
/* 3667 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 3681
/* 3672 */    MCD::OPC_CheckPredicate, 14, 51, 28, 0, // Skip to: 10896
/* 3677 */    MCD::OPC_Decode, 170, 4, 49, // Opcode: ROL
/* 3681 */    MCD::OPC_FilterValue, 13, 42, 28, 0, // Skip to: 10896
/* 3686 */    MCD::OPC_CheckPredicate, 10, 37, 28, 0, // Skip to: 10896
/* 3691 */    MCD::OPC_Decode, 184, 4, 49, // Opcode: SBINV
/* 3695 */    MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 3731
/* 3700 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3703 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 3717
/* 3708 */    MCD::OPC_CheckPredicate, 23, 15, 28, 0, // Skip to: 10896
/* 3713 */    MCD::OPC_Decode, 152, 4, 49, // Opcode: MULH
/* 3717 */    MCD::OPC_FilterValue, 1, 6, 28, 0, // Skip to: 10896
/* 3722 */    MCD::OPC_CheckPredicate, 24, 1, 28, 0, // Skip to: 10896
/* 3727 */    MCD::OPC_Decode, 214, 2, 49, // Opcode: CLMUL
/* 3731 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 3745
/* 3736 */    MCD::OPC_CheckPredicate, 15, 243, 27, 0, // Skip to: 10896
/* 3741 */    MCD::OPC_Decode, 237, 3, 50, // Opcode: FSL
/* 3745 */    MCD::OPC_FilterValue, 3, 234, 27, 0, // Skip to: 10896
/* 3750 */    MCD::OPC_CheckPredicate, 15, 229, 27, 0, // Skip to: 10896
/* 3755 */    MCD::OPC_Decode, 222, 2, 50, // Opcode: CMIX
/* 3759 */    MCD::OPC_FilterValue, 2, 40, 0, 0, // Skip to: 3804
/* 3764 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 3767 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3776
/* 3772 */    MCD::OPC_Decode, 217, 4, 49, // Opcode: SLT
/* 3776 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3790
/* 3781 */    MCD::OPC_CheckPredicate, 23, 198, 27, 0, // Skip to: 10896
/* 3786 */    MCD::OPC_Decode, 153, 4, 49, // Opcode: MULHSU
/* 3790 */    MCD::OPC_FilterValue, 5, 189, 27, 0, // Skip to: 10896
/* 3795 */    MCD::OPC_CheckPredicate, 24, 184, 27, 0, // Skip to: 10896
/* 3800 */    MCD::OPC_Decode, 217, 2, 49, // Opcode: CLMULR
/* 3804 */    MCD::OPC_FilterValue, 3, 68, 0, 0, // Skip to: 3877
/* 3809 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 3812 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3821
/* 3817 */    MCD::OPC_Decode, 220, 4, 49, // Opcode: SLTU
/* 3821 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3835
/* 3826 */    MCD::OPC_CheckPredicate, 23, 153, 27, 0, // Skip to: 10896
/* 3831 */    MCD::OPC_Decode, 154, 4, 49, // Opcode: MULHU
/* 3835 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 3849
/* 3840 */    MCD::OPC_CheckPredicate, 11, 139, 27, 0, // Skip to: 10896
/* 3845 */    MCD::OPC_Decode, 211, 2, 49, // Opcode: BMATOR
/* 3849 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 3863
/* 3854 */    MCD::OPC_CheckPredicate, 24, 125, 27, 0, // Skip to: 10896
/* 3859 */    MCD::OPC_Decode, 215, 2, 49, // Opcode: CLMULH
/* 3863 */    MCD::OPC_FilterValue, 36, 116, 27, 0, // Skip to: 10896
/* 3868 */    MCD::OPC_CheckPredicate, 11, 111, 27, 0, // Skip to: 10896
/* 3873 */    MCD::OPC_Decode, 212, 2, 49, // Opcode: BMATXOR
/* 3877 */    MCD::OPC_FilterValue, 4, 82, 0, 0, // Skip to: 3964
/* 3882 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 3885 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3894
/* 3890 */    MCD::OPC_Decode, 207, 7, 49, // Opcode: XOR
/* 3894 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3908
/* 3899 */    MCD::OPC_CheckPredicate, 23, 80, 27, 0, // Skip to: 10896
/* 3904 */    MCD::OPC_Decode, 170, 3, 49, // Opcode: DIV
/* 3908 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 3922
/* 3913 */    MCD::OPC_CheckPredicate, 14, 66, 27, 0, // Skip to: 10896
/* 3918 */    MCD::OPC_Decode, 159, 4, 49, // Opcode: PACK
/* 3922 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 3936
/* 3927 */    MCD::OPC_CheckPredicate, 9, 52, 27, 0, // Skip to: 10896
/* 3932 */    MCD::OPC_Decode, 148, 4, 49, // Opcode: MIN
/* 3936 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 3950
/* 3941 */    MCD::OPC_CheckPredicate, 14, 38, 27, 0, // Skip to: 10896
/* 3946 */    MCD::OPC_Decode, 206, 7, 49, // Opcode: XNOR
/* 3950 */    MCD::OPC_FilterValue, 36, 29, 27, 0, // Skip to: 10896
/* 3955 */    MCD::OPC_CheckPredicate, 14, 24, 27, 0, // Skip to: 10896
/* 3960 */    MCD::OPC_Decode, 161, 4, 49, // Opcode: PACKU
/* 3964 */    MCD::OPC_FilterValue, 5, 177, 0, 0, // Skip to: 4146
/* 3969 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 3972 */    MCD::OPC_FilterValue, 0, 105, 0, 0, // Skip to: 4082
/* 3977 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3980 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 3989
/* 3985 */    MCD::OPC_Decode, 226, 4, 49, // Opcode: SRL
/* 3989 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4003
/* 3994 */    MCD::OPC_CheckPredicate, 8, 241, 26, 0, // Skip to: 10896
/* 3999 */    MCD::OPC_Decode, 240, 4, 49, // Opcode: UNSHFL
/* 4003 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4017
/* 4008 */    MCD::OPC_CheckPredicate, 9, 227, 26, 0, // Skip to: 10896
/* 4013 */    MCD::OPC_Decode, 230, 4, 49, // Opcode: SRO
/* 4017 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4031
/* 4022 */    MCD::OPC_CheckPredicate, 8, 213, 26, 0, // Skip to: 10896
/* 4027 */    MCD::OPC_Decode, 248, 3, 49, // Opcode: GORC
/* 4031 */    MCD::OPC_FilterValue, 8, 4, 0, 0, // Skip to: 4040
/* 4036 */    MCD::OPC_Decode, 221, 4, 49, // Opcode: SRA
/* 4040 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4054
/* 4045 */    MCD::OPC_CheckPredicate, 10, 190, 26, 0, // Skip to: 10896
/* 4050 */    MCD::OPC_Decode, 181, 4, 49, // Opcode: SBEXT
/* 4054 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 4068
/* 4059 */    MCD::OPC_CheckPredicate, 14, 176, 26, 0, // Skip to: 10896
/* 4064 */    MCD::OPC_Decode, 172, 4, 49, // Opcode: ROR
/* 4068 */    MCD::OPC_FilterValue, 13, 167, 26, 0, // Skip to: 10896
/* 4073 */    MCD::OPC_CheckPredicate, 8, 162, 26, 0, // Skip to: 10896
/* 4078 */    MCD::OPC_Decode, 252, 3, 49, // Opcode: GREV
/* 4082 */    MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 4118
/* 4087 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 4090 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4104
/* 4095 */    MCD::OPC_CheckPredicate, 23, 140, 26, 0, // Skip to: 10896
/* 4100 */    MCD::OPC_Decode, 171, 3, 49, // Opcode: DIVU
/* 4104 */    MCD::OPC_FilterValue, 1, 131, 26, 0, // Skip to: 10896
/* 4109 */    MCD::OPC_CheckPredicate, 9, 126, 26, 0, // Skip to: 10896
/* 4114 */    MCD::OPC_Decode, 146, 4, 49, // Opcode: MAX
/* 4118 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4132
/* 4123 */    MCD::OPC_CheckPredicate, 15, 112, 26, 0, // Skip to: 10896
/* 4128 */    MCD::OPC_Decode, 241, 3, 50, // Opcode: FSR
/* 4132 */    MCD::OPC_FilterValue, 3, 103, 26, 0, // Skip to: 10896
/* 4137 */    MCD::OPC_CheckPredicate, 15, 98, 26, 0, // Skip to: 10896
/* 4142 */    MCD::OPC_Decode, 223, 2, 50, // Opcode: CMOV
/* 4146 */    MCD::OPC_FilterValue, 6, 82, 0, 0, // Skip to: 4233
/* 4151 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4154 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 4163
/* 4159 */    MCD::OPC_Decode, 156, 4, 49, // Opcode: OR
/* 4163 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4177
/* 4168 */    MCD::OPC_CheckPredicate, 23, 67, 26, 0, // Skip to: 10896
/* 4173 */    MCD::OPC_Decode, 166, 4, 49, // Opcode: REM
/* 4177 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4191
/* 4182 */    MCD::OPC_CheckPredicate, 25, 53, 26, 0, // Skip to: 10896
/* 4187 */    MCD::OPC_Decode, 202, 2, 49, // Opcode: BEXT
/* 4191 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4205
/* 4196 */    MCD::OPC_CheckPredicate, 9, 39, 26, 0, // Skip to: 10896
/* 4201 */    MCD::OPC_Decode, 149, 4, 49, // Opcode: MINU
/* 4205 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4219
/* 4210 */    MCD::OPC_CheckPredicate, 14, 25, 26, 0, // Skip to: 10896
/* 4215 */    MCD::OPC_Decode, 158, 4, 49, // Opcode: ORN
/* 4219 */    MCD::OPC_FilterValue, 36, 16, 26, 0, // Skip to: 10896
/* 4224 */    MCD::OPC_CheckPredicate, 25, 11, 26, 0, // Skip to: 10896
/* 4229 */    MCD::OPC_Decode, 199, 2, 49, // Opcode: BDEP
/* 4233 */    MCD::OPC_FilterValue, 7, 2, 26, 0, // Skip to: 10896
/* 4238 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4241 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 4250
/* 4246 */    MCD::OPC_Decode, 195, 2, 49, // Opcode: AND
/* 4250 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4264
/* 4255 */    MCD::OPC_CheckPredicate, 23, 236, 25, 0, // Skip to: 10896
/* 4260 */    MCD::OPC_Decode, 167, 4, 49, // Opcode: REMU
/* 4264 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4278
/* 4269 */    MCD::OPC_CheckPredicate, 14, 222, 25, 0, // Skip to: 10896
/* 4274 */    MCD::OPC_Decode, 160, 4, 49, // Opcode: PACKH
/* 4278 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4292
/* 4283 */    MCD::OPC_CheckPredicate, 9, 208, 25, 0, // Skip to: 10896
/* 4288 */    MCD::OPC_Decode, 147, 4, 49, // Opcode: MAXU
/* 4292 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4306
/* 4297 */    MCD::OPC_CheckPredicate, 14, 194, 25, 0, // Skip to: 10896
/* 4302 */    MCD::OPC_Decode, 197, 2, 49, // Opcode: ANDN
/* 4306 */    MCD::OPC_FilterValue, 36, 185, 25, 0, // Skip to: 10896
/* 4311 */    MCD::OPC_CheckPredicate, 26, 180, 25, 0, // Skip to: 10896
/* 4316 */    MCD::OPC_Decode, 204, 2, 49, // Opcode: BFP
/* 4320 */    MCD::OPC_FilterValue, 55, 4, 0, 0, // Skip to: 4329
/* 4325 */    MCD::OPC_Decode, 143, 4, 43, // Opcode: LUI
/* 4329 */    MCD::OPC_FilterValue, 59, 87, 2, 0, // Skip to: 4933
/* 4334 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 4337 */    MCD::OPC_FilterValue, 0, 101, 0, 0, // Skip to: 4443
/* 4342 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4345 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4359
/* 4350 */    MCD::OPC_CheckPredicate, 4, 141, 25, 0, // Skip to: 10896
/* 4355 */    MCD::OPC_Decode, 249, 1, 49, // Opcode: ADDW
/* 4359 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4373
/* 4364 */    MCD::OPC_CheckPredicate, 27, 127, 25, 0, // Skip to: 10896
/* 4369 */    MCD::OPC_Decode, 155, 4, 49, // Opcode: MULW
/* 4373 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4387
/* 4378 */    MCD::OPC_CheckPredicate, 16, 113, 25, 0, // Skip to: 10896
/* 4383 */    MCD::OPC_Decode, 248, 1, 49, // Opcode: ADDUW
/* 4387 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4401
/* 4392 */    MCD::OPC_CheckPredicate, 16, 99, 25, 0, // Skip to: 10896
/* 4397 */    MCD::OPC_Decode, 250, 1, 49, // Opcode: ADDWU
/* 4401 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4415
/* 4406 */    MCD::OPC_CheckPredicate, 4, 85, 25, 0, // Skip to: 10896
/* 4411 */    MCD::OPC_Decode, 236, 4, 49, // Opcode: SUBW
/* 4415 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 4429
/* 4420 */    MCD::OPC_CheckPredicate, 16, 71, 25, 0, // Skip to: 10896
/* 4425 */    MCD::OPC_Decode, 235, 4, 49, // Opcode: SUBUW
/* 4429 */    MCD::OPC_FilterValue, 37, 62, 25, 0, // Skip to: 10896
/* 4434 */    MCD::OPC_CheckPredicate, 16, 57, 25, 0, // Skip to: 10896
/* 4439 */    MCD::OPC_Decode, 237, 4, 49, // Opcode: SUBWU
/* 4443 */    MCD::OPC_FilterValue, 1, 144, 0, 0, // Skip to: 4592
/* 4448 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 4451 */    MCD::OPC_FilterValue, 0, 101, 0, 0, // Skip to: 4557
/* 4456 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 4459 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4473
/* 4464 */    MCD::OPC_CheckPredicate, 4, 27, 25, 0, // Skip to: 10896
/* 4469 */    MCD::OPC_Decode, 212, 4, 49, // Opcode: SLLW
/* 4473 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4487
/* 4478 */    MCD::OPC_CheckPredicate, 18, 13, 25, 0, // Skip to: 10896
/* 4483 */    MCD::OPC_Decode, 207, 4, 49, // Opcode: SHFLW
/* 4487 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4501
/* 4492 */    MCD::OPC_CheckPredicate, 16, 255, 24, 0, // Skip to: 10896
/* 4497 */    MCD::OPC_Decode, 216, 4, 49, // Opcode: SLOW
/* 4501 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4515
/* 4506 */    MCD::OPC_CheckPredicate, 17, 241, 24, 0, // Skip to: 10896
/* 4511 */    MCD::OPC_Decode, 191, 4, 49, // Opcode: SBSETW
/* 4515 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4529
/* 4520 */    MCD::OPC_CheckPredicate, 17, 227, 24, 0, // Skip to: 10896
/* 4525 */    MCD::OPC_Decode, 180, 4, 49, // Opcode: SBCLRW
/* 4529 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 4543
/* 4534 */    MCD::OPC_CheckPredicate, 19, 213, 24, 0, // Skip to: 10896
/* 4539 */    MCD::OPC_Decode, 171, 4, 49, // Opcode: ROLW
/* 4543 */    MCD::OPC_FilterValue, 13, 204, 24, 0, // Skip to: 10896
/* 4548 */    MCD::OPC_CheckPredicate, 17, 199, 24, 0, // Skip to: 10896
/* 4553 */    MCD::OPC_Decode, 187, 4, 49, // Opcode: SBINVW
/* 4557 */    MCD::OPC_FilterValue, 1, 16, 0, 0, // Skip to: 4578
/* 4562 */    MCD::OPC_CheckPredicate, 28, 185, 24, 0, // Skip to: 10896
/* 4567 */    MCD::OPC_CheckField, 27, 5, 1, 178, 24, 0, // Skip to: 10896
/* 4574 */    MCD::OPC_Decode, 219, 2, 49, // Opcode: CLMULW
/* 4578 */    MCD::OPC_FilterValue, 2, 169, 24, 0, // Skip to: 10896
/* 4583 */    MCD::OPC_CheckPredicate, 20, 164, 24, 0, // Skip to: 10896
/* 4588 */    MCD::OPC_Decode, 238, 3, 50, // Opcode: FSLW
/* 4592 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 4613
/* 4597 */    MCD::OPC_CheckPredicate, 28, 150, 24, 0, // Skip to: 10896
/* 4602 */    MCD::OPC_CheckField, 25, 7, 5, 143, 24, 0, // Skip to: 10896
/* 4609 */    MCD::OPC_Decode, 218, 2, 49, // Opcode: CLMULRW
/* 4613 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 4634
/* 4618 */    MCD::OPC_CheckPredicate, 28, 129, 24, 0, // Skip to: 10896
/* 4623 */    MCD::OPC_CheckField, 25, 7, 5, 122, 24, 0, // Skip to: 10896
/* 4630 */    MCD::OPC_Decode, 216, 2, 49, // Opcode: CLMULHW
/* 4634 */    MCD::OPC_FilterValue, 4, 45, 0, 0, // Skip to: 4684
/* 4639 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4642 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4656
/* 4647 */    MCD::OPC_CheckPredicate, 27, 100, 24, 0, // Skip to: 10896
/* 4652 */    MCD::OPC_Decode, 173, 3, 49, // Opcode: DIVW
/* 4656 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4670
/* 4661 */    MCD::OPC_CheckPredicate, 19, 86, 24, 0, // Skip to: 10896
/* 4666 */    MCD::OPC_Decode, 163, 4, 49, // Opcode: PACKW
/* 4670 */    MCD::OPC_FilterValue, 36, 77, 24, 0, // Skip to: 10896
/* 4675 */    MCD::OPC_CheckPredicate, 19, 72, 24, 0, // Skip to: 10896
/* 4680 */    MCD::OPC_Decode, 162, 4, 49, // Opcode: PACKUW
/* 4684 */    MCD::OPC_FilterValue, 5, 158, 0, 0, // Skip to: 4847
/* 4689 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 4692 */    MCD::OPC_FilterValue, 0, 115, 0, 0, // Skip to: 4812
/* 4697 */    MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 4700 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4714
/* 4705 */    MCD::OPC_CheckPredicate, 4, 42, 24, 0, // Skip to: 10896
/* 4710 */    MCD::OPC_Decode, 229, 4, 49, // Opcode: SRLW
/* 4714 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4728
/* 4719 */    MCD::OPC_CheckPredicate, 18, 28, 24, 0, // Skip to: 10896
/* 4724 */    MCD::OPC_Decode, 242, 4, 49, // Opcode: UNSHFLW
/* 4728 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4742
/* 4733 */    MCD::OPC_CheckPredicate, 16, 14, 24, 0, // Skip to: 10896
/* 4738 */    MCD::OPC_Decode, 233, 4, 49, // Opcode: SROW
/* 4742 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4756
/* 4747 */    MCD::OPC_CheckPredicate, 18, 0, 24, 0, // Skip to: 10896
/* 4752 */    MCD::OPC_Decode, 251, 3, 49, // Opcode: GORCW
/* 4756 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4770
/* 4761 */    MCD::OPC_CheckPredicate, 4, 242, 23, 0, // Skip to: 10896
/* 4766 */    MCD::OPC_Decode, 224, 4, 49, // Opcode: SRAW
/* 4770 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4784
/* 4775 */    MCD::OPC_CheckPredicate, 17, 228, 23, 0, // Skip to: 10896
/* 4780 */    MCD::OPC_Decode, 183, 4, 49, // Opcode: SBEXTW
/* 4784 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 4798
/* 4789 */    MCD::OPC_CheckPredicate, 19, 214, 23, 0, // Skip to: 10896
/* 4794 */    MCD::OPC_Decode, 175, 4, 49, // Opcode: RORW
/* 4798 */    MCD::OPC_FilterValue, 13, 205, 23, 0, // Skip to: 10896
/* 4803 */    MCD::OPC_CheckPredicate, 18, 200, 23, 0, // Skip to: 10896
/* 4808 */    MCD::OPC_Decode, 255, 3, 49, // Opcode: GREVW
/* 4812 */    MCD::OPC_FilterValue, 1, 16, 0, 0, // Skip to: 4833
/* 4817 */    MCD::OPC_CheckPredicate, 27, 186, 23, 0, // Skip to: 10896
/* 4822 */    MCD::OPC_CheckField, 27, 5, 0, 179, 23, 0, // Skip to: 10896
/* 4829 */    MCD::OPC_Decode, 172, 3, 49, // Opcode: DIVUW
/* 4833 */    MCD::OPC_FilterValue, 2, 170, 23, 0, // Skip to: 10896
/* 4838 */    MCD::OPC_CheckPredicate, 20, 165, 23, 0, // Skip to: 10896
/* 4843 */    MCD::OPC_Decode, 244, 3, 50, // Opcode: FSRW
/* 4847 */    MCD::OPC_FilterValue, 6, 45, 0, 0, // Skip to: 4897
/* 4852 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4855 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4869
/* 4860 */    MCD::OPC_CheckPredicate, 27, 143, 23, 0, // Skip to: 10896
/* 4865 */    MCD::OPC_Decode, 169, 4, 49, // Opcode: REMW
/* 4869 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4883
/* 4874 */    MCD::OPC_CheckPredicate, 29, 129, 23, 0, // Skip to: 10896
/* 4879 */    MCD::OPC_Decode, 203, 2, 49, // Opcode: BEXTW
/* 4883 */    MCD::OPC_FilterValue, 36, 120, 23, 0, // Skip to: 10896
/* 4888 */    MCD::OPC_CheckPredicate, 29, 115, 23, 0, // Skip to: 10896
/* 4893 */    MCD::OPC_Decode, 200, 2, 49, // Opcode: BDEPW
/* 4897 */    MCD::OPC_FilterValue, 7, 106, 23, 0, // Skip to: 10896
/* 4902 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 4905 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4919
/* 4910 */    MCD::OPC_CheckPredicate, 27, 93, 23, 0, // Skip to: 10896
/* 4915 */    MCD::OPC_Decode, 168, 4, 49, // Opcode: REMUW
/* 4919 */    MCD::OPC_FilterValue, 36, 84, 23, 0, // Skip to: 10896
/* 4924 */    MCD::OPC_CheckPredicate, 30, 79, 23, 0, // Skip to: 10896
/* 4929 */    MCD::OPC_Decode, 205, 2, 49, // Opcode: BFPW
/* 4933 */    MCD::OPC_FilterValue, 67, 31, 0, 0, // Skip to: 4969
/* 4938 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 4941 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4955
/* 4946 */    MCD::OPC_CheckPredicate, 6, 57, 23, 0, // Skip to: 10896
/* 4951 */    MCD::OPC_Decode, 213, 3, 51, // Opcode: FMADD_S
/* 4955 */    MCD::OPC_FilterValue, 1, 48, 23, 0, // Skip to: 10896
/* 4960 */    MCD::OPC_CheckPredicate, 7, 43, 23, 0, // Skip to: 10896
/* 4965 */    MCD::OPC_Decode, 212, 3, 52, // Opcode: FMADD_D
/* 4969 */    MCD::OPC_FilterValue, 71, 31, 0, 0, // Skip to: 5005
/* 4974 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 4977 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4991
/* 4982 */    MCD::OPC_CheckPredicate, 6, 21, 23, 0, // Skip to: 10896
/* 4987 */    MCD::OPC_Decode, 219, 3, 51, // Opcode: FMSUB_S
/* 4991 */    MCD::OPC_FilterValue, 1, 12, 23, 0, // Skip to: 10896
/* 4996 */    MCD::OPC_CheckPredicate, 7, 7, 23, 0, // Skip to: 10896
/* 5001 */    MCD::OPC_Decode, 218, 3, 52, // Opcode: FMSUB_D
/* 5005 */    MCD::OPC_FilterValue, 75, 31, 0, 0, // Skip to: 5041
/* 5010 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 5013 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5027
/* 5018 */    MCD::OPC_CheckPredicate, 6, 241, 22, 0, // Skip to: 10896
/* 5023 */    MCD::OPC_Decode, 229, 3, 51, // Opcode: FNMSUB_S
/* 5027 */    MCD::OPC_FilterValue, 1, 232, 22, 0, // Skip to: 10896
/* 5032 */    MCD::OPC_CheckPredicate, 7, 227, 22, 0, // Skip to: 10896
/* 5037 */    MCD::OPC_Decode, 228, 3, 52, // Opcode: FNMSUB_D
/* 5041 */    MCD::OPC_FilterValue, 79, 31, 0, 0, // Skip to: 5077
/* 5046 */    MCD::OPC_ExtractField, 25, 2,  // Inst{26-25} ...
/* 5049 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5063
/* 5054 */    MCD::OPC_CheckPredicate, 6, 205, 22, 0, // Skip to: 10896
/* 5059 */    MCD::OPC_Decode, 227, 3, 51, // Opcode: FNMADD_S
/* 5063 */    MCD::OPC_FilterValue, 1, 196, 22, 0, // Skip to: 10896
/* 5068 */    MCD::OPC_CheckPredicate, 7, 191, 22, 0, // Skip to: 10896
/* 5073 */    MCD::OPC_Decode, 226, 3, 52, // Opcode: FNMADD_D
/* 5077 */    MCD::OPC_FilterValue, 83, 136, 3, 0, // Skip to: 5986
/* 5082 */    MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 5085 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5099
/* 5090 */    MCD::OPC_CheckPredicate, 6, 169, 22, 0, // Skip to: 10896
/* 5095 */    MCD::OPC_Decode, 178, 3, 53, // Opcode: FADD_S
/* 5099 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5113
/* 5104 */    MCD::OPC_CheckPredicate, 7, 155, 22, 0, // Skip to: 10896
/* 5109 */    MCD::OPC_Decode, 177, 3, 54, // Opcode: FADD_D
/* 5113 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 5127
/* 5118 */    MCD::OPC_CheckPredicate, 6, 141, 22, 0, // Skip to: 10896
/* 5123 */    MCD::OPC_Decode, 246, 3, 53, // Opcode: FSUB_S
/* 5127 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 5141
/* 5132 */    MCD::OPC_CheckPredicate, 7, 127, 22, 0, // Skip to: 10896
/* 5137 */    MCD::OPC_Decode, 245, 3, 54, // Opcode: FSUB_D
/* 5141 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 5155
/* 5146 */    MCD::OPC_CheckPredicate, 6, 113, 22, 0, // Skip to: 10896
/* 5151 */    MCD::OPC_Decode, 221, 3, 53, // Opcode: FMUL_S
/* 5155 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 5169
/* 5160 */    MCD::OPC_CheckPredicate, 7, 99, 22, 0, // Skip to: 10896
/* 5165 */    MCD::OPC_Decode, 220, 3, 54, // Opcode: FMUL_D
/* 5169 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 5183
/* 5174 */    MCD::OPC_CheckPredicate, 6, 85, 22, 0, // Skip to: 10896
/* 5179 */    MCD::OPC_Decode, 200, 3, 53, // Opcode: FDIV_S
/* 5183 */    MCD::OPC_FilterValue, 13, 9, 0, 0, // Skip to: 5197
/* 5188 */    MCD::OPC_CheckPredicate, 7, 71, 22, 0, // Skip to: 10896
/* 5193 */    MCD::OPC_Decode, 199, 3, 54, // Opcode: FDIV_D
/* 5197 */    MCD::OPC_FilterValue, 16, 45, 0, 0, // Skip to: 5247
/* 5202 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5205 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5219
/* 5210 */    MCD::OPC_CheckPredicate, 6, 49, 22, 0, // Skip to: 10896
/* 5215 */    MCD::OPC_Decode, 236, 3, 55, // Opcode: FSGNJ_S
/* 5219 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5233
/* 5224 */    MCD::OPC_CheckPredicate, 6, 35, 22, 0, // Skip to: 10896
/* 5229 */    MCD::OPC_Decode, 232, 3, 55, // Opcode: FSGNJN_S
/* 5233 */    MCD::OPC_FilterValue, 2, 26, 22, 0, // Skip to: 10896
/* 5238 */    MCD::OPC_CheckPredicate, 6, 21, 22, 0, // Skip to: 10896
/* 5243 */    MCD::OPC_Decode, 234, 3, 55, // Opcode: FSGNJX_S
/* 5247 */    MCD::OPC_FilterValue, 17, 45, 0, 0, // Skip to: 5297
/* 5252 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5255 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5269
/* 5260 */    MCD::OPC_CheckPredicate, 7, 255, 21, 0, // Skip to: 10896
/* 5265 */    MCD::OPC_Decode, 235, 3, 56, // Opcode: FSGNJ_D
/* 5269 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5283
/* 5274 */    MCD::OPC_CheckPredicate, 7, 241, 21, 0, // Skip to: 10896
/* 5279 */    MCD::OPC_Decode, 231, 3, 56, // Opcode: FSGNJN_D
/* 5283 */    MCD::OPC_FilterValue, 2, 232, 21, 0, // Skip to: 10896
/* 5288 */    MCD::OPC_CheckPredicate, 7, 227, 21, 0, // Skip to: 10896
/* 5293 */    MCD::OPC_Decode, 233, 3, 56, // Opcode: FSGNJX_D
/* 5297 */    MCD::OPC_FilterValue, 20, 31, 0, 0, // Skip to: 5333
/* 5302 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5305 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5319
/* 5310 */    MCD::OPC_CheckPredicate, 6, 205, 21, 0, // Skip to: 10896
/* 5315 */    MCD::OPC_Decode, 217, 3, 55, // Opcode: FMIN_S
/* 5319 */    MCD::OPC_FilterValue, 1, 196, 21, 0, // Skip to: 10896
/* 5324 */    MCD::OPC_CheckPredicate, 6, 191, 21, 0, // Skip to: 10896
/* 5329 */    MCD::OPC_Decode, 215, 3, 55, // Opcode: FMAX_S
/* 5333 */    MCD::OPC_FilterValue, 21, 31, 0, 0, // Skip to: 5369
/* 5338 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5341 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5355
/* 5346 */    MCD::OPC_CheckPredicate, 7, 169, 21, 0, // Skip to: 10896
/* 5351 */    MCD::OPC_Decode, 216, 3, 56, // Opcode: FMIN_D
/* 5355 */    MCD::OPC_FilterValue, 1, 160, 21, 0, // Skip to: 10896
/* 5360 */    MCD::OPC_CheckPredicate, 7, 155, 21, 0, // Skip to: 10896
/* 5365 */    MCD::OPC_Decode, 214, 3, 56, // Opcode: FMAX_D
/* 5369 */    MCD::OPC_FilterValue, 32, 16, 0, 0, // Skip to: 5390
/* 5374 */    MCD::OPC_CheckPredicate, 7, 141, 21, 0, // Skip to: 10896
/* 5379 */    MCD::OPC_CheckField, 20, 5, 1, 134, 21, 0, // Skip to: 10896
/* 5386 */    MCD::OPC_Decode, 190, 3, 57, // Opcode: FCVT_S_D
/* 5390 */    MCD::OPC_FilterValue, 33, 23, 0, 0, // Skip to: 5418
/* 5395 */    MCD::OPC_CheckPredicate, 7, 120, 21, 0, // Skip to: 10896
/* 5400 */    MCD::OPC_CheckField, 20, 5, 0, 113, 21, 0, // Skip to: 10896
/* 5407 */    MCD::OPC_CheckField, 12, 3, 0, 106, 21, 0, // Skip to: 10896
/* 5414 */    MCD::OPC_Decode, 183, 3, 58, // Opcode: FCVT_D_S
/* 5418 */    MCD::OPC_FilterValue, 44, 16, 0, 0, // Skip to: 5439
/* 5423 */    MCD::OPC_CheckPredicate, 6, 92, 21, 0, // Skip to: 10896
/* 5428 */    MCD::OPC_CheckField, 20, 5, 0, 85, 21, 0, // Skip to: 10896
/* 5435 */    MCD::OPC_Decode, 240, 3, 59, // Opcode: FSQRT_S
/* 5439 */    MCD::OPC_FilterValue, 45, 16, 0, 0, // Skip to: 5460
/* 5444 */    MCD::OPC_CheckPredicate, 7, 71, 21, 0, // Skip to: 10896
/* 5449 */    MCD::OPC_CheckField, 20, 5, 0, 64, 21, 0, // Skip to: 10896
/* 5456 */    MCD::OPC_Decode, 239, 3, 60, // Opcode: FSQRT_D
/* 5460 */    MCD::OPC_FilterValue, 80, 45, 0, 0, // Skip to: 5510
/* 5465 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5468 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5482
/* 5473 */    MCD::OPC_CheckPredicate, 6, 42, 21, 0, // Skip to: 10896
/* 5478 */    MCD::OPC_Decode, 208, 3, 61, // Opcode: FLE_S
/* 5482 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5496
/* 5487 */    MCD::OPC_CheckPredicate, 6, 28, 21, 0, // Skip to: 10896
/* 5492 */    MCD::OPC_Decode, 210, 3, 61, // Opcode: FLT_S
/* 5496 */    MCD::OPC_FilterValue, 2, 19, 21, 0, // Skip to: 10896
/* 5501 */    MCD::OPC_CheckPredicate, 6, 14, 21, 0, // Skip to: 10896
/* 5506 */    MCD::OPC_Decode, 205, 3, 61, // Opcode: FEQ_S
/* 5510 */    MCD::OPC_FilterValue, 81, 45, 0, 0, // Skip to: 5560
/* 5515 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5518 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5532
/* 5523 */    MCD::OPC_CheckPredicate, 7, 248, 20, 0, // Skip to: 10896
/* 5528 */    MCD::OPC_Decode, 207, 3, 62, // Opcode: FLE_D
/* 5532 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5546
/* 5537 */    MCD::OPC_CheckPredicate, 7, 234, 20, 0, // Skip to: 10896
/* 5542 */    MCD::OPC_Decode, 209, 3, 62, // Opcode: FLT_D
/* 5546 */    MCD::OPC_FilterValue, 2, 225, 20, 0, // Skip to: 10896
/* 5551 */    MCD::OPC_CheckPredicate, 7, 220, 20, 0, // Skip to: 10896
/* 5556 */    MCD::OPC_Decode, 204, 3, 62, // Opcode: FEQ_D
/* 5560 */    MCD::OPC_FilterValue, 96, 59, 0, 0, // Skip to: 5624
/* 5565 */    MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 5568 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5582
/* 5573 */    MCD::OPC_CheckPredicate, 6, 198, 20, 0, // Skip to: 10896
/* 5578 */    MCD::OPC_Decode, 198, 3, 63, // Opcode: FCVT_W_S
/* 5582 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5596
/* 5587 */    MCD::OPC_CheckPredicate, 6, 184, 20, 0, // Skip to: 10896
/* 5592 */    MCD::OPC_Decode, 196, 3, 63, // Opcode: FCVT_WU_S
/* 5596 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 5610
/* 5601 */    MCD::OPC_CheckPredicate, 31, 170, 20, 0, // Skip to: 10896
/* 5606 */    MCD::OPC_Decode, 189, 3, 63, // Opcode: FCVT_L_S
/* 5610 */    MCD::OPC_FilterValue, 3, 161, 20, 0, // Skip to: 10896
/* 5615 */    MCD::OPC_CheckPredicate, 31, 156, 20, 0, // Skip to: 10896
/* 5620 */    MCD::OPC_Decode, 187, 3, 63, // Opcode: FCVT_LU_S
/* 5624 */    MCD::OPC_FilterValue, 97, 59, 0, 0, // Skip to: 5688
/* 5629 */    MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 5632 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5646
/* 5637 */    MCD::OPC_CheckPredicate, 7, 134, 20, 0, // Skip to: 10896
/* 5642 */    MCD::OPC_Decode, 197, 3, 64, // Opcode: FCVT_W_D
/* 5646 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5660
/* 5651 */    MCD::OPC_CheckPredicate, 7, 120, 20, 0, // Skip to: 10896
/* 5656 */    MCD::OPC_Decode, 195, 3, 64, // Opcode: FCVT_WU_D
/* 5660 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 5674
/* 5665 */    MCD::OPC_CheckPredicate, 32, 106, 20, 0, // Skip to: 10896
/* 5670 */    MCD::OPC_Decode, 188, 3, 64, // Opcode: FCVT_L_D
/* 5674 */    MCD::OPC_FilterValue, 3, 97, 20, 0, // Skip to: 10896
/* 5679 */    MCD::OPC_CheckPredicate, 32, 92, 20, 0, // Skip to: 10896
/* 5684 */    MCD::OPC_Decode, 186, 3, 64, // Opcode: FCVT_LU_D
/* 5688 */    MCD::OPC_FilterValue, 104, 59, 0, 0, // Skip to: 5752
/* 5693 */    MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 5696 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 5710
/* 5701 */    MCD::OPC_CheckPredicate, 6, 70, 20, 0, // Skip to: 10896
/* 5706 */    MCD::OPC_Decode, 193, 3, 65, // Opcode: FCVT_S_W
/* 5710 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 5724
/* 5715 */    MCD::OPC_CheckPredicate, 6, 56, 20, 0, // Skip to: 10896
/* 5720 */    MCD::OPC_Decode, 194, 3, 65, // Opcode: FCVT_S_WU
/* 5724 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 5738
/* 5729 */    MCD::OPC_CheckPredicate, 31, 42, 20, 0, // Skip to: 10896
/* 5734 */    MCD::OPC_Decode, 191, 3, 65, // Opcode: FCVT_S_L
/* 5738 */    MCD::OPC_FilterValue, 3, 33, 20, 0, // Skip to: 10896
/* 5743 */    MCD::OPC_CheckPredicate, 31, 28, 20, 0, // Skip to: 10896
/* 5748 */    MCD::OPC_Decode, 192, 3, 65, // Opcode: FCVT_S_LU
/* 5752 */    MCD::OPC_FilterValue, 105, 73, 0, 0, // Skip to: 5830
/* 5757 */    MCD::OPC_ExtractField, 20, 5,  // Inst{24-20} ...
/* 5760 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 5781
/* 5765 */    MCD::OPC_CheckPredicate, 7, 6, 20, 0, // Skip to: 10896
/* 5770 */    MCD::OPC_CheckField, 12, 3, 0, 255, 19, 0, // Skip to: 10896
/* 5777 */    MCD::OPC_Decode, 184, 3, 66, // Opcode: FCVT_D_W
/* 5781 */    MCD::OPC_FilterValue, 1, 16, 0, 0, // Skip to: 5802
/* 5786 */    MCD::OPC_CheckPredicate, 7, 241, 19, 0, // Skip to: 10896
/* 5791 */    MCD::OPC_CheckField, 12, 3, 0, 234, 19, 0, // Skip to: 10896
/* 5798 */    MCD::OPC_Decode, 185, 3, 66, // Opcode: FCVT_D_WU
/* 5802 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 5816
/* 5807 */    MCD::OPC_CheckPredicate, 32, 220, 19, 0, // Skip to: 10896
/* 5812 */    MCD::OPC_Decode, 181, 3, 67, // Opcode: FCVT_D_L
/* 5816 */    MCD::OPC_FilterValue, 3, 211, 19, 0, // Skip to: 10896
/* 5821 */    MCD::OPC_CheckPredicate, 32, 206, 19, 0, // Skip to: 10896
/* 5826 */    MCD::OPC_Decode, 182, 3, 67, // Opcode: FCVT_D_LU
/* 5830 */    MCD::OPC_FilterValue, 112, 45, 0, 0, // Skip to: 5880
/* 5835 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5838 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 5859
/* 5843 */    MCD::OPC_CheckPredicate, 6, 184, 19, 0, // Skip to: 10896
/* 5848 */    MCD::OPC_CheckField, 20, 5, 0, 177, 19, 0, // Skip to: 10896
/* 5855 */    MCD::OPC_Decode, 225, 3, 68, // Opcode: FMV_X_W
/* 5859 */    MCD::OPC_FilterValue, 1, 168, 19, 0, // Skip to: 10896
/* 5864 */    MCD::OPC_CheckPredicate, 6, 163, 19, 0, // Skip to: 10896
/* 5869 */    MCD::OPC_CheckField, 20, 5, 0, 156, 19, 0, // Skip to: 10896
/* 5876 */    MCD::OPC_Decode, 180, 3, 68, // Opcode: FCLASS_S
/* 5880 */    MCD::OPC_FilterValue, 113, 45, 0, 0, // Skip to: 5930
/* 5885 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5888 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 5909
/* 5893 */    MCD::OPC_CheckPredicate, 32, 134, 19, 0, // Skip to: 10896
/* 5898 */    MCD::OPC_CheckField, 20, 5, 0, 127, 19, 0, // Skip to: 10896
/* 5905 */    MCD::OPC_Decode, 224, 3, 69, // Opcode: FMV_X_D
/* 5909 */    MCD::OPC_FilterValue, 1, 118, 19, 0, // Skip to: 10896
/* 5914 */    MCD::OPC_CheckPredicate, 7, 113, 19, 0, // Skip to: 10896
/* 5919 */    MCD::OPC_CheckField, 20, 5, 0, 106, 19, 0, // Skip to: 10896
/* 5926 */    MCD::OPC_Decode, 179, 3, 69, // Opcode: FCLASS_D
/* 5930 */    MCD::OPC_FilterValue, 120, 23, 0, 0, // Skip to: 5958
/* 5935 */    MCD::OPC_CheckPredicate, 6, 92, 19, 0, // Skip to: 10896
/* 5940 */    MCD::OPC_CheckField, 20, 5, 0, 85, 19, 0, // Skip to: 10896
/* 5947 */    MCD::OPC_CheckField, 12, 3, 0, 78, 19, 0, // Skip to: 10896
/* 5954 */    MCD::OPC_Decode, 223, 3, 70, // Opcode: FMV_W_X
/* 5958 */    MCD::OPC_FilterValue, 121, 69, 19, 0, // Skip to: 10896
/* 5963 */    MCD::OPC_CheckPredicate, 32, 64, 19, 0, // Skip to: 10896
/* 5968 */    MCD::OPC_CheckField, 20, 5, 0, 57, 19, 0, // Skip to: 10896
/* 5975 */    MCD::OPC_CheckField, 12, 3, 0, 50, 19, 0, // Skip to: 10896
/* 5982 */    MCD::OPC_Decode, 222, 3, 66, // Opcode: FMV_D_X
/* 5986 */    MCD::OPC_FilterValue, 87, 216, 17, 0, // Skip to: 10559
/* 5991 */    MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 5994 */    MCD::OPC_FilterValue, 0, 96, 2, 0, // Skip to: 6607
/* 5999 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 6002 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6016
/* 6007 */    MCD::OPC_CheckPredicate, 5, 20, 19, 0, // Skip to: 10896
/* 6012 */    MCD::OPC_Decode, 252, 4, 71, // Opcode: VADD_VV
/* 6016 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 6030
/* 6021 */    MCD::OPC_CheckPredicate, 5, 6, 19, 0, // Skip to: 10896
/* 6026 */    MCD::OPC_Decode, 160, 7, 71, // Opcode: VSUB_VV
/* 6030 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 6044
/* 6035 */    MCD::OPC_CheckPredicate, 5, 248, 18, 0, // Skip to: 10896
/* 6040 */    MCD::OPC_Decode, 152, 6, 71, // Opcode: VMINU_VV
/* 6044 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 6058
/* 6049 */    MCD::OPC_CheckPredicate, 5, 234, 18, 0, // Skip to: 10896
/* 6054 */    MCD::OPC_Decode, 154, 6, 71, // Opcode: VMIN_VV
/* 6058 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 6072
/* 6063 */    MCD::OPC_CheckPredicate, 5, 220, 18, 0, // Skip to: 10896
/* 6068 */    MCD::OPC_Decode, 135, 6, 71, // Opcode: VMAXU_VV
/* 6072 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 6086
/* 6077 */    MCD::OPC_CheckPredicate, 5, 206, 18, 0, // Skip to: 10896
/* 6082 */    MCD::OPC_Decode, 137, 6, 71, // Opcode: VMAX_VV
/* 6086 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 6100
/* 6091 */    MCD::OPC_CheckPredicate, 5, 192, 18, 0, // Skip to: 10896
/* 6096 */    MCD::OPC_Decode, 255, 4, 71, // Opcode: VAND_VV
/* 6100 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 6114
/* 6105 */    MCD::OPC_CheckPredicate, 5, 178, 18, 0, // Skip to: 10896
/* 6110 */    MCD::OPC_Decode, 223, 6, 71, // Opcode: VOR_VV
/* 6114 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 6128
/* 6119 */    MCD::OPC_CheckPredicate, 5, 164, 18, 0, // Skip to: 10896
/* 6124 */    MCD::OPC_Decode, 203, 7, 71, // Opcode: VXOR_VV
/* 6128 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 6142
/* 6133 */    MCD::OPC_CheckPredicate, 5, 150, 18, 0, // Skip to: 10896
/* 6138 */    MCD::OPC_Decode, 239, 6, 71, // Opcode: VRGATHER_VV
/* 6142 */    MCD::OPC_FilterValue, 16, 16, 0, 0, // Skip to: 6163
/* 6147 */    MCD::OPC_CheckPredicate, 5, 136, 18, 0, // Skip to: 10896
/* 6152 */    MCD::OPC_CheckField, 25, 1, 0, 129, 18, 0, // Skip to: 10896
/* 6159 */    MCD::OPC_Decode, 249, 4, 72, // Opcode: VADC_VVM
/* 6163 */    MCD::OPC_FilterValue, 17, 31, 0, 0, // Skip to: 6199
/* 6168 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 6171 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6185
/* 6176 */    MCD::OPC_CheckPredicate, 5, 107, 18, 0, // Skip to: 10896
/* 6181 */    MCD::OPC_Decode, 128, 6, 72, // Opcode: VMADC_VVM
/* 6185 */    MCD::OPC_FilterValue, 1, 98, 18, 0, // Skip to: 10896
/* 6190 */    MCD::OPC_CheckPredicate, 5, 93, 18, 0, // Skip to: 10896
/* 6195 */    MCD::OPC_Decode, 255, 5, 72, // Opcode: VMADC_VV
/* 6199 */    MCD::OPC_FilterValue, 18, 16, 0, 0, // Skip to: 6220
/* 6204 */    MCD::OPC_CheckPredicate, 5, 79, 18, 0, // Skip to: 10896
/* 6209 */    MCD::OPC_CheckField, 25, 1, 0, 72, 18, 0, // Skip to: 10896
/* 6216 */    MCD::OPC_Decode, 250, 6, 72, // Opcode: VSBC_VVM
/* 6220 */    MCD::OPC_FilterValue, 19, 31, 0, 0, // Skip to: 6256
/* 6225 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 6228 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6242
/* 6233 */    MCD::OPC_CheckPredicate, 5, 50, 18, 0, // Skip to: 10896
/* 6238 */    MCD::OPC_Decode, 161, 6, 72, // Opcode: VMSBC_VVM
/* 6242 */    MCD::OPC_FilterValue, 1, 41, 18, 0, // Skip to: 10896
/* 6247 */    MCD::OPC_CheckPredicate, 5, 36, 18, 0, // Skip to: 10896
/* 6252 */    MCD::OPC_Decode, 160, 6, 72, // Opcode: VMSBC_VV
/* 6256 */    MCD::OPC_FilterValue, 23, 38, 0, 0, // Skip to: 6299
/* 6261 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 6264 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6278
/* 6269 */    MCD::OPC_CheckPredicate, 5, 14, 18, 0, // Skip to: 10896
/* 6274 */    MCD::OPC_Decode, 140, 6, 72, // Opcode: VMERGE_VVM
/* 6278 */    MCD::OPC_FilterValue, 1, 5, 18, 0, // Skip to: 10896
/* 6283 */    MCD::OPC_CheckPredicate, 5, 0, 18, 0, // Skip to: 10896
/* 6288 */    MCD::OPC_CheckField, 20, 5, 0, 249, 17, 0, // Skip to: 10896
/* 6295 */    MCD::OPC_Decode, 201, 6, 73, // Opcode: VMV_V_V
/* 6299 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 6313
/* 6304 */    MCD::OPC_CheckPredicate, 5, 235, 17, 0, // Skip to: 10896
/* 6309 */    MCD::OPC_Decode, 166, 6, 71, // Opcode: VMSEQ_VV
/* 6313 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 6327
/* 6318 */    MCD::OPC_CheckPredicate, 5, 221, 17, 0, // Skip to: 10896
/* 6323 */    MCD::OPC_Decode, 184, 6, 71, // Opcode: VMSNE_VV
/* 6327 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 6341
/* 6332 */    MCD::OPC_CheckPredicate, 5, 207, 17, 0, // Skip to: 10896
/* 6337 */    MCD::OPC_Decode, 179, 6, 71, // Opcode: VMSLTU_VV
/* 6341 */    MCD::OPC_FilterValue, 27, 9, 0, 0, // Skip to: 6355
/* 6346 */    MCD::OPC_CheckPredicate, 5, 193, 17, 0, // Skip to: 10896
/* 6351 */    MCD::OPC_Decode, 181, 6, 71, // Opcode: VMSLT_VV
/* 6355 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 6369
/* 6360 */    MCD::OPC_CheckPredicate, 5, 179, 17, 0, // Skip to: 10896
/* 6365 */    MCD::OPC_Decode, 174, 6, 71, // Opcode: VMSLEU_VV
/* 6369 */    MCD::OPC_FilterValue, 29, 9, 0, 0, // Skip to: 6383
/* 6374 */    MCD::OPC_CheckPredicate, 5, 165, 17, 0, // Skip to: 10896
/* 6379 */    MCD::OPC_Decode, 177, 6, 71, // Opcode: VMSLE_VV
/* 6383 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 6397
/* 6388 */    MCD::OPC_CheckPredicate, 5, 151, 17, 0, // Skip to: 10896
/* 6393 */    MCD::OPC_Decode, 245, 6, 71, // Opcode: VSADDU_VV
/* 6397 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 6411
/* 6402 */    MCD::OPC_CheckPredicate, 5, 137, 17, 0, // Skip to: 10896
/* 6407 */    MCD::OPC_Decode, 248, 6, 71, // Opcode: VSADD_VV
/* 6411 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 6425
/* 6416 */    MCD::OPC_CheckPredicate, 5, 123, 17, 0, // Skip to: 10896
/* 6421 */    MCD::OPC_Decode, 155, 7, 71, // Opcode: VSSUBU_VV
/* 6425 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 6439
/* 6430 */    MCD::OPC_CheckPredicate, 5, 109, 17, 0, // Skip to: 10896
/* 6435 */    MCD::OPC_Decode, 157, 7, 71, // Opcode: VSSUB_VV
/* 6439 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 6453
/* 6444 */    MCD::OPC_CheckPredicate, 5, 95, 17, 0, // Skip to: 10896
/* 6449 */    MCD::OPC_Decode, 136, 7, 71, // Opcode: VSLL_VV
/* 6453 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 6467
/* 6458 */    MCD::OPC_CheckPredicate, 5, 81, 17, 0, // Skip to: 10896
/* 6463 */    MCD::OPC_Decode, 138, 7, 71, // Opcode: VSMUL_VV
/* 6467 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 6481
/* 6472 */    MCD::OPC_CheckPredicate, 5, 67, 17, 0, // Skip to: 10896
/* 6477 */    MCD::OPC_Decode, 144, 7, 71, // Opcode: VSRL_VV
/* 6481 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 6495
/* 6486 */    MCD::OPC_CheckPredicate, 5, 53, 17, 0, // Skip to: 10896
/* 6491 */    MCD::OPC_Decode, 141, 7, 71, // Opcode: VSRA_VV
/* 6495 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 6509
/* 6500 */    MCD::OPC_CheckPredicate, 5, 39, 17, 0, // Skip to: 10896
/* 6505 */    MCD::OPC_Decode, 153, 7, 71, // Opcode: VSSRL_VV
/* 6509 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 6523
/* 6514 */    MCD::OPC_CheckPredicate, 5, 25, 17, 0, // Skip to: 10896
/* 6519 */    MCD::OPC_Decode, 150, 7, 71, // Opcode: VSSRA_VV
/* 6523 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 6537
/* 6528 */    MCD::OPC_CheckPredicate, 5, 11, 17, 0, // Skip to: 10896
/* 6533 */    MCD::OPC_Decode, 220, 6, 71, // Opcode: VNSRL_WV
/* 6537 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 6551
/* 6542 */    MCD::OPC_CheckPredicate, 5, 253, 16, 0, // Skip to: 10896
/* 6547 */    MCD::OPC_Decode, 217, 6, 71, // Opcode: VNSRA_WV
/* 6551 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 6565
/* 6556 */    MCD::OPC_CheckPredicate, 5, 239, 16, 0, // Skip to: 10896
/* 6561 */    MCD::OPC_Decode, 207, 6, 71, // Opcode: VNCLIPU_WV
/* 6565 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 6579
/* 6570 */    MCD::OPC_CheckPredicate, 5, 225, 16, 0, // Skip to: 10896
/* 6575 */    MCD::OPC_Decode, 210, 6, 71, // Opcode: VNCLIP_WV
/* 6579 */    MCD::OPC_FilterValue, 48, 9, 0, 0, // Skip to: 6593
/* 6584 */    MCD::OPC_CheckPredicate, 5, 211, 16, 0, // Skip to: 10896
/* 6589 */    MCD::OPC_Decode, 192, 7, 71, // Opcode: VWREDSUMU_VS
/* 6593 */    MCD::OPC_FilterValue, 49, 202, 16, 0, // Skip to: 10896
/* 6598 */    MCD::OPC_CheckPredicate, 5, 197, 16, 0, // Skip to: 10896
/* 6603 */    MCD::OPC_Decode, 193, 7, 71, // Opcode: VWREDSUM_VS
/* 6607 */    MCD::OPC_FilterValue, 1, 21, 3, 0, // Skip to: 7401
/* 6612 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 6615 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6629
/* 6620 */    MCD::OPC_CheckPredicate, 5, 175, 16, 0, // Skip to: 10896
/* 6625 */    MCD::OPC_Decode, 139, 5, 71, // Opcode: VFADD_VV
/* 6629 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 6643
/* 6634 */    MCD::OPC_CheckPredicate, 5, 161, 16, 0, // Skip to: 10896
/* 6639 */    MCD::OPC_Decode, 184, 5, 71, // Opcode: VFREDSUM_VS
/* 6643 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 6657
/* 6648 */    MCD::OPC_CheckPredicate, 5, 147, 16, 0, // Skip to: 10896
/* 6653 */    MCD::OPC_Decode, 194, 5, 71, // Opcode: VFSUB_VV
/* 6657 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 6671
/* 6662 */    MCD::OPC_CheckPredicate, 5, 133, 16, 0, // Skip to: 10896
/* 6667 */    MCD::OPC_Decode, 183, 5, 71, // Opcode: VFREDOSUM_VS
/* 6671 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 6685
/* 6676 */    MCD::OPC_CheckPredicate, 5, 119, 16, 0, // Skip to: 10896
/* 6681 */    MCD::OPC_Decode, 156, 5, 71, // Opcode: VFMIN_VV
/* 6685 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 6699
/* 6690 */    MCD::OPC_CheckPredicate, 5, 105, 16, 0, // Skip to: 10896
/* 6695 */    MCD::OPC_Decode, 182, 5, 71, // Opcode: VFREDMIN_VS
/* 6699 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 6713
/* 6704 */    MCD::OPC_CheckPredicate, 5, 91, 16, 0, // Skip to: 10896
/* 6709 */    MCD::OPC_Decode, 153, 5, 71, // Opcode: VFMAX_VV
/* 6713 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 6727
/* 6718 */    MCD::OPC_CheckPredicate, 5, 77, 16, 0, // Skip to: 10896
/* 6723 */    MCD::OPC_Decode, 181, 5, 71, // Opcode: VFREDMAX_VS
/* 6727 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 6741
/* 6732 */    MCD::OPC_CheckPredicate, 5, 63, 16, 0, // Skip to: 10896
/* 6737 */    MCD::OPC_Decode, 191, 5, 71, // Opcode: VFSGNJ_VV
/* 6741 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 6755
/* 6746 */    MCD::OPC_CheckPredicate, 5, 49, 16, 0, // Skip to: 10896
/* 6751 */    MCD::OPC_Decode, 187, 5, 71, // Opcode: VFSGNJN_VV
/* 6755 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 6769
/* 6760 */    MCD::OPC_CheckPredicate, 5, 35, 16, 0, // Skip to: 10896
/* 6765 */    MCD::OPC_Decode, 189, 5, 71, // Opcode: VFSGNJX_VV
/* 6769 */    MCD::OPC_FilterValue, 16, 23, 0, 0, // Skip to: 6797
/* 6774 */    MCD::OPC_CheckPredicate, 5, 21, 16, 0, // Skip to: 10896
/* 6779 */    MCD::OPC_CheckField, 25, 1, 1, 14, 16, 0, // Skip to: 10896
/* 6786 */    MCD::OPC_CheckField, 15, 5, 0, 7, 16, 0, // Skip to: 10896
/* 6793 */    MCD::OPC_Decode, 163, 5, 74, // Opcode: VFMV_F_S
/* 6797 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 6811
/* 6802 */    MCD::OPC_CheckPredicate, 5, 249, 15, 0, // Skip to: 10896
/* 6807 */    MCD::OPC_Decode, 143, 6, 71, // Opcode: VMFEQ_VV
/* 6811 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 6825
/* 6816 */    MCD::OPC_CheckPredicate, 5, 235, 15, 0, // Skip to: 10896
/* 6821 */    MCD::OPC_Decode, 147, 6, 71, // Opcode: VMFLE_VV
/* 6825 */    MCD::OPC_FilterValue, 27, 9, 0, 0, // Skip to: 6839
/* 6830 */    MCD::OPC_CheckPredicate, 5, 221, 15, 0, // Skip to: 10896
/* 6835 */    MCD::OPC_Decode, 149, 6, 71, // Opcode: VMFLT_VV
/* 6839 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 6853
/* 6844 */    MCD::OPC_CheckPredicate, 5, 207, 15, 0, // Skip to: 10896
/* 6849 */    MCD::OPC_Decode, 151, 6, 71, // Opcode: VMFNE_VV
/* 6853 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 6867
/* 6858 */    MCD::OPC_CheckPredicate, 5, 193, 15, 0, // Skip to: 10896
/* 6863 */    MCD::OPC_Decode, 146, 5, 71, // Opcode: VFDIV_VV
/* 6867 */    MCD::OPC_FilterValue, 34, 213, 0, 0, // Skip to: 7085
/* 6872 */    MCD::OPC_ExtractField, 15, 5,  // Inst{19-15} ...
/* 6875 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 6889
/* 6880 */    MCD::OPC_CheckPredicate, 5, 171, 15, 0, // Skip to: 10896
/* 6885 */    MCD::OPC_Decode, 143, 5, 75, // Opcode: VFCVT_XU_F_V
/* 6889 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 6903
/* 6894 */    MCD::OPC_CheckPredicate, 5, 157, 15, 0, // Skip to: 10896
/* 6899 */    MCD::OPC_Decode, 144, 5, 75, // Opcode: VFCVT_X_F_V
/* 6903 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 6917
/* 6908 */    MCD::OPC_CheckPredicate, 5, 143, 15, 0, // Skip to: 10896
/* 6913 */    MCD::OPC_Decode, 141, 5, 75, // Opcode: VFCVT_F_XU_V
/* 6917 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 6931
/* 6922 */    MCD::OPC_CheckPredicate, 5, 129, 15, 0, // Skip to: 10896
/* 6927 */    MCD::OPC_Decode, 142, 5, 75, // Opcode: VFCVT_F_X_V
/* 6931 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 6945
/* 6936 */    MCD::OPC_CheckPredicate, 5, 115, 15, 0, // Skip to: 10896
/* 6941 */    MCD::OPC_Decode, 202, 5, 75, // Opcode: VFWCVT_XU_F_V
/* 6945 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 6959
/* 6950 */    MCD::OPC_CheckPredicate, 5, 101, 15, 0, // Skip to: 10896
/* 6955 */    MCD::OPC_Decode, 203, 5, 75, // Opcode: VFWCVT_X_F_V
/* 6959 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 6973
/* 6964 */    MCD::OPC_CheckPredicate, 5, 87, 15, 0, // Skip to: 10896
/* 6969 */    MCD::OPC_Decode, 200, 5, 75, // Opcode: VFWCVT_F_XU_V
/* 6973 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 6987
/* 6978 */    MCD::OPC_CheckPredicate, 5, 73, 15, 0, // Skip to: 10896
/* 6983 */    MCD::OPC_Decode, 201, 5, 75, // Opcode: VFWCVT_F_X_V
/* 6987 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 7001
/* 6992 */    MCD::OPC_CheckPredicate, 5, 59, 15, 0, // Skip to: 10896
/* 6997 */    MCD::OPC_Decode, 199, 5, 75, // Opcode: VFWCVT_F_F_V
/* 7001 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 7015
/* 7006 */    MCD::OPC_CheckPredicate, 5, 45, 15, 0, // Skip to: 10896
/* 7011 */    MCD::OPC_Decode, 170, 5, 75, // Opcode: VFNCVT_XU_F_W
/* 7015 */    MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 7029
/* 7020 */    MCD::OPC_CheckPredicate, 5, 31, 15, 0, // Skip to: 10896
/* 7025 */    MCD::OPC_Decode, 171, 5, 75, // Opcode: VFNCVT_X_F_W
/* 7029 */    MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 7043
/* 7034 */    MCD::OPC_CheckPredicate, 5, 17, 15, 0, // Skip to: 10896
/* 7039 */    MCD::OPC_Decode, 167, 5, 75, // Opcode: VFNCVT_F_XU_W
/* 7043 */    MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 7057
/* 7048 */    MCD::OPC_CheckPredicate, 5, 3, 15, 0, // Skip to: 10896
/* 7053 */    MCD::OPC_Decode, 168, 5, 75, // Opcode: VFNCVT_F_X_W
/* 7057 */    MCD::OPC_FilterValue, 20, 9, 0, 0, // Skip to: 7071
/* 7062 */    MCD::OPC_CheckPredicate, 5, 245, 14, 0, // Skip to: 10896
/* 7067 */    MCD::OPC_Decode, 166, 5, 75, // Opcode: VFNCVT_F_F_W
/* 7071 */    MCD::OPC_FilterValue, 21, 236, 14, 0, // Skip to: 10896
/* 7076 */    MCD::OPC_CheckPredicate, 5, 231, 14, 0, // Skip to: 10896
/* 7081 */    MCD::OPC_Decode, 169, 5, 75, // Opcode: VFNCVT_ROD_F_F_W
/* 7085 */    MCD::OPC_FilterValue, 35, 31, 0, 0, // Skip to: 7121
/* 7090 */    MCD::OPC_ExtractField, 15, 5,  // Inst{19-15} ...
/* 7093 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 7107
/* 7098 */    MCD::OPC_CheckPredicate, 5, 209, 14, 0, // Skip to: 10896
/* 7103 */    MCD::OPC_Decode, 192, 5, 75, // Opcode: VFSQRT_V
/* 7107 */    MCD::OPC_FilterValue, 16, 200, 14, 0, // Skip to: 10896
/* 7112 */    MCD::OPC_CheckPredicate, 5, 195, 14, 0, // Skip to: 10896
/* 7117 */    MCD::OPC_Decode, 140, 5, 75, // Opcode: VFCLASS_V
/* 7121 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 7135
/* 7126 */    MCD::OPC_CheckPredicate, 5, 181, 14, 0, // Skip to: 10896
/* 7131 */    MCD::OPC_Decode, 162, 5, 71, // Opcode: VFMUL_VV
/* 7135 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 7149
/* 7140 */    MCD::OPC_CheckPredicate, 5, 167, 14, 0, // Skip to: 10896
/* 7145 */    MCD::OPC_Decode, 151, 5, 76, // Opcode: VFMADD_VV
/* 7149 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 7163
/* 7154 */    MCD::OPC_CheckPredicate, 5, 153, 14, 0, // Skip to: 10896
/* 7159 */    MCD::OPC_Decode, 175, 5, 76, // Opcode: VFNMADD_VV
/* 7163 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 7177
/* 7168 */    MCD::OPC_CheckPredicate, 5, 139, 14, 0, // Skip to: 10896
/* 7173 */    MCD::OPC_Decode, 160, 5, 76, // Opcode: VFMSUB_VV
/* 7177 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 7191
/* 7182 */    MCD::OPC_CheckPredicate, 5, 125, 14, 0, // Skip to: 10896
/* 7187 */    MCD::OPC_Decode, 179, 5, 76, // Opcode: VFNMSUB_VV
/* 7191 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 7205
/* 7196 */    MCD::OPC_CheckPredicate, 5, 111, 14, 0, // Skip to: 10896
/* 7201 */    MCD::OPC_Decode, 149, 5, 76, // Opcode: VFMACC_VV
/* 7205 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 7219
/* 7210 */    MCD::OPC_CheckPredicate, 5, 97, 14, 0, // Skip to: 10896
/* 7215 */    MCD::OPC_Decode, 173, 5, 76, // Opcode: VFNMACC_VV
/* 7219 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 7233
/* 7224 */    MCD::OPC_CheckPredicate, 5, 83, 14, 0, // Skip to: 10896
/* 7229 */    MCD::OPC_Decode, 158, 5, 76, // Opcode: VFMSAC_VV
/* 7233 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 7247
/* 7238 */    MCD::OPC_CheckPredicate, 5, 69, 14, 0, // Skip to: 10896
/* 7243 */    MCD::OPC_Decode, 177, 5, 76, // Opcode: VFNMSAC_VV
/* 7247 */    MCD::OPC_FilterValue, 48, 9, 0, 0, // Skip to: 7261
/* 7252 */    MCD::OPC_CheckPredicate, 5, 55, 14, 0, // Skip to: 10896
/* 7257 */    MCD::OPC_Decode, 196, 5, 71, // Opcode: VFWADD_VV
/* 7261 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 7275
/* 7266 */    MCD::OPC_CheckPredicate, 5, 41, 14, 0, // Skip to: 10896
/* 7271 */    MCD::OPC_Decode, 215, 5, 71, // Opcode: VFWREDSUM_VS
/* 7275 */    MCD::OPC_FilterValue, 50, 9, 0, 0, // Skip to: 7289
/* 7280 */    MCD::OPC_CheckPredicate, 5, 27, 14, 0, // Skip to: 10896
/* 7285 */    MCD::OPC_Decode, 217, 5, 71, // Opcode: VFWSUB_VV
/* 7289 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 7303
/* 7294 */    MCD::OPC_CheckPredicate, 5, 13, 14, 0, // Skip to: 10896
/* 7299 */    MCD::OPC_Decode, 214, 5, 71, // Opcode: VFWREDOSUM_VS
/* 7303 */    MCD::OPC_FilterValue, 52, 9, 0, 0, // Skip to: 7317
/* 7308 */    MCD::OPC_CheckPredicate, 5, 255, 13, 0, // Skip to: 10896
/* 7313 */    MCD::OPC_Decode, 198, 5, 71, // Opcode: VFWADD_WV
/* 7317 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 7331
/* 7322 */    MCD::OPC_CheckPredicate, 5, 241, 13, 0, // Skip to: 10896
/* 7327 */    MCD::OPC_Decode, 219, 5, 71, // Opcode: VFWSUB_WV
/* 7331 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 7345
/* 7336 */    MCD::OPC_CheckPredicate, 5, 227, 13, 0, // Skip to: 10896
/* 7341 */    MCD::OPC_Decode, 209, 5, 71, // Opcode: VFWMUL_VV
/* 7345 */    MCD::OPC_FilterValue, 60, 9, 0, 0, // Skip to: 7359
/* 7350 */    MCD::OPC_CheckPredicate, 5, 213, 13, 0, // Skip to: 10896
/* 7355 */    MCD::OPC_Decode, 205, 5, 76, // Opcode: VFWMACC_VV
/* 7359 */    MCD::OPC_FilterValue, 61, 9, 0, 0, // Skip to: 7373
/* 7364 */    MCD::OPC_CheckPredicate, 5, 199, 13, 0, // Skip to: 10896
/* 7369 */    MCD::OPC_Decode, 211, 5, 76, // Opcode: VFWNMACC_VV
/* 7373 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 7387
/* 7378 */    MCD::OPC_CheckPredicate, 5, 185, 13, 0, // Skip to: 10896
/* 7383 */    MCD::OPC_Decode, 207, 5, 76, // Opcode: VFWMSAC_VV
/* 7387 */    MCD::OPC_FilterValue, 63, 176, 13, 0, // Skip to: 10896
/* 7392 */    MCD::OPC_CheckPredicate, 5, 171, 13, 0, // Skip to: 10896
/* 7397 */    MCD::OPC_Decode, 213, 5, 76, // Opcode: VFWNMSAC_VV
/* 7401 */    MCD::OPC_FilterValue, 2, 98, 3, 0, // Skip to: 8272
/* 7406 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 7409 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 7423
/* 7414 */    MCD::OPC_CheckPredicate, 5, 149, 13, 0, // Skip to: 10896
/* 7419 */    MCD::OPC_Decode, 232, 6, 71, // Opcode: VREDSUM_VS
/* 7423 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 7437
/* 7428 */    MCD::OPC_CheckPredicate, 5, 135, 13, 0, // Skip to: 10896
/* 7433 */    MCD::OPC_Decode, 226, 6, 71, // Opcode: VREDAND_VS
/* 7437 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 7451
/* 7442 */    MCD::OPC_CheckPredicate, 5, 121, 13, 0, // Skip to: 10896
/* 7447 */    MCD::OPC_Decode, 231, 6, 71, // Opcode: VREDOR_VS
/* 7451 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 7465
/* 7456 */    MCD::OPC_CheckPredicate, 5, 107, 13, 0, // Skip to: 10896
/* 7461 */    MCD::OPC_Decode, 233, 6, 71, // Opcode: VREDXOR_VS
/* 7465 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 7479
/* 7470 */    MCD::OPC_CheckPredicate, 5, 93, 13, 0, // Skip to: 10896
/* 7475 */    MCD::OPC_Decode, 229, 6, 71, // Opcode: VREDMINU_VS
/* 7479 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 7493
/* 7484 */    MCD::OPC_CheckPredicate, 5, 79, 13, 0, // Skip to: 10896
/* 7489 */    MCD::OPC_Decode, 230, 6, 71, // Opcode: VREDMIN_VS
/* 7493 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 7507
/* 7498 */    MCD::OPC_CheckPredicate, 5, 65, 13, 0, // Skip to: 10896
/* 7503 */    MCD::OPC_Decode, 227, 6, 71, // Opcode: VREDMAXU_VS
/* 7507 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 7521
/* 7512 */    MCD::OPC_CheckPredicate, 5, 51, 13, 0, // Skip to: 10896
/* 7517 */    MCD::OPC_Decode, 228, 6, 71, // Opcode: VREDMAX_VS
/* 7521 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 7535
/* 7526 */    MCD::OPC_CheckPredicate, 5, 37, 13, 0, // Skip to: 10896
/* 7531 */    MCD::OPC_Decode, 244, 4, 71, // Opcode: VAADDU_VV
/* 7535 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 7549
/* 7540 */    MCD::OPC_CheckPredicate, 5, 23, 13, 0, // Skip to: 10896
/* 7545 */    MCD::OPC_Decode, 246, 4, 71, // Opcode: VAADD_VV
/* 7549 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 7563
/* 7554 */    MCD::OPC_CheckPredicate, 5, 9, 13, 0, // Skip to: 10896
/* 7559 */    MCD::OPC_Decode, 129, 5, 71, // Opcode: VASUBU_VV
/* 7563 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 7577
/* 7568 */    MCD::OPC_CheckPredicate, 5, 251, 12, 0, // Skip to: 10896
/* 7573 */    MCD::OPC_Decode, 131, 5, 71, // Opcode: VASUB_VV
/* 7577 */    MCD::OPC_FilterValue, 16, 52, 0, 0, // Skip to: 7634
/* 7582 */    MCD::OPC_ExtractField, 15, 5,  // Inst{19-15} ...
/* 7585 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7606
/* 7590 */    MCD::OPC_CheckPredicate, 5, 229, 12, 0, // Skip to: 10896
/* 7595 */    MCD::OPC_CheckField, 25, 1, 1, 222, 12, 0, // Skip to: 10896
/* 7602 */    MCD::OPC_Decode, 203, 6, 77, // Opcode: VMV_X_S
/* 7606 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 7620
/* 7611 */    MCD::OPC_CheckPredicate, 5, 208, 12, 0, // Skip to: 10896
/* 7616 */    MCD::OPC_Decode, 225, 6, 78, // Opcode: VPOPC_M
/* 7620 */    MCD::OPC_FilterValue, 17, 199, 12, 0, // Skip to: 10896
/* 7625 */    MCD::OPC_CheckPredicate, 5, 194, 12, 0, // Skip to: 10896
/* 7630 */    MCD::OPC_Decode, 147, 5, 78, // Opcode: VFIRST_M
/* 7634 */    MCD::OPC_FilterValue, 20, 80, 0, 0, // Skip to: 7719
/* 7639 */    MCD::OPC_ExtractField, 15, 5,  // Inst{19-15} ...
/* 7642 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 7656
/* 7647 */    MCD::OPC_CheckPredicate, 5, 172, 12, 0, // Skip to: 10896
/* 7652 */    MCD::OPC_Decode, 164, 6, 75, // Opcode: VMSBF_M
/* 7656 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 7670
/* 7661 */    MCD::OPC_CheckPredicate, 5, 158, 12, 0, // Skip to: 10896
/* 7666 */    MCD::OPC_Decode, 186, 6, 75, // Opcode: VMSOF_M
/* 7670 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 7684
/* 7675 */    MCD::OPC_CheckPredicate, 5, 144, 12, 0, // Skip to: 10896
/* 7680 */    MCD::OPC_Decode, 172, 6, 75, // Opcode: VMSIF_M
/* 7684 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 7698
/* 7689 */    MCD::OPC_CheckPredicate, 5, 130, 12, 0, // Skip to: 10896
/* 7694 */    MCD::OPC_Decode, 221, 5, 75, // Opcode: VIOTA_M
/* 7698 */    MCD::OPC_FilterValue, 17, 121, 12, 0, // Skip to: 10896
/* 7703 */    MCD::OPC_CheckPredicate, 5, 116, 12, 0, // Skip to: 10896
/* 7708 */    MCD::OPC_CheckField, 20, 5, 0, 109, 12, 0, // Skip to: 10896
/* 7715 */    MCD::OPC_Decode, 220, 5, 79, // Opcode: VID_V
/* 7719 */    MCD::OPC_FilterValue, 23, 16, 0, 0, // Skip to: 7740
/* 7724 */    MCD::OPC_CheckPredicate, 5, 95, 12, 0, // Skip to: 10896
/* 7729 */    MCD::OPC_CheckField, 25, 1, 1, 88, 12, 0, // Skip to: 10896
/* 7736 */    MCD::OPC_Decode, 133, 5, 72, // Opcode: VCOMPRESS_VM
/* 7740 */    MCD::OPC_FilterValue, 24, 16, 0, 0, // Skip to: 7761
/* 7745 */    MCD::OPC_CheckPredicate, 5, 74, 12, 0, // Skip to: 10896
/* 7750 */    MCD::OPC_CheckField, 25, 1, 1, 67, 12, 0, // Skip to: 10896
/* 7757 */    MCD::OPC_Decode, 133, 6, 72, // Opcode: VMANDNOT_MM
/* 7761 */    MCD::OPC_FilterValue, 25, 16, 0, 0, // Skip to: 7782
/* 7766 */    MCD::OPC_CheckPredicate, 5, 53, 12, 0, // Skip to: 10896
/* 7771 */    MCD::OPC_CheckField, 25, 1, 1, 46, 12, 0, // Skip to: 10896
/* 7778 */    MCD::OPC_Decode, 134, 6, 72, // Opcode: VMAND_MM
/* 7782 */    MCD::OPC_FilterValue, 26, 16, 0, 0, // Skip to: 7803
/* 7787 */    MCD::OPC_CheckPredicate, 5, 32, 12, 0, // Skip to: 10896
/* 7792 */    MCD::OPC_CheckField, 25, 1, 1, 25, 12, 0, // Skip to: 10896
/* 7799 */    MCD::OPC_Decode, 159, 6, 72, // Opcode: VMOR_MM
/* 7803 */    MCD::OPC_FilterValue, 27, 16, 0, 0, // Skip to: 7824
/* 7808 */    MCD::OPC_CheckPredicate, 5, 11, 12, 0, // Skip to: 10896
/* 7813 */    MCD::OPC_CheckField, 25, 1, 1, 4, 12, 0, // Skip to: 10896
/* 7820 */    MCD::OPC_Decode, 205, 6, 72, // Opcode: VMXOR_MM
/* 7824 */    MCD::OPC_FilterValue, 28, 16, 0, 0, // Skip to: 7845
/* 7829 */    MCD::OPC_CheckPredicate, 5, 246, 11, 0, // Skip to: 10896
/* 7834 */    MCD::OPC_CheckField, 25, 1, 1, 239, 11, 0, // Skip to: 10896
/* 7841 */    MCD::OPC_Decode, 158, 6, 72, // Opcode: VMORNOT_MM
/* 7845 */    MCD::OPC_FilterValue, 29, 16, 0, 0, // Skip to: 7866
/* 7850 */    MCD::OPC_CheckPredicate, 5, 225, 11, 0, // Skip to: 10896
/* 7855 */    MCD::OPC_CheckField, 25, 1, 1, 218, 11, 0, // Skip to: 10896
/* 7862 */    MCD::OPC_Decode, 156, 6, 72, // Opcode: VMNAND_MM
/* 7866 */    MCD::OPC_FilterValue, 30, 16, 0, 0, // Skip to: 7887
/* 7871 */    MCD::OPC_CheckPredicate, 5, 204, 11, 0, // Skip to: 10896
/* 7876 */    MCD::OPC_CheckField, 25, 1, 1, 197, 11, 0, // Skip to: 10896
/* 7883 */    MCD::OPC_Decode, 157, 6, 72, // Opcode: VMNOR_MM
/* 7887 */    MCD::OPC_FilterValue, 31, 16, 0, 0, // Skip to: 7908
/* 7892 */    MCD::OPC_CheckPredicate, 5, 183, 11, 0, // Skip to: 10896
/* 7897 */    MCD::OPC_CheckField, 25, 1, 1, 176, 11, 0, // Skip to: 10896
/* 7904 */    MCD::OPC_Decode, 204, 6, 72, // Opcode: VMXNOR_MM
/* 7908 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 7922
/* 7913 */    MCD::OPC_CheckPredicate, 5, 162, 11, 0, // Skip to: 10896
/* 7918 */    MCD::OPC_Decode, 134, 5, 71, // Opcode: VDIVU_VV
/* 7922 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 7936
/* 7927 */    MCD::OPC_CheckPredicate, 5, 148, 11, 0, // Skip to: 10896
/* 7932 */    MCD::OPC_Decode, 136, 5, 71, // Opcode: VDIV_VV
/* 7936 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 7950
/* 7941 */    MCD::OPC_CheckPredicate, 5, 134, 11, 0, // Skip to: 10896
/* 7946 */    MCD::OPC_Decode, 234, 6, 71, // Opcode: VREMU_VV
/* 7950 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 7964
/* 7955 */    MCD::OPC_CheckPredicate, 5, 120, 11, 0, // Skip to: 10896
/* 7960 */    MCD::OPC_Decode, 236, 6, 71, // Opcode: VREM_VV
/* 7964 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 7978
/* 7969 */    MCD::OPC_CheckPredicate, 5, 106, 11, 0, // Skip to: 10896
/* 7974 */    MCD::OPC_Decode, 189, 6, 71, // Opcode: VMULHU_VV
/* 7978 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 7992
/* 7983 */    MCD::OPC_CheckPredicate, 5, 92, 11, 0, // Skip to: 10896
/* 7988 */    MCD::OPC_Decode, 193, 6, 71, // Opcode: VMUL_VV
/* 7992 */    MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 8006
/* 7997 */    MCD::OPC_CheckPredicate, 5, 78, 11, 0, // Skip to: 10896
/* 8002 */    MCD::OPC_Decode, 187, 6, 71, // Opcode: VMULHSU_VV
/* 8006 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 8020
/* 8011 */    MCD::OPC_CheckPredicate, 5, 64, 11, 0, // Skip to: 10896
/* 8016 */    MCD::OPC_Decode, 191, 6, 71, // Opcode: VMULH_VV
/* 8020 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 8034
/* 8025 */    MCD::OPC_CheckPredicate, 5, 50, 11, 0, // Skip to: 10896
/* 8030 */    MCD::OPC_Decode, 131, 6, 76, // Opcode: VMADD_VV
/* 8034 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 8048
/* 8039 */    MCD::OPC_CheckPredicate, 5, 36, 11, 0, // Skip to: 10896
/* 8044 */    MCD::OPC_Decode, 214, 6, 76, // Opcode: VNMSUB_VV
/* 8048 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 8062
/* 8053 */    MCD::OPC_CheckPredicate, 5, 22, 11, 0, // Skip to: 10896
/* 8058 */    MCD::OPC_Decode, 251, 5, 76, // Opcode: VMACC_VV
/* 8062 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 8076
/* 8067 */    MCD::OPC_CheckPredicate, 5, 8, 11, 0, // Skip to: 10896
/* 8072 */    MCD::OPC_Decode, 212, 6, 76, // Opcode: VNMSAC_VV
/* 8076 */    MCD::OPC_FilterValue, 48, 9, 0, 0, // Skip to: 8090
/* 8081 */    MCD::OPC_CheckPredicate, 5, 250, 10, 0, // Skip to: 10896
/* 8086 */    MCD::OPC_Decode, 171, 7, 71, // Opcode: VWADDU_VV
/* 8090 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 8104
/* 8095 */    MCD::OPC_CheckPredicate, 5, 236, 10, 0, // Skip to: 10896
/* 8100 */    MCD::OPC_Decode, 175, 7, 71, // Opcode: VWADD_VV
/* 8104 */    MCD::OPC_FilterValue, 50, 9, 0, 0, // Skip to: 8118
/* 8109 */    MCD::OPC_CheckPredicate, 5, 222, 10, 0, // Skip to: 10896
/* 8114 */    MCD::OPC_Decode, 194, 7, 71, // Opcode: VWSUBU_VV
/* 8118 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 8132
/* 8123 */    MCD::OPC_CheckPredicate, 5, 208, 10, 0, // Skip to: 10896
/* 8128 */    MCD::OPC_Decode, 198, 7, 71, // Opcode: VWSUB_VV
/* 8132 */    MCD::OPC_FilterValue, 52, 9, 0, 0, // Skip to: 8146
/* 8137 */    MCD::OPC_CheckPredicate, 5, 194, 10, 0, // Skip to: 10896
/* 8142 */    MCD::OPC_Decode, 173, 7, 71, // Opcode: VWADDU_WV
/* 8146 */    MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 8160
/* 8151 */    MCD::OPC_CheckPredicate, 5, 180, 10, 0, // Skip to: 10896
/* 8156 */    MCD::OPC_Decode, 177, 7, 71, // Opcode: VWADD_WV
/* 8160 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 8174
/* 8165 */    MCD::OPC_CheckPredicate, 5, 166, 10, 0, // Skip to: 10896
/* 8170 */    MCD::OPC_Decode, 196, 7, 71, // Opcode: VWSUBU_WV
/* 8174 */    MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 8188
/* 8179 */    MCD::OPC_CheckPredicate, 5, 152, 10, 0, // Skip to: 10896
/* 8184 */    MCD::OPC_Decode, 200, 7, 71, // Opcode: VWSUB_WV
/* 8188 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 8202
/* 8193 */    MCD::OPC_CheckPredicate, 5, 138, 10, 0, // Skip to: 10896
/* 8198 */    MCD::OPC_Decode, 188, 7, 71, // Opcode: VWMULU_VV
/* 8202 */    MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 8216
/* 8207 */    MCD::OPC_CheckPredicate, 5, 124, 10, 0, // Skip to: 10896
/* 8212 */    MCD::OPC_Decode, 186, 7, 71, // Opcode: VWMULSU_VV
/* 8216 */    MCD::OPC_FilterValue, 59, 9, 0, 0, // Skip to: 8230
/* 8221 */    MCD::OPC_CheckPredicate, 5, 110, 10, 0, // Skip to: 10896
/* 8226 */    MCD::OPC_Decode, 190, 7, 71, // Opcode: VWMUL_VV
/* 8230 */    MCD::OPC_FilterValue, 60, 9, 0, 0, // Skip to: 8244
/* 8235 */    MCD::OPC_CheckPredicate, 5, 96, 10, 0, // Skip to: 10896
/* 8240 */    MCD::OPC_Decode, 182, 7, 76, // Opcode: VWMACCU_VV
/* 8244 */    MCD::OPC_FilterValue, 61, 9, 0, 0, // Skip to: 8258
/* 8249 */    MCD::OPC_CheckPredicate, 5, 82, 10, 0, // Skip to: 10896
/* 8254 */    MCD::OPC_Decode, 184, 7, 76, // Opcode: VWMACC_VV
/* 8258 */    MCD::OPC_FilterValue, 63, 73, 10, 0, // Skip to: 10896
/* 8263 */    MCD::OPC_CheckPredicate, 5, 68, 10, 0, // Skip to: 10896
/* 8268 */    MCD::OPC_Decode, 179, 7, 76, // Opcode: VWMACCSU_VV
/* 8272 */    MCD::OPC_FilterValue, 3, 33, 2, 0, // Skip to: 8822
/* 8277 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 8280 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 8294
/* 8285 */    MCD::OPC_CheckPredicate, 5, 46, 10, 0, // Skip to: 10896
/* 8290 */    MCD::OPC_Decode, 251, 4, 80, // Opcode: VADD_VI
/* 8294 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 8308
/* 8299 */    MCD::OPC_CheckPredicate, 5, 32, 10, 0, // Skip to: 10896
/* 8304 */    MCD::OPC_Decode, 241, 6, 80, // Opcode: VRSUB_VI
/* 8308 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 8322
/* 8313 */    MCD::OPC_CheckPredicate, 5, 18, 10, 0, // Skip to: 10896
/* 8318 */    MCD::OPC_Decode, 254, 4, 80, // Opcode: VAND_VI
/* 8322 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 8336
/* 8327 */    MCD::OPC_CheckPredicate, 5, 4, 10, 0, // Skip to: 10896
/* 8332 */    MCD::OPC_Decode, 222, 6, 80, // Opcode: VOR_VI
/* 8336 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 8350
/* 8341 */    MCD::OPC_CheckPredicate, 5, 246, 9, 0, // Skip to: 10896
/* 8346 */    MCD::OPC_Decode, 202, 7, 80, // Opcode: VXOR_VI
/* 8350 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 8364
/* 8355 */    MCD::OPC_CheckPredicate, 5, 232, 9, 0, // Skip to: 10896
/* 8360 */    MCD::OPC_Decode, 238, 6, 81, // Opcode: VRGATHER_VI
/* 8364 */    MCD::OPC_FilterValue, 14, 9, 0, 0, // Skip to: 8378
/* 8369 */    MCD::OPC_CheckPredicate, 5, 218, 9, 0, // Skip to: 10896
/* 8374 */    MCD::OPC_Decode, 133, 7, 81, // Opcode: VSLIDEUP_VI
/* 8378 */    MCD::OPC_FilterValue, 15, 9, 0, 0, // Skip to: 8392
/* 8383 */    MCD::OPC_CheckPredicate, 5, 204, 9, 0, // Skip to: 10896
/* 8388 */    MCD::OPC_Decode, 131, 7, 81, // Opcode: VSLIDEDOWN_VI
/* 8392 */    MCD::OPC_FilterValue, 16, 16, 0, 0, // Skip to: 8413
/* 8397 */    MCD::OPC_CheckPredicate, 5, 190, 9, 0, // Skip to: 10896
/* 8402 */    MCD::OPC_CheckField, 25, 1, 0, 183, 9, 0, // Skip to: 10896
/* 8409 */    MCD::OPC_Decode, 248, 4, 82, // Opcode: VADC_VIM
/* 8413 */    MCD::OPC_FilterValue, 17, 31, 0, 0, // Skip to: 8449
/* 8418 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 8421 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 8435
/* 8426 */    MCD::OPC_CheckPredicate, 5, 161, 9, 0, // Skip to: 10896
/* 8431 */    MCD::OPC_Decode, 254, 5, 82, // Opcode: VMADC_VIM
/* 8435 */    MCD::OPC_FilterValue, 1, 152, 9, 0, // Skip to: 10896
/* 8440 */    MCD::OPC_CheckPredicate, 5, 147, 9, 0, // Skip to: 10896
/* 8445 */    MCD::OPC_Decode, 253, 5, 82, // Opcode: VMADC_VI
/* 8449 */    MCD::OPC_FilterValue, 23, 38, 0, 0, // Skip to: 8492
/* 8454 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 8457 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 8471
/* 8462 */    MCD::OPC_CheckPredicate, 5, 125, 9, 0, // Skip to: 10896
/* 8467 */    MCD::OPC_Decode, 139, 6, 82, // Opcode: VMERGE_VIM
/* 8471 */    MCD::OPC_FilterValue, 1, 116, 9, 0, // Skip to: 10896
/* 8476 */    MCD::OPC_CheckPredicate, 5, 111, 9, 0, // Skip to: 10896
/* 8481 */    MCD::OPC_CheckField, 20, 5, 0, 104, 9, 0, // Skip to: 10896
/* 8488 */    MCD::OPC_Decode, 200, 6, 83, // Opcode: VMV_V_I
/* 8492 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 8506
/* 8497 */    MCD::OPC_CheckPredicate, 5, 90, 9, 0, // Skip to: 10896
/* 8502 */    MCD::OPC_Decode, 165, 6, 80, // Opcode: VMSEQ_VI
/* 8506 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 8520
/* 8511 */    MCD::OPC_CheckPredicate, 5, 76, 9, 0, // Skip to: 10896
/* 8516 */    MCD::OPC_Decode, 183, 6, 80, // Opcode: VMSNE_VI
/* 8520 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 8534
/* 8525 */    MCD::OPC_CheckPredicate, 5, 62, 9, 0, // Skip to: 10896
/* 8530 */    MCD::OPC_Decode, 173, 6, 80, // Opcode: VMSLEU_VI
/* 8534 */    MCD::OPC_FilterValue, 29, 9, 0, 0, // Skip to: 8548
/* 8539 */    MCD::OPC_CheckPredicate, 5, 48, 9, 0, // Skip to: 10896
/* 8544 */    MCD::OPC_Decode, 176, 6, 80, // Opcode: VMSLE_VI
/* 8548 */    MCD::OPC_FilterValue, 30, 9, 0, 0, // Skip to: 8562
/* 8553 */    MCD::OPC_CheckPredicate, 5, 34, 9, 0, // Skip to: 10896
/* 8558 */    MCD::OPC_Decode, 168, 6, 80, // Opcode: VMSGTU_VI
/* 8562 */    MCD::OPC_FilterValue, 31, 9, 0, 0, // Skip to: 8576
/* 8567 */    MCD::OPC_CheckPredicate, 5, 20, 9, 0, // Skip to: 10896
/* 8572 */    MCD::OPC_Decode, 170, 6, 80, // Opcode: VMSGT_VI
/* 8576 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 8590
/* 8581 */    MCD::OPC_CheckPredicate, 5, 6, 9, 0, // Skip to: 10896
/* 8586 */    MCD::OPC_Decode, 244, 6, 80, // Opcode: VSADDU_VI
/* 8590 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 8604
/* 8595 */    MCD::OPC_CheckPredicate, 5, 248, 8, 0, // Skip to: 10896
/* 8600 */    MCD::OPC_Decode, 247, 6, 80, // Opcode: VSADD_VI
/* 8604 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 8618
/* 8609 */    MCD::OPC_CheckPredicate, 5, 234, 8, 0, // Skip to: 10896
/* 8614 */    MCD::OPC_Decode, 135, 7, 81, // Opcode: VSLL_VI
/* 8618 */    MCD::OPC_FilterValue, 39, 87, 0, 0, // Skip to: 8710
/* 8623 */    MCD::OPC_ExtractField, 15, 5,  // Inst{19-15} ...
/* 8626 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 8647
/* 8631 */    MCD::OPC_CheckPredicate, 5, 212, 8, 0, // Skip to: 10896
/* 8636 */    MCD::OPC_CheckField, 25, 1, 1, 205, 8, 0, // Skip to: 10896
/* 8643 */    MCD::OPC_Decode, 195, 6, 84, // Opcode: VMV1R_V
/* 8647 */    MCD::OPC_FilterValue, 1, 16, 0, 0, // Skip to: 8668
/* 8652 */    MCD::OPC_CheckPredicate, 5, 191, 8, 0, // Skip to: 10896
/* 8657 */    MCD::OPC_CheckField, 25, 1, 1, 184, 8, 0, // Skip to: 10896
/* 8664 */    MCD::OPC_Decode, 196, 6, 84, // Opcode: VMV2R_V
/* 8668 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 8689
/* 8673 */    MCD::OPC_CheckPredicate, 5, 170, 8, 0, // Skip to: 10896
/* 8678 */    MCD::OPC_CheckField, 25, 1, 1, 163, 8, 0, // Skip to: 10896
/* 8685 */    MCD::OPC_Decode, 197, 6, 84, // Opcode: VMV4R_V
/* 8689 */    MCD::OPC_FilterValue, 7, 154, 8, 0, // Skip to: 10896
/* 8694 */    MCD::OPC_CheckPredicate, 5, 149, 8, 0, // Skip to: 10896
/* 8699 */    MCD::OPC_CheckField, 25, 1, 1, 142, 8, 0, // Skip to: 10896
/* 8706 */    MCD::OPC_Decode, 198, 6, 84, // Opcode: VMV8R_V
/* 8710 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 8724
/* 8715 */    MCD::OPC_CheckPredicate, 5, 128, 8, 0, // Skip to: 10896
/* 8720 */    MCD::OPC_Decode, 143, 7, 81, // Opcode: VSRL_VI
/* 8724 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 8738
/* 8729 */    MCD::OPC_CheckPredicate, 5, 114, 8, 0, // Skip to: 10896
/* 8734 */    MCD::OPC_Decode, 140, 7, 81, // Opcode: VSRA_VI
/* 8738 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 8752
/* 8743 */    MCD::OPC_CheckPredicate, 5, 100, 8, 0, // Skip to: 10896
/* 8748 */    MCD::OPC_Decode, 152, 7, 81, // Opcode: VSSRL_VI
/* 8752 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 8766
/* 8757 */    MCD::OPC_CheckPredicate, 5, 86, 8, 0, // Skip to: 10896
/* 8762 */    MCD::OPC_Decode, 149, 7, 81, // Opcode: VSSRA_VI
/* 8766 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 8780
/* 8771 */    MCD::OPC_CheckPredicate, 5, 72, 8, 0, // Skip to: 10896
/* 8776 */    MCD::OPC_Decode, 219, 6, 81, // Opcode: VNSRL_WI
/* 8780 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 8794
/* 8785 */    MCD::OPC_CheckPredicate, 5, 58, 8, 0, // Skip to: 10896
/* 8790 */    MCD::OPC_Decode, 216, 6, 81, // Opcode: VNSRA_WI
/* 8794 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 8808
/* 8799 */    MCD::OPC_CheckPredicate, 5, 44, 8, 0, // Skip to: 10896
/* 8804 */    MCD::OPC_Decode, 206, 6, 81, // Opcode: VNCLIPU_WI
/* 8808 */    MCD::OPC_FilterValue, 47, 35, 8, 0, // Skip to: 10896
/* 8813 */    MCD::OPC_CheckPredicate, 5, 30, 8, 0, // Skip to: 10896
/* 8818 */    MCD::OPC_Decode, 209, 6, 81, // Opcode: VNCLIP_WI
/* 8822 */    MCD::OPC_FilterValue, 4, 138, 2, 0, // Skip to: 9477
/* 8827 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 8830 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 8844
/* 8835 */    MCD::OPC_CheckPredicate, 5, 8, 8, 0, // Skip to: 10896
/* 8840 */    MCD::OPC_Decode, 253, 4, 85, // Opcode: VADD_VX
/* 8844 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 8858
/* 8849 */    MCD::OPC_CheckPredicate, 5, 250, 7, 0, // Skip to: 10896
/* 8854 */    MCD::OPC_Decode, 161, 7, 85, // Opcode: VSUB_VX
/* 8858 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 8872
/* 8863 */    MCD::OPC_CheckPredicate, 5, 236, 7, 0, // Skip to: 10896
/* 8868 */    MCD::OPC_Decode, 242, 6, 85, // Opcode: VRSUB_VX
/* 8872 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 8886
/* 8877 */    MCD::OPC_CheckPredicate, 5, 222, 7, 0, // Skip to: 10896
/* 8882 */    MCD::OPC_Decode, 153, 6, 85, // Opcode: VMINU_VX
/* 8886 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 8900
/* 8891 */    MCD::OPC_CheckPredicate, 5, 208, 7, 0, // Skip to: 10896
/* 8896 */    MCD::OPC_Decode, 155, 6, 85, // Opcode: VMIN_VX
/* 8900 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 8914
/* 8905 */    MCD::OPC_CheckPredicate, 5, 194, 7, 0, // Skip to: 10896
/* 8910 */    MCD::OPC_Decode, 136, 6, 85, // Opcode: VMAXU_VX
/* 8914 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 8928
/* 8919 */    MCD::OPC_CheckPredicate, 5, 180, 7, 0, // Skip to: 10896
/* 8924 */    MCD::OPC_Decode, 138, 6, 85, // Opcode: VMAX_VX
/* 8928 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 8942
/* 8933 */    MCD::OPC_CheckPredicate, 5, 166, 7, 0, // Skip to: 10896
/* 8938 */    MCD::OPC_Decode, 128, 5, 85, // Opcode: VAND_VX
/* 8942 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 8956
/* 8947 */    MCD::OPC_CheckPredicate, 5, 152, 7, 0, // Skip to: 10896
/* 8952 */    MCD::OPC_Decode, 224, 6, 85, // Opcode: VOR_VX
/* 8956 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 8970
/* 8961 */    MCD::OPC_CheckPredicate, 5, 138, 7, 0, // Skip to: 10896
/* 8966 */    MCD::OPC_Decode, 204, 7, 85, // Opcode: VXOR_VX
/* 8970 */    MCD::OPC_FilterValue, 12, 9, 0, 0, // Skip to: 8984
/* 8975 */    MCD::OPC_CheckPredicate, 5, 124, 7, 0, // Skip to: 10896
/* 8980 */    MCD::OPC_Decode, 240, 6, 85, // Opcode: VRGATHER_VX
/* 8984 */    MCD::OPC_FilterValue, 14, 9, 0, 0, // Skip to: 8998
/* 8989 */    MCD::OPC_CheckPredicate, 5, 110, 7, 0, // Skip to: 10896
/* 8994 */    MCD::OPC_Decode, 134, 7, 85, // Opcode: VSLIDEUP_VX
/* 8998 */    MCD::OPC_FilterValue, 15, 9, 0, 0, // Skip to: 9012
/* 9003 */    MCD::OPC_CheckPredicate, 5, 96, 7, 0, // Skip to: 10896
/* 9008 */    MCD::OPC_Decode, 132, 7, 85, // Opcode: VSLIDEDOWN_VX
/* 9012 */    MCD::OPC_FilterValue, 16, 16, 0, 0, // Skip to: 9033
/* 9017 */    MCD::OPC_CheckPredicate, 5, 82, 7, 0, // Skip to: 10896
/* 9022 */    MCD::OPC_CheckField, 25, 1, 0, 75, 7, 0, // Skip to: 10896
/* 9029 */    MCD::OPC_Decode, 250, 4, 86, // Opcode: VADC_VXM
/* 9033 */    MCD::OPC_FilterValue, 17, 31, 0, 0, // Skip to: 9069
/* 9038 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 9041 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 9055
/* 9046 */    MCD::OPC_CheckPredicate, 5, 53, 7, 0, // Skip to: 10896
/* 9051 */    MCD::OPC_Decode, 130, 6, 86, // Opcode: VMADC_VXM
/* 9055 */    MCD::OPC_FilterValue, 1, 44, 7, 0, // Skip to: 10896
/* 9060 */    MCD::OPC_CheckPredicate, 5, 39, 7, 0, // Skip to: 10896
/* 9065 */    MCD::OPC_Decode, 129, 6, 86, // Opcode: VMADC_VX
/* 9069 */    MCD::OPC_FilterValue, 18, 16, 0, 0, // Skip to: 9090
/* 9074 */    MCD::OPC_CheckPredicate, 5, 25, 7, 0, // Skip to: 10896
/* 9079 */    MCD::OPC_CheckField, 25, 1, 0, 18, 7, 0, // Skip to: 10896
/* 9086 */    MCD::OPC_Decode, 251, 6, 86, // Opcode: VSBC_VXM
/* 9090 */    MCD::OPC_FilterValue, 19, 31, 0, 0, // Skip to: 9126
/* 9095 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 9098 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 9112
/* 9103 */    MCD::OPC_CheckPredicate, 5, 252, 6, 0, // Skip to: 10896
/* 9108 */    MCD::OPC_Decode, 163, 6, 86, // Opcode: VMSBC_VXM
/* 9112 */    MCD::OPC_FilterValue, 1, 243, 6, 0, // Skip to: 10896
/* 9117 */    MCD::OPC_CheckPredicate, 5, 238, 6, 0, // Skip to: 10896
/* 9122 */    MCD::OPC_Decode, 162, 6, 86, // Opcode: VMSBC_VX
/* 9126 */    MCD::OPC_FilterValue, 23, 38, 0, 0, // Skip to: 9169
/* 9131 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 9134 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 9148
/* 9139 */    MCD::OPC_CheckPredicate, 5, 216, 6, 0, // Skip to: 10896
/* 9144 */    MCD::OPC_Decode, 141, 6, 86, // Opcode: VMERGE_VXM
/* 9148 */    MCD::OPC_FilterValue, 1, 207, 6, 0, // Skip to: 10896
/* 9153 */    MCD::OPC_CheckPredicate, 5, 202, 6, 0, // Skip to: 10896
/* 9158 */    MCD::OPC_CheckField, 20, 5, 0, 195, 6, 0, // Skip to: 10896
/* 9165 */    MCD::OPC_Decode, 202, 6, 37, // Opcode: VMV_V_X
/* 9169 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 9183
/* 9174 */    MCD::OPC_CheckPredicate, 5, 181, 6, 0, // Skip to: 10896
/* 9179 */    MCD::OPC_Decode, 167, 6, 85, // Opcode: VMSEQ_VX
/* 9183 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 9197
/* 9188 */    MCD::OPC_CheckPredicate, 5, 167, 6, 0, // Skip to: 10896
/* 9193 */    MCD::OPC_Decode, 185, 6, 85, // Opcode: VMSNE_VX
/* 9197 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 9211
/* 9202 */    MCD::OPC_CheckPredicate, 5, 153, 6, 0, // Skip to: 10896
/* 9207 */    MCD::OPC_Decode, 180, 6, 85, // Opcode: VMSLTU_VX
/* 9211 */    MCD::OPC_FilterValue, 27, 9, 0, 0, // Skip to: 9225
/* 9216 */    MCD::OPC_CheckPredicate, 5, 139, 6, 0, // Skip to: 10896
/* 9221 */    MCD::OPC_Decode, 182, 6, 85, // Opcode: VMSLT_VX
/* 9225 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 9239
/* 9230 */    MCD::OPC_CheckPredicate, 5, 125, 6, 0, // Skip to: 10896
/* 9235 */    MCD::OPC_Decode, 175, 6, 85, // Opcode: VMSLEU_VX
/* 9239 */    MCD::OPC_FilterValue, 29, 9, 0, 0, // Skip to: 9253
/* 9244 */    MCD::OPC_CheckPredicate, 5, 111, 6, 0, // Skip to: 10896
/* 9249 */    MCD::OPC_Decode, 178, 6, 85, // Opcode: VMSLE_VX
/* 9253 */    MCD::OPC_FilterValue, 30, 9, 0, 0, // Skip to: 9267
/* 9258 */    MCD::OPC_CheckPredicate, 5, 97, 6, 0, // Skip to: 10896
/* 9263 */    MCD::OPC_Decode, 169, 6, 85, // Opcode: VMSGTU_VX
/* 9267 */    MCD::OPC_FilterValue, 31, 9, 0, 0, // Skip to: 9281
/* 9272 */    MCD::OPC_CheckPredicate, 5, 83, 6, 0, // Skip to: 10896
/* 9277 */    MCD::OPC_Decode, 171, 6, 85, // Opcode: VMSGT_VX
/* 9281 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 9295
/* 9286 */    MCD::OPC_CheckPredicate, 5, 69, 6, 0, // Skip to: 10896
/* 9291 */    MCD::OPC_Decode, 246, 6, 85, // Opcode: VSADDU_VX
/* 9295 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 9309
/* 9300 */    MCD::OPC_CheckPredicate, 5, 55, 6, 0, // Skip to: 10896
/* 9305 */    MCD::OPC_Decode, 249, 6, 85, // Opcode: VSADD_VX
/* 9309 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 9323
/* 9314 */    MCD::OPC_CheckPredicate, 5, 41, 6, 0, // Skip to: 10896
/* 9319 */    MCD::OPC_Decode, 156, 7, 85, // Opcode: VSSUBU_VX
/* 9323 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 9337
/* 9328 */    MCD::OPC_CheckPredicate, 5, 27, 6, 0, // Skip to: 10896
/* 9333 */    MCD::OPC_Decode, 158, 7, 85, // Opcode: VSSUB_VX
/* 9337 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 9351
/* 9342 */    MCD::OPC_CheckPredicate, 5, 13, 6, 0, // Skip to: 10896
/* 9347 */    MCD::OPC_Decode, 137, 7, 85, // Opcode: VSLL_VX
/* 9351 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 9365
/* 9356 */    MCD::OPC_CheckPredicate, 5, 255, 5, 0, // Skip to: 10896
/* 9361 */    MCD::OPC_Decode, 139, 7, 85, // Opcode: VSMUL_VX
/* 9365 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 9379
/* 9370 */    MCD::OPC_CheckPredicate, 5, 241, 5, 0, // Skip to: 10896
/* 9375 */    MCD::OPC_Decode, 145, 7, 85, // Opcode: VSRL_VX
/* 9379 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 9393
/* 9384 */    MCD::OPC_CheckPredicate, 5, 227, 5, 0, // Skip to: 10896
/* 9389 */    MCD::OPC_Decode, 142, 7, 85, // Opcode: VSRA_VX
/* 9393 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 9407
/* 9398 */    MCD::OPC_CheckPredicate, 5, 213, 5, 0, // Skip to: 10896
/* 9403 */    MCD::OPC_Decode, 154, 7, 85, // Opcode: VSSRL_VX
/* 9407 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 9421
/* 9412 */    MCD::OPC_CheckPredicate, 5, 199, 5, 0, // Skip to: 10896
/* 9417 */    MCD::OPC_Decode, 151, 7, 85, // Opcode: VSSRA_VX
/* 9421 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 9435
/* 9426 */    MCD::OPC_CheckPredicate, 5, 185, 5, 0, // Skip to: 10896
/* 9431 */    MCD::OPC_Decode, 221, 6, 85, // Opcode: VNSRL_WX
/* 9435 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 9449
/* 9440 */    MCD::OPC_CheckPredicate, 5, 171, 5, 0, // Skip to: 10896
/* 9445 */    MCD::OPC_Decode, 218, 6, 85, // Opcode: VNSRA_WX
/* 9449 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 9463
/* 9454 */    MCD::OPC_CheckPredicate, 5, 157, 5, 0, // Skip to: 10896
/* 9459 */    MCD::OPC_Decode, 208, 6, 85, // Opcode: VNCLIPU_WX
/* 9463 */    MCD::OPC_FilterValue, 47, 148, 5, 0, // Skip to: 10896
/* 9468 */    MCD::OPC_CheckPredicate, 5, 143, 5, 0, // Skip to: 10896
/* 9473 */    MCD::OPC_Decode, 211, 6, 85, // Opcode: VNCLIP_WX
/* 9477 */    MCD::OPC_FilterValue, 5, 31, 2, 0, // Skip to: 10025
/* 9482 */    MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 9485 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 9499
/* 9490 */    MCD::OPC_CheckPredicate, 5, 121, 5, 0, // Skip to: 10896
/* 9495 */    MCD::OPC_Decode, 138, 5, 87, // Opcode: VFADD_VF
/* 9499 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 9513
/* 9504 */    MCD::OPC_CheckPredicate, 5, 107, 5, 0, // Skip to: 10896
/* 9509 */    MCD::OPC_Decode, 193, 5, 87, // Opcode: VFSUB_VF
/* 9513 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 9527
/* 9518 */    MCD::OPC_CheckPredicate, 5, 93, 5, 0, // Skip to: 10896
/* 9523 */    MCD::OPC_Decode, 155, 5, 87, // Opcode: VFMIN_VF
/* 9527 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 9541
/* 9532 */    MCD::OPC_CheckPredicate, 5, 79, 5, 0, // Skip to: 10896
/* 9537 */    MCD::OPC_Decode, 152, 5, 87, // Opcode: VFMAX_VF
/* 9541 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 9555
/* 9546 */    MCD::OPC_CheckPredicate, 5, 65, 5, 0, // Skip to: 10896
/* 9551 */    MCD::OPC_Decode, 190, 5, 87, // Opcode: VFSGNJ_VF
/* 9555 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 9569
/* 9560 */    MCD::OPC_CheckPredicate, 5, 51, 5, 0, // Skip to: 10896
/* 9565 */    MCD::OPC_Decode, 186, 5, 87, // Opcode: VFSGNJN_VF
/* 9569 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 9583
/* 9574 */    MCD::OPC_CheckPredicate, 5, 37, 5, 0, // Skip to: 10896
/* 9579 */    MCD::OPC_Decode, 188, 5, 87, // Opcode: VFSGNJX_VF
/* 9583 */    MCD::OPC_FilterValue, 16, 16, 0, 0, // Skip to: 9604
/* 9588 */    MCD::OPC_CheckPredicate, 5, 23, 5, 0, // Skip to: 10896
/* 9593 */    MCD::OPC_CheckField, 20, 6, 32, 16, 5, 0, // Skip to: 10896
/* 9600 */    MCD::OPC_Decode, 164, 5, 88, // Opcode: VFMV_S_F
/* 9604 */    MCD::OPC_FilterValue, 23, 38, 0, 0, // Skip to: 9647
/* 9609 */    MCD::OPC_ExtractField, 25, 1,  // Inst{25} ...
/* 9612 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 9626
/* 9617 */    MCD::OPC_CheckPredicate, 5, 250, 4, 0, // Skip to: 10896
/* 9622 */    MCD::OPC_Decode, 154, 5, 89, // Opcode: VFMERGE_VFM
/* 9626 */    MCD::OPC_FilterValue, 1, 241, 4, 0, // Skip to: 10896
/* 9631 */    MCD::OPC_CheckPredicate, 5, 236, 4, 0, // Skip to: 10896
/* 9636 */    MCD::OPC_CheckField, 20, 5, 0, 229, 4, 0, // Skip to: 10896
/* 9643 */    MCD::OPC_Decode, 165, 5, 88, // Opcode: VFMV_V_F
/* 9647 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 9661
/* 9652 */    MCD::OPC_CheckPredicate, 5, 215, 4, 0, // Skip to: 10896
/* 9657 */    MCD::OPC_Decode, 142, 6, 87, // Opcode: VMFEQ_VF
/* 9661 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 9675
/* 9666 */    MCD::OPC_CheckPredicate, 5, 201, 4, 0, // Skip to: 10896
/* 9671 */    MCD::OPC_Decode, 146, 6, 87, // Opcode: VMFLE_VF
/* 9675 */    MCD::OPC_FilterValue, 27, 9, 0, 0, // Skip to: 9689
/* 9680 */    MCD::OPC_CheckPredicate, 5, 187, 4, 0, // Skip to: 10896
/* 9685 */    MCD::OPC_Decode, 148, 6, 87, // Opcode: VMFLT_VF
/* 9689 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 9703
/* 9694 */    MCD::OPC_CheckPredicate, 5, 173, 4, 0, // Skip to: 10896
/* 9699 */    MCD::OPC_Decode, 150, 6, 87, // Opcode: VMFNE_VF
/* 9703 */    MCD::OPC_FilterValue, 29, 9, 0, 0, // Skip to: 9717
/* 9708 */    MCD::OPC_CheckPredicate, 5, 159, 4, 0, // Skip to: 10896
/* 9713 */    MCD::OPC_Decode, 145, 6, 87, // Opcode: VMFGT_VF
/* 9717 */    MCD::OPC_FilterValue, 31, 9, 0, 0, // Skip to: 9731
/* 9722 */    MCD::OPC_CheckPredicate, 5, 145, 4, 0, // Skip to: 10896
/* 9727 */    MCD::OPC_Decode, 144, 6, 87, // Opcode: VMFGE_VF
/* 9731 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 9745
/* 9736 */    MCD::OPC_CheckPredicate, 5, 131, 4, 0, // Skip to: 10896
/* 9741 */    MCD::OPC_Decode, 145, 5, 87, // Opcode: VFDIV_VF
/* 9745 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 9759
/* 9750 */    MCD::OPC_CheckPredicate, 5, 117, 4, 0, // Skip to: 10896
/* 9755 */    MCD::OPC_Decode, 180, 5, 87, // Opcode: VFRDIV_VF
/* 9759 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 9773
/* 9764 */    MCD::OPC_CheckPredicate, 5, 103, 4, 0, // Skip to: 10896
/* 9769 */    MCD::OPC_Decode, 161, 5, 87, // Opcode: VFMUL_VF
/* 9773 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 9787
/* 9778 */    MCD::OPC_CheckPredicate, 5, 89, 4, 0, // Skip to: 10896
/* 9783 */    MCD::OPC_Decode, 185, 5, 87, // Opcode: VFRSUB_VF
/* 9787 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 9801
/* 9792 */    MCD::OPC_CheckPredicate, 5, 75, 4, 0, // Skip to: 10896
/* 9797 */    MCD::OPC_Decode, 150, 5, 90, // Opcode: VFMADD_VF
/* 9801 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 9815
/* 9806 */    MCD::OPC_CheckPredicate, 5, 61, 4, 0, // Skip to: 10896
/* 9811 */    MCD::OPC_Decode, 174, 5, 90, // Opcode: VFNMADD_VF
/* 9815 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 9829
/* 9820 */    MCD::OPC_CheckPredicate, 5, 47, 4, 0, // Skip to: 10896
/* 9825 */    MCD::OPC_Decode, 159, 5, 90, // Opcode: VFMSUB_VF
/* 9829 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 9843
/* 9834 */    MCD::OPC_CheckPredicate, 5, 33, 4, 0, // Skip to: 10896
/* 9839 */    MCD::OPC_Decode, 178, 5, 90, // Opcode: VFNMSUB_VF
/* 9843 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 9857
/* 9848 */    MCD::OPC_CheckPredicate, 5, 19, 4, 0, // Skip to: 10896
/* 9853 */    MCD::OPC_Decode, 148, 5, 90, // Opcode: VFMACC_VF
/* 9857 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 9871
/* 9862 */    MCD::OPC_CheckPredicate, 5, 5, 4, 0, // Skip to: 10896
/* 9867 */    MCD::OPC_Decode, 172, 5, 90, // Opcode: VFNMACC_VF
/* 9871 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 9885
/* 9876 */    MCD::OPC_CheckPredicate, 5, 247, 3, 0, // Skip to: 10896
/* 9881 */    MCD::OPC_Decode, 157, 5, 90, // Opcode: VFMSAC_VF
/* 9885 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 9899
/* 9890 */    MCD::OPC_CheckPredicate, 5, 233, 3, 0, // Skip to: 10896
/* 9895 */    MCD::OPC_Decode, 176, 5, 90, // Opcode: VFNMSAC_VF
/* 9899 */    MCD::OPC_FilterValue, 48, 9, 0, 0, // Skip to: 9913
/* 9904 */    MCD::OPC_CheckPredicate, 5, 219, 3, 0, // Skip to: 10896
/* 9909 */    MCD::OPC_Decode, 195, 5, 87, // Opcode: VFWADD_VF
/* 9913 */    MCD::OPC_FilterValue, 50, 9, 0, 0, // Skip to: 9927
/* 9918 */    MCD::OPC_CheckPredicate, 5, 205, 3, 0, // Skip to: 10896
/* 9923 */    MCD::OPC_Decode, 216, 5, 87, // Opcode: VFWSUB_VF
/* 9927 */    MCD::OPC_FilterValue, 52, 9, 0, 0, // Skip to: 9941
/* 9932 */    MCD::OPC_CheckPredicate, 5, 191, 3, 0, // Skip to: 10896
/* 9937 */    MCD::OPC_Decode, 197, 5, 87, // Opcode: VFWADD_WF
/* 9941 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 9955
/* 9946 */    MCD::OPC_CheckPredicate, 5, 177, 3, 0, // Skip to: 10896
/* 9951 */    MCD::OPC_Decode, 218, 5, 87, // Opcode: VFWSUB_WF
/* 9955 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 9969
/* 9960 */    MCD::OPC_CheckPredicate, 5, 163, 3, 0, // Skip to: 10896
/* 9965 */    MCD::OPC_Decode, 208, 5, 87, // Opcode: VFWMUL_VF
/* 9969 */    MCD::OPC_FilterValue, 60, 9, 0, 0, // Skip to: 9983
/* 9974 */    MCD::OPC_CheckPredicate, 5, 149, 3, 0, // Skip to: 10896
/* 9979 */    MCD::OPC_Decode, 204, 5, 90, // Opcode: VFWMACC_VF
/* 9983 */    MCD::OPC_FilterValue, 61, 9, 0, 0, // Skip to: 9997
/* 9988 */    MCD::OPC_CheckPredicate, 5, 135, 3, 0, // Skip to: 10896
/* 9993 */    MCD::OPC_Decode, 210, 5, 90, // Opcode: VFWNMACC_VF
/* 9997 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 10011
/* 10002 */   MCD::OPC_CheckPredicate, 5, 121, 3, 0, // Skip to: 10896
/* 10007 */   MCD::OPC_Decode, 206, 5, 90, // Opcode: VFWMSAC_VF
/* 10011 */   MCD::OPC_FilterValue, 63, 112, 3, 0, // Skip to: 10896
/* 10016 */   MCD::OPC_CheckPredicate, 5, 107, 3, 0, // Skip to: 10896
/* 10021 */   MCD::OPC_Decode, 212, 5, 90, // Opcode: VFWNMSAC_VF
/* 10025 */   MCD::OPC_FilterValue, 6, 230, 1, 0, // Skip to: 10516
/* 10030 */   MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 10033 */   MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 10047
/* 10038 */   MCD::OPC_CheckPredicate, 5, 85, 3, 0, // Skip to: 10896
/* 10043 */   MCD::OPC_Decode, 245, 4, 85, // Opcode: VAADDU_VX
/* 10047 */   MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 10061
/* 10052 */   MCD::OPC_CheckPredicate, 5, 71, 3, 0, // Skip to: 10896
/* 10057 */   MCD::OPC_Decode, 247, 4, 85, // Opcode: VAADD_VX
/* 10061 */   MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 10075
/* 10066 */   MCD::OPC_CheckPredicate, 5, 57, 3, 0, // Skip to: 10896
/* 10071 */   MCD::OPC_Decode, 130, 5, 85, // Opcode: VASUBU_VX
/* 10075 */   MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 10089
/* 10080 */   MCD::OPC_CheckPredicate, 5, 43, 3, 0, // Skip to: 10896
/* 10085 */   MCD::OPC_Decode, 132, 5, 85, // Opcode: VASUB_VX
/* 10089 */   MCD::OPC_FilterValue, 14, 9, 0, 0, // Skip to: 10103
/* 10094 */   MCD::OPC_CheckPredicate, 5, 29, 3, 0, // Skip to: 10896
/* 10099 */   MCD::OPC_Decode, 130, 7, 85, // Opcode: VSLIDE1UP_VX
/* 10103 */   MCD::OPC_FilterValue, 15, 9, 0, 0, // Skip to: 10117
/* 10108 */   MCD::OPC_CheckPredicate, 5, 15, 3, 0, // Skip to: 10896
/* 10113 */   MCD::OPC_Decode, 129, 7, 85, // Opcode: VSLIDE1DOWN_VX
/* 10117 */   MCD::OPC_FilterValue, 16, 16, 0, 0, // Skip to: 10138
/* 10122 */   MCD::OPC_CheckPredicate, 5, 1, 3, 0, // Skip to: 10896
/* 10127 */   MCD::OPC_CheckField, 20, 6, 32, 250, 2, 0, // Skip to: 10896
/* 10134 */   MCD::OPC_Decode, 199, 6, 37, // Opcode: VMV_S_X
/* 10138 */   MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 10152
/* 10143 */   MCD::OPC_CheckPredicate, 5, 236, 2, 0, // Skip to: 10896
/* 10148 */   MCD::OPC_Decode, 135, 5, 85, // Opcode: VDIVU_VX
/* 10152 */   MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 10166
/* 10157 */   MCD::OPC_CheckPredicate, 5, 222, 2, 0, // Skip to: 10896
/* 10162 */   MCD::OPC_Decode, 137, 5, 85, // Opcode: VDIV_VX
/* 10166 */   MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 10180
/* 10171 */   MCD::OPC_CheckPredicate, 5, 208, 2, 0, // Skip to: 10896
/* 10176 */   MCD::OPC_Decode, 235, 6, 85, // Opcode: VREMU_VX
/* 10180 */   MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 10194
/* 10185 */   MCD::OPC_CheckPredicate, 5, 194, 2, 0, // Skip to: 10896
/* 10190 */   MCD::OPC_Decode, 237, 6, 85, // Opcode: VREM_VX
/* 10194 */   MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 10208
/* 10199 */   MCD::OPC_CheckPredicate, 5, 180, 2, 0, // Skip to: 10896
/* 10204 */   MCD::OPC_Decode, 190, 6, 85, // Opcode: VMULHU_VX
/* 10208 */   MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 10222
/* 10213 */   MCD::OPC_CheckPredicate, 5, 166, 2, 0, // Skip to: 10896
/* 10218 */   MCD::OPC_Decode, 194, 6, 85, // Opcode: VMUL_VX
/* 10222 */   MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 10236
/* 10227 */   MCD::OPC_CheckPredicate, 5, 152, 2, 0, // Skip to: 10896
/* 10232 */   MCD::OPC_Decode, 188, 6, 85, // Opcode: VMULHSU_VX
/* 10236 */   MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 10250
/* 10241 */   MCD::OPC_CheckPredicate, 5, 138, 2, 0, // Skip to: 10896
/* 10246 */   MCD::OPC_Decode, 192, 6, 85, // Opcode: VMULH_VX
/* 10250 */   MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 10264
/* 10255 */   MCD::OPC_CheckPredicate, 5, 124, 2, 0, // Skip to: 10896
/* 10260 */   MCD::OPC_Decode, 132, 6, 34, // Opcode: VMADD_VX
/* 10264 */   MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 10278
/* 10269 */   MCD::OPC_CheckPredicate, 5, 110, 2, 0, // Skip to: 10896
/* 10274 */   MCD::OPC_Decode, 215, 6, 34, // Opcode: VNMSUB_VX
/* 10278 */   MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 10292
/* 10283 */   MCD::OPC_CheckPredicate, 5, 96, 2, 0, // Skip to: 10896
/* 10288 */   MCD::OPC_Decode, 252, 5, 34, // Opcode: VMACC_VX
/* 10292 */   MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 10306
/* 10297 */   MCD::OPC_CheckPredicate, 5, 82, 2, 0, // Skip to: 10896
/* 10302 */   MCD::OPC_Decode, 213, 6, 34, // Opcode: VNMSAC_VX
/* 10306 */   MCD::OPC_FilterValue, 48, 9, 0, 0, // Skip to: 10320
/* 10311 */   MCD::OPC_CheckPredicate, 5, 68, 2, 0, // Skip to: 10896
/* 10316 */   MCD::OPC_Decode, 172, 7, 85, // Opcode: VWADDU_VX
/* 10320 */   MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 10334
/* 10325 */   MCD::OPC_CheckPredicate, 5, 54, 2, 0, // Skip to: 10896
/* 10330 */   MCD::OPC_Decode, 176, 7, 85, // Opcode: VWADD_VX
/* 10334 */   MCD::OPC_FilterValue, 50, 9, 0, 0, // Skip to: 10348
/* 10339 */   MCD::OPC_CheckPredicate, 5, 40, 2, 0, // Skip to: 10896
/* 10344 */   MCD::OPC_Decode, 195, 7, 85, // Opcode: VWSUBU_VX
/* 10348 */   MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 10362
/* 10353 */   MCD::OPC_CheckPredicate, 5, 26, 2, 0, // Skip to: 10896
/* 10358 */   MCD::OPC_Decode, 199, 7, 85, // Opcode: VWSUB_VX
/* 10362 */   MCD::OPC_FilterValue, 52, 9, 0, 0, // Skip to: 10376
/* 10367 */   MCD::OPC_CheckPredicate, 5, 12, 2, 0, // Skip to: 10896
/* 10372 */   MCD::OPC_Decode, 174, 7, 85, // Opcode: VWADDU_WX
/* 10376 */   MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 10390
/* 10381 */   MCD::OPC_CheckPredicate, 5, 254, 1, 0, // Skip to: 10896
/* 10386 */   MCD::OPC_Decode, 178, 7, 85, // Opcode: VWADD_WX
/* 10390 */   MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 10404
/* 10395 */   MCD::OPC_CheckPredicate, 5, 240, 1, 0, // Skip to: 10896
/* 10400 */   MCD::OPC_Decode, 197, 7, 85, // Opcode: VWSUBU_WX
/* 10404 */   MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 10418
/* 10409 */   MCD::OPC_CheckPredicate, 5, 226, 1, 0, // Skip to: 10896
/* 10414 */   MCD::OPC_Decode, 201, 7, 85, // Opcode: VWSUB_WX
/* 10418 */   MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 10432
/* 10423 */   MCD::OPC_CheckPredicate, 5, 212, 1, 0, // Skip to: 10896
/* 10428 */   MCD::OPC_Decode, 189, 7, 85, // Opcode: VWMULU_VX
/* 10432 */   MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 10446
/* 10437 */   MCD::OPC_CheckPredicate, 5, 198, 1, 0, // Skip to: 10896
/* 10442 */   MCD::OPC_Decode, 187, 7, 85, // Opcode: VWMULSU_VX
/* 10446 */   MCD::OPC_FilterValue, 59, 9, 0, 0, // Skip to: 10460
/* 10451 */   MCD::OPC_CheckPredicate, 5, 184, 1, 0, // Skip to: 10896
/* 10456 */   MCD::OPC_Decode, 191, 7, 85, // Opcode: VWMUL_VX
/* 10460 */   MCD::OPC_FilterValue, 60, 9, 0, 0, // Skip to: 10474
/* 10465 */   MCD::OPC_CheckPredicate, 5, 170, 1, 0, // Skip to: 10896
/* 10470 */   MCD::OPC_Decode, 183, 7, 34, // Opcode: VWMACCU_VX
/* 10474 */   MCD::OPC_FilterValue, 61, 9, 0, 0, // Skip to: 10488
/* 10479 */   MCD::OPC_CheckPredicate, 5, 156, 1, 0, // Skip to: 10896
/* 10484 */   MCD::OPC_Decode, 185, 7, 34, // Opcode: VWMACC_VX
/* 10488 */   MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 10502
/* 10493 */   MCD::OPC_CheckPredicate, 5, 142, 1, 0, // Skip to: 10896
/* 10498 */   MCD::OPC_Decode, 181, 7, 34, // Opcode: VWMACCUS_VX
/* 10502 */   MCD::OPC_FilterValue, 63, 133, 1, 0, // Skip to: 10896
/* 10507 */   MCD::OPC_CheckPredicate, 5, 128, 1, 0, // Skip to: 10896
/* 10512 */   MCD::OPC_Decode, 180, 7, 34, // Opcode: VWMACCSU_VX
/* 10516 */   MCD::OPC_FilterValue, 7, 119, 1, 0, // Skip to: 10896
/* 10521 */   MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 10524 */   MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 10538
/* 10529 */   MCD::OPC_CheckPredicate, 5, 106, 1, 0, // Skip to: 10896
/* 10534 */   MCD::OPC_Decode, 254, 6, 91, // Opcode: VSETVLI
/* 10538 */   MCD::OPC_FilterValue, 1, 97, 1, 0, // Skip to: 10896
/* 10543 */   MCD::OPC_CheckPredicate, 5, 92, 1, 0, // Skip to: 10896
/* 10548 */   MCD::OPC_CheckField, 25, 6, 0, 85, 1, 0, // Skip to: 10896
/* 10555 */   MCD::OPC_Decode, 253, 6, 49, // Opcode: VSETVL
/* 10559 */   MCD::OPC_FilterValue, 99, 57, 0, 0, // Skip to: 10621
/* 10564 */   MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 10567 */   MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 10576
/* 10572 */   MCD::OPC_Decode, 201, 2, 92, // Opcode: BEQ
/* 10576 */   MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 10585
/* 10581 */   MCD::OPC_Decode, 213, 2, 92, // Opcode: BNE
/* 10585 */   MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 10594
/* 10590 */   MCD::OPC_Decode, 208, 2, 92, // Opcode: BLT
/* 10594 */   MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 10603
/* 10599 */   MCD::OPC_Decode, 206, 2, 92, // Opcode: BGE
/* 10603 */   MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 10612
/* 10608 */   MCD::OPC_Decode, 209, 2, 92, // Opcode: BLTU
/* 10612 */   MCD::OPC_FilterValue, 7, 23, 1, 0, // Skip to: 10896
/* 10617 */   MCD::OPC_Decode, 207, 2, 92, // Opcode: BGEU
/* 10621 */   MCD::OPC_FilterValue, 103, 11, 0, 0, // Skip to: 10637
/* 10626 */   MCD::OPC_CheckField, 12, 3, 0, 7, 1, 0, // Skip to: 10896
/* 10633 */   MCD::OPC_Decode, 129, 4, 31, // Opcode: JALR
/* 10637 */   MCD::OPC_FilterValue, 111, 4, 0, 0, // Skip to: 10646
/* 10642 */   MCD::OPC_Decode, 128, 4, 93, // Opcode: JAL
/* 10646 */   MCD::OPC_FilterValue, 115, 245, 0, 0, // Skip to: 10896
/* 10651 */   MCD::OPC_ExtractField, 12, 3,  // Inst{14-12} ...
/* 10654 */   MCD::OPC_FilterValue, 0, 163, 0, 0, // Skip to: 10822
/* 10659 */   MCD::OPC_ExtractField, 25, 7,  // Inst{31-25} ...
/* 10662 */   MCD::OPC_FilterValue, 0, 51, 0, 0, // Skip to: 10718
/* 10667 */   MCD::OPC_ExtractField, 15, 10,  // Inst{24-15} ...
/* 10670 */   MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 10686
/* 10675 */   MCD::OPC_CheckField, 7, 5, 0, 214, 0, 0, // Skip to: 10896
/* 10682 */   MCD::OPC_Decode, 176, 3, 0, // Opcode: ECALL
/* 10686 */   MCD::OPC_FilterValue, 32, 11, 0, 0, // Skip to: 10702
/* 10691 */   MCD::OPC_CheckField, 7, 5, 0, 198, 0, 0, // Skip to: 10896
/* 10698 */   MCD::OPC_Decode, 175, 3, 0, // Opcode: EBREAK
/* 10702 */   MCD::OPC_FilterValue, 64, 189, 0, 0, // Skip to: 10896
/* 10707 */   MCD::OPC_CheckField, 7, 5, 0, 182, 0, 0, // Skip to: 10896
/* 10714 */   MCD::OPC_Decode, 243, 4, 0, // Opcode: URET
/* 10718 */   MCD::OPC_FilterValue, 8, 36, 0, 0, // Skip to: 10759
/* 10723 */   MCD::OPC_ExtractField, 15, 10,  // Inst{24-15} ...
/* 10726 */   MCD::OPC_FilterValue, 64, 11, 0, 0, // Skip to: 10742
/* 10731 */   MCD::OPC_CheckField, 7, 5, 0, 158, 0, 0, // Skip to: 10896
/* 10738 */   MCD::OPC_Decode, 225, 4, 0, // Opcode: SRET
/* 10742 */   MCD::OPC_FilterValue, 160, 1, 148, 0, 0, // Skip to: 10896
/* 10748 */   MCD::OPC_CheckField, 7, 5, 0, 141, 0, 0, // Skip to: 10896
/* 10755 */   MCD::OPC_Decode, 205, 7, 0, // Opcode: WFI
/* 10759 */   MCD::OPC_FilterValue, 9, 11, 0, 0, // Skip to: 10775
/* 10764 */   MCD::OPC_CheckField, 7, 5, 0, 125, 0, 0, // Skip to: 10896
/* 10771 */   MCD::OPC_Decode, 203, 4, 94, // Opcode: SFENCE_VMA
/* 10775 */   MCD::OPC_FilterValue, 24, 18, 0, 0, // Skip to: 10798
/* 10780 */   MCD::OPC_CheckField, 15, 10, 64, 109, 0, 0, // Skip to: 10896
/* 10787 */   MCD::OPC_CheckField, 7, 5, 0, 102, 0, 0, // Skip to: 10896
/* 10794 */   MCD::OPC_Decode, 150, 4, 0, // Opcode: MRET
/* 10798 */   MCD::OPC_FilterValue, 61, 93, 0, 0, // Skip to: 10896
/* 10803 */   MCD::OPC_CheckField, 15, 10, 192, 4, 85, 0, 0, // Skip to: 10896
/* 10811 */   MCD::OPC_CheckField, 7, 5, 0, 78, 0, 0, // Skip to: 10896
/* 10818 */   MCD::OPC_Decode, 174, 3, 0, // Opcode: DRET
/* 10822 */   MCD::OPC_FilterValue, 1, 24, 0, 0, // Skip to: 10851
/* 10827 */   MCD::OPC_CheckField, 15, 17, 128, 128, 6, 11, 0, 0, // Skip to: 10847
/* 10836 */   MCD::OPC_CheckField, 7, 5, 0, 4, 0, 0, // Skip to: 10847
/* 10843 */   MCD::OPC_Decode, 239, 4, 0, // Opcode: UNIMP
/* 10847 */   MCD::OPC_Decode, 236, 2, 95, // Opcode: CSRRW
/* 10851 */   MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 10860
/* 10856 */   MCD::OPC_Decode, 234, 2, 95, // Opcode: CSRRS
/* 10860 */   MCD::OPC_FilterValue, 3, 4, 0, 0, // Skip to: 10869
/* 10865 */   MCD::OPC_Decode, 232, 2, 95, // Opcode: CSRRC
/* 10869 */   MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 10878
/* 10874 */   MCD::OPC_Decode, 237, 2, 96, // Opcode: CSRRWI
/* 10878 */   MCD::OPC_FilterValue, 6, 4, 0, 0, // Skip to: 10887
/* 10883 */   MCD::OPC_Decode, 235, 2, 96, // Opcode: CSRRSI
/* 10887 */   MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 10896
/* 10892 */   MCD::OPC_Decode, 233, 2, 96, // Opcode: CSRRCI
/* 10896 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableRISCV32Only_16[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3 */       MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 39
/* 8 */       MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 11 */      MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 25
/* 16 */      MCD::OPC_CheckPredicate, 33, 75, 0, 0, // Skip to: 96
/* 21 */      MCD::OPC_Decode, 129, 3, 97, // Opcode: C_FLW
/* 25 */      MCD::OPC_FilterValue, 7, 66, 0, 0, // Skip to: 96
/* 30 */      MCD::OPC_CheckPredicate, 33, 61, 0, 0, // Skip to: 96
/* 35 */      MCD::OPC_Decode, 133, 3, 97, // Opcode: C_FSW
/* 39 */      MCD::OPC_FilterValue, 1, 16, 0, 0, // Skip to: 60
/* 44 */      MCD::OPC_CheckPredicate, 34, 47, 0, 0, // Skip to: 96
/* 49 */      MCD::OPC_CheckField, 13, 3, 1, 40, 0, 0, // Skip to: 96
/* 56 */      MCD::OPC_Decode, 136, 3, 26, // Opcode: C_JAL
/* 60 */      MCD::OPC_FilterValue, 2, 31, 0, 0, // Skip to: 96
/* 65 */      MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 68 */      MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 82
/* 73 */      MCD::OPC_CheckPredicate, 33, 18, 0, 0, // Skip to: 96
/* 78 */      MCD::OPC_Decode, 130, 3, 98, // Opcode: C_FLWSP
/* 82 */      MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 96
/* 87 */      MCD::OPC_CheckPredicate, 33, 4, 0, 0, // Skip to: 96
/* 92 */      MCD::OPC_Decode, 134, 3, 99, // Opcode: C_FSWSP
/* 96 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableRVBC16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 24, 16, 0, 0, // Skip to: 24
/* 8 */       MCD::OPC_CheckPredicate, 35, 53, 0, 0, // Skip to: 66
/* 13 */      MCD::OPC_CheckField, 0, 7, 1, 46, 0, 0, // Skip to: 66
/* 20 */      MCD::OPC_Decode, 152, 3, 17, // Opcode: C_NOT
/* 24 */      MCD::OPC_FilterValue, 25, 16, 0, 0, // Skip to: 45
/* 29 */      MCD::OPC_CheckPredicate, 35, 32, 0, 0, // Skip to: 66
/* 34 */      MCD::OPC_CheckField, 0, 7, 1, 25, 0, 0, // Skip to: 66
/* 41 */      MCD::OPC_Decode, 149, 3, 17, // Opcode: C_NEG
/* 45 */      MCD::OPC_FilterValue, 26, 16, 0, 0, // Skip to: 66
/* 50 */      MCD::OPC_CheckPredicate, 36, 11, 0, 0, // Skip to: 66
/* 55 */      MCD::OPC_CheckField, 0, 7, 1, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 169, 3, 17, // Opcode: C_ZEXTW
/* 66 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[RISCV::FeatureStdExtC]);
  case 1:
    return (Bits[RISCV::FeatureStdExtC] && !Bits[RISCV::FeatureNoRVCHints]);
  case 2:
    return (Bits[RISCV::FeatureStdExtC] && Bits[RISCV::FeatureStdExtD]);
  case 3:
    return (Bits[RISCV::FeatureStdExtC] && Bits[RISCV::Feature64Bit]);
  case 4:
    return (Bits[RISCV::Feature64Bit]);
  case 5:
    return (Bits[RISCV::FeatureStdExtV]);
  case 6:
    return (Bits[RISCV::FeatureStdExtF]);
  case 7:
    return (Bits[RISCV::FeatureStdExtD]);
  case 8:
    return (Bits[RISCV::FeatureExtZbp]);
  case 9:
    return (Bits[RISCV::FeatureExtZbb]);
  case 10:
    return (Bits[RISCV::FeatureExtZbs]);
  case 11:
    return (Bits[RISCV::FeatureExtZbm] && Bits[RISCV::Feature64Bit]);
  case 12:
    return (Bits[RISCV::FeatureExtZbr]);
  case 13:
    return (Bits[RISCV::FeatureExtZbr] && Bits[RISCV::Feature64Bit]);
  case 14:
    return ((Bits[RISCV::FeatureExtZbb] || Bits[RISCV::FeatureExtZbp]));
  case 15:
    return (Bits[RISCV::FeatureExtZbt]);
  case 16:
    return (Bits[RISCV::FeatureExtZbb] && Bits[RISCV::Feature64Bit]);
  case 17:
    return (Bits[RISCV::FeatureExtZbs] && Bits[RISCV::Feature64Bit]);
  case 18:
    return (Bits[RISCV::FeatureExtZbp] && Bits[RISCV::Feature64Bit]);
  case 19:
    return ((Bits[RISCV::FeatureExtZbb] || Bits[RISCV::FeatureExtZbp]) && Bits[RISCV::Feature64Bit]);
  case 20:
    return (Bits[RISCV::FeatureExtZbt] && Bits[RISCV::Feature64Bit]);
  case 21:
    return (Bits[RISCV::FeatureStdExtA]);
  case 22:
    return (Bits[RISCV::FeatureStdExtA] && Bits[RISCV::Feature64Bit]);
  case 23:
    return (Bits[RISCV::FeatureStdExtM]);
  case 24:
    return (Bits[RISCV::FeatureExtZbc]);
  case 25:
    return (Bits[RISCV::FeatureExtZbe]);
  case 26:
    return (Bits[RISCV::FeatureExtZbf]);
  case 27:
    return (Bits[RISCV::FeatureStdExtM] && Bits[RISCV::Feature64Bit]);
  case 28:
    return (Bits[RISCV::FeatureExtZbc] && Bits[RISCV::Feature64Bit]);
  case 29:
    return (Bits[RISCV::FeatureExtZbe] && Bits[RISCV::Feature64Bit]);
  case 30:
    return (Bits[RISCV::FeatureExtZbf] && Bits[RISCV::Feature64Bit]);
  case 31:
    return (Bits[RISCV::FeatureStdExtF] && Bits[RISCV::Feature64Bit]);
  case 32:
    return (Bits[RISCV::FeatureStdExtD] && Bits[RISCV::Feature64Bit]);
  case 33:
    return (Bits[RISCV::FeatureStdExtC] && Bits[RISCV::FeatureStdExtF] && !Bits[RISCV::Feature64Bit]);
  case 34:
    return (Bits[RISCV::FeatureStdExtC] && !Bits[RISCV::Feature64Bit]);
  case 35:
    return (Bits[RISCV::FeatureExtZbproposedc] && Bits[RISCV::FeatureStdExtC]);
  case 36:
    return (Bits[RISCV::FeatureExtZbproposedc] && (Bits[RISCV::FeatureExtZbb] || Bits[RISCV::FeatureExtZbp]) && Bits[RISCV::FeatureStdExtC] && Bits[RISCV::Feature64Bit]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 3;
    tmp |= fieldFromInstruction(insn, 6, 1) << 2;
    tmp |= fieldFromInstruction(insn, 7, 4) << 6;
    tmp |= fieldFromInstruction(insn, 11, 2) << 4;
    if (decodeUImmNonZeroOperand<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    if (decodeRVCInstrSImm(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeSImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    if (decodeRVCInstrRdRs1UImm(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeFPR64CRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 6;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 3) << 6;
    tmp |= fieldFromInstruction(insn, 5, 2) << 3;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<9>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 6;
    tmp |= fieldFromInstruction(insn, 6, 1) << 2;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (decodeRVCInstrRdSImm(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeSImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 2) << 6;
    tmp |= fieldFromInstruction(insn, 4, 3) << 2;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 6;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 5;
    tmp |= fieldFromInstruction(insn, 3, 2) << 7;
    tmp |= fieldFromInstruction(insn, 5, 1) << 6;
    tmp |= fieldFromInstruction(insn, 6, 1) << 4;
    tmp |= fieldFromInstruction(insn, 12, 1) << 9;
    if (decodeSImmNonZeroOperand<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0X2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeCLUIImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 3) << 6;
    tmp |= fieldFromInstruction(insn, 5, 2) << 3;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<9>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 5) << 0;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeSImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    if (decodeRVCInstrRdRs2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    if (decodeRVCInstrRdRs1Rs2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeGPRNoX0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 4;
    tmp |= fieldFromInstruction(insn, 3, 3) << 0;
    tmp |= fieldFromInstruction(insn, 6, 1) << 6;
    tmp |= fieldFromInstruction(insn, 7, 1) << 5;
    tmp |= fieldFromInstruction(insn, 8, 1) << 9;
    tmp |= fieldFromInstruction(insn, 9, 2) << 7;
    tmp |= fieldFromInstruction(insn, 11, 1) << 3;
    tmp |= fieldFromInstruction(insn, 12, 1) << 10;
    if (decodeSImmOperandAndLsl1<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 3) << 6;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<9>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 1) << 4;
    tmp |= fieldFromInstruction(insn, 3, 2) << 0;
    tmp |= fieldFromInstruction(insn, 5, 2) << 5;
    tmp |= fieldFromInstruction(insn, 10, 2) << 2;
    tmp |= fieldFromInstruction(insn, 12, 1) << 7;
    if (decodeSImmOperandAndLsl1<9>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 2) << 6;
    tmp |= fieldFromInstruction(insn, 9, 4) << 2;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 3) << 6;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<9>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 12);
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 12);
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 12);
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 24, 4);
    if (decodeUImmOperand<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeUImmOperand<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 27, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 20);
    if (decodeUImmOperand<20>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 27, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 5) << 0;
    tmp |= fieldFromInstruction(insn, 25, 7) << 5;
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 5) << 0;
    tmp |= fieldFromInstruction(insn, 25, 7) << 5;
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 5) << 0;
    tmp |= fieldFromInstruction(insn, 25, 7) << 5;
    if (decodeSImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 27, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 27, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 27, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 3);
    if (decodeFRMArg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeVRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 1);
    if (decodeVMaskReg(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 11);
    if (decodeUImmOperand<11>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 1) << 10;
    tmp |= fieldFromInstruction(insn, 8, 4) << 0;
    tmp |= fieldFromInstruction(insn, 25, 6) << 4;
    tmp |= fieldFromInstruction(insn, 31, 1) << 11;
    if (decodeSImmOperandAndLsl1<13>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 12, 8) << 11;
    tmp |= fieldFromInstruction(insn, 20, 1) << 10;
    tmp |= fieldFromInstruction(insn, 21, 10) << 0;
    tmp |= fieldFromInstruction(insn, 31, 1) << 19;
    if (decodeSImmOperandAndLsl1<21>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 12);
    if (decodeUImmOperand<12>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 15, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeFPR32CRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 5, 1) << 6;
    tmp |= fieldFromInstruction(insn, 6, 1) << 2;
    tmp |= fieldFromInstruction(insn, 10, 3) << 3;
    if (decodeUImmOperand<7>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 7, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 2, 2) << 6;
    tmp |= fieldFromInstruction(insn, 4, 3) << 2;
    tmp |= fieldFromInstruction(insn, 12, 1) << 5;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 2, 5);
    if (DecodeFPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 7, 2) << 6;
    tmp |= fieldFromInstruction(insn, 9, 4) << 2;
    if (decodeUImmOperand<8>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  InsnType CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      InsnType ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // end namespace llvm

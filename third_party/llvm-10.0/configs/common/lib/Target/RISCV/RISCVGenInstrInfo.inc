/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace RISCV {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    STATEPOINT	= 24,
    LOCAL_ESCAPE	= 25,
    FAULTING_OP	= 26,
    PATCHABLE_OP	= 27,
    PATCHABLE_FUNCTION_ENTER	= 28,
    PATCHABLE_RET	= 29,
    PATCHABLE_FUNCTION_EXIT	= 30,
    PATCHABLE_TAIL_CALL	= 31,
    PATCHABLE_EVENT_CALL	= 32,
    PATCHABLE_TYPED_EVENT_CALL	= 33,
    ICALL_BRANCH_FUNNEL	= 34,
    G_ADD	= 35,
    G_SUB	= 36,
    G_MUL	= 37,
    G_SDIV	= 38,
    G_UDIV	= 39,
    G_SREM	= 40,
    G_UREM	= 41,
    G_AND	= 42,
    G_OR	= 43,
    G_XOR	= 44,
    G_IMPLICIT_DEF	= 45,
    G_PHI	= 46,
    G_FRAME_INDEX	= 47,
    G_GLOBAL_VALUE	= 48,
    G_EXTRACT	= 49,
    G_UNMERGE_VALUES	= 50,
    G_INSERT	= 51,
    G_MERGE_VALUES	= 52,
    G_BUILD_VECTOR	= 53,
    G_BUILD_VECTOR_TRUNC	= 54,
    G_CONCAT_VECTORS	= 55,
    G_PTRTOINT	= 56,
    G_INTTOPTR	= 57,
    G_BITCAST	= 58,
    G_INTRINSIC_TRUNC	= 59,
    G_INTRINSIC_ROUND	= 60,
    G_READCYCLECOUNTER	= 61,
    G_LOAD	= 62,
    G_SEXTLOAD	= 63,
    G_ZEXTLOAD	= 64,
    G_INDEXED_LOAD	= 65,
    G_INDEXED_SEXTLOAD	= 66,
    G_INDEXED_ZEXTLOAD	= 67,
    G_STORE	= 68,
    G_INDEXED_STORE	= 69,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 70,
    G_ATOMIC_CMPXCHG	= 71,
    G_ATOMICRMW_XCHG	= 72,
    G_ATOMICRMW_ADD	= 73,
    G_ATOMICRMW_SUB	= 74,
    G_ATOMICRMW_AND	= 75,
    G_ATOMICRMW_NAND	= 76,
    G_ATOMICRMW_OR	= 77,
    G_ATOMICRMW_XOR	= 78,
    G_ATOMICRMW_MAX	= 79,
    G_ATOMICRMW_MIN	= 80,
    G_ATOMICRMW_UMAX	= 81,
    G_ATOMICRMW_UMIN	= 82,
    G_ATOMICRMW_FADD	= 83,
    G_ATOMICRMW_FSUB	= 84,
    G_FENCE	= 85,
    G_BRCOND	= 86,
    G_BRINDIRECT	= 87,
    G_INTRINSIC	= 88,
    G_INTRINSIC_W_SIDE_EFFECTS	= 89,
    G_ANYEXT	= 90,
    G_TRUNC	= 91,
    G_CONSTANT	= 92,
    G_FCONSTANT	= 93,
    G_VASTART	= 94,
    G_VAARG	= 95,
    G_SEXT	= 96,
    G_SEXT_INREG	= 97,
    G_ZEXT	= 98,
    G_SHL	= 99,
    G_LSHR	= 100,
    G_ASHR	= 101,
    G_ICMP	= 102,
    G_FCMP	= 103,
    G_SELECT	= 104,
    G_UADDO	= 105,
    G_UADDE	= 106,
    G_USUBO	= 107,
    G_USUBE	= 108,
    G_SADDO	= 109,
    G_SADDE	= 110,
    G_SSUBO	= 111,
    G_SSUBE	= 112,
    G_UMULO	= 113,
    G_SMULO	= 114,
    G_UMULH	= 115,
    G_SMULH	= 116,
    G_FADD	= 117,
    G_FSUB	= 118,
    G_FMUL	= 119,
    G_FMA	= 120,
    G_FMAD	= 121,
    G_FDIV	= 122,
    G_FREM	= 123,
    G_FPOW	= 124,
    G_FEXP	= 125,
    G_FEXP2	= 126,
    G_FLOG	= 127,
    G_FLOG2	= 128,
    G_FLOG10	= 129,
    G_FNEG	= 130,
    G_FPEXT	= 131,
    G_FPTRUNC	= 132,
    G_FPTOSI	= 133,
    G_FPTOUI	= 134,
    G_SITOFP	= 135,
    G_UITOFP	= 136,
    G_FABS	= 137,
    G_FCOPYSIGN	= 138,
    G_FCANONICALIZE	= 139,
    G_FMINNUM	= 140,
    G_FMAXNUM	= 141,
    G_FMINNUM_IEEE	= 142,
    G_FMAXNUM_IEEE	= 143,
    G_FMINIMUM	= 144,
    G_FMAXIMUM	= 145,
    G_PTR_ADD	= 146,
    G_PTR_MASK	= 147,
    G_SMIN	= 148,
    G_SMAX	= 149,
    G_UMIN	= 150,
    G_UMAX	= 151,
    G_BR	= 152,
    G_BRJT	= 153,
    G_INSERT_VECTOR_ELT	= 154,
    G_EXTRACT_VECTOR_ELT	= 155,
    G_SHUFFLE_VECTOR	= 156,
    G_CTTZ	= 157,
    G_CTTZ_ZERO_UNDEF	= 158,
    G_CTLZ	= 159,
    G_CTLZ_ZERO_UNDEF	= 160,
    G_CTPOP	= 161,
    G_BSWAP	= 162,
    G_BITREVERSE	= 163,
    G_FCEIL	= 164,
    G_FCOS	= 165,
    G_FSIN	= 166,
    G_FSQRT	= 167,
    G_FFLOOR	= 168,
    G_FRINT	= 169,
    G_FNEARBYINT	= 170,
    G_ADDRSPACE_CAST	= 171,
    G_BLOCK_ADDR	= 172,
    G_JUMP_TABLE	= 173,
    G_DYN_STACKALLOC	= 174,
    G_READ_REGISTER	= 175,
    G_WRITE_REGISTER	= 176,
    ADJCALLSTACKDOWN	= 177,
    ADJCALLSTACKUP	= 178,
    BuildPairF64Pseudo	= 179,
    PseudoAddTPRel	= 180,
    PseudoAtomicLoadNand32	= 181,
    PseudoAtomicLoadNand64	= 182,
    PseudoBR	= 183,
    PseudoBRIND	= 184,
    PseudoCALL	= 185,
    PseudoCALLIndirect	= 186,
    PseudoCALLReg	= 187,
    PseudoCmpXchg32	= 188,
    PseudoCmpXchg64	= 189,
    PseudoFLD	= 190,
    PseudoFLW	= 191,
    PseudoFSD	= 192,
    PseudoFSW	= 193,
    PseudoJump	= 194,
    PseudoLA	= 195,
    PseudoLA_TLS_GD	= 196,
    PseudoLA_TLS_IE	= 197,
    PseudoLB	= 198,
    PseudoLBU	= 199,
    PseudoLD	= 200,
    PseudoLH	= 201,
    PseudoLHU	= 202,
    PseudoLI	= 203,
    PseudoLLA	= 204,
    PseudoLW	= 205,
    PseudoLWU	= 206,
    PseudoMaskedAtomicLoadAdd32	= 207,
    PseudoMaskedAtomicLoadMax32	= 208,
    PseudoMaskedAtomicLoadMin32	= 209,
    PseudoMaskedAtomicLoadNand32	= 210,
    PseudoMaskedAtomicLoadSub32	= 211,
    PseudoMaskedAtomicLoadUMax32	= 212,
    PseudoMaskedAtomicLoadUMin32	= 213,
    PseudoMaskedAtomicSwap32	= 214,
    PseudoMaskedCmpXchg32	= 215,
    PseudoRET	= 216,
    PseudoSB	= 217,
    PseudoSD	= 218,
    PseudoSH	= 219,
    PseudoSW	= 220,
    PseudoTAIL	= 221,
    PseudoTAILIndirect	= 222,
    ReadCycleWide	= 223,
    Select_FPR32_Using_CC_GPR	= 224,
    Select_FPR64_Using_CC_GPR	= 225,
    Select_GPR_Using_CC_GPR	= 226,
    SplitF64Pseudo	= 227,
    ADD	= 228,
    ADDI	= 229,
    ADDIW	= 230,
    ADDW	= 231,
    AMOADD_D	= 232,
    AMOADD_D_AQ	= 233,
    AMOADD_D_AQ_RL	= 234,
    AMOADD_D_RL	= 235,
    AMOADD_W	= 236,
    AMOADD_W_AQ	= 237,
    AMOADD_W_AQ_RL	= 238,
    AMOADD_W_RL	= 239,
    AMOAND_D	= 240,
    AMOAND_D_AQ	= 241,
    AMOAND_D_AQ_RL	= 242,
    AMOAND_D_RL	= 243,
    AMOAND_W	= 244,
    AMOAND_W_AQ	= 245,
    AMOAND_W_AQ_RL	= 246,
    AMOAND_W_RL	= 247,
    AMOMAXU_D	= 248,
    AMOMAXU_D_AQ	= 249,
    AMOMAXU_D_AQ_RL	= 250,
    AMOMAXU_D_RL	= 251,
    AMOMAXU_W	= 252,
    AMOMAXU_W_AQ	= 253,
    AMOMAXU_W_AQ_RL	= 254,
    AMOMAXU_W_RL	= 255,
    AMOMAX_D	= 256,
    AMOMAX_D_AQ	= 257,
    AMOMAX_D_AQ_RL	= 258,
    AMOMAX_D_RL	= 259,
    AMOMAX_W	= 260,
    AMOMAX_W_AQ	= 261,
    AMOMAX_W_AQ_RL	= 262,
    AMOMAX_W_RL	= 263,
    AMOMINU_D	= 264,
    AMOMINU_D_AQ	= 265,
    AMOMINU_D_AQ_RL	= 266,
    AMOMINU_D_RL	= 267,
    AMOMINU_W	= 268,
    AMOMINU_W_AQ	= 269,
    AMOMINU_W_AQ_RL	= 270,
    AMOMINU_W_RL	= 271,
    AMOMIN_D	= 272,
    AMOMIN_D_AQ	= 273,
    AMOMIN_D_AQ_RL	= 274,
    AMOMIN_D_RL	= 275,
    AMOMIN_W	= 276,
    AMOMIN_W_AQ	= 277,
    AMOMIN_W_AQ_RL	= 278,
    AMOMIN_W_RL	= 279,
    AMOOR_D	= 280,
    AMOOR_D_AQ	= 281,
    AMOOR_D_AQ_RL	= 282,
    AMOOR_D_RL	= 283,
    AMOOR_W	= 284,
    AMOOR_W_AQ	= 285,
    AMOOR_W_AQ_RL	= 286,
    AMOOR_W_RL	= 287,
    AMOSWAP_D	= 288,
    AMOSWAP_D_AQ	= 289,
    AMOSWAP_D_AQ_RL	= 290,
    AMOSWAP_D_RL	= 291,
    AMOSWAP_W	= 292,
    AMOSWAP_W_AQ	= 293,
    AMOSWAP_W_AQ_RL	= 294,
    AMOSWAP_W_RL	= 295,
    AMOXOR_D	= 296,
    AMOXOR_D_AQ	= 297,
    AMOXOR_D_AQ_RL	= 298,
    AMOXOR_D_RL	= 299,
    AMOXOR_W	= 300,
    AMOXOR_W_AQ	= 301,
    AMOXOR_W_AQ_RL	= 302,
    AMOXOR_W_RL	= 303,
    AND	= 304,
    ANDI	= 305,
    AUIPC	= 306,
    BEQ	= 307,
    BGE	= 308,
    BGEU	= 309,
    BLT	= 310,
    BLTU	= 311,
    BNE	= 312,
    CSRRC	= 313,
    CSRRCI	= 314,
    CSRRS	= 315,
    CSRRSI	= 316,
    CSRRW	= 317,
    CSRRWI	= 318,
    C_ADD	= 319,
    C_ADDI	= 320,
    C_ADDI16SP	= 321,
    C_ADDI4SPN	= 322,
    C_ADDIW	= 323,
    C_ADDI_HINT_IMM_ZERO	= 324,
    C_ADDI_HINT_X0	= 325,
    C_ADDI_NOP	= 326,
    C_ADDW	= 327,
    C_ADD_HINT	= 328,
    C_AND	= 329,
    C_ANDI	= 330,
    C_BEQZ	= 331,
    C_BNEZ	= 332,
    C_EBREAK	= 333,
    C_FLD	= 334,
    C_FLDSP	= 335,
    C_FLW	= 336,
    C_FLWSP	= 337,
    C_FSD	= 338,
    C_FSDSP	= 339,
    C_FSW	= 340,
    C_FSWSP	= 341,
    C_J	= 342,
    C_JAL	= 343,
    C_JALR	= 344,
    C_JR	= 345,
    C_LD	= 346,
    C_LDSP	= 347,
    C_LI	= 348,
    C_LI_HINT	= 349,
    C_LUI	= 350,
    C_LUI_HINT	= 351,
    C_LW	= 352,
    C_LWSP	= 353,
    C_MV	= 354,
    C_MV_HINT	= 355,
    C_NOP	= 356,
    C_NOP_HINT	= 357,
    C_OR	= 358,
    C_SD	= 359,
    C_SDSP	= 360,
    C_SLLI	= 361,
    C_SLLI64_HINT	= 362,
    C_SLLI_HINT	= 363,
    C_SRAI	= 364,
    C_SRAI64_HINT	= 365,
    C_SRLI	= 366,
    C_SRLI64_HINT	= 367,
    C_SUB	= 368,
    C_SUBW	= 369,
    C_SW	= 370,
    C_SWSP	= 371,
    C_UNIMP	= 372,
    C_XOR	= 373,
    DIV	= 374,
    DIVU	= 375,
    DIVUW	= 376,
    DIVW	= 377,
    EBREAK	= 378,
    ECALL	= 379,
    FADD_D	= 380,
    FADD_S	= 381,
    FCLASS_D	= 382,
    FCLASS_S	= 383,
    FCVT_D_L	= 384,
    FCVT_D_LU	= 385,
    FCVT_D_S	= 386,
    FCVT_D_W	= 387,
    FCVT_D_WU	= 388,
    FCVT_LU_D	= 389,
    FCVT_LU_S	= 390,
    FCVT_L_D	= 391,
    FCVT_L_S	= 392,
    FCVT_S_D	= 393,
    FCVT_S_L	= 394,
    FCVT_S_LU	= 395,
    FCVT_S_W	= 396,
    FCVT_S_WU	= 397,
    FCVT_WU_D	= 398,
    FCVT_WU_S	= 399,
    FCVT_W_D	= 400,
    FCVT_W_S	= 401,
    FDIV_D	= 402,
    FDIV_S	= 403,
    FENCE	= 404,
    FENCE_I	= 405,
    FENCE_TSO	= 406,
    FEQ_D	= 407,
    FEQ_S	= 408,
    FLD	= 409,
    FLE_D	= 410,
    FLE_S	= 411,
    FLT_D	= 412,
    FLT_S	= 413,
    FLW	= 414,
    FMADD_D	= 415,
    FMADD_S	= 416,
    FMAX_D	= 417,
    FMAX_S	= 418,
    FMIN_D	= 419,
    FMIN_S	= 420,
    FMSUB_D	= 421,
    FMSUB_S	= 422,
    FMUL_D	= 423,
    FMUL_S	= 424,
    FMV_D_X	= 425,
    FMV_W_X	= 426,
    FMV_X_D	= 427,
    FMV_X_W	= 428,
    FNMADD_D	= 429,
    FNMADD_S	= 430,
    FNMSUB_D	= 431,
    FNMSUB_S	= 432,
    FSD	= 433,
    FSGNJN_D	= 434,
    FSGNJN_S	= 435,
    FSGNJX_D	= 436,
    FSGNJX_S	= 437,
    FSGNJ_D	= 438,
    FSGNJ_S	= 439,
    FSQRT_D	= 440,
    FSQRT_S	= 441,
    FSUB_D	= 442,
    FSUB_S	= 443,
    FSW	= 444,
    JAL	= 445,
    JALR	= 446,
    LB	= 447,
    LBU	= 448,
    LD	= 449,
    LH	= 450,
    LHU	= 451,
    LR_D	= 452,
    LR_D_AQ	= 453,
    LR_D_AQ_RL	= 454,
    LR_D_RL	= 455,
    LR_W	= 456,
    LR_W_AQ	= 457,
    LR_W_AQ_RL	= 458,
    LR_W_RL	= 459,
    LUI	= 460,
    LW	= 461,
    LWU	= 462,
    MRET	= 463,
    MUL	= 464,
    MULH	= 465,
    MULHSU	= 466,
    MULHU	= 467,
    MULW	= 468,
    OR	= 469,
    ORI	= 470,
    REM	= 471,
    REMU	= 472,
    REMUW	= 473,
    REMW	= 474,
    SB	= 475,
    SC_D	= 476,
    SC_D_AQ	= 477,
    SC_D_AQ_RL	= 478,
    SC_D_RL	= 479,
    SC_W	= 480,
    SC_W_AQ	= 481,
    SC_W_AQ_RL	= 482,
    SC_W_RL	= 483,
    SD	= 484,
    SFENCE_VMA	= 485,
    SH	= 486,
    SLL	= 487,
    SLLI	= 488,
    SLLIW	= 489,
    SLLW	= 490,
    SLT	= 491,
    SLTI	= 492,
    SLTIU	= 493,
    SLTU	= 494,
    SRA	= 495,
    SRAI	= 496,
    SRAIW	= 497,
    SRAW	= 498,
    SRET	= 499,
    SRL	= 500,
    SRLI	= 501,
    SRLIW	= 502,
    SRLW	= 503,
    SUB	= 504,
    SUBW	= 505,
    SW	= 506,
    UNIMP	= 507,
    URET	= 508,
    WFI	= 509,
    XOR	= 510,
    XORI	= 511,
    INSTRUCTION_LIST_END = 512
  };

} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace RISCV {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    WriteIALU_ReadIALU_ReadIALU	= 1,
    WriteIALU_ReadIALU	= 2,
    WriteIALU32_ReadIALU32	= 3,
    WriteIALU32_ReadIALU32_ReadIALU32	= 4,
    WriteAtomicD_ReadAtomicDA_ReadAtomicDD	= 5,
    WriteAtomicW_ReadAtomicWA_ReadAtomicWD	= 6,
    WriteIALU	= 7,
    WriteJmp	= 8,
    WriteCSR_ReadCSR	= 9,
    WriteCSR	= 10,
    WriteFLD64_ReadMemBase	= 11,
    WriteFLD32_ReadMemBase	= 12,
    WriteFST64_ReadStoreData_ReadMemBase	= 13,
    WriteFST32_ReadStoreData_ReadMemBase	= 14,
    WriteJal	= 15,
    WriteJalr_ReadJalr	= 16,
    WriteJmpReg	= 17,
    WriteLDD_ReadMemBase	= 18,
    WriteLDW_ReadMemBase	= 19,
    WriteNop	= 20,
    WriteSTD_ReadStoreData_ReadMemBase	= 21,
    WriteShift_ReadShift	= 22,
    WriteSTW_ReadStoreData_ReadMemBase	= 23,
    WriteIDiv_ReadIDiv_ReadIDiv	= 24,
    WriteIDiv32_ReadIDiv32_ReadIDiv32	= 25,
    WriteFALU64_ReadFALU64_ReadFALU64	= 26,
    WriteFALU32_ReadFALU32_ReadFALU32	= 27,
    WriteFClass64_ReadFClass64	= 28,
    WriteFClass32_ReadFClass32	= 29,
    WriteFCvtI64ToF64_ReadFCvtI64ToF64	= 30,
    WriteFCvtF32ToF64_ReadFCvtF32ToF64	= 31,
    WriteFCvtI32ToF64_ReadFCvtI32ToF64	= 32,
    WriteFCvtF64ToI64_ReadFCvtF64ToI64	= 33,
    WriteFCvtF32ToI64_ReadFCvtF32ToI64	= 34,
    WriteFCvtF64ToF32_ReadFCvtF64ToF32	= 35,
    WriteFCvtI64ToF32_ReadFCvtI64ToF32	= 36,
    WriteFCvtI32ToF32_ReadFCvtI32ToF32	= 37,
    WriteFCvtF64ToI32_ReadFCvtF64ToI32	= 38,
    WriteFCvtF32ToI32_ReadFCvtF32ToI32	= 39,
    WriteFDiv32_ReadFDiv32_ReadFDiv32	= 40,
    WriteFCmp64_ReadFCmp64_ReadFCmp64	= 41,
    WriteFCmp32_ReadFCmp32_ReadFCmp32	= 42,
    WriteFMulAdd64_ReadFMulAdd64_ReadFMulAdd64_ReadFMulAdd64	= 43,
    WriteFMulAdd32_ReadFMulAdd32_ReadFMulAdd32_ReadFMulAdd32	= 44,
    WriteFMulSub64_ReadFMulSub64_ReadFMulSub64_ReadFMulSub64	= 45,
    WriteFMulSub32_ReadFMulSub32_ReadFMulSub32_ReadFMulSub32	= 46,
    WriteFMul32_ReadFMul32_ReadFMul32	= 47,
    WriteFMovI64ToF64_ReadFMovI64ToF64	= 48,
    WriteFMovI32ToF32_ReadFMovI32ToF32	= 49,
    WriteFMovF64ToI64_ReadFMovF64ToI64	= 50,
    WriteFMovF32ToI32_ReadFMovF32ToI32	= 51,
    WriteFSqrt32_ReadFSqrt32	= 52,
    WriteLDB_ReadMemBase	= 53,
    WriteLDH_ReadMemBase	= 54,
    WriteAtomicLDD_ReadAtomicLDD	= 55,
    WriteAtomicLDW_ReadAtomicLDW	= 56,
    WriteLDWU_ReadMemBase	= 57,
    WriteIMul_ReadIMul_ReadIMul	= 58,
    WriteIMul32_ReadIMul32_ReadIMul32	= 59,
    WriteSTB_ReadStoreData_ReadMemBase	= 60,
    WriteAtomicSTD_ReadAtomicSTD_ReadAtomicSTD	= 61,
    WriteAtomicSTW_ReadAtomicSTW_ReadAtomicSTW	= 62,
    WriteSTH_ReadStoreData_ReadMemBase	= 63,
    WriteShift32_ReadShift32	= 64,
    COPY	= 65,
    SCHED_LIST_END = 66
  };
} // end namespace Sched
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { RISCV::X2, 0 };
static const MCPhysReg ImplicitList2[] = { RISCV::X1, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { RISCV::GPRTCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM20, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM13_LSB0, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { RISCV::FPR64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { RISCV::FPR32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { RISCV::GPRNoX0X2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo87[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo88[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMMLOG2XLEN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };

extern const MCInstrDesc RISCVInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	65,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #61 = G_READCYCLECOUNTER
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #62 = G_LOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #63 = G_SEXTLOAD
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #64 = G_ZEXTLOAD
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #65 = G_INDEXED_LOAD
  { 66,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_INDEXED_SEXTLOAD
  { 67,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #67 = G_INDEXED_ZEXTLOAD
  { 68,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #68 = G_STORE
  { 69,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_INDEXED_STORE
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #70 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 71,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #71 = G_ATOMIC_CMPXCHG
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_XCHG
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_ADD
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_SUB
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_AND
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_NAND
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_OR
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #78 = G_ATOMICRMW_XOR
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #79 = G_ATOMICRMW_MAX
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #80 = G_ATOMICRMW_MIN
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #81 = G_ATOMICRMW_UMAX
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #82 = G_ATOMICRMW_UMIN
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #83 = G_ATOMICRMW_FADD
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #84 = G_ATOMICRMW_FSUB
  { 85,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #85 = G_FENCE
  { 86,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #86 = G_BRCOND
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #87 = G_BRINDIRECT
  { 88,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #88 = G_INTRINSIC
  { 89,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #89 = G_INTRINSIC_W_SIDE_EFFECTS
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #90 = G_ANYEXT
  { 91,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #91 = G_TRUNC
  { 92,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #92 = G_CONSTANT
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #93 = G_FCONSTANT
  { 94,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #94 = G_VASTART
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #95 = G_VAARG
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #96 = G_SEXT
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #97 = G_SEXT_INREG
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #98 = G_ZEXT
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #99 = G_SHL
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #100 = G_LSHR
  { 101,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #101 = G_ASHR
  { 102,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #102 = G_ICMP
  { 103,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #103 = G_FCMP
  { 104,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_SELECT
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #105 = G_UADDO
  { 106,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #106 = G_UADDE
  { 107,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #107 = G_USUBO
  { 108,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #108 = G_USUBE
  { 109,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #109 = G_SADDO
  { 110,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #110 = G_SADDE
  { 111,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #111 = G_SSUBO
  { 112,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #112 = G_SSUBE
  { 113,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #113 = G_UMULO
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #114 = G_SMULO
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #115 = G_UMULH
  { 116,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #116 = G_SMULH
  { 117,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #117 = G_FADD
  { 118,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #118 = G_FSUB
  { 119,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #119 = G_FMUL
  { 120,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #120 = G_FMA
  { 121,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #121 = G_FMAD
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #122 = G_FDIV
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #123 = G_FREM
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #124 = G_FPOW
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #125 = G_FEXP
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #126 = G_FEXP2
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #127 = G_FLOG
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #128 = G_FLOG2
  { 129,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #129 = G_FLOG10
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #130 = G_FNEG
  { 131,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #131 = G_FPEXT
  { 132,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #132 = G_FPTRUNC
  { 133,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #133 = G_FPTOSI
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #134 = G_FPTOUI
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #135 = G_SITOFP
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #136 = G_UITOFP
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #137 = G_FABS
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_FCOPYSIGN
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #139 = G_FCANONICALIZE
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #140 = G_FMINNUM
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #141 = G_FMAXNUM
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #142 = G_FMINNUM_IEEE
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #143 = G_FMAXNUM_IEEE
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #144 = G_FMINIMUM
  { 145,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #145 = G_FMAXIMUM
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #146 = G_PTR_ADD
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_PTR_MASK
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #148 = G_SMIN
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #149 = G_SMAX
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #150 = G_UMIN
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #151 = G_UMAX
  { 152,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #152 = G_BR
  { 153,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #153 = G_BRJT
  { 154,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #154 = G_INSERT_VECTOR_ELT
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #155 = G_EXTRACT_VECTOR_ELT
  { 156,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #156 = G_SHUFFLE_VECTOR
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #157 = G_CTTZ
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #158 = G_CTTZ_ZERO_UNDEF
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #159 = G_CTLZ
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #160 = G_CTLZ_ZERO_UNDEF
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #161 = G_CTPOP
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #162 = G_BSWAP
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #163 = G_BITREVERSE
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #164 = G_FCEIL
  { 165,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #165 = G_FCOS
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #166 = G_FSIN
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #167 = G_FSQRT
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #168 = G_FFLOOR
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #169 = G_FRINT
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #170 = G_FNEARBYINT
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #171 = G_ADDRSPACE_CAST
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #172 = G_BLOCK_ADDR
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #173 = G_JUMP_TABLE
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #174 = G_DYN_STACKALLOC
  { 175,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #175 = G_READ_REGISTER
  { 176,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #176 = G_WRITE_REGISTER
  { 177,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #177 = ADJCALLSTACKDOWN
  { 178,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #178 = ADJCALLSTACKUP
  { 179,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #179 = BuildPairF64Pseudo
  { 180,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #180 = PseudoAddTPRel
  { 181,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #181 = PseudoAtomicLoadNand32
  { 182,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #182 = PseudoAtomicLoadNand64
  { 183,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #183 = PseudoBR
  { 184,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList2, OperandInfo42, -1 ,nullptr },  // Inst #184 = PseudoBRIND
  { 185,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #185 = PseudoCALL
  { 186,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo43, -1 ,nullptr },  // Inst #186 = PseudoCALLIndirect
  { 187,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #187 = PseudoCALLReg
  { 188,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #188 = PseudoCmpXchg32
  { 189,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #189 = PseudoCmpXchg64
  { 190,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #190 = PseudoFLD
  { 191,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #191 = PseudoFLW
  { 192,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #192 = PseudoFSD
  { 193,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #193 = PseudoFSW
  { 194,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #194 = PseudoJump
  { 195,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #195 = PseudoLA
  { 196,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #196 = PseudoLA_TLS_GD
  { 197,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #197 = PseudoLA_TLS_IE
  { 198,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #198 = PseudoLB
  { 199,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #199 = PseudoLBU
  { 200,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #200 = PseudoLD
  { 201,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #201 = PseudoLH
  { 202,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #202 = PseudoLHU
  { 203,	2,	1,	32,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #203 = PseudoLI
  { 204,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #204 = PseudoLLA
  { 205,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #205 = PseudoLW
  { 206,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #206 = PseudoLWU
  { 207,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #207 = PseudoMaskedAtomicLoadAdd32
  { 208,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #208 = PseudoMaskedAtomicLoadMax32
  { 209,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #209 = PseudoMaskedAtomicLoadMin32
  { 210,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #210 = PseudoMaskedAtomicLoadNand32
  { 211,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #211 = PseudoMaskedAtomicLoadSub32
  { 212,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #212 = PseudoMaskedAtomicLoadUMax32
  { 213,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #213 = PseudoMaskedAtomicLoadUMin32
  { 214,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #214 = PseudoMaskedAtomicSwap32
  { 215,	7,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #215 = PseudoMaskedCmpXchg32
  { 216,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #216 = PseudoRET
  { 217,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #217 = PseudoSB
  { 218,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #218 = PseudoSD
  { 219,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #219 = PseudoSH
  { 220,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #220 = PseudoSW
  { 221,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #221 = PseudoTAIL
  { 222,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #222 = PseudoTAILIndirect
  { 223,	2,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #223 = ReadCycleWide
  { 224,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #224 = Select_FPR32_Using_CC_GPR
  { 225,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #225 = Select_FPR64_Using_CC_GPR
  { 226,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #226 = Select_GPR_Using_CC_GPR
  { 227,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #227 = SplitF64Pseudo
  { 228,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #228 = ADD
  { 229,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #229 = ADDI
  { 230,	3,	1,	4,	3,	0, 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #230 = ADDIW
  { 231,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #231 = ADDW
  { 232,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #232 = AMOADD_D
  { 233,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #233 = AMOADD_D_AQ
  { 234,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #234 = AMOADD_D_AQ_RL
  { 235,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #235 = AMOADD_D_RL
  { 236,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #236 = AMOADD_W
  { 237,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #237 = AMOADD_W_AQ
  { 238,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #238 = AMOADD_W_AQ_RL
  { 239,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #239 = AMOADD_W_RL
  { 240,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #240 = AMOAND_D
  { 241,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #241 = AMOAND_D_AQ
  { 242,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #242 = AMOAND_D_AQ_RL
  { 243,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #243 = AMOAND_D_RL
  { 244,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #244 = AMOAND_W
  { 245,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #245 = AMOAND_W_AQ
  { 246,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #246 = AMOAND_W_AQ_RL
  { 247,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #247 = AMOAND_W_RL
  { 248,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #248 = AMOMAXU_D
  { 249,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #249 = AMOMAXU_D_AQ
  { 250,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #250 = AMOMAXU_D_AQ_RL
  { 251,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #251 = AMOMAXU_D_RL
  { 252,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #252 = AMOMAXU_W
  { 253,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #253 = AMOMAXU_W_AQ
  { 254,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #254 = AMOMAXU_W_AQ_RL
  { 255,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #255 = AMOMAXU_W_RL
  { 256,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #256 = AMOMAX_D
  { 257,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #257 = AMOMAX_D_AQ
  { 258,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #258 = AMOMAX_D_AQ_RL
  { 259,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #259 = AMOMAX_D_RL
  { 260,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #260 = AMOMAX_W
  { 261,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #261 = AMOMAX_W_AQ
  { 262,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #262 = AMOMAX_W_AQ_RL
  { 263,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #263 = AMOMAX_W_RL
  { 264,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #264 = AMOMINU_D
  { 265,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #265 = AMOMINU_D_AQ
  { 266,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #266 = AMOMINU_D_AQ_RL
  { 267,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #267 = AMOMINU_D_RL
  { 268,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #268 = AMOMINU_W
  { 269,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #269 = AMOMINU_W_AQ
  { 270,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #270 = AMOMINU_W_AQ_RL
  { 271,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #271 = AMOMINU_W_RL
  { 272,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #272 = AMOMIN_D
  { 273,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #273 = AMOMIN_D_AQ
  { 274,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #274 = AMOMIN_D_AQ_RL
  { 275,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #275 = AMOMIN_D_RL
  { 276,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #276 = AMOMIN_W
  { 277,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #277 = AMOMIN_W_AQ
  { 278,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #278 = AMOMIN_W_AQ_RL
  { 279,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #279 = AMOMIN_W_RL
  { 280,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #280 = AMOOR_D
  { 281,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #281 = AMOOR_D_AQ
  { 282,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #282 = AMOOR_D_AQ_RL
  { 283,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #283 = AMOOR_D_RL
  { 284,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #284 = AMOOR_W
  { 285,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #285 = AMOOR_W_AQ
  { 286,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #286 = AMOOR_W_AQ_RL
  { 287,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #287 = AMOOR_W_RL
  { 288,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #288 = AMOSWAP_D
  { 289,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #289 = AMOSWAP_D_AQ
  { 290,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #290 = AMOSWAP_D_AQ_RL
  { 291,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #291 = AMOSWAP_D_RL
  { 292,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #292 = AMOSWAP_W
  { 293,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #293 = AMOSWAP_W_AQ
  { 294,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #294 = AMOSWAP_W_AQ_RL
  { 295,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #295 = AMOSWAP_W_RL
  { 296,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #296 = AMOXOR_D
  { 297,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #297 = AMOXOR_D_AQ
  { 298,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #298 = AMOXOR_D_AQ_RL
  { 299,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #299 = AMOXOR_D_RL
  { 300,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #300 = AMOXOR_W
  { 301,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #301 = AMOXOR_W_AQ
  { 302,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #302 = AMOXOR_W_AQ_RL
  { 303,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #303 = AMOXOR_W_RL
  { 304,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #304 = AND
  { 305,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #305 = ANDI
  { 306,	2,	1,	4,	7,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #306 = AUIPC
  { 307,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #307 = BEQ
  { 308,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #308 = BGE
  { 309,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #309 = BGEU
  { 310,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #310 = BLT
  { 311,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #311 = BLTU
  { 312,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #312 = BNE
  { 313,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #313 = CSRRC
  { 314,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #314 = CSRRCI
  { 315,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #315 = CSRRS
  { 316,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #316 = CSRRSI
  { 317,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #317 = CSRRW
  { 318,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #318 = CSRRWI
  { 319,	3,	1,	2,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #319 = C_ADD
  { 320,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #320 = C_ADDI
  { 321,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #321 = C_ADDI16SP
  { 322,	3,	1,	2,	2,	0, 0xbULL, ImplicitList1, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #322 = C_ADDI4SPN
  { 323,	3,	1,	2,	3,	0, 0x9ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #323 = C_ADDIW
  { 324,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #324 = C_ADDI_HINT_IMM_ZERO
  { 325,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #325 = C_ADDI_HINT_X0
  { 326,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #326 = C_ADDI_NOP
  { 327,	3,	1,	2,	4,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #327 = C_ADDW
  { 328,	3,	1,	2,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #328 = C_ADD_HINT
  { 329,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #329 = C_AND
  { 330,	3,	1,	2,	2,	0, 0xfULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #330 = C_ANDI
  { 331,	2,	0,	2,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #331 = C_BEQZ
  { 332,	2,	0,	2,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #332 = C_BNEZ
  { 333,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #333 = C_EBREAK
  { 334,	3,	1,	2,	11,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #334 = C_FLD
  { 335,	3,	1,	2,	11,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #335 = C_FLDSP
  { 336,	3,	1,	2,	12,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #336 = C_FLW
  { 337,	3,	1,	2,	12,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #337 = C_FLWSP
  { 338,	3,	0,	2,	13,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #338 = C_FSD
  { 339,	3,	0,	2,	13,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #339 = C_FSDSP
  { 340,	3,	0,	2,	14,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #340 = C_FSW
  { 341,	3,	0,	2,	14,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #341 = C_FSWSP
  { 342,	1,	0,	2,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #342 = C_J
  { 343,	1,	0,	2,	15,	0|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #343 = C_JAL
  { 344,	1,	0,	2,	16,	0|(1ULL<<MCID::Call), 0x8ULL, nullptr, ImplicitList2, OperandInfo77, -1 ,nullptr },  // Inst #344 = C_JALR
  { 345,	1,	0,	2,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x8ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #345 = C_JR
  { 346,	3,	1,	2,	18,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #346 = C_LD
  { 347,	3,	1,	2,	18,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #347 = C_LDSP
  { 348,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #348 = C_LI
  { 349,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #349 = C_LI_HINT
  { 350,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #350 = C_LUI
  { 351,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #351 = C_LUI_HINT
  { 352,	3,	1,	2,	19,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #352 = C_LW
  { 353,	3,	1,	2,	19,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #353 = C_LWSP
  { 354,	2,	1,	2,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #354 = C_MV
  { 355,	2,	1,	2,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #355 = C_MV_HINT
  { 356,	0,	0,	2,	20,	0, 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #356 = C_NOP
  { 357,	1,	0,	2,	20,	0, 0x9ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #357 = C_NOP_HINT
  { 358,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #358 = C_OR
  { 359,	3,	0,	2,	21,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #359 = C_SD
  { 360,	3,	0,	2,	21,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #360 = C_SDSP
  { 361,	3,	1,	2,	22,	0, 0x9ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #361 = C_SLLI
  { 362,	2,	1,	2,	22,	0, 0x9ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #362 = C_SLLI64_HINT
  { 363,	3,	1,	2,	22,	0, 0x9ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #363 = C_SLLI_HINT
  { 364,	3,	1,	2,	22,	0, 0xfULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #364 = C_SRAI
  { 365,	2,	1,	2,	22,	0, 0x9ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #365 = C_SRAI64_HINT
  { 366,	3,	1,	2,	22,	0, 0xfULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #366 = C_SRLI
  { 367,	2,	1,	2,	22,	0, 0x9ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #367 = C_SRLI64_HINT
  { 368,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #368 = C_SUB
  { 369,	3,	1,	2,	4,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #369 = C_SUBW
  { 370,	3,	0,	2,	23,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #370 = C_SW
  { 371,	3,	0,	2,	23,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #371 = C_SWSP
  { 372,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #372 = C_UNIMP
  { 373,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #373 = C_XOR
  { 374,	3,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #374 = DIV
  { 375,	3,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #375 = DIVU
  { 376,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #376 = DIVUW
  { 377,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #377 = DIVW
  { 378,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #378 = EBREAK
  { 379,	0,	0,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #379 = ECALL
  { 380,	4,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #380 = FADD_D
  { 381,	4,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #381 = FADD_S
  { 382,	2,	1,	4,	28,	0, 0x1ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #382 = FCLASS_D
  { 383,	2,	1,	4,	29,	0, 0x1ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #383 = FCLASS_S
  { 384,	3,	1,	4,	30,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #384 = FCVT_D_L
  { 385,	3,	1,	4,	30,	0, 0x1ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #385 = FCVT_D_LU
  { 386,	2,	1,	4,	31,	0, 0x1ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #386 = FCVT_D_S
  { 387,	2,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #387 = FCVT_D_W
  { 388,	2,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #388 = FCVT_D_WU
  { 389,	3,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #389 = FCVT_LU_D
  { 390,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #390 = FCVT_LU_S
  { 391,	3,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #391 = FCVT_L_D
  { 392,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #392 = FCVT_L_S
  { 393,	3,	1,	4,	35,	0, 0x1ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #393 = FCVT_S_D
  { 394,	3,	1,	4,	36,	0, 0x1ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #394 = FCVT_S_L
  { 395,	3,	1,	4,	36,	0, 0x1ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #395 = FCVT_S_LU
  { 396,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #396 = FCVT_S_W
  { 397,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #397 = FCVT_S_WU
  { 398,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #398 = FCVT_WU_D
  { 399,	3,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #399 = FCVT_WU_S
  { 400,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #400 = FCVT_W_D
  { 401,	3,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #401 = FCVT_W_S
  { 402,	4,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #402 = FDIV_D
  { 403,	4,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #403 = FDIV_S
  { 404,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #404 = FENCE
  { 405,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #405 = FENCE_I
  { 406,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #406 = FENCE_TSO
  { 407,	3,	1,	4,	41,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #407 = FEQ_D
  { 408,	3,	1,	4,	42,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #408 = FEQ_S
  { 409,	3,	1,	4,	11,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #409 = FLD
  { 410,	3,	1,	4,	41,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #410 = FLE_D
  { 411,	3,	1,	4,	42,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #411 = FLE_S
  { 412,	3,	1,	4,	41,	0, 0x1ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #412 = FLT_D
  { 413,	3,	1,	4,	42,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #413 = FLT_S
  { 414,	3,	1,	4,	12,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #414 = FLW
  { 415,	5,	1,	4,	43,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #415 = FMADD_D
  { 416,	5,	1,	4,	44,	0, 0x2ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #416 = FMADD_S
  { 417,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #417 = FMAX_D
  { 418,	3,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #418 = FMAX_S
  { 419,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #419 = FMIN_D
  { 420,	3,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #420 = FMIN_S
  { 421,	5,	1,	4,	45,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #421 = FMSUB_D
  { 422,	5,	1,	4,	46,	0, 0x2ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #422 = FMSUB_S
  { 423,	4,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #423 = FMUL_D
  { 424,	4,	1,	4,	47,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #424 = FMUL_S
  { 425,	2,	1,	4,	48,	0, 0x1ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #425 = FMV_D_X
  { 426,	2,	1,	4,	49,	0, 0x1ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #426 = FMV_W_X
  { 427,	2,	1,	4,	50,	0, 0x1ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #427 = FMV_X_D
  { 428,	2,	1,	4,	51,	0, 0x1ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #428 = FMV_X_W
  { 429,	5,	1,	4,	43,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #429 = FNMADD_D
  { 430,	5,	1,	4,	44,	0, 0x2ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #430 = FNMADD_S
  { 431,	5,	1,	4,	45,	0, 0x2ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #431 = FNMSUB_D
  { 432,	5,	1,	4,	46,	0, 0x2ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #432 = FNMSUB_S
  { 433,	3,	0,	4,	13,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #433 = FSD
  { 434,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #434 = FSGNJN_D
  { 435,	3,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #435 = FSGNJN_S
  { 436,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #436 = FSGNJX_D
  { 437,	3,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #437 = FSGNJX_S
  { 438,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #438 = FSGNJ_D
  { 439,	3,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #439 = FSGNJ_S
  { 440,	3,	1,	4,	52,	0, 0x1ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #440 = FSQRT_D
  { 441,	3,	1,	4,	52,	0, 0x1ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #441 = FSQRT_S
  { 442,	4,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #442 = FSUB_D
  { 443,	4,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #443 = FSUB_S
  { 444,	3,	0,	4,	14,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #444 = FSW
  { 445,	2,	1,	4,	15,	0|(1ULL<<MCID::Call), 0x7ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #445 = JAL
  { 446,	3,	1,	4,	16,	0|(1ULL<<MCID::Call), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #446 = JALR
  { 447,	3,	1,	4,	53,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #447 = LB
  { 448,	3,	1,	4,	53,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #448 = LBU
  { 449,	3,	1,	4,	18,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #449 = LD
  { 450,	3,	1,	4,	54,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #450 = LH
  { 451,	3,	1,	4,	54,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #451 = LHU
  { 452,	2,	1,	4,	55,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #452 = LR_D
  { 453,	2,	1,	4,	55,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #453 = LR_D_AQ
  { 454,	2,	1,	4,	55,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #454 = LR_D_AQ_RL
  { 455,	2,	1,	4,	55,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #455 = LR_D_RL
  { 456,	2,	1,	4,	56,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #456 = LR_W
  { 457,	2,	1,	4,	56,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #457 = LR_W_AQ
  { 458,	2,	1,	4,	56,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #458 = LR_W_AQ_RL
  { 459,	2,	1,	4,	56,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #459 = LR_W_RL
  { 460,	2,	1,	4,	7,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #460 = LUI
  { 461,	3,	1,	4,	19,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #461 = LW
  { 462,	3,	1,	4,	57,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #462 = LWU
  { 463,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #463 = MRET
  { 464,	3,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #464 = MUL
  { 465,	3,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #465 = MULH
  { 466,	3,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #466 = MULHSU
  { 467,	3,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #467 = MULHU
  { 468,	3,	1,	4,	59,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #468 = MULW
  { 469,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #469 = OR
  { 470,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #470 = ORI
  { 471,	3,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #471 = REM
  { 472,	3,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #472 = REMU
  { 473,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #473 = REMUW
  { 474,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #474 = REMW
  { 475,	3,	0,	4,	60,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #475 = SB
  { 476,	3,	1,	4,	61,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #476 = SC_D
  { 477,	3,	1,	4,	61,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #477 = SC_D_AQ
  { 478,	3,	1,	4,	61,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #478 = SC_D_AQ_RL
  { 479,	3,	1,	4,	61,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #479 = SC_D_RL
  { 480,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #480 = SC_W
  { 481,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #481 = SC_W_AQ
  { 482,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #482 = SC_W_AQ_RL
  { 483,	3,	1,	4,	62,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #483 = SC_W_RL
  { 484,	3,	0,	4,	21,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #484 = SD
  { 485,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #485 = SFENCE_VMA
  { 486,	3,	0,	4,	63,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #486 = SH
  { 487,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #487 = SLL
  { 488,	3,	1,	4,	22,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #488 = SLLI
  { 489,	3,	1,	4,	64,	0, 0x3ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #489 = SLLIW
  { 490,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #490 = SLLW
  { 491,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #491 = SLT
  { 492,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #492 = SLTI
  { 493,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #493 = SLTIU
  { 494,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #494 = SLTU
  { 495,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #495 = SRA
  { 496,	3,	1,	4,	22,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #496 = SRAI
  { 497,	3,	1,	4,	64,	0, 0x3ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #497 = SRAIW
  { 498,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #498 = SRAW
  { 499,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #499 = SRET
  { 500,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #500 = SRL
  { 501,	3,	1,	4,	22,	0, 0x3ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #501 = SRLI
  { 502,	3,	1,	4,	64,	0, 0x3ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #502 = SRLIW
  { 503,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #503 = SRLW
  { 504,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #504 = SUB
  { 505,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #505 = SUBW
  { 506,	3,	0,	4,	23,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #506 = SW
  { 507,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #507 = UNIMP
  { 508,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #508 = URET
  { 509,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #509 = WFI
  { 510,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #510 = XOR
  { 511,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #511 = XORI
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RISCVInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "C_ADDI_HINT_X0\0"
  /* 24 */ "PseudoMaskedAtomicLoadSub32\0"
  /* 52 */ "PseudoMaskedAtomicLoadAdd32\0"
  /* 80 */ "PseudoMaskedAtomicLoadNand32\0"
  /* 109 */ "PseudoAtomicLoadNand32\0"
  /* 132 */ "PseudoMaskedCmpXchg32\0"
  /* 154 */ "PseudoCmpXchg32\0"
  /* 170 */ "PseudoMaskedAtomicLoadUMin32\0"
  /* 199 */ "PseudoMaskedAtomicLoadMin32\0"
  /* 227 */ "PseudoMaskedAtomicSwap32\0"
  /* 252 */ "PseudoMaskedAtomicLoadUMax32\0"
  /* 281 */ "PseudoMaskedAtomicLoadMax32\0"
  /* 309 */ "G_FLOG2\0"
  /* 317 */ "G_FEXP2\0"
  /* 325 */ "PseudoAtomicLoadNand64\0"
  /* 348 */ "PseudoCmpXchg64\0"
  /* 364 */ "PseudoLLA\0"
  /* 374 */ "PseudoLA\0"
  /* 383 */ "G_FMA\0"
  /* 389 */ "SFENCE_VMA\0"
  /* 400 */ "SRA\0"
  /* 404 */ "PseudoLB\0"
  /* 413 */ "PseudoSB\0"
  /* 422 */ "G_FSUB\0"
  /* 429 */ "G_ATOMICRMW_FSUB\0"
  /* 446 */ "C_SUB\0"
  /* 452 */ "G_SUB\0"
  /* 458 */ "G_ATOMICRMW_SUB\0"
  /* 474 */ "G_INTRINSIC\0"
  /* 486 */ "G_FPTRUNC\0"
  /* 496 */ "G_INTRINSIC_TRUNC\0"
  /* 514 */ "G_TRUNC\0"
  /* 522 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 543 */ "G_DYN_STACKALLOC\0"
  /* 560 */ "AUIPC\0"
  /* 566 */ "CSRRC\0"
  /* 572 */ "G_FMAD\0"
  /* 579 */ "G_INDEXED_SEXTLOAD\0"
  /* 598 */ "G_SEXTLOAD\0"
  /* 609 */ "G_INDEXED_ZEXTLOAD\0"
  /* 628 */ "G_ZEXTLOAD\0"
  /* 639 */ "G_INDEXED_LOAD\0"
  /* 654 */ "G_LOAD\0"
  /* 661 */ "G_FADD\0"
  /* 668 */ "G_ATOMICRMW_FADD\0"
  /* 685 */ "C_ADD\0"
  /* 691 */ "G_ADD\0"
  /* 697 */ "G_PTR_ADD\0"
  /* 707 */ "G_ATOMICRMW_ADD\0"
  /* 723 */ "PseudoLA_TLS_GD\0"
  /* 739 */ "C_FLD\0"
  /* 745 */ "PseudoFLD\0"
  /* 755 */ "C_LD\0"
  /* 760 */ "PseudoLD\0"
  /* 769 */ "G_ATOMICRMW_NAND\0"
  /* 786 */ "C_AND\0"
  /* 792 */ "G_AND\0"
  /* 798 */ "G_ATOMICRMW_AND\0"
  /* 814 */ "LIFETIME_END\0"
  /* 827 */ "PseudoBRIND\0"
  /* 839 */ "G_BRCOND\0"
  /* 848 */ "G_INTRINSIC_ROUND\0"
  /* 866 */ "LOAD_STACK_GUARD\0"
  /* 883 */ "C_FSD\0"
  /* 889 */ "PseudoFSD\0"
  /* 899 */ "C_SD\0"
  /* 904 */ "PseudoSD\0"
  /* 913 */ "FSUB_D\0"
  /* 920 */ "FMSUB_D\0"
  /* 928 */ "FNMSUB_D\0"
  /* 937 */ "SC_D\0"
  /* 942 */ "FADD_D\0"
  /* 949 */ "FMADD_D\0"
  /* 957 */ "FNMADD_D\0"
  /* 966 */ "AMOADD_D\0"
  /* 975 */ "AMOAND_D\0"
  /* 984 */ "FLE_D\0"
  /* 990 */ "FSGNJ_D\0"
  /* 998 */ "FMUL_D\0"
  /* 1005 */ "FCVT_L_D\0"
  /* 1014 */ "FMIN_D\0"
  /* 1021 */ "AMOMIN_D\0"
  /* 1030 */ "FSGNJN_D\0"
  /* 1039 */ "AMOSWAP_D\0"
  /* 1049 */ "FEQ_D\0"
  /* 1055 */ "LR_D\0"
  /* 1060 */ "AMOOR_D\0"
  /* 1068 */ "AMOXOR_D\0"
  /* 1077 */ "FCLASS_D\0"
  /* 1086 */ "FCVT_S_D\0"
  /* 1095 */ "FLT_D\0"
  /* 1101 */ "FSQRT_D\0"
  /* 1109 */ "FCVT_LU_D\0"
  /* 1119 */ "AMOMINU_D\0"
  /* 1129 */ "FCVT_WU_D\0"
  /* 1139 */ "AMOMAXU_D\0"
  /* 1149 */ "FDIV_D\0"
  /* 1156 */ "FCVT_W_D\0"
  /* 1165 */ "FMAX_D\0"
  /* 1172 */ "AMOMAX_D\0"
  /* 1181 */ "FSGNJX_D\0"
  /* 1190 */ "FMV_X_D\0"
  /* 1198 */ "G_SSUBE\0"
  /* 1206 */ "G_USUBE\0"
  /* 1214 */ "G_FENCE\0"
  /* 1222 */ "REG_SEQUENCE\0"
  /* 1235 */ "G_SADDE\0"
  /* 1243 */ "G_UADDE\0"
  /* 1251 */ "G_FMINNUM_IEEE\0"
  /* 1266 */ "G_FMAXNUM_IEEE\0"
  /* 1281 */ "BGE\0"
  /* 1285 */ "PseudoLA_TLS_IE\0"
  /* 1301 */ "G_JUMP_TABLE\0"
  /* 1314 */ "BUNDLE\0"
  /* 1321 */ "BNE\0"
  /* 1325 */ "LOCAL_ESCAPE\0"
  /* 1338 */ "G_INDEXED_STORE\0"
  /* 1354 */ "G_STORE\0"
  /* 1362 */ "G_BITREVERSE\0"
  /* 1375 */ "DBG_VALUE\0"
  /* 1385 */ "G_GLOBAL_VALUE\0"
  /* 1400 */ "G_FCANONICALIZE\0"
  /* 1416 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1434 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1452 */ "G_IMPLICIT_DEF\0"
  /* 1467 */ "G_FNEG\0"
  /* 1474 */ "EXTRACT_SUBREG\0"
  /* 1489 */ "INSERT_SUBREG\0"
  /* 1503 */ "G_SEXT_INREG\0"
  /* 1516 */ "SUBREG_TO_REG\0"
  /* 1530 */ "G_ATOMIC_CMPXCHG\0"
  /* 1547 */ "G_ATOMICRMW_XCHG\0"
  /* 1564 */ "G_FLOG\0"
  /* 1571 */ "G_VAARG\0"
  /* 1579 */ "G_SMULH\0"
  /* 1587 */ "G_UMULH\0"
  /* 1595 */ "PseudoLH\0"
  /* 1604 */ "PseudoSH\0"
  /* 1613 */ "C_SRAI\0"
  /* 1620 */ "CSRRCI\0"
  /* 1627 */ "C_ADDI\0"
  /* 1634 */ "C_ANDI\0"
  /* 1641 */ "WFI\0"
  /* 1645 */ "G_PHI\0"
  /* 1651 */ "C_SLLI\0"
  /* 1658 */ "C_SRLI\0"
  /* 1665 */ "C_LI\0"
  /* 1670 */ "PseudoLI\0"
  /* 1679 */ "XORI\0"
  /* 1684 */ "G_FPTOSI\0"
  /* 1693 */ "CSRRSI\0"
  /* 1700 */ "SLTI\0"
  /* 1705 */ "C_LUI\0"
  /* 1711 */ "G_FPTOUI\0"
  /* 1720 */ "CSRRWI\0"
  /* 1727 */ "FENCE_I\0"
  /* 1735 */ "C_J\0"
  /* 1739 */ "C_EBREAK\0"
  /* 1748 */ "G_PTR_MASK\0"
  /* 1759 */ "C_JAL\0"
  /* 1765 */ "GC_LABEL\0"
  /* 1774 */ "DBG_LABEL\0"
  /* 1784 */ "EH_LABEL\0"
  /* 1793 */ "ANNOTATION_LABEL\0"
  /* 1810 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1830 */ "G_SHL\0"
  /* 1836 */ "PseudoTAIL\0"
  /* 1847 */ "G_FCEIL\0"
  /* 1855 */ "ECALL\0"
  /* 1861 */ "PATCHABLE_TAIL_CALL\0"
  /* 1881 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1908 */ "PATCHABLE_EVENT_CALL\0"
  /* 1929 */ "FENTRY_CALL\0"
  /* 1941 */ "PseudoCALL\0"
  /* 1952 */ "KILL\0"
  /* 1957 */ "SLL\0"
  /* 1961 */ "SRL\0"
  /* 1965 */ "SC_D_RL\0"
  /* 1973 */ "AMOADD_D_RL\0"
  /* 1985 */ "AMOAND_D_RL\0"
  /* 1997 */ "AMOMIN_D_RL\0"
  /* 2009 */ "AMOSWAP_D_RL\0"
  /* 2022 */ "LR_D_RL\0"
  /* 2030 */ "AMOOR_D_RL\0"
  /* 2041 */ "AMOXOR_D_RL\0"
  /* 2053 */ "AMOMINU_D_RL\0"
  /* 2066 */ "AMOMAXU_D_RL\0"
  /* 2079 */ "AMOMAX_D_RL\0"
  /* 2091 */ "SC_D_AQ_RL\0"
  /* 2102 */ "AMOADD_D_AQ_RL\0"
  /* 2117 */ "AMOAND_D_AQ_RL\0"
  /* 2132 */ "AMOMIN_D_AQ_RL\0"
  /* 2147 */ "AMOSWAP_D_AQ_RL\0"
  /* 2163 */ "LR_D_AQ_RL\0"
  /* 2174 */ "AMOOR_D_AQ_RL\0"
  /* 2188 */ "AMOXOR_D_AQ_RL\0"
  /* 2203 */ "AMOMINU_D_AQ_RL\0"
  /* 2219 */ "AMOMAXU_D_AQ_RL\0"
  /* 2235 */ "AMOMAX_D_AQ_RL\0"
  /* 2250 */ "SC_W_AQ_RL\0"
  /* 2261 */ "AMOADD_W_AQ_RL\0"
  /* 2276 */ "AMOAND_W_AQ_RL\0"
  /* 2291 */ "AMOMIN_W_AQ_RL\0"
  /* 2306 */ "AMOSWAP_W_AQ_RL\0"
  /* 2322 */ "LR_W_AQ_RL\0"
  /* 2333 */ "AMOOR_W_AQ_RL\0"
  /* 2347 */ "AMOXOR_W_AQ_RL\0"
  /* 2362 */ "AMOMINU_W_AQ_RL\0"
  /* 2378 */ "AMOMAXU_W_AQ_RL\0"
  /* 2394 */ "AMOMAX_W_AQ_RL\0"
  /* 2409 */ "SC_W_RL\0"
  /* 2417 */ "AMOADD_W_RL\0"
  /* 2429 */ "AMOAND_W_RL\0"
  /* 2441 */ "AMOMIN_W_RL\0"
  /* 2453 */ "AMOSWAP_W_RL\0"
  /* 2466 */ "LR_W_RL\0"
  /* 2474 */ "AMOOR_W_RL\0"
  /* 2485 */ "AMOXOR_W_RL\0"
  /* 2497 */ "AMOMINU_W_RL\0"
  /* 2510 */ "AMOMAXU_W_RL\0"
  /* 2523 */ "AMOMAX_W_RL\0"
  /* 2535 */ "G_FMUL\0"
  /* 2542 */ "G_MUL\0"
  /* 2548 */ "FCVT_D_L\0"
  /* 2557 */ "FCVT_S_L\0"
  /* 2566 */ "G_FREM\0"
  /* 2573 */ "G_SREM\0"
  /* 2580 */ "G_UREM\0"
  /* 2587 */ "INLINEASM\0"
  /* 2597 */ "G_FMINIMUM\0"
  /* 2608 */ "G_FMAXIMUM\0"
  /* 2619 */ "G_FMINNUM\0"
  /* 2629 */ "G_FMAXNUM\0"
  /* 2639 */ "G_FCOPYSIGN\0"
  /* 2651 */ "G_SMIN\0"
  /* 2658 */ "G_UMIN\0"
  /* 2665 */ "G_ATOMICRMW_UMIN\0"
  /* 2682 */ "G_ATOMICRMW_MIN\0"
  /* 2698 */ "G_FSIN\0"
  /* 2705 */ "CFI_INSTRUCTION\0"
  /* 2721 */ "C_ADDI4SPN\0"
  /* 2732 */ "ADJCALLSTACKDOWN\0"
  /* 2749 */ "G_SSUBO\0"
  /* 2757 */ "G_USUBO\0"
  /* 2765 */ "G_SADDO\0"
  /* 2773 */ "G_UADDO\0"
  /* 2781 */ "G_SMULO\0"
  /* 2789 */ "G_UMULO\0"
  /* 2797 */ "C_ADDI_HINT_IMM_ZERO\0"
  /* 2818 */ "FENCE_TSO\0"
  /* 2828 */ "STACKMAP\0"
  /* 2837 */ "G_BSWAP\0"
  /* 2845 */ "G_SITOFP\0"
  /* 2854 */ "G_UITOFP\0"
  /* 2863 */ "G_FCMP\0"
  /* 2870 */ "G_ICMP\0"
  /* 2877 */ "C_UNIMP\0"
  /* 2885 */ "C_NOP\0"
  /* 2891 */ "C_ADDI_NOP\0"
  /* 2902 */ "G_CTPOP\0"
  /* 2910 */ "PATCHABLE_OP\0"
  /* 2923 */ "FAULTING_OP\0"
  /* 2935 */ "C_ADDI16SP\0"
  /* 2946 */ "C_FLDSP\0"
  /* 2954 */ "C_LDSP\0"
  /* 2961 */ "C_FSDSP\0"
  /* 2969 */ "C_SDSP\0"
  /* 2976 */ "C_FLWSP\0"
  /* 2984 */ "C_LWSP\0"
  /* 2991 */ "C_FSWSP\0"
  /* 2999 */ "C_SWSP\0"
  /* 3006 */ "ADJCALLSTACKUP\0"
  /* 3021 */ "G_FEXP\0"
  /* 3028 */ "SC_D_AQ\0"
  /* 3036 */ "AMOADD_D_AQ\0"
  /* 3048 */ "AMOAND_D_AQ\0"
  /* 3060 */ "AMOMIN_D_AQ\0"
  /* 3072 */ "AMOSWAP_D_AQ\0"
  /* 3085 */ "LR_D_AQ\0"
  /* 3093 */ "AMOOR_D_AQ\0"
  /* 3104 */ "AMOXOR_D_AQ\0"
  /* 3116 */ "AMOMINU_D_AQ\0"
  /* 3129 */ "AMOMAXU_D_AQ\0"
  /* 3142 */ "AMOMAX_D_AQ\0"
  /* 3154 */ "SC_W_AQ\0"
  /* 3162 */ "AMOADD_W_AQ\0"
  /* 3174 */ "AMOAND_W_AQ\0"
  /* 3186 */ "AMOMIN_W_AQ\0"
  /* 3198 */ "AMOSWAP_W_AQ\0"
  /* 3211 */ "LR_W_AQ\0"
  /* 3219 */ "AMOOR_W_AQ\0"
  /* 3230 */ "AMOXOR_W_AQ\0"
  /* 3242 */ "AMOMINU_W_AQ\0"
  /* 3255 */ "AMOMAXU_W_AQ\0"
  /* 3268 */ "AMOMAX_W_AQ\0"
  /* 3280 */ "BEQ\0"
  /* 3284 */ "G_BR\0"
  /* 3289 */ "INLINEASM_BR\0"
  /* 3302 */ "PseudoBR\0"
  /* 3311 */ "G_BLOCK_ADDR\0"
  /* 3324 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 3349 */ "G_READCYCLECOUNTER\0"
  /* 3368 */ "G_READ_REGISTER\0"
  /* 3384 */ "G_WRITE_REGISTER\0"
  /* 3401 */ "G_ASHR\0"
  /* 3408 */ "G_LSHR\0"
  /* 3415 */ "C_JR\0"
  /* 3420 */ "C_JALR\0"
  /* 3427 */ "G_FFLOOR\0"
  /* 3436 */ "G_BUILD_VECTOR\0"
  /* 3451 */ "G_SHUFFLE_VECTOR\0"
  /* 3468 */ "C_XOR\0"
  /* 3474 */ "G_XOR\0"
  /* 3480 */ "G_ATOMICRMW_XOR\0"
  /* 3496 */ "C_OR\0"
  /* 3501 */ "G_OR\0"
  /* 3506 */ "G_ATOMICRMW_OR\0"
  /* 3521 */ "Select_FPR32_Using_CC_GPR\0"
  /* 3547 */ "Select_FPR64_Using_CC_GPR\0"
  /* 3573 */ "Select_GPR_Using_CC_GPR\0"
  /* 3597 */ "G_INTTOPTR\0"
  /* 3608 */ "G_FABS\0"
  /* 3615 */ "G_UNMERGE_VALUES\0"
  /* 3632 */ "G_MERGE_VALUES\0"
  /* 3647 */ "G_FCOS\0"
  /* 3654 */ "G_CONCAT_VECTORS\0"
  /* 3671 */ "CSRRS\0"
  /* 3677 */ "COPY_TO_REGCLASS\0"
  /* 3694 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3724 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 3751 */ "FSUB_S\0"
  /* 3758 */ "FMSUB_S\0"
  /* 3766 */ "FNMSUB_S\0"
  /* 3775 */ "FADD_S\0"
  /* 3782 */ "FMADD_S\0"
  /* 3790 */ "FNMADD_S\0"
  /* 3799 */ "FCVT_D_S\0"
  /* 3808 */ "FLE_S\0"
  /* 3814 */ "FSGNJ_S\0"
  /* 3822 */ "FMUL_S\0"
  /* 3829 */ "FCVT_L_S\0"
  /* 3838 */ "FMIN_S\0"
  /* 3845 */ "FSGNJN_S\0"
  /* 3854 */ "FEQ_S\0"
  /* 3860 */ "FCLASS_S\0"
  /* 3869 */ "FLT_S\0"
  /* 3875 */ "FSQRT_S\0"
  /* 3883 */ "FCVT_LU_S\0"
  /* 3893 */ "FCVT_WU_S\0"
  /* 3903 */ "FDIV_S\0"
  /* 3910 */ "FCVT_W_S\0"
  /* 3919 */ "FMAX_S\0"
  /* 3926 */ "FSGNJX_S\0"
  /* 3935 */ "G_EXTRACT\0"
  /* 3945 */ "G_SELECT\0"
  /* 3954 */ "G_BRINDIRECT\0"
  /* 3967 */ "MRET\0"
  /* 3972 */ "SRET\0"
  /* 3977 */ "URET\0"
  /* 3982 */ "PATCHABLE_RET\0"
  /* 3996 */ "PseudoRET\0"
  /* 4006 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 4030 */ "G_BRJT\0"
  /* 4037 */ "BLT\0"
  /* 4041 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 4062 */ "G_INSERT_VECTOR_ELT\0"
  /* 4082 */ "SLT\0"
  /* 4086 */ "G_FCONSTANT\0"
  /* 4098 */ "G_CONSTANT\0"
  /* 4109 */ "C_SRAI64_HINT\0"
  /* 4123 */ "C_SLLI64_HINT\0"
  /* 4137 */ "C_SRLI64_HINT\0"
  /* 4151 */ "C_ADD_HINT\0"
  /* 4162 */ "C_SLLI_HINT\0"
  /* 4174 */ "C_LI_HINT\0"
  /* 4184 */ "C_LUI_HINT\0"
  /* 4195 */ "C_NOP_HINT\0"
  /* 4206 */ "C_MV_HINT\0"
  /* 4216 */ "STATEPOINT\0"
  /* 4227 */ "PATCHPOINT\0"
  /* 4238 */ "G_PTRTOINT\0"
  /* 4249 */ "G_FRINT\0"
  /* 4257 */ "G_FNEARBYINT\0"
  /* 4270 */ "G_VASTART\0"
  /* 4280 */ "LIFETIME_START\0"
  /* 4295 */ "G_INSERT\0"
  /* 4304 */ "G_FSQRT\0"
  /* 4312 */ "G_BITCAST\0"
  /* 4322 */ "G_ADDRSPACE_CAST\0"
  /* 4339 */ "G_FPEXT\0"
  /* 4347 */ "G_SEXT\0"
  /* 4354 */ "G_ANYEXT\0"
  /* 4363 */ "G_ZEXT\0"
  /* 4370 */ "PseudoLBU\0"
  /* 4380 */ "BGEU\0"
  /* 4385 */ "MULHU\0"
  /* 4391 */ "PseudoLHU\0"
  /* 4401 */ "SLTIU\0"
  /* 4407 */ "FCVT_D_LU\0"
  /* 4417 */ "FCVT_S_LU\0"
  /* 4427 */ "REMU\0"
  /* 4432 */ "MULHSU\0"
  /* 4439 */ "BLTU\0"
  /* 4444 */ "SLTU\0"
  /* 4449 */ "DIVU\0"
  /* 4454 */ "PseudoLWU\0"
  /* 4464 */ "FCVT_D_WU\0"
  /* 4474 */ "FCVT_S_WU\0"
  /* 4484 */ "G_FDIV\0"
  /* 4491 */ "G_SDIV\0"
  /* 4498 */ "G_UDIV\0"
  /* 4505 */ "C_MV\0"
  /* 4510 */ "SRAW\0"
  /* 4515 */ "C_SUBW\0"
  /* 4522 */ "C_ADDW\0"
  /* 4529 */ "SRAIW\0"
  /* 4535 */ "C_ADDIW\0"
  /* 4543 */ "SLLIW\0"
  /* 4549 */ "SRLIW\0"
  /* 4555 */ "C_FLW\0"
  /* 4561 */ "PseudoFLW\0"
  /* 4571 */ "SLLW\0"
  /* 4576 */ "SRLW\0"
  /* 4581 */ "MULW\0"
  /* 4586 */ "C_LW\0"
  /* 4591 */ "PseudoLW\0"
  /* 4600 */ "REMW\0"
  /* 4605 */ "G_FPOW\0"
  /* 4612 */ "CSRRW\0"
  /* 4618 */ "C_FSW\0"
  /* 4624 */ "PseudoFSW\0"
  /* 4634 */ "C_SW\0"
  /* 4639 */ "PseudoSW\0"
  /* 4648 */ "REMUW\0"
  /* 4654 */ "DIVUW\0"
  /* 4660 */ "DIVW\0"
  /* 4665 */ "SC_W\0"
  /* 4670 */ "AMOADD_W\0"
  /* 4679 */ "AMOAND_W\0"
  /* 4688 */ "FCVT_D_W\0"
  /* 4697 */ "AMOMIN_W\0"
  /* 4706 */ "AMOSWAP_W\0"
  /* 4716 */ "LR_W\0"
  /* 4721 */ "AMOOR_W\0"
  /* 4729 */ "AMOXOR_W\0"
  /* 4738 */ "FCVT_S_W\0"
  /* 4747 */ "AMOMINU_W\0"
  /* 4757 */ "AMOMAXU_W\0"
  /* 4767 */ "AMOMAX_W\0"
  /* 4776 */ "FMV_X_W\0"
  /* 4784 */ "G_SMAX\0"
  /* 4791 */ "G_UMAX\0"
  /* 4798 */ "G_ATOMICRMW_UMAX\0"
  /* 4815 */ "G_ATOMICRMW_MAX\0"
  /* 4831 */ "G_FRAME_INDEX\0"
  /* 4845 */ "FMV_D_X\0"
  /* 4853 */ "FMV_W_X\0"
  /* 4861 */ "COPY\0"
  /* 4866 */ "C_BNEZ\0"
  /* 4873 */ "G_CTLZ\0"
  /* 4880 */ "C_BEQZ\0"
  /* 4887 */ "G_CTTZ\0"
  /* 4894 */ "ReadCycleWide\0"
  /* 4908 */ "PseudoCALLReg\0"
  /* 4922 */ "PseudoAddTPRel\0"
  /* 4937 */ "BuildPairF64Pseudo\0"
  /* 4956 */ "SplitF64Pseudo\0"
  /* 4971 */ "PseudoJump\0"
  /* 4982 */ "PseudoTAILIndirect\0"
  /* 5001 */ "PseudoCALLIndirect\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned RISCVInstrNameIndices[] = {
    1647U, 2587U, 3289U, 2705U, 1784U, 1765U, 1793U, 1952U, 
    1474U, 1489U, 1454U, 1516U, 3677U, 1375U, 1774U, 1222U, 
    4861U, 1314U, 4280U, 814U, 2828U, 1929U, 4227U, 866U, 
    4216U, 1325U, 2923U, 2910U, 3324U, 3982U, 4006U, 1861U, 
    1908U, 1881U, 1810U, 691U, 452U, 2542U, 4491U, 4498U, 
    2573U, 2580U, 792U, 3501U, 3474U, 1452U, 1645U, 4831U, 
    1385U, 3935U, 3615U, 4295U, 3632U, 3436U, 522U, 3654U, 
    4238U, 3597U, 4312U, 496U, 848U, 3349U, 654U, 598U, 
    628U, 639U, 579U, 609U, 1354U, 1338U, 3694U, 1530U, 
    1547U, 707U, 458U, 798U, 769U, 3506U, 3480U, 4815U, 
    2682U, 4798U, 2665U, 668U, 429U, 1214U, 839U, 3954U, 
    474U, 3724U, 4354U, 514U, 4098U, 4086U, 4270U, 1571U, 
    4347U, 1503U, 4363U, 1830U, 3408U, 3401U, 2870U, 2863U, 
    3945U, 2773U, 1243U, 2757U, 1206U, 2765U, 1235U, 2749U, 
    1198U, 2789U, 2781U, 1587U, 1579U, 661U, 422U, 2535U, 
    383U, 572U, 4484U, 2566U, 4605U, 3021U, 317U, 1564U, 
    309U, 0U, 1467U, 4339U, 486U, 1684U, 1711U, 2845U, 
    2854U, 3608U, 2639U, 1400U, 2619U, 2629U, 1251U, 1266U, 
    2597U, 2608U, 697U, 1748U, 2651U, 4784U, 2658U, 4791U, 
    3284U, 4030U, 4062U, 4041U, 3451U, 4887U, 1434U, 4873U, 
    1416U, 2902U, 2837U, 1362U, 1847U, 3647U, 2698U, 4304U, 
    3427U, 4249U, 4257U, 4322U, 3311U, 1301U, 543U, 3368U, 
    3384U, 2732U, 3006U, 4937U, 4922U, 109U, 325U, 3302U, 
    827U, 1941U, 5001U, 4908U, 154U, 348U, 745U, 4561U, 
    889U, 4624U, 4971U, 374U, 723U, 1285U, 404U, 4370U, 
    760U, 1595U, 4391U, 1670U, 364U, 4591U, 4454U, 52U, 
    281U, 199U, 80U, 24U, 252U, 170U, 227U, 132U, 
    3996U, 413U, 904U, 1604U, 4639U, 1836U, 4982U, 4894U, 
    3521U, 3547U, 3573U, 4956U, 664U, 1629U, 4537U, 4524U, 
    966U, 3036U, 2102U, 1973U, 4670U, 3162U, 2261U, 2417U, 
    975U, 3048U, 2117U, 1985U, 4679U, 3174U, 2276U, 2429U, 
    1139U, 3129U, 2219U, 2066U, 4757U, 3255U, 2378U, 2510U, 
    1172U, 3142U, 2235U, 2079U, 4767U, 3268U, 2394U, 2523U, 
    1119U, 3116U, 2203U, 2053U, 4747U, 3242U, 2362U, 2497U, 
    1021U, 3060U, 2132U, 1997U, 4697U, 3186U, 2291U, 2441U, 
    1060U, 3093U, 2174U, 2030U, 4721U, 3219U, 2333U, 2474U, 
    1039U, 3072U, 2147U, 2009U, 4706U, 3198U, 2306U, 2453U, 
    1068U, 3104U, 2188U, 2041U, 4729U, 3230U, 2347U, 2485U, 
    782U, 1636U, 560U, 3280U, 1281U, 4380U, 4037U, 4439U, 
    1321U, 566U, 1620U, 3671U, 1693U, 4612U, 1720U, 685U, 
    1627U, 2935U, 2721U, 4535U, 2797U, 9U, 2891U, 4522U, 
    4151U, 786U, 1634U, 4880U, 4866U, 1739U, 739U, 2946U, 
    4555U, 2976U, 883U, 2961U, 4618U, 2991U, 1735U, 1759U, 
    3420U, 3415U, 755U, 2954U, 1665U, 4174U, 1705U, 4184U, 
    4586U, 2984U, 4505U, 4206U, 2885U, 4195U, 3496U, 899U, 
    2969U, 1651U, 4123U, 4162U, 1613U, 4109U, 1658U, 4137U, 
    446U, 4515U, 4634U, 2999U, 2877U, 3468U, 4487U, 4449U, 
    4654U, 4660U, 1741U, 1855U, 942U, 3775U, 1077U, 3860U, 
    2548U, 4407U, 3799U, 4688U, 4464U, 1109U, 3883U, 1005U, 
    3829U, 1086U, 2557U, 4417U, 4738U, 4474U, 1129U, 3893U, 
    1156U, 3910U, 1149U, 3903U, 1216U, 1727U, 2818U, 1049U, 
    3854U, 741U, 984U, 3808U, 1095U, 3869U, 4557U, 949U, 
    3782U, 1165U, 3919U, 1014U, 3838U, 920U, 3758U, 998U, 
    3822U, 4845U, 4853U, 1190U, 4776U, 957U, 3790U, 928U, 
    3766U, 885U, 1030U, 3845U, 1181U, 3926U, 990U, 3814U, 
    1101U, 3875U, 913U, 3751U, 4620U, 1761U, 3422U, 410U, 
    4376U, 742U, 1584U, 4387U, 1055U, 3085U, 2163U, 2022U, 
    4716U, 3211U, 2322U, 2466U, 1707U, 4558U, 4460U, 3967U, 
    2538U, 1582U, 4432U, 4385U, 4581U, 3433U, 1680U, 2569U, 
    4427U, 4648U, 4600U, 419U, 937U, 3028U, 2091U, 1965U, 
    4665U, 3154U, 2250U, 2409U, 886U, 389U, 1610U, 1957U, 
    1653U, 4543U, 4571U, 4082U, 1700U, 4401U, 4444U, 400U, 
    1615U, 4529U, 4510U, 3972U, 1961U, 1660U, 4549U, 4576U, 
    425U, 4517U, 4621U, 2879U, 3977U, 1641U, 3470U, 1679U, 
};

static inline void InitRISCVMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, 512);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct RISCVGenInstrInfo : public TargetInstrInfo {
  explicit RISCVGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~RISCVGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc RISCVInsts[];
extern const unsigned RISCVInstrNameIndices[];
extern const char RISCVInstrNameData[];
RISCVGenInstrInfo::RISCVGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, 512);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace RISCV {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace RISCV
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace RISCV {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace RISCV
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace RISCV {
namespace OpTypes {
enum OperandType {
  bare_symbol = 0,
  c_lui_imm = 1,
  call_symbol = 2,
  csr_sysreg = 3,
  f32imm = 4,
  f64imm = 5,
  fencearg = 6,
  frmarg = 7,
  i16imm = 8,
  i1imm = 9,
  i32imm = 10,
  i64imm = 11,
  i8imm = 12,
  immzero = 13,
  ixlenimm = 14,
  ixlenimm_li = 15,
  pseudo_jump_symbol = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  simm10_lsb0000nonzero = 23,
  simm12 = 24,
  simm12_lsb0 = 25,
  simm13_lsb0 = 26,
  simm21_lsb0_jal = 27,
  simm6 = 28,
  simm6nonzero = 29,
  simm9_lsb0 = 30,
  tprel_add_symbol = 31,
  type0 = 32,
  type1 = 33,
  type2 = 34,
  type3 = 35,
  type4 = 36,
  type5 = 37,
  uimm10_lsb00nonzero = 38,
  uimm20_auipc = 39,
  uimm20_lui = 40,
  uimm5 = 41,
  uimm7_lsb00 = 42,
  uimm8_lsb00 = 43,
  uimm8_lsb000 = 44,
  uimm9_lsb000 = 45,
  uimmlog2xlen = 46,
  uimmlog2xlennonzero = 47,
  untyped_imm_0 = 48,
  GPRMemAtomic = 49,
  FPR32 = 50,
  FPR32C = 51,
  FPR64 = 52,
  FPR64C = 53,
  GPR = 54,
  GPRC = 55,
  GPRNoX0 = 56,
  GPRNoX0X2 = 57,
  GPRTC = 58,
  GPRX0 = 59,
  SP = 60,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace RISCV {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    36,
    38,
    39,
    39,
    39,
    39,
    39,
    39,
    41,
    44,
    44,
    47,
    50,
    53,
    56,
    59,
    62,
    65,
    68,
    71,
    74,
    75,
    76,
    78,
    80,
    83,
    85,
    89,
    91,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    108,
    110,
    112,
    114,
    119,
    124,
    129,
    131,
    136,
    141,
    145,
    148,
    151,
    154,
    157,
    160,
    163,
    166,
    169,
    172,
    175,
    178,
    181,
    184,
    186,
    188,
    189,
    190,
    191,
    193,
    195,
    197,
    199,
    200,
    203,
    205,
    208,
    210,
    213,
    216,
    219,
    223,
    227,
    231,
    235,
    240,
    244,
    249,
    253,
    258,
    262,
    267,
    271,
    275,
    278,
    281,
    284,
    287,
    290,
    294,
    298,
    301,
    304,
    307,
    309,
    311,
    313,
    315,
    317,
    319,
    321,
    323,
    325,
    327,
    329,
    331,
    333,
    336,
    338,
    341,
    344,
    347,
    350,
    353,
    356,
    359,
    362,
    365,
    368,
    371,
    374,
    375,
    378,
    382,
    385,
    389,
    391,
    393,
    395,
    397,
    399,
    401,
    403,
    405,
    407,
    409,
    411,
    413,
    415,
    417,
    419,
    421,
    423,
    426,
    428,
    430,
    432,
    434,
    437,
    441,
    446,
    451,
    452,
    454,
    455,
    456,
    458,
    464,
    470,
    473,
    476,
    479,
    482,
    484,
    486,
    488,
    490,
    492,
    494,
    496,
    498,
    500,
    502,
    504,
    506,
    508,
    514,
    522,
    530,
    536,
    542,
    549,
    556,
    562,
    569,
    569,
    572,
    575,
    578,
    581,
    582,
    583,
    585,
    591,
    597,
    603,
    606,
    609,
    612,
    615,
    618,
    621,
    624,
    627,
    630,
    633,
    636,
    639,
    642,
    645,
    648,
    651,
    654,
    657,
    660,
    663,
    666,
    669,
    672,
    675,
    678,
    681,
    684,
    687,
    690,
    693,
    696,
    699,
    702,
    705,
    708,
    711,
    714,
    717,
    720,
    723,
    726,
    729,
    732,
    735,
    738,
    741,
    744,
    747,
    750,
    753,
    756,
    759,
    762,
    765,
    768,
    771,
    774,
    777,
    780,
    783,
    786,
    789,
    792,
    795,
    798,
    801,
    804,
    807,
    810,
    813,
    816,
    819,
    822,
    825,
    828,
    831,
    834,
    837,
    840,
    842,
    845,
    848,
    851,
    854,
    857,
    860,
    863,
    866,
    869,
    872,
    875,
    878,
    881,
    884,
    887,
    890,
    893,
    896,
    899,
    902,
    905,
    908,
    911,
    914,
    916,
    918,
    918,
    921,
    924,
    927,
    930,
    933,
    936,
    939,
    942,
    943,
    944,
    945,
    946,
    949,
    952,
    954,
    956,
    958,
    960,
    963,
    966,
    968,
    970,
    970,
    971,
    974,
    977,
    980,
    983,
    985,
    988,
    991,
    993,
    996,
    998,
    1001,
    1004,
    1007,
    1010,
    1010,
    1013,
    1016,
    1019,
    1022,
    1025,
    1025,
    1025,
    1029,
    1033,
    1035,
    1037,
    1040,
    1043,
    1045,
    1047,
    1049,
    1052,
    1055,
    1058,
    1061,
    1064,
    1067,
    1070,
    1073,
    1076,
    1079,
    1082,
    1085,
    1088,
    1092,
    1096,
    1098,
    1098,
    1098,
    1101,
    1104,
    1107,
    1110,
    1113,
    1116,
    1119,
    1122,
    1127,
    1132,
    1135,
    1138,
    1141,
    1144,
    1149,
    1154,
    1158,
    1162,
    1164,
    1166,
    1168,
    1170,
    1175,
    1180,
    1185,
    1190,
    1193,
    1196,
    1199,
    1202,
    1205,
    1208,
    1211,
    1214,
    1217,
    1221,
    1225,
    1228,
    1230,
    1233,
    1236,
    1239,
    1242,
    1245,
    1248,
    1250,
    1252,
    1254,
    1256,
    1258,
    1260,
    1262,
    1264,
    1266,
    1269,
    1272,
    1274,
    1277,
    1280,
    1283,
    1286,
    1289,
    1292,
    1295,
    1298,
    1301,
    1304,
    1307,
    1310,
    1313,
    1316,
    1319,
    1322,
    1325,
    1328,
    1331,
    1334,
    1337,
    1339,
    1342,
    1345,
    1348,
    1351,
    1354,
    1357,
    1360,
    1363,
    1366,
    1369,
    1372,
    1375,
    1378,
    1380,
    1383,
    1386,
    1389,
    1392,
    1395,
    1398,
    1401,
    1401,
    1403,
    1405,
    1408,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    -1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::tprel_add_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::simm21_lsb0_jal, 
    OpTypes::GPR, OpTypes::simm12, 
    OpTypes::call_symbol, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::call_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::pseudo_jump_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::ixlenimm_li, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::bare_symbol, 
    OpTypes::call_symbol, 
    OpTypes::GPRTC, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::ixlenimm, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::uimm20_auipc, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::GPRNoX0, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::simm6nonzero, 
    OpTypes::SP, OpTypes::SP, OpTypes::simm10_lsb0000nonzero, 
    OpTypes::GPRC, OpTypes::SP, OpTypes::uimm10_lsb00nonzero, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::simm6, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::immzero, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::simm6nonzero, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::immzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::GPRNoX0, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::simm6, 
    OpTypes::GPRC, OpTypes::simm9_lsb0, 
    OpTypes::GPRC, OpTypes::simm9_lsb0, 
    /**/
    OpTypes::FPR64C, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::FPR64, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::FPR32C, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::FPR32, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::FPR64C, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::FPR64, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::FPR32C, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::FPR32, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::simm12_lsb0, 
    OpTypes::simm12_lsb0, 
    OpTypes::GPRNoX0, 
    OpTypes::GPRNoX0, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::GPRNoX0, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::GPRNoX0, OpTypes::simm6, 
    OpTypes::GPRX0, OpTypes::simm6, 
    OpTypes::GPRNoX0X2, OpTypes::c_lui_imm, 
    OpTypes::GPRX0, OpTypes::c_lui_imm, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::GPRNoX0, OpTypes::SP, OpTypes::uimm8_lsb00, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, 
    OpTypes::GPRX0, OpTypes::GPRNoX0, 
    /**/
    OpTypes::simm6nonzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm8_lsb000, 
    OpTypes::GPR, OpTypes::SP, OpTypes::uimm9_lsb000, 
    OpTypes::GPRNoX0, OpTypes::GPRNoX0, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPRX0, OpTypes::GPRX0, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimmlog2xlennonzero, 
    OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::uimm7_lsb00, 
    OpTypes::GPR, OpTypes::SP, OpTypes::uimm8_lsb00, 
    /**/
    OpTypes::GPRC, OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    /**/
    /**/
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::fencearg, OpTypes::fencearg, 
    /**/
    /**/
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::GPR, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, 
    OpTypes::FPR32, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::FPR64, 
    OpTypes::GPR, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::simm21_lsb0_jal, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, 
    OpTypes::GPR, OpTypes::uimm20_lui, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPRMemAtomic, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    /**/
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE


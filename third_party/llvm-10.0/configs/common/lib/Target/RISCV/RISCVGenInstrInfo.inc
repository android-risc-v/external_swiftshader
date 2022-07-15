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
    PREALLOCATED_SETUP	= 24,
    PREALLOCATED_ARG	= 25,
    STATEPOINT	= 26,
    LOCAL_ESCAPE	= 27,
    FAULTING_OP	= 28,
    PATCHABLE_OP	= 29,
    PATCHABLE_FUNCTION_ENTER	= 30,
    PATCHABLE_RET	= 31,
    PATCHABLE_FUNCTION_EXIT	= 32,
    PATCHABLE_TAIL_CALL	= 33,
    PATCHABLE_EVENT_CALL	= 34,
    PATCHABLE_TYPED_EVENT_CALL	= 35,
    ICALL_BRANCH_FUNNEL	= 36,
    G_ADD	= 37,
    G_SUB	= 38,
    G_MUL	= 39,
    G_SDIV	= 40,
    G_UDIV	= 41,
    G_SREM	= 42,
    G_UREM	= 43,
    G_AND	= 44,
    G_OR	= 45,
    G_XOR	= 46,
    G_IMPLICIT_DEF	= 47,
    G_PHI	= 48,
    G_FRAME_INDEX	= 49,
    G_GLOBAL_VALUE	= 50,
    G_EXTRACT	= 51,
    G_UNMERGE_VALUES	= 52,
    G_INSERT	= 53,
    G_MERGE_VALUES	= 54,
    G_BUILD_VECTOR	= 55,
    G_BUILD_VECTOR_TRUNC	= 56,
    G_CONCAT_VECTORS	= 57,
    G_PTRTOINT	= 58,
    G_INTTOPTR	= 59,
    G_BITCAST	= 60,
    G_FREEZE	= 61,
    G_INTRINSIC_TRUNC	= 62,
    G_INTRINSIC_ROUND	= 63,
    G_READCYCLECOUNTER	= 64,
    G_LOAD	= 65,
    G_SEXTLOAD	= 66,
    G_ZEXTLOAD	= 67,
    G_INDEXED_LOAD	= 68,
    G_INDEXED_SEXTLOAD	= 69,
    G_INDEXED_ZEXTLOAD	= 70,
    G_STORE	= 71,
    G_INDEXED_STORE	= 72,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 73,
    G_ATOMIC_CMPXCHG	= 74,
    G_ATOMICRMW_XCHG	= 75,
    G_ATOMICRMW_ADD	= 76,
    G_ATOMICRMW_SUB	= 77,
    G_ATOMICRMW_AND	= 78,
    G_ATOMICRMW_NAND	= 79,
    G_ATOMICRMW_OR	= 80,
    G_ATOMICRMW_XOR	= 81,
    G_ATOMICRMW_MAX	= 82,
    G_ATOMICRMW_MIN	= 83,
    G_ATOMICRMW_UMAX	= 84,
    G_ATOMICRMW_UMIN	= 85,
    G_ATOMICRMW_FADD	= 86,
    G_ATOMICRMW_FSUB	= 87,
    G_FENCE	= 88,
    G_BRCOND	= 89,
    G_BRINDIRECT	= 90,
    G_INTRINSIC	= 91,
    G_INTRINSIC_W_SIDE_EFFECTS	= 92,
    G_ANYEXT	= 93,
    G_TRUNC	= 94,
    G_CONSTANT	= 95,
    G_FCONSTANT	= 96,
    G_VASTART	= 97,
    G_VAARG	= 98,
    G_SEXT	= 99,
    G_SEXT_INREG	= 100,
    G_ZEXT	= 101,
    G_SHL	= 102,
    G_LSHR	= 103,
    G_ASHR	= 104,
    G_FSHL	= 105,
    G_FSHR	= 106,
    G_ICMP	= 107,
    G_FCMP	= 108,
    G_SELECT	= 109,
    G_UADDO	= 110,
    G_UADDE	= 111,
    G_USUBO	= 112,
    G_USUBE	= 113,
    G_SADDO	= 114,
    G_SADDE	= 115,
    G_SSUBO	= 116,
    G_SSUBE	= 117,
    G_UMULO	= 118,
    G_SMULO	= 119,
    G_UMULH	= 120,
    G_SMULH	= 121,
    G_UADDSAT	= 122,
    G_SADDSAT	= 123,
    G_USUBSAT	= 124,
    G_SSUBSAT	= 125,
    G_FADD	= 126,
    G_FSUB	= 127,
    G_FMUL	= 128,
    G_FMA	= 129,
    G_FMAD	= 130,
    G_FDIV	= 131,
    G_FREM	= 132,
    G_FPOW	= 133,
    G_FEXP	= 134,
    G_FEXP2	= 135,
    G_FLOG	= 136,
    G_FLOG2	= 137,
    G_FLOG10	= 138,
    G_FNEG	= 139,
    G_FPEXT	= 140,
    G_FPTRUNC	= 141,
    G_FPTOSI	= 142,
    G_FPTOUI	= 143,
    G_SITOFP	= 144,
    G_UITOFP	= 145,
    G_FABS	= 146,
    G_FCOPYSIGN	= 147,
    G_FCANONICALIZE	= 148,
    G_FMINNUM	= 149,
    G_FMAXNUM	= 150,
    G_FMINNUM_IEEE	= 151,
    G_FMAXNUM_IEEE	= 152,
    G_FMINIMUM	= 153,
    G_FMAXIMUM	= 154,
    G_PTR_ADD	= 155,
    G_PTRMASK	= 156,
    G_SMIN	= 157,
    G_SMAX	= 158,
    G_UMIN	= 159,
    G_UMAX	= 160,
    G_BR	= 161,
    G_BRJT	= 162,
    G_INSERT_VECTOR_ELT	= 163,
    G_EXTRACT_VECTOR_ELT	= 164,
    G_SHUFFLE_VECTOR	= 165,
    G_CTTZ	= 166,
    G_CTTZ_ZERO_UNDEF	= 167,
    G_CTLZ	= 168,
    G_CTLZ_ZERO_UNDEF	= 169,
    G_CTPOP	= 170,
    G_BSWAP	= 171,
    G_BITREVERSE	= 172,
    G_FCEIL	= 173,
    G_FCOS	= 174,
    G_FSIN	= 175,
    G_FSQRT	= 176,
    G_FFLOOR	= 177,
    G_FRINT	= 178,
    G_FNEARBYINT	= 179,
    G_ADDRSPACE_CAST	= 180,
    G_BLOCK_ADDR	= 181,
    G_JUMP_TABLE	= 182,
    G_DYN_STACKALLOC	= 183,
    G_STRICT_FADD	= 184,
    G_STRICT_FSUB	= 185,
    G_STRICT_FMUL	= 186,
    G_STRICT_FDIV	= 187,
    G_STRICT_FREM	= 188,
    G_STRICT_FMA	= 189,
    G_STRICT_FSQRT	= 190,
    G_READ_REGISTER	= 191,
    G_WRITE_REGISTER	= 192,
    ADJCALLSTACKDOWN	= 193,
    ADJCALLSTACKUP	= 194,
    BuildPairF64Pseudo	= 195,
    PseudoAddTPRel	= 196,
    PseudoAtomicLoadNand32	= 197,
    PseudoAtomicLoadNand64	= 198,
    PseudoBR	= 199,
    PseudoBRIND	= 200,
    PseudoCALL	= 201,
    PseudoCALLIndirect	= 202,
    PseudoCALLReg	= 203,
    PseudoCmpXchg32	= 204,
    PseudoCmpXchg64	= 205,
    PseudoFLD	= 206,
    PseudoFLW	= 207,
    PseudoFSD	= 208,
    PseudoFSW	= 209,
    PseudoJump	= 210,
    PseudoLA	= 211,
    PseudoLA_TLS_GD	= 212,
    PseudoLA_TLS_IE	= 213,
    PseudoLB	= 214,
    PseudoLBU	= 215,
    PseudoLD	= 216,
    PseudoLH	= 217,
    PseudoLHU	= 218,
    PseudoLI	= 219,
    PseudoLLA	= 220,
    PseudoLW	= 221,
    PseudoLWU	= 222,
    PseudoMaskedAtomicLoadAdd32	= 223,
    PseudoMaskedAtomicLoadMax32	= 224,
    PseudoMaskedAtomicLoadMin32	= 225,
    PseudoMaskedAtomicLoadNand32	= 226,
    PseudoMaskedAtomicLoadSub32	= 227,
    PseudoMaskedAtomicLoadUMax32	= 228,
    PseudoMaskedAtomicLoadUMin32	= 229,
    PseudoMaskedAtomicSwap32	= 230,
    PseudoMaskedCmpXchg32	= 231,
    PseudoRET	= 232,
    PseudoSB	= 233,
    PseudoSD	= 234,
    PseudoSH	= 235,
    PseudoSW	= 236,
    PseudoTAIL	= 237,
    PseudoTAILIndirect	= 238,
    ReadCycleWide	= 239,
    Select_FPR32_Using_CC_GPR	= 240,
    Select_FPR64_Using_CC_GPR	= 241,
    Select_GPR_Using_CC_GPR	= 242,
    SplitF64Pseudo	= 243,
    ADD	= 244,
    ADDI	= 245,
    ADDIW	= 246,
    ADDIWU	= 247,
    ADDUW	= 248,
    ADDW	= 249,
    ADDWU	= 250,
    AMOADD_D	= 251,
    AMOADD_D_AQ	= 252,
    AMOADD_D_AQ_RL	= 253,
    AMOADD_D_RL	= 254,
    AMOADD_W	= 255,
    AMOADD_W_AQ	= 256,
    AMOADD_W_AQ_RL	= 257,
    AMOADD_W_RL	= 258,
    AMOAND_D	= 259,
    AMOAND_D_AQ	= 260,
    AMOAND_D_AQ_RL	= 261,
    AMOAND_D_RL	= 262,
    AMOAND_W	= 263,
    AMOAND_W_AQ	= 264,
    AMOAND_W_AQ_RL	= 265,
    AMOAND_W_RL	= 266,
    AMOMAXU_D	= 267,
    AMOMAXU_D_AQ	= 268,
    AMOMAXU_D_AQ_RL	= 269,
    AMOMAXU_D_RL	= 270,
    AMOMAXU_W	= 271,
    AMOMAXU_W_AQ	= 272,
    AMOMAXU_W_AQ_RL	= 273,
    AMOMAXU_W_RL	= 274,
    AMOMAX_D	= 275,
    AMOMAX_D_AQ	= 276,
    AMOMAX_D_AQ_RL	= 277,
    AMOMAX_D_RL	= 278,
    AMOMAX_W	= 279,
    AMOMAX_W_AQ	= 280,
    AMOMAX_W_AQ_RL	= 281,
    AMOMAX_W_RL	= 282,
    AMOMINU_D	= 283,
    AMOMINU_D_AQ	= 284,
    AMOMINU_D_AQ_RL	= 285,
    AMOMINU_D_RL	= 286,
    AMOMINU_W	= 287,
    AMOMINU_W_AQ	= 288,
    AMOMINU_W_AQ_RL	= 289,
    AMOMINU_W_RL	= 290,
    AMOMIN_D	= 291,
    AMOMIN_D_AQ	= 292,
    AMOMIN_D_AQ_RL	= 293,
    AMOMIN_D_RL	= 294,
    AMOMIN_W	= 295,
    AMOMIN_W_AQ	= 296,
    AMOMIN_W_AQ_RL	= 297,
    AMOMIN_W_RL	= 298,
    AMOOR_D	= 299,
    AMOOR_D_AQ	= 300,
    AMOOR_D_AQ_RL	= 301,
    AMOOR_D_RL	= 302,
    AMOOR_W	= 303,
    AMOOR_W_AQ	= 304,
    AMOOR_W_AQ_RL	= 305,
    AMOOR_W_RL	= 306,
    AMOSWAP_D	= 307,
    AMOSWAP_D_AQ	= 308,
    AMOSWAP_D_AQ_RL	= 309,
    AMOSWAP_D_RL	= 310,
    AMOSWAP_W	= 311,
    AMOSWAP_W_AQ	= 312,
    AMOSWAP_W_AQ_RL	= 313,
    AMOSWAP_W_RL	= 314,
    AMOXOR_D	= 315,
    AMOXOR_D_AQ	= 316,
    AMOXOR_D_AQ_RL	= 317,
    AMOXOR_D_RL	= 318,
    AMOXOR_W	= 319,
    AMOXOR_W_AQ	= 320,
    AMOXOR_W_AQ_RL	= 321,
    AMOXOR_W_RL	= 322,
    AND	= 323,
    ANDI	= 324,
    ANDN	= 325,
    AUIPC	= 326,
    BDEP	= 327,
    BDEPW	= 328,
    BEQ	= 329,
    BEXT	= 330,
    BEXTW	= 331,
    BFP	= 332,
    BFPW	= 333,
    BGE	= 334,
    BGEU	= 335,
    BLT	= 336,
    BLTU	= 337,
    BMATFLIP	= 338,
    BMATOR	= 339,
    BMATXOR	= 340,
    BNE	= 341,
    CLMUL	= 342,
    CLMULH	= 343,
    CLMULHW	= 344,
    CLMULR	= 345,
    CLMULRW	= 346,
    CLMULW	= 347,
    CLZ	= 348,
    CLZW	= 349,
    CMIX	= 350,
    CMOV	= 351,
    CRC32B	= 352,
    CRC32CB	= 353,
    CRC32CD	= 354,
    CRC32CH	= 355,
    CRC32CW	= 356,
    CRC32D	= 357,
    CRC32H	= 358,
    CRC32W	= 359,
    CSRRC	= 360,
    CSRRCI	= 361,
    CSRRS	= 362,
    CSRRSI	= 363,
    CSRRW	= 364,
    CSRRWI	= 365,
    CTZ	= 366,
    CTZW	= 367,
    C_ADD	= 368,
    C_ADDI	= 369,
    C_ADDI16SP	= 370,
    C_ADDI4SPN	= 371,
    C_ADDIW	= 372,
    C_ADDI_HINT_IMM_ZERO	= 373,
    C_ADDI_HINT_X0	= 374,
    C_ADDI_NOP	= 375,
    C_ADDW	= 376,
    C_ADD_HINT	= 377,
    C_AND	= 378,
    C_ANDI	= 379,
    C_BEQZ	= 380,
    C_BNEZ	= 381,
    C_EBREAK	= 382,
    C_FLD	= 383,
    C_FLDSP	= 384,
    C_FLW	= 385,
    C_FLWSP	= 386,
    C_FSD	= 387,
    C_FSDSP	= 388,
    C_FSW	= 389,
    C_FSWSP	= 390,
    C_J	= 391,
    C_JAL	= 392,
    C_JALR	= 393,
    C_JR	= 394,
    C_LD	= 395,
    C_LDSP	= 396,
    C_LI	= 397,
    C_LI_HINT	= 398,
    C_LUI	= 399,
    C_LUI_HINT	= 400,
    C_LW	= 401,
    C_LWSP	= 402,
    C_MV	= 403,
    C_MV_HINT	= 404,
    C_NEG	= 405,
    C_NOP	= 406,
    C_NOP_HINT	= 407,
    C_NOT	= 408,
    C_OR	= 409,
    C_SD	= 410,
    C_SDSP	= 411,
    C_SLLI	= 412,
    C_SLLI64_HINT	= 413,
    C_SLLI_HINT	= 414,
    C_SRAI	= 415,
    C_SRAI64_HINT	= 416,
    C_SRLI	= 417,
    C_SRLI64_HINT	= 418,
    C_SUB	= 419,
    C_SUBW	= 420,
    C_SW	= 421,
    C_SWSP	= 422,
    C_UNIMP	= 423,
    C_XOR	= 424,
    C_ZEXTW	= 425,
    DIV	= 426,
    DIVU	= 427,
    DIVUW	= 428,
    DIVW	= 429,
    DRET	= 430,
    EBREAK	= 431,
    ECALL	= 432,
    FADD_D	= 433,
    FADD_S	= 434,
    FCLASS_D	= 435,
    FCLASS_S	= 436,
    FCVT_D_L	= 437,
    FCVT_D_LU	= 438,
    FCVT_D_S	= 439,
    FCVT_D_W	= 440,
    FCVT_D_WU	= 441,
    FCVT_LU_D	= 442,
    FCVT_LU_S	= 443,
    FCVT_L_D	= 444,
    FCVT_L_S	= 445,
    FCVT_S_D	= 446,
    FCVT_S_L	= 447,
    FCVT_S_LU	= 448,
    FCVT_S_W	= 449,
    FCVT_S_WU	= 450,
    FCVT_WU_D	= 451,
    FCVT_WU_S	= 452,
    FCVT_W_D	= 453,
    FCVT_W_S	= 454,
    FDIV_D	= 455,
    FDIV_S	= 456,
    FENCE	= 457,
    FENCE_I	= 458,
    FENCE_TSO	= 459,
    FEQ_D	= 460,
    FEQ_S	= 461,
    FLD	= 462,
    FLE_D	= 463,
    FLE_S	= 464,
    FLT_D	= 465,
    FLT_S	= 466,
    FLW	= 467,
    FMADD_D	= 468,
    FMADD_S	= 469,
    FMAX_D	= 470,
    FMAX_S	= 471,
    FMIN_D	= 472,
    FMIN_S	= 473,
    FMSUB_D	= 474,
    FMSUB_S	= 475,
    FMUL_D	= 476,
    FMUL_S	= 477,
    FMV_D_X	= 478,
    FMV_W_X	= 479,
    FMV_X_D	= 480,
    FMV_X_W	= 481,
    FNMADD_D	= 482,
    FNMADD_S	= 483,
    FNMSUB_D	= 484,
    FNMSUB_S	= 485,
    FSD	= 486,
    FSGNJN_D	= 487,
    FSGNJN_S	= 488,
    FSGNJX_D	= 489,
    FSGNJX_S	= 490,
    FSGNJ_D	= 491,
    FSGNJ_S	= 492,
    FSL	= 493,
    FSLW	= 494,
    FSQRT_D	= 495,
    FSQRT_S	= 496,
    FSR	= 497,
    FSRI	= 498,
    FSRIW	= 499,
    FSRW	= 500,
    FSUB_D	= 501,
    FSUB_S	= 502,
    FSW	= 503,
    GORC	= 504,
    GORCI	= 505,
    GORCIW	= 506,
    GORCW	= 507,
    GREV	= 508,
    GREVI	= 509,
    GREVIW	= 510,
    GREVW	= 511,
    JAL	= 512,
    JALR	= 513,
    LB	= 514,
    LBU	= 515,
    LD	= 516,
    LH	= 517,
    LHU	= 518,
    LR_D	= 519,
    LR_D_AQ	= 520,
    LR_D_AQ_RL	= 521,
    LR_D_RL	= 522,
    LR_W	= 523,
    LR_W_AQ	= 524,
    LR_W_AQ_RL	= 525,
    LR_W_RL	= 526,
    LUI	= 527,
    LW	= 528,
    LWU	= 529,
    MAX	= 530,
    MAXU	= 531,
    MIN	= 532,
    MINU	= 533,
    MRET	= 534,
    MUL	= 535,
    MULH	= 536,
    MULHSU	= 537,
    MULHU	= 538,
    MULW	= 539,
    OR	= 540,
    ORI	= 541,
    ORN	= 542,
    PACK	= 543,
    PACKH	= 544,
    PACKU	= 545,
    PACKUW	= 546,
    PACKW	= 547,
    PCNT	= 548,
    PCNTW	= 549,
    REM	= 550,
    REMU	= 551,
    REMUW	= 552,
    REMW	= 553,
    ROL	= 554,
    ROLW	= 555,
    ROR	= 556,
    RORI	= 557,
    RORIW	= 558,
    RORW	= 559,
    SB	= 560,
    SBCLR	= 561,
    SBCLRI	= 562,
    SBCLRIW	= 563,
    SBCLRW	= 564,
    SBEXT	= 565,
    SBEXTI	= 566,
    SBEXTW	= 567,
    SBINV	= 568,
    SBINVI	= 569,
    SBINVIW	= 570,
    SBINVW	= 571,
    SBSET	= 572,
    SBSETI	= 573,
    SBSETIW	= 574,
    SBSETW	= 575,
    SC_D	= 576,
    SC_D_AQ	= 577,
    SC_D_AQ_RL	= 578,
    SC_D_RL	= 579,
    SC_W	= 580,
    SC_W_AQ	= 581,
    SC_W_AQ_RL	= 582,
    SC_W_RL	= 583,
    SD	= 584,
    SEXTB	= 585,
    SEXTH	= 586,
    SFENCE_VMA	= 587,
    SH	= 588,
    SHFL	= 589,
    SHFLI	= 590,
    SHFLW	= 591,
    SLL	= 592,
    SLLI	= 593,
    SLLIUW	= 594,
    SLLIW	= 595,
    SLLW	= 596,
    SLO	= 597,
    SLOI	= 598,
    SLOIW	= 599,
    SLOW	= 600,
    SLT	= 601,
    SLTI	= 602,
    SLTIU	= 603,
    SLTU	= 604,
    SRA	= 605,
    SRAI	= 606,
    SRAIW	= 607,
    SRAW	= 608,
    SRET	= 609,
    SRL	= 610,
    SRLI	= 611,
    SRLIW	= 612,
    SRLW	= 613,
    SRO	= 614,
    SROI	= 615,
    SROIW	= 616,
    SROW	= 617,
    SUB	= 618,
    SUBUW	= 619,
    SUBW	= 620,
    SUBWU	= 621,
    SW	= 622,
    UNIMP	= 623,
    UNSHFL	= 624,
    UNSHFLI	= 625,
    UNSHFLW	= 626,
    URET	= 627,
    VAADDU_VV	= 628,
    VAADDU_VX	= 629,
    VAADD_VV	= 630,
    VAADD_VX	= 631,
    VADC_VIM	= 632,
    VADC_VVM	= 633,
    VADC_VXM	= 634,
    VADD_VI	= 635,
    VADD_VV	= 636,
    VADD_VX	= 637,
    VAND_VI	= 638,
    VAND_VV	= 639,
    VAND_VX	= 640,
    VASUBU_VV	= 641,
    VASUBU_VX	= 642,
    VASUB_VV	= 643,
    VASUB_VX	= 644,
    VCOMPRESS_VM	= 645,
    VDIVU_VV	= 646,
    VDIVU_VX	= 647,
    VDIV_VV	= 648,
    VDIV_VX	= 649,
    VFADD_VF	= 650,
    VFADD_VV	= 651,
    VFCLASS_V	= 652,
    VFCVT_F_XU_V	= 653,
    VFCVT_F_X_V	= 654,
    VFCVT_XU_F_V	= 655,
    VFCVT_X_F_V	= 656,
    VFDIV_VF	= 657,
    VFDIV_VV	= 658,
    VFIRST_M	= 659,
    VFMACC_VF	= 660,
    VFMACC_VV	= 661,
    VFMADD_VF	= 662,
    VFMADD_VV	= 663,
    VFMAX_VF	= 664,
    VFMAX_VV	= 665,
    VFMERGE_VFM	= 666,
    VFMIN_VF	= 667,
    VFMIN_VV	= 668,
    VFMSAC_VF	= 669,
    VFMSAC_VV	= 670,
    VFMSUB_VF	= 671,
    VFMSUB_VV	= 672,
    VFMUL_VF	= 673,
    VFMUL_VV	= 674,
    VFMV_F_S	= 675,
    VFMV_S_F	= 676,
    VFMV_V_F	= 677,
    VFNCVT_F_F_W	= 678,
    VFNCVT_F_XU_W	= 679,
    VFNCVT_F_X_W	= 680,
    VFNCVT_ROD_F_F_W	= 681,
    VFNCVT_XU_F_W	= 682,
    VFNCVT_X_F_W	= 683,
    VFNMACC_VF	= 684,
    VFNMACC_VV	= 685,
    VFNMADD_VF	= 686,
    VFNMADD_VV	= 687,
    VFNMSAC_VF	= 688,
    VFNMSAC_VV	= 689,
    VFNMSUB_VF	= 690,
    VFNMSUB_VV	= 691,
    VFRDIV_VF	= 692,
    VFREDMAX_VS	= 693,
    VFREDMIN_VS	= 694,
    VFREDOSUM_VS	= 695,
    VFREDSUM_VS	= 696,
    VFRSUB_VF	= 697,
    VFSGNJN_VF	= 698,
    VFSGNJN_VV	= 699,
    VFSGNJX_VF	= 700,
    VFSGNJX_VV	= 701,
    VFSGNJ_VF	= 702,
    VFSGNJ_VV	= 703,
    VFSQRT_V	= 704,
    VFSUB_VF	= 705,
    VFSUB_VV	= 706,
    VFWADD_VF	= 707,
    VFWADD_VV	= 708,
    VFWADD_WF	= 709,
    VFWADD_WV	= 710,
    VFWCVT_F_F_V	= 711,
    VFWCVT_F_XU_V	= 712,
    VFWCVT_F_X_V	= 713,
    VFWCVT_XU_F_V	= 714,
    VFWCVT_X_F_V	= 715,
    VFWMACC_VF	= 716,
    VFWMACC_VV	= 717,
    VFWMSAC_VF	= 718,
    VFWMSAC_VV	= 719,
    VFWMUL_VF	= 720,
    VFWMUL_VV	= 721,
    VFWNMACC_VF	= 722,
    VFWNMACC_VV	= 723,
    VFWNMSAC_VF	= 724,
    VFWNMSAC_VV	= 725,
    VFWREDOSUM_VS	= 726,
    VFWREDSUM_VS	= 727,
    VFWSUB_VF	= 728,
    VFWSUB_VV	= 729,
    VFWSUB_WF	= 730,
    VFWSUB_WV	= 731,
    VID_V	= 732,
    VIOTA_M	= 733,
    VL1R_V	= 734,
    VLBFF_V	= 735,
    VLBUFF_V	= 736,
    VLBU_V	= 737,
    VLB_V	= 738,
    VLEFF_V	= 739,
    VLE_V	= 740,
    VLHFF_V	= 741,
    VLHUFF_V	= 742,
    VLHU_V	= 743,
    VLH_V	= 744,
    VLSBU_V	= 745,
    VLSB_V	= 746,
    VLSE_V	= 747,
    VLSHU_V	= 748,
    VLSH_V	= 749,
    VLSWU_V	= 750,
    VLSW_V	= 751,
    VLWFF_V	= 752,
    VLWUFF_V	= 753,
    VLWU_V	= 754,
    VLW_V	= 755,
    VLXBU_V	= 756,
    VLXB_V	= 757,
    VLXE_V	= 758,
    VLXHU_V	= 759,
    VLXH_V	= 760,
    VLXWU_V	= 761,
    VLXW_V	= 762,
    VMACC_VV	= 763,
    VMACC_VX	= 764,
    VMADC_VI	= 765,
    VMADC_VIM	= 766,
    VMADC_VV	= 767,
    VMADC_VVM	= 768,
    VMADC_VX	= 769,
    VMADC_VXM	= 770,
    VMADD_VV	= 771,
    VMADD_VX	= 772,
    VMANDNOT_MM	= 773,
    VMAND_MM	= 774,
    VMAXU_VV	= 775,
    VMAXU_VX	= 776,
    VMAX_VV	= 777,
    VMAX_VX	= 778,
    VMERGE_VIM	= 779,
    VMERGE_VVM	= 780,
    VMERGE_VXM	= 781,
    VMFEQ_VF	= 782,
    VMFEQ_VV	= 783,
    VMFGE_VF	= 784,
    VMFGT_VF	= 785,
    VMFLE_VF	= 786,
    VMFLE_VV	= 787,
    VMFLT_VF	= 788,
    VMFLT_VV	= 789,
    VMFNE_VF	= 790,
    VMFNE_VV	= 791,
    VMINU_VV	= 792,
    VMINU_VX	= 793,
    VMIN_VV	= 794,
    VMIN_VX	= 795,
    VMNAND_MM	= 796,
    VMNOR_MM	= 797,
    VMORNOT_MM	= 798,
    VMOR_MM	= 799,
    VMSBC_VV	= 800,
    VMSBC_VVM	= 801,
    VMSBC_VX	= 802,
    VMSBC_VXM	= 803,
    VMSBF_M	= 804,
    VMSEQ_VI	= 805,
    VMSEQ_VV	= 806,
    VMSEQ_VX	= 807,
    VMSGTU_VI	= 808,
    VMSGTU_VX	= 809,
    VMSGT_VI	= 810,
    VMSGT_VX	= 811,
    VMSIF_M	= 812,
    VMSLEU_VI	= 813,
    VMSLEU_VV	= 814,
    VMSLEU_VX	= 815,
    VMSLE_VI	= 816,
    VMSLE_VV	= 817,
    VMSLE_VX	= 818,
    VMSLTU_VV	= 819,
    VMSLTU_VX	= 820,
    VMSLT_VV	= 821,
    VMSLT_VX	= 822,
    VMSNE_VI	= 823,
    VMSNE_VV	= 824,
    VMSNE_VX	= 825,
    VMSOF_M	= 826,
    VMULHSU_VV	= 827,
    VMULHSU_VX	= 828,
    VMULHU_VV	= 829,
    VMULHU_VX	= 830,
    VMULH_VV	= 831,
    VMULH_VX	= 832,
    VMUL_VV	= 833,
    VMUL_VX	= 834,
    VMV1R_V	= 835,
    VMV2R_V	= 836,
    VMV4R_V	= 837,
    VMV8R_V	= 838,
    VMV_S_X	= 839,
    VMV_V_I	= 840,
    VMV_V_V	= 841,
    VMV_V_X	= 842,
    VMV_X_S	= 843,
    VMXNOR_MM	= 844,
    VMXOR_MM	= 845,
    VNCLIPU_WI	= 846,
    VNCLIPU_WV	= 847,
    VNCLIPU_WX	= 848,
    VNCLIP_WI	= 849,
    VNCLIP_WV	= 850,
    VNCLIP_WX	= 851,
    VNMSAC_VV	= 852,
    VNMSAC_VX	= 853,
    VNMSUB_VV	= 854,
    VNMSUB_VX	= 855,
    VNSRA_WI	= 856,
    VNSRA_WV	= 857,
    VNSRA_WX	= 858,
    VNSRL_WI	= 859,
    VNSRL_WV	= 860,
    VNSRL_WX	= 861,
    VOR_VI	= 862,
    VOR_VV	= 863,
    VOR_VX	= 864,
    VPOPC_M	= 865,
    VREDAND_VS	= 866,
    VREDMAXU_VS	= 867,
    VREDMAX_VS	= 868,
    VREDMINU_VS	= 869,
    VREDMIN_VS	= 870,
    VREDOR_VS	= 871,
    VREDSUM_VS	= 872,
    VREDXOR_VS	= 873,
    VREMU_VV	= 874,
    VREMU_VX	= 875,
    VREM_VV	= 876,
    VREM_VX	= 877,
    VRGATHER_VI	= 878,
    VRGATHER_VV	= 879,
    VRGATHER_VX	= 880,
    VRSUB_VI	= 881,
    VRSUB_VX	= 882,
    VS1R_V	= 883,
    VSADDU_VI	= 884,
    VSADDU_VV	= 885,
    VSADDU_VX	= 886,
    VSADD_VI	= 887,
    VSADD_VV	= 888,
    VSADD_VX	= 889,
    VSBC_VVM	= 890,
    VSBC_VXM	= 891,
    VSB_V	= 892,
    VSETVL	= 893,
    VSETVLI	= 894,
    VSE_V	= 895,
    VSH_V	= 896,
    VSLIDE1DOWN_VX	= 897,
    VSLIDE1UP_VX	= 898,
    VSLIDEDOWN_VI	= 899,
    VSLIDEDOWN_VX	= 900,
    VSLIDEUP_VI	= 901,
    VSLIDEUP_VX	= 902,
    VSLL_VI	= 903,
    VSLL_VV	= 904,
    VSLL_VX	= 905,
    VSMUL_VV	= 906,
    VSMUL_VX	= 907,
    VSRA_VI	= 908,
    VSRA_VV	= 909,
    VSRA_VX	= 910,
    VSRL_VI	= 911,
    VSRL_VV	= 912,
    VSRL_VX	= 913,
    VSSB_V	= 914,
    VSSE_V	= 915,
    VSSH_V	= 916,
    VSSRA_VI	= 917,
    VSSRA_VV	= 918,
    VSSRA_VX	= 919,
    VSSRL_VI	= 920,
    VSSRL_VV	= 921,
    VSSRL_VX	= 922,
    VSSUBU_VV	= 923,
    VSSUBU_VX	= 924,
    VSSUB_VV	= 925,
    VSSUB_VX	= 926,
    VSSW_V	= 927,
    VSUB_VV	= 928,
    VSUB_VX	= 929,
    VSUXB_V	= 930,
    VSUXE_V	= 931,
    VSUXH_V	= 932,
    VSUXW_V	= 933,
    VSW_V	= 934,
    VSXB_V	= 935,
    VSXE_V	= 936,
    VSXH_V	= 937,
    VSXW_V	= 938,
    VWADDU_VV	= 939,
    VWADDU_VX	= 940,
    VWADDU_WV	= 941,
    VWADDU_WX	= 942,
    VWADD_VV	= 943,
    VWADD_VX	= 944,
    VWADD_WV	= 945,
    VWADD_WX	= 946,
    VWMACCSU_VV	= 947,
    VWMACCSU_VX	= 948,
    VWMACCUS_VX	= 949,
    VWMACCU_VV	= 950,
    VWMACCU_VX	= 951,
    VWMACC_VV	= 952,
    VWMACC_VX	= 953,
    VWMULSU_VV	= 954,
    VWMULSU_VX	= 955,
    VWMULU_VV	= 956,
    VWMULU_VX	= 957,
    VWMUL_VV	= 958,
    VWMUL_VX	= 959,
    VWREDSUMU_VS	= 960,
    VWREDSUM_VS	= 961,
    VWSUBU_VV	= 962,
    VWSUBU_VX	= 963,
    VWSUBU_WV	= 964,
    VWSUBU_WX	= 965,
    VWSUB_VV	= 966,
    VWSUB_VX	= 967,
    VWSUB_WV	= 968,
    VWSUB_WX	= 969,
    VXOR_VI	= 970,
    VXOR_VV	= 971,
    VXOR_VX	= 972,
    WFI	= 973,
    XNOR	= 974,
    XOR	= 975,
    XORI	= 976,
    INSTRUCTION_LIST_END = 977
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
    WriteJmp_ReadJmp_ReadJmp	= 8,
    WriteCSR_ReadCSR	= 9,
    WriteCSR	= 10,
    WriteJmp	= 11,
    WriteFLD64_ReadMemBase	= 12,
    WriteFLD32_ReadMemBase	= 13,
    WriteFST64_ReadStoreData_ReadMemBase	= 14,
    WriteFST32_ReadStoreData_ReadMemBase	= 15,
    WriteJal	= 16,
    WriteJalr_ReadJalr	= 17,
    WriteJmpReg	= 18,
    WriteLDD_ReadMemBase	= 19,
    WriteLDW_ReadMemBase	= 20,
    WriteNop	= 21,
    WriteSTD_ReadStoreData_ReadMemBase	= 22,
    WriteShift_ReadShift	= 23,
    WriteSTW_ReadStoreData_ReadMemBase	= 24,
    WriteIDiv_ReadIDiv_ReadIDiv	= 25,
    WriteIDiv32_ReadIDiv32_ReadIDiv32	= 26,
    WriteFALU64_ReadFALU64_ReadFALU64	= 27,
    WriteFALU32_ReadFALU32_ReadFALU32	= 28,
    WriteFClass64_ReadFClass64	= 29,
    WriteFClass32_ReadFClass32	= 30,
    WriteFCvtI64ToF64_ReadFCvtI64ToF64	= 31,
    WriteFCvtF32ToF64_ReadFCvtF32ToF64	= 32,
    WriteFCvtI32ToF64_ReadFCvtI32ToF64	= 33,
    WriteFCvtF64ToI64_ReadFCvtF64ToI64	= 34,
    WriteFCvtF32ToI64_ReadFCvtF32ToI64	= 35,
    WriteFCvtF64ToF32_ReadFCvtF64ToF32	= 36,
    WriteFCvtI64ToF32_ReadFCvtI64ToF32	= 37,
    WriteFCvtI32ToF32_ReadFCvtI32ToF32	= 38,
    WriteFCvtF64ToI32_ReadFCvtF64ToI32	= 39,
    WriteFCvtF32ToI32_ReadFCvtF32ToI32	= 40,
    WriteFDiv64_ReadFDiv64_ReadFDiv64	= 41,
    WriteFDiv32_ReadFDiv32_ReadFDiv32	= 42,
    WriteFCmp64_ReadFCmp64_ReadFCmp64	= 43,
    WriteFCmp32_ReadFCmp32_ReadFCmp32	= 44,
    WriteFLD64_ReadFMemBase	= 45,
    WriteFLD32_ReadFMemBase	= 46,
    WriteFMulAdd64_ReadFMulAdd64_ReadFMulAdd64_ReadFMulAdd64	= 47,
    WriteFMulAdd32_ReadFMulAdd32_ReadFMulAdd32_ReadFMulAdd32	= 48,
    WriteFMinMax64_ReadFMinMax64_ReadFMinMax64	= 49,
    WriteFMinMax32_ReadFMinMax32_ReadFMinMax32	= 50,
    WriteFMulSub64_ReadFMulSub64_ReadFMulSub64_ReadFMulSub64	= 51,
    WriteFMulSub32_ReadFMulSub32_ReadFMulSub32_ReadFMulSub32	= 52,
    WriteFMul64_ReadFMul64_ReadFMul64	= 53,
    WriteFMul32_ReadFMul32_ReadFMul32	= 54,
    WriteFMovI64ToF64_ReadFMovI64ToF64	= 55,
    WriteFMovI32ToF32_ReadFMovI32ToF32	= 56,
    WriteFMovF64ToI64_ReadFMovF64ToI64	= 57,
    WriteFMovF32ToI32_ReadFMovF32ToI32	= 58,
    WriteFST64_ReadStoreData_ReadFMemBase	= 59,
    WriteFSGNJ64_ReadFSGNJ64_ReadFSGNJ64	= 60,
    WriteFSGNJ32_ReadFSGNJ32_ReadFSGNJ32	= 61,
    WriteFSqrt64_ReadFSqrt64	= 62,
    WriteFSqrt32_ReadFSqrt32	= 63,
    WriteFST32_ReadStoreData_ReadFMemBase	= 64,
    WriteLDB_ReadMemBase	= 65,
    WriteLDH_ReadMemBase	= 66,
    WriteAtomicLDD_ReadAtomicLDD	= 67,
    WriteAtomicLDW_ReadAtomicLDW	= 68,
    WriteLDWU_ReadMemBase	= 69,
    WriteIMul_ReadIMul_ReadIMul	= 70,
    WriteIMul32_ReadIMul32_ReadIMul32	= 71,
    WriteSTB_ReadStoreData_ReadMemBase	= 72,
    WriteAtomicSTD_ReadAtomicSTD_ReadAtomicSTD	= 73,
    WriteAtomicSTW_ReadAtomicSTW_ReadAtomicSTW	= 74,
    WriteSTH_ReadStoreData_ReadMemBase	= 75,
    WriteShift32_ReadShift32	= 76,
    COPY	= 77,
    SCHED_LIST_END = 78
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
static const MCPhysReg ImplicitList3[] = { RISCV::VTYPE, RISCV::VL, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { RISCV::GPRTCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM20, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM13_LSB0, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM12, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { RISCV::FPR64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { RISCV::FPR32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { RISCV::GPRNoX0X2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { RISCV::GPRX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRNoX0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo89[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::SPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo91[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM4, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM12, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMMLOG2XLEN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMMLOG2XLEN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_SIMM21_LSB0, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::FPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, RISCVOp::OPERAND_UIMM5, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, (1 << MCOI::EARLY_CLOBBER) }, { RISCV::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { RISCV::VMV0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc RISCVInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	77,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #24 = PREALLOCATED_SETUP
  { 25,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #25 = PREALLOCATED_ARG
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #26 = STATEPOINT
  { 27,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #27 = LOCAL_ESCAPE
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #28 = FAULTING_OP
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #29 = PATCHABLE_OP
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #30 = PATCHABLE_FUNCTION_ENTER
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = PATCHABLE_RET
  { 32,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #32 = PATCHABLE_FUNCTION_EXIT
  { 33,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #33 = PATCHABLE_TAIL_CALL
  { 34,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #34 = PATCHABLE_EVENT_CALL
  { 35,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #35 = PATCHABLE_TYPED_EVENT_CALL
  { 36,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #36 = ICALL_BRANCH_FUNNEL
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #37 = G_ADD
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #38 = G_SUB
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #39 = G_MUL
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #40 = G_SDIV
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #41 = G_UDIV
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #42 = G_SREM
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #43 = G_UREM
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #44 = G_AND
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #45 = G_OR
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #46 = G_XOR
  { 47,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #47 = G_IMPLICIT_DEF
  { 48,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #48 = G_PHI
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #49 = G_FRAME_INDEX
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #50 = G_GLOBAL_VALUE
  { 51,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_EXTRACT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #52 = G_UNMERGE_VALUES
  { 53,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #53 = G_INSERT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #54 = G_MERGE_VALUES
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #55 = G_BUILD_VECTOR
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #56 = G_BUILD_VECTOR_TRUNC
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #57 = G_CONCAT_VECTORS
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #58 = G_PTRTOINT
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #59 = G_INTTOPTR
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #60 = G_BITCAST
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #61 = G_FREEZE
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #62 = G_INTRINSIC_TRUNC
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #63 = G_INTRINSIC_ROUND
  { 64,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #64 = G_READCYCLECOUNTER
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #65 = G_LOAD
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #66 = G_SEXTLOAD
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #67 = G_ZEXTLOAD
  { 68,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #68 = G_INDEXED_LOAD
  { 69,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #69 = G_INDEXED_SEXTLOAD
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #70 = G_INDEXED_ZEXTLOAD
  { 71,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #71 = G_STORE
  { 72,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #72 = G_INDEXED_STORE
  { 73,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #73 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 74,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #74 = G_ATOMIC_CMPXCHG
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #75 = G_ATOMICRMW_XCHG
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #76 = G_ATOMICRMW_ADD
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #77 = G_ATOMICRMW_SUB
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #78 = G_ATOMICRMW_AND
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #79 = G_ATOMICRMW_NAND
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #80 = G_ATOMICRMW_OR
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #81 = G_ATOMICRMW_XOR
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #82 = G_ATOMICRMW_MAX
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #83 = G_ATOMICRMW_MIN
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #84 = G_ATOMICRMW_UMAX
  { 85,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #85 = G_ATOMICRMW_UMIN
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #86 = G_ATOMICRMW_FADD
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #87 = G_ATOMICRMW_FSUB
  { 88,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #88 = G_FENCE
  { 89,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #89 = G_BRCOND
  { 90,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #90 = G_BRINDIRECT
  { 91,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #91 = G_INTRINSIC
  { 92,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #92 = G_INTRINSIC_W_SIDE_EFFECTS
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #93 = G_ANYEXT
  { 94,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #94 = G_TRUNC
  { 95,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #95 = G_CONSTANT
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #96 = G_FCONSTANT
  { 97,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #97 = G_VASTART
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #98 = G_VAARG
  { 99,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #99 = G_SEXT
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #100 = G_SEXT_INREG
  { 101,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #101 = G_ZEXT
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #102 = G_SHL
  { 103,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #103 = G_LSHR
  { 104,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #104 = G_ASHR
  { 105,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #105 = G_FSHL
  { 106,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #106 = G_FSHR
  { 107,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #107 = G_ICMP
  { 108,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #108 = G_FCMP
  { 109,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #109 = G_SELECT
  { 110,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #110 = G_UADDO
  { 111,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #111 = G_UADDE
  { 112,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #112 = G_USUBO
  { 113,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #113 = G_USUBE
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #114 = G_SADDO
  { 115,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #115 = G_SADDE
  { 116,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #116 = G_SSUBO
  { 117,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #117 = G_SSUBE
  { 118,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #118 = G_UMULO
  { 119,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #119 = G_SMULO
  { 120,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #120 = G_UMULH
  { 121,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #121 = G_SMULH
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #122 = G_UADDSAT
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #123 = G_SADDSAT
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #124 = G_USUBSAT
  { 125,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #125 = G_SSUBSAT
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #126 = G_FADD
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #127 = G_FSUB
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #128 = G_FMUL
  { 129,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #129 = G_FMA
  { 130,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #130 = G_FMAD
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #131 = G_FDIV
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #132 = G_FREM
  { 133,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #133 = G_FPOW
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #134 = G_FEXP
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #135 = G_FEXP2
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #136 = G_FLOG
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #137 = G_FLOG2
  { 138,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #138 = G_FLOG10
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #139 = G_FNEG
  { 140,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #140 = G_FPEXT
  { 141,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #141 = G_FPTRUNC
  { 142,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #142 = G_FPTOSI
  { 143,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #143 = G_FPTOUI
  { 144,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #144 = G_SITOFP
  { 145,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #145 = G_UITOFP
  { 146,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #146 = G_FABS
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #147 = G_FCOPYSIGN
  { 148,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #148 = G_FCANONICALIZE
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #149 = G_FMINNUM
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #150 = G_FMAXNUM
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #151 = G_FMINNUM_IEEE
  { 152,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #152 = G_FMAXNUM_IEEE
  { 153,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #153 = G_FMINIMUM
  { 154,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #154 = G_FMAXIMUM
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #155 = G_PTR_ADD
  { 156,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #156 = G_PTRMASK
  { 157,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #157 = G_SMIN
  { 158,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #158 = G_SMAX
  { 159,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #159 = G_UMIN
  { 160,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #160 = G_UMAX
  { 161,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #161 = G_BR
  { 162,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #162 = G_BRJT
  { 163,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #163 = G_INSERT_VECTOR_ELT
  { 164,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #164 = G_EXTRACT_VECTOR_ELT
  { 165,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #165 = G_SHUFFLE_VECTOR
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #166 = G_CTTZ
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #167 = G_CTTZ_ZERO_UNDEF
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #168 = G_CTLZ
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #169 = G_CTLZ_ZERO_UNDEF
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #170 = G_CTPOP
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #171 = G_BSWAP
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #172 = G_BITREVERSE
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #173 = G_FCEIL
  { 174,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #174 = G_FCOS
  { 175,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #175 = G_FSIN
  { 176,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #176 = G_FSQRT
  { 177,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #177 = G_FFLOOR
  { 178,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #178 = G_FRINT
  { 179,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #179 = G_FNEARBYINT
  { 180,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #180 = G_ADDRSPACE_CAST
  { 181,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #181 = G_BLOCK_ADDR
  { 182,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #182 = G_JUMP_TABLE
  { 183,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #183 = G_DYN_STACKALLOC
  { 184,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #184 = G_STRICT_FADD
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #185 = G_STRICT_FSUB
  { 186,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #186 = G_STRICT_FMUL
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #187 = G_STRICT_FDIV
  { 188,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #188 = G_STRICT_FREM
  { 189,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #189 = G_STRICT_FMA
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #190 = G_STRICT_FSQRT
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #191 = G_READ_REGISTER
  { 192,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #192 = G_WRITE_REGISTER
  { 193,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #193 = ADJCALLSTACKDOWN
  { 194,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #194 = ADJCALLSTACKUP
  { 195,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #195 = BuildPairF64Pseudo
  { 196,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #196 = PseudoAddTPRel
  { 197,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #197 = PseudoAtomicLoadNand32
  { 198,	5,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #198 = PseudoAtomicLoadNand64
  { 199,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #199 = PseudoBR
  { 200,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList2, OperandInfo44 },  // Inst #200 = PseudoBRIND
  { 201,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #201 = PseudoCALL
  { 202,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList2, OperandInfo45 },  // Inst #202 = PseudoCALLIndirect
  { 203,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #203 = PseudoCALLReg
  { 204,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #204 = PseudoCmpXchg32
  { 205,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #205 = PseudoCmpXchg64
  { 206,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #206 = PseudoFLD
  { 207,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #207 = PseudoFLW
  { 208,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #208 = PseudoFSD
  { 209,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #209 = PseudoFSW
  { 210,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #210 = PseudoJump
  { 211,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #211 = PseudoLA
  { 212,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #212 = PseudoLA_TLS_GD
  { 213,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #213 = PseudoLA_TLS_IE
  { 214,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #214 = PseudoLB
  { 215,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #215 = PseudoLBU
  { 216,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #216 = PseudoLD
  { 217,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #217 = PseudoLH
  { 218,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #218 = PseudoLHU
  { 219,	2,	1,	32,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #219 = PseudoLI
  { 220,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #220 = PseudoLLA
  { 221,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #221 = PseudoLW
  { 222,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #222 = PseudoLWU
  { 223,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #223 = PseudoMaskedAtomicLoadAdd32
  { 224,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #224 = PseudoMaskedAtomicLoadMax32
  { 225,	8,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #225 = PseudoMaskedAtomicLoadMin32
  { 226,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #226 = PseudoMaskedAtomicLoadNand32
  { 227,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #227 = PseudoMaskedAtomicLoadSub32
  { 228,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #228 = PseudoMaskedAtomicLoadUMax32
  { 229,	7,	3,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #229 = PseudoMaskedAtomicLoadUMin32
  { 230,	6,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #230 = PseudoMaskedAtomicSwap32
  { 231,	7,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #231 = PseudoMaskedCmpXchg32
  { 232,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #232 = PseudoRET
  { 233,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #233 = PseudoSB
  { 234,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #234 = PseudoSD
  { 235,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #235 = PseudoSH
  { 236,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #236 = PseudoSW
  { 237,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #237 = PseudoTAIL
  { 238,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList1, nullptr, OperandInfo54 },  // Inst #238 = PseudoTAILIndirect
  { 239,	2,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #239 = ReadCycleWide
  { 240,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #240 = Select_FPR32_Using_CC_GPR
  { 241,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #241 = Select_FPR64_Using_CC_GPR
  { 242,	6,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #242 = Select_GPR_Using_CC_GPR
  { 243,	3,	2,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #243 = SplitF64Pseudo
  { 244,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #244 = ADD
  { 245,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #245 = ADDI
  { 246,	3,	1,	4,	3,	0, 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #246 = ADDIW
  { 247,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #247 = ADDIWU
  { 248,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #248 = ADDUW
  { 249,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #249 = ADDW
  { 250,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #250 = ADDWU
  { 251,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #251 = AMOADD_D
  { 252,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #252 = AMOADD_D_AQ
  { 253,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #253 = AMOADD_D_AQ_RL
  { 254,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #254 = AMOADD_D_RL
  { 255,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #255 = AMOADD_W
  { 256,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #256 = AMOADD_W_AQ
  { 257,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #257 = AMOADD_W_AQ_RL
  { 258,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #258 = AMOADD_W_RL
  { 259,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #259 = AMOAND_D
  { 260,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #260 = AMOAND_D_AQ
  { 261,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #261 = AMOAND_D_AQ_RL
  { 262,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #262 = AMOAND_D_RL
  { 263,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #263 = AMOAND_W
  { 264,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #264 = AMOAND_W_AQ
  { 265,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #265 = AMOAND_W_AQ_RL
  { 266,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #266 = AMOAND_W_RL
  { 267,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #267 = AMOMAXU_D
  { 268,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #268 = AMOMAXU_D_AQ
  { 269,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #269 = AMOMAXU_D_AQ_RL
  { 270,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #270 = AMOMAXU_D_RL
  { 271,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #271 = AMOMAXU_W
  { 272,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #272 = AMOMAXU_W_AQ
  { 273,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #273 = AMOMAXU_W_AQ_RL
  { 274,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #274 = AMOMAXU_W_RL
  { 275,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #275 = AMOMAX_D
  { 276,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #276 = AMOMAX_D_AQ
  { 277,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #277 = AMOMAX_D_AQ_RL
  { 278,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #278 = AMOMAX_D_RL
  { 279,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #279 = AMOMAX_W
  { 280,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #280 = AMOMAX_W_AQ
  { 281,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #281 = AMOMAX_W_AQ_RL
  { 282,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #282 = AMOMAX_W_RL
  { 283,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #283 = AMOMINU_D
  { 284,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #284 = AMOMINU_D_AQ
  { 285,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #285 = AMOMINU_D_AQ_RL
  { 286,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #286 = AMOMINU_D_RL
  { 287,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #287 = AMOMINU_W
  { 288,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #288 = AMOMINU_W_AQ
  { 289,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #289 = AMOMINU_W_AQ_RL
  { 290,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #290 = AMOMINU_W_RL
  { 291,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #291 = AMOMIN_D
  { 292,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #292 = AMOMIN_D_AQ
  { 293,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #293 = AMOMIN_D_AQ_RL
  { 294,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #294 = AMOMIN_D_RL
  { 295,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #295 = AMOMIN_W
  { 296,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #296 = AMOMIN_W_AQ
  { 297,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #297 = AMOMIN_W_AQ_RL
  { 298,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #298 = AMOMIN_W_RL
  { 299,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #299 = AMOOR_D
  { 300,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #300 = AMOOR_D_AQ
  { 301,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #301 = AMOOR_D_AQ_RL
  { 302,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #302 = AMOOR_D_RL
  { 303,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #303 = AMOOR_W
  { 304,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #304 = AMOOR_W_AQ
  { 305,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #305 = AMOOR_W_AQ_RL
  { 306,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #306 = AMOOR_W_RL
  { 307,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #307 = AMOSWAP_D
  { 308,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #308 = AMOSWAP_D_AQ
  { 309,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #309 = AMOSWAP_D_AQ_RL
  { 310,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #310 = AMOSWAP_D_RL
  { 311,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #311 = AMOSWAP_W
  { 312,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #312 = AMOSWAP_W_AQ
  { 313,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #313 = AMOSWAP_W_AQ_RL
  { 314,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #314 = AMOSWAP_W_RL
  { 315,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #315 = AMOXOR_D
  { 316,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #316 = AMOXOR_D_AQ
  { 317,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #317 = AMOXOR_D_AQ_RL
  { 318,	3,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #318 = AMOXOR_D_RL
  { 319,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #319 = AMOXOR_W
  { 320,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #320 = AMOXOR_W_AQ
  { 321,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #321 = AMOXOR_W_AQ_RL
  { 322,	3,	1,	4,	6,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #322 = AMOXOR_W_RL
  { 323,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #323 = AND
  { 324,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #324 = ANDI
  { 325,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #325 = ANDN
  { 326,	2,	1,	4,	7,	0, 0x6ULL, nullptr, nullptr, OperandInfo62 },  // Inst #326 = AUIPC
  { 327,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #327 = BDEP
  { 328,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #328 = BDEPW
  { 329,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #329 = BEQ
  { 330,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #330 = BEXT
  { 331,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #331 = BEXTW
  { 332,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #332 = BFP
  { 333,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #333 = BFPW
  { 334,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #334 = BGE
  { 335,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #335 = BGEU
  { 336,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #336 = BLT
  { 337,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #337 = BLTU
  { 338,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #338 = BMATFLIP
  { 339,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #339 = BMATOR
  { 340,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #340 = BMATXOR
  { 341,	3,	0,	4,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, nullptr, OperandInfo63 },  // Inst #341 = BNE
  { 342,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #342 = CLMUL
  { 343,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #343 = CLMULH
  { 344,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #344 = CLMULHW
  { 345,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #345 = CLMULR
  { 346,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #346 = CLMULRW
  { 347,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #347 = CLMULW
  { 348,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #348 = CLZ
  { 349,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #349 = CLZW
  { 350,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #350 = CMIX
  { 351,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #351 = CMOV
  { 352,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #352 = CRC32B
  { 353,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #353 = CRC32CB
  { 354,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #354 = CRC32CD
  { 355,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #355 = CRC32CH
  { 356,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #356 = CRC32CW
  { 357,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #357 = CRC32D
  { 358,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #358 = CRC32H
  { 359,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #359 = CRC32W
  { 360,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo65 },  // Inst #360 = CSRRC
  { 361,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66 },  // Inst #361 = CSRRCI
  { 362,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo65 },  // Inst #362 = CSRRS
  { 363,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66 },  // Inst #363 = CSRRSI
  { 364,	3,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo65 },  // Inst #364 = CSRRW
  { 365,	3,	1,	4,	10,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo66 },  // Inst #365 = CSRRWI
  { 366,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #366 = CTZ
  { 367,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #367 = CTZW
  { 368,	3,	1,	2,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo67 },  // Inst #368 = C_ADD
  { 369,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo68 },  // Inst #369 = C_ADDI
  { 370,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo69 },  // Inst #370 = C_ADDI16SP
  { 371,	3,	1,	2,	2,	0, 0xbULL, ImplicitList1, nullptr, OperandInfo70 },  // Inst #371 = C_ADDI4SPN
  { 372,	3,	1,	2,	3,	0, 0x9ULL, nullptr, nullptr, OperandInfo68 },  // Inst #372 = C_ADDIW
  { 373,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo68 },  // Inst #373 = C_ADDI_HINT_IMM_ZERO
  { 374,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo71 },  // Inst #374 = C_ADDI_HINT_X0
  { 375,	3,	1,	2,	2,	0, 0x9ULL, nullptr, nullptr, OperandInfo71 },  // Inst #375 = C_ADDI_NOP
  { 376,	3,	1,	2,	4,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #376 = C_ADDW
  { 377,	3,	1,	2,	1,	0, 0x8ULL, nullptr, nullptr, OperandInfo73 },  // Inst #377 = C_ADD_HINT
  { 378,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #378 = C_AND
  { 379,	3,	1,	2,	2,	0, 0xfULL, nullptr, nullptr, OperandInfo74 },  // Inst #379 = C_ANDI
  { 380,	2,	0,	2,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo75 },  // Inst #380 = C_BEQZ
  { 381,	2,	0,	2,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xfULL, nullptr, nullptr, OperandInfo75 },  // Inst #381 = C_BNEZ
  { 382,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x8ULL, nullptr, nullptr, nullptr },  // Inst #382 = C_EBREAK
  { 383,	3,	1,	2,	12,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo76 },  // Inst #383 = C_FLD
  { 384,	3,	1,	2,	12,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo77 },  // Inst #384 = C_FLDSP
  { 385,	3,	1,	2,	13,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo78 },  // Inst #385 = C_FLW
  { 386,	3,	1,	2,	13,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo79 },  // Inst #386 = C_FLWSP
  { 387,	3,	0,	2,	14,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo76 },  // Inst #387 = C_FSD
  { 388,	3,	0,	2,	14,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo77 },  // Inst #388 = C_FSDSP
  { 389,	3,	0,	2,	15,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo78 },  // Inst #389 = C_FSW
  { 390,	3,	0,	2,	15,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo79 },  // Inst #390 = C_FSWSP
  { 391,	1,	0,	2,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo2 },  // Inst #391 = C_J
  { 392,	1,	0,	2,	16,	0|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #392 = C_JAL
  { 393,	1,	0,	2,	17,	0|(1ULL<<MCID::Call), 0x8ULL, nullptr, ImplicitList2, OperandInfo80 },  // Inst #393 = C_JALR
  { 394,	1,	0,	2,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x8ULL, nullptr, nullptr, OperandInfo80 },  // Inst #394 = C_JR
  { 395,	3,	1,	2,	19,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo81 },  // Inst #395 = C_LD
  { 396,	3,	1,	2,	19,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo82 },  // Inst #396 = C_LDSP
  { 397,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo83 },  // Inst #397 = C_LI
  { 398,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo84 },  // Inst #398 = C_LI_HINT
  { 399,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo85 },  // Inst #399 = C_LUI
  { 400,	2,	1,	2,	7,	0, 0x9ULL, nullptr, nullptr, OperandInfo84 },  // Inst #400 = C_LUI_HINT
  { 401,	3,	1,	2,	20,	0|(1ULL<<MCID::MayLoad), 0xcULL, nullptr, nullptr, OperandInfo81 },  // Inst #401 = C_LW
  { 402,	3,	1,	2,	20,	0|(1ULL<<MCID::MayLoad), 0x9ULL, nullptr, nullptr, OperandInfo82 },  // Inst #402 = C_LWSP
  { 403,	2,	1,	2,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo86 },  // Inst #403 = C_MV
  { 404,	2,	1,	2,	2,	0, 0x8ULL, nullptr, nullptr, OperandInfo87 },  // Inst #404 = C_MV_HINT
  { 405,	2,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo88 },  // Inst #405 = C_NEG
  { 406,	0,	0,	2,	21,	0, 0x9ULL, nullptr, nullptr, nullptr },  // Inst #406 = C_NOP
  { 407,	1,	0,	2,	21,	0, 0x9ULL, nullptr, nullptr, OperandInfo2 },  // Inst #407 = C_NOP_HINT
  { 408,	2,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo88 },  // Inst #408 = C_NOT
  { 409,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #409 = C_OR
  { 410,	3,	0,	2,	22,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo81 },  // Inst #410 = C_SD
  { 411,	3,	0,	2,	22,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo89 },  // Inst #411 = C_SDSP
  { 412,	3,	1,	2,	23,	0, 0x9ULL, nullptr, nullptr, OperandInfo68 },  // Inst #412 = C_SLLI
  { 413,	2,	1,	2,	23,	0, 0x9ULL, nullptr, nullptr, OperandInfo90 },  // Inst #413 = C_SLLI64_HINT
  { 414,	3,	1,	2,	23,	0, 0x9ULL, nullptr, nullptr, OperandInfo71 },  // Inst #414 = C_SLLI_HINT
  { 415,	3,	1,	2,	23,	0, 0xfULL, nullptr, nullptr, OperandInfo74 },  // Inst #415 = C_SRAI
  { 416,	2,	1,	2,	23,	0, 0x9ULL, nullptr, nullptr, OperandInfo88 },  // Inst #416 = C_SRAI64_HINT
  { 417,	3,	1,	2,	23,	0, 0xfULL, nullptr, nullptr, OperandInfo74 },  // Inst #417 = C_SRLI
  { 418,	2,	1,	2,	23,	0, 0x9ULL, nullptr, nullptr, OperandInfo88 },  // Inst #418 = C_SRLI64_HINT
  { 419,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #419 = C_SUB
  { 420,	3,	1,	2,	4,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #420 = C_SUBW
  { 421,	3,	0,	2,	24,	0|(1ULL<<MCID::MayStore), 0xdULL, nullptr, nullptr, OperandInfo81 },  // Inst #421 = C_SW
  { 422,	3,	0,	2,	24,	0|(1ULL<<MCID::MayStore), 0xaULL, nullptr, nullptr, OperandInfo89 },  // Inst #422 = C_SWSP
  { 423,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, nullptr },  // Inst #423 = C_UNIMP
  { 424,	3,	1,	2,	1,	0, 0xeULL, nullptr, nullptr, OperandInfo72 },  // Inst #424 = C_XOR
  { 425,	2,	1,	2,	0,	0, 0x8ULL, nullptr, nullptr, OperandInfo88 },  // Inst #425 = C_ZEXTW
  { 426,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #426 = DIV
  { 427,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #427 = DIVU
  { 428,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #428 = DIVUW
  { 429,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #429 = DIVW
  { 430,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #430 = DRET
  { 431,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr },  // Inst #431 = EBREAK
  { 432,	0,	0,	4,	11,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr },  // Inst #432 = ECALL
  { 433,	4,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo91 },  // Inst #433 = FADD_D
  { 434,	4,	1,	4,	28,	0, 0x1ULL, nullptr, nullptr, OperandInfo92 },  // Inst #434 = FADD_S
  { 435,	2,	1,	4,	29,	0, 0x1ULL, nullptr, nullptr, OperandInfo93 },  // Inst #435 = FCLASS_D
  { 436,	2,	1,	4,	30,	0, 0x1ULL, nullptr, nullptr, OperandInfo94 },  // Inst #436 = FCLASS_S
  { 437,	3,	1,	4,	31,	0, 0x1ULL, nullptr, nullptr, OperandInfo48 },  // Inst #437 = FCVT_D_L
  { 438,	3,	1,	4,	31,	0, 0x1ULL, nullptr, nullptr, OperandInfo48 },  // Inst #438 = FCVT_D_LU
  { 439,	2,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo95 },  // Inst #439 = FCVT_D_S
  { 440,	2,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo96 },  // Inst #440 = FCVT_D_W
  { 441,	2,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo96 },  // Inst #441 = FCVT_D_WU
  { 442,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo97 },  // Inst #442 = FCVT_LU_D
  { 443,	3,	1,	4,	35,	0, 0x1ULL, nullptr, nullptr, OperandInfo98 },  // Inst #443 = FCVT_LU_S
  { 444,	3,	1,	4,	34,	0, 0x1ULL, nullptr, nullptr, OperandInfo97 },  // Inst #444 = FCVT_L_D
  { 445,	3,	1,	4,	35,	0, 0x1ULL, nullptr, nullptr, OperandInfo98 },  // Inst #445 = FCVT_L_S
  { 446,	3,	1,	4,	36,	0, 0x1ULL, nullptr, nullptr, OperandInfo99 },  // Inst #446 = FCVT_S_D
  { 447,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo49 },  // Inst #447 = FCVT_S_L
  { 448,	3,	1,	4,	37,	0, 0x1ULL, nullptr, nullptr, OperandInfo49 },  // Inst #448 = FCVT_S_LU
  { 449,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo49 },  // Inst #449 = FCVT_S_W
  { 450,	3,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo49 },  // Inst #450 = FCVT_S_WU
  { 451,	3,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo97 },  // Inst #451 = FCVT_WU_D
  { 452,	3,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo98 },  // Inst #452 = FCVT_WU_S
  { 453,	3,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo97 },  // Inst #453 = FCVT_W_D
  { 454,	3,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo98 },  // Inst #454 = FCVT_W_S
  { 455,	4,	1,	4,	41,	0, 0x1ULL, nullptr, nullptr, OperandInfo91 },  // Inst #455 = FDIV_D
  { 456,	4,	1,	4,	42,	0, 0x1ULL, nullptr, nullptr, OperandInfo92 },  // Inst #456 = FDIV_S
  { 457,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo100 },  // Inst #457 = FENCE
  { 458,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr },  // Inst #458 = FENCE_I
  { 459,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr },  // Inst #459 = FENCE_TSO
  { 460,	3,	1,	4,	43,	0, 0x1ULL, nullptr, nullptr, OperandInfo101 },  // Inst #460 = FEQ_D
  { 461,	3,	1,	4,	44,	0, 0x1ULL, nullptr, nullptr, OperandInfo102 },  // Inst #461 = FEQ_S
  { 462,	3,	1,	4,	45,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo103 },  // Inst #462 = FLD
  { 463,	3,	1,	4,	43,	0, 0x1ULL, nullptr, nullptr, OperandInfo101 },  // Inst #463 = FLE_D
  { 464,	3,	1,	4,	44,	0, 0x1ULL, nullptr, nullptr, OperandInfo102 },  // Inst #464 = FLE_S
  { 465,	3,	1,	4,	43,	0, 0x1ULL, nullptr, nullptr, OperandInfo101 },  // Inst #465 = FLT_D
  { 466,	3,	1,	4,	44,	0, 0x1ULL, nullptr, nullptr, OperandInfo102 },  // Inst #466 = FLT_S
  { 467,	3,	1,	4,	46,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo104 },  // Inst #467 = FLW
  { 468,	5,	1,	4,	47,	0, 0x2ULL, nullptr, nullptr, OperandInfo105 },  // Inst #468 = FMADD_D
  { 469,	5,	1,	4,	48,	0, 0x2ULL, nullptr, nullptr, OperandInfo106 },  // Inst #469 = FMADD_S
  { 470,	3,	1,	4,	49,	0, 0x1ULL, nullptr, nullptr, OperandInfo107 },  // Inst #470 = FMAX_D
  { 471,	3,	1,	4,	50,	0, 0x1ULL, nullptr, nullptr, OperandInfo108 },  // Inst #471 = FMAX_S
  { 472,	3,	1,	4,	49,	0, 0x1ULL, nullptr, nullptr, OperandInfo107 },  // Inst #472 = FMIN_D
  { 473,	3,	1,	4,	50,	0, 0x1ULL, nullptr, nullptr, OperandInfo108 },  // Inst #473 = FMIN_S
  { 474,	5,	1,	4,	51,	0, 0x2ULL, nullptr, nullptr, OperandInfo105 },  // Inst #474 = FMSUB_D
  { 475,	5,	1,	4,	52,	0, 0x2ULL, nullptr, nullptr, OperandInfo106 },  // Inst #475 = FMSUB_S
  { 476,	4,	1,	4,	53,	0, 0x1ULL, nullptr, nullptr, OperandInfo91 },  // Inst #476 = FMUL_D
  { 477,	4,	1,	4,	54,	0, 0x1ULL, nullptr, nullptr, OperandInfo92 },  // Inst #477 = FMUL_S
  { 478,	2,	1,	4,	55,	0, 0x1ULL, nullptr, nullptr, OperandInfo96 },  // Inst #478 = FMV_D_X
  { 479,	2,	1,	4,	56,	0, 0x1ULL, nullptr, nullptr, OperandInfo109 },  // Inst #479 = FMV_W_X
  { 480,	2,	1,	4,	57,	0, 0x1ULL, nullptr, nullptr, OperandInfo93 },  // Inst #480 = FMV_X_D
  { 481,	2,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo94 },  // Inst #481 = FMV_X_W
  { 482,	5,	1,	4,	47,	0, 0x2ULL, nullptr, nullptr, OperandInfo105 },  // Inst #482 = FNMADD_D
  { 483,	5,	1,	4,	48,	0, 0x2ULL, nullptr, nullptr, OperandInfo106 },  // Inst #483 = FNMADD_S
  { 484,	5,	1,	4,	51,	0, 0x2ULL, nullptr, nullptr, OperandInfo105 },  // Inst #484 = FNMSUB_D
  { 485,	5,	1,	4,	52,	0, 0x2ULL, nullptr, nullptr, OperandInfo106 },  // Inst #485 = FNMSUB_S
  { 486,	3,	0,	4,	59,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo103 },  // Inst #486 = FSD
  { 487,	3,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo107 },  // Inst #487 = FSGNJN_D
  { 488,	3,	1,	4,	61,	0, 0x1ULL, nullptr, nullptr, OperandInfo108 },  // Inst #488 = FSGNJN_S
  { 489,	3,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo107 },  // Inst #489 = FSGNJX_D
  { 490,	3,	1,	4,	61,	0, 0x1ULL, nullptr, nullptr, OperandInfo108 },  // Inst #490 = FSGNJX_S
  { 491,	3,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo107 },  // Inst #491 = FSGNJ_D
  { 492,	3,	1,	4,	61,	0, 0x1ULL, nullptr, nullptr, OperandInfo108 },  // Inst #492 = FSGNJ_S
  { 493,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #493 = FSL
  { 494,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #494 = FSLW
  { 495,	3,	1,	4,	62,	0, 0x1ULL, nullptr, nullptr, OperandInfo110 },  // Inst #495 = FSQRT_D
  { 496,	3,	1,	4,	63,	0, 0x1ULL, nullptr, nullptr, OperandInfo111 },  // Inst #496 = FSQRT_S
  { 497,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #497 = FSR
  { 498,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo112 },  // Inst #498 = FSRI
  { 499,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo113 },  // Inst #499 = FSRIW
  { 500,	4,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo64 },  // Inst #500 = FSRW
  { 501,	4,	1,	4,	27,	0, 0x1ULL, nullptr, nullptr, OperandInfo91 },  // Inst #501 = FSUB_D
  { 502,	4,	1,	4,	28,	0, 0x1ULL, nullptr, nullptr, OperandInfo92 },  // Inst #502 = FSUB_S
  { 503,	3,	0,	4,	64,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo104 },  // Inst #503 = FSW
  { 504,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #504 = GORC
  { 505,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #505 = GORCI
  { 506,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #506 = GORCIW
  { 507,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #507 = GORCW
  { 508,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #508 = GREV
  { 509,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #509 = GREVI
  { 510,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #510 = GREVIW
  { 511,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #511 = GREVW
  { 512,	2,	1,	4,	16,	0|(1ULL<<MCID::Call), 0x7ULL, nullptr, nullptr, OperandInfo116 },  // Inst #512 = JAL
  { 513,	3,	1,	4,	17,	0|(1ULL<<MCID::Call), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #513 = JALR
  { 514,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #514 = LB
  { 515,	3,	1,	4,	65,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #515 = LBU
  { 516,	3,	1,	4,	19,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #516 = LD
  { 517,	3,	1,	4,	66,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #517 = LH
  { 518,	3,	1,	4,	66,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #518 = LHU
  { 519,	2,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #519 = LR_D
  { 520,	2,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #520 = LR_D_AQ
  { 521,	2,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #521 = LR_D_AQ_RL
  { 522,	2,	1,	4,	67,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #522 = LR_D_RL
  { 523,	2,	1,	4,	68,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #523 = LR_W
  { 524,	2,	1,	4,	68,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #524 = LR_W_AQ
  { 525,	2,	1,	4,	68,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #525 = LR_W_AQ_RL
  { 526,	2,	1,	4,	68,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #526 = LR_W_RL
  { 527,	2,	1,	4,	7,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x6ULL, nullptr, nullptr, OperandInfo62 },  // Inst #527 = LUI
  { 528,	3,	1,	4,	20,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #528 = LW
  { 529,	3,	1,	4,	69,	0|(1ULL<<MCID::MayLoad), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #529 = LWU
  { 530,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #530 = MAX
  { 531,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #531 = MAXU
  { 532,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #532 = MIN
  { 533,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #533 = MINU
  { 534,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #534 = MRET
  { 535,	3,	1,	4,	70,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #535 = MUL
  { 536,	3,	1,	4,	70,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #536 = MULH
  { 537,	3,	1,	4,	70,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #537 = MULHSU
  { 538,	3,	1,	4,	70,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #538 = MULHU
  { 539,	3,	1,	4,	71,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #539 = MULW
  { 540,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #540 = OR
  { 541,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #541 = ORI
  { 542,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #542 = ORN
  { 543,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #543 = PACK
  { 544,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #544 = PACKH
  { 545,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #545 = PACKU
  { 546,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #546 = PACKUW
  { 547,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #547 = PACKW
  { 548,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #548 = PCNT
  { 549,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #549 = PCNTW
  { 550,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #550 = REM
  { 551,	3,	1,	4,	25,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #551 = REMU
  { 552,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #552 = REMUW
  { 553,	3,	1,	4,	26,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #553 = REMW
  { 554,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #554 = ROL
  { 555,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #555 = ROLW
  { 556,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #556 = ROR
  { 557,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #557 = RORI
  { 558,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #558 = RORIW
  { 559,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #559 = RORW
  { 560,	3,	0,	4,	72,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo61 },  // Inst #560 = SB
  { 561,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #561 = SBCLR
  { 562,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #562 = SBCLRI
  { 563,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #563 = SBCLRIW
  { 564,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #564 = SBCLRW
  { 565,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #565 = SBEXT
  { 566,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #566 = SBEXTI
  { 567,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #567 = SBEXTW
  { 568,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #568 = SBINV
  { 569,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #569 = SBINVI
  { 570,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #570 = SBINVIW
  { 571,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #571 = SBINVW
  { 572,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #572 = SBSET
  { 573,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #573 = SBSETI
  { 574,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #574 = SBSETIW
  { 575,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #575 = SBSETW
  { 576,	3,	1,	4,	73,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #576 = SC_D
  { 577,	3,	1,	4,	73,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #577 = SC_D_AQ
  { 578,	3,	1,	4,	73,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #578 = SC_D_AQ_RL
  { 579,	3,	1,	4,	73,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #579 = SC_D_RL
  { 580,	3,	1,	4,	74,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #580 = SC_W
  { 581,	3,	1,	4,	74,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #581 = SC_W_AQ
  { 582,	3,	1,	4,	74,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #582 = SC_W_AQ_RL
  { 583,	3,	1,	4,	74,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #583 = SC_W_RL
  { 584,	3,	0,	4,	22,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo61 },  // Inst #584 = SD
  { 585,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #585 = SEXTB
  { 586,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #586 = SEXTH
  { 587,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #587 = SFENCE_VMA
  { 588,	3,	0,	4,	75,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo61 },  // Inst #588 = SH
  { 589,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #589 = SHFL
  { 590,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo53 },  // Inst #590 = SHFLI
  { 591,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #591 = SHFLW
  { 592,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #592 = SLL
  { 593,	3,	1,	4,	23,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #593 = SLLI
  { 594,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #594 = SLLIUW
  { 595,	3,	1,	4,	76,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #595 = SLLIW
  { 596,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #596 = SLLW
  { 597,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #597 = SLO
  { 598,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #598 = SLOI
  { 599,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #599 = SLOIW
  { 600,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #600 = SLOW
  { 601,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #601 = SLT
  { 602,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #602 = SLTI
  { 603,	3,	1,	4,	2,	0, 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #603 = SLTIU
  { 604,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #604 = SLTU
  { 605,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #605 = SRA
  { 606,	3,	1,	4,	23,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #606 = SRAI
  { 607,	3,	1,	4,	76,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #607 = SRAIW
  { 608,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #608 = SRAW
  { 609,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #609 = SRET
  { 610,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #610 = SRL
  { 611,	3,	1,	4,	23,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #611 = SRLI
  { 612,	3,	1,	4,	76,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #612 = SRLIW
  { 613,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #613 = SRLW
  { 614,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #614 = SRO
  { 615,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo114 },  // Inst #615 = SROI
  { 616,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo115 },  // Inst #616 = SROIW
  { 617,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #617 = SROW
  { 618,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #618 = SUB
  { 619,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #619 = SUBUW
  { 620,	3,	1,	4,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #620 = SUBW
  { 621,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #621 = SUBWU
  { 622,	3,	0,	4,	24,	0|(1ULL<<MCID::MayStore), 0x4ULL, nullptr, nullptr, OperandInfo61 },  // Inst #622 = SW
  { 623,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, nullptr },  // Inst #623 = UNIMP
  { 624,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #624 = UNSHFL
  { 625,	3,	1,	4,	0,	0, 0x3ULL, nullptr, nullptr, OperandInfo53 },  // Inst #625 = UNSHFLI
  { 626,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #626 = UNSHFLW
  { 627,	2,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #627 = URET
  { 628,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #628 = VAADDU_VV
  { 629,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #629 = VAADDU_VX
  { 630,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #630 = VAADD_VV
  { 631,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #631 = VAADD_VX
  { 632,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #632 = VADC_VIM
  { 633,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #633 = VADC_VVM
  { 634,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #634 = VADC_VXM
  { 635,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #635 = VADD_VI
  { 636,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #636 = VADD_VV
  { 637,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #637 = VADD_VX
  { 638,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #638 = VAND_VI
  { 639,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #639 = VAND_VV
  { 640,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #640 = VAND_VX
  { 641,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #641 = VASUBU_VV
  { 642,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #642 = VASUBU_VX
  { 643,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #643 = VASUB_VV
  { 644,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #644 = VASUB_VX
  { 645,	3,	1,	4,	0,	0, 0x101ULL, ImplicitList3, nullptr, OperandInfo120 },  // Inst #645 = VCOMPRESS_VM
  { 646,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #646 = VDIVU_VV
  { 647,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #647 = VDIVU_VX
  { 648,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #648 = VDIV_VV
  { 649,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #649 = VDIV_VX
  { 650,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #650 = VFADD_VF
  { 651,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #651 = VFADD_VV
  { 652,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #652 = VFCLASS_V
  { 653,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #653 = VFCVT_F_XU_V
  { 654,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #654 = VFCVT_F_X_V
  { 655,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #655 = VFCVT_XU_F_V
  { 656,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #656 = VFCVT_X_F_V
  { 657,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #657 = VFDIV_VF
  { 658,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #658 = VFDIV_VV
  { 659,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo123 },  // Inst #659 = VFIRST_M
  { 660,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #660 = VFMACC_VF
  { 661,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #661 = VFMACC_VV
  { 662,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #662 = VFMADD_VF
  { 663,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #663 = VFMADD_VV
  { 664,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #664 = VFMAX_VF
  { 665,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #665 = VFMAX_VV
  { 666,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #666 = VFMERGE_VFM
  { 667,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #667 = VFMIN_VF
  { 668,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #668 = VFMIN_VV
  { 669,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #669 = VFMSAC_VF
  { 670,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #670 = VFMSAC_VV
  { 671,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #671 = VFMSUB_VF
  { 672,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #672 = VFMSUB_VV
  { 673,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #673 = VFMUL_VF
  { 674,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #674 = VFMUL_VV
  { 675,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo125 },  // Inst #675 = VFMV_F_S
  { 676,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo126 },  // Inst #676 = VFMV_S_F
  { 677,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo126 },  // Inst #677 = VFMV_V_F
  { 678,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #678 = VFNCVT_F_F_W
  { 679,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #679 = VFNCVT_F_XU_W
  { 680,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #680 = VFNCVT_F_X_W
  { 681,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #681 = VFNCVT_ROD_F_F_W
  { 682,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #682 = VFNCVT_XU_F_W
  { 683,	3,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #683 = VFNCVT_X_F_W
  { 684,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #684 = VFNMACC_VF
  { 685,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #685 = VFNMACC_VV
  { 686,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #686 = VFNMADD_VF
  { 687,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #687 = VFNMADD_VV
  { 688,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #688 = VFNMSAC_VF
  { 689,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #689 = VFNMSAC_VV
  { 690,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo124 },  // Inst #690 = VFNMSUB_VF
  { 691,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #691 = VFNMSUB_VV
  { 692,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #692 = VFRDIV_VF
  { 693,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #693 = VFREDMAX_VS
  { 694,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #694 = VFREDMIN_VS
  { 695,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #695 = VFREDOSUM_VS
  { 696,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #696 = VFREDSUM_VS
  { 697,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #697 = VFRSUB_VF
  { 698,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #698 = VFSGNJN_VF
  { 699,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #699 = VFSGNJN_VV
  { 700,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #700 = VFSGNJX_VF
  { 701,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #701 = VFSGNJX_VV
  { 702,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #702 = VFSGNJ_VF
  { 703,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #703 = VFSGNJ_VV
  { 704,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #704 = VFSQRT_V
  { 705,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #705 = VFSUB_VF
  { 706,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #706 = VFSUB_VV
  { 707,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo128 },  // Inst #707 = VFWADD_VF
  { 708,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #708 = VFWADD_VV
  { 709,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo128 },  // Inst #709 = VFWADD_WF
  { 710,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #710 = VFWADD_WV
  { 711,	3,	1,	4,	0,	0, 0x61ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #711 = VFWCVT_F_F_V
  { 712,	3,	1,	4,	0,	0, 0x61ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #712 = VFWCVT_F_XU_V
  { 713,	3,	1,	4,	0,	0, 0x61ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #713 = VFWCVT_F_X_V
  { 714,	3,	1,	4,	0,	0, 0x61ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #714 = VFWCVT_XU_F_V
  { 715,	3,	1,	4,	0,	0, 0x61ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #715 = VFWCVT_X_F_V
  { 716,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo130 },  // Inst #716 = VFWMACC_VF
  { 717,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #717 = VFWMACC_VV
  { 718,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo130 },  // Inst #718 = VFWMSAC_VF
  { 719,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #719 = VFWMSAC_VV
  { 720,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo128 },  // Inst #720 = VFWMUL_VF
  { 721,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #721 = VFWMUL_VV
  { 722,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo130 },  // Inst #722 = VFWNMACC_VF
  { 723,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #723 = VFWNMACC_VV
  { 724,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo130 },  // Inst #724 = VFWNMSAC_VF
  { 725,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #725 = VFWNMSAC_VV
  { 726,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #726 = VFWREDOSUM_VS
  { 727,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #727 = VFWREDSUM_VS
  { 728,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo128 },  // Inst #728 = VFWSUB_VF
  { 729,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #729 = VFWSUB_VV
  { 730,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo128 },  // Inst #730 = VFWSUB_WF
  { 731,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #731 = VFWSUB_WV
  { 732,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo131 },  // Inst #732 = VID_V
  { 733,	3,	1,	4,	0,	0, 0xa1ULL, ImplicitList3, nullptr, OperandInfo127 },  // Inst #733 = VIOTA_M
  { 734,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, nullptr, nullptr, OperandInfo132 },  // Inst #734 = VL1R_V
  { 735,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #735 = VLBFF_V
  { 736,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #736 = VLBUFF_V
  { 737,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #737 = VLBU_V
  { 738,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #738 = VLB_V
  { 739,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #739 = VLEFF_V
  { 740,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #740 = VLE_V
  { 741,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #741 = VLHFF_V
  { 742,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #742 = VLHUFF_V
  { 743,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #743 = VLHU_V
  { 744,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #744 = VLH_V
  { 745,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #745 = VLSBU_V
  { 746,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #746 = VLSB_V
  { 747,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #747 = VLSE_V
  { 748,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #748 = VLSHU_V
  { 749,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #749 = VLSH_V
  { 750,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #750 = VLSWU_V
  { 751,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #751 = VLSW_V
  { 752,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #752 = VLWFF_V
  { 753,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #753 = VLWUFF_V
  { 754,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #754 = VLWU_V
  { 755,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #755 = VLW_V
  { 756,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #756 = VLXBU_V
  { 757,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #757 = VLXB_V
  { 758,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #758 = VLXE_V
  { 759,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #759 = VLXHU_V
  { 760,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #760 = VLXH_V
  { 761,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #761 = VLXWU_V
  { 762,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #762 = VLXW_V
  { 763,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #763 = VMACC_VV
  { 764,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #764 = VMACC_VX
  { 765,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo136 },  // Inst #765 = VMADC_VI
  { 766,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #766 = VMADC_VIM
  { 767,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #767 = VMADC_VV
  { 768,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #768 = VMADC_VVM
  { 769,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo138 },  // Inst #769 = VMADC_VX
  { 770,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #770 = VMADC_VXM
  { 771,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #771 = VMADD_VV
  { 772,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #772 = VMADD_VX
  { 773,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #773 = VMANDNOT_MM
  { 774,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #774 = VMAND_MM
  { 775,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #775 = VMAXU_VV
  { 776,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #776 = VMAXU_VX
  { 777,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #777 = VMAX_VV
  { 778,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #778 = VMAX_VX
  { 779,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #779 = VMERGE_VIM
  { 780,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #780 = VMERGE_VVM
  { 781,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #781 = VMERGE_VXM
  { 782,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #782 = VMFEQ_VF
  { 783,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #783 = VMFEQ_VV
  { 784,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #784 = VMFGE_VF
  { 785,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #785 = VMFGT_VF
  { 786,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #786 = VMFLE_VF
  { 787,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #787 = VMFLE_VV
  { 788,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #788 = VMFLT_VF
  { 789,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #789 = VMFLT_VV
  { 790,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo121 },  // Inst #790 = VMFNE_VF
  { 791,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #791 = VMFNE_VV
  { 792,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #792 = VMINU_VV
  { 793,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #793 = VMINU_VX
  { 794,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #794 = VMIN_VV
  { 795,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #795 = VMIN_VX
  { 796,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #796 = VMNAND_MM
  { 797,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #797 = VMNOR_MM
  { 798,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #798 = VMORNOT_MM
  { 799,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #799 = VMOR_MM
  { 800,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #800 = VMSBC_VV
  { 801,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #801 = VMSBC_VVM
  { 802,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo138 },  // Inst #802 = VMSBC_VX
  { 803,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #803 = VMSBC_VXM
  { 804,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #804 = VMSBF_M
  { 805,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #805 = VMSEQ_VI
  { 806,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #806 = VMSEQ_VV
  { 807,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #807 = VMSEQ_VX
  { 808,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #808 = VMSGTU_VI
  { 809,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #809 = VMSGTU_VX
  { 810,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #810 = VMSGT_VI
  { 811,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #811 = VMSGT_VX
  { 812,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #812 = VMSIF_M
  { 813,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #813 = VMSLEU_VI
  { 814,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #814 = VMSLEU_VV
  { 815,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #815 = VMSLEU_VX
  { 816,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #816 = VMSLE_VI
  { 817,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #817 = VMSLE_VV
  { 818,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #818 = VMSLE_VX
  { 819,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #819 = VMSLTU_VV
  { 820,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #820 = VMSLTU_VX
  { 821,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #821 = VMSLT_VV
  { 822,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #822 = VMSLT_VX
  { 823,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #823 = VMSNE_VI
  { 824,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #824 = VMSNE_VV
  { 825,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #825 = VMSNE_VX
  { 826,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo122 },  // Inst #826 = VMSOF_M
  { 827,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #827 = VMULHSU_VV
  { 828,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #828 = VMULHSU_VX
  { 829,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #829 = VMULHU_VV
  { 830,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #830 = VMULHU_VX
  { 831,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #831 = VMULH_VV
  { 832,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #832 = VMULH_VX
  { 833,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #833 = VMUL_VV
  { 834,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #834 = VMUL_VX
  { 835,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo139 },  // Inst #835 = VMV1R_V
  { 836,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo139 },  // Inst #836 = VMV2R_V
  { 837,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo139 },  // Inst #837 = VMV4R_V
  { 838,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo139 },  // Inst #838 = VMV8R_V
  { 839,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo132 },  // Inst #839 = VMV_S_X
  { 840,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo140 },  // Inst #840 = VMV_V_I
  { 841,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo139 },  // Inst #841 = VMV_V_V
  { 842,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo132 },  // Inst #842 = VMV_V_X
  { 843,	2,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo141 },  // Inst #843 = VMV_X_S
  { 844,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #844 = VMXNOR_MM
  { 845,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo137 },  // Inst #845 = VMXOR_MM
  { 846,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #846 = VNCLIPU_WI
  { 847,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #847 = VNCLIPU_WV
  { 848,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #848 = VNCLIPU_WX
  { 849,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #849 = VNCLIP_WI
  { 850,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #850 = VNCLIP_WV
  { 851,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #851 = VNCLIP_WX
  { 852,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #852 = VNMSAC_VV
  { 853,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #853 = VNMSAC_VX
  { 854,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #854 = VNMSUB_VV
  { 855,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #855 = VNMSUB_VX
  { 856,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #856 = VNSRA_WI
  { 857,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #857 = VNSRA_WV
  { 858,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #858 = VNSRA_WX
  { 859,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #859 = VNSRL_WI
  { 860,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #860 = VNSRL_WV
  { 861,	4,	1,	4,	0,	0, 0x81ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #861 = VNSRL_WX
  { 862,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #862 = VOR_VI
  { 863,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #863 = VOR_VV
  { 864,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #864 = VOR_VX
  { 865,	3,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo123 },  // Inst #865 = VPOPC_M
  { 866,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #866 = VREDAND_VS
  { 867,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #867 = VREDMAXU_VS
  { 868,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #868 = VREDMAX_VS
  { 869,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #869 = VREDMINU_VS
  { 870,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #870 = VREDMIN_VS
  { 871,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #871 = VREDOR_VS
  { 872,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #872 = VREDSUM_VS
  { 873,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #873 = VREDXOR_VS
  { 874,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #874 = VREMU_VV
  { 875,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #875 = VREMU_VX
  { 876,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #876 = VREM_VV
  { 877,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #877 = VREM_VX
  { 878,	4,	1,	4,	0,	0, 0xe1ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #878 = VRGATHER_VI
  { 879,	4,	1,	4,	0,	0, 0xe1ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #879 = VRGATHER_VV
  { 880,	4,	1,	4,	0,	0, 0xe1ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #880 = VRGATHER_VX
  { 881,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #881 = VRSUB_VI
  { 882,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #882 = VRSUB_VX
  { 883,	2,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, nullptr, nullptr, OperandInfo132 },  // Inst #883 = VS1R_V
  { 884,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #884 = VSADDU_VI
  { 885,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #885 = VSADDU_VV
  { 886,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #886 = VSADDU_VX
  { 887,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #887 = VSADD_VI
  { 888,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #888 = VSADD_VV
  { 889,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #889 = VSADD_VX
  { 890,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #890 = VSBC_VVM
  { 891,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #891 = VSBC_VXM
  { 892,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #892 = VSB_V
  { 893,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList3, OperandInfo60 },  // Inst #893 = VSETVL
  { 894,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #894 = VSETVLI
  { 895,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #895 = VSE_V
  { 896,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #896 = VSH_V
  { 897,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #897 = VSLIDE1DOWN_VX
  { 898,	4,	1,	4,	0,	0, 0xc1ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #898 = VSLIDE1UP_VX
  { 899,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #899 = VSLIDEDOWN_VI
  { 900,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #900 = VSLIDEDOWN_VX
  { 901,	4,	1,	4,	0,	0, 0xc1ULL, ImplicitList3, nullptr, OperandInfo142 },  // Inst #901 = VSLIDEUP_VI
  { 902,	4,	1,	4,	0,	0, 0xc1ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #902 = VSLIDEUP_VX
  { 903,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #903 = VSLL_VI
  { 904,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #904 = VSLL_VV
  { 905,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #905 = VSLL_VX
  { 906,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #906 = VSMUL_VV
  { 907,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #907 = VSMUL_VX
  { 908,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #908 = VSRA_VI
  { 909,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #909 = VSRA_VV
  { 910,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #910 = VSRA_VX
  { 911,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #911 = VSRL_VI
  { 912,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #912 = VSRL_VV
  { 913,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #913 = VSRL_VX
  { 914,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #914 = VSSB_V
  { 915,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #915 = VSSE_V
  { 916,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #916 = VSSH_V
  { 917,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #917 = VSSRA_VI
  { 918,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #918 = VSSRA_VV
  { 919,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #919 = VSSRA_VX
  { 920,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo144 },  // Inst #920 = VSSRL_VI
  { 921,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #921 = VSSRL_VV
  { 922,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #922 = VSSRL_VX
  { 923,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #923 = VSSUBU_VV
  { 924,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #924 = VSSUBU_VX
  { 925,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #925 = VSSUB_VV
  { 926,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #926 = VSSUB_VX
  { 927,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo134 },  // Inst #927 = VSSW_V
  { 928,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #928 = VSUB_VV
  { 929,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #929 = VSUB_VX
  { 930,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #930 = VSUXB_V
  { 931,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #931 = VSUXE_V
  { 932,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #932 = VSUXH_V
  { 933,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #933 = VSUXW_V
  { 934,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo133 },  // Inst #934 = VSW_V
  { 935,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #935 = VSXB_V
  { 936,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #936 = VSXE_V
  { 937,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #937 = VSXH_V
  { 938,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x1ULL, ImplicitList3, nullptr, OperandInfo135 },  // Inst #938 = VSXW_V
  { 939,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #939 = VWADDU_VV
  { 940,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #940 = VWADDU_VX
  { 941,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #941 = VWADDU_WV
  { 942,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #942 = VWADDU_WX
  { 943,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #943 = VWADD_VV
  { 944,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #944 = VWADD_VX
  { 945,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #945 = VWADD_WV
  { 946,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #946 = VWADD_WX
  { 947,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #947 = VWMACCSU_VV
  { 948,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo145 },  // Inst #948 = VWMACCSU_VX
  { 949,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo145 },  // Inst #949 = VWMACCUS_VX
  { 950,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #950 = VWMACCU_VV
  { 951,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo145 },  // Inst #951 = VWMACCU_VX
  { 952,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #952 = VWMACC_VV
  { 953,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo145 },  // Inst #953 = VWMACC_VX
  { 954,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #954 = VWMULSU_VV
  { 955,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #955 = VWMULSU_VX
  { 956,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #956 = VWMULU_VV
  { 957,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #957 = VWMULU_VX
  { 958,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #958 = VWMUL_VV
  { 959,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #959 = VWMUL_VX
  { 960,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #960 = VWREDSUMU_VS
  { 961,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #961 = VWREDSUM_VS
  { 962,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #962 = VWSUBU_VV
  { 963,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #963 = VWSUBU_VX
  { 964,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #964 = VWSUBU_WV
  { 965,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #965 = VWSUBU_WX
  { 966,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #966 = VWSUB_VV
  { 967,	4,	1,	4,	0,	0, 0x21ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #967 = VWSUB_VX
  { 968,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo129 },  // Inst #968 = VWSUB_WV
  { 969,	4,	1,	4,	0,	0, 0x41ULL, ImplicitList3, nullptr, OperandInfo143 },  // Inst #969 = VWSUB_WX
  { 970,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo119 },  // Inst #970 = VXOR_VI
  { 971,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo117 },  // Inst #971 = VXOR_VV
  { 972,	4,	1,	4,	0,	0, 0x1ULL, ImplicitList3, nullptr, OperandInfo118 },  // Inst #972 = VXOR_VX
  { 973,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo55 },  // Inst #973 = WFI
  { 974,	3,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #974 = XNOR
  { 975,	3,	1,	4,	1,	0, 0x1ULL, nullptr, nullptr, OperandInfo60 },  // Inst #975 = XOR
  { 976,	3,	1,	4,	2,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x3ULL, nullptr, nullptr, OperandInfo61 },  // Inst #976 = XORI
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
  /* 389 */ "G_STRICT_FMA\0"
  /* 402 */ "SFENCE_VMA\0"
  /* 413 */ "SRA\0"
  /* 417 */ "CRC32B\0"
  /* 424 */ "CRC32CB\0"
  /* 432 */ "PseudoLB\0"
  /* 441 */ "PseudoSB\0"
  /* 450 */ "SEXTB\0"
  /* 456 */ "G_FSUB\0"
  /* 463 */ "G_STRICT_FSUB\0"
  /* 477 */ "G_ATOMICRMW_FSUB\0"
  /* 494 */ "C_SUB\0"
  /* 500 */ "G_SUB\0"
  /* 506 */ "G_ATOMICRMW_SUB\0"
  /* 522 */ "G_INTRINSIC\0"
  /* 534 */ "G_FPTRUNC\0"
  /* 544 */ "G_INTRINSIC_TRUNC\0"
  /* 562 */ "G_TRUNC\0"
  /* 570 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 591 */ "G_DYN_STACKALLOC\0"
  /* 608 */ "AUIPC\0"
  /* 614 */ "GORC\0"
  /* 619 */ "CSRRC\0"
  /* 625 */ "CRC32D\0"
  /* 632 */ "G_FMAD\0"
  /* 639 */ "G_INDEXED_SEXTLOAD\0"
  /* 658 */ "G_SEXTLOAD\0"
  /* 669 */ "G_INDEXED_ZEXTLOAD\0"
  /* 688 */ "G_ZEXTLOAD\0"
  /* 699 */ "G_INDEXED_LOAD\0"
  /* 714 */ "G_LOAD\0"
  /* 721 */ "CRC32CD\0"
  /* 729 */ "G_FADD\0"
  /* 736 */ "G_STRICT_FADD\0"
  /* 750 */ "G_ATOMICRMW_FADD\0"
  /* 767 */ "C_ADD\0"
  /* 773 */ "G_ADD\0"
  /* 779 */ "G_PTR_ADD\0"
  /* 789 */ "G_ATOMICRMW_ADD\0"
  /* 805 */ "PseudoLA_TLS_GD\0"
  /* 821 */ "C_FLD\0"
  /* 827 */ "PseudoFLD\0"
  /* 837 */ "C_LD\0"
  /* 842 */ "PseudoLD\0"
  /* 851 */ "G_ATOMICRMW_NAND\0"
  /* 868 */ "C_AND\0"
  /* 874 */ "G_AND\0"
  /* 880 */ "G_ATOMICRMW_AND\0"
  /* 896 */ "LIFETIME_END\0"
  /* 909 */ "PseudoBRIND\0"
  /* 921 */ "G_BRCOND\0"
  /* 930 */ "G_INTRINSIC_ROUND\0"
  /* 948 */ "LOAD_STACK_GUARD\0"
  /* 965 */ "C_FSD\0"
  /* 971 */ "PseudoFSD\0"
  /* 981 */ "C_SD\0"
  /* 986 */ "PseudoSD\0"
  /* 995 */ "FSUB_D\0"
  /* 1002 */ "FMSUB_D\0"
  /* 1010 */ "FNMSUB_D\0"
  /* 1019 */ "SC_D\0"
  /* 1024 */ "FADD_D\0"
  /* 1031 */ "FMADD_D\0"
  /* 1039 */ "FNMADD_D\0"
  /* 1048 */ "AMOADD_D\0"
  /* 1057 */ "AMOAND_D\0"
  /* 1066 */ "FLE_D\0"
  /* 1072 */ "FSGNJ_D\0"
  /* 1080 */ "FMUL_D\0"
  /* 1087 */ "FCVT_L_D\0"
  /* 1096 */ "FMIN_D\0"
  /* 1103 */ "AMOMIN_D\0"
  /* 1112 */ "FSGNJN_D\0"
  /* 1121 */ "AMOSWAP_D\0"
  /* 1131 */ "FEQ_D\0"
  /* 1137 */ "LR_D\0"
  /* 1142 */ "AMOOR_D\0"
  /* 1150 */ "AMOXOR_D\0"
  /* 1159 */ "FCLASS_D\0"
  /* 1168 */ "FCVT_S_D\0"
  /* 1177 */ "FLT_D\0"
  /* 1183 */ "FSQRT_D\0"
  /* 1191 */ "FCVT_LU_D\0"
  /* 1201 */ "AMOMINU_D\0"
  /* 1211 */ "FCVT_WU_D\0"
  /* 1221 */ "AMOMAXU_D\0"
  /* 1231 */ "FDIV_D\0"
  /* 1238 */ "FCVT_W_D\0"
  /* 1247 */ "FMAX_D\0"
  /* 1254 */ "AMOMAX_D\0"
  /* 1263 */ "FSGNJX_D\0"
  /* 1272 */ "FMV_X_D\0"
  /* 1280 */ "G_SSUBE\0"
  /* 1288 */ "G_USUBE\0"
  /* 1296 */ "G_FENCE\0"
  /* 1304 */ "REG_SEQUENCE\0"
  /* 1317 */ "G_SADDE\0"
  /* 1325 */ "G_UADDE\0"
  /* 1333 */ "G_FMINNUM_IEEE\0"
  /* 1348 */ "G_FMAXNUM_IEEE\0"
  /* 1363 */ "BGE\0"
  /* 1367 */ "PseudoLA_TLS_IE\0"
  /* 1383 */ "G_JUMP_TABLE\0"
  /* 1396 */ "BUNDLE\0"
  /* 1403 */ "BNE\0"
  /* 1407 */ "LOCAL_ESCAPE\0"
  /* 1420 */ "G_INDEXED_STORE\0"
  /* 1436 */ "G_STORE\0"
  /* 1444 */ "G_BITREVERSE\0"
  /* 1457 */ "DBG_VALUE\0"
  /* 1467 */ "G_GLOBAL_VALUE\0"
  /* 1482 */ "G_FREEZE\0"
  /* 1491 */ "G_FCANONICALIZE\0"
  /* 1507 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1525 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1543 */ "G_IMPLICIT_DEF\0"
  /* 1558 */ "VFSUB_VF\0"
  /* 1567 */ "VFMSUB_VF\0"
  /* 1577 */ "VFNMSUB_VF\0"
  /* 1588 */ "VFRSUB_VF\0"
  /* 1598 */ "VFWSUB_VF\0"
  /* 1608 */ "VFMSAC_VF\0"
  /* 1618 */ "VFNMSAC_VF\0"
  /* 1629 */ "VFWNMSAC_VF\0"
  /* 1641 */ "VFWMSAC_VF\0"
  /* 1652 */ "VFMACC_VF\0"
  /* 1662 */ "VFNMACC_VF\0"
  /* 1673 */ "VFWNMACC_VF\0"
  /* 1685 */ "VFWMACC_VF\0"
  /* 1696 */ "VFADD_VF\0"
  /* 1705 */ "VFMADD_VF\0"
  /* 1715 */ "VFNMADD_VF\0"
  /* 1726 */ "VFWADD_VF\0"
  /* 1736 */ "VMFGE_VF\0"
  /* 1745 */ "VMFLE_VF\0"
  /* 1754 */ "VMFNE_VF\0"
  /* 1763 */ "VFSGNJ_VF\0"
  /* 1773 */ "VFMUL_VF\0"
  /* 1782 */ "VFWMUL_VF\0"
  /* 1792 */ "VFMIN_VF\0"
  /* 1801 */ "VFSGNJN_VF\0"
  /* 1812 */ "VMFEQ_VF\0"
  /* 1821 */ "VMFGT_VF\0"
  /* 1830 */ "VMFLT_VF\0"
  /* 1839 */ "VFDIV_VF\0"
  /* 1848 */ "VFRDIV_VF\0"
  /* 1858 */ "VFMAX_VF\0"
  /* 1867 */ "VFSGNJX_VF\0"
  /* 1878 */ "VFWSUB_WF\0"
  /* 1888 */ "VFWADD_WF\0"
  /* 1898 */ "VFMV_S_F\0"
  /* 1907 */ "VFMV_V_F\0"
  /* 1916 */ "G_FNEG\0"
  /* 1923 */ "C_NEG\0"
  /* 1929 */ "EXTRACT_SUBREG\0"
  /* 1944 */ "INSERT_SUBREG\0"
  /* 1958 */ "G_SEXT_INREG\0"
  /* 1971 */ "SUBREG_TO_REG\0"
  /* 1985 */ "G_ATOMIC_CMPXCHG\0"
  /* 2002 */ "G_ATOMICRMW_XCHG\0"
  /* 2019 */ "G_FLOG\0"
  /* 2026 */ "G_VAARG\0"
  /* 2034 */ "PREALLOCATED_ARG\0"
  /* 2051 */ "CRC32H\0"
  /* 2058 */ "CRC32CH\0"
  /* 2066 */ "PACKH\0"
  /* 2072 */ "CLMULH\0"
  /* 2079 */ "G_SMULH\0"
  /* 2087 */ "G_UMULH\0"
  /* 2095 */ "PseudoLH\0"
  /* 2104 */ "PseudoSH\0"
  /* 2113 */ "SEXTH\0"
  /* 2119 */ "C_SRAI\0"
  /* 2126 */ "GORCI\0"
  /* 2132 */ "CSRRCI\0"
  /* 2139 */ "C_ADDI\0"
  /* 2146 */ "C_ANDI\0"
  /* 2153 */ "WFI\0"
  /* 2157 */ "G_PHI\0"
  /* 2163 */ "UNSHFLI\0"
  /* 2171 */ "C_SLLI\0"
  /* 2178 */ "C_SRLI\0"
  /* 2185 */ "VSETVLI\0"
  /* 2193 */ "C_LI\0"
  /* 2198 */ "PseudoLI\0"
  /* 2207 */ "SLOI\0"
  /* 2212 */ "SROI\0"
  /* 2217 */ "SBCLRI\0"
  /* 2224 */ "RORI\0"
  /* 2229 */ "XORI\0"
  /* 2234 */ "FSRI\0"
  /* 2239 */ "G_FPTOSI\0"
  /* 2248 */ "CSRRSI\0"
  /* 2255 */ "SBSETI\0"
  /* 2262 */ "SLTI\0"
  /* 2267 */ "SBEXTI\0"
  /* 2274 */ "C_LUI\0"
  /* 2280 */ "G_FPTOUI\0"
  /* 2289 */ "GREVI\0"
  /* 2295 */ "SBINVI\0"
  /* 2302 */ "VSSRA_VI\0"
  /* 2311 */ "VSRA_VI\0"
  /* 2319 */ "VRSUB_VI\0"
  /* 2328 */ "VMADC_VI\0"
  /* 2337 */ "VSADD_VI\0"
  /* 2346 */ "VADD_VI\0"
  /* 2354 */ "VAND_VI\0"
  /* 2362 */ "VMSLE_VI\0"
  /* 2371 */ "VMSNE_VI\0"
  /* 2380 */ "VSLL_VI\0"
  /* 2388 */ "VSSRL_VI\0"
  /* 2397 */ "VSRL_VI\0"
  /* 2405 */ "VSLIDEDOWN_VI\0"
  /* 2419 */ "VSLIDEUP_VI\0"
  /* 2431 */ "VMSEQ_VI\0"
  /* 2440 */ "VRGATHER_VI\0"
  /* 2452 */ "VOR_VI\0"
  /* 2459 */ "VXOR_VI\0"
  /* 2467 */ "VMSGT_VI\0"
  /* 2476 */ "VSADDU_VI\0"
  /* 2486 */ "VMSLEU_VI\0"
  /* 2496 */ "VMSGTU_VI\0"
  /* 2506 */ "CSRRWI\0"
  /* 2513 */ "VNSRA_WI\0"
  /* 2522 */ "VNSRL_WI\0"
  /* 2531 */ "VNCLIP_WI\0"
  /* 2541 */ "VNCLIPU_WI\0"
  /* 2552 */ "FENCE_I\0"
  /* 2560 */ "VMV_V_I\0"
  /* 2568 */ "C_J\0"
  /* 2572 */ "C_EBREAK\0"
  /* 2581 */ "PACK\0"
  /* 2586 */ "G_PTRMASK\0"
  /* 2596 */ "C_JAL\0"
  /* 2602 */ "GC_LABEL\0"
  /* 2611 */ "DBG_LABEL\0"
  /* 2621 */ "EH_LABEL\0"
  /* 2630 */ "ANNOTATION_LABEL\0"
  /* 2647 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2667 */ "UNSHFL\0"
  /* 2674 */ "G_FSHL\0"
  /* 2681 */ "G_SHL\0"
  /* 2687 */ "PseudoTAIL\0"
  /* 2698 */ "G_FCEIL\0"
  /* 2706 */ "ECALL\0"
  /* 2712 */ "PATCHABLE_TAIL_CALL\0"
  /* 2732 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 2759 */ "PATCHABLE_EVENT_CALL\0"
  /* 2780 */ "FENTRY_CALL\0"
  /* 2792 */ "PseudoCALL\0"
  /* 2803 */ "KILL\0"
  /* 2808 */ "SLL\0"
  /* 2812 */ "ROL\0"
  /* 2816 */ "SRL\0"
  /* 2820 */ "SC_D_RL\0"
  /* 2828 */ "AMOADD_D_RL\0"
  /* 2840 */ "AMOAND_D_RL\0"
  /* 2852 */ "AMOMIN_D_RL\0"
  /* 2864 */ "AMOSWAP_D_RL\0"
  /* 2877 */ "LR_D_RL\0"
  /* 2885 */ "AMOOR_D_RL\0"
  /* 2896 */ "AMOXOR_D_RL\0"
  /* 2908 */ "AMOMINU_D_RL\0"
  /* 2921 */ "AMOMAXU_D_RL\0"
  /* 2934 */ "AMOMAX_D_RL\0"
  /* 2946 */ "SC_D_AQ_RL\0"
  /* 2957 */ "AMOADD_D_AQ_RL\0"
  /* 2972 */ "AMOAND_D_AQ_RL\0"
  /* 2987 */ "AMOMIN_D_AQ_RL\0"
  /* 3002 */ "AMOSWAP_D_AQ_RL\0"
  /* 3018 */ "LR_D_AQ_RL\0"
  /* 3029 */ "AMOOR_D_AQ_RL\0"
  /* 3043 */ "AMOXOR_D_AQ_RL\0"
  /* 3058 */ "AMOMINU_D_AQ_RL\0"
  /* 3074 */ "AMOMAXU_D_AQ_RL\0"
  /* 3090 */ "AMOMAX_D_AQ_RL\0"
  /* 3105 */ "SC_W_AQ_RL\0"
  /* 3116 */ "AMOADD_W_AQ_RL\0"
  /* 3131 */ "AMOAND_W_AQ_RL\0"
  /* 3146 */ "AMOMIN_W_AQ_RL\0"
  /* 3161 */ "AMOSWAP_W_AQ_RL\0"
  /* 3177 */ "LR_W_AQ_RL\0"
  /* 3188 */ "AMOOR_W_AQ_RL\0"
  /* 3202 */ "AMOXOR_W_AQ_RL\0"
  /* 3217 */ "AMOMINU_W_AQ_RL\0"
  /* 3233 */ "AMOMAXU_W_AQ_RL\0"
  /* 3249 */ "AMOMAX_W_AQ_RL\0"
  /* 3264 */ "SC_W_RL\0"
  /* 3272 */ "AMOADD_W_RL\0"
  /* 3284 */ "AMOAND_W_RL\0"
  /* 3296 */ "AMOMIN_W_RL\0"
  /* 3308 */ "AMOSWAP_W_RL\0"
  /* 3321 */ "LR_W_RL\0"
  /* 3329 */ "AMOOR_W_RL\0"
  /* 3340 */ "AMOXOR_W_RL\0"
  /* 3352 */ "AMOMINU_W_RL\0"
  /* 3365 */ "AMOMAXU_W_RL\0"
  /* 3378 */ "AMOMAX_W_RL\0"
  /* 3390 */ "FSL\0"
  /* 3394 */ "G_FMUL\0"
  /* 3401 */ "G_STRICT_FMUL\0"
  /* 3415 */ "CLMUL\0"
  /* 3421 */ "G_MUL\0"
  /* 3427 */ "VSETVL\0"
  /* 3434 */ "FCVT_D_L\0"
  /* 3443 */ "FCVT_S_L\0"
  /* 3452 */ "G_FREM\0"
  /* 3459 */ "G_STRICT_FREM\0"
  /* 3473 */ "G_SREM\0"
  /* 3480 */ "G_UREM\0"
  /* 3487 */ "VFMERGE_VFM\0"
  /* 3499 */ "VMADC_VIM\0"
  /* 3509 */ "VADC_VIM\0"
  /* 3518 */ "VMERGE_VIM\0"
  /* 3529 */ "VMAND_MM\0"
  /* 3538 */ "VMNAND_MM\0"
  /* 3548 */ "VMOR_MM\0"
  /* 3556 */ "VMNOR_MM\0"
  /* 3565 */ "VMXNOR_MM\0"
  /* 3575 */ "VMXOR_MM\0"
  /* 3584 */ "VMANDNOT_MM\0"
  /* 3596 */ "VMORNOT_MM\0"
  /* 3607 */ "INLINEASM\0"
  /* 3617 */ "G_FMINIMUM\0"
  /* 3628 */ "G_FMAXIMUM\0"
  /* 3639 */ "G_FMINNUM\0"
  /* 3649 */ "G_FMAXNUM\0"
  /* 3659 */ "VMSBC_VVM\0"
  /* 3669 */ "VSBC_VVM\0"
  /* 3678 */ "VMADC_VVM\0"
  /* 3688 */ "VADC_VVM\0"
  /* 3697 */ "VMERGE_VVM\0"
  /* 3708 */ "VCOMPRESS_VM\0"
  /* 3721 */ "VMSBC_VXM\0"
  /* 3731 */ "VSBC_VXM\0"
  /* 3740 */ "VMADC_VXM\0"
  /* 3750 */ "VADC_VXM\0"
  /* 3759 */ "VMERGE_VXM\0"
  /* 3770 */ "VIOTA_M\0"
  /* 3778 */ "VPOPC_M\0"
  /* 3786 */ "VMSBF_M\0"
  /* 3794 */ "VMSIF_M\0"
  /* 3802 */ "VMSOF_M\0"
  /* 3810 */ "VFIRST_M\0"
  /* 3819 */ "ANDN\0"
  /* 3824 */ "G_FCOPYSIGN\0"
  /* 3836 */ "G_SMIN\0"
  /* 3843 */ "G_UMIN\0"
  /* 3850 */ "G_ATOMICRMW_UMIN\0"
  /* 3867 */ "G_ATOMICRMW_MIN\0"
  /* 3883 */ "G_FSIN\0"
  /* 3890 */ "CFI_INSTRUCTION\0"
  /* 3906 */ "C_ADDI4SPN\0"
  /* 3917 */ "ORN\0"
  /* 3921 */ "ADJCALLSTACKDOWN\0"
  /* 3938 */ "G_SSUBO\0"
  /* 3946 */ "G_USUBO\0"
  /* 3954 */ "G_SADDO\0"
  /* 3962 */ "G_UADDO\0"
  /* 3970 */ "SLO\0"
  /* 3974 */ "G_SMULO\0"
  /* 3982 */ "G_UMULO\0"
  /* 3990 */ "C_ADDI_HINT_IMM_ZERO\0"
  /* 4011 */ "SRO\0"
  /* 4015 */ "FENCE_TSO\0"
  /* 4025 */ "STACKMAP\0"
  /* 4034 */ "G_BSWAP\0"
  /* 4042 */ "BDEP\0"
  /* 4047 */ "BFP\0"
  /* 4051 */ "G_SITOFP\0"
  /* 4060 */ "G_UITOFP\0"
  /* 4069 */ "BMATFLIP\0"
  /* 4078 */ "G_FCMP\0"
  /* 4085 */ "G_ICMP\0"
  /* 4092 */ "C_UNIMP\0"
  /* 4100 */ "C_NOP\0"
  /* 4106 */ "C_ADDI_NOP\0"
  /* 4117 */ "G_CTPOP\0"
  /* 4125 */ "PATCHABLE_OP\0"
  /* 4138 */ "FAULTING_OP\0"
  /* 4150 */ "C_ADDI16SP\0"
  /* 4161 */ "C_FLDSP\0"
  /* 4169 */ "C_LDSP\0"
  /* 4176 */ "C_FSDSP\0"
  /* 4184 */ "C_SDSP\0"
  /* 4191 */ "C_FLWSP\0"
  /* 4199 */ "C_LWSP\0"
  /* 4206 */ "C_FSWSP\0"
  /* 4214 */ "C_SWSP\0"
  /* 4221 */ "ADJCALLSTACKUP\0"
  /* 4236 */ "PREALLOCATED_SETUP\0"
  /* 4255 */ "G_FEXP\0"
  /* 4262 */ "SC_D_AQ\0"
  /* 4270 */ "AMOADD_D_AQ\0"
  /* 4282 */ "AMOAND_D_AQ\0"
  /* 4294 */ "AMOMIN_D_AQ\0"
  /* 4306 */ "AMOSWAP_D_AQ\0"
  /* 4319 */ "LR_D_AQ\0"
  /* 4327 */ "AMOOR_D_AQ\0"
  /* 4338 */ "AMOXOR_D_AQ\0"
  /* 4350 */ "AMOMINU_D_AQ\0"
  /* 4363 */ "AMOMAXU_D_AQ\0"
  /* 4376 */ "AMOMAX_D_AQ\0"
  /* 4388 */ "SC_W_AQ\0"
  /* 4396 */ "AMOADD_W_AQ\0"
  /* 4408 */ "AMOAND_W_AQ\0"
  /* 4420 */ "AMOMIN_W_AQ\0"
  /* 4432 */ "AMOSWAP_W_AQ\0"
  /* 4445 */ "LR_W_AQ\0"
  /* 4453 */ "AMOOR_W_AQ\0"
  /* 4464 */ "AMOXOR_W_AQ\0"
  /* 4476 */ "AMOMINU_W_AQ\0"
  /* 4489 */ "AMOMAXU_W_AQ\0"
  /* 4502 */ "AMOMAX_W_AQ\0"
  /* 4514 */ "BEQ\0"
  /* 4518 */ "G_BR\0"
  /* 4523 */ "INLINEASM_BR\0"
  /* 4536 */ "PseudoBR\0"
  /* 4545 */ "G_BLOCK_ADDR\0"
  /* 4558 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 4583 */ "G_READCYCLECOUNTER\0"
  /* 4602 */ "G_READ_REGISTER\0"
  /* 4618 */ "G_WRITE_REGISTER\0"
  /* 4635 */ "G_ASHR\0"
  /* 4642 */ "G_FSHR\0"
  /* 4649 */ "G_LSHR\0"
  /* 4656 */ "C_JR\0"
  /* 4661 */ "C_JALR\0"
  /* 4668 */ "SBCLR\0"
  /* 4674 */ "CLMULR\0"
  /* 4681 */ "XNOR\0"
  /* 4686 */ "G_FFLOOR\0"
  /* 4695 */ "ROR\0"
  /* 4699 */ "BMATOR\0"
  /* 4706 */ "G_BUILD_VECTOR\0"
  /* 4721 */ "G_SHUFFLE_VECTOR\0"
  /* 4738 */ "BMATXOR\0"
  /* 4746 */ "C_XOR\0"
  /* 4752 */ "G_XOR\0"
  /* 4758 */ "G_ATOMICRMW_XOR\0"
  /* 4774 */ "C_OR\0"
  /* 4779 */ "G_OR\0"
  /* 4784 */ "G_ATOMICRMW_OR\0"
  /* 4799 */ "Select_FPR32_Using_CC_GPR\0"
  /* 4825 */ "Select_FPR64_Using_CC_GPR\0"
  /* 4851 */ "Select_GPR_Using_CC_GPR\0"
  /* 4875 */ "FSR\0"
  /* 4879 */ "G_INTTOPTR\0"
  /* 4890 */ "G_FABS\0"
  /* 4897 */ "G_UNMERGE_VALUES\0"
  /* 4914 */ "G_MERGE_VALUES\0"
  /* 4929 */ "G_FCOS\0"
  /* 4936 */ "G_CONCAT_VECTORS\0"
  /* 4953 */ "CSRRS\0"
  /* 4959 */ "COPY_TO_REGCLASS\0"
  /* 4976 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 5006 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 5033 */ "VREDAND_VS\0"
  /* 5044 */ "VFREDSUM_VS\0"
  /* 5056 */ "VREDSUM_VS\0"
  /* 5067 */ "VFWREDSUM_VS\0"
  /* 5080 */ "VWREDSUM_VS\0"
  /* 5092 */ "VFREDOSUM_VS\0"
  /* 5105 */ "VFWREDOSUM_VS\0"
  /* 5119 */ "VFREDMIN_VS\0"
  /* 5131 */ "VREDMIN_VS\0"
  /* 5142 */ "VREDOR_VS\0"
  /* 5152 */ "VREDXOR_VS\0"
  /* 5163 */ "VWREDSUMU_VS\0"
  /* 5176 */ "VREDMINU_VS\0"
  /* 5188 */ "VREDMAXU_VS\0"
  /* 5200 */ "VFREDMAX_VS\0"
  /* 5212 */ "VREDMAX_VS\0"
  /* 5223 */ "FSUB_S\0"
  /* 5230 */ "FMSUB_S\0"
  /* 5238 */ "FNMSUB_S\0"
  /* 5247 */ "FADD_S\0"
  /* 5254 */ "FMADD_S\0"
  /* 5262 */ "FNMADD_S\0"
  /* 5271 */ "FCVT_D_S\0"
  /* 5280 */ "FLE_S\0"
  /* 5286 */ "VFMV_F_S\0"
  /* 5295 */ "FSGNJ_S\0"
  /* 5303 */ "FMUL_S\0"
  /* 5310 */ "FCVT_L_S\0"
  /* 5319 */ "FMIN_S\0"
  /* 5326 */ "FSGNJN_S\0"
  /* 5335 */ "FEQ_S\0"
  /* 5341 */ "FCLASS_S\0"
  /* 5350 */ "FLT_S\0"
  /* 5356 */ "FSQRT_S\0"
  /* 5364 */ "FCVT_LU_S\0"
  /* 5374 */ "FCVT_WU_S\0"
  /* 5384 */ "FDIV_S\0"
  /* 5391 */ "FCVT_W_S\0"
  /* 5400 */ "FMAX_S\0"
  /* 5407 */ "FSGNJX_S\0"
  /* 5416 */ "VMV_X_S\0"
  /* 5424 */ "G_SSUBSAT\0"
  /* 5434 */ "G_USUBSAT\0"
  /* 5444 */ "G_SADDSAT\0"
  /* 5454 */ "G_UADDSAT\0"
  /* 5464 */ "G_EXTRACT\0"
  /* 5474 */ "G_SELECT\0"
  /* 5483 */ "G_BRINDIRECT\0"
  /* 5496 */ "DRET\0"
  /* 5501 */ "MRET\0"
  /* 5506 */ "SRET\0"
  /* 5511 */ "URET\0"
  /* 5516 */ "PATCHABLE_RET\0"
  /* 5530 */ "PseudoRET\0"
  /* 5540 */ "SBSET\0"
  /* 5546 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 5570 */ "G_BRJT\0"
  /* 5577 */ "BLT\0"
  /* 5581 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 5602 */ "G_INSERT_VECTOR_ELT\0"
  /* 5622 */ "SLT\0"
  /* 5626 */ "G_FCONSTANT\0"
  /* 5638 */ "G_CONSTANT\0"
  /* 5649 */ "PCNT\0"
  /* 5654 */ "C_SRAI64_HINT\0"
  /* 5668 */ "C_SLLI64_HINT\0"
  /* 5682 */ "C_SRLI64_HINT\0"
  /* 5696 */ "C_ADD_HINT\0"
  /* 5707 */ "C_SLLI_HINT\0"
  /* 5719 */ "C_LI_HINT\0"
  /* 5729 */ "C_LUI_HINT\0"
  /* 5740 */ "C_NOP_HINT\0"
  /* 5751 */ "C_MV_HINT\0"
  /* 5761 */ "STATEPOINT\0"
  /* 5772 */ "PATCHPOINT\0"
  /* 5783 */ "G_PTRTOINT\0"
  /* 5794 */ "G_FRINT\0"
  /* 5802 */ "G_FNEARBYINT\0"
  /* 5815 */ "C_NOT\0"
  /* 5821 */ "G_VASTART\0"
  /* 5831 */ "LIFETIME_START\0"
  /* 5846 */ "G_INSERT\0"
  /* 5855 */ "G_FSQRT\0"
  /* 5863 */ "G_STRICT_FSQRT\0"
  /* 5878 */ "G_BITCAST\0"
  /* 5888 */ "G_ADDRSPACE_CAST\0"
  /* 5905 */ "SBEXT\0"
  /* 5911 */ "G_FPEXT\0"
  /* 5919 */ "G_SEXT\0"
  /* 5926 */ "G_ANYEXT\0"
  /* 5935 */ "G_ZEXT\0"
  /* 5942 */ "PseudoLBU\0"
  /* 5952 */ "BGEU\0"
  /* 5957 */ "MULHU\0"
  /* 5963 */ "PseudoLHU\0"
  /* 5973 */ "SLTIU\0"
  /* 5979 */ "PACKU\0"
  /* 5985 */ "FCVT_D_LU\0"
  /* 5995 */ "FCVT_S_LU\0"
  /* 6005 */ "REMU\0"
  /* 6010 */ "MINU\0"
  /* 6015 */ "MULHSU\0"
  /* 6022 */ "BLTU\0"
  /* 6027 */ "SLTU\0"
  /* 6032 */ "DIVU\0"
  /* 6037 */ "SUBWU\0"
  /* 6043 */ "ADDWU\0"
  /* 6049 */ "ADDIWU\0"
  /* 6056 */ "PseudoLWU\0"
  /* 6066 */ "FCVT_D_WU\0"
  /* 6076 */ "FCVT_S_WU\0"
  /* 6086 */ "MAXU\0"
  /* 6091 */ "GREV\0"
  /* 6096 */ "G_FDIV\0"
  /* 6103 */ "G_STRICT_FDIV\0"
  /* 6117 */ "G_SDIV\0"
  /* 6124 */ "G_UDIV\0"
  /* 6131 */ "C_MV\0"
  /* 6136 */ "SBINV\0"
  /* 6142 */ "CMOV\0"
  /* 6147 */ "VSSRA_VV\0"
  /* 6156 */ "VSRA_VV\0"
  /* 6164 */ "VASUB_VV\0"
  /* 6173 */ "VFSUB_VV\0"
  /* 6182 */ "VFMSUB_VV\0"
  /* 6192 */ "VFNMSUB_VV\0"
  /* 6203 */ "VNMSUB_VV\0"
  /* 6213 */ "VSSUB_VV\0"
  /* 6222 */ "VSUB_VV\0"
  /* 6230 */ "VFWSUB_VV\0"
  /* 6240 */ "VWSUB_VV\0"
  /* 6249 */ "VFMSAC_VV\0"
  /* 6259 */ "VFNMSAC_VV\0"
  /* 6270 */ "VNMSAC_VV\0"
  /* 6280 */ "VFWNMSAC_VV\0"
  /* 6292 */ "VFWMSAC_VV\0"
  /* 6303 */ "VMSBC_VV\0"
  /* 6312 */ "VFMACC_VV\0"
  /* 6322 */ "VFNMACC_VV\0"
  /* 6333 */ "VFWNMACC_VV\0"
  /* 6345 */ "VMACC_VV\0"
  /* 6354 */ "VFWMACC_VV\0"
  /* 6365 */ "VWMACC_VV\0"
  /* 6375 */ "VMADC_VV\0"
  /* 6384 */ "VAADD_VV\0"
  /* 6393 */ "VFADD_VV\0"
  /* 6402 */ "VFMADD_VV\0"
  /* 6412 */ "VFNMADD_VV\0"
  /* 6423 */ "VMADD_VV\0"
  /* 6432 */ "VSADD_VV\0"
  /* 6441 */ "VADD_VV\0"
  /* 6449 */ "VFWADD_VV\0"
  /* 6459 */ "VWADD_VV\0"
  /* 6468 */ "VAND_VV\0"
  /* 6476 */ "VMFLE_VV\0"
  /* 6485 */ "VMSLE_VV\0"
  /* 6494 */ "VMFNE_VV\0"
  /* 6503 */ "VMSNE_VV\0"
  /* 6512 */ "VMULH_VV\0"
  /* 6521 */ "VFSGNJ_VV\0"
  /* 6531 */ "VSLL_VV\0"
  /* 6539 */ "VSSRL_VV\0"
  /* 6548 */ "VSRL_VV\0"
  /* 6556 */ "VFMUL_VV\0"
  /* 6565 */ "VSMUL_VV\0"
  /* 6574 */ "VMUL_VV\0"
  /* 6582 */ "VFWMUL_VV\0"
  /* 6592 */ "VWMUL_VV\0"
  /* 6601 */ "VREM_VV\0"
  /* 6609 */ "VFMIN_VV\0"
  /* 6618 */ "VMIN_VV\0"
  /* 6626 */ "VFSGNJN_VV\0"
  /* 6637 */ "VMFEQ_VV\0"
  /* 6646 */ "VMSEQ_VV\0"
  /* 6655 */ "VRGATHER_VV\0"
  /* 6667 */ "VOR_VV\0"
  /* 6674 */ "VXOR_VV\0"
  /* 6682 */ "VMFLT_VV\0"
  /* 6691 */ "VMSLT_VV\0"
  /* 6700 */ "VASUBU_VV\0"
  /* 6710 */ "VSSUBU_VV\0"
  /* 6720 */ "VWSUBU_VV\0"
  /* 6730 */ "VWMACCU_VV\0"
  /* 6741 */ "VAADDU_VV\0"
  /* 6751 */ "VSADDU_VV\0"
  /* 6761 */ "VWADDU_VV\0"
  /* 6771 */ "VMSLEU_VV\0"
  /* 6781 */ "VMULHU_VV\0"
  /* 6791 */ "VWMULU_VV\0"
  /* 6801 */ "VREMU_VV\0"
  /* 6810 */ "VMINU_VV\0"
  /* 6819 */ "VWMACCSU_VV\0"
  /* 6831 */ "VMULHSU_VV\0"
  /* 6842 */ "VWMULSU_VV\0"
  /* 6853 */ "VMSLTU_VV\0"
  /* 6863 */ "VDIVU_VV\0"
  /* 6872 */ "VMAXU_VV\0"
  /* 6881 */ "VFDIV_VV\0"
  /* 6890 */ "VDIV_VV\0"
  /* 6898 */ "VFMAX_VV\0"
  /* 6907 */ "VMAX_VV\0"
  /* 6915 */ "VFSGNJX_VV\0"
  /* 6926 */ "VNSRA_WV\0"
  /* 6935 */ "VFWSUB_WV\0"
  /* 6945 */ "VWSUB_WV\0"
  /* 6954 */ "VFWADD_WV\0"
  /* 6964 */ "VWADD_WV\0"
  /* 6973 */ "VNSRL_WV\0"
  /* 6982 */ "VNCLIP_WV\0"
  /* 6992 */ "VWSUBU_WV\0"
  /* 7002 */ "VWADDU_WV\0"
  /* 7012 */ "VNCLIPU_WV\0"
  /* 7023 */ "VLB_V\0"
  /* 7029 */ "VLSB_V\0"
  /* 7036 */ "VSSB_V\0"
  /* 7043 */ "VSB_V\0"
  /* 7049 */ "VLXB_V\0"
  /* 7056 */ "VSXB_V\0"
  /* 7063 */ "VSUXB_V\0"
  /* 7071 */ "VID_V\0"
  /* 7077 */ "VLE_V\0"
  /* 7083 */ "VLSE_V\0"
  /* 7090 */ "VSSE_V\0"
  /* 7097 */ "VSE_V\0"
  /* 7103 */ "VLXE_V\0"
  /* 7110 */ "VSXE_V\0"
  /* 7117 */ "VSUXE_V\0"
  /* 7125 */ "VLBFF_V\0"
  /* 7133 */ "VLEFF_V\0"
  /* 7141 */ "VLHFF_V\0"
  /* 7149 */ "VLBUFF_V\0"
  /* 7158 */ "VLHUFF_V\0"
  /* 7167 */ "VLWUFF_V\0"
  /* 7176 */ "VLWFF_V\0"
  /* 7184 */ "VFWCVT_F_F_V\0"
  /* 7197 */ "VFCVT_XU_F_V\0"
  /* 7210 */ "VFWCVT_XU_F_V\0"
  /* 7224 */ "VFCVT_X_F_V\0"
  /* 7236 */ "VFWCVT_X_F_V\0"
  /* 7249 */ "VLH_V\0"
  /* 7255 */ "VLSH_V\0"
  /* 7262 */ "VSSH_V\0"
  /* 7269 */ "VSH_V\0"
  /* 7275 */ "VLXH_V\0"
  /* 7282 */ "VSXH_V\0"
  /* 7289 */ "VSUXH_V\0"
  /* 7297 */ "VL1R_V\0"
  /* 7304 */ "VS1R_V\0"
  /* 7311 */ "VMV1R_V\0"
  /* 7319 */ "VMV2R_V\0"
  /* 7327 */ "VMV4R_V\0"
  /* 7335 */ "VMV8R_V\0"
  /* 7343 */ "VFCLASS_V\0"
  /* 7353 */ "VFSQRT_V\0"
  /* 7362 */ "VLBU_V\0"
  /* 7369 */ "VLSBU_V\0"
  /* 7377 */ "VLXBU_V\0"
  /* 7385 */ "VLHU_V\0"
  /* 7392 */ "VLSHU_V\0"
  /* 7400 */ "VLXHU_V\0"
  /* 7408 */ "VLWU_V\0"
  /* 7415 */ "VLSWU_V\0"
  /* 7423 */ "VLXWU_V\0"
  /* 7431 */ "VFCVT_F_XU_V\0"
  /* 7444 */ "VFWCVT_F_XU_V\0"
  /* 7458 */ "VMV_V_V\0"
  /* 7466 */ "VLW_V\0"
  /* 7472 */ "VLSW_V\0"
  /* 7479 */ "VSSW_V\0"
  /* 7486 */ "VSW_V\0"
  /* 7492 */ "VLXW_V\0"
  /* 7499 */ "VSXW_V\0"
  /* 7506 */ "VSUXW_V\0"
  /* 7514 */ "VFCVT_F_X_V\0"
  /* 7526 */ "VFWCVT_F_X_V\0"
  /* 7539 */ "CRC32W\0"
  /* 7546 */ "SRAW\0"
  /* 7551 */ "C_SUBW\0"
  /* 7558 */ "CRC32CW\0"
  /* 7566 */ "GORCW\0"
  /* 7572 */ "C_ADDW\0"
  /* 7579 */ "CLMULHW\0"
  /* 7587 */ "SRAIW\0"
  /* 7593 */ "GORCIW\0"
  /* 7600 */ "C_ADDIW\0"
  /* 7608 */ "SLLIW\0"
  /* 7614 */ "SRLIW\0"
  /* 7620 */ "SLOIW\0"
  /* 7626 */ "SROIW\0"
  /* 7632 */ "SBCLRIW\0"
  /* 7640 */ "RORIW\0"
  /* 7646 */ "FSRIW\0"
  /* 7652 */ "SBSETIW\0"
  /* 7660 */ "GREVIW\0"
  /* 7667 */ "SBINVIW\0"
  /* 7675 */ "PACKW\0"
  /* 7681 */ "UNSHFLW\0"
  /* 7689 */ "C_FLW\0"
  /* 7695 */ "PseudoFLW\0"
  /* 7705 */ "SLLW\0"
  /* 7710 */ "ROLW\0"
  /* 7715 */ "SRLW\0"
  /* 7720 */ "FSLW\0"
  /* 7725 */ "CLMULW\0"
  /* 7732 */ "C_LW\0"
  /* 7737 */ "PseudoLW\0"
  /* 7746 */ "REMW\0"
  /* 7751 */ "SLOW\0"
  /* 7756 */ "G_FPOW\0"
  /* 7763 */ "SROW\0"
  /* 7768 */ "BDEPW\0"
  /* 7774 */ "BFPW\0"
  /* 7779 */ "SBCLRW\0"
  /* 7786 */ "CLMULRW\0"
  /* 7794 */ "RORW\0"
  /* 7799 */ "CSRRW\0"
  /* 7805 */ "FSRW\0"
  /* 7810 */ "C_FSW\0"
  /* 7816 */ "PseudoFSW\0"
  /* 7826 */ "C_SW\0"
  /* 7831 */ "PseudoSW\0"
  /* 7840 */ "SBSETW\0"
  /* 7847 */ "PCNTW\0"
  /* 7853 */ "SBEXTW\0"
  /* 7860 */ "C_ZEXTW\0"
  /* 7868 */ "SUBUW\0"
  /* 7874 */ "ADDUW\0"
  /* 7880 */ "SLLIUW\0"
  /* 7887 */ "PACKUW\0"
  /* 7894 */ "REMUW\0"
  /* 7900 */ "DIVUW\0"
  /* 7906 */ "GREVW\0"
  /* 7912 */ "DIVW\0"
  /* 7917 */ "SBINVW\0"
  /* 7924 */ "CLZW\0"
  /* 7929 */ "CTZW\0"
  /* 7934 */ "SC_W\0"
  /* 7939 */ "AMOADD_W\0"
  /* 7948 */ "AMOAND_W\0"
  /* 7957 */ "FCVT_D_W\0"
  /* 7966 */ "VFNCVT_ROD_F_F_W\0"
  /* 7983 */ "VFNCVT_F_F_W\0"
  /* 7996 */ "VFNCVT_XU_F_W\0"
  /* 8010 */ "VFNCVT_X_F_W\0"
  /* 8023 */ "AMOMIN_W\0"
  /* 8032 */ "AMOSWAP_W\0"
  /* 8042 */ "LR_W\0"
  /* 8047 */ "AMOOR_W\0"
  /* 8055 */ "AMOXOR_W\0"
  /* 8064 */ "FCVT_S_W\0"
  /* 8073 */ "AMOMINU_W\0"
  /* 8083 */ "AMOMAXU_W\0"
  /* 8093 */ "VFNCVT_F_XU_W\0"
  /* 8107 */ "AMOMAX_W\0"
  /* 8116 */ "VFNCVT_F_X_W\0"
  /* 8129 */ "FMV_X_W\0"
  /* 8137 */ "G_SMAX\0"
  /* 8144 */ "G_UMAX\0"
  /* 8151 */ "G_ATOMICRMW_UMAX\0"
  /* 8168 */ "G_ATOMICRMW_MAX\0"
  /* 8184 */ "G_FRAME_INDEX\0"
  /* 8198 */ "CMIX\0"
  /* 8203 */ "VSSRA_VX\0"
  /* 8212 */ "VSRA_VX\0"
  /* 8220 */ "VASUB_VX\0"
  /* 8229 */ "VNMSUB_VX\0"
  /* 8239 */ "VRSUB_VX\0"
  /* 8248 */ "VSSUB_VX\0"
  /* 8257 */ "VSUB_VX\0"
  /* 8265 */ "VWSUB_VX\0"
  /* 8274 */ "VNMSAC_VX\0"
  /* 8284 */ "VMSBC_VX\0"
  /* 8293 */ "VMACC_VX\0"
  /* 8302 */ "VWMACC_VX\0"
  /* 8312 */ "VMADC_VX\0"
  /* 8321 */ "VAADD_VX\0"
  /* 8330 */ "VMADD_VX\0"
  /* 8339 */ "VSADD_VX\0"
  /* 8348 */ "VADD_VX\0"
  /* 8356 */ "VWADD_VX\0"
  /* 8365 */ "VAND_VX\0"
  /* 8373 */ "VMSLE_VX\0"
  /* 8382 */ "VMSNE_VX\0"
  /* 8391 */ "VMULH_VX\0"
  /* 8400 */ "VSLL_VX\0"
  /* 8408 */ "VSSRL_VX\0"
  /* 8417 */ "VSRL_VX\0"
  /* 8425 */ "VSMUL_VX\0"
  /* 8434 */ "VMUL_VX\0"
  /* 8442 */ "VWMUL_VX\0"
  /* 8451 */ "VREM_VX\0"
  /* 8459 */ "VMIN_VX\0"
  /* 8467 */ "VSLIDE1DOWN_VX\0"
  /* 8482 */ "VSLIDEDOWN_VX\0"
  /* 8496 */ "VSLIDE1UP_VX\0"
  /* 8509 */ "VSLIDEUP_VX\0"
  /* 8521 */ "VMSEQ_VX\0"
  /* 8530 */ "VRGATHER_VX\0"
  /* 8542 */ "VOR_VX\0"
  /* 8549 */ "VXOR_VX\0"
  /* 8557 */ "VWMACCUS_VX\0"
  /* 8569 */ "VMSGT_VX\0"
  /* 8578 */ "VMSLT_VX\0"
  /* 8587 */ "VASUBU_VX\0"
  /* 8597 */ "VSSUBU_VX\0"
  /* 8607 */ "VWSUBU_VX\0"
  /* 8617 */ "VWMACCU_VX\0"
  /* 8628 */ "VAADDU_VX\0"
  /* 8638 */ "VSADDU_VX\0"
  /* 8648 */ "VWADDU_VX\0"
  /* 8658 */ "VMSLEU_VX\0"
  /* 8668 */ "VMULHU_VX\0"
  /* 8678 */ "VWMULU_VX\0"
  /* 8688 */ "VREMU_VX\0"
  /* 8697 */ "VMINU_VX\0"
  /* 8706 */ "VWMACCSU_VX\0"
  /* 8718 */ "VMULHSU_VX\0"
  /* 8729 */ "VWMULSU_VX\0"
  /* 8740 */ "VMSGTU_VX\0"
  /* 8750 */ "VMSLTU_VX\0"
  /* 8760 */ "VDIVU_VX\0"
  /* 8769 */ "VMAXU_VX\0"
  /* 8778 */ "VDIV_VX\0"
  /* 8786 */ "VMAX_VX\0"
  /* 8794 */ "VNSRA_WX\0"
  /* 8803 */ "VWSUB_WX\0"
  /* 8812 */ "VWADD_WX\0"
  /* 8821 */ "VNSRL_WX\0"
  /* 8830 */ "VNCLIP_WX\0"
  /* 8840 */ "VWSUBU_WX\0"
  /* 8850 */ "VWADDU_WX\0"
  /* 8860 */ "VNCLIPU_WX\0"
  /* 8871 */ "FMV_D_X\0"
  /* 8879 */ "VMV_S_X\0"
  /* 8887 */ "VMV_V_X\0"
  /* 8895 */ "FMV_W_X\0"
  /* 8903 */ "COPY\0"
  /* 8908 */ "C_BNEZ\0"
  /* 8915 */ "CLZ\0"
  /* 8919 */ "G_CTLZ\0"
  /* 8926 */ "C_BEQZ\0"
  /* 8933 */ "CTZ\0"
  /* 8937 */ "G_CTTZ\0"
  /* 8944 */ "ReadCycleWide\0"
  /* 8958 */ "PseudoCALLReg\0"
  /* 8972 */ "PseudoAddTPRel\0"
  /* 8987 */ "BuildPairF64Pseudo\0"
  /* 9006 */ "SplitF64Pseudo\0"
  /* 9021 */ "PseudoJump\0"
  /* 9032 */ "PseudoTAILIndirect\0"
  /* 9051 */ "PseudoCALLIndirect\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned RISCVInstrNameIndices[] = {
    2159U, 3607U, 4523U, 3890U, 2621U, 2602U, 2630U, 2803U, 
    1929U, 1944U, 1545U, 1971U, 4959U, 1457U, 2611U, 1304U, 
    8903U, 1396U, 5831U, 896U, 4025U, 2780U, 5772U, 948U, 
    4236U, 2034U, 5761U, 1407U, 4138U, 4125U, 4558U, 5516U, 
    5546U, 2712U, 2759U, 2732U, 2647U, 773U, 500U, 3421U, 
    6117U, 6124U, 3473U, 3480U, 874U, 4779U, 4752U, 1543U, 
    2157U, 8184U, 1467U, 5464U, 4897U, 5846U, 4914U, 4706U, 
    570U, 4936U, 5783U, 4879U, 5878U, 1482U, 544U, 930U, 
    4583U, 714U, 658U, 688U, 699U, 639U, 669U, 1436U, 
    1420U, 4976U, 1985U, 2002U, 789U, 506U, 880U, 851U, 
    4784U, 4758U, 8168U, 3867U, 8151U, 3850U, 750U, 477U, 
    1296U, 921U, 5483U, 522U, 5006U, 5926U, 562U, 5638U, 
    5626U, 5821U, 2026U, 5919U, 1958U, 5935U, 2681U, 4649U, 
    4635U, 2674U, 4642U, 4085U, 4078U, 5474U, 3962U, 1325U, 
    3946U, 1288U, 3954U, 1317U, 3938U, 1280U, 3982U, 3974U, 
    2087U, 2079U, 5454U, 5444U, 5434U, 5424U, 729U, 456U, 
    3394U, 383U, 632U, 6096U, 3452U, 7756U, 4255U, 317U, 
    2019U, 309U, 0U, 1916U, 5911U, 534U, 2239U, 2280U, 
    4051U, 4060U, 4890U, 3824U, 1491U, 3639U, 3649U, 1333U, 
    1348U, 3617U, 3628U, 779U, 2586U, 3836U, 8137U, 3843U, 
    8144U, 4518U, 5570U, 5602U, 5581U, 4721U, 8937U, 1525U, 
    8919U, 1507U, 4117U, 4034U, 1444U, 2698U, 4929U, 3883U, 
    5855U, 4686U, 5794U, 5802U, 5888U, 4545U, 1383U, 591U, 
    736U, 463U, 3401U, 6103U, 3459U, 389U, 5863U, 4602U, 
    4618U, 3921U, 4221U, 8987U, 8972U, 109U, 325U, 4536U, 
    909U, 2792U, 9051U, 8958U, 154U, 348U, 827U, 7695U, 
    971U, 7816U, 9021U, 374U, 805U, 1367U, 432U, 5942U, 
    842U, 2095U, 5963U, 2198U, 364U, 7737U, 6056U, 52U, 
    281U, 199U, 80U, 24U, 252U, 170U, 227U, 132U, 
    5530U, 441U, 986U, 2104U, 7831U, 2687U, 9032U, 8944U, 
    4799U, 4825U, 4851U, 9006U, 732U, 2141U, 7602U, 6049U, 
    7874U, 7574U, 6043U, 1048U, 4270U, 2957U, 2828U, 7939U, 
    4396U, 3116U, 3272U, 1057U, 4282U, 2972U, 2840U, 7948U, 
    4408U, 3131U, 3284U, 1221U, 4363U, 3074U, 2921U, 8083U, 
    4489U, 3233U, 3365U, 1254U, 4376U, 3090U, 2934U, 8107U, 
    4502U, 3249U, 3378U, 1201U, 4350U, 3058U, 2908U, 8073U, 
    4476U, 3217U, 3352U, 1103U, 4294U, 2987U, 2852U, 8023U, 
    4420U, 3146U, 3296U, 1142U, 4327U, 3029U, 2885U, 8047U, 
    4453U, 3188U, 3329U, 1121U, 4306U, 3002U, 2864U, 8032U, 
    4432U, 3161U, 3308U, 1150U, 4338U, 3043U, 2896U, 8055U, 
    4464U, 3202U, 3340U, 864U, 2148U, 3819U, 608U, 4042U, 
    7768U, 4514U, 5906U, 7854U, 4047U, 7774U, 1363U, 5952U, 
    5577U, 6022U, 4069U, 4699U, 4738U, 1403U, 3415U, 2072U, 
    7579U, 4674U, 7786U, 7725U, 8915U, 7924U, 8198U, 6142U, 
    417U, 424U, 721U, 2058U, 7558U, 625U, 2051U, 7539U, 
    619U, 2132U, 4953U, 2248U, 7799U, 2506U, 8933U, 7929U, 
    767U, 2139U, 4150U, 3906U, 7600U, 3990U, 9U, 4106U, 
    7572U, 5696U, 868U, 2146U, 8926U, 8908U, 2572U, 821U, 
    4161U, 7689U, 4191U, 965U, 4176U, 7810U, 4206U, 2568U, 
    2596U, 4661U, 4656U, 837U, 4169U, 2193U, 5719U, 2274U, 
    5729U, 7732U, 4199U, 6131U, 5751U, 1923U, 4100U, 5740U, 
    5815U, 4774U, 981U, 4184U, 2171U, 5668U, 5707U, 2119U, 
    5654U, 2178U, 5682U, 494U, 7551U, 7826U, 4214U, 4092U, 
    4746U, 7860U, 6099U, 6032U, 7900U, 7912U, 5496U, 2574U, 
    2706U, 1024U, 5247U, 1159U, 5341U, 3434U, 5985U, 5271U, 
    7957U, 6066U, 1191U, 5364U, 1087U, 5310U, 1168U, 3443U, 
    5995U, 8064U, 6076U, 1211U, 5374U, 1238U, 5391U, 1231U, 
    5384U, 1298U, 2552U, 4015U, 1131U, 5335U, 823U, 1066U, 
    5280U, 1177U, 5350U, 7685U, 1031U, 5254U, 1247U, 5400U, 
    1096U, 5319U, 1002U, 5230U, 1080U, 5303U, 8871U, 8895U, 
    1272U, 8129U, 1039U, 5262U, 1010U, 5238U, 967U, 1112U, 
    5326U, 1263U, 5407U, 1072U, 5295U, 3390U, 7720U, 1183U, 
    5356U, 4875U, 2234U, 7646U, 7805U, 995U, 5223U, 7812U, 
    614U, 2126U, 7593U, 7566U, 6091U, 2289U, 7660U, 7906U, 
    2598U, 4663U, 438U, 5948U, 824U, 2076U, 5959U, 1137U, 
    4319U, 3018U, 2877U, 8042U, 4445U, 3177U, 3321U, 2276U, 
    7686U, 6062U, 8140U, 6086U, 3839U, 6010U, 5501U, 3397U, 
    2074U, 6015U, 5957U, 7727U, 4683U, 2225U, 3917U, 2581U, 
    2066U, 5979U, 7887U, 7675U, 5649U, 7847U, 3455U, 6005U, 
    7894U, 7746U, 2812U, 7710U, 4695U, 2224U, 7640U, 7794U, 
    447U, 4668U, 2217U, 7632U, 7779U, 5905U, 2267U, 7853U, 
    6136U, 2295U, 7667U, 7917U, 5540U, 2255U, 7652U, 7840U, 
    1019U, 4262U, 2946U, 2820U, 7934U, 4388U, 3105U, 3264U, 
    968U, 450U, 2113U, 402U, 2110U, 2669U, 2165U, 7683U, 
    2808U, 2173U, 7880U, 7608U, 7705U, 3970U, 2207U, 7620U, 
    7751U, 5622U, 2262U, 5973U, 6027U, 413U, 2121U, 7587U, 
    7546U, 5506U, 2816U, 2180U, 7614U, 7715U, 4011U, 2212U, 
    7626U, 7763U, 459U, 7868U, 7553U, 6037U, 7813U, 4094U, 
    2667U, 2163U, 7681U, 5511U, 6741U, 8628U, 6384U, 8321U, 
    3509U, 3688U, 3750U, 2346U, 6441U, 8348U, 2354U, 6468U, 
    8365U, 6700U, 8587U, 6164U, 8220U, 3708U, 6863U, 8760U, 
    6890U, 8778U, 1696U, 6393U, 7343U, 7431U, 7514U, 7197U, 
    7224U, 1839U, 6881U, 3810U, 1652U, 6312U, 1705U, 6402U, 
    1858U, 6898U, 3487U, 1792U, 6609U, 1608U, 6249U, 1567U, 
    6182U, 1773U, 6556U, 5286U, 1898U, 1907U, 7983U, 8093U, 
    8116U, 7966U, 7996U, 8010U, 1662U, 6322U, 1715U, 6412U, 
    1618U, 6259U, 1577U, 6192U, 1848U, 5200U, 5119U, 5092U, 
    5044U, 1588U, 1801U, 6626U, 1867U, 6915U, 1763U, 6521U, 
    7353U, 1558U, 6173U, 1726U, 6449U, 1888U, 6954U, 7184U, 
    7444U, 7526U, 7210U, 7236U, 1685U, 6354U, 1641U, 6292U, 
    1782U, 6582U, 1673U, 6333U, 1629U, 6280U, 5105U, 5067U, 
    1598U, 6230U, 1878U, 6935U, 7071U, 3770U, 7297U, 7125U, 
    7149U, 7362U, 7023U, 7133U, 7077U, 7141U, 7158U, 7385U, 
    7249U, 7369U, 7029U, 7083U, 7392U, 7255U, 7415U, 7472U, 
    7176U, 7167U, 7408U, 7466U, 7377U, 7049U, 7103U, 7400U, 
    7275U, 7423U, 7492U, 6345U, 8293U, 2328U, 3499U, 6375U, 
    3678U, 8312U, 3740U, 6423U, 8330U, 3584U, 3529U, 6872U, 
    8769U, 6907U, 8786U, 3518U, 3697U, 3759U, 1812U, 6637U, 
    1736U, 1821U, 1745U, 6476U, 1830U, 6682U, 1754U, 6494U, 
    6810U, 8697U, 6618U, 8459U, 3538U, 3556U, 3596U, 3548U, 
    6303U, 3659U, 8284U, 3721U, 3786U, 2431U, 6646U, 8521U, 
    2496U, 8740U, 2467U, 8569U, 3794U, 2486U, 6771U, 8658U, 
    2362U, 6485U, 8373U, 6853U, 8750U, 6691U, 8578U, 2371U, 
    6503U, 8382U, 3802U, 6831U, 8718U, 6781U, 8668U, 6512U, 
    8391U, 6574U, 8434U, 7311U, 7319U, 7327U, 7335U, 8879U, 
    2560U, 7458U, 8887U, 5416U, 3565U, 3575U, 2541U, 7012U, 
    8860U, 2531U, 6982U, 8830U, 6270U, 8274U, 6203U, 8229U, 
    2513U, 6926U, 8794U, 2522U, 6973U, 8821U, 2452U, 6667U, 
    8542U, 3778U, 5033U, 5188U, 5212U, 5176U, 5131U, 5142U, 
    5056U, 5152U, 6801U, 8688U, 6601U, 8451U, 2440U, 6655U, 
    8530U, 2319U, 8239U, 7304U, 2476U, 6751U, 8638U, 2337U, 
    6432U, 8339U, 3669U, 3731U, 7043U, 3427U, 2185U, 7097U, 
    7269U, 8467U, 8496U, 2405U, 8482U, 2419U, 8509U, 2380U, 
    6531U, 8400U, 6565U, 8425U, 2311U, 6156U, 8212U, 2397U, 
    6548U, 8417U, 7036U, 7090U, 7262U, 2302U, 6147U, 8203U, 
    2388U, 6539U, 8408U, 6710U, 8597U, 6213U, 8248U, 7479U, 
    6222U, 8257U, 7063U, 7117U, 7289U, 7506U, 7486U, 7056U, 
    7110U, 7282U, 7499U, 6761U, 8648U, 7002U, 8850U, 6459U, 
    8356U, 6964U, 8812U, 6819U, 8706U, 8557U, 6730U, 8617U, 
    6365U, 8302U, 6842U, 8729U, 6791U, 8678U, 6592U, 8442U, 
    5163U, 5080U, 6720U, 8607U, 6992U, 8840U, 6240U, 8265U, 
    6945U, 8803U, 2459U, 6674U, 8549U, 2153U, 4681U, 4742U, 
    2229U, 
};

static inline void InitRISCVMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, nullptr, nullptr, 977);
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
  InitMCInstrInfo(RISCVInsts, RISCVInstrNameIndices, RISCVInstrNameData, nullptr, nullptr, 977);
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
  VTypeIOp = 0,
  bare_symbol = 1,
  c_lui_imm = 2,
  call_symbol = 3,
  csr_sysreg = 4,
  f32imm = 5,
  f64imm = 6,
  fencearg = 7,
  frmarg = 8,
  i16imm = 9,
  i1imm = 10,
  i32imm = 11,
  i64imm = 12,
  i8imm = 13,
  immzero = 14,
  ixlenimm = 15,
  ixlenimm_li = 16,
  pseudo_jump_symbol = 17,
  ptype0 = 18,
  ptype1 = 19,
  ptype2 = 20,
  ptype3 = 21,
  ptype4 = 22,
  ptype5 = 23,
  shfl_uimm = 24,
  simm10_lsb0000nonzero = 25,
  simm12 = 26,
  simm12_lsb0 = 27,
  simm12_plus1 = 28,
  simm13_lsb0 = 29,
  simm21_lsb0_jal = 30,
  simm5 = 31,
  simm5_plus1 = 32,
  simm6 = 33,
  simm6nonzero = 34,
  simm9_lsb0 = 35,
  tprel_add_symbol = 36,
  type0 = 37,
  type1 = 38,
  type2 = 39,
  type3 = 40,
  type4 = 41,
  type5 = 42,
  uimm10_lsb00nonzero = 43,
  uimm20_auipc = 44,
  uimm20_lui = 45,
  uimm5 = 46,
  uimm7_lsb00 = 47,
  uimm8_lsb00 = 48,
  uimm8_lsb000 = 49,
  uimm9_lsb000 = 50,
  uimmlog2xlen = 51,
  uimmlog2xlennonzero = 52,
  untyped_imm_0 = 53,
  GPRMemAtomic = 54,
  VMaskOp = 55,
  VRegOp = 56,
  FPR32 = 57,
  FPR32C = 58,
  FPR64 = 59,
  FPR64C = 60,
  GPR = 61,
  GPRC = 62,
  GPRNoX0 = 63,
  GPRNoX0X2 = 64,
  GPRTC = 65,
  GPRX0 = 66,
  SP = 67,
  VM = 68,
  VMV0 = 69,
  VR = 70,
  VRM2 = 71,
  VRM4 = 72,
  VRM8 = 73,
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
    37,
    40,
    40,
    42,
    43,
    43,
    43,
    43,
    43,
    43,
    45,
    48,
    48,
    51,
    54,
    57,
    60,
    63,
    66,
    69,
    72,
    75,
    78,
    79,
    80,
    82,
    84,
    87,
    89,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    109,
    111,
    113,
    114,
    116,
    118,
    120,
    125,
    130,
    135,
    137,
    142,
    147,
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
    187,
    190,
    192,
    194,
    195,
    196,
    197,
    199,
    201,
    203,
    205,
    206,
    209,
    211,
    214,
    216,
    219,
    222,
    225,
    229,
    233,
    237,
    241,
    245,
    249,
    254,
    258,
    263,
    267,
    272,
    276,
    281,
    285,
    289,
    292,
    295,
    298,
    301,
    304,
    307,
    310,
    313,
    316,
    320,
    324,
    327,
    330,
    333,
    335,
    337,
    339,
    341,
    343,
    345,
    347,
    349,
    351,
    353,
    355,
    357,
    359,
    362,
    364,
    367,
    370,
    373,
    376,
    379,
    382,
    385,
    388,
    391,
    394,
    397,
    400,
    401,
    404,
    408,
    411,
    415,
    417,
    419,
    421,
    423,
    425,
    427,
    429,
    431,
    433,
    435,
    437,
    439,
    441,
    443,
    445,
    447,
    449,
    452,
    455,
    458,
    461,
    464,
    467,
    471,
    473,
    475,
    477,
    479,
    481,
    484,
    488,
    493,
    498,
    499,
    501,
    502,
    503,
    505,
    511,
    517,
    520,
    523,
    526,
    529,
    531,
    533,
    535,
    537,
    539,
    541,
    543,
    545,
    547,
    549,
    551,
    553,
    555,
    561,
    569,
    577,
    583,
    589,
    596,
    603,
    609,
    616,
    616,
    619,
    622,
    625,
    628,
    629,
    630,
    632,
    638,
    644,
    650,
    653,
    656,
    659,
    662,
    665,
    668,
    671,
    674,
    677,
    680,
    683,
    686,
    689,
    692,
    695,
    698,
    701,
    704,
    707,
    710,
    713,
    716,
    719,
    722,
    725,
    728,
    731,
    734,
    737,
    740,
    743,
    746,
    749,
    752,
    755,
    758,
    761,
    764,
    767,
    770,
    773,
    776,
    779,
    782,
    785,
    788,
    791,
    794,
    797,
    800,
    803,
    806,
    809,
    812,
    815,
    818,
    821,
    824,
    827,
    830,
    833,
    836,
    839,
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
    901,
    904,
    907,
    910,
    913,
    916,
    919,
    922,
    925,
    928,
    931,
    934,
    936,
    939,
    942,
    945,
    948,
    951,
    954,
    957,
    960,
    963,
    965,
    967,
    971,
    975,
    977,
    979,
    981,
    983,
    985,
    987,
    989,
    991,
    994,
    997,
    1000,
    1003,
    1006,
    1009,
    1011,
    1013,
    1016,
    1019,
    1022,
    1025,
    1028,
    1031,
    1034,
    1037,
    1040,
    1043,
    1046,
    1049,
    1051,
    1053,
    1053,
    1056,
    1059,
    1062,
    1065,
    1068,
    1071,
    1074,
    1077,
    1078,
    1079,
    1080,
    1081,
    1084,
    1087,
    1089,
    1091,
    1093,
    1095,
    1098,
    1101,
    1103,
    1105,
    1107,
    1107,
    1108,
    1110,
    1113,
    1116,
    1119,
    1122,
    1124,
    1127,
    1130,
    1132,
    1135,
    1137,
    1140,
    1143,
    1146,
    1149,
    1149,
    1152,
    1154,
    1157,
    1160,
    1163,
    1166,
    1168,
    1168,
    1168,
    1172,
    1176,
    1178,
    1180,
    1183,
    1186,
    1188,
    1190,
    1192,
    1195,
    1198,
    1201,
    1204,
    1207,
    1210,
    1213,
    1216,
    1219,
    1222,
    1225,
    1228,
    1231,
    1235,
    1239,
    1241,
    1241,
    1241,
    1244,
    1247,
    1250,
    1253,
    1256,
    1259,
    1262,
    1265,
    1270,
    1275,
    1278,
    1281,
    1284,
    1287,
    1292,
    1297,
    1301,
    1305,
    1307,
    1309,
    1311,
    1313,
    1318,
    1323,
    1328,
    1333,
    1336,
    1339,
    1342,
    1345,
    1348,
    1351,
    1354,
    1358,
    1362,
    1365,
    1368,
    1372,
    1376,
    1380,
    1384,
    1388,
    1392,
    1395,
    1398,
    1401,
    1404,
    1407,
    1410,
    1413,
    1416,
    1419,
    1421,
    1424,
    1427,
    1430,
    1433,
    1436,
    1439,
    1441,
    1443,
    1445,
    1447,
    1449,
    1451,
    1453,
    1455,
    1457,
    1460,
    1463,
    1466,
    1469,
    1472,
    1475,
    1477,
    1480,
    1483,
    1486,
    1489,
    1492,
    1495,
    1498,
    1501,
    1504,
    1507,
    1510,
    1513,
    1516,
    1518,
    1520,
    1523,
    1526,
    1529,
    1532,
    1535,
    1538,
    1541,
    1544,
    1547,
    1550,
    1553,
    1556,
    1559,
    1562,
    1565,
    1568,
    1571,
    1574,
    1577,
    1580,
    1583,
    1586,
    1589,
    1592,
    1595,
    1598,
    1601,
    1604,
    1607,
    1610,
    1613,
    1616,
    1619,
    1622,
    1625,
    1627,
    1629,
    1631,
    1634,
    1637,
    1640,
    1643,
    1646,
    1649,
    1652,
    1655,
    1658,
    1661,
    1664,
    1667,
    1670,
    1673,
    1676,
    1679,
    1682,
    1685,
    1688,
    1691,
    1694,
    1696,
    1699,
    1702,
    1705,
    1708,
    1711,
    1714,
    1717,
    1720,
    1723,
    1726,
    1729,
    1732,
    1735,
    1735,
    1738,
    1741,
    1744,
    1746,
    1750,
    1754,
    1758,
    1762,
    1766,
    1770,
    1774,
    1778,
    1782,
    1786,
    1790,
    1794,
    1798,
    1802,
    1806,
    1810,
    1814,
    1817,
    1821,
    1825,
    1829,
    1833,
    1837,
    1841,
    1844,
    1847,
    1850,
    1853,
    1856,
    1860,
    1864,
    1867,
    1871,
    1875,
    1879,
    1883,
    1887,
    1891,
    1895,
    1899,
    1903,
    1907,
    1911,
    1915,
    1919,
    1923,
    1927,
    1929,
    1931,
    1933,
    1936,
    1939,
    1942,
    1945,
    1948,
    1951,
    1955,
    1959,
    1963,
    1967,
    1971,
    1975,
    1979,
    1983,
    1987,
    1991,
    1995,
    1999,
    2003,
    2007,
    2011,
    2015,
    2019,
    2023,
    2027,
    2031,
    2034,
    2038,
    2042,
    2046,
    2050,
    2054,
    2058,
    2061,
    2064,
    2067,
    2070,
    2073,
    2077,
    2081,
    2085,
    2089,
    2093,
    2097,
    2101,
    2105,
    2109,
    2113,
    2117,
    2121,
    2125,
    2129,
    2133,
    2137,
    2139,
    2142,
    2144,
    2147,
    2150,
    2153,
    2156,
    2159,
    2162,
    2165,
    2168,
    2171,
    2174,
    2178,
    2182,
    2186,
    2190,
    2194,
    2198,
    2202,
    2205,
    2208,
    2211,
    2214,
    2218,
    2222,
    2226,
    2230,
    2234,
    2238,
    2242,
    2246,
    2250,
    2253,
    2257,
    2260,
    2264,
    2267,
    2271,
    2275,
    2279,
    2282,
    2285,
    2289,
    2293,
    2297,
    2301,
    2305,
    2309,
    2313,
    2317,
    2321,
    2325,
    2329,
    2333,
    2337,
    2341,
    2345,
    2349,
    2353,
    2357,
    2361,
    2365,
    2369,
    2372,
    2375,
    2378,
    2381,
    2384,
    2388,
    2391,
    2395,
    2398,
    2402,
    2406,
    2410,
    2414,
    2418,
    2422,
    2426,
    2429,
    2433,
    2437,
    2441,
    2445,
    2449,
    2453,
    2457,
    2461,
    2465,
    2469,
    2473,
    2477,
    2481,
    2484,
    2488,
    2492,
    2496,
    2500,
    2504,
    2508,
    2512,
    2516,
    2518,
    2520,
    2522,
    2524,
    2526,
    2528,
    2530,
    2532,
    2534,
    2537,
    2540,
    2544,
    2548,
    2552,
    2556,
    2560,
    2564,
    2568,
    2572,
    2576,
    2580,
    2584,
    2588,
    2592,
    2596,
    2600,
    2604,
    2608,
    2612,
    2616,
    2619,
    2623,
    2627,
    2631,
    2635,
    2639,
    2643,
    2647,
    2651,
    2655,
    2659,
    2663,
    2667,
    2671,
    2675,
    2679,
    2683,
    2687,
    2689,
    2693,
    2697,
    2701,
    2705,
    2709,
    2713,
    2717,
    2721,
    2724,
    2727,
    2730,
    2733,
    2736,
    2740,
    2744,
    2748,
    2752,
    2756,
    2760,
    2764,
    2768,
    2772,
    2776,
    2780,
    2784,
    2788,
    2792,
    2796,
    2800,
    2804,
    2808,
    2812,
    2816,
    2820,
    2824,
    2828,
    2832,
    2836,
    2840,
    2844,
    2848,
    2852,
    2856,
    2860,
    2864,
    2868,
    2872,
    2876,
    2880,
    2884,
    2887,
    2891,
    2895,
    2899,
    2903,
    2907,
    2911,
    2915,
    2919,
    2923,
    2927,
    2931,
    2935,
    2939,
    2943,
    2947,
    2951,
    2955,
    2959,
    2963,
    2967,
    2971,
    2975,
    2979,
    2983,
    2987,
    2991,
    2995,
    2999,
    3003,
    3007,
    3011,
    3015,
    3019,
    3023,
    3027,
    3031,
    3035,
    3039,
    3041,
    3044,
    3047,
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
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, 
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
    OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
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
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
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
    OpTypes::ptype0, OpTypes::ptype0, OpTypes::type1, 
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
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::uimm20_auipc, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm13_lsb0, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::csr_sysreg, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPRC, OpTypes::GPRC, 
    /**/
    OpTypes::simm6nonzero, 
    OpTypes::GPRC, OpTypes::GPRC, 
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
    OpTypes::GPRC, OpTypes::GPRC, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::FPR64, OpTypes::FPR64, OpTypes::FPR64, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::FPR32, OpTypes::FPR32, OpTypes::frmarg, 
    OpTypes::FPR32, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::shfl_uimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
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
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimmlog2xlen, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::uimm5, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::shfl_uimm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::FPR32, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::FPR32, 
    OpTypes::VRegOp, OpTypes::FPR32, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::FPR32, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::simm5, 
    OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMV0, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::VTypeIOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::uimm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::GPR, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::simm5, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::VMaskOp, 
    OpTypes::VRegOp, OpTypes::VRegOp, OpTypes::GPR, OpTypes::VMaskOp, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::simm12, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace RISCV
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE


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
extern const MCRegisterClass AArch64MCRegisterClasses[];

namespace AArch64 {
enum {
  NoRegister,
  FFR = 1,
  FP = 2,
  LR = 3,
  NZCV = 4,
  SP = 5,
  VG = 6,
  WSP = 7,
  WZR = 8,
  XZR = 9,
  B0 = 10,
  B1 = 11,
  B2 = 12,
  B3 = 13,
  B4 = 14,
  B5 = 15,
  B6 = 16,
  B7 = 17,
  B8 = 18,
  B9 = 19,
  B10 = 20,
  B11 = 21,
  B12 = 22,
  B13 = 23,
  B14 = 24,
  B15 = 25,
  B16 = 26,
  B17 = 27,
  B18 = 28,
  B19 = 29,
  B20 = 30,
  B21 = 31,
  B22 = 32,
  B23 = 33,
  B24 = 34,
  B25 = 35,
  B26 = 36,
  B27 = 37,
  B28 = 38,
  B29 = 39,
  B30 = 40,
  B31 = 41,
  D0 = 42,
  D1 = 43,
  D2 = 44,
  D3 = 45,
  D4 = 46,
  D5 = 47,
  D6 = 48,
  D7 = 49,
  D8 = 50,
  D9 = 51,
  D10 = 52,
  D11 = 53,
  D12 = 54,
  D13 = 55,
  D14 = 56,
  D15 = 57,
  D16 = 58,
  D17 = 59,
  D18 = 60,
  D19 = 61,
  D20 = 62,
  D21 = 63,
  D22 = 64,
  D23 = 65,
  D24 = 66,
  D25 = 67,
  D26 = 68,
  D27 = 69,
  D28 = 70,
  D29 = 71,
  D30 = 72,
  D31 = 73,
  H0 = 74,
  H1 = 75,
  H2 = 76,
  H3 = 77,
  H4 = 78,
  H5 = 79,
  H6 = 80,
  H7 = 81,
  H8 = 82,
  H9 = 83,
  H10 = 84,
  H11 = 85,
  H12 = 86,
  H13 = 87,
  H14 = 88,
  H15 = 89,
  H16 = 90,
  H17 = 91,
  H18 = 92,
  H19 = 93,
  H20 = 94,
  H21 = 95,
  H22 = 96,
  H23 = 97,
  H24 = 98,
  H25 = 99,
  H26 = 100,
  H27 = 101,
  H28 = 102,
  H29 = 103,
  H30 = 104,
  H31 = 105,
  P0 = 106,
  P1 = 107,
  P2 = 108,
  P3 = 109,
  P4 = 110,
  P5 = 111,
  P6 = 112,
  P7 = 113,
  P8 = 114,
  P9 = 115,
  P10 = 116,
  P11 = 117,
  P12 = 118,
  P13 = 119,
  P14 = 120,
  P15 = 121,
  Q0 = 122,
  Q1 = 123,
  Q2 = 124,
  Q3 = 125,
  Q4 = 126,
  Q5 = 127,
  Q6 = 128,
  Q7 = 129,
  Q8 = 130,
  Q9 = 131,
  Q10 = 132,
  Q11 = 133,
  Q12 = 134,
  Q13 = 135,
  Q14 = 136,
  Q15 = 137,
  Q16 = 138,
  Q17 = 139,
  Q18 = 140,
  Q19 = 141,
  Q20 = 142,
  Q21 = 143,
  Q22 = 144,
  Q23 = 145,
  Q24 = 146,
  Q25 = 147,
  Q26 = 148,
  Q27 = 149,
  Q28 = 150,
  Q29 = 151,
  Q30 = 152,
  Q31 = 153,
  S0 = 154,
  S1 = 155,
  S2 = 156,
  S3 = 157,
  S4 = 158,
  S5 = 159,
  S6 = 160,
  S7 = 161,
  S8 = 162,
  S9 = 163,
  S10 = 164,
  S11 = 165,
  S12 = 166,
  S13 = 167,
  S14 = 168,
  S15 = 169,
  S16 = 170,
  S17 = 171,
  S18 = 172,
  S19 = 173,
  S20 = 174,
  S21 = 175,
  S22 = 176,
  S23 = 177,
  S24 = 178,
  S25 = 179,
  S26 = 180,
  S27 = 181,
  S28 = 182,
  S29 = 183,
  S30 = 184,
  S31 = 185,
  W0 = 186,
  W1 = 187,
  W2 = 188,
  W3 = 189,
  W4 = 190,
  W5 = 191,
  W6 = 192,
  W7 = 193,
  W8 = 194,
  W9 = 195,
  W10 = 196,
  W11 = 197,
  W12 = 198,
  W13 = 199,
  W14 = 200,
  W15 = 201,
  W16 = 202,
  W17 = 203,
  W18 = 204,
  W19 = 205,
  W20 = 206,
  W21 = 207,
  W22 = 208,
  W23 = 209,
  W24 = 210,
  W25 = 211,
  W26 = 212,
  W27 = 213,
  W28 = 214,
  W29 = 215,
  W30 = 216,
  X0 = 217,
  X1 = 218,
  X2 = 219,
  X3 = 220,
  X4 = 221,
  X5 = 222,
  X6 = 223,
  X7 = 224,
  X8 = 225,
  X9 = 226,
  X10 = 227,
  X11 = 228,
  X12 = 229,
  X13 = 230,
  X14 = 231,
  X15 = 232,
  X16 = 233,
  X17 = 234,
  X18 = 235,
  X19 = 236,
  X20 = 237,
  X21 = 238,
  X22 = 239,
  X23 = 240,
  X24 = 241,
  X25 = 242,
  X26 = 243,
  X27 = 244,
  X28 = 245,
  Z0 = 246,
  Z1 = 247,
  Z2 = 248,
  Z3 = 249,
  Z4 = 250,
  Z5 = 251,
  Z6 = 252,
  Z7 = 253,
  Z8 = 254,
  Z9 = 255,
  Z10 = 256,
  Z11 = 257,
  Z12 = 258,
  Z13 = 259,
  Z14 = 260,
  Z15 = 261,
  Z16 = 262,
  Z17 = 263,
  Z18 = 264,
  Z19 = 265,
  Z20 = 266,
  Z21 = 267,
  Z22 = 268,
  Z23 = 269,
  Z24 = 270,
  Z25 = 271,
  Z26 = 272,
  Z27 = 273,
  Z28 = 274,
  Z29 = 275,
  Z30 = 276,
  Z31 = 277,
  Z0_HI = 278,
  Z1_HI = 279,
  Z2_HI = 280,
  Z3_HI = 281,
  Z4_HI = 282,
  Z5_HI = 283,
  Z6_HI = 284,
  Z7_HI = 285,
  Z8_HI = 286,
  Z9_HI = 287,
  Z10_HI = 288,
  Z11_HI = 289,
  Z12_HI = 290,
  Z13_HI = 291,
  Z14_HI = 292,
  Z15_HI = 293,
  Z16_HI = 294,
  Z17_HI = 295,
  Z18_HI = 296,
  Z19_HI = 297,
  Z20_HI = 298,
  Z21_HI = 299,
  Z22_HI = 300,
  Z23_HI = 301,
  Z24_HI = 302,
  Z25_HI = 303,
  Z26_HI = 304,
  Z27_HI = 305,
  Z28_HI = 306,
  Z29_HI = 307,
  Z30_HI = 308,
  Z31_HI = 309,
  D0_D1 = 310,
  D1_D2 = 311,
  D2_D3 = 312,
  D3_D4 = 313,
  D4_D5 = 314,
  D5_D6 = 315,
  D6_D7 = 316,
  D7_D8 = 317,
  D8_D9 = 318,
  D9_D10 = 319,
  D10_D11 = 320,
  D11_D12 = 321,
  D12_D13 = 322,
  D13_D14 = 323,
  D14_D15 = 324,
  D15_D16 = 325,
  D16_D17 = 326,
  D17_D18 = 327,
  D18_D19 = 328,
  D19_D20 = 329,
  D20_D21 = 330,
  D21_D22 = 331,
  D22_D23 = 332,
  D23_D24 = 333,
  D24_D25 = 334,
  D25_D26 = 335,
  D26_D27 = 336,
  D27_D28 = 337,
  D28_D29 = 338,
  D29_D30 = 339,
  D30_D31 = 340,
  D31_D0 = 341,
  D0_D1_D2_D3 = 342,
  D1_D2_D3_D4 = 343,
  D2_D3_D4_D5 = 344,
  D3_D4_D5_D6 = 345,
  D4_D5_D6_D7 = 346,
  D5_D6_D7_D8 = 347,
  D6_D7_D8_D9 = 348,
  D7_D8_D9_D10 = 349,
  D8_D9_D10_D11 = 350,
  D9_D10_D11_D12 = 351,
  D10_D11_D12_D13 = 352,
  D11_D12_D13_D14 = 353,
  D12_D13_D14_D15 = 354,
  D13_D14_D15_D16 = 355,
  D14_D15_D16_D17 = 356,
  D15_D16_D17_D18 = 357,
  D16_D17_D18_D19 = 358,
  D17_D18_D19_D20 = 359,
  D18_D19_D20_D21 = 360,
  D19_D20_D21_D22 = 361,
  D20_D21_D22_D23 = 362,
  D21_D22_D23_D24 = 363,
  D22_D23_D24_D25 = 364,
  D23_D24_D25_D26 = 365,
  D24_D25_D26_D27 = 366,
  D25_D26_D27_D28 = 367,
  D26_D27_D28_D29 = 368,
  D27_D28_D29_D30 = 369,
  D28_D29_D30_D31 = 370,
  D29_D30_D31_D0 = 371,
  D30_D31_D0_D1 = 372,
  D31_D0_D1_D2 = 373,
  D0_D1_D2 = 374,
  D1_D2_D3 = 375,
  D2_D3_D4 = 376,
  D3_D4_D5 = 377,
  D4_D5_D6 = 378,
  D5_D6_D7 = 379,
  D6_D7_D8 = 380,
  D7_D8_D9 = 381,
  D8_D9_D10 = 382,
  D9_D10_D11 = 383,
  D10_D11_D12 = 384,
  D11_D12_D13 = 385,
  D12_D13_D14 = 386,
  D13_D14_D15 = 387,
  D14_D15_D16 = 388,
  D15_D16_D17 = 389,
  D16_D17_D18 = 390,
  D17_D18_D19 = 391,
  D18_D19_D20 = 392,
  D19_D20_D21 = 393,
  D20_D21_D22 = 394,
  D21_D22_D23 = 395,
  D22_D23_D24 = 396,
  D23_D24_D25 = 397,
  D24_D25_D26 = 398,
  D25_D26_D27 = 399,
  D26_D27_D28 = 400,
  D27_D28_D29 = 401,
  D28_D29_D30 = 402,
  D29_D30_D31 = 403,
  D30_D31_D0 = 404,
  D31_D0_D1 = 405,
  Q0_Q1 = 406,
  Q1_Q2 = 407,
  Q2_Q3 = 408,
  Q3_Q4 = 409,
  Q4_Q5 = 410,
  Q5_Q6 = 411,
  Q6_Q7 = 412,
  Q7_Q8 = 413,
  Q8_Q9 = 414,
  Q9_Q10 = 415,
  Q10_Q11 = 416,
  Q11_Q12 = 417,
  Q12_Q13 = 418,
  Q13_Q14 = 419,
  Q14_Q15 = 420,
  Q15_Q16 = 421,
  Q16_Q17 = 422,
  Q17_Q18 = 423,
  Q18_Q19 = 424,
  Q19_Q20 = 425,
  Q20_Q21 = 426,
  Q21_Q22 = 427,
  Q22_Q23 = 428,
  Q23_Q24 = 429,
  Q24_Q25 = 430,
  Q25_Q26 = 431,
  Q26_Q27 = 432,
  Q27_Q28 = 433,
  Q28_Q29 = 434,
  Q29_Q30 = 435,
  Q30_Q31 = 436,
  Q31_Q0 = 437,
  Q0_Q1_Q2_Q3 = 438,
  Q1_Q2_Q3_Q4 = 439,
  Q2_Q3_Q4_Q5 = 440,
  Q3_Q4_Q5_Q6 = 441,
  Q4_Q5_Q6_Q7 = 442,
  Q5_Q6_Q7_Q8 = 443,
  Q6_Q7_Q8_Q9 = 444,
  Q7_Q8_Q9_Q10 = 445,
  Q8_Q9_Q10_Q11 = 446,
  Q9_Q10_Q11_Q12 = 447,
  Q10_Q11_Q12_Q13 = 448,
  Q11_Q12_Q13_Q14 = 449,
  Q12_Q13_Q14_Q15 = 450,
  Q13_Q14_Q15_Q16 = 451,
  Q14_Q15_Q16_Q17 = 452,
  Q15_Q16_Q17_Q18 = 453,
  Q16_Q17_Q18_Q19 = 454,
  Q17_Q18_Q19_Q20 = 455,
  Q18_Q19_Q20_Q21 = 456,
  Q19_Q20_Q21_Q22 = 457,
  Q20_Q21_Q22_Q23 = 458,
  Q21_Q22_Q23_Q24 = 459,
  Q22_Q23_Q24_Q25 = 460,
  Q23_Q24_Q25_Q26 = 461,
  Q24_Q25_Q26_Q27 = 462,
  Q25_Q26_Q27_Q28 = 463,
  Q26_Q27_Q28_Q29 = 464,
  Q27_Q28_Q29_Q30 = 465,
  Q28_Q29_Q30_Q31 = 466,
  Q29_Q30_Q31_Q0 = 467,
  Q30_Q31_Q0_Q1 = 468,
  Q31_Q0_Q1_Q2 = 469,
  Q0_Q1_Q2 = 470,
  Q1_Q2_Q3 = 471,
  Q2_Q3_Q4 = 472,
  Q3_Q4_Q5 = 473,
  Q4_Q5_Q6 = 474,
  Q5_Q6_Q7 = 475,
  Q6_Q7_Q8 = 476,
  Q7_Q8_Q9 = 477,
  Q8_Q9_Q10 = 478,
  Q9_Q10_Q11 = 479,
  Q10_Q11_Q12 = 480,
  Q11_Q12_Q13 = 481,
  Q12_Q13_Q14 = 482,
  Q13_Q14_Q15 = 483,
  Q14_Q15_Q16 = 484,
  Q15_Q16_Q17 = 485,
  Q16_Q17_Q18 = 486,
  Q17_Q18_Q19 = 487,
  Q18_Q19_Q20 = 488,
  Q19_Q20_Q21 = 489,
  Q20_Q21_Q22 = 490,
  Q21_Q22_Q23 = 491,
  Q22_Q23_Q24 = 492,
  Q23_Q24_Q25 = 493,
  Q24_Q25_Q26 = 494,
  Q25_Q26_Q27 = 495,
  Q26_Q27_Q28 = 496,
  Q27_Q28_Q29 = 497,
  Q28_Q29_Q30 = 498,
  Q29_Q30_Q31 = 499,
  Q30_Q31_Q0 = 500,
  Q31_Q0_Q1 = 501,
  W30_WZR = 502,
  W0_W1 = 503,
  W2_W3 = 504,
  W4_W5 = 505,
  W6_W7 = 506,
  W8_W9 = 507,
  W10_W11 = 508,
  W12_W13 = 509,
  W14_W15 = 510,
  W16_W17 = 511,
  W18_W19 = 512,
  W20_W21 = 513,
  W22_W23 = 514,
  W24_W25 = 515,
  W26_W27 = 516,
  W28_W29 = 517,
  LR_XZR = 518,
  X28_FP = 519,
  X0_X1 = 520,
  X2_X3 = 521,
  X4_X5 = 522,
  X6_X7 = 523,
  X8_X9 = 524,
  X10_X11 = 525,
  X12_X13 = 526,
  X14_X15 = 527,
  X16_X17 = 528,
  X18_X19 = 529,
  X20_X21 = 530,
  X22_X23 = 531,
  X24_X25 = 532,
  X26_X27 = 533,
  Z0_Z1 = 534,
  Z1_Z2 = 535,
  Z2_Z3 = 536,
  Z3_Z4 = 537,
  Z4_Z5 = 538,
  Z5_Z6 = 539,
  Z6_Z7 = 540,
  Z7_Z8 = 541,
  Z8_Z9 = 542,
  Z9_Z10 = 543,
  Z10_Z11 = 544,
  Z11_Z12 = 545,
  Z12_Z13 = 546,
  Z13_Z14 = 547,
  Z14_Z15 = 548,
  Z15_Z16 = 549,
  Z16_Z17 = 550,
  Z17_Z18 = 551,
  Z18_Z19 = 552,
  Z19_Z20 = 553,
  Z20_Z21 = 554,
  Z21_Z22 = 555,
  Z22_Z23 = 556,
  Z23_Z24 = 557,
  Z24_Z25 = 558,
  Z25_Z26 = 559,
  Z26_Z27 = 560,
  Z27_Z28 = 561,
  Z28_Z29 = 562,
  Z29_Z30 = 563,
  Z30_Z31 = 564,
  Z31_Z0 = 565,
  Z0_Z1_Z2_Z3 = 566,
  Z1_Z2_Z3_Z4 = 567,
  Z2_Z3_Z4_Z5 = 568,
  Z3_Z4_Z5_Z6 = 569,
  Z4_Z5_Z6_Z7 = 570,
  Z5_Z6_Z7_Z8 = 571,
  Z6_Z7_Z8_Z9 = 572,
  Z7_Z8_Z9_Z10 = 573,
  Z8_Z9_Z10_Z11 = 574,
  Z9_Z10_Z11_Z12 = 575,
  Z10_Z11_Z12_Z13 = 576,
  Z11_Z12_Z13_Z14 = 577,
  Z12_Z13_Z14_Z15 = 578,
  Z13_Z14_Z15_Z16 = 579,
  Z14_Z15_Z16_Z17 = 580,
  Z15_Z16_Z17_Z18 = 581,
  Z16_Z17_Z18_Z19 = 582,
  Z17_Z18_Z19_Z20 = 583,
  Z18_Z19_Z20_Z21 = 584,
  Z19_Z20_Z21_Z22 = 585,
  Z20_Z21_Z22_Z23 = 586,
  Z21_Z22_Z23_Z24 = 587,
  Z22_Z23_Z24_Z25 = 588,
  Z23_Z24_Z25_Z26 = 589,
  Z24_Z25_Z26_Z27 = 590,
  Z25_Z26_Z27_Z28 = 591,
  Z26_Z27_Z28_Z29 = 592,
  Z27_Z28_Z29_Z30 = 593,
  Z28_Z29_Z30_Z31 = 594,
  Z29_Z30_Z31_Z0 = 595,
  Z30_Z31_Z0_Z1 = 596,
  Z31_Z0_Z1_Z2 = 597,
  Z0_Z1_Z2 = 598,
  Z1_Z2_Z3 = 599,
  Z2_Z3_Z4 = 600,
  Z3_Z4_Z5 = 601,
  Z4_Z5_Z6 = 602,
  Z5_Z6_Z7 = 603,
  Z6_Z7_Z8 = 604,
  Z7_Z8_Z9 = 605,
  Z8_Z9_Z10 = 606,
  Z9_Z10_Z11 = 607,
  Z10_Z11_Z12 = 608,
  Z11_Z12_Z13 = 609,
  Z12_Z13_Z14 = 610,
  Z13_Z14_Z15 = 611,
  Z14_Z15_Z16 = 612,
  Z15_Z16_Z17 = 613,
  Z16_Z17_Z18 = 614,
  Z17_Z18_Z19 = 615,
  Z18_Z19_Z20 = 616,
  Z19_Z20_Z21 = 617,
  Z20_Z21_Z22 = 618,
  Z21_Z22_Z23 = 619,
  Z22_Z23_Z24 = 620,
  Z23_Z24_Z25 = 621,
  Z24_Z25_Z26 = 622,
  Z25_Z26_Z27 = 623,
  Z26_Z27_Z28 = 624,
  Z27_Z28_Z29 = 625,
  Z28_Z29_Z30 = 626,
  Z29_Z30_Z31 = 627,
  Z30_Z31_Z0 = 628,
  Z31_Z0_Z1 = 629,
  NUM_TARGET_REGS 	// 630
};
} // end namespace AArch64

// Register classes

namespace AArch64 {
enum {
  FPR8RegClassID = 0,
  FPR16RegClassID = 1,
  FPR16_loRegClassID = 2,
  PPRRegClassID = 3,
  PPR_3bRegClassID = 4,
  GPR32allRegClassID = 5,
  FPR32RegClassID = 6,
  GPR32RegClassID = 7,
  GPR32spRegClassID = 8,
  GPR32commonRegClassID = 9,
  FPR32_with_hsub_in_FPR16_loRegClassID = 10,
  GPR32argRegClassID = 11,
  CCRRegClassID = 12,
  GPR32sponlyRegClassID = 13,
  WSeqPairsClassRegClassID = 14,
  WSeqPairsClass_with_subo32_in_GPR32commonRegClassID = 15,
  WSeqPairsClass_with_sube32_in_GPR32argRegClassID = 16,
  GPR64allRegClassID = 17,
  FPR64RegClassID = 18,
  GPR64RegClassID = 19,
  GPR64spRegClassID = 20,
  GPR64commonRegClassID = 21,
  GPR64noipRegClassID = 22,
  GPR64common_and_GPR64noipRegClassID = 23,
  tcGPR64RegClassID = 24,
  GPR64noip_and_tcGPR64RegClassID = 25,
  FPR64_loRegClassID = 26,
  GPR64argRegClassID = 27,
  rtcGPR64RegClassID = 28,
  GPR64sponlyRegClassID = 29,
  DDRegClassID = 30,
  DD_with_dsub0_in_FPR64_loRegClassID = 31,
  DD_with_dsub1_in_FPR64_loRegClassID = 32,
  XSeqPairsClassRegClassID = 33,
  DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID = 34,
  XSeqPairsClass_with_subo64_in_GPR64commonRegClassID = 35,
  XSeqPairsClass_with_subo64_in_GPR64noipRegClassID = 36,
  XSeqPairsClass_with_sube64_in_GPR64noipRegClassID = 37,
  XSeqPairsClass_with_sube64_in_tcGPR64RegClassID = 38,
  XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClassID = 39,
  XSeqPairsClass_with_subo64_in_tcGPR64RegClassID = 40,
  XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 41,
  XSeqPairsClass_with_sub_32_in_GPR32argRegClassID = 42,
  XSeqPairsClass_with_sube64_in_rtcGPR64RegClassID = 43,
  FPR128RegClassID = 44,
  ZPRRegClassID = 45,
  FPR128_loRegClassID = 46,
  ZPR_4bRegClassID = 47,
  ZPR_3bRegClassID = 48,
  DDDRegClassID = 49,
  DDD_with_dsub0_in_FPR64_loRegClassID = 50,
  DDD_with_dsub1_in_FPR64_loRegClassID = 51,
  DDD_with_dsub2_in_FPR64_loRegClassID = 52,
  DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID = 53,
  DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID = 54,
  DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID = 55,
  DDDDRegClassID = 56,
  DDDD_with_dsub0_in_FPR64_loRegClassID = 57,
  DDDD_with_dsub1_in_FPR64_loRegClassID = 58,
  DDDD_with_dsub2_in_FPR64_loRegClassID = 59,
  DDDD_with_dsub3_in_FPR64_loRegClassID = 60,
  DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID = 61,
  DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID = 62,
  DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 63,
  DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID = 64,
  DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 65,
  DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 66,
  QQRegClassID = 67,
  ZPR2RegClassID = 68,
  QQ_with_dsub_in_FPR64_loRegClassID = 69,
  QQ_with_qsub1_in_FPR128_loRegClassID = 70,
  ZPR2_with_dsub_in_FPR64_loRegClassID = 71,
  ZPR2_with_zsub1_in_ZPR_4bRegClassID = 72,
  QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClassID = 73,
  ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClassID = 74,
  ZPR2_with_zsub0_in_ZPR_3bRegClassID = 75,
  ZPR2_with_zsub1_in_ZPR_3bRegClassID = 76,
  ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClassID = 77,
  QQQRegClassID = 78,
  ZPR3RegClassID = 79,
  QQQ_with_dsub_in_FPR64_loRegClassID = 80,
  QQQ_with_qsub1_in_FPR128_loRegClassID = 81,
  QQQ_with_qsub2_in_FPR128_loRegClassID = 82,
  ZPR3_with_dsub_in_FPR64_loRegClassID = 83,
  ZPR3_with_zsub1_in_ZPR_4bRegClassID = 84,
  ZPR3_with_zsub2_in_ZPR_4bRegClassID = 85,
  QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClassID = 86,
  QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID = 87,
  ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClassID = 88,
  ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID = 89,
  QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID = 90,
  ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID = 91,
  ZPR3_with_zsub0_in_ZPR_3bRegClassID = 92,
  ZPR3_with_zsub1_in_ZPR_3bRegClassID = 93,
  ZPR3_with_zsub2_in_ZPR_3bRegClassID = 94,
  ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClassID = 95,
  ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID = 96,
  ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID = 97,
  QQQQRegClassID = 98,
  ZPR4RegClassID = 99,
  QQQQ_with_dsub_in_FPR64_loRegClassID = 100,
  QQQQ_with_qsub1_in_FPR128_loRegClassID = 101,
  QQQQ_with_qsub2_in_FPR128_loRegClassID = 102,
  QQQQ_with_qsub3_in_FPR128_loRegClassID = 103,
  ZPR4_with_dsub_in_FPR64_loRegClassID = 104,
  ZPR4_with_zsub1_in_ZPR_4bRegClassID = 105,
  ZPR4_with_zsub2_in_ZPR_4bRegClassID = 106,
  ZPR4_with_zsub3_in_ZPR_4bRegClassID = 107,
  QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClassID = 108,
  QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID = 109,
  QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 110,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClassID = 111,
  ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID = 112,
  ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 113,
  QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID = 114,
  QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 115,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID = 116,
  ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 117,
  QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 118,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 119,
  ZPR4_with_zsub0_in_ZPR_3bRegClassID = 120,
  ZPR4_with_zsub1_in_ZPR_3bRegClassID = 121,
  ZPR4_with_zsub2_in_ZPR_3bRegClassID = 122,
  ZPR4_with_zsub3_in_ZPR_3bRegClassID = 123,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClassID = 124,
  ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID = 125,
  ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 126,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID = 127,
  ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 128,
  ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 129,

  };
} // end namespace AArch64


// Register alternate name indices

namespace AArch64 {
enum {
  NoRegAltName,	// 0
  vlist1,	// 1
  vreg,	// 2
  NUM_TARGET_REG_ALT_NAMES = 3
};
} // end namespace AArch64


// Subregister indices

namespace AArch64 {
enum : uint16_t {
  NoSubRegister,
  bsub,	// 1
  dsub,	// 2
  dsub0,	// 3
  dsub1,	// 4
  dsub2,	// 5
  dsub3,	// 6
  hsub,	// 7
  qhisub,	// 8
  qsub,	// 9
  qsub0,	// 10
  qsub1,	// 11
  qsub2,	// 12
  qsub3,	// 13
  ssub,	// 14
  sub_32,	// 15
  sube32,	// 16
  sube64,	// 17
  subo32,	// 18
  subo64,	// 19
  zsub,	// 20
  zsub0,	// 21
  zsub1,	// 22
  zsub2,	// 23
  zsub3,	// 24
  zsub_hi,	// 25
  dsub1_then_bsub,	// 26
  dsub1_then_hsub,	// 27
  dsub1_then_ssub,	// 28
  dsub3_then_bsub,	// 29
  dsub3_then_hsub,	// 30
  dsub3_then_ssub,	// 31
  dsub2_then_bsub,	// 32
  dsub2_then_hsub,	// 33
  dsub2_then_ssub,	// 34
  qsub1_then_bsub,	// 35
  qsub1_then_dsub,	// 36
  qsub1_then_hsub,	// 37
  qsub1_then_ssub,	// 38
  qsub3_then_bsub,	// 39
  qsub3_then_dsub,	// 40
  qsub3_then_hsub,	// 41
  qsub3_then_ssub,	// 42
  qsub2_then_bsub,	// 43
  qsub2_then_dsub,	// 44
  qsub2_then_hsub,	// 45
  qsub2_then_ssub,	// 46
  subo64_then_sub_32,	// 47
  zsub1_then_bsub,	// 48
  zsub1_then_dsub,	// 49
  zsub1_then_hsub,	// 50
  zsub1_then_ssub,	// 51
  zsub1_then_zsub,	// 52
  zsub1_then_zsub_hi,	// 53
  zsub3_then_bsub,	// 54
  zsub3_then_dsub,	// 55
  zsub3_then_hsub,	// 56
  zsub3_then_ssub,	// 57
  zsub3_then_zsub,	// 58
  zsub3_then_zsub_hi,	// 59
  zsub2_then_bsub,	// 60
  zsub2_then_dsub,	// 61
  zsub2_then_hsub,	// 62
  zsub2_then_ssub,	// 63
  zsub2_then_zsub,	// 64
  zsub2_then_zsub_hi,	// 65
  dsub0_dsub1,	// 66
  dsub0_dsub1_dsub2,	// 67
  dsub1_dsub2,	// 68
  dsub1_dsub2_dsub3,	// 69
  dsub2_dsub3,	// 70
  dsub_qsub1_then_dsub,	// 71
  dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub,	// 72
  dsub_qsub1_then_dsub_qsub2_then_dsub,	// 73
  qsub0_qsub1,	// 74
  qsub0_qsub1_qsub2,	// 75
  qsub1_qsub2,	// 76
  qsub1_qsub2_qsub3,	// 77
  qsub2_qsub3,	// 78
  qsub1_then_dsub_qsub2_then_dsub,	// 79
  qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub,	// 80
  qsub2_then_dsub_qsub3_then_dsub,	// 81
  sub_32_subo64_then_sub_32,	// 82
  dsub_zsub1_then_dsub,	// 83
  zsub_zsub1_then_zsub,	// 84
  dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub,	// 85
  dsub_zsub1_then_dsub_zsub2_then_dsub,	// 86
  zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub,	// 87
  zsub_zsub1_then_zsub_zsub2_then_zsub,	// 88
  zsub0_zsub1,	// 89
  zsub0_zsub1_zsub2,	// 90
  zsub1_zsub2,	// 91
  zsub1_zsub2_zsub3,	// 92
  zsub2_zsub3,	// 93
  zsub1_then_dsub_zsub2_then_dsub,	// 94
  zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub,	// 95
  zsub1_then_zsub_zsub2_then_zsub,	// 96
  zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub,	// 97
  zsub2_then_dsub_zsub3_then_dsub,	// 98
  zsub2_then_zsub_zsub3_then_zsub,	// 99
  NUM_TARGET_SUBREGS
};
} // end namespace AArch64

// Register pressure sets enum.
namespace AArch64 {
enum RegisterPressureSets {
  GPR32sponly = 0,
  rtcGPR64 = 1,
  PPR_3b = 2,
  GPR32arg = 3,
  PPR = 4,
  tcGPR64 = 5,
  FPR16_lo = 6,
  ZPR_3b = 7,
  FPR16_lo_with_ZPR_3b = 8,
  DD_with_dsub1_in_FPR64_lo_with_ZPR_3b = 9,
  DDD_with_dsub2_in_FPR64_lo_with_ZPR_3b = 10,
  DDD_with_dsub2_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b = 11,
  DDDD_with_dsub3_in_FPR64_lo_with_ZPR_3b = 12,
  DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b = 13,
  DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub2_in_ZPR_3b = 14,
  FPR16_lo_with_ZPR4_with_zsub1_in_ZPR_3b = 15,
  FPR8 = 16,
  FPR16_lo_with_ZPR4_with_zsub2_in_ZPR_3b = 17,
  GPR32 = 18,
  FPR16_lo_with_ZPR4_with_zsub3_in_ZPR_3b = 19,
  ZPR4_with_zsub3_in_ZPR_4b = 20,
  ZPR_4b = 21,
  FPR8_with_ZPR_3b = 22,
  FPR8_with_ZPR4_with_zsub1_in_ZPR_3b = 23,
  FPR8_with_ZPR4_with_zsub2_in_ZPR_3b = 24,
  FPR8_with_ZPR4_with_zsub3_in_ZPR_3b = 25,
  ZPR4_with_zsub2_in_ZPR_4b = 26,
  FPR8_with_ZPR_4b = 27,
  FPR8_with_ZPR4_with_zsub1_in_ZPR_4b = 28,
  FPR8_with_ZPR4_with_zsub2_in_ZPR_4b = 29,
  FPR8_with_ZPR4_with_zsub3_in_ZPR_4b = 30,
  ZPR = 31,
};
} // end namespace AArch64

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

extern const MCPhysReg AArch64RegDiffLists[] = {
  /* 0 */ 64977, 1, 1, 1, 74, 1, 1, 1, 0,
  /* 9 */ 65105, 1, 1, 1, 0,
  /* 14 */ 65201, 1, 1, 1, 0,
  /* 19 */ 7, 29, 1, 1, 0,
  /* 24 */ 7, 29, 1, 1, 46, 29, 1, 1, 0,
  /* 33 */ 64945, 1, 1, 75, 1, 1, 0,
  /* 40 */ 65073, 1, 1, 0,
  /* 44 */ 65169, 1, 1, 0,
  /* 48 */ 7, 1, 29, 1, 0,
  /* 53 */ 7, 1, 29, 1, 46, 1, 29, 1, 0,
  /* 62 */ 7, 30, 1, 0,
  /* 66 */ 7, 30, 1, 46, 30, 1, 0,
  /* 73 */ 65009, 1, 76, 1, 0,
  /* 78 */ 65204, 112, 65456, 65472, 33, 112, 65456, 65472, 33, 112, 65456, 65472, 298, 1, 0,
  /* 93 */ 65204, 112, 65456, 65472, 33, 112, 65456, 65472, 1, 112, 65456, 65472, 330, 1, 0,
  /* 108 */ 64551, 1, 0,
  /* 111 */ 64585, 1, 0,
  /* 114 */ 65137, 1, 0,
  /* 117 */ 65219, 1, 0,
  /* 120 */ 65220, 1, 0,
  /* 123 */ 65221, 1, 0,
  /* 126 */ 65222, 1, 0,
  /* 129 */ 65223, 1, 0,
  /* 132 */ 65224, 1, 0,
  /* 135 */ 65225, 1, 0,
  /* 138 */ 65226, 1, 0,
  /* 141 */ 65227, 1, 0,
  /* 144 */ 65228, 1, 0,
  /* 147 */ 65229, 1, 0,
  /* 150 */ 65230, 1, 0,
  /* 153 */ 65231, 1, 0,
  /* 156 */ 65232, 1, 0,
  /* 159 */ 65233, 1, 0,
  /* 162 */ 64, 80, 65424, 80, 124, 63, 1, 62, 65503, 34, 65503, 34, 65503, 1, 63, 1, 62, 65503, 34, 65503, 34, 65503, 1, 95, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 195 */ 124, 159, 1, 62, 65503, 34, 65503, 34, 65503, 1, 95, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 215 */ 65504, 287, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 226 */ 64, 80, 65424, 80, 124, 64, 31, 33, 65504, 62, 65503, 34, 65503, 1, 33, 31, 33, 65504, 62, 65503, 34, 65503, 1, 65, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 259 */ 124, 160, 31, 33, 65504, 62, 65503, 34, 65503, 1, 65, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 279 */ 65504, 288, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 290 */ 63, 65503, 34, 65503, 1, 64, 63, 65503, 34, 65503, 1, 96, 63, 65503, 34, 65503, 1, 0,
  /* 308 */ 64, 80, 65424, 80, 124, 63, 1, 63, 1, 65503, 1, 62, 65503, 1, 33, 1, 63, 1, 65503, 1, 62, 65503, 1, 65, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 341 */ 124, 159, 1, 63, 1, 65503, 1, 62, 65503, 1, 65, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 361 */ 65504, 287, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 372 */ 64, 65504, 63, 65503, 1, 33, 64, 65504, 63, 65503, 1, 65, 64, 65504, 63, 65503, 1, 0,
  /* 390 */ 65503, 1, 128, 65503, 1, 160, 65503, 1, 0,
  /* 399 */ 31, 272, 2, 0,
  /* 403 */ 65323, 515, 2, 0,
  /* 407 */ 2, 4, 0,
  /* 410 */ 65020, 4, 0,
  /* 413 */ 6, 0,
  /* 415 */ 1, 493, 16, 0,
  /* 419 */ 65323, 499, 16, 0,
  /* 423 */ 31, 272, 17, 0,
  /* 427 */ 31, 273, 17, 0,
  /* 431 */ 31, 274, 17, 0,
  /* 435 */ 31, 275, 17, 0,
  /* 439 */ 31, 276, 17, 0,
  /* 443 */ 31, 277, 17, 0,
  /* 447 */ 31, 278, 17, 0,
  /* 451 */ 31, 279, 17, 0,
  /* 455 */ 31, 280, 17, 0,
  /* 459 */ 31, 281, 17, 0,
  /* 463 */ 31, 282, 17, 0,
  /* 467 */ 31, 283, 17, 0,
  /* 471 */ 31, 284, 17, 0,
  /* 475 */ 31, 285, 17, 0,
  /* 479 */ 31, 286, 17, 0,
  /* 483 */ 7, 1, 1, 29, 0,
  /* 488 */ 7, 1, 1, 29, 46, 1, 1, 29, 0,
  /* 497 */ 64, 80, 65424, 80, 124, 63, 1, 62, 1, 65503, 34, 65503, 1, 29, 34, 1, 62, 1, 65503, 34, 65503, 1, 29, 66, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 530 */ 124, 159, 1, 62, 1, 65503, 34, 65503, 1, 29, 66, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 550 */ 65504, 287, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 561 */ 7, 1, 30, 0,
  /* 565 */ 7, 1, 30, 46, 1, 30, 0,
  /* 572 */ 63, 1, 65503, 1, 30, 34, 63, 1, 65503, 1, 30, 66, 63, 1, 65503, 1, 30, 0,
  /* 590 */ 7, 31, 0,
  /* 593 */ 7, 31, 46, 31, 0,
  /* 598 */ 65504, 31, 97, 65504, 31, 129, 65504, 31, 0,
  /* 607 */ 65297, 77, 0,
  /* 610 */ 1, 82, 0,
  /* 613 */ 65020, 82, 0,
  /* 616 */ 65248, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 31, 96, 0,
  /* 633 */ 65248, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 63, 96, 0,
  /* 650 */ 65184, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 30, 96, 65504, 96, 64, 1, 65312, 96, 0,
  /* 680 */ 65184, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 62, 96, 65504, 96, 64, 1, 65312, 96, 0,
  /* 710 */ 65184, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 62, 96, 65504, 96, 64, 65505, 65312, 96, 0,
  /* 740 */ 65216, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 61, 96, 65472, 32, 64, 32, 64, 64, 65473, 64, 65441, 65343, 64, 32, 64, 65345, 96, 0,
  /* 786 */ 65216, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 61, 96, 65472, 32, 64, 32, 64, 64, 65441, 64, 65473, 65311, 64, 32, 64, 65377, 96, 0,
  /* 832 */ 65216, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 29, 96, 65472, 32, 64, 32, 64, 64, 65473, 64, 65473, 65311, 64, 32, 64, 65377, 96, 0,
  /* 878 */ 65216, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65505, 65412, 65456, 112, 65456, 65472, 268, 65473, 65412, 65456, 112, 65456, 65472, 268, 61, 96, 65472, 32, 64, 32, 64, 64, 65473, 64, 65473, 65311, 64, 32, 64, 65377, 96, 0,
  /* 924 */ 96, 128, 0,
  /* 927 */ 213, 0,
  /* 929 */ 65412, 65456, 112, 65456, 65472, 268, 0,
  /* 936 */ 274, 0,
  /* 938 */ 289, 0,
  /* 940 */ 290, 0,
  /* 942 */ 291, 0,
  /* 944 */ 292, 0,
  /* 946 */ 293, 0,
  /* 948 */ 294, 0,
  /* 950 */ 295, 0,
  /* 952 */ 296, 0,
  /* 954 */ 297, 0,
  /* 956 */ 298, 0,
  /* 958 */ 65252, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 299, 0,
  /* 970 */ 300, 0,
  /* 972 */ 301, 0,
  /* 974 */ 65262, 65505, 65324, 213, 302, 0,
  /* 980 */ 65246, 65505, 32, 65505, 303, 0,
  /* 986 */ 65245, 65505, 32, 65505, 304, 0,
  /* 992 */ 65244, 65505, 32, 65505, 305, 0,
  /* 998 */ 65243, 65505, 32, 65505, 306, 0,
  /* 1004 */ 65242, 65505, 32, 65505, 307, 0,
  /* 1010 */ 65241, 65505, 32, 65505, 308, 0,
  /* 1016 */ 65240, 65505, 32, 65505, 309, 0,
  /* 1022 */ 65239, 65505, 32, 65505, 310, 0,
  /* 1028 */ 65238, 65505, 32, 65505, 311, 0,
  /* 1034 */ 65237, 65505, 32, 65505, 312, 0,
  /* 1040 */ 65236, 65505, 32, 65505, 313, 0,
  /* 1046 */ 65235, 65505, 32, 65505, 314, 0,
  /* 1052 */ 65234, 65505, 32, 65505, 315, 0,
  /* 1058 */ 65233, 65505, 32, 65505, 316, 0,
  /* 1064 */ 65252, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 331, 0,
  /* 1076 */ 65021, 213, 65329, 65535, 494, 0,
  /* 1082 */ 509, 0,
  /* 1084 */ 515, 0,
  /* 1086 */ 517, 0,
  /* 1088 */ 65322, 0,
  /* 1090 */ 65250, 65328, 0,
  /* 1093 */ 65342, 0,
  /* 1095 */ 65374, 0,
  /* 1097 */ 65389, 0,
  /* 1099 */ 65405, 0,
  /* 1101 */ 65421, 0,
  /* 1103 */ 65188, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 298, 64, 32, 1, 65440, 0,
  /* 1124 */ 65188, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 330, 64, 32, 1, 65440, 0,
  /* 1145 */ 65188, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 330, 64, 32, 65505, 65440, 0,
  /* 1166 */ 65220, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 329, 32, 32, 32, 64, 65473, 64, 65441, 65471, 64, 65441, 0,
  /* 1198 */ 65236, 112, 65456, 65472, 33, 112, 65456, 65472, 1, 112, 65456, 65472, 33, 112, 65456, 65472, 329, 64, 65473, 64, 65441, 0,
  /* 1220 */ 65469, 0,
  /* 1222 */ 65268, 112, 65456, 65472, 1, 112, 65456, 65472, 0,
  /* 1231 */ 65268, 112, 65456, 65472, 33, 112, 65456, 65472, 0,
  /* 1240 */ 65456, 112, 65456, 65472, 0,
  /* 1245 */ 65220, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 329, 32, 32, 32, 64, 65441, 64, 65473, 65439, 64, 65473, 0,
  /* 1277 */ 65220, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 297, 32, 32, 32, 64, 65473, 64, 65473, 65439, 64, 65473, 0,
  /* 1309 */ 65220, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 113, 65456, 112, 65456, 65472, 81, 65456, 112, 65456, 65472, 329, 32, 32, 32, 64, 65473, 64, 65473, 65439, 64, 65473, 0,
  /* 1341 */ 65236, 112, 65456, 65472, 1, 112, 65456, 65472, 33, 112, 65456, 65472, 33, 112, 65456, 65472, 329, 64, 65441, 64, 65473, 0,
  /* 1363 */ 65236, 112, 65456, 65472, 33, 112, 65456, 65472, 33, 112, 65456, 65472, 33, 112, 65456, 65472, 297, 64, 65473, 64, 65473, 0,
  /* 1385 */ 65236, 112, 65456, 65472, 33, 112, 65456, 65472, 33, 112, 65456, 65472, 1, 112, 65456, 65472, 329, 64, 65473, 64, 65473, 0,
  /* 1407 */ 65501, 0,
  /* 1409 */ 65204, 112, 65456, 65472, 1, 112, 65456, 65472, 33, 112, 65456, 65472, 330, 65505, 0,
  /* 1424 */ 65526, 0,
  /* 1426 */ 65533, 0,
  /* 1428 */ 65534, 0,
  /* 1430 */ 65535, 0,
};

extern const LaneBitmask AArch64LaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000200), LaneBitmask(0x0000000000000100), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 10 */ LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000200), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 14 */ LaneBitmask(0x0000000000000400), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 17 */ LaneBitmask(0x0000000000000400), LaneBitmask(0x0000000000001000), LaneBitmask(0x0000000000000800), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 22 */ LaneBitmask(0x0000000000000400), LaneBitmask(0x0000000000001000), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 26 */ LaneBitmask(0x0000000000002000), LaneBitmask(0x0000000000000008), LaneBitmask::getAll(),
  /* 29 */ LaneBitmask(0x0000000000000020), LaneBitmask(0x0000000000000010), LaneBitmask::getAll(),
  /* 32 */ LaneBitmask(0x0000000000000010), LaneBitmask(0x0000000000000020), LaneBitmask::getAll(),
  /* 35 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
  /* 38 */ LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
  /* 43 */ LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000010000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000080000), LaneBitmask(0x0000000000020000), LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
  /* 52 */ LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000080000), LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
  /* 59 */ LaneBitmask(0x0000000000000200), LaneBitmask(0x0000000000000100), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000080), LaneBitmask::getAll(),
  /* 64 */ LaneBitmask(0x0000000000000200), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000080), LaneBitmask::getAll(),
  /* 68 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000200), LaneBitmask(0x0000000000000100), LaneBitmask::getAll(),
  /* 73 */ LaneBitmask(0x0000000000000100), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000200), LaneBitmask::getAll(),
  /* 78 */ LaneBitmask(0x0000000000001000), LaneBitmask(0x0000000000000800), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000400), LaneBitmask::getAll(),
  /* 83 */ LaneBitmask(0x0000000000001000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000400), LaneBitmask::getAll(),
  /* 87 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000400), LaneBitmask(0x0000000000001000), LaneBitmask(0x0000000000000800), LaneBitmask::getAll(),
  /* 92 */ LaneBitmask(0x0000000000000800), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000400), LaneBitmask(0x0000000000001000), LaneBitmask::getAll(),
  /* 97 */ LaneBitmask(0x0000000000000008), LaneBitmask(0x0000000000002000), LaneBitmask::getAll(),
  /* 100 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask::getAll(),
  /* 105 */ LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000010000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000080000), LaneBitmask(0x0000000000020000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask::getAll(),
  /* 114 */ LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000080000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask::getAll(),
  /* 121 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000010000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000080000), LaneBitmask(0x0000000000020000), LaneBitmask::getAll(),
  /* 130 */ LaneBitmask(0x0000000000010000), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000020000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000080000), LaneBitmask::getAll(),
  /* 139 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000004000), LaneBitmask(0x0000000000040000), LaneBitmask(0x0000000000000040), LaneBitmask(0x0000000000008000), LaneBitmask(0x0000000000080000), LaneBitmask::getAll(),
};

extern const uint16_t AArch64SubRegIdxLists[] = {
  /* 0 */ 2, 14, 7, 1, 0,
  /* 5 */ 15, 0,
  /* 7 */ 16, 18, 0,
  /* 10 */ 20, 2, 14, 7, 1, 25, 0,
  /* 17 */ 3, 14, 7, 1, 4, 28, 27, 26, 0,
  /* 26 */ 3, 14, 7, 1, 4, 28, 27, 26, 5, 34, 33, 32, 66, 68, 0,
  /* 41 */ 3, 14, 7, 1, 4, 28, 27, 26, 5, 34, 33, 32, 6, 31, 30, 29, 66, 67, 68, 69, 70, 0,
  /* 63 */ 10, 2, 14, 7, 1, 11, 36, 38, 37, 35, 71, 0,
  /* 75 */ 10, 2, 14, 7, 1, 11, 36, 38, 37, 35, 12, 44, 46, 45, 43, 71, 73, 74, 76, 79, 0,
  /* 96 */ 10, 2, 14, 7, 1, 11, 36, 38, 37, 35, 12, 44, 46, 45, 43, 13, 40, 42, 41, 39, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 0,
  /* 128 */ 17, 15, 19, 47, 82, 0,
  /* 134 */ 21, 20, 2, 14, 7, 1, 25, 22, 52, 49, 51, 50, 48, 53, 83, 84, 0,
  /* 151 */ 21, 20, 2, 14, 7, 1, 25, 22, 52, 49, 51, 50, 48, 53, 23, 64, 61, 63, 62, 60, 65, 83, 84, 86, 88, 89, 91, 94, 96, 0,
  /* 181 */ 21, 20, 2, 14, 7, 1, 25, 22, 52, 49, 51, 50, 48, 53, 23, 64, 61, 63, 62, 60, 65, 24, 58, 55, 57, 56, 54, 59, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits AArch64SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// bsub
  { 0, 32 },	// dsub
  { 0, 64 },	// dsub0
  { 0, 64 },	// dsub1
  { 0, 64 },	// dsub2
  { 0, 64 },	// dsub3
  { 0, 16 },	// hsub
  { 0, 64 },	// qhisub
  { 0, 64 },	// qsub
  { 0, 128 },	// qsub0
  { 0, 128 },	// qsub1
  { 0, 128 },	// qsub2
  { 0, 128 },	// qsub3
  { 0, 32 },	// ssub
  { 0, 32 },	// sub_32
  { 0, 32 },	// sube32
  { 0, 64 },	// sube64
  { 0, 32 },	// subo32
  { 0, 64 },	// subo64
  { 0, 128 },	// zsub
  { 65535, 128 },	// zsub0
  { 65535, 128 },	// zsub1
  { 65535, 128 },	// zsub2
  { 65535, 128 },	// zsub3
  { 0, 128 },	// zsub_hi
  { 0, 8 },	// dsub1_then_bsub
  { 0, 16 },	// dsub1_then_hsub
  { 0, 32 },	// dsub1_then_ssub
  { 0, 8 },	// dsub3_then_bsub
  { 0, 16 },	// dsub3_then_hsub
  { 0, 32 },	// dsub3_then_ssub
  { 0, 8 },	// dsub2_then_bsub
  { 0, 16 },	// dsub2_then_hsub
  { 0, 32 },	// dsub2_then_ssub
  { 0, 8 },	// qsub1_then_bsub
  { 0, 32 },	// qsub1_then_dsub
  { 0, 16 },	// qsub1_then_hsub
  { 0, 32 },	// qsub1_then_ssub
  { 0, 8 },	// qsub3_then_bsub
  { 0, 32 },	// qsub3_then_dsub
  { 0, 16 },	// qsub3_then_hsub
  { 0, 32 },	// qsub3_then_ssub
  { 0, 8 },	// qsub2_then_bsub
  { 0, 32 },	// qsub2_then_dsub
  { 0, 16 },	// qsub2_then_hsub
  { 0, 32 },	// qsub2_then_ssub
  { 0, 32 },	// subo64_then_sub_32
  { 65535, 65535 },	// zsub1_then_bsub
  { 65535, 65535 },	// zsub1_then_dsub
  { 65535, 65535 },	// zsub1_then_hsub
  { 65535, 65535 },	// zsub1_then_ssub
  { 65535, 65535 },	// zsub1_then_zsub
  { 65535, 65535 },	// zsub1_then_zsub_hi
  { 65535, 65535 },	// zsub3_then_bsub
  { 65535, 65535 },	// zsub3_then_dsub
  { 65535, 65535 },	// zsub3_then_hsub
  { 65535, 65535 },	// zsub3_then_ssub
  { 65535, 65535 },	// zsub3_then_zsub
  { 65535, 65535 },	// zsub3_then_zsub_hi
  { 65535, 65535 },	// zsub2_then_bsub
  { 65535, 65535 },	// zsub2_then_dsub
  { 65535, 65535 },	// zsub2_then_hsub
  { 65535, 65535 },	// zsub2_then_ssub
  { 65535, 65535 },	// zsub2_then_zsub
  { 65535, 65535 },	// zsub2_then_zsub_hi
  { 65535, 128 },	// dsub0_dsub1
  { 65535, 192 },	// dsub0_dsub1_dsub2
  { 65535, 128 },	// dsub1_dsub2
  { 65535, 192 },	// dsub1_dsub2_dsub3
  { 65535, 128 },	// dsub2_dsub3
  { 65535, 64 },	// dsub_qsub1_then_dsub
  { 65535, 128 },	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  { 65535, 96 },	// dsub_qsub1_then_dsub_qsub2_then_dsub
  { 65535, 256 },	// qsub0_qsub1
  { 65535, 384 },	// qsub0_qsub1_qsub2
  { 65535, 256 },	// qsub1_qsub2
  { 65535, 384 },	// qsub1_qsub2_qsub3
  { 65535, 256 },	// qsub2_qsub3
  { 65535, 64 },	// qsub1_then_dsub_qsub2_then_dsub
  { 65535, 96 },	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  { 65535, 64 },	// qsub2_then_dsub_qsub3_then_dsub
  { 65535, 64 },	// sub_32_subo64_then_sub_32
  { 65535, 31 },	// dsub_zsub1_then_dsub
  { 65535, 127 },	// zsub_zsub1_then_zsub
  { 65535, 29 },	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
  { 65535, 30 },	// dsub_zsub1_then_dsub_zsub2_then_dsub
  { 65535, 125 },	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
  { 65535, 126 },	// zsub_zsub1_then_zsub_zsub2_then_zsub
  { 65535, 256 },	// zsub0_zsub1
  { 65535, 384 },	// zsub0_zsub1_zsub2
  { 65535, 256 },	// zsub1_zsub2
  { 65535, 384 },	// zsub1_zsub2_zsub3
  { 65535, 256 },	// zsub2_zsub3
  { 65535, 65534 },	// zsub1_then_dsub_zsub2_then_dsub
  { 65535, 65533 },	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
  { 65535, 65534 },	// zsub1_then_zsub_zsub2_then_zsub
  { 65535, 65533 },	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
  { 65535, 65534 },	// zsub2_then_dsub_zsub3_then_dsub
  { 65535, 65534 },	// zsub2_then_zsub_zsub3_then_zsub
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char AArch64RegStrings[] = {
  /* 0 */ "B10\0"
  /* 4 */ "D7_D8_D9_D10\0"
  /* 17 */ "H10\0"
  /* 21 */ "P10\0"
  /* 25 */ "Q7_Q8_Q9_Q10\0"
  /* 38 */ "S10\0"
  /* 42 */ "W10\0"
  /* 46 */ "X10\0"
  /* 50 */ "Z7_Z8_Z9_Z10\0"
  /* 63 */ "B20\0"
  /* 67 */ "D17_D18_D19_D20\0"
  /* 83 */ "H20\0"
  /* 87 */ "Q17_Q18_Q19_Q20\0"
  /* 103 */ "S20\0"
  /* 107 */ "W20\0"
  /* 111 */ "X20\0"
  /* 115 */ "Z17_Z18_Z19_Z20\0"
  /* 131 */ "B30\0"
  /* 135 */ "D27_D28_D29_D30\0"
  /* 151 */ "H30\0"
  /* 155 */ "Q27_Q28_Q29_Q30\0"
  /* 171 */ "S30\0"
  /* 175 */ "W30\0"
  /* 179 */ "Z27_Z28_Z29_Z30\0"
  /* 195 */ "B0\0"
  /* 198 */ "D29_D30_D31_D0\0"
  /* 213 */ "H0\0"
  /* 216 */ "P0\0"
  /* 219 */ "Q29_Q30_Q31_Q0\0"
  /* 234 */ "S0\0"
  /* 237 */ "W0\0"
  /* 240 */ "X0\0"
  /* 243 */ "Z29_Z30_Z31_Z0\0"
  /* 258 */ "B11\0"
  /* 262 */ "D8_D9_D10_D11\0"
  /* 276 */ "H11\0"
  /* 280 */ "P11\0"
  /* 284 */ "Q8_Q9_Q10_Q11\0"
  /* 298 */ "S11\0"
  /* 302 */ "W10_W11\0"
  /* 310 */ "X10_X11\0"
  /* 318 */ "Z8_Z9_Z10_Z11\0"
  /* 332 */ "B21\0"
  /* 336 */ "D18_D19_D20_D21\0"
  /* 352 */ "H21\0"
  /* 356 */ "Q18_Q19_Q20_Q21\0"
  /* 372 */ "S21\0"
  /* 376 */ "W20_W21\0"
  /* 384 */ "X20_X21\0"
  /* 392 */ "Z18_Z19_Z20_Z21\0"
  /* 408 */ "B31\0"
  /* 412 */ "D28_D29_D30_D31\0"
  /* 428 */ "H31\0"
  /* 432 */ "Q28_Q29_Q30_Q31\0"
  /* 448 */ "S31\0"
  /* 452 */ "Z28_Z29_Z30_Z31\0"
  /* 468 */ "B1\0"
  /* 471 */ "D30_D31_D0_D1\0"
  /* 485 */ "H1\0"
  /* 488 */ "P1\0"
  /* 491 */ "Q30_Q31_Q0_Q1\0"
  /* 505 */ "S1\0"
  /* 508 */ "W0_W1\0"
  /* 514 */ "X0_X1\0"
  /* 520 */ "Z30_Z31_Z0_Z1\0"
  /* 534 */ "B12\0"
  /* 538 */ "D9_D10_D11_D12\0"
  /* 553 */ "H12\0"
  /* 557 */ "P12\0"
  /* 561 */ "Q9_Q10_Q11_Q12\0"
  /* 576 */ "S12\0"
  /* 580 */ "W12\0"
  /* 584 */ "X12\0"
  /* 588 */ "Z9_Z10_Z11_Z12\0"
  /* 603 */ "B22\0"
  /* 607 */ "D19_D20_D21_D22\0"
  /* 623 */ "H22\0"
  /* 627 */ "Q19_Q20_Q21_Q22\0"
  /* 643 */ "S22\0"
  /* 647 */ "W22\0"
  /* 651 */ "X22\0"
  /* 655 */ "Z19_Z20_Z21_Z22\0"
  /* 671 */ "B2\0"
  /* 674 */ "D31_D0_D1_D2\0"
  /* 687 */ "H2\0"
  /* 690 */ "P2\0"
  /* 693 */ "Q31_Q0_Q1_Q2\0"
  /* 706 */ "S2\0"
  /* 709 */ "W2\0"
  /* 712 */ "X2\0"
  /* 715 */ "Z31_Z0_Z1_Z2\0"
  /* 728 */ "B13\0"
  /* 732 */ "D10_D11_D12_D13\0"
  /* 748 */ "H13\0"
  /* 752 */ "P13\0"
  /* 756 */ "Q10_Q11_Q12_Q13\0"
  /* 772 */ "S13\0"
  /* 776 */ "W12_W13\0"
  /* 784 */ "X12_X13\0"
  /* 792 */ "Z10_Z11_Z12_Z13\0"
  /* 808 */ "B23\0"
  /* 812 */ "D20_D21_D22_D23\0"
  /* 828 */ "H23\0"
  /* 832 */ "Q20_Q21_Q22_Q23\0"
  /* 848 */ "S23\0"
  /* 852 */ "W22_W23\0"
  /* 860 */ "X22_X23\0"
  /* 868 */ "Z20_Z21_Z22_Z23\0"
  /* 884 */ "B3\0"
  /* 887 */ "D0_D1_D2_D3\0"
  /* 899 */ "H3\0"
  /* 902 */ "P3\0"
  /* 905 */ "Q0_Q1_Q2_Q3\0"
  /* 917 */ "S3\0"
  /* 920 */ "W2_W3\0"
  /* 926 */ "X2_X3\0"
  /* 932 */ "Z0_Z1_Z2_Z3\0"
  /* 944 */ "B14\0"
  /* 948 */ "D11_D12_D13_D14\0"
  /* 964 */ "H14\0"
  /* 968 */ "P14\0"
  /* 972 */ "Q11_Q12_Q13_Q14\0"
  /* 988 */ "S14\0"
  /* 992 */ "W14\0"
  /* 996 */ "X14\0"
  /* 1000 */ "Z11_Z12_Z13_Z14\0"
  /* 1016 */ "B24\0"
  /* 1020 */ "D21_D22_D23_D24\0"
  /* 1036 */ "H24\0"
  /* 1040 */ "Q21_Q22_Q23_Q24\0"
  /* 1056 */ "S24\0"
  /* 1060 */ "W24\0"
  /* 1064 */ "X24\0"
  /* 1068 */ "Z21_Z22_Z23_Z24\0"
  /* 1084 */ "B4\0"
  /* 1087 */ "D1_D2_D3_D4\0"
  /* 1099 */ "H4\0"
  /* 1102 */ "P4\0"
  /* 1105 */ "Q1_Q2_Q3_Q4\0"
  /* 1117 */ "S4\0"
  /* 1120 */ "W4\0"
  /* 1123 */ "X4\0"
  /* 1126 */ "Z1_Z2_Z3_Z4\0"
  /* 1138 */ "B15\0"
  /* 1142 */ "D12_D13_D14_D15\0"
  /* 1158 */ "H15\0"
  /* 1162 */ "P15\0"
  /* 1166 */ "Q12_Q13_Q14_Q15\0"
  /* 1182 */ "S15\0"
  /* 1186 */ "W14_W15\0"
  /* 1194 */ "X14_X15\0"
  /* 1202 */ "Z12_Z13_Z14_Z15\0"
  /* 1218 */ "B25\0"
  /* 1222 */ "D22_D23_D24_D25\0"
  /* 1238 */ "H25\0"
  /* 1242 */ "Q22_Q23_Q24_Q25\0"
  /* 1258 */ "S25\0"
  /* 1262 */ "W24_W25\0"
  /* 1270 */ "X24_X25\0"
  /* 1278 */ "Z22_Z23_Z24_Z25\0"
  /* 1294 */ "B5\0"
  /* 1297 */ "D2_D3_D4_D5\0"
  /* 1309 */ "H5\0"
  /* 1312 */ "P5\0"
  /* 1315 */ "Q2_Q3_Q4_Q5\0"
  /* 1327 */ "S5\0"
  /* 1330 */ "W4_W5\0"
  /* 1336 */ "X4_X5\0"
  /* 1342 */ "Z2_Z3_Z4_Z5\0"
  /* 1354 */ "B16\0"
  /* 1358 */ "D13_D14_D15_D16\0"
  /* 1374 */ "H16\0"
  /* 1378 */ "Q13_Q14_Q15_Q16\0"
  /* 1394 */ "S16\0"
  /* 1398 */ "W16\0"
  /* 1402 */ "X16\0"
  /* 1406 */ "Z13_Z14_Z15_Z16\0"
  /* 1422 */ "B26\0"
  /* 1426 */ "D23_D24_D25_D26\0"
  /* 1442 */ "H26\0"
  /* 1446 */ "Q23_Q24_Q25_Q26\0"
  /* 1462 */ "S26\0"
  /* 1466 */ "W26\0"
  /* 1470 */ "X26\0"
  /* 1474 */ "Z23_Z24_Z25_Z26\0"
  /* 1490 */ "B6\0"
  /* 1493 */ "D3_D4_D5_D6\0"
  /* 1505 */ "H6\0"
  /* 1508 */ "P6\0"
  /* 1511 */ "Q3_Q4_Q5_Q6\0"
  /* 1523 */ "S6\0"
  /* 1526 */ "W6\0"
  /* 1529 */ "X6\0"
  /* 1532 */ "Z3_Z4_Z5_Z6\0"
  /* 1544 */ "B17\0"
  /* 1548 */ "D14_D15_D16_D17\0"
  /* 1564 */ "H17\0"
  /* 1568 */ "Q14_Q15_Q16_Q17\0"
  /* 1584 */ "S17\0"
  /* 1588 */ "W16_W17\0"
  /* 1596 */ "X16_X17\0"
  /* 1604 */ "Z14_Z15_Z16_Z17\0"
  /* 1620 */ "B27\0"
  /* 1624 */ "D24_D25_D26_D27\0"
  /* 1640 */ "H27\0"
  /* 1644 */ "Q24_Q25_Q26_Q27\0"
  /* 1660 */ "S27\0"
  /* 1664 */ "W26_W27\0"
  /* 1672 */ "X26_X27\0"
  /* 1680 */ "Z24_Z25_Z26_Z27\0"
  /* 1696 */ "B7\0"
  /* 1699 */ "D4_D5_D6_D7\0"
  /* 1711 */ "H7\0"
  /* 1714 */ "P7\0"
  /* 1717 */ "Q4_Q5_Q6_Q7\0"
  /* 1729 */ "S7\0"
  /* 1732 */ "W6_W7\0"
  /* 1738 */ "X6_X7\0"
  /* 1744 */ "Z4_Z5_Z6_Z7\0"
  /* 1756 */ "B18\0"
  /* 1760 */ "D15_D16_D17_D18\0"
  /* 1776 */ "H18\0"
  /* 1780 */ "Q15_Q16_Q17_Q18\0"
  /* 1796 */ "S18\0"
  /* 1800 */ "W18\0"
  /* 1804 */ "X18\0"
  /* 1808 */ "Z15_Z16_Z17_Z18\0"
  /* 1824 */ "B28\0"
  /* 1828 */ "D25_D26_D27_D28\0"
  /* 1844 */ "H28\0"
  /* 1848 */ "Q25_Q26_Q27_Q28\0"
  /* 1864 */ "S28\0"
  /* 1868 */ "W28\0"
  /* 1872 */ "X28\0"
  /* 1876 */ "Z25_Z26_Z27_Z28\0"
  /* 1892 */ "B8\0"
  /* 1895 */ "D5_D6_D7_D8\0"
  /* 1907 */ "H8\0"
  /* 1910 */ "P8\0"
  /* 1913 */ "Q5_Q6_Q7_Q8\0"
  /* 1925 */ "S8\0"
  /* 1928 */ "W8\0"
  /* 1931 */ "X8\0"
  /* 1934 */ "Z5_Z6_Z7_Z8\0"
  /* 1946 */ "B19\0"
  /* 1950 */ "D16_D17_D18_D19\0"
  /* 1966 */ "H19\0"
  /* 1970 */ "Q16_Q17_Q18_Q19\0"
  /* 1986 */ "S19\0"
  /* 1990 */ "W18_W19\0"
  /* 1998 */ "X18_X19\0"
  /* 2006 */ "Z16_Z17_Z18_Z19\0"
  /* 2022 */ "B29\0"
  /* 2026 */ "D26_D27_D28_D29\0"
  /* 2042 */ "H29\0"
  /* 2046 */ "Q26_Q27_Q28_Q29\0"
  /* 2062 */ "S29\0"
  /* 2066 */ "W28_W29\0"
  /* 2074 */ "Z26_Z27_Z28_Z29\0"
  /* 2090 */ "B9\0"
  /* 2093 */ "D6_D7_D8_D9\0"
  /* 2105 */ "H9\0"
  /* 2108 */ "P9\0"
  /* 2111 */ "Q6_Q7_Q8_Q9\0"
  /* 2123 */ "S9\0"
  /* 2126 */ "W8_W9\0"
  /* 2132 */ "X8_X9\0"
  /* 2138 */ "Z6_Z7_Z8_Z9\0"
  /* 2150 */ "VG\0"
  /* 2153 */ "Z10_HI\0"
  /* 2160 */ "Z20_HI\0"
  /* 2167 */ "Z30_HI\0"
  /* 2174 */ "Z0_HI\0"
  /* 2180 */ "Z11_HI\0"
  /* 2187 */ "Z21_HI\0"
  /* 2194 */ "Z31_HI\0"
  /* 2201 */ "Z1_HI\0"
  /* 2207 */ "Z12_HI\0"
  /* 2214 */ "Z22_HI\0"
  /* 2221 */ "Z2_HI\0"
  /* 2227 */ "Z13_HI\0"
  /* 2234 */ "Z23_HI\0"
  /* 2241 */ "Z3_HI\0"
  /* 2247 */ "Z14_HI\0"
  /* 2254 */ "Z24_HI\0"
  /* 2261 */ "Z4_HI\0"
  /* 2267 */ "Z15_HI\0"
  /* 2274 */ "Z25_HI\0"
  /* 2281 */ "Z5_HI\0"
  /* 2287 */ "Z16_HI\0"
  /* 2294 */ "Z26_HI\0"
  /* 2301 */ "Z6_HI\0"
  /* 2307 */ "Z17_HI\0"
  /* 2314 */ "Z27_HI\0"
  /* 2321 */ "Z7_HI\0"
  /* 2327 */ "Z18_HI\0"
  /* 2334 */ "Z28_HI\0"
  /* 2341 */ "Z8_HI\0"
  /* 2347 */ "Z19_HI\0"
  /* 2354 */ "Z29_HI\0"
  /* 2361 */ "Z9_HI\0"
  /* 2367 */ "X28_FP\0"
  /* 2374 */ "WSP\0"
  /* 2378 */ "FFR\0"
  /* 2382 */ "LR\0"
  /* 2385 */ "W30_WZR\0"
  /* 2393 */ "LR_XZR\0"
  /* 2400 */ "NZCV\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc AArch64RegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 2378, 8, 8, 4, 22881, 0 },
  { 2371, 927, 1086, 5, 22881, 27 },
  { 2382, 927, 1084, 5, 22881, 27 },
  { 2400, 8, 8, 4, 22881, 0 },
  { 2375, 401, 8, 5, 22881, 27 },
  { 2150, 8, 8, 4, 22881, 0 },
  { 2374, 8, 1428, 4, 22786, 0 },
  { 2389, 8, 415, 4, 6608, 0 },
  { 2396, 1430, 1082, 5, 6608, 27 },
  { 195, 8, 226, 4, 22817, 0 },
  { 468, 8, 308, 4, 22817, 0 },
  { 671, 8, 497, 4, 22817, 0 },
  { 884, 8, 162, 4, 22817, 0 },
  { 1084, 8, 162, 4, 22817, 0 },
  { 1294, 8, 162, 4, 22817, 0 },
  { 1490, 8, 162, 4, 22817, 0 },
  { 1696, 8, 162, 4, 22817, 0 },
  { 1892, 8, 162, 4, 22817, 0 },
  { 2090, 8, 162, 4, 22817, 0 },
  { 0, 8, 162, 4, 22817, 0 },
  { 258, 8, 162, 4, 22817, 0 },
  { 534, 8, 162, 4, 22817, 0 },
  { 728, 8, 162, 4, 22817, 0 },
  { 944, 8, 162, 4, 22817, 0 },
  { 1138, 8, 162, 4, 22817, 0 },
  { 1354, 8, 162, 4, 22817, 0 },
  { 1544, 8, 162, 4, 22817, 0 },
  { 1756, 8, 162, 4, 22817, 0 },
  { 1946, 8, 162, 4, 22817, 0 },
  { 63, 8, 162, 4, 22817, 0 },
  { 332, 8, 162, 4, 22817, 0 },
  { 603, 8, 162, 4, 22817, 0 },
  { 808, 8, 162, 4, 22817, 0 },
  { 1016, 8, 162, 4, 22817, 0 },
  { 1218, 8, 162, 4, 22817, 0 },
  { 1422, 8, 162, 4, 22817, 0 },
  { 1620, 8, 162, 4, 22817, 0 },
  { 1824, 8, 162, 4, 22817, 0 },
  { 2022, 8, 162, 4, 22817, 0 },
  { 131, 8, 162, 4, 22817, 0 },
  { 408, 8, 162, 4, 22817, 0 },
  { 210, 1227, 229, 1, 22513, 3 },
  { 482, 1227, 311, 1, 22513, 3 },
  { 684, 1227, 500, 1, 22513, 3 },
  { 896, 1227, 165, 1, 22513, 3 },
  { 1096, 1227, 165, 1, 22513, 3 },
  { 1306, 1227, 165, 1, 22513, 3 },
  { 1502, 1227, 165, 1, 22513, 3 },
  { 1708, 1227, 165, 1, 22513, 3 },
  { 1904, 1227, 165, 1, 22513, 3 },
  { 2102, 1227, 165, 1, 22513, 3 },
  { 13, 1227, 165, 1, 22513, 3 },
  { 272, 1227, 165, 1, 22513, 3 },
  { 549, 1227, 165, 1, 22513, 3 },
  { 744, 1227, 165, 1, 22513, 3 },
  { 960, 1227, 165, 1, 22513, 3 },
  { 1154, 1227, 165, 1, 22513, 3 },
  { 1370, 1227, 165, 1, 22513, 3 },
  { 1560, 1227, 165, 1, 22513, 3 },
  { 1772, 1227, 165, 1, 22513, 3 },
  { 1962, 1227, 165, 1, 22513, 3 },
  { 79, 1227, 165, 1, 22513, 3 },
  { 348, 1227, 165, 1, 22513, 3 },
  { 619, 1227, 165, 1, 22513, 3 },
  { 824, 1227, 165, 1, 22513, 3 },
  { 1032, 1227, 165, 1, 22513, 3 },
  { 1234, 1227, 165, 1, 22513, 3 },
  { 1438, 1227, 165, 1, 22513, 3 },
  { 1636, 1227, 165, 1, 22513, 3 },
  { 1840, 1227, 165, 1, 22513, 3 },
  { 2038, 1227, 165, 1, 22513, 3 },
  { 147, 1227, 165, 1, 22513, 3 },
  { 424, 1227, 165, 1, 22513, 3 },
  { 213, 1229, 227, 3, 19521, 3 },
  { 485, 1229, 309, 3, 19521, 3 },
  { 687, 1229, 498, 3, 19521, 3 },
  { 899, 1229, 163, 3, 19521, 3 },
  { 1099, 1229, 163, 3, 19521, 3 },
  { 1309, 1229, 163, 3, 19521, 3 },
  { 1505, 1229, 163, 3, 19521, 3 },
  { 1711, 1229, 163, 3, 19521, 3 },
  { 1907, 1229, 163, 3, 19521, 3 },
  { 2105, 1229, 163, 3, 19521, 3 },
  { 17, 1229, 163, 3, 19521, 3 },
  { 276, 1229, 163, 3, 19521, 3 },
  { 553, 1229, 163, 3, 19521, 3 },
  { 748, 1229, 163, 3, 19521, 3 },
  { 964, 1229, 163, 3, 19521, 3 },
  { 1158, 1229, 163, 3, 19521, 3 },
  { 1374, 1229, 163, 3, 19521, 3 },
  { 1564, 1229, 163, 3, 19521, 3 },
  { 1776, 1229, 163, 3, 19521, 3 },
  { 1966, 1229, 163, 3, 19521, 3 },
  { 83, 1229, 163, 3, 19521, 3 },
  { 352, 1229, 163, 3, 19521, 3 },
  { 623, 1229, 163, 3, 19521, 3 },
  { 828, 1229, 163, 3, 19521, 3 },
  { 1036, 1229, 163, 3, 19521, 3 },
  { 1238, 1229, 163, 3, 19521, 3 },
  { 1442, 1229, 163, 3, 19521, 3 },
  { 1640, 1229, 163, 3, 19521, 3 },
  { 1844, 1229, 163, 3, 19521, 3 },
  { 2042, 1229, 163, 3, 19521, 3 },
  { 151, 1229, 163, 3, 19521, 3 },
  { 428, 1229, 163, 3, 19521, 3 },
  { 216, 8, 8, 4, 19521, 0 },
  { 488, 8, 8, 4, 19521, 0 },
  { 690, 8, 8, 4, 19521, 0 },
  { 902, 8, 8, 4, 19521, 0 },
  { 1102, 8, 8, 4, 19521, 0 },
  { 1312, 8, 8, 4, 19521, 0 },
  { 1508, 8, 8, 4, 19521, 0 },
  { 1714, 8, 8, 4, 19521, 0 },
  { 1910, 8, 8, 4, 19521, 0 },
  { 2108, 8, 8, 4, 19521, 0 },
  { 21, 8, 8, 4, 19521, 0 },
  { 280, 8, 8, 4, 19521, 0 },
  { 557, 8, 8, 4, 19521, 0 },
  { 752, 8, 8, 4, 19521, 0 },
  { 968, 8, 8, 4, 19521, 0 },
  { 1162, 8, 8, 4, 19521, 0 },
  { 231, 1240, 259, 0, 17617, 3 },
  { 502, 1240, 341, 0, 17617, 3 },
  { 703, 1240, 530, 0, 17617, 3 },
  { 914, 1240, 195, 0, 17617, 3 },
  { 1114, 1240, 195, 0, 17617, 3 },
  { 1324, 1240, 195, 0, 17617, 3 },
  { 1520, 1240, 195, 0, 17617, 3 },
  { 1726, 1240, 195, 0, 17617, 3 },
  { 1922, 1240, 195, 0, 17617, 3 },
  { 2120, 1240, 195, 0, 17617, 3 },
  { 34, 1240, 195, 0, 17617, 3 },
  { 294, 1240, 195, 0, 17617, 3 },
  { 572, 1240, 195, 0, 17617, 3 },
  { 768, 1240, 195, 0, 17617, 3 },
  { 984, 1240, 195, 0, 17617, 3 },
  { 1178, 1240, 195, 0, 17617, 3 },
  { 1390, 1240, 195, 0, 17617, 3 },
  { 1580, 1240, 195, 0, 17617, 3 },
  { 1792, 1240, 195, 0, 17617, 3 },
  { 1982, 1240, 195, 0, 17617, 3 },
  { 99, 1240, 195, 0, 17617, 3 },
  { 368, 1240, 195, 0, 17617, 3 },
  { 639, 1240, 195, 0, 17617, 3 },
  { 844, 1240, 195, 0, 17617, 3 },
  { 1052, 1240, 195, 0, 17617, 3 },
  { 1254, 1240, 195, 0, 17617, 3 },
  { 1458, 1240, 195, 0, 17617, 3 },
  { 1656, 1240, 195, 0, 17617, 3 },
  { 1860, 1240, 195, 0, 17617, 3 },
  { 2058, 1240, 195, 0, 17617, 3 },
  { 167, 1240, 195, 0, 17617, 3 },
  { 444, 1240, 195, 0, 17617, 3 },
  { 234, 1228, 228, 2, 17553, 3 },
  { 505, 1228, 310, 2, 17553, 3 },
  { 706, 1228, 499, 2, 17553, 3 },
  { 917, 1228, 164, 2, 17553, 3 },
  { 1117, 1228, 164, 2, 17553, 3 },
  { 1327, 1228, 164, 2, 17553, 3 },
  { 1523, 1228, 164, 2, 17553, 3 },
  { 1729, 1228, 164, 2, 17553, 3 },
  { 1925, 1228, 164, 2, 17553, 3 },
  { 2123, 1228, 164, 2, 17553, 3 },
  { 38, 1228, 164, 2, 17553, 3 },
  { 298, 1228, 164, 2, 17553, 3 },
  { 576, 1228, 164, 2, 17553, 3 },
  { 772, 1228, 164, 2, 17553, 3 },
  { 988, 1228, 164, 2, 17553, 3 },
  { 1182, 1228, 164, 2, 17553, 3 },
  { 1394, 1228, 164, 2, 17553, 3 },
  { 1584, 1228, 164, 2, 17553, 3 },
  { 1796, 1228, 164, 2, 17553, 3 },
  { 1986, 1228, 164, 2, 17553, 3 },
  { 103, 1228, 164, 2, 17553, 3 },
  { 372, 1228, 164, 2, 17553, 3 },
  { 643, 1228, 164, 2, 17553, 3 },
  { 848, 1228, 164, 2, 17553, 3 },
  { 1056, 1228, 164, 2, 17553, 3 },
  { 1258, 1228, 164, 2, 17553, 3 },
  { 1462, 1228, 164, 2, 17553, 3 },
  { 1660, 1228, 164, 2, 17553, 3 },
  { 1864, 1228, 164, 2, 17553, 3 },
  { 2062, 1228, 164, 2, 17553, 3 },
  { 171, 1228, 164, 2, 17553, 3 },
  { 448, 1228, 164, 2, 17553, 3 },
  { 237, 8, 479, 4, 17585, 0 },
  { 511, 8, 475, 4, 17585, 0 },
  { 709, 8, 475, 4, 17585, 0 },
  { 923, 8, 471, 4, 17585, 0 },
  { 1120, 8, 471, 4, 17585, 0 },
  { 1333, 8, 467, 4, 17585, 0 },
  { 1526, 8, 467, 4, 17585, 0 },
  { 1735, 8, 463, 4, 17585, 0 },
  { 1928, 8, 463, 4, 17585, 0 },
  { 2129, 8, 459, 4, 17585, 0 },
  { 42, 8, 459, 4, 17585, 0 },
  { 306, 8, 455, 4, 17585, 0 },
  { 580, 8, 455, 4, 17585, 0 },
  { 780, 8, 451, 4, 17585, 0 },
  { 992, 8, 451, 4, 17585, 0 },
  { 1190, 8, 447, 4, 17585, 0 },
  { 1398, 8, 447, 4, 17585, 0 },
  { 1592, 8, 443, 4, 17585, 0 },
  { 1800, 8, 443, 4, 17585, 0 },
  { 1994, 8, 439, 4, 17585, 0 },
  { 107, 8, 439, 4, 17585, 0 },
  { 380, 8, 435, 4, 17585, 0 },
  { 647, 8, 435, 4, 17585, 0 },
  { 856, 8, 431, 4, 17585, 0 },
  { 1060, 8, 431, 4, 17585, 0 },
  { 1266, 8, 427, 4, 17585, 0 },
  { 1466, 8, 427, 4, 17585, 0 },
  { 1668, 8, 423, 4, 17585, 0 },
  { 1868, 8, 399, 4, 17585, 0 },
  { 2070, 8, 403, 4, 17409, 0 },
  { 175, 8, 419, 4, 17409, 0 },
  { 240, 1422, 984, 5, 17521, 27 },
  { 517, 1422, 978, 5, 17521, 27 },
  { 712, 1422, 978, 5, 17521, 27 },
  { 929, 1422, 972, 5, 17521, 27 },
  { 1123, 1422, 972, 5, 17521, 27 },
  { 1339, 1422, 970, 5, 17521, 27 },
  { 1529, 1422, 970, 5, 17521, 27 },
  { 1741, 1422, 968, 5, 17521, 27 },
  { 1931, 1422, 968, 5, 17521, 27 },
  { 2135, 1422, 956, 5, 17521, 27 },
  { 46, 1422, 956, 5, 17521, 27 },
  { 314, 1422, 954, 5, 17521, 27 },
  { 584, 1422, 954, 5, 17521, 27 },
  { 788, 1422, 952, 5, 17521, 27 },
  { 996, 1422, 952, 5, 17521, 27 },
  { 1198, 1422, 950, 5, 17521, 27 },
  { 1402, 1422, 950, 5, 17521, 27 },
  { 1600, 1422, 948, 5, 17521, 27 },
  { 1804, 1422, 948, 5, 17521, 27 },
  { 2002, 1422, 946, 5, 17521, 27 },
  { 111, 1422, 946, 5, 17521, 27 },
  { 388, 1422, 944, 5, 17521, 27 },
  { 651, 1422, 944, 5, 17521, 27 },
  { 864, 1422, 942, 5, 17521, 27 },
  { 1064, 1422, 942, 5, 17521, 27 },
  { 1274, 1422, 940, 5, 17521, 27 },
  { 1470, 1422, 940, 5, 17521, 27 },
  { 1676, 1422, 938, 5, 17521, 27 },
  { 1872, 1422, 936, 5, 17521, 27 },
  { 255, 929, 280, 10, 9713, 35 },
  { 531, 929, 362, 10, 9713, 35 },
  { 725, 929, 551, 10, 9713, 35 },
  { 941, 929, 216, 10, 9713, 35 },
  { 1135, 929, 216, 10, 9713, 35 },
  { 1351, 929, 216, 10, 9713, 35 },
  { 1541, 929, 216, 10, 9713, 35 },
  { 1753, 929, 216, 10, 9713, 35 },
  { 1943, 929, 216, 10, 9713, 35 },
  { 2147, 929, 216, 10, 9713, 35 },
  { 59, 929, 216, 10, 9713, 35 },
  { 328, 929, 216, 10, 9713, 35 },
  { 599, 929, 216, 10, 9713, 35 },
  { 804, 929, 216, 10, 9713, 35 },
  { 1012, 929, 216, 10, 9713, 35 },
  { 1214, 929, 216, 10, 9713, 35 },
  { 1418, 929, 216, 10, 9713, 35 },
  { 1616, 929, 216, 10, 9713, 35 },
  { 1820, 929, 216, 10, 9713, 35 },
  { 2018, 929, 216, 10, 9713, 35 },
  { 127, 929, 216, 10, 9713, 35 },
  { 404, 929, 216, 10, 9713, 35 },
  { 667, 929, 216, 10, 9713, 35 },
  { 880, 929, 216, 10, 9713, 35 },
  { 1080, 929, 216, 10, 9713, 35 },
  { 1290, 929, 216, 10, 9713, 35 },
  { 1486, 929, 216, 10, 9713, 35 },
  { 1692, 929, 216, 10, 9713, 35 },
  { 1888, 929, 216, 10, 9713, 35 },
  { 2086, 929, 216, 10, 9713, 35 },
  { 191, 929, 216, 10, 9713, 35 },
  { 464, 929, 216, 10, 9713, 35 },
  { 2174, 8, 279, 4, 17489, 0 },
  { 2201, 8, 361, 4, 17489, 0 },
  { 2221, 8, 550, 4, 17489, 0 },
  { 2241, 8, 215, 4, 17489, 0 },
  { 2261, 8, 215, 4, 17489, 0 },
  { 2281, 8, 215, 4, 17489, 0 },
  { 2301, 8, 215, 4, 17489, 0 },
  { 2321, 8, 215, 4, 17489, 0 },
  { 2341, 8, 215, 4, 17489, 0 },
  { 2361, 8, 215, 4, 17489, 0 },
  { 2153, 8, 215, 4, 17489, 0 },
  { 2180, 8, 215, 4, 17489, 0 },
  { 2207, 8, 215, 4, 17489, 0 },
  { 2227, 8, 215, 4, 17489, 0 },
  { 2247, 8, 215, 4, 17489, 0 },
  { 2267, 8, 215, 4, 17489, 0 },
  { 2287, 8, 215, 4, 17489, 0 },
  { 2307, 8, 215, 4, 17489, 0 },
  { 2327, 8, 215, 4, 17489, 0 },
  { 2347, 8, 215, 4, 17489, 0 },
  { 2160, 8, 215, 4, 17489, 0 },
  { 2187, 8, 215, 4, 17489, 0 },
  { 2214, 8, 215, 4, 17489, 0 },
  { 2234, 8, 215, 4, 17489, 0 },
  { 2254, 8, 215, 4, 17489, 0 },
  { 2274, 8, 215, 4, 17489, 0 },
  { 2294, 8, 215, 4, 17489, 0 },
  { 2314, 8, 215, 4, 17489, 0 },
  { 2334, 8, 215, 4, 17489, 0 },
  { 2354, 8, 215, 4, 17489, 0 },
  { 2167, 8, 215, 4, 17489, 0 },
  { 2194, 8, 215, 4, 17489, 0 },
  { 479, 1231, 372, 17, 2545, 61 },
  { 681, 1231, 572, 17, 2545, 61 },
  { 893, 1231, 290, 17, 2545, 61 },
  { 1093, 1231, 290, 17, 2545, 61 },
  { 1303, 1231, 290, 17, 2545, 61 },
  { 1499, 1231, 290, 17, 2545, 61 },
  { 1705, 1231, 290, 17, 2545, 61 },
  { 1901, 1231, 290, 17, 2545, 61 },
  { 2099, 1231, 290, 17, 2545, 61 },
  { 10, 1231, 290, 17, 2545, 61 },
  { 268, 1231, 290, 17, 2545, 61 },
  { 545, 1231, 290, 17, 2545, 61 },
  { 740, 1231, 290, 17, 2545, 61 },
  { 956, 1231, 290, 17, 2545, 61 },
  { 1150, 1231, 290, 17, 2545, 61 },
  { 1366, 1231, 290, 17, 2545, 61 },
  { 1556, 1231, 290, 17, 2545, 61 },
  { 1768, 1231, 290, 17, 2545, 61 },
  { 1958, 1231, 290, 17, 2545, 61 },
  { 75, 1231, 290, 17, 2545, 61 },
  { 344, 1231, 290, 17, 2545, 61 },
  { 615, 1231, 290, 17, 2545, 61 },
  { 820, 1231, 290, 17, 2545, 61 },
  { 1028, 1231, 290, 17, 2545, 61 },
  { 1230, 1231, 290, 17, 2545, 61 },
  { 1434, 1231, 290, 17, 2545, 61 },
  { 1632, 1231, 290, 17, 2545, 61 },
  { 1836, 1231, 290, 17, 2545, 61 },
  { 2034, 1231, 290, 17, 2545, 61 },
  { 143, 1231, 290, 17, 2545, 61 },
  { 420, 1231, 290, 17, 2545, 61 },
  { 206, 1222, 290, 17, 9440, 2 },
  { 887, 1363, 924, 41, 225, 68 },
  { 1087, 1363, 924, 41, 225, 68 },
  { 1297, 1363, 924, 41, 225, 68 },
  { 1493, 1363, 924, 41, 225, 68 },
  { 1699, 1363, 924, 41, 225, 68 },
  { 1895, 1363, 924, 41, 225, 68 },
  { 2093, 1363, 924, 41, 225, 68 },
  { 4, 1363, 924, 41, 225, 68 },
  { 262, 1363, 924, 41, 225, 68 },
  { 538, 1363, 924, 41, 225, 68 },
  { 732, 1363, 924, 41, 225, 68 },
  { 948, 1363, 924, 41, 225, 68 },
  { 1142, 1363, 924, 41, 225, 68 },
  { 1358, 1363, 924, 41, 225, 68 },
  { 1548, 1363, 924, 41, 225, 68 },
  { 1760, 1363, 924, 41, 225, 68 },
  { 1950, 1363, 924, 41, 225, 68 },
  { 67, 1363, 924, 41, 225, 68 },
  { 336, 1363, 924, 41, 225, 68 },
  { 607, 1363, 924, 41, 225, 68 },
  { 812, 1363, 924, 41, 225, 68 },
  { 1020, 1363, 924, 41, 225, 68 },
  { 1222, 1363, 924, 41, 225, 68 },
  { 1426, 1363, 924, 41, 225, 68 },
  { 1624, 1363, 924, 41, 225, 68 },
  { 1828, 1363, 924, 41, 225, 68 },
  { 2026, 1363, 924, 41, 225, 68 },
  { 135, 1363, 924, 41, 225, 68 },
  { 412, 1363, 924, 41, 225, 68 },
  { 198, 1385, 924, 41, 304, 73 },
  { 471, 1198, 924, 41, 768, 59 },
  { 674, 1341, 924, 41, 7728, 5 },
  { 678, 78, 598, 26, 705, 74 },
  { 890, 78, 390, 26, 705, 74 },
  { 1090, 78, 390, 26, 705, 74 },
  { 1300, 78, 390, 26, 705, 74 },
  { 1496, 78, 390, 26, 705, 74 },
  { 1702, 78, 390, 26, 705, 74 },
  { 1898, 78, 390, 26, 705, 74 },
  { 2096, 78, 390, 26, 705, 74 },
  { 7, 78, 390, 26, 705, 74 },
  { 265, 78, 390, 26, 705, 74 },
  { 541, 78, 390, 26, 705, 74 },
  { 736, 78, 390, 26, 705, 74 },
  { 952, 78, 390, 26, 705, 74 },
  { 1146, 78, 390, 26, 705, 74 },
  { 1362, 78, 390, 26, 705, 74 },
  { 1552, 78, 390, 26, 705, 74 },
  { 1764, 78, 390, 26, 705, 74 },
  { 1954, 78, 390, 26, 705, 74 },
  { 71, 78, 390, 26, 705, 74 },
  { 340, 78, 390, 26, 705, 74 },
  { 611, 78, 390, 26, 705, 74 },
  { 816, 78, 390, 26, 705, 74 },
  { 1024, 78, 390, 26, 705, 74 },
  { 1226, 78, 390, 26, 705, 74 },
  { 1430, 78, 390, 26, 705, 74 },
  { 1628, 78, 390, 26, 705, 74 },
  { 1832, 78, 390, 26, 705, 74 },
  { 2030, 78, 390, 26, 705, 74 },
  { 139, 78, 390, 26, 705, 74 },
  { 416, 78, 390, 26, 705, 74 },
  { 202, 93, 390, 26, 992, 64 },
  { 475, 1409, 390, 26, 8976, 10 },
  { 499, 958, 378, 63, 1825, 80 },
  { 700, 958, 578, 63, 1825, 80 },
  { 911, 958, 296, 63, 1825, 80 },
  { 1111, 958, 296, 63, 1825, 80 },
  { 1321, 958, 296, 63, 1825, 80 },
  { 1517, 958, 296, 63, 1825, 80 },
  { 1723, 958, 296, 63, 1825, 80 },
  { 1919, 958, 296, 63, 1825, 80 },
  { 2117, 958, 296, 63, 1825, 80 },
  { 31, 958, 296, 63, 1825, 80 },
  { 290, 958, 296, 63, 1825, 80 },
  { 568, 958, 296, 63, 1825, 80 },
  { 764, 958, 296, 63, 1825, 80 },
  { 980, 958, 296, 63, 1825, 80 },
  { 1174, 958, 296, 63, 1825, 80 },
  { 1386, 958, 296, 63, 1825, 80 },
  { 1576, 958, 296, 63, 1825, 80 },
  { 1788, 958, 296, 63, 1825, 80 },
  { 1978, 958, 296, 63, 1825, 80 },
  { 95, 958, 296, 63, 1825, 80 },
  { 364, 958, 296, 63, 1825, 80 },
  { 635, 958, 296, 63, 1825, 80 },
  { 840, 958, 296, 63, 1825, 80 },
  { 1048, 958, 296, 63, 1825, 80 },
  { 1250, 958, 296, 63, 1825, 80 },
  { 1454, 958, 296, 63, 1825, 80 },
  { 1652, 958, 296, 63, 1825, 80 },
  { 1856, 958, 296, 63, 1825, 80 },
  { 2054, 958, 296, 63, 1825, 80 },
  { 163, 958, 296, 63, 1825, 80 },
  { 440, 958, 296, 63, 1825, 80 },
  { 227, 1064, 296, 63, 9440, 14 },
  { 905, 1277, 925, 96, 145, 87 },
  { 1105, 1277, 925, 96, 145, 87 },
  { 1315, 1277, 925, 96, 145, 87 },
  { 1511, 1277, 925, 96, 145, 87 },
  { 1717, 1277, 925, 96, 145, 87 },
  { 1913, 1277, 925, 96, 145, 87 },
  { 2111, 1277, 925, 96, 145, 87 },
  { 25, 1277, 925, 96, 145, 87 },
  { 284, 1277, 925, 96, 145, 87 },
  { 561, 1277, 925, 96, 145, 87 },
  { 756, 1277, 925, 96, 145, 87 },
  { 972, 1277, 925, 96, 145, 87 },
  { 1166, 1277, 925, 96, 145, 87 },
  { 1378, 1277, 925, 96, 145, 87 },
  { 1568, 1277, 925, 96, 145, 87 },
  { 1780, 1277, 925, 96, 145, 87 },
  { 1970, 1277, 925, 96, 145, 87 },
  { 87, 1277, 925, 96, 145, 87 },
  { 356, 1277, 925, 96, 145, 87 },
  { 627, 1277, 925, 96, 145, 87 },
  { 832, 1277, 925, 96, 145, 87 },
  { 1040, 1277, 925, 96, 145, 87 },
  { 1242, 1277, 925, 96, 145, 87 },
  { 1446, 1277, 925, 96, 145, 87 },
  { 1644, 1277, 925, 96, 145, 87 },
  { 1848, 1277, 925, 96, 145, 87 },
  { 2046, 1277, 925, 96, 145, 87 },
  { 155, 1277, 925, 96, 145, 87 },
  { 432, 1277, 925, 96, 145, 87 },
  { 219, 1309, 925, 96, 304, 92 },
  { 491, 1166, 925, 96, 768, 78 },
  { 693, 1245, 925, 96, 7728, 17 },
  { 697, 1103, 601, 75, 641, 93 },
  { 908, 1103, 393, 75, 641, 93 },
  { 1108, 1103, 393, 75, 641, 93 },
  { 1318, 1103, 393, 75, 641, 93 },
  { 1514, 1103, 393, 75, 641, 93 },
  { 1720, 1103, 393, 75, 641, 93 },
  { 1916, 1103, 393, 75, 641, 93 },
  { 2114, 1103, 393, 75, 641, 93 },
  { 28, 1103, 393, 75, 641, 93 },
  { 287, 1103, 393, 75, 641, 93 },
  { 564, 1103, 393, 75, 641, 93 },
  { 760, 1103, 393, 75, 641, 93 },
  { 976, 1103, 393, 75, 641, 93 },
  { 1170, 1103, 393, 75, 641, 93 },
  { 1382, 1103, 393, 75, 641, 93 },
  { 1572, 1103, 393, 75, 641, 93 },
  { 1784, 1103, 393, 75, 641, 93 },
  { 1974, 1103, 393, 75, 641, 93 },
  { 91, 1103, 393, 75, 641, 93 },
  { 360, 1103, 393, 75, 641, 93 },
  { 631, 1103, 393, 75, 641, 93 },
  { 836, 1103, 393, 75, 641, 93 },
  { 1044, 1103, 393, 75, 641, 93 },
  { 1246, 1103, 393, 75, 641, 93 },
  { 1450, 1103, 393, 75, 641, 93 },
  { 1648, 1103, 393, 75, 641, 93 },
  { 1852, 1103, 393, 75, 641, 93 },
  { 2050, 1103, 393, 75, 641, 93 },
  { 159, 1103, 393, 75, 641, 93 },
  { 436, 1103, 393, 75, 641, 93 },
  { 223, 1124, 393, 75, 992, 83 },
  { 495, 1145, 393, 75, 8976, 22 },
  { 2385, 1090, 417, 7, 6512, 32 },
  { 508, 117, 425, 7, 1778, 32 },
  { 920, 120, 425, 7, 1778, 32 },
  { 1330, 123, 425, 7, 1778, 32 },
  { 1732, 126, 425, 7, 1778, 32 },
  { 2126, 129, 425, 7, 1778, 32 },
  { 302, 132, 425, 7, 1778, 32 },
  { 776, 135, 425, 7, 1778, 32 },
  { 1186, 138, 425, 7, 1778, 32 },
  { 1588, 141, 425, 7, 1778, 32 },
  { 1990, 144, 425, 7, 1778, 32 },
  { 376, 147, 425, 7, 1778, 32 },
  { 852, 150, 425, 7, 1778, 32 },
  { 1262, 153, 425, 7, 1778, 32 },
  { 1664, 156, 425, 7, 1778, 32 },
  { 2066, 159, 401, 7, 9809, 29 },
  { 2393, 1076, 8, 128, 6561, 97 },
  { 2367, 974, 8, 128, 9760, 26 },
  { 514, 1058, 8, 128, 1730, 97 },
  { 926, 1052, 8, 128, 1730, 97 },
  { 1336, 1046, 8, 128, 1730, 97 },
  { 1738, 1040, 8, 128, 1730, 97 },
  { 2132, 1034, 8, 128, 1730, 97 },
  { 310, 1028, 8, 128, 1730, 97 },
  { 784, 1022, 8, 128, 1730, 97 },
  { 1194, 1016, 8, 128, 1730, 97 },
  { 1596, 1010, 8, 128, 1730, 97 },
  { 1998, 1004, 8, 128, 1730, 97 },
  { 384, 998, 8, 128, 1730, 97 },
  { 860, 992, 8, 128, 1730, 97 },
  { 1270, 986, 8, 128, 1730, 97 },
  { 1672, 980, 8, 128, 1730, 97 },
  { 528, 616, 384, 134, 1169, 100 },
  { 722, 616, 584, 134, 1169, 100 },
  { 938, 616, 302, 134, 1169, 100 },
  { 1132, 616, 302, 134, 1169, 100 },
  { 1348, 616, 302, 134, 1169, 100 },
  { 1538, 616, 302, 134, 1169, 100 },
  { 1750, 616, 302, 134, 1169, 100 },
  { 1940, 616, 302, 134, 1169, 100 },
  { 2144, 616, 302, 134, 1169, 100 },
  { 56, 616, 302, 134, 1169, 100 },
  { 324, 616, 302, 134, 1169, 100 },
  { 595, 616, 302, 134, 1169, 100 },
  { 800, 616, 302, 134, 1169, 100 },
  { 1008, 616, 302, 134, 1169, 100 },
  { 1210, 616, 302, 134, 1169, 100 },
  { 1414, 616, 302, 134, 1169, 100 },
  { 1612, 616, 302, 134, 1169, 100 },
  { 1816, 616, 302, 134, 1169, 100 },
  { 2014, 616, 302, 134, 1169, 100 },
  { 123, 616, 302, 134, 1169, 100 },
  { 400, 616, 302, 134, 1169, 100 },
  { 663, 616, 302, 134, 1169, 100 },
  { 876, 616, 302, 134, 1169, 100 },
  { 1076, 616, 302, 134, 1169, 100 },
  { 1286, 616, 302, 134, 1169, 100 },
  { 1482, 616, 302, 134, 1169, 100 },
  { 1688, 616, 302, 134, 1169, 100 },
  { 1884, 616, 302, 134, 1169, 100 },
  { 2082, 616, 302, 134, 1169, 100 },
  { 187, 616, 302, 134, 1169, 100 },
  { 460, 616, 302, 134, 1169, 100 },
  { 251, 633, 302, 134, 9488, 38 },
  { 932, 832, 8, 181, 1, 121 },
  { 1126, 832, 8, 181, 1, 121 },
  { 1342, 832, 8, 181, 1, 121 },
  { 1532, 832, 8, 181, 1, 121 },
  { 1744, 832, 8, 181, 1, 121 },
  { 1934, 832, 8, 181, 1, 121 },
  { 2138, 832, 8, 181, 1, 121 },
  { 50, 832, 8, 181, 1, 121 },
  { 318, 832, 8, 181, 1, 121 },
  { 588, 832, 8, 181, 1, 121 },
  { 792, 832, 8, 181, 1, 121 },
  { 1000, 832, 8, 181, 1, 121 },
  { 1202, 832, 8, 181, 1, 121 },
  { 1406, 832, 8, 181, 1, 121 },
  { 1604, 832, 8, 181, 1, 121 },
  { 1808, 832, 8, 181, 1, 121 },
  { 2006, 832, 8, 181, 1, 121 },
  { 115, 832, 8, 181, 1, 121 },
  { 392, 832, 8, 181, 1, 121 },
  { 655, 832, 8, 181, 1, 121 },
  { 868, 832, 8, 181, 1, 121 },
  { 1068, 832, 8, 181, 1, 121 },
  { 1278, 832, 8, 181, 1, 121 },
  { 1474, 832, 8, 181, 1, 121 },
  { 1680, 832, 8, 181, 1, 121 },
  { 1876, 832, 8, 181, 1, 121 },
  { 2074, 832, 8, 181, 1, 121 },
  { 179, 832, 8, 181, 1, 121 },
  { 452, 832, 8, 181, 1, 121 },
  { 243, 878, 8, 181, 384, 130 },
  { 520, 740, 8, 181, 848, 105 },
  { 715, 786, 8, 181, 7808, 43 },
  { 719, 650, 604, 151, 529, 139 },
  { 935, 650, 192, 151, 529, 139 },
  { 1129, 650, 192, 151, 529, 139 },
  { 1345, 650, 192, 151, 529, 139 },
  { 1535, 650, 192, 151, 529, 139 },
  { 1747, 650, 192, 151, 529, 139 },
  { 1937, 650, 192, 151, 529, 139 },
  { 2141, 650, 192, 151, 529, 139 },
  { 53, 650, 192, 151, 529, 139 },
  { 321, 650, 192, 151, 529, 139 },
  { 591, 650, 192, 151, 529, 139 },
  { 796, 650, 192, 151, 529, 139 },
  { 1004, 650, 192, 151, 529, 139 },
  { 1206, 650, 192, 151, 529, 139 },
  { 1410, 650, 192, 151, 529, 139 },
  { 1608, 650, 192, 151, 529, 139 },
  { 1812, 650, 192, 151, 529, 139 },
  { 2010, 650, 192, 151, 529, 139 },
  { 119, 650, 192, 151, 529, 139 },
  { 396, 650, 192, 151, 529, 139 },
  { 659, 650, 192, 151, 529, 139 },
  { 872, 650, 192, 151, 529, 139 },
  { 1072, 650, 192, 151, 529, 139 },
  { 1282, 650, 192, 151, 529, 139 },
  { 1478, 650, 192, 151, 529, 139 },
  { 1684, 650, 192, 151, 529, 139 },
  { 1880, 650, 192, 151, 529, 139 },
  { 2078, 650, 192, 151, 529, 139 },
  { 183, 650, 192, 151, 529, 139 },
  { 456, 650, 192, 151, 529, 139 },
  { 247, 680, 192, 151, 1056, 114 },
  { 524, 710, 192, 151, 9040, 52 },
};

extern const MCPhysReg AArch64RegUnitRoots[][2] = {
  { AArch64::FFR },
  { AArch64::W29 },
  { AArch64::W30 },
  { AArch64::NZCV },
  { AArch64::WSP },
  { AArch64::VG },
  { AArch64::WZR },
  { AArch64::B0 },
  { AArch64::B1 },
  { AArch64::B2 },
  { AArch64::B3 },
  { AArch64::B4 },
  { AArch64::B5 },
  { AArch64::B6 },
  { AArch64::B7 },
  { AArch64::B8 },
  { AArch64::B9 },
  { AArch64::B10 },
  { AArch64::B11 },
  { AArch64::B12 },
  { AArch64::B13 },
  { AArch64::B14 },
  { AArch64::B15 },
  { AArch64::B16 },
  { AArch64::B17 },
  { AArch64::B18 },
  { AArch64::B19 },
  { AArch64::B20 },
  { AArch64::B21 },
  { AArch64::B22 },
  { AArch64::B23 },
  { AArch64::B24 },
  { AArch64::B25 },
  { AArch64::B26 },
  { AArch64::B27 },
  { AArch64::B28 },
  { AArch64::B29 },
  { AArch64::B30 },
  { AArch64::B31 },
  { AArch64::P0 },
  { AArch64::P1 },
  { AArch64::P2 },
  { AArch64::P3 },
  { AArch64::P4 },
  { AArch64::P5 },
  { AArch64::P6 },
  { AArch64::P7 },
  { AArch64::P8 },
  { AArch64::P9 },
  { AArch64::P10 },
  { AArch64::P11 },
  { AArch64::P12 },
  { AArch64::P13 },
  { AArch64::P14 },
  { AArch64::P15 },
  { AArch64::W0 },
  { AArch64::W1 },
  { AArch64::W2 },
  { AArch64::W3 },
  { AArch64::W4 },
  { AArch64::W5 },
  { AArch64::W6 },
  { AArch64::W7 },
  { AArch64::W8 },
  { AArch64::W9 },
  { AArch64::W10 },
  { AArch64::W11 },
  { AArch64::W12 },
  { AArch64::W13 },
  { AArch64::W14 },
  { AArch64::W15 },
  { AArch64::W16 },
  { AArch64::W17 },
  { AArch64::W18 },
  { AArch64::W19 },
  { AArch64::W20 },
  { AArch64::W21 },
  { AArch64::W22 },
  { AArch64::W23 },
  { AArch64::W24 },
  { AArch64::W25 },
  { AArch64::W26 },
  { AArch64::W27 },
  { AArch64::W28 },
  { AArch64::Z0_HI },
  { AArch64::Z1_HI },
  { AArch64::Z2_HI },
  { AArch64::Z3_HI },
  { AArch64::Z4_HI },
  { AArch64::Z5_HI },
  { AArch64::Z6_HI },
  { AArch64::Z7_HI },
  { AArch64::Z8_HI },
  { AArch64::Z9_HI },
  { AArch64::Z10_HI },
  { AArch64::Z11_HI },
  { AArch64::Z12_HI },
  { AArch64::Z13_HI },
  { AArch64::Z14_HI },
  { AArch64::Z15_HI },
  { AArch64::Z16_HI },
  { AArch64::Z17_HI },
  { AArch64::Z18_HI },
  { AArch64::Z19_HI },
  { AArch64::Z20_HI },
  { AArch64::Z21_HI },
  { AArch64::Z22_HI },
  { AArch64::Z23_HI },
  { AArch64::Z24_HI },
  { AArch64::Z25_HI },
  { AArch64::Z26_HI },
  { AArch64::Z27_HI },
  { AArch64::Z28_HI },
  { AArch64::Z29_HI },
  { AArch64::Z30_HI },
  { AArch64::Z31_HI },
};

namespace {     // Register classes...
  // FPR8 Register Class...
  const MCPhysReg FPR8[] = {
    AArch64::B0, AArch64::B1, AArch64::B2, AArch64::B3, AArch64::B4, AArch64::B5, AArch64::B6, AArch64::B7, AArch64::B8, AArch64::B9, AArch64::B10, AArch64::B11, AArch64::B12, AArch64::B13, AArch64::B14, AArch64::B15, AArch64::B16, AArch64::B17, AArch64::B18, AArch64::B19, AArch64::B20, AArch64::B21, AArch64::B22, AArch64::B23, AArch64::B24, AArch64::B25, AArch64::B26, AArch64::B27, AArch64::B28, AArch64::B29, AArch64::B30, AArch64::B31, 
  };

  // FPR8 Bit set.
  const uint8_t FPR8Bits[] = {
    0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // FPR16 Register Class...
  const MCPhysReg FPR16[] = {
    AArch64::H0, AArch64::H1, AArch64::H2, AArch64::H3, AArch64::H4, AArch64::H5, AArch64::H6, AArch64::H7, AArch64::H8, AArch64::H9, AArch64::H10, AArch64::H11, AArch64::H12, AArch64::H13, AArch64::H14, AArch64::H15, AArch64::H16, AArch64::H17, AArch64::H18, AArch64::H19, AArch64::H20, AArch64::H21, AArch64::H22, AArch64::H23, AArch64::H24, AArch64::H25, AArch64::H26, AArch64::H27, AArch64::H28, AArch64::H29, AArch64::H30, AArch64::H31, 
  };

  // FPR16 Bit set.
  const uint8_t FPR16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // FPR16_lo Register Class...
  const MCPhysReg FPR16_lo[] = {
    AArch64::H0, AArch64::H1, AArch64::H2, AArch64::H3, AArch64::H4, AArch64::H5, AArch64::H6, AArch64::H7, AArch64::H8, AArch64::H9, AArch64::H10, AArch64::H11, AArch64::H12, AArch64::H13, AArch64::H14, AArch64::H15, 
  };

  // FPR16_lo Bit set.
  const uint8_t FPR16_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // PPR Register Class...
  const MCPhysReg PPR[] = {
    AArch64::P0, AArch64::P1, AArch64::P2, AArch64::P3, AArch64::P4, AArch64::P5, AArch64::P6, AArch64::P7, AArch64::P8, AArch64::P9, AArch64::P10, AArch64::P11, AArch64::P12, AArch64::P13, AArch64::P14, AArch64::P15, 
  };

  // PPR Bit set.
  const uint8_t PPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // PPR_3b Register Class...
  const MCPhysReg PPR_3b[] = {
    AArch64::P0, AArch64::P1, AArch64::P2, AArch64::P3, AArch64::P4, AArch64::P5, AArch64::P6, AArch64::P7, 
  };

  // PPR_3b Bit set.
  const uint8_t PPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // GPR32all Register Class...
  const MCPhysReg GPR32all[] = {
    AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WZR, AArch64::WSP, 
  };

  // GPR32all Bit set.
  const uint8_t GPR32allBits[] = {
    0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 
  };

  // FPR32 Register Class...
  const MCPhysReg FPR32[] = {
    AArch64::S0, AArch64::S1, AArch64::S2, AArch64::S3, AArch64::S4, AArch64::S5, AArch64::S6, AArch64::S7, AArch64::S8, AArch64::S9, AArch64::S10, AArch64::S11, AArch64::S12, AArch64::S13, AArch64::S14, AArch64::S15, AArch64::S16, AArch64::S17, AArch64::S18, AArch64::S19, AArch64::S20, AArch64::S21, AArch64::S22, AArch64::S23, AArch64::S24, AArch64::S25, AArch64::S26, AArch64::S27, AArch64::S28, AArch64::S29, AArch64::S30, AArch64::S31, 
  };

  // FPR32 Bit set.
  const uint8_t FPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // GPR32 Register Class...
  const MCPhysReg GPR32[] = {
    AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WZR, 
  };

  // GPR32 Bit set.
  const uint8_t GPR32Bits[] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPR32sp Register Class...
  const MCPhysReg GPR32sp[] = {
    AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WSP, 
  };

  // GPR32sp Bit set.
  const uint8_t GPR32spBits[] = {
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPR32common Register Class...
  const MCPhysReg GPR32common[] = {
    AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, 
  };

  // GPR32common Bit set.
  const uint8_t GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x01, 
  };

  // FPR32_with_hsub_in_FPR16_lo Register Class...
  const MCPhysReg FPR32_with_hsub_in_FPR16_lo[] = {
    AArch64::S0, AArch64::S1, AArch64::S2, AArch64::S3, AArch64::S4, AArch64::S5, AArch64::S6, AArch64::S7, AArch64::S8, AArch64::S9, AArch64::S10, AArch64::S11, AArch64::S12, AArch64::S13, AArch64::S14, AArch64::S15, 
  };

  // FPR32_with_hsub_in_FPR16_lo Bit set.
  const uint8_t FPR32_with_hsub_in_FPR16_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GPR32arg Register Class...
  const MCPhysReg GPR32arg[] = {
    AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, 
  };

  // GPR32arg Bit set.
  const uint8_t GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    AArch64::NZCV, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x10, 
  };

  // GPR32sponly Register Class...
  const MCPhysReg GPR32sponly[] = {
    AArch64::WSP, 
  };

  // GPR32sponly Bit set.
  const uint8_t GPR32sponlyBits[] = {
    0x80, 
  };

  // WSeqPairsClass Register Class...
  const MCPhysReg WSeqPairsClass[] = {
    AArch64::W0_W1, AArch64::W2_W3, AArch64::W4_W5, AArch64::W6_W7, AArch64::W8_W9, AArch64::W10_W11, AArch64::W12_W13, AArch64::W14_W15, AArch64::W16_W17, AArch64::W18_W19, AArch64::W20_W21, AArch64::W22_W23, AArch64::W24_W25, AArch64::W26_W27, AArch64::W28_W29, AArch64::W30_WZR, 
  };

  // WSeqPairsClass Bit set.
  const uint8_t WSeqPairsClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // WSeqPairsClass_with_subo32_in_GPR32common Register Class...
  const MCPhysReg WSeqPairsClass_with_subo32_in_GPR32common[] = {
    AArch64::W0_W1, AArch64::W2_W3, AArch64::W4_W5, AArch64::W6_W7, AArch64::W8_W9, AArch64::W10_W11, AArch64::W12_W13, AArch64::W14_W15, AArch64::W16_W17, AArch64::W18_W19, AArch64::W20_W21, AArch64::W22_W23, AArch64::W24_W25, AArch64::W26_W27, AArch64::W28_W29, 
  };

  // WSeqPairsClass_with_subo32_in_GPR32common Bit set.
  const uint8_t WSeqPairsClass_with_subo32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 
  };

  // WSeqPairsClass_with_sube32_in_GPR32arg Register Class...
  const MCPhysReg WSeqPairsClass_with_sube32_in_GPR32arg[] = {
    AArch64::W0_W1, AArch64::W2_W3, AArch64::W4_W5, AArch64::W6_W7, 
  };

  // WSeqPairsClass_with_sube32_in_GPR32arg Bit set.
  const uint8_t WSeqPairsClass_with_sube32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  };

  // GPR64all Register Class...
  const MCPhysReg GPR64all[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::XZR, AArch64::SP, 
  };

  // GPR64all Bit set.
  const uint8_t GPR64allBits[] = {
    0x2c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 
  };

  // FPR64 Register Class...
  const MCPhysReg FPR64[] = {
    AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::D16, AArch64::D17, AArch64::D18, AArch64::D19, AArch64::D20, AArch64::D21, AArch64::D22, AArch64::D23, AArch64::D24, AArch64::D25, AArch64::D26, AArch64::D27, AArch64::D28, AArch64::D29, AArch64::D30, AArch64::D31, 
  };

  // FPR64 Bit set.
  const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // GPR64 Register Class...
  const MCPhysReg GPR64[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::XZR, 
  };

  // GPR64 Bit set.
  const uint8_t GPR64Bits[] = {
    0x0c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 
  };

  // GPR64sp Register Class...
  const MCPhysReg GPR64sp[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::SP, 
  };

  // GPR64sp Bit set.
  const uint8_t GPR64spBits[] = {
    0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 
  };

  // GPR64common Register Class...
  const MCPhysReg GPR64common[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, 
  };

  // GPR64common Bit set.
  const uint8_t GPR64commonBits[] = {
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 
  };

  // GPR64noip Register Class...
  const MCPhysReg GPR64noip[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::XZR, 
  };

  // GPR64noip Bit set.
  const uint8_t GPR64noipBits[] = {
    0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xf9, 0x3f, 
  };

  // GPR64common_and_GPR64noip Register Class...
  const MCPhysReg GPR64common_and_GPR64noip[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, 
  };

  // GPR64common_and_GPR64noip Bit set.
  const uint8_t GPR64common_and_GPR64noipBits[] = {
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xf9, 0x3f, 
  };

  // tcGPR64 Register Class...
  const MCPhysReg tcGPR64[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, 
  };

  // tcGPR64 Bit set.
  const uint8_t tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x0f, 
  };

  // GPR64noip_and_tcGPR64 Register Class...
  const MCPhysReg GPR64noip_and_tcGPR64[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, 
  };

  // GPR64noip_and_tcGPR64 Bit set.
  const uint8_t GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x09, 
  };

  // FPR64_lo Register Class...
  const MCPhysReg FPR64_lo[] = {
    AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 
  };

  // FPR64_lo Bit set.
  const uint8_t FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // GPR64arg Register Class...
  const MCPhysReg GPR64arg[] = {
    AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, 
  };

  // GPR64arg Bit set.
  const uint8_t GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 
  };

  // rtcGPR64 Register Class...
  const MCPhysReg rtcGPR64[] = {
    AArch64::X16, AArch64::X17, 
  };

  // rtcGPR64 Bit set.
  const uint8_t rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  };

  // GPR64sponly Register Class...
  const MCPhysReg GPR64sponly[] = {
    AArch64::SP, 
  };

  // GPR64sponly Bit set.
  const uint8_t GPR64sponlyBits[] = {
    0x20, 
  };

  // DD Register Class...
  const MCPhysReg DD[] = {
    AArch64::D0_D1, AArch64::D1_D2, AArch64::D2_D3, AArch64::D3_D4, AArch64::D4_D5, AArch64::D5_D6, AArch64::D6_D7, AArch64::D7_D8, AArch64::D8_D9, AArch64::D9_D10, AArch64::D10_D11, AArch64::D11_D12, AArch64::D12_D13, AArch64::D13_D14, AArch64::D14_D15, AArch64::D15_D16, AArch64::D16_D17, AArch64::D17_D18, AArch64::D18_D19, AArch64::D19_D20, AArch64::D20_D21, AArch64::D21_D22, AArch64::D22_D23, AArch64::D23_D24, AArch64::D24_D25, AArch64::D25_D26, AArch64::D26_D27, AArch64::D27_D28, AArch64::D28_D29, AArch64::D29_D30, AArch64::D30_D31, AArch64::D31_D0, 
  };

  // DD Bit set.
  const uint8_t DDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // DD_with_dsub0_in_FPR64_lo Register Class...
  const MCPhysReg DD_with_dsub0_in_FPR64_lo[] = {
    AArch64::D0_D1, AArch64::D1_D2, AArch64::D2_D3, AArch64::D3_D4, AArch64::D4_D5, AArch64::D5_D6, AArch64::D6_D7, AArch64::D7_D8, AArch64::D8_D9, AArch64::D9_D10, AArch64::D10_D11, AArch64::D11_D12, AArch64::D12_D13, AArch64::D13_D14, AArch64::D14_D15, AArch64::D15_D16, 
  };

  // DD_with_dsub0_in_FPR64_lo Bit set.
  const uint8_t DD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // DD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1, AArch64::D1_D2, AArch64::D2_D3, AArch64::D3_D4, AArch64::D4_D5, AArch64::D5_D6, AArch64::D6_D7, AArch64::D7_D8, AArch64::D8_D9, AArch64::D9_D10, AArch64::D10_D11, AArch64::D11_D12, AArch64::D12_D13, AArch64::D13_D14, AArch64::D14_D15, AArch64::D31_D0, 
  };

  // DD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // XSeqPairsClass Register Class...
  const MCPhysReg XSeqPairsClass[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X16_X17, AArch64::X18_X19, AArch64::X20_X21, AArch64::X22_X23, AArch64::X24_X25, AArch64::X26_X27, AArch64::X28_FP, AArch64::LR_XZR, 
  };

  // XSeqPairsClass Bit set.
  const uint8_t XSeqPairsClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1, AArch64::D1_D2, AArch64::D2_D3, AArch64::D3_D4, AArch64::D4_D5, AArch64::D5_D6, AArch64::D6_D7, AArch64::D7_D8, AArch64::D8_D9, AArch64::D9_D10, AArch64::D10_D11, AArch64::D11_D12, AArch64::D12_D13, AArch64::D13_D14, AArch64::D14_D15, 
  };

  // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64common Register Class...
  const MCPhysReg XSeqPairsClass_with_subo64_in_GPR64common[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X16_X17, AArch64::X18_X19, AArch64::X20_X21, AArch64::X22_X23, AArch64::X24_X25, AArch64::X26_X27, AArch64::X28_FP, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64common Bit set.
  const uint8_t XSeqPairsClass_with_subo64_in_GPR64commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64noip Register Class...
  const MCPhysReg XSeqPairsClass_with_subo64_in_GPR64noip[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X18_X19, AArch64::X20_X21, AArch64::X22_X23, AArch64::X24_X25, AArch64::X26_X27, AArch64::X28_FP, AArch64::LR_XZR, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64noip Bit set.
  const uint8_t XSeqPairsClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3e, 
  };

  // XSeqPairsClass_with_sube64_in_GPR64noip Register Class...
  const MCPhysReg XSeqPairsClass_with_sube64_in_GPR64noip[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X18_X19, AArch64::X20_X21, AArch64::X22_X23, AArch64::X24_X25, AArch64::X26_X27, AArch64::X28_FP, 
  };

  // XSeqPairsClass_with_sube64_in_GPR64noip Bit set.
  const uint8_t XSeqPairsClass_with_sube64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3e, 
  };

  // XSeqPairsClass_with_sube64_in_tcGPR64 Register Class...
  const MCPhysReg XSeqPairsClass_with_sube64_in_tcGPR64[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X16_X17, AArch64::X18_X19, 
  };

  // XSeqPairsClass_with_sube64_in_tcGPR64 Bit set.
  const uint8_t XSeqPairsClass_with_sube64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03, 
  };

  // XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64 Register Class...
  const MCPhysReg XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X18_X19, 
  };

  // XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64 Bit set.
  const uint8_t XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x02, 
  };

  // XSeqPairsClass_with_subo64_in_tcGPR64 Register Class...
  const MCPhysReg XSeqPairsClass_with_subo64_in_tcGPR64[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, AArch64::X16_X17, 
  };

  // XSeqPairsClass_with_subo64_in_tcGPR64 Bit set.
  const uint8_t XSeqPairsClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  const MCPhysReg XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, AArch64::X8_X9, AArch64::X10_X11, AArch64::X12_X13, AArch64::X14_X15, 
  };

  // XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  const uint8_t XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // XSeqPairsClass_with_sub_32_in_GPR32arg Register Class...
  const MCPhysReg XSeqPairsClass_with_sub_32_in_GPR32arg[] = {
    AArch64::X0_X1, AArch64::X2_X3, AArch64::X4_X5, AArch64::X6_X7, 
  };

  // XSeqPairsClass_with_sub_32_in_GPR32arg Bit set.
  const uint8_t XSeqPairsClass_with_sub_32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // XSeqPairsClass_with_sube64_in_rtcGPR64 Register Class...
  const MCPhysReg XSeqPairsClass_with_sube64_in_rtcGPR64[] = {
    AArch64::X16_X17, 
  };

  // XSeqPairsClass_with_sube64_in_rtcGPR64 Bit set.
  const uint8_t XSeqPairsClass_with_sube64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // FPR128 Register Class...
  const MCPhysReg FPR128[] = {
    AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 
  };

  // FPR128 Bit set.
  const uint8_t FPR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // ZPR Register Class...
  const MCPhysReg ZPR[] = {
    AArch64::Z0, AArch64::Z1, AArch64::Z2, AArch64::Z3, AArch64::Z4, AArch64::Z5, AArch64::Z6, AArch64::Z7, AArch64::Z8, AArch64::Z9, AArch64::Z10, AArch64::Z11, AArch64::Z12, AArch64::Z13, AArch64::Z14, AArch64::Z15, AArch64::Z16, AArch64::Z17, AArch64::Z18, AArch64::Z19, AArch64::Z20, AArch64::Z21, AArch64::Z22, AArch64::Z23, AArch64::Z24, AArch64::Z25, AArch64::Z26, AArch64::Z27, AArch64::Z28, AArch64::Z29, AArch64::Z30, AArch64::Z31, 
  };

  // ZPR Bit set.
  const uint8_t ZPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // FPR128_lo Register Class...
  const MCPhysReg FPR128_lo[] = {
    AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, 
  };

  // FPR128_lo Bit set.
  const uint8_t FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x03, 
  };

  // ZPR_4b Register Class...
  const MCPhysReg ZPR_4b[] = {
    AArch64::Z0, AArch64::Z1, AArch64::Z2, AArch64::Z3, AArch64::Z4, AArch64::Z5, AArch64::Z6, AArch64::Z7, AArch64::Z8, AArch64::Z9, AArch64::Z10, AArch64::Z11, AArch64::Z12, AArch64::Z13, AArch64::Z14, AArch64::Z15, 
  };

  // ZPR_4b Bit set.
  const uint8_t ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // ZPR_3b Register Class...
  const MCPhysReg ZPR_3b[] = {
    AArch64::Z0, AArch64::Z1, AArch64::Z2, AArch64::Z3, AArch64::Z4, AArch64::Z5, AArch64::Z6, AArch64::Z7, 
  };

  // ZPR_3b Bit set.
  const uint8_t ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 
  };

  // DDD Register Class...
  const MCPhysReg DDD[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D14_D15_D16, AArch64::D15_D16_D17, AArch64::D16_D17_D18, AArch64::D17_D18_D19, AArch64::D18_D19_D20, AArch64::D19_D20_D21, AArch64::D20_D21_D22, AArch64::D21_D22_D23, AArch64::D22_D23_D24, AArch64::D23_D24_D25, AArch64::D24_D25_D26, AArch64::D25_D26_D27, AArch64::D26_D27_D28, AArch64::D27_D28_D29, AArch64::D28_D29_D30, AArch64::D29_D30_D31, AArch64::D30_D31_D0, AArch64::D31_D0_D1, 
  };

  // DDD Bit set.
  const uint8_t DDDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // DDD_with_dsub0_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub0_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D14_D15_D16, AArch64::D15_D16_D17, 
  };

  // DDD_with_dsub0_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // DDD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D14_D15_D16, AArch64::D31_D0_D1, 
  };

  // DDD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // DDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D30_D31_D0, AArch64::D31_D0_D1, 
  };

  // DDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D14_D15_D16, 
  };

  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, AArch64::D31_D0_D1, 
  };

  // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2, AArch64::D1_D2_D3, AArch64::D2_D3_D4, AArch64::D3_D4_D5, AArch64::D4_D5_D6, AArch64::D5_D6_D7, AArch64::D6_D7_D8, AArch64::D7_D8_D9, AArch64::D8_D9_D10, AArch64::D9_D10_D11, AArch64::D10_D11_D12, AArch64::D11_D12_D13, AArch64::D12_D13_D14, AArch64::D13_D14_D15, 
  };

  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // DDDD Register Class...
  const MCPhysReg DDDD[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D14_D15_D16_D17, AArch64::D15_D16_D17_D18, AArch64::D16_D17_D18_D19, AArch64::D17_D18_D19_D20, AArch64::D18_D19_D20_D21, AArch64::D19_D20_D21_D22, AArch64::D20_D21_D22_D23, AArch64::D21_D22_D23_D24, AArch64::D22_D23_D24_D25, AArch64::D23_D24_D25_D26, AArch64::D24_D25_D26_D27, AArch64::D25_D26_D27_D28, AArch64::D26_D27_D28_D29, AArch64::D27_D28_D29_D30, AArch64::D28_D29_D30_D31, AArch64::D29_D30_D31_D0, AArch64::D30_D31_D0_D1, AArch64::D31_D0_D1_D2, 
  };

  // DDDD Bit set.
  const uint8_t DDDDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // DDDD_with_dsub0_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub0_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D14_D15_D16_D17, AArch64::D15_D16_D17_D18, 
  };

  // DDDD_with_dsub0_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // DDDD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D14_D15_D16_D17, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // DDDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D30_D31_D0_D1, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // DDDD_with_dsub3_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D29_D30_D31_D0, AArch64::D30_D31_D0_D1, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub3_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x38, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D14_D15_D16_D17, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D30_D31_D0_D1, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x30, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D13_D14_D15_D16, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, AArch64::D31_D0_D1_D2, 
  };

  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x20, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64::D0_D1_D2_D3, AArch64::D1_D2_D3_D4, AArch64::D2_D3_D4_D5, AArch64::D3_D4_D5_D6, AArch64::D4_D5_D6_D7, AArch64::D5_D6_D7_D8, AArch64::D6_D7_D8_D9, AArch64::D7_D8_D9_D10, AArch64::D8_D9_D10_D11, AArch64::D9_D10_D11_D12, AArch64::D10_D11_D12_D13, AArch64::D11_D12_D13_D14, AArch64::D12_D13_D14_D15, 
  };

  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 
  };

  // QQ Register Class...
  const MCPhysReg QQ[] = {
    AArch64::Q0_Q1, AArch64::Q1_Q2, AArch64::Q2_Q3, AArch64::Q3_Q4, AArch64::Q4_Q5, AArch64::Q5_Q6, AArch64::Q6_Q7, AArch64::Q7_Q8, AArch64::Q8_Q9, AArch64::Q9_Q10, AArch64::Q10_Q11, AArch64::Q11_Q12, AArch64::Q12_Q13, AArch64::Q13_Q14, AArch64::Q14_Q15, AArch64::Q15_Q16, AArch64::Q16_Q17, AArch64::Q17_Q18, AArch64::Q18_Q19, AArch64::Q19_Q20, AArch64::Q20_Q21, AArch64::Q21_Q22, AArch64::Q22_Q23, AArch64::Q23_Q24, AArch64::Q24_Q25, AArch64::Q25_Q26, AArch64::Q26_Q27, AArch64::Q27_Q28, AArch64::Q28_Q29, AArch64::Q29_Q30, AArch64::Q30_Q31, AArch64::Q31_Q0, 
  };

  // QQ Bit set.
  const uint8_t QQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // ZPR2 Register Class...
  const MCPhysReg ZPR2[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z7_Z8, AArch64::Z8_Z9, AArch64::Z9_Z10, AArch64::Z10_Z11, AArch64::Z11_Z12, AArch64::Z12_Z13, AArch64::Z13_Z14, AArch64::Z14_Z15, AArch64::Z15_Z16, AArch64::Z16_Z17, AArch64::Z17_Z18, AArch64::Z18_Z19, AArch64::Z19_Z20, AArch64::Z20_Z21, AArch64::Z21_Z22, AArch64::Z22_Z23, AArch64::Z23_Z24, AArch64::Z24_Z25, AArch64::Z25_Z26, AArch64::Z26_Z27, AArch64::Z27_Z28, AArch64::Z28_Z29, AArch64::Z29_Z30, AArch64::Z30_Z31, AArch64::Z31_Z0, 
  };

  // ZPR2 Bit set.
  const uint8_t ZPR2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // QQ_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg QQ_with_dsub_in_FPR64_lo[] = {
    AArch64::Q0_Q1, AArch64::Q1_Q2, AArch64::Q2_Q3, AArch64::Q3_Q4, AArch64::Q4_Q5, AArch64::Q5_Q6, AArch64::Q6_Q7, AArch64::Q7_Q8, AArch64::Q8_Q9, AArch64::Q9_Q10, AArch64::Q10_Q11, AArch64::Q11_Q12, AArch64::Q12_Q13, AArch64::Q13_Q14, AArch64::Q14_Q15, AArch64::Q15_Q16, 
  };

  // QQ_with_dsub_in_FPR64_lo Bit set.
  const uint8_t QQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // QQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1, AArch64::Q1_Q2, AArch64::Q2_Q3, AArch64::Q3_Q4, AArch64::Q4_Q5, AArch64::Q5_Q6, AArch64::Q6_Q7, AArch64::Q7_Q8, AArch64::Q8_Q9, AArch64::Q9_Q10, AArch64::Q10_Q11, AArch64::Q11_Q12, AArch64::Q12_Q13, AArch64::Q13_Q14, AArch64::Q14_Q15, AArch64::Q31_Q0, 
  };

  // QQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // ZPR2_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg ZPR2_with_dsub_in_FPR64_lo[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z7_Z8, AArch64::Z8_Z9, AArch64::Z9_Z10, AArch64::Z10_Z11, AArch64::Z11_Z12, AArch64::Z12_Z13, AArch64::Z13_Z14, AArch64::Z14_Z15, AArch64::Z15_Z16, 
  };

  // ZPR2_with_dsub_in_FPR64_lo Bit set.
  const uint8_t ZPR2_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // ZPR2_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR2_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z7_Z8, AArch64::Z8_Z9, AArch64::Z9_Z10, AArch64::Z10_Z11, AArch64::Z11_Z12, AArch64::Z12_Z13, AArch64::Z13_Z14, AArch64::Z14_Z15, AArch64::Z31_Z0, 
  };

  // ZPR2_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR2_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1, AArch64::Q1_Q2, AArch64::Q2_Q3, AArch64::Q3_Q4, AArch64::Q4_Q5, AArch64::Q5_Q6, AArch64::Q6_Q7, AArch64::Q7_Q8, AArch64::Q8_Q9, AArch64::Q9_Q10, AArch64::Q10_Q11, AArch64::Q11_Q12, AArch64::Q12_Q13, AArch64::Q13_Q14, AArch64::Q14_Q15, 
  };

  // QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z7_Z8, AArch64::Z8_Z9, AArch64::Z9_Z10, AArch64::Z10_Z11, AArch64::Z11_Z12, AArch64::Z12_Z13, AArch64::Z13_Z14, AArch64::Z14_Z15, 
  };

  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // ZPR2_with_zsub0_in_ZPR_3b Register Class...
  const MCPhysReg ZPR2_with_zsub0_in_ZPR_3b[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z7_Z8, 
  };

  // ZPR2_with_zsub0_in_ZPR_3b Bit set.
  const uint8_t ZPR2_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 
  };

  // ZPR2_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR2_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, AArch64::Z31_Z0, 
  };

  // ZPR2_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR2_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x20, 
  };

  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1, AArch64::Z1_Z2, AArch64::Z2_Z3, AArch64::Z3_Z4, AArch64::Z4_Z5, AArch64::Z5_Z6, AArch64::Z6_Z7, 
  };

  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 
  };

  // QQQ Register Class...
  const MCPhysReg QQQ[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q14_Q15_Q16, AArch64::Q15_Q16_Q17, AArch64::Q16_Q17_Q18, AArch64::Q17_Q18_Q19, AArch64::Q18_Q19_Q20, AArch64::Q19_Q20_Q21, AArch64::Q20_Q21_Q22, AArch64::Q21_Q22_Q23, AArch64::Q22_Q23_Q24, AArch64::Q23_Q24_Q25, AArch64::Q24_Q25_Q26, AArch64::Q25_Q26_Q27, AArch64::Q26_Q27_Q28, AArch64::Q27_Q28_Q29, AArch64::Q28_Q29_Q30, AArch64::Q29_Q30_Q31, AArch64::Q30_Q31_Q0, AArch64::Q31_Q0_Q1, 
  };

  // QQQ Bit set.
  const uint8_t QQQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // ZPR3 Register Class...
  const MCPhysReg ZPR3[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z14_Z15_Z16, AArch64::Z15_Z16_Z17, AArch64::Z16_Z17_Z18, AArch64::Z17_Z18_Z19, AArch64::Z18_Z19_Z20, AArch64::Z19_Z20_Z21, AArch64::Z20_Z21_Z22, AArch64::Z21_Z22_Z23, AArch64::Z22_Z23_Z24, AArch64::Z23_Z24_Z25, AArch64::Z24_Z25_Z26, AArch64::Z25_Z26_Z27, AArch64::Z26_Z27_Z28, AArch64::Z27_Z28_Z29, AArch64::Z28_Z29_Z30, AArch64::Z29_Z30_Z31, AArch64::Z30_Z31_Z0, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3 Bit set.
  const uint8_t ZPR3Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // QQQ_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg QQQ_with_dsub_in_FPR64_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q14_Q15_Q16, AArch64::Q15_Q16_Q17, 
  };

  // QQQ_with_dsub_in_FPR64_lo Bit set.
  const uint8_t QQQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // QQQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q14_Q15_Q16, AArch64::Q31_Q0_Q1, 
  };

  // QQQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // QQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q30_Q31_Q0, AArch64::Q31_Q0_Q1, 
  };

  // QQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // ZPR3_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg ZPR3_with_dsub_in_FPR64_lo[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z14_Z15_Z16, AArch64::Z15_Z16_Z17, 
  };

  // ZPR3_with_dsub_in_FPR64_lo Bit set.
  const uint8_t ZPR3_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // ZPR3_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR3_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z14_Z15_Z16, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR3_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // ZPR3_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z30_Z31_Z0, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q14_Q15_Q16, 
  };

  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, AArch64::Q31_Q0_Q1, 
  };

  // QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z14_Z15_Z16, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2, AArch64::Q1_Q2_Q3, AArch64::Q2_Q3_Q4, AArch64::Q3_Q4_Q5, AArch64::Q4_Q5_Q6, AArch64::Q5_Q6_Q7, AArch64::Q6_Q7_Q8, AArch64::Q7_Q8_Q9, AArch64::Q8_Q9_Q10, AArch64::Q9_Q10_Q11, AArch64::Q10_Q11_Q12, AArch64::Q11_Q12_Q13, AArch64::Q12_Q13_Q14, AArch64::Q13_Q14_Q15, 
  };

  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, AArch64::Z8_Z9_Z10, AArch64::Z9_Z10_Z11, AArch64::Z10_Z11_Z12, AArch64::Z11_Z12_Z13, AArch64::Z12_Z13_Z14, AArch64::Z13_Z14_Z15, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // ZPR3_with_zsub0_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_zsub0_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z7_Z8_Z9, 
  };

  // ZPR3_with_zsub0_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 
  };

  // ZPR3_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x20, 
  };

  // ZPR3_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z30_Z31_Z0, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x30, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z6_Z7_Z8, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 
  };

  // ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, AArch64::Z31_Z0_Z1, 
  };

  // ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x20, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2, AArch64::Z1_Z2_Z3, AArch64::Z2_Z3_Z4, AArch64::Z3_Z4_Z5, AArch64::Z4_Z5_Z6, AArch64::Z5_Z6_Z7, 
  };

  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 
  };

  // QQQQ Register Class...
  const MCPhysReg QQQQ[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q14_Q15_Q16_Q17, AArch64::Q15_Q16_Q17_Q18, AArch64::Q16_Q17_Q18_Q19, AArch64::Q17_Q18_Q19_Q20, AArch64::Q18_Q19_Q20_Q21, AArch64::Q19_Q20_Q21_Q22, AArch64::Q20_Q21_Q22_Q23, AArch64::Q21_Q22_Q23_Q24, AArch64::Q22_Q23_Q24_Q25, AArch64::Q23_Q24_Q25_Q26, AArch64::Q24_Q25_Q26_Q27, AArch64::Q25_Q26_Q27_Q28, AArch64::Q26_Q27_Q28_Q29, AArch64::Q27_Q28_Q29_Q30, AArch64::Q28_Q29_Q30_Q31, AArch64::Q29_Q30_Q31_Q0, AArch64::Q30_Q31_Q0_Q1, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ Bit set.
  const uint8_t QQQQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // ZPR4 Register Class...
  const MCPhysReg ZPR4[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z14_Z15_Z16_Z17, AArch64::Z15_Z16_Z17_Z18, AArch64::Z16_Z17_Z18_Z19, AArch64::Z17_Z18_Z19_Z20, AArch64::Z18_Z19_Z20_Z21, AArch64::Z19_Z20_Z21_Z22, AArch64::Z20_Z21_Z22_Z23, AArch64::Z21_Z22_Z23_Z24, AArch64::Z22_Z23_Z24_Z25, AArch64::Z23_Z24_Z25_Z26, AArch64::Z24_Z25_Z26_Z27, AArch64::Z25_Z26_Z27_Z28, AArch64::Z26_Z27_Z28_Z29, AArch64::Z27_Z28_Z29_Z30, AArch64::Z28_Z29_Z30_Z31, AArch64::Z29_Z30_Z31_Z0, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4 Bit set.
  const uint8_t ZPR4Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // QQQQ_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg QQQQ_with_dsub_in_FPR64_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q14_Q15_Q16_Q17, AArch64::Q15_Q16_Q17_Q18, 
  };

  // QQQQ_with_dsub_in_FPR64_lo Bit set.
  const uint8_t QQQQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q14_Q15_Q16_Q17, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // QQQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q30_Q31_Q0_Q1, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // QQQQ_with_qsub3_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q29_Q30_Q31_Q0, AArch64::Q30_Q31_Q0_Q1, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub3_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x38, 
  };

  // ZPR4_with_dsub_in_FPR64_lo Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z14_Z15_Z16_Z17, AArch64::Z15_Z16_Z17_Z18, 
  };

  // ZPR4_with_dsub_in_FPR64_lo Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z14_Z15_Z16_Z17, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0x00, 0x20, 
  };

  // ZPR4_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x30, 
  };

  // ZPR4_with_zsub3_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z29_Z30_Z31_Z0, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub3_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x38, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q14_Q15_Q16_Q17, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q30_Q31_Q0_Q1, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x30, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z14_Z15_Z16_Z17, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 0x00, 0x20, 
  };

  // ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x30, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q13_Q14_Q15_Q16, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, AArch64::Q31_Q0_Q1_Q2, 
  };

  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x20, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z13_Z14_Z15_Z16, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x0f, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 0x00, 0x20, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64::Q0_Q1_Q2_Q3, AArch64::Q1_Q2_Q3_Q4, AArch64::Q2_Q3_Q4_Q5, AArch64::Q3_Q4_Q5_Q6, AArch64::Q4_Q5_Q6_Q7, AArch64::Q5_Q6_Q7_Q8, AArch64::Q6_Q7_Q8_Q9, AArch64::Q7_Q8_Q9_Q10, AArch64::Q8_Q9_Q10_Q11, AArch64::Q9_Q10_Q11_Q12, AArch64::Q10_Q11_Q12_Q13, AArch64::Q11_Q12_Q13_Q14, AArch64::Q12_Q13_Q14_Q15, 
  };

  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, AArch64::Z8_Z9_Z10_Z11, AArch64::Z9_Z10_Z11_Z12, AArch64::Z10_Z11_Z12_Z13, AArch64::Z11_Z12_Z13_Z14, AArch64::Z12_Z13_Z14_Z15, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x07, 
  };

  // ZPR4_with_zsub0_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub0_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z7_Z8_Z9_Z10, 
  };

  // ZPR4_with_zsub0_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x00, 0x00, 0x20, 
  };

  // ZPR4_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x30, 
  };

  // ZPR4_with_zsub3_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z29_Z30_Z31_Z0, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub3_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x38, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z6_Z7_Z8_Z9, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x1f, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0x00, 0x20, 
  };

  // ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z30_Z31_Z0_Z1, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x30, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z5_Z6_Z7_Z8, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, AArch64::Z31_Z0_Z1_Z2, 
  };

  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x20, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64::Z0_Z1_Z2_Z3, AArch64::Z1_Z2_Z3_Z4, AArch64::Z2_Z3_Z4_Z5, AArch64::Z3_Z4_Z5_Z6, AArch64::Z4_Z5_Z6_Z7, 
  };

  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char AArch64RegClassStrings[] = {
  /* 0 */ "FPR32\0"
  /* 6 */ "GPR32\0"
  /* 12 */ "ZPR2\0"
  /* 17 */ "ZPR3\0"
  /* 22 */ "FPR64\0"
  /* 28 */ "XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64\0"
  /* 80 */ "XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64\0"
  /* 132 */ "XSeqPairsClass_with_sube64_in_tcGPR64\0"
  /* 170 */ "XSeqPairsClass_with_subo64_in_tcGPR64\0"
  /* 208 */ "XSeqPairsClass_with_sube64_in_rtcGPR64\0"
  /* 247 */ "ZPR4\0"
  /* 252 */ "FPR16\0"
  /* 258 */ "FPR128\0"
  /* 265 */ "FPR8\0"
  /* 270 */ "DDDD\0"
  /* 275 */ "QQQQ\0"
  /* 280 */ "CCR\0"
  /* 284 */ "PPR\0"
  /* 288 */ "ZPR\0"
  /* 292 */ "PPR_3b\0"
  /* 299 */ "ZPR2_with_zsub0_in_ZPR_3b\0"
  /* 325 */ "ZPR3_with_zsub0_in_ZPR_3b\0"
  /* 351 */ "ZPR4_with_zsub0_in_ZPR_3b\0"
  /* 377 */ "ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b\0"
  /* 434 */ "ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b\0"
  /* 491 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b\0"
  /* 548 */ "ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b\0"
  /* 604 */ "ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b\0"
  /* 661 */ "ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b\0"
  /* 717 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b\0"
  /* 774 */ "ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b\0"
  /* 830 */ "ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b\0"
  /* 886 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b\0"
  /* 943 */ "ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b\0"
  /* 1000 */ "ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b\0"
  /* 1057 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b\0"
  /* 1114 */ "ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b\0"
  /* 1170 */ "ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b\0"
  /* 1227 */ "ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b\0"
  /* 1283 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b\0"
  /* 1340 */ "ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b\0"
  /* 1396 */ "ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b\0"
  /* 1452 */ "ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b\0"
  /* 1509 */ "XSeqPairsClass_with_sub_32_in_GPR32arg\0"
  /* 1548 */ "WSeqPairsClass_with_sube32_in_GPR32arg\0"
  /* 1587 */ "GPR64arg\0"
  /* 1596 */ "GPR32all\0"
  /* 1605 */ "GPR64all\0"
  /* 1614 */ "WSeqPairsClass_with_subo32_in_GPR32common\0"
  /* 1656 */ "XSeqPairsClass_with_subo64_in_GPR64common\0"
  /* 1698 */ "DDDD_with_dsub0_in_FPR64_lo\0"
  /* 1726 */ "DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo\0"
  /* 1786 */ "DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo\0"
  /* 1844 */ "DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo\0"
  /* 1900 */ "DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo\0"
  /* 1960 */ "DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo\0"
  /* 2020 */ "DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo\0"
  /* 2078 */ "DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo\0"
  /* 2136 */ "DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo\0"
  /* 2196 */ "DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo\0"
  /* 2256 */ "DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo\0"
  /* 2316 */ "ZPR2_with_dsub_in_FPR64_lo\0"
  /* 2343 */ "ZPR3_with_dsub_in_FPR64_lo\0"
  /* 2370 */ "ZPR4_with_dsub_in_FPR64_lo\0"
  /* 2397 */ "QQQQ_with_dsub_in_FPR64_lo\0"
  /* 2424 */ "FPR32_with_hsub_in_FPR16_lo\0"
  /* 2452 */ "QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo\0"
  /* 2512 */ "QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo\0"
  /* 2570 */ "QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo\0"
  /* 2626 */ "QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo\0"
  /* 2686 */ "QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo\0"
  /* 2748 */ "QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo\0"
  /* 2806 */ "QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo\0"
  /* 2866 */ "QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo\0"
  /* 2926 */ "QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo\0"
  /* 2988 */ "QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo\0"
  /* 3050 */ "GPR64common_and_GPR64noip\0"
  /* 3076 */ "XSeqPairsClass_with_sube64_in_GPR64noip\0"
  /* 3116 */ "XSeqPairsClass_with_subo64_in_GPR64noip\0"
  /* 3156 */ "GPR32sp\0"
  /* 3164 */ "GPR64sp\0"
  /* 3172 */ "WSeqPairsClass\0"
  /* 3187 */ "XSeqPairsClass\0"
  /* 3202 */ "GPR32sponly\0"
  /* 3214 */ "GPR64sponly\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass AArch64MCRegisterClasses[] = {
  { FPR8, FPR8Bits, 265, 32, sizeof(FPR8Bits), AArch64::FPR8RegClassID, 1, true },
  { FPR16, FPR16Bits, 252, 32, sizeof(FPR16Bits), AArch64::FPR16RegClassID, 1, true },
  { FPR16_lo, FPR16_loBits, 2443, 16, sizeof(FPR16_loBits), AArch64::FPR16_loRegClassID, 1, true },
  { PPR, PPRBits, 284, 16, sizeof(PPRBits), AArch64::PPRRegClassID, 1, true },
  { PPR_3b, PPR_3bBits, 292, 8, sizeof(PPR_3bBits), AArch64::PPR_3bRegClassID, 1, true },
  { GPR32all, GPR32allBits, 1596, 33, sizeof(GPR32allBits), AArch64::GPR32allRegClassID, 1, true },
  { FPR32, FPR32Bits, 0, 32, sizeof(FPR32Bits), AArch64::FPR32RegClassID, 1, true },
  { GPR32, GPR32Bits, 6, 32, sizeof(GPR32Bits), AArch64::GPR32RegClassID, 1, true },
  { GPR32sp, GPR32spBits, 3156, 32, sizeof(GPR32spBits), AArch64::GPR32spRegClassID, 1, true },
  { GPR32common, GPR32commonBits, 1644, 31, sizeof(GPR32commonBits), AArch64::GPR32commonRegClassID, 1, true },
  { FPR32_with_hsub_in_FPR16_lo, FPR32_with_hsub_in_FPR16_loBits, 2424, 16, sizeof(FPR32_with_hsub_in_FPR16_loBits), AArch64::FPR32_with_hsub_in_FPR16_loRegClassID, 1, true },
  { GPR32arg, GPR32argBits, 1539, 8, sizeof(GPR32argBits), AArch64::GPR32argRegClassID, 1, true },
  { CCR, CCRBits, 280, 1, sizeof(CCRBits), AArch64::CCRRegClassID, -1, false },
  { GPR32sponly, GPR32sponlyBits, 3202, 1, sizeof(GPR32sponlyBits), AArch64::GPR32sponlyRegClassID, 1, true },
  { WSeqPairsClass, WSeqPairsClassBits, 3172, 16, sizeof(WSeqPairsClassBits), AArch64::WSeqPairsClassRegClassID, 1, true },
  { WSeqPairsClass_with_subo32_in_GPR32common, WSeqPairsClass_with_subo32_in_GPR32commonBits, 1614, 15, sizeof(WSeqPairsClass_with_subo32_in_GPR32commonBits), AArch64::WSeqPairsClass_with_subo32_in_GPR32commonRegClassID, 1, true },
  { WSeqPairsClass_with_sube32_in_GPR32arg, WSeqPairsClass_with_sube32_in_GPR32argBits, 1548, 4, sizeof(WSeqPairsClass_with_sube32_in_GPR32argBits), AArch64::WSeqPairsClass_with_sube32_in_GPR32argRegClassID, 1, true },
  { GPR64all, GPR64allBits, 1605, 33, sizeof(GPR64allBits), AArch64::GPR64allRegClassID, 1, true },
  { FPR64, FPR64Bits, 22, 32, sizeof(FPR64Bits), AArch64::FPR64RegClassID, 1, true },
  { GPR64, GPR64Bits, 74, 32, sizeof(GPR64Bits), AArch64::GPR64RegClassID, 1, true },
  { GPR64sp, GPR64spBits, 3164, 32, sizeof(GPR64spBits), AArch64::GPR64spRegClassID, 1, true },
  { GPR64common, GPR64commonBits, 1686, 31, sizeof(GPR64commonBits), AArch64::GPR64commonRegClassID, 1, true },
  { GPR64noip, GPR64noipBits, 3066, 29, sizeof(GPR64noipBits), AArch64::GPR64noipRegClassID, 1, true },
  { GPR64common_and_GPR64noip, GPR64common_and_GPR64noipBits, 3050, 28, sizeof(GPR64common_and_GPR64noipBits), AArch64::GPR64common_and_GPR64noipRegClassID, 1, true },
  { tcGPR64, tcGPR64Bits, 72, 19, sizeof(tcGPR64Bits), AArch64::tcGPR64RegClassID, 1, true },
  { GPR64noip_and_tcGPR64, GPR64noip_and_tcGPR64Bits, 58, 17, sizeof(GPR64noip_and_tcGPR64Bits), AArch64::GPR64noip_and_tcGPR64RegClassID, 1, true },
  { FPR64_lo, FPR64_loBits, 1717, 16, sizeof(FPR64_loBits), AArch64::FPR64_loRegClassID, 1, true },
  { GPR64arg, GPR64argBits, 1587, 8, sizeof(GPR64argBits), AArch64::GPR64argRegClassID, 1, true },
  { rtcGPR64, rtcGPR64Bits, 238, 2, sizeof(rtcGPR64Bits), AArch64::rtcGPR64RegClassID, 1, true },
  { GPR64sponly, GPR64sponlyBits, 3214, 1, sizeof(GPR64sponlyBits), AArch64::GPR64sponlyRegClassID, 1, true },
  { DD, DDBits, 272, 32, sizeof(DDBits), AArch64::DDRegClassID, 1, true },
  { DD_with_dsub0_in_FPR64_lo, DD_with_dsub0_in_FPR64_loBits, 1700, 16, sizeof(DD_with_dsub0_in_FPR64_loBits), AArch64::DD_with_dsub0_in_FPR64_loRegClassID, 1, true },
  { DD_with_dsub1_in_FPR64_lo, DD_with_dsub1_in_FPR64_loBits, 1760, 16, sizeof(DD_with_dsub1_in_FPR64_loBits), AArch64::DD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { XSeqPairsClass, XSeqPairsClassBits, 3187, 16, sizeof(XSeqPairsClassBits), AArch64::XSeqPairsClassRegClassID, 1, true },
  { DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo, DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits, 1844, 15, sizeof(DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits), AArch64::DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { XSeqPairsClass_with_subo64_in_GPR64common, XSeqPairsClass_with_subo64_in_GPR64commonBits, 1656, 15, sizeof(XSeqPairsClass_with_subo64_in_GPR64commonBits), AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClassID, 1, true },
  { XSeqPairsClass_with_subo64_in_GPR64noip, XSeqPairsClass_with_subo64_in_GPR64noipBits, 3116, 15, sizeof(XSeqPairsClass_with_subo64_in_GPR64noipBits), AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClassID, 1, true },
  { XSeqPairsClass_with_sube64_in_GPR64noip, XSeqPairsClass_with_sube64_in_GPR64noipBits, 3076, 14, sizeof(XSeqPairsClass_with_sube64_in_GPR64noipBits), AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClassID, 1, true },
  { XSeqPairsClass_with_sube64_in_tcGPR64, XSeqPairsClass_with_sube64_in_tcGPR64Bits, 132, 10, sizeof(XSeqPairsClass_with_sube64_in_tcGPR64Bits), AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClassID, 1, true },
  { XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64, XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64Bits, 28, 9, sizeof(XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64Bits), AArch64::XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClassID, 1, true },
  { XSeqPairsClass_with_subo64_in_tcGPR64, XSeqPairsClass_with_subo64_in_tcGPR64Bits, 170, 9, sizeof(XSeqPairsClass_with_subo64_in_tcGPR64Bits), AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClassID, 1, true },
  { XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, 80, 8, sizeof(XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64Bits), AArch64::XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID, 1, true },
  { XSeqPairsClass_with_sub_32_in_GPR32arg, XSeqPairsClass_with_sub_32_in_GPR32argBits, 1509, 4, sizeof(XSeqPairsClass_with_sub_32_in_GPR32argBits), AArch64::XSeqPairsClass_with_sub_32_in_GPR32argRegClassID, 1, true },
  { XSeqPairsClass_with_sube64_in_rtcGPR64, XSeqPairsClass_with_sube64_in_rtcGPR64Bits, 208, 1, sizeof(XSeqPairsClass_with_sube64_in_rtcGPR64Bits), AArch64::XSeqPairsClass_with_sube64_in_rtcGPR64RegClassID, 1, true },
  { FPR128, FPR128Bits, 258, 32, sizeof(FPR128Bits), AArch64::FPR128RegClassID, 1, true },
  { ZPR, ZPRBits, 288, 32, sizeof(ZPRBits), AArch64::ZPRRegClassID, 1, true },
  { FPR128_lo, FPR128_loBits, 2502, 16, sizeof(FPR128_loBits), AArch64::FPR128_loRegClassID, 1, true },
  { ZPR_4b, ZPR_4bBits, 993, 16, sizeof(ZPR_4bBits), AArch64::ZPR_4bRegClassID, 1, true },
  { ZPR_3b, ZPR_3bBits, 318, 8, sizeof(ZPR_3bBits), AArch64::ZPR_3bRegClassID, 1, true },
  { DDD, DDDBits, 271, 32, sizeof(DDDBits), AArch64::DDDRegClassID, 1, true },
  { DDD_with_dsub0_in_FPR64_lo, DDD_with_dsub0_in_FPR64_loBits, 1699, 16, sizeof(DDD_with_dsub0_in_FPR64_loBits), AArch64::DDD_with_dsub0_in_FPR64_loRegClassID, 1, true },
  { DDD_with_dsub1_in_FPR64_lo, DDD_with_dsub1_in_FPR64_loBits, 1759, 16, sizeof(DDD_with_dsub1_in_FPR64_loBits), AArch64::DDD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub2_in_FPR64_loBits, 1933, 16, sizeof(DDD_with_dsub2_in_FPR64_loBits), AArch64::DDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo, DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits, 1786, 15, sizeof(DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits), AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits, 2078, 15, sizeof(DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits), AArch64::DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits, 2020, 14, sizeof(DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits), AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDDD, DDDDBits, 270, 32, sizeof(DDDDBits), AArch64::DDDDRegClassID, 1, true },
  { DDDD_with_dsub0_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_loBits, 1698, 16, sizeof(DDDD_with_dsub0_in_FPR64_loBits), AArch64::DDDD_with_dsub0_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub1_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_loBits, 1758, 16, sizeof(DDDD_with_dsub1_in_FPR64_loBits), AArch64::DDDD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub2_in_FPR64_loBits, 1932, 16, sizeof(DDDD_with_dsub2_in_FPR64_loBits), AArch64::DDDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub3_in_FPR64_loBits, 2168, 16, sizeof(DDDD_with_dsub3_in_FPR64_loBits), AArch64::DDDD_with_dsub3_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits, 1726, 15, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits), AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits, 1960, 15, sizeof(DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits), AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, 2256, 15, sizeof(DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits), AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits, 1900, 14, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits), AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, 2196, 14, sizeof(DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits), AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID, 1, true },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, 2136, 13, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits), AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID, 1, true },
  { QQ, QQBits, 277, 32, sizeof(QQBits), AArch64::QQRegClassID, 1, true },
  { ZPR2, ZPR2Bits, 12, 32, sizeof(ZPR2Bits), AArch64::ZPR2RegClassID, 1, true },
  { QQ_with_dsub_in_FPR64_lo, QQ_with_dsub_in_FPR64_loBits, 2399, 16, sizeof(QQ_with_dsub_in_FPR64_loBits), AArch64::QQ_with_dsub_in_FPR64_loRegClassID, 1, true },
  { QQ_with_qsub1_in_FPR128_lo, QQ_with_qsub1_in_FPR128_loBits, 2485, 16, sizeof(QQ_with_qsub1_in_FPR128_loBits), AArch64::QQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { ZPR2_with_dsub_in_FPR64_lo, ZPR2_with_dsub_in_FPR64_loBits, 2316, 16, sizeof(ZPR2_with_dsub_in_FPR64_loBits), AArch64::ZPR2_with_dsub_in_FPR64_loRegClassID, 1, true },
  { ZPR2_with_zsub1_in_ZPR_4b, ZPR2_with_zsub1_in_ZPR_4bBits, 974, 16, sizeof(ZPR2_with_zsub1_in_ZPR_4bBits), AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo, QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits, 2570, 15, sizeof(QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits), AArch64::QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b, ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits, 943, 15, sizeof(ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits), AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { ZPR2_with_zsub0_in_ZPR_3b, ZPR2_with_zsub0_in_ZPR_3bBits, 299, 8, sizeof(ZPR2_with_zsub0_in_ZPR_3bBits), AArch64::ZPR2_with_zsub0_in_ZPR_3bRegClassID, 1, true },
  { ZPR2_with_zsub1_in_ZPR_3b, ZPR2_with_zsub1_in_ZPR_3bBits, 408, 8, sizeof(ZPR2_with_zsub1_in_ZPR_3bBits), AArch64::ZPR2_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b, ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits, 377, 7, sizeof(ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits), AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { QQQ, QQQBits, 276, 32, sizeof(QQQBits), AArch64::QQQRegClassID, 1, true },
  { ZPR3, ZPR3Bits, 17, 32, sizeof(ZPR3Bits), AArch64::ZPR3RegClassID, 1, true },
  { QQQ_with_dsub_in_FPR64_lo, QQQ_with_dsub_in_FPR64_loBits, 2398, 16, sizeof(QQQ_with_dsub_in_FPR64_loBits), AArch64::QQQ_with_dsub_in_FPR64_loRegClassID, 1, true },
  { QQQ_with_qsub1_in_FPR128_lo, QQQ_with_qsub1_in_FPR128_loBits, 2484, 16, sizeof(QQQ_with_qsub1_in_FPR128_loBits), AArch64::QQQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { QQQ_with_qsub2_in_FPR128_lo, QQQ_with_qsub2_in_FPR128_loBits, 2658, 16, sizeof(QQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { ZPR3_with_dsub_in_FPR64_lo, ZPR3_with_dsub_in_FPR64_loBits, 2343, 16, sizeof(ZPR3_with_dsub_in_FPR64_loBits), AArch64::ZPR3_with_dsub_in_FPR64_loRegClassID, 1, true },
  { ZPR3_with_zsub1_in_ZPR_4b, ZPR3_with_zsub1_in_ZPR_4bBits, 1031, 16, sizeof(ZPR3_with_zsub1_in_ZPR_4bBits), AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_zsub2_in_ZPR_4bBits, 1144, 16, sizeof(ZPR3_with_zsub2_in_ZPR_4bBits), AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo, QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits, 2512, 15, sizeof(QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits), AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo, QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits, 2806, 15, sizeof(QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits, 1000, 15, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits), AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits, 1114, 15, sizeof(ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits), AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo, QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits, 2748, 14, sizeof(QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits, 1170, 14, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits), AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { ZPR3_with_zsub0_in_ZPR_3b, ZPR3_with_zsub0_in_ZPR_3bBits, 325, 8, sizeof(ZPR3_with_zsub0_in_ZPR_3bBits), AArch64::ZPR3_with_zsub0_in_ZPR_3bRegClassID, 1, true },
  { ZPR3_with_zsub1_in_ZPR_3b, ZPR3_with_zsub1_in_ZPR_3bBits, 465, 8, sizeof(ZPR3_with_zsub1_in_ZPR_3bBits), AArch64::ZPR3_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_zsub2_in_ZPR_3bBits, 578, 8, sizeof(ZPR3_with_zsub2_in_ZPR_3bBits), AArch64::ZPR3_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits, 434, 7, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits), AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits, 548, 7, sizeof(ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits), AArch64::ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits, 604, 6, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits), AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { QQQQ, QQQQBits, 275, 32, sizeof(QQQQBits), AArch64::QQQQRegClassID, 1, true },
  { ZPR4, ZPR4Bits, 247, 32, sizeof(ZPR4Bits), AArch64::ZPR4RegClassID, 1, true },
  { QQQQ_with_dsub_in_FPR64_lo, QQQQ_with_dsub_in_FPR64_loBits, 2397, 16, sizeof(QQQQ_with_dsub_in_FPR64_loBits), AArch64::QQQQ_with_dsub_in_FPR64_loRegClassID, 1, true },
  { QQQQ_with_qsub1_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_loBits, 2483, 16, sizeof(QQQQ_with_qsub1_in_FPR128_loBits), AArch64::QQQQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_qsub2_in_FPR128_loBits, 2657, 16, sizeof(QQQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub3_in_FPR128_loBits, 2897, 16, sizeof(QQQQ_with_qsub3_in_FPR128_loBits), AArch64::QQQQ_with_qsub3_in_FPR128_loRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo, ZPR4_with_dsub_in_FPR64_loBits, 2370, 16, sizeof(ZPR4_with_dsub_in_FPR64_loBits), AArch64::ZPR4_with_dsub_in_FPR64_loRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4bBits, 1088, 16, sizeof(ZPR4_with_zsub1_in_ZPR_4bBits), AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_zsub2_in_ZPR_4bBits, 1257, 16, sizeof(ZPR4_with_zsub2_in_ZPR_4bBits), AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub3_in_ZPR_4bBits, 1370, 16, sizeof(ZPR4_with_zsub3_in_ZPR_4bBits), AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClassID, 1, true },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits, 2452, 15, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits), AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClassID, 1, true },
  { QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits, 2686, 15, sizeof(QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, 2988, 15, sizeof(QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits), AArch64::QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits, 1057, 15, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits, 1227, 15, sizeof(ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits), AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits, 1396, 15, sizeof(ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits), AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID, 1, true },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits, 2626, 14, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits), AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID, 1, true },
  { QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, 2926, 14, sizeof(QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits), AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits, 1283, 14, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits, 1340, 14, sizeof(ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits), AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID, 1, true },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, 2866, 13, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits), AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits, 1452, 13, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID, 1, true },
  { ZPR4_with_zsub0_in_ZPR_3b, ZPR4_with_zsub0_in_ZPR_3bBits, 351, 8, sizeof(ZPR4_with_zsub0_in_ZPR_3bBits), AArch64::ZPR4_with_zsub0_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3bBits, 522, 8, sizeof(ZPR4_with_zsub1_in_ZPR_3bBits), AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_zsub2_in_ZPR_3bBits, 691, 8, sizeof(ZPR4_with_zsub2_in_ZPR_3bBits), AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub3_in_ZPR_3bBits, 804, 8, sizeof(ZPR4_with_zsub3_in_ZPR_3bBits), AArch64::ZPR4_with_zsub3_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits, 491, 7, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits, 661, 7, sizeof(ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits), AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits, 830, 7, sizeof(ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits), AArch64::ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits, 717, 6, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits, 774, 6, sizeof(ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits), AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID, 1, true },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits, 886, 5, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits), AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID, 1, true },
};

// AArch64 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AArch64DwarfFlavour0Dwarf2L[] = {
  { 0U, AArch64::W0 },
  { 1U, AArch64::W1 },
  { 2U, AArch64::W2 },
  { 3U, AArch64::W3 },
  { 4U, AArch64::W4 },
  { 5U, AArch64::W5 },
  { 6U, AArch64::W6 },
  { 7U, AArch64::W7 },
  { 8U, AArch64::W8 },
  { 9U, AArch64::W9 },
  { 10U, AArch64::W10 },
  { 11U, AArch64::W11 },
  { 12U, AArch64::W12 },
  { 13U, AArch64::W13 },
  { 14U, AArch64::W14 },
  { 15U, AArch64::W15 },
  { 16U, AArch64::W16 },
  { 17U, AArch64::W17 },
  { 18U, AArch64::W18 },
  { 19U, AArch64::W19 },
  { 20U, AArch64::W20 },
  { 21U, AArch64::W21 },
  { 22U, AArch64::W22 },
  { 23U, AArch64::W23 },
  { 24U, AArch64::W24 },
  { 25U, AArch64::W25 },
  { 26U, AArch64::W26 },
  { 27U, AArch64::W27 },
  { 28U, AArch64::W28 },
  { 29U, AArch64::W29 },
  { 30U, AArch64::W30 },
  { 31U, AArch64::WSP },
  { 46U, AArch64::VG },
  { 47U, AArch64::FFR },
  { 48U, AArch64::P0 },
  { 49U, AArch64::P1 },
  { 50U, AArch64::P2 },
  { 51U, AArch64::P3 },
  { 52U, AArch64::P4 },
  { 53U, AArch64::P5 },
  { 54U, AArch64::P6 },
  { 55U, AArch64::P7 },
  { 56U, AArch64::P8 },
  { 57U, AArch64::P9 },
  { 58U, AArch64::P10 },
  { 59U, AArch64::P11 },
  { 60U, AArch64::P12 },
  { 61U, AArch64::P13 },
  { 62U, AArch64::P14 },
  { 63U, AArch64::P15 },
  { 64U, AArch64::B0 },
  { 65U, AArch64::B1 },
  { 66U, AArch64::B2 },
  { 67U, AArch64::B3 },
  { 68U, AArch64::B4 },
  { 69U, AArch64::B5 },
  { 70U, AArch64::B6 },
  { 71U, AArch64::B7 },
  { 72U, AArch64::B8 },
  { 73U, AArch64::B9 },
  { 74U, AArch64::B10 },
  { 75U, AArch64::B11 },
  { 76U, AArch64::B12 },
  { 77U, AArch64::B13 },
  { 78U, AArch64::B14 },
  { 79U, AArch64::B15 },
  { 80U, AArch64::B16 },
  { 81U, AArch64::B17 },
  { 82U, AArch64::B18 },
  { 83U, AArch64::B19 },
  { 84U, AArch64::B20 },
  { 85U, AArch64::B21 },
  { 86U, AArch64::B22 },
  { 87U, AArch64::B23 },
  { 88U, AArch64::B24 },
  { 89U, AArch64::B25 },
  { 90U, AArch64::B26 },
  { 91U, AArch64::B27 },
  { 92U, AArch64::B28 },
  { 93U, AArch64::B29 },
  { 94U, AArch64::B30 },
  { 95U, AArch64::B31 },
  { 96U, AArch64::Z0 },
  { 97U, AArch64::Z1 },
  { 98U, AArch64::Z2 },
  { 99U, AArch64::Z3 },
  { 100U, AArch64::Z4 },
  { 101U, AArch64::Z5 },
  { 102U, AArch64::Z6 },
  { 103U, AArch64::Z7 },
  { 104U, AArch64::Z8 },
  { 105U, AArch64::Z9 },
  { 106U, AArch64::Z10 },
  { 107U, AArch64::Z11 },
  { 108U, AArch64::Z12 },
  { 109U, AArch64::Z13 },
  { 110U, AArch64::Z14 },
  { 111U, AArch64::Z15 },
  { 112U, AArch64::Z16 },
  { 113U, AArch64::Z17 },
  { 114U, AArch64::Z18 },
  { 115U, AArch64::Z19 },
  { 116U, AArch64::Z20 },
  { 117U, AArch64::Z21 },
  { 118U, AArch64::Z22 },
  { 119U, AArch64::Z23 },
  { 120U, AArch64::Z24 },
  { 121U, AArch64::Z25 },
  { 122U, AArch64::Z26 },
  { 123U, AArch64::Z27 },
  { 124U, AArch64::Z28 },
  { 125U, AArch64::Z29 },
  { 126U, AArch64::Z30 },
  { 127U, AArch64::Z31 },
};
extern const unsigned AArch64DwarfFlavour0Dwarf2LSize = array_lengthof(AArch64DwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64EHFlavour0Dwarf2L[] = {
  { 0U, AArch64::W0 },
  { 1U, AArch64::W1 },
  { 2U, AArch64::W2 },
  { 3U, AArch64::W3 },
  { 4U, AArch64::W4 },
  { 5U, AArch64::W5 },
  { 6U, AArch64::W6 },
  { 7U, AArch64::W7 },
  { 8U, AArch64::W8 },
  { 9U, AArch64::W9 },
  { 10U, AArch64::W10 },
  { 11U, AArch64::W11 },
  { 12U, AArch64::W12 },
  { 13U, AArch64::W13 },
  { 14U, AArch64::W14 },
  { 15U, AArch64::W15 },
  { 16U, AArch64::W16 },
  { 17U, AArch64::W17 },
  { 18U, AArch64::W18 },
  { 19U, AArch64::W19 },
  { 20U, AArch64::W20 },
  { 21U, AArch64::W21 },
  { 22U, AArch64::W22 },
  { 23U, AArch64::W23 },
  { 24U, AArch64::W24 },
  { 25U, AArch64::W25 },
  { 26U, AArch64::W26 },
  { 27U, AArch64::W27 },
  { 28U, AArch64::W28 },
  { 29U, AArch64::W29 },
  { 30U, AArch64::W30 },
  { 31U, AArch64::WSP },
  { 46U, AArch64::VG },
  { 47U, AArch64::FFR },
  { 48U, AArch64::P0 },
  { 49U, AArch64::P1 },
  { 50U, AArch64::P2 },
  { 51U, AArch64::P3 },
  { 52U, AArch64::P4 },
  { 53U, AArch64::P5 },
  { 54U, AArch64::P6 },
  { 55U, AArch64::P7 },
  { 56U, AArch64::P8 },
  { 57U, AArch64::P9 },
  { 58U, AArch64::P10 },
  { 59U, AArch64::P11 },
  { 60U, AArch64::P12 },
  { 61U, AArch64::P13 },
  { 62U, AArch64::P14 },
  { 63U, AArch64::P15 },
  { 64U, AArch64::B0 },
  { 65U, AArch64::B1 },
  { 66U, AArch64::B2 },
  { 67U, AArch64::B3 },
  { 68U, AArch64::B4 },
  { 69U, AArch64::B5 },
  { 70U, AArch64::B6 },
  { 71U, AArch64::B7 },
  { 72U, AArch64::B8 },
  { 73U, AArch64::B9 },
  { 74U, AArch64::B10 },
  { 75U, AArch64::B11 },
  { 76U, AArch64::B12 },
  { 77U, AArch64::B13 },
  { 78U, AArch64::B14 },
  { 79U, AArch64::B15 },
  { 80U, AArch64::B16 },
  { 81U, AArch64::B17 },
  { 82U, AArch64::B18 },
  { 83U, AArch64::B19 },
  { 84U, AArch64::B20 },
  { 85U, AArch64::B21 },
  { 86U, AArch64::B22 },
  { 87U, AArch64::B23 },
  { 88U, AArch64::B24 },
  { 89U, AArch64::B25 },
  { 90U, AArch64::B26 },
  { 91U, AArch64::B27 },
  { 92U, AArch64::B28 },
  { 93U, AArch64::B29 },
  { 94U, AArch64::B30 },
  { 95U, AArch64::B31 },
  { 96U, AArch64::Z0 },
  { 97U, AArch64::Z1 },
  { 98U, AArch64::Z2 },
  { 99U, AArch64::Z3 },
  { 100U, AArch64::Z4 },
  { 101U, AArch64::Z5 },
  { 102U, AArch64::Z6 },
  { 103U, AArch64::Z7 },
  { 104U, AArch64::Z8 },
  { 105U, AArch64::Z9 },
  { 106U, AArch64::Z10 },
  { 107U, AArch64::Z11 },
  { 108U, AArch64::Z12 },
  { 109U, AArch64::Z13 },
  { 110U, AArch64::Z14 },
  { 111U, AArch64::Z15 },
  { 112U, AArch64::Z16 },
  { 113U, AArch64::Z17 },
  { 114U, AArch64::Z18 },
  { 115U, AArch64::Z19 },
  { 116U, AArch64::Z20 },
  { 117U, AArch64::Z21 },
  { 118U, AArch64::Z22 },
  { 119U, AArch64::Z23 },
  { 120U, AArch64::Z24 },
  { 121U, AArch64::Z25 },
  { 122U, AArch64::Z26 },
  { 123U, AArch64::Z27 },
  { 124U, AArch64::Z28 },
  { 125U, AArch64::Z29 },
  { 126U, AArch64::Z30 },
  { 127U, AArch64::Z31 },
};
extern const unsigned AArch64EHFlavour0Dwarf2LSize = array_lengthof(AArch64EHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64DwarfFlavour0L2Dwarf[] = {
  { AArch64::FFR, 47U },
  { AArch64::FP, 29U },
  { AArch64::LR, 30U },
  { AArch64::SP, 31U },
  { AArch64::VG, 46U },
  { AArch64::WSP, 31U },
  { AArch64::WZR, 31U },
  { AArch64::XZR, 31U },
  { AArch64::B0, 64U },
  { AArch64::B1, 65U },
  { AArch64::B2, 66U },
  { AArch64::B3, 67U },
  { AArch64::B4, 68U },
  { AArch64::B5, 69U },
  { AArch64::B6, 70U },
  { AArch64::B7, 71U },
  { AArch64::B8, 72U },
  { AArch64::B9, 73U },
  { AArch64::B10, 74U },
  { AArch64::B11, 75U },
  { AArch64::B12, 76U },
  { AArch64::B13, 77U },
  { AArch64::B14, 78U },
  { AArch64::B15, 79U },
  { AArch64::B16, 80U },
  { AArch64::B17, 81U },
  { AArch64::B18, 82U },
  { AArch64::B19, 83U },
  { AArch64::B20, 84U },
  { AArch64::B21, 85U },
  { AArch64::B22, 86U },
  { AArch64::B23, 87U },
  { AArch64::B24, 88U },
  { AArch64::B25, 89U },
  { AArch64::B26, 90U },
  { AArch64::B27, 91U },
  { AArch64::B28, 92U },
  { AArch64::B29, 93U },
  { AArch64::B30, 94U },
  { AArch64::B31, 95U },
  { AArch64::D0, 64U },
  { AArch64::D1, 65U },
  { AArch64::D2, 66U },
  { AArch64::D3, 67U },
  { AArch64::D4, 68U },
  { AArch64::D5, 69U },
  { AArch64::D6, 70U },
  { AArch64::D7, 71U },
  { AArch64::D8, 72U },
  { AArch64::D9, 73U },
  { AArch64::D10, 74U },
  { AArch64::D11, 75U },
  { AArch64::D12, 76U },
  { AArch64::D13, 77U },
  { AArch64::D14, 78U },
  { AArch64::D15, 79U },
  { AArch64::D16, 80U },
  { AArch64::D17, 81U },
  { AArch64::D18, 82U },
  { AArch64::D19, 83U },
  { AArch64::D20, 84U },
  { AArch64::D21, 85U },
  { AArch64::D22, 86U },
  { AArch64::D23, 87U },
  { AArch64::D24, 88U },
  { AArch64::D25, 89U },
  { AArch64::D26, 90U },
  { AArch64::D27, 91U },
  { AArch64::D28, 92U },
  { AArch64::D29, 93U },
  { AArch64::D30, 94U },
  { AArch64::D31, 95U },
  { AArch64::H0, 64U },
  { AArch64::H1, 65U },
  { AArch64::H2, 66U },
  { AArch64::H3, 67U },
  { AArch64::H4, 68U },
  { AArch64::H5, 69U },
  { AArch64::H6, 70U },
  { AArch64::H7, 71U },
  { AArch64::H8, 72U },
  { AArch64::H9, 73U },
  { AArch64::H10, 74U },
  { AArch64::H11, 75U },
  { AArch64::H12, 76U },
  { AArch64::H13, 77U },
  { AArch64::H14, 78U },
  { AArch64::H15, 79U },
  { AArch64::H16, 80U },
  { AArch64::H17, 81U },
  { AArch64::H18, 82U },
  { AArch64::H19, 83U },
  { AArch64::H20, 84U },
  { AArch64::H21, 85U },
  { AArch64::H22, 86U },
  { AArch64::H23, 87U },
  { AArch64::H24, 88U },
  { AArch64::H25, 89U },
  { AArch64::H26, 90U },
  { AArch64::H27, 91U },
  { AArch64::H28, 92U },
  { AArch64::H29, 93U },
  { AArch64::H30, 94U },
  { AArch64::H31, 95U },
  { AArch64::P0, 48U },
  { AArch64::P1, 49U },
  { AArch64::P2, 50U },
  { AArch64::P3, 51U },
  { AArch64::P4, 52U },
  { AArch64::P5, 53U },
  { AArch64::P6, 54U },
  { AArch64::P7, 55U },
  { AArch64::P8, 56U },
  { AArch64::P9, 57U },
  { AArch64::P10, 58U },
  { AArch64::P11, 59U },
  { AArch64::P12, 60U },
  { AArch64::P13, 61U },
  { AArch64::P14, 62U },
  { AArch64::P15, 63U },
  { AArch64::Q0, 64U },
  { AArch64::Q1, 65U },
  { AArch64::Q2, 66U },
  { AArch64::Q3, 67U },
  { AArch64::Q4, 68U },
  { AArch64::Q5, 69U },
  { AArch64::Q6, 70U },
  { AArch64::Q7, 71U },
  { AArch64::Q8, 72U },
  { AArch64::Q9, 73U },
  { AArch64::Q10, 74U },
  { AArch64::Q11, 75U },
  { AArch64::Q12, 76U },
  { AArch64::Q13, 77U },
  { AArch64::Q14, 78U },
  { AArch64::Q15, 79U },
  { AArch64::Q16, 80U },
  { AArch64::Q17, 81U },
  { AArch64::Q18, 82U },
  { AArch64::Q19, 83U },
  { AArch64::Q20, 84U },
  { AArch64::Q21, 85U },
  { AArch64::Q22, 86U },
  { AArch64::Q23, 87U },
  { AArch64::Q24, 88U },
  { AArch64::Q25, 89U },
  { AArch64::Q26, 90U },
  { AArch64::Q27, 91U },
  { AArch64::Q28, 92U },
  { AArch64::Q29, 93U },
  { AArch64::Q30, 94U },
  { AArch64::Q31, 95U },
  { AArch64::S0, 64U },
  { AArch64::S1, 65U },
  { AArch64::S2, 66U },
  { AArch64::S3, 67U },
  { AArch64::S4, 68U },
  { AArch64::S5, 69U },
  { AArch64::S6, 70U },
  { AArch64::S7, 71U },
  { AArch64::S8, 72U },
  { AArch64::S9, 73U },
  { AArch64::S10, 74U },
  { AArch64::S11, 75U },
  { AArch64::S12, 76U },
  { AArch64::S13, 77U },
  { AArch64::S14, 78U },
  { AArch64::S15, 79U },
  { AArch64::S16, 80U },
  { AArch64::S17, 81U },
  { AArch64::S18, 82U },
  { AArch64::S19, 83U },
  { AArch64::S20, 84U },
  { AArch64::S21, 85U },
  { AArch64::S22, 86U },
  { AArch64::S23, 87U },
  { AArch64::S24, 88U },
  { AArch64::S25, 89U },
  { AArch64::S26, 90U },
  { AArch64::S27, 91U },
  { AArch64::S28, 92U },
  { AArch64::S29, 93U },
  { AArch64::S30, 94U },
  { AArch64::S31, 95U },
  { AArch64::W0, 0U },
  { AArch64::W1, 1U },
  { AArch64::W2, 2U },
  { AArch64::W3, 3U },
  { AArch64::W4, 4U },
  { AArch64::W5, 5U },
  { AArch64::W6, 6U },
  { AArch64::W7, 7U },
  { AArch64::W8, 8U },
  { AArch64::W9, 9U },
  { AArch64::W10, 10U },
  { AArch64::W11, 11U },
  { AArch64::W12, 12U },
  { AArch64::W13, 13U },
  { AArch64::W14, 14U },
  { AArch64::W15, 15U },
  { AArch64::W16, 16U },
  { AArch64::W17, 17U },
  { AArch64::W18, 18U },
  { AArch64::W19, 19U },
  { AArch64::W20, 20U },
  { AArch64::W21, 21U },
  { AArch64::W22, 22U },
  { AArch64::W23, 23U },
  { AArch64::W24, 24U },
  { AArch64::W25, 25U },
  { AArch64::W26, 26U },
  { AArch64::W27, 27U },
  { AArch64::W28, 28U },
  { AArch64::W29, 29U },
  { AArch64::W30, 30U },
  { AArch64::X0, 0U },
  { AArch64::X1, 1U },
  { AArch64::X2, 2U },
  { AArch64::X3, 3U },
  { AArch64::X4, 4U },
  { AArch64::X5, 5U },
  { AArch64::X6, 6U },
  { AArch64::X7, 7U },
  { AArch64::X8, 8U },
  { AArch64::X9, 9U },
  { AArch64::X10, 10U },
  { AArch64::X11, 11U },
  { AArch64::X12, 12U },
  { AArch64::X13, 13U },
  { AArch64::X14, 14U },
  { AArch64::X15, 15U },
  { AArch64::X16, 16U },
  { AArch64::X17, 17U },
  { AArch64::X18, 18U },
  { AArch64::X19, 19U },
  { AArch64::X20, 20U },
  { AArch64::X21, 21U },
  { AArch64::X22, 22U },
  { AArch64::X23, 23U },
  { AArch64::X24, 24U },
  { AArch64::X25, 25U },
  { AArch64::X26, 26U },
  { AArch64::X27, 27U },
  { AArch64::X28, 28U },
  { AArch64::Z0, 96U },
  { AArch64::Z1, 97U },
  { AArch64::Z2, 98U },
  { AArch64::Z3, 99U },
  { AArch64::Z4, 100U },
  { AArch64::Z5, 101U },
  { AArch64::Z6, 102U },
  { AArch64::Z7, 103U },
  { AArch64::Z8, 104U },
  { AArch64::Z9, 105U },
  { AArch64::Z10, 106U },
  { AArch64::Z11, 107U },
  { AArch64::Z12, 108U },
  { AArch64::Z13, 109U },
  { AArch64::Z14, 110U },
  { AArch64::Z15, 111U },
  { AArch64::Z16, 112U },
  { AArch64::Z17, 113U },
  { AArch64::Z18, 114U },
  { AArch64::Z19, 115U },
  { AArch64::Z20, 116U },
  { AArch64::Z21, 117U },
  { AArch64::Z22, 118U },
  { AArch64::Z23, 119U },
  { AArch64::Z24, 120U },
  { AArch64::Z25, 121U },
  { AArch64::Z26, 122U },
  { AArch64::Z27, 123U },
  { AArch64::Z28, 124U },
  { AArch64::Z29, 125U },
  { AArch64::Z30, 126U },
  { AArch64::Z31, 127U },
};
extern const unsigned AArch64DwarfFlavour0L2DwarfSize = array_lengthof(AArch64DwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64EHFlavour0L2Dwarf[] = {
  { AArch64::FFR, 47U },
  { AArch64::FP, 29U },
  { AArch64::LR, 30U },
  { AArch64::SP, 31U },
  { AArch64::VG, 46U },
  { AArch64::WSP, 31U },
  { AArch64::WZR, 31U },
  { AArch64::XZR, 31U },
  { AArch64::B0, 64U },
  { AArch64::B1, 65U },
  { AArch64::B2, 66U },
  { AArch64::B3, 67U },
  { AArch64::B4, 68U },
  { AArch64::B5, 69U },
  { AArch64::B6, 70U },
  { AArch64::B7, 71U },
  { AArch64::B8, 72U },
  { AArch64::B9, 73U },
  { AArch64::B10, 74U },
  { AArch64::B11, 75U },
  { AArch64::B12, 76U },
  { AArch64::B13, 77U },
  { AArch64::B14, 78U },
  { AArch64::B15, 79U },
  { AArch64::B16, 80U },
  { AArch64::B17, 81U },
  { AArch64::B18, 82U },
  { AArch64::B19, 83U },
  { AArch64::B20, 84U },
  { AArch64::B21, 85U },
  { AArch64::B22, 86U },
  { AArch64::B23, 87U },
  { AArch64::B24, 88U },
  { AArch64::B25, 89U },
  { AArch64::B26, 90U },
  { AArch64::B27, 91U },
  { AArch64::B28, 92U },
  { AArch64::B29, 93U },
  { AArch64::B30, 94U },
  { AArch64::B31, 95U },
  { AArch64::D0, 64U },
  { AArch64::D1, 65U },
  { AArch64::D2, 66U },
  { AArch64::D3, 67U },
  { AArch64::D4, 68U },
  { AArch64::D5, 69U },
  { AArch64::D6, 70U },
  { AArch64::D7, 71U },
  { AArch64::D8, 72U },
  { AArch64::D9, 73U },
  { AArch64::D10, 74U },
  { AArch64::D11, 75U },
  { AArch64::D12, 76U },
  { AArch64::D13, 77U },
  { AArch64::D14, 78U },
  { AArch64::D15, 79U },
  { AArch64::D16, 80U },
  { AArch64::D17, 81U },
  { AArch64::D18, 82U },
  { AArch64::D19, 83U },
  { AArch64::D20, 84U },
  { AArch64::D21, 85U },
  { AArch64::D22, 86U },
  { AArch64::D23, 87U },
  { AArch64::D24, 88U },
  { AArch64::D25, 89U },
  { AArch64::D26, 90U },
  { AArch64::D27, 91U },
  { AArch64::D28, 92U },
  { AArch64::D29, 93U },
  { AArch64::D30, 94U },
  { AArch64::D31, 95U },
  { AArch64::H0, 64U },
  { AArch64::H1, 65U },
  { AArch64::H2, 66U },
  { AArch64::H3, 67U },
  { AArch64::H4, 68U },
  { AArch64::H5, 69U },
  { AArch64::H6, 70U },
  { AArch64::H7, 71U },
  { AArch64::H8, 72U },
  { AArch64::H9, 73U },
  { AArch64::H10, 74U },
  { AArch64::H11, 75U },
  { AArch64::H12, 76U },
  { AArch64::H13, 77U },
  { AArch64::H14, 78U },
  { AArch64::H15, 79U },
  { AArch64::H16, 80U },
  { AArch64::H17, 81U },
  { AArch64::H18, 82U },
  { AArch64::H19, 83U },
  { AArch64::H20, 84U },
  { AArch64::H21, 85U },
  { AArch64::H22, 86U },
  { AArch64::H23, 87U },
  { AArch64::H24, 88U },
  { AArch64::H25, 89U },
  { AArch64::H26, 90U },
  { AArch64::H27, 91U },
  { AArch64::H28, 92U },
  { AArch64::H29, 93U },
  { AArch64::H30, 94U },
  { AArch64::H31, 95U },
  { AArch64::P0, 48U },
  { AArch64::P1, 49U },
  { AArch64::P2, 50U },
  { AArch64::P3, 51U },
  { AArch64::P4, 52U },
  { AArch64::P5, 53U },
  { AArch64::P6, 54U },
  { AArch64::P7, 55U },
  { AArch64::P8, 56U },
  { AArch64::P9, 57U },
  { AArch64::P10, 58U },
  { AArch64::P11, 59U },
  { AArch64::P12, 60U },
  { AArch64::P13, 61U },
  { AArch64::P14, 62U },
  { AArch64::P15, 63U },
  { AArch64::Q0, 64U },
  { AArch64::Q1, 65U },
  { AArch64::Q2, 66U },
  { AArch64::Q3, 67U },
  { AArch64::Q4, 68U },
  { AArch64::Q5, 69U },
  { AArch64::Q6, 70U },
  { AArch64::Q7, 71U },
  { AArch64::Q8, 72U },
  { AArch64::Q9, 73U },
  { AArch64::Q10, 74U },
  { AArch64::Q11, 75U },
  { AArch64::Q12, 76U },
  { AArch64::Q13, 77U },
  { AArch64::Q14, 78U },
  { AArch64::Q15, 79U },
  { AArch64::Q16, 80U },
  { AArch64::Q17, 81U },
  { AArch64::Q18, 82U },
  { AArch64::Q19, 83U },
  { AArch64::Q20, 84U },
  { AArch64::Q21, 85U },
  { AArch64::Q22, 86U },
  { AArch64::Q23, 87U },
  { AArch64::Q24, 88U },
  { AArch64::Q25, 89U },
  { AArch64::Q26, 90U },
  { AArch64::Q27, 91U },
  { AArch64::Q28, 92U },
  { AArch64::Q29, 93U },
  { AArch64::Q30, 94U },
  { AArch64::Q31, 95U },
  { AArch64::S0, 64U },
  { AArch64::S1, 65U },
  { AArch64::S2, 66U },
  { AArch64::S3, 67U },
  { AArch64::S4, 68U },
  { AArch64::S5, 69U },
  { AArch64::S6, 70U },
  { AArch64::S7, 71U },
  { AArch64::S8, 72U },
  { AArch64::S9, 73U },
  { AArch64::S10, 74U },
  { AArch64::S11, 75U },
  { AArch64::S12, 76U },
  { AArch64::S13, 77U },
  { AArch64::S14, 78U },
  { AArch64::S15, 79U },
  { AArch64::S16, 80U },
  { AArch64::S17, 81U },
  { AArch64::S18, 82U },
  { AArch64::S19, 83U },
  { AArch64::S20, 84U },
  { AArch64::S21, 85U },
  { AArch64::S22, 86U },
  { AArch64::S23, 87U },
  { AArch64::S24, 88U },
  { AArch64::S25, 89U },
  { AArch64::S26, 90U },
  { AArch64::S27, 91U },
  { AArch64::S28, 92U },
  { AArch64::S29, 93U },
  { AArch64::S30, 94U },
  { AArch64::S31, 95U },
  { AArch64::W0, 0U },
  { AArch64::W1, 1U },
  { AArch64::W2, 2U },
  { AArch64::W3, 3U },
  { AArch64::W4, 4U },
  { AArch64::W5, 5U },
  { AArch64::W6, 6U },
  { AArch64::W7, 7U },
  { AArch64::W8, 8U },
  { AArch64::W9, 9U },
  { AArch64::W10, 10U },
  { AArch64::W11, 11U },
  { AArch64::W12, 12U },
  { AArch64::W13, 13U },
  { AArch64::W14, 14U },
  { AArch64::W15, 15U },
  { AArch64::W16, 16U },
  { AArch64::W17, 17U },
  { AArch64::W18, 18U },
  { AArch64::W19, 19U },
  { AArch64::W20, 20U },
  { AArch64::W21, 21U },
  { AArch64::W22, 22U },
  { AArch64::W23, 23U },
  { AArch64::W24, 24U },
  { AArch64::W25, 25U },
  { AArch64::W26, 26U },
  { AArch64::W27, 27U },
  { AArch64::W28, 28U },
  { AArch64::W29, 29U },
  { AArch64::W30, 30U },
  { AArch64::X0, 0U },
  { AArch64::X1, 1U },
  { AArch64::X2, 2U },
  { AArch64::X3, 3U },
  { AArch64::X4, 4U },
  { AArch64::X5, 5U },
  { AArch64::X6, 6U },
  { AArch64::X7, 7U },
  { AArch64::X8, 8U },
  { AArch64::X9, 9U },
  { AArch64::X10, 10U },
  { AArch64::X11, 11U },
  { AArch64::X12, 12U },
  { AArch64::X13, 13U },
  { AArch64::X14, 14U },
  { AArch64::X15, 15U },
  { AArch64::X16, 16U },
  { AArch64::X17, 17U },
  { AArch64::X18, 18U },
  { AArch64::X19, 19U },
  { AArch64::X20, 20U },
  { AArch64::X21, 21U },
  { AArch64::X22, 22U },
  { AArch64::X23, 23U },
  { AArch64::X24, 24U },
  { AArch64::X25, 25U },
  { AArch64::X26, 26U },
  { AArch64::X27, 27U },
  { AArch64::X28, 28U },
  { AArch64::Z0, 96U },
  { AArch64::Z1, 97U },
  { AArch64::Z2, 98U },
  { AArch64::Z3, 99U },
  { AArch64::Z4, 100U },
  { AArch64::Z5, 101U },
  { AArch64::Z6, 102U },
  { AArch64::Z7, 103U },
  { AArch64::Z8, 104U },
  { AArch64::Z9, 105U },
  { AArch64::Z10, 106U },
  { AArch64::Z11, 107U },
  { AArch64::Z12, 108U },
  { AArch64::Z13, 109U },
  { AArch64::Z14, 110U },
  { AArch64::Z15, 111U },
  { AArch64::Z16, 112U },
  { AArch64::Z17, 113U },
  { AArch64::Z18, 114U },
  { AArch64::Z19, 115U },
  { AArch64::Z20, 116U },
  { AArch64::Z21, 117U },
  { AArch64::Z22, 118U },
  { AArch64::Z23, 119U },
  { AArch64::Z24, 120U },
  { AArch64::Z25, 121U },
  { AArch64::Z26, 122U },
  { AArch64::Z27, 123U },
  { AArch64::Z28, 124U },
  { AArch64::Z29, 125U },
  { AArch64::Z30, 126U },
  { AArch64::Z31, 127U },
};
extern const unsigned AArch64EHFlavour0L2DwarfSize = array_lengthof(AArch64EHFlavour0L2Dwarf);

extern const uint16_t AArch64RegEncodingTable[] = {
  0,
  0,
  29,
  30,
  0,
  31,
  0,
  31,
  31,
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
  30,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  28,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
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
};
static inline void InitAArch64MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(AArch64RegDesc, 630, RA, PC, AArch64MCRegisterClasses, 130, AArch64RegUnitRoots, 116, AArch64RegDiffLists, AArch64LaneMaskLists, AArch64RegStrings, AArch64RegClassStrings, AArch64SubRegIdxLists, 100,
AArch64SubRegIdxRanges, AArch64RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AArch64DwarfFlavour0Dwarf2L, AArch64DwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AArch64EHFlavour0Dwarf2L, AArch64EHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AArch64DwarfFlavour0L2Dwarf, AArch64DwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AArch64EHFlavour0L2Dwarf, AArch64EHFlavour0L2DwarfSize, true);
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

class AArch64FrameLowering;

struct AArch64GenRegisterInfo : public TargetRegisterInfo {
  explicit AArch64GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const AArch64FrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace AArch64 { // Register classes
  extern const TargetRegisterClass FPR8RegClass;
  extern const TargetRegisterClass FPR16RegClass;
  extern const TargetRegisterClass FPR16_loRegClass;
  extern const TargetRegisterClass PPRRegClass;
  extern const TargetRegisterClass PPR_3bRegClass;
  extern const TargetRegisterClass GPR32allRegClass;
  extern const TargetRegisterClass FPR32RegClass;
  extern const TargetRegisterClass GPR32RegClass;
  extern const TargetRegisterClass GPR32spRegClass;
  extern const TargetRegisterClass GPR32commonRegClass;
  extern const TargetRegisterClass FPR32_with_hsub_in_FPR16_loRegClass;
  extern const TargetRegisterClass GPR32argRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass GPR32sponlyRegClass;
  extern const TargetRegisterClass WSeqPairsClassRegClass;
  extern const TargetRegisterClass WSeqPairsClass_with_subo32_in_GPR32commonRegClass;
  extern const TargetRegisterClass WSeqPairsClass_with_sube32_in_GPR32argRegClass;
  extern const TargetRegisterClass GPR64allRegClass;
  extern const TargetRegisterClass FPR64RegClass;
  extern const TargetRegisterClass GPR64RegClass;
  extern const TargetRegisterClass GPR64spRegClass;
  extern const TargetRegisterClass GPR64commonRegClass;
  extern const TargetRegisterClass GPR64noipRegClass;
  extern const TargetRegisterClass GPR64common_and_GPR64noipRegClass;
  extern const TargetRegisterClass tcGPR64RegClass;
  extern const TargetRegisterClass GPR64noip_and_tcGPR64RegClass;
  extern const TargetRegisterClass FPR64_loRegClass;
  extern const TargetRegisterClass GPR64argRegClass;
  extern const TargetRegisterClass rtcGPR64RegClass;
  extern const TargetRegisterClass GPR64sponlyRegClass;
  extern const TargetRegisterClass DDRegClass;
  extern const TargetRegisterClass DD_with_dsub0_in_FPR64_loRegClass;
  extern const TargetRegisterClass DD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass XSeqPairsClassRegClass;
  extern const TargetRegisterClass DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64commonRegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64noipRegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_GPR64noipRegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_tcGPR64RegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_tcGPR64RegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_sub_32_in_GPR32argRegClass;
  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_rtcGPR64RegClass;
  extern const TargetRegisterClass FPR128RegClass;
  extern const TargetRegisterClass ZPRRegClass;
  extern const TargetRegisterClass FPR128_loRegClass;
  extern const TargetRegisterClass ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR_3bRegClass;
  extern const TargetRegisterClass DDDRegClass;
  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDDRegClass;
  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub3_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass;
  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass;
  extern const TargetRegisterClass QQRegClass;
  extern const TargetRegisterClass ZPR2RegClass;
  extern const TargetRegisterClass QQ_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass QQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass ZPR2_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR2_with_zsub0_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR2_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass QQQRegClass;
  extern const TargetRegisterClass ZPR3RegClass;
  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass QQQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub0_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass QQQQRegClass;
  extern const TargetRegisterClass ZPR4RegClass;
  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub3_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_loRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub3_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass;
  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass;
  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub0_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub3_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass;
  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClass;
} // end namespace AArch64

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

extern const MCRegisterClass AArch64MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::f32, MVT::i32, MVT::Other,
  /* 3 */ MVT::i64, MVT::Other,
  /* 5 */ MVT::f16, MVT::bf16, MVT::Other,
  /* 8 */ MVT::f16, MVT::Other,
  /* 10 */ MVT::f64, MVT::i64, MVT::v2f32, MVT::v1f64, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::v1i64, MVT::v4f16, MVT::v4bf16, MVT::Other,
  /* 21 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::f128, MVT::v8f16, MVT::v8bf16, MVT::Other,
  /* 31 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::v4f32, MVT::v2f64, MVT::v8f16, MVT::v8bf16, MVT::Other,
  /* 40 */ MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::v1i64, MVT::v4f16, MVT::v4bf16, MVT::v2f32, MVT::v1f64, MVT::Other,
  /* 49 */ MVT::nxv16i1, MVT::nxv8i1, MVT::nxv4i1, MVT::nxv2i1, MVT::Other,
  /* 54 */ MVT::nxv16i8, MVT::nxv8i16, MVT::nxv4i32, MVT::nxv2i64, MVT::nxv2f16, MVT::nxv4f16, MVT::nxv8f16, MVT::nxv2bf16, MVT::nxv4bf16, MVT::nxv8bf16, MVT::nxv2f32, MVT::nxv4f32, MVT::nxv2f64, MVT::Other,
  /* 68 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "bsub", "dsub", "dsub0", "dsub1", "dsub2", "dsub3", "hsub", "qhisub", "qsub", "qsub0", "qsub1", "qsub2", "qsub3", "ssub", "sub_32", "sube32", "sube64", "subo32", "subo64", "zsub", "zsub0", "zsub1", "zsub2", "zsub3", "zsub_hi", "dsub1_then_bsub", "dsub1_then_hsub", "dsub1_then_ssub", "dsub3_then_bsub", "dsub3_then_hsub", "dsub3_then_ssub", "dsub2_then_bsub", "dsub2_then_hsub", "dsub2_then_ssub", "qsub1_then_bsub", "qsub1_then_dsub", "qsub1_then_hsub", "qsub1_then_ssub", "qsub3_then_bsub", "qsub3_then_dsub", "qsub3_then_hsub", "qsub3_then_ssub", "qsub2_then_bsub", "qsub2_then_dsub", "qsub2_then_hsub", "qsub2_then_ssub", "subo64_then_sub_32", "zsub1_then_bsub", "zsub1_then_dsub", "zsub1_then_hsub", "zsub1_then_ssub", "zsub1_then_zsub", "zsub1_then_zsub_hi", "zsub3_then_bsub", "zsub3_then_dsub", "zsub3_then_hsub", "zsub3_then_ssub", "zsub3_then_zsub", "zsub3_then_zsub_hi", "zsub2_then_bsub", "zsub2_then_dsub", "zsub2_then_hsub", "zsub2_then_ssub", "zsub2_then_zsub", "zsub2_then_zsub_hi", "dsub0_dsub1", "dsub0_dsub1_dsub2", "dsub1_dsub2", "dsub1_dsub2_dsub3", "dsub2_dsub3", "dsub_qsub1_then_dsub", "dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub", "dsub_qsub1_then_dsub_qsub2_then_dsub", "qsub0_qsub1", "qsub0_qsub1_qsub2", "qsub1_qsub2", "qsub1_qsub2_qsub3", "qsub2_qsub3", "qsub1_then_dsub_qsub2_then_dsub", "qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub", "qsub2_then_dsub_qsub3_then_dsub", "sub_32_subo64_then_sub_32", "dsub_zsub1_then_dsub", "zsub_zsub1_then_zsub", "dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub", "dsub_zsub1_then_dsub_zsub2_then_dsub", "zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub", "zsub_zsub1_then_zsub_zsub2_then_zsub", "zsub0_zsub1", "zsub0_zsub1_zsub2", "zsub1_zsub2", "zsub1_zsub2_zsub3", "zsub2_zsub3", "zsub1_then_dsub_zsub2_then_dsub", "zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub", "zsub1_then_zsub_zsub2_then_zsub", "zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub", "zsub2_then_dsub_zsub3_then_dsub", "zsub2_then_zsub_zsub3_then_zsub", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // bsub
  LaneBitmask(0x0000000000000001), // dsub
  LaneBitmask(0x0000000000000001), // dsub0
  LaneBitmask(0x0000000000000080), // dsub1
  LaneBitmask(0x0000000000000200), // dsub2
  LaneBitmask(0x0000000000000100), // dsub3
  LaneBitmask(0x0000000000000001), // hsub
  LaneBitmask(0x0000000000000002), // qhisub
  LaneBitmask(0x0000000000000004), // qsub
  LaneBitmask(0x0000000000000001), // qsub0
  LaneBitmask(0x0000000000000400), // qsub1
  LaneBitmask(0x0000000000001000), // qsub2
  LaneBitmask(0x0000000000000800), // qsub3
  LaneBitmask(0x0000000000000001), // ssub
  LaneBitmask(0x0000000000000008), // sub_32
  LaneBitmask(0x0000000000000010), // sube32
  LaneBitmask(0x0000000000000008), // sube64
  LaneBitmask(0x0000000000000020), // subo32
  LaneBitmask(0x0000000000002000), // subo64
  LaneBitmask(0x0000000000000001), // zsub
  LaneBitmask(0x0000000000000041), // zsub0
  LaneBitmask(0x000000000000C000), // zsub1
  LaneBitmask(0x00000000000C0000), // zsub2
  LaneBitmask(0x0000000000030000), // zsub3
  LaneBitmask(0x0000000000000040), // zsub_hi
  LaneBitmask(0x0000000000000080), // dsub1_then_bsub
  LaneBitmask(0x0000000000000080), // dsub1_then_hsub
  LaneBitmask(0x0000000000000080), // dsub1_then_ssub
  LaneBitmask(0x0000000000000100), // dsub3_then_bsub
  LaneBitmask(0x0000000000000100), // dsub3_then_hsub
  LaneBitmask(0x0000000000000100), // dsub3_then_ssub
  LaneBitmask(0x0000000000000200), // dsub2_then_bsub
  LaneBitmask(0x0000000000000200), // dsub2_then_hsub
  LaneBitmask(0x0000000000000200), // dsub2_then_ssub
  LaneBitmask(0x0000000000000400), // qsub1_then_bsub
  LaneBitmask(0x0000000000000400), // qsub1_then_dsub
  LaneBitmask(0x0000000000000400), // qsub1_then_hsub
  LaneBitmask(0x0000000000000400), // qsub1_then_ssub
  LaneBitmask(0x0000000000000800), // qsub3_then_bsub
  LaneBitmask(0x0000000000000800), // qsub3_then_dsub
  LaneBitmask(0x0000000000000800), // qsub3_then_hsub
  LaneBitmask(0x0000000000000800), // qsub3_then_ssub
  LaneBitmask(0x0000000000001000), // qsub2_then_bsub
  LaneBitmask(0x0000000000001000), // qsub2_then_dsub
  LaneBitmask(0x0000000000001000), // qsub2_then_hsub
  LaneBitmask(0x0000000000001000), // qsub2_then_ssub
  LaneBitmask(0x0000000000002000), // subo64_then_sub_32
  LaneBitmask(0x0000000000004000), // zsub1_then_bsub
  LaneBitmask(0x0000000000004000), // zsub1_then_dsub
  LaneBitmask(0x0000000000004000), // zsub1_then_hsub
  LaneBitmask(0x0000000000004000), // zsub1_then_ssub
  LaneBitmask(0x0000000000004000), // zsub1_then_zsub
  LaneBitmask(0x0000000000008000), // zsub1_then_zsub_hi
  LaneBitmask(0x0000000000010000), // zsub3_then_bsub
  LaneBitmask(0x0000000000010000), // zsub3_then_dsub
  LaneBitmask(0x0000000000010000), // zsub3_then_hsub
  LaneBitmask(0x0000000000010000), // zsub3_then_ssub
  LaneBitmask(0x0000000000010000), // zsub3_then_zsub
  LaneBitmask(0x0000000000020000), // zsub3_then_zsub_hi
  LaneBitmask(0x0000000000040000), // zsub2_then_bsub
  LaneBitmask(0x0000000000040000), // zsub2_then_dsub
  LaneBitmask(0x0000000000040000), // zsub2_then_hsub
  LaneBitmask(0x0000000000040000), // zsub2_then_ssub
  LaneBitmask(0x0000000000040000), // zsub2_then_zsub
  LaneBitmask(0x0000000000080000), // zsub2_then_zsub_hi
  LaneBitmask(0x0000000000000081), // dsub0_dsub1
  LaneBitmask(0x0000000000000281), // dsub0_dsub1_dsub2
  LaneBitmask(0x0000000000000280), // dsub1_dsub2
  LaneBitmask(0x0000000000000380), // dsub1_dsub2_dsub3
  LaneBitmask(0x0000000000000300), // dsub2_dsub3
  LaneBitmask(0x0000000000000401), // dsub_qsub1_then_dsub
  LaneBitmask(0x0000000000001C01), // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  LaneBitmask(0x0000000000001401), // dsub_qsub1_then_dsub_qsub2_then_dsub
  LaneBitmask(0x0000000000000401), // qsub0_qsub1
  LaneBitmask(0x0000000000001401), // qsub0_qsub1_qsub2
  LaneBitmask(0x0000000000001400), // qsub1_qsub2
  LaneBitmask(0x0000000000001C00), // qsub1_qsub2_qsub3
  LaneBitmask(0x0000000000001800), // qsub2_qsub3
  LaneBitmask(0x0000000000001400), // qsub1_then_dsub_qsub2_then_dsub
  LaneBitmask(0x0000000000001C00), // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  LaneBitmask(0x0000000000001800), // qsub2_then_dsub_qsub3_then_dsub
  LaneBitmask(0x0000000000002008), // sub_32_subo64_then_sub_32
  LaneBitmask(0x0000000000004001), // dsub_zsub1_then_dsub
  LaneBitmask(0x0000000000004001), // zsub_zsub1_then_zsub
  LaneBitmask(0x0000000000054001), // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
  LaneBitmask(0x0000000000044001), // dsub_zsub1_then_dsub_zsub2_then_dsub
  LaneBitmask(0x0000000000054001), // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
  LaneBitmask(0x0000000000044001), // zsub_zsub1_then_zsub_zsub2_then_zsub
  LaneBitmask(0x000000000000C041), // zsub0_zsub1
  LaneBitmask(0x00000000000CC041), // zsub0_zsub1_zsub2
  LaneBitmask(0x00000000000CC000), // zsub1_zsub2
  LaneBitmask(0x00000000000FC000), // zsub1_zsub2_zsub3
  LaneBitmask(0x00000000000F0000), // zsub2_zsub3
  LaneBitmask(0x0000000000044000), // zsub1_then_dsub_zsub2_then_dsub
  LaneBitmask(0x0000000000054000), // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
  LaneBitmask(0x0000000000044000), // zsub1_then_zsub_zsub2_then_zsub
  LaneBitmask(0x0000000000054000), // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
  LaneBitmask(0x0000000000050000), // zsub2_then_dsub_zsub3_then_dsub
  LaneBitmask(0x0000000000050000), // zsub2_then_zsub_zsub3_then_zsub
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 8, 8, 8, VTLists+68 },    // FPR8
  { 16, 16, 16, VTLists+5 },    // FPR16
  { 16, 16, 16, VTLists+8 },    // FPR16_lo
  { 16, 16, 16, VTLists+49 },    // PPR
  { 16, 16, 16, VTLists+49 },    // PPR_3b
  { 32, 32, 32, VTLists+1 },    // GPR32all
  { 32, 32, 32, VTLists+0 },    // FPR32
  { 32, 32, 32, VTLists+1 },    // GPR32
  { 32, 32, 32, VTLists+1 },    // GPR32sp
  { 32, 32, 32, VTLists+1 },    // GPR32common
  { 32, 32, 32, VTLists+0 },    // FPR32_with_hsub_in_FPR16_lo
  { 32, 32, 32, VTLists+1 },    // GPR32arg
  { 32, 32, 32, VTLists+1 },    // CCR
  { 32, 32, 32, VTLists+1 },    // GPR32sponly
  { 64, 64, 32, VTLists+68 },    // WSeqPairsClass
  { 64, 64, 32, VTLists+68 },    // WSeqPairsClass_with_subo32_in_GPR32common
  { 64, 64, 32, VTLists+68 },    // WSeqPairsClass_with_sube32_in_GPR32arg
  { 64, 64, 64, VTLists+3 },    // GPR64all
  { 64, 64, 64, VTLists+10 },    // FPR64
  { 64, 64, 64, VTLists+3 },    // GPR64
  { 64, 64, 64, VTLists+3 },    // GPR64sp
  { 64, 64, 64, VTLists+3 },    // GPR64common
  { 64, 64, 64, VTLists+3 },    // GPR64noip
  { 64, 64, 64, VTLists+3 },    // GPR64common_and_GPR64noip
  { 64, 64, 64, VTLists+3 },    // tcGPR64
  { 64, 64, 64, VTLists+3 },    // GPR64noip_and_tcGPR64
  { 64, 64, 64, VTLists+40 },    // FPR64_lo
  { 64, 64, 64, VTLists+3 },    // GPR64arg
  { 64, 64, 64, VTLists+3 },    // rtcGPR64
  { 64, 64, 64, VTLists+3 },    // GPR64sponly
  { 128, 128, 64, VTLists+68 },    // DD
  { 128, 128, 64, VTLists+68 },    // DD_with_dsub0_in_FPR64_lo
  { 128, 128, 64, VTLists+68 },    // DD_with_dsub1_in_FPR64_lo
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass
  { 128, 128, 64, VTLists+68 },    // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_subo64_in_GPR64common
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_subo64_in_GPR64noip
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_sube64_in_GPR64noip
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_sube64_in_tcGPR64
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_subo64_in_tcGPR64
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_sub_32_in_GPR32arg
  { 128, 128, 64, VTLists+68 },    // XSeqPairsClass_with_sube64_in_rtcGPR64
  { 128, 128, 128, VTLists+21 },    // FPR128
  { 128, 128, 128, VTLists+54 },    // ZPR
  { 128, 128, 128, VTLists+31 },    // FPR128_lo
  { 128, 128, 128, VTLists+54 },    // ZPR_4b
  { 128, 128, 128, VTLists+54 },    // ZPR_3b
  { 192, 192, 64, VTLists+68 },    // DDD
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub0_in_FPR64_lo
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub1_in_FPR64_lo
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub2_in_FPR64_lo
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
  { 192, 192, 64, VTLists+68 },    // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub0_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub1_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub2_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub3_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
  { 256, 256, 64, VTLists+68 },    // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
  { 256, 256, 128, VTLists+68 },    // QQ
  { 256, 256, 128, VTLists+68 },    // ZPR2
  { 256, 256, 128, VTLists+68 },    // QQ_with_dsub_in_FPR64_lo
  { 256, 256, 128, VTLists+68 },    // QQ_with_qsub1_in_FPR128_lo
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_dsub_in_FPR64_lo
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_zsub1_in_ZPR_4b
  { 256, 256, 128, VTLists+68 },    // QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_zsub0_in_ZPR_3b
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_zsub1_in_ZPR_3b
  { 256, 256, 128, VTLists+68 },    // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // QQQ
  { 384, 384, 128, VTLists+68 },    // ZPR3
  { 384, 384, 128, VTLists+68 },    // QQQ_with_dsub_in_FPR64_lo
  { 384, 384, 128, VTLists+68 },    // QQQ_with_qsub1_in_FPR128_lo
  { 384, 384, 128, VTLists+68 },    // QQQ_with_qsub2_in_FPR128_lo
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_dsub_in_FPR64_lo
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub1_in_ZPR_4b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub2_in_ZPR_4b
  { 384, 384, 128, VTLists+68 },    // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
  { 384, 384, 128, VTLists+68 },    // QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
  { 384, 384, 128, VTLists+68 },    // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub0_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub1_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub2_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
  { 384, 384, 128, VTLists+68 },    // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // QQQQ
  { 512, 512, 128, VTLists+68 },    // ZPR4
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_dsub_in_FPR64_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub1_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub2_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub3_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub2_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub3_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub0_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub2_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub3_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
  { 512, 512, 128, VTLists+68 },    // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t FPR8SubClassMask[] = {
  0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0xc4040446, 0xfffff005, 0xffffffff, 0xffffffff, 0x00000003, // bsub
  0xc0000000, 0xfffe0005, 0x00000007, 0x00000000, 0x00000000, // dsub1_then_bsub
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub3_then_bsub
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub2_then_bsub
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub1_then_bsub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub3_then_bsub
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub2_then_bsub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1_then_bsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3_then_bsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2_then_bsub
};

static const uint32_t FPR16SubClassMask[] = {
  0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0xc4040440, 0xfffff005, 0xffffffff, 0xffffffff, 0x00000003, // hsub
  0xc0000000, 0xfffe0005, 0x00000007, 0x00000000, 0x00000000, // dsub1_then_hsub
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub3_then_hsub
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub2_then_hsub
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub1_then_hsub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub3_then_hsub
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub2_then_hsub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1_then_hsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3_then_hsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2_then_hsub
};

static const uint32_t FPR16_loSubClassMask[] = {
  0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x84000400, 0x22a5c004, 0x9d492ea5, 0x91d49112, 0x00000002, // hsub
  0x00000000, 0x64e80005, 0x00000007, 0x00000000, 0x00000000, // dsub1_then_hsub
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, // dsub3_then_hsub
  0x00000000, 0xc8d00000, 0x00000007, 0x00000000, 0x00000000, // dsub2_then_hsub
  0x00000000, 0x00000000, 0x04c20240, 0x004c3020, 0x00000000, // qsub1_then_hsub
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub3_then_hsub
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub2_then_hsub
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub1_then_hsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub3_then_hsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub2_then_hsub
};

static const uint32_t PPRSubClassMask[] = {
  0x00000018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t PPR_3bSubClassMask[] = {
  0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t GPR32allSubClassMask[] = {
  0x00002ba0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x3bfa0000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sub_32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sube32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // subo32
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // subo64_then_sub_32
};

static const uint32_t FPR32SubClassMask[] = {
  0x00000440, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0xc4040000, 0xfffff005, 0xffffffff, 0xffffffff, 0x00000003, // ssub
  0xc0000000, 0xfffe0005, 0x00000007, 0x00000000, 0x00000000, // dsub1_then_ssub
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub3_then_ssub
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub2_then_ssub
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub1_then_ssub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub3_then_ssub
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub2_then_ssub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1_then_ssub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3_then_ssub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2_then_ssub
};

static const uint32_t GPR32SubClassMask[] = {
  0x00000a80, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x1be80000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sub_32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sube32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // subo32
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // subo64_then_sub_32
};

static const uint32_t GPR32spSubClassMask[] = {
  0x00002b00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x3bb00000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sub_32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sube32
  0x00018000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // subo32
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, // subo64_then_sub_32
};

static const uint32_t GPR32commonSubClassMask[] = {
  0x00000a00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x1ba00000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sub_32
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sube32
  0x00018000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // subo32
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, // subo64_then_sub_32
};

static const uint32_t FPR32_with_hsub_in_FPR16_loSubClassMask[] = {
  0x00000400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x84000000, 0x22a5c004, 0x9d492ea5, 0x91d49112, 0x00000002, // ssub
  0x00000000, 0x64e80005, 0x00000007, 0x00000000, 0x00000000, // dsub1_then_ssub
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, // dsub3_then_ssub
  0x00000000, 0xc8d00000, 0x00000007, 0x00000000, 0x00000000, // dsub2_then_ssub
  0x00000000, 0x00000000, 0x04c20240, 0x004c3020, 0x00000000, // qsub1_then_ssub
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub3_then_ssub
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub2_then_ssub
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub1_then_ssub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub3_then_ssub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub2_then_ssub
};

static const uint32_t GPR32argSubClassMask[] = {
  0x00000800, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x08000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, // sub_32
  0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sube32
  0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // subo32
  0x00000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, // subo64_then_sub_32
};

static const uint32_t CCRSubClassMask[] = {
  0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t GPR32sponlySubClassMask[] = {
  0x00002000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x20000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, // sub_32
};

static const uint32_t WSeqPairsClassSubClassMask[] = {
  0x0001c000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sub_32_subo64_then_sub_32
};

static const uint32_t WSeqPairsClass_with_subo32_in_GPR32commonSubClassMask[] = {
  0x00018000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, // sub_32_subo64_then_sub_32
};

static const uint32_t WSeqPairsClass_with_sube32_in_GPR32argSubClassMask[] = {
  0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, // sub_32_subo64_then_sub_32
};

static const uint32_t GPR64allSubClassMask[] = {
  0x3bfa0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t FPR64SubClassMask[] = {
  0x04040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x0001f000, 0xfffffff8, 0xffffffff, 0x00000003, // dsub
  0xc0000000, 0xfffe0005, 0x00000007, 0x00000000, 0x00000000, // dsub0
  0xc0000000, 0xfffe0005, 0x00000007, 0x00000000, 0x00000000, // dsub1
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub2
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub3
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub1_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub3_then_dsub
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub2_then_dsub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3_then_dsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2_then_dsub
};

static const uint32_t GPR64SubClassMask[] = {
  0x1be80000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64spSubClassMask[] = {
  0x3bb00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64commonSubClassMask[] = {
  0x1ba00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64noipSubClassMask[] = {
  0x0ac00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x000006a0, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x000006b0, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64common_and_GPR64noipSubClassMask[] = {
  0x0a800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x000006a0, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x000006a0, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t tcGPR64SubClassMask[] = {
  0x1b000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000fc0, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000f00, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64noip_and_tcGPR64SubClassMask[] = {
  0x0a000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000680, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000600, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t FPR64_loSubClassMask[] = {
  0x04000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x0001c000, 0x9d492ea0, 0x91d49112, 0x00000002, // dsub
  0x80000000, 0x22a40004, 0x00000005, 0x00000000, 0x00000000, // dsub0
  0x00000000, 0x64e80005, 0x00000007, 0x00000000, 0x00000000, // dsub1
  0x00000000, 0xc8d00000, 0x00000007, 0x00000000, 0x00000000, // dsub2
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, // dsub3
  0x00000000, 0x00000000, 0x04c20240, 0x004c3020, 0x00000000, // qsub1_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub3_then_dsub
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub2_then_dsub
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub1_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub3_then_dsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub2_then_dsub
};

static const uint32_t GPR64argSubClassMask[] = {
  0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t rtcGPR64SubClassMask[] = {
  0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000800, 0x00000000, 0x00000000, 0x00000000, // sube64
  0x00000000, 0x00000800, 0x00000000, 0x00000000, 0x00000000, // subo64
};

static const uint32_t GPR64sponlySubClassMask[] = {
  0x20000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t DDSubClassMask[] = {
  0xc0000000, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1
  0x00000000, 0xfffe0000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub2_dsub3
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // dsub_qsub1_then_dsub
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // dsub_zsub1_then_dsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DD_with_dsub0_in_FPR64_loSubClassMask[] = {
  0x80000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x22a40000, 0x00000005, 0x00000000, 0x00000000, // dsub0_dsub1
  0x00000000, 0x64e80000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2
  0x00000000, 0xc8000000, 0x00000007, 0x00000000, 0x00000000, // dsub2_dsub3
  0x00000000, 0x00000000, 0x04410220, 0x00441010, 0x00000000, // dsub_qsub1_then_dsub
  0x00000000, 0x00000000, 0x04c20000, 0x004c3020, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x99082c80, 0x91908102, 0x00000002, // dsub_zsub1_then_dsub
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x64e80000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1
  0x00000000, 0xc8d00000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, // dsub2_dsub3
  0x00000000, 0x00000000, 0x04c20240, 0x004c3020, 0x00000000, // dsub_qsub1_then_dsub
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // dsub_zsub1_then_dsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t XSeqPairsClassSubClassMask[] = {
  0x00000000, 0x00000ffa, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x20a00000, 0x00000005, 0x00000000, 0x00000000, // dsub0_dsub1
  0x00000000, 0x40c00000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2
  0x00000000, 0x80000000, 0x00000006, 0x00000000, 0x00000000, // dsub2_dsub3
  0x00000000, 0x00000000, 0x04400200, 0x00441000, 0x00000000, // dsub_qsub1_then_dsub
  0x00000000, 0x00000000, 0x04800000, 0x004c2000, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, // qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x99002c00, 0x91908002, 0x00000002, // dsub_zsub1_then_dsub
  0x00000000, 0x00000000, 0xba000000, 0xb3b10003, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t XSeqPairsClass_with_subo64_in_GPR64commonSubClassMask[] = {
  0x00000000, 0x00000fe8, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_subo64_in_GPR64noipSubClassMask[] = {
  0x00000000, 0x000006b0, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_sube64_in_GPR64noipSubClassMask[] = {
  0x00000000, 0x000006a0, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_sube64_in_tcGPR64SubClassMask[] = {
  0x00000000, 0x00000fc0, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64SubClassMask[] = {
  0x00000000, 0x00000680, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_subo64_in_tcGPR64SubClassMask[] = {
  0x00000000, 0x00000f00, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64SubClassMask[] = {
  0x00000000, 0x00000600, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_sub_32_in_GPR32argSubClassMask[] = {
  0x00000000, 0x00000400, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t XSeqPairsClass_with_sube64_in_rtcGPR64SubClassMask[] = {
  0x00000000, 0x00000800, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t FPR128SubClassMask[] = {
  0x00000000, 0x00005000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub0
  0x00000000, 0x00000000, 0x04c74268, 0x004c70f4, 0x00000000, // qsub1
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub3
  0x00000000, 0x0001a000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3_then_zsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2_then_zsub
};

static const uint32_t ZPRSubClassMask[] = {
  0x00000000, 0x0001a000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub0
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub1
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub3
};

static const uint32_t FPR128_loSubClassMask[] = {
  0x00000000, 0x00004000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04410220, 0x00441010, 0x00000000, // qsub0
  0x00000000, 0x00000000, 0x04c20240, 0x004c3020, 0x00000000, // qsub1
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub3
  0x00000000, 0x00018000, 0x99082c80, 0x91908102, 0x00000002, // zsub
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub1_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub3_then_zsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub2_then_zsub
};

static const uint32_t ZPR_4bSubClassMask[] = {
  0x00000000, 0x00018000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x99082c80, 0x91908102, 0x00000002, // zsub0
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub1
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub3
};

static const uint32_t ZPR_3bSubClassMask[] = {
  0x00000000, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x90002800, 0x91000002, 0x00000002, // zsub0
  0x00000000, 0x00000000, 0xa0003000, 0xb2000003, 0x00000003, // zsub1
  0x00000000, 0x00000000, 0x40000000, 0xe4000003, 0x00000003, // zsub2
  0x00000000, 0x00000000, 0x00000000, 0x48000000, 0x00000003, // zsub3
};

static const uint32_t DDDSubClassMask[] = {
  0x00000000, 0x00fe0000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub0_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00a40000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x22000000, 0x00000005, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0x64000000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04410000, 0x00441010, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c3020, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x99080000, 0x91908102, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00e80000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x64000000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0xc8000000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04c20000, 0x004c3020, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00d00000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0xc8000000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00a00000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x00000005, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0x40000000, 0x00000007, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04400000, 0x00441000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x004c2000, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x99000000, 0x91908002, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00c00000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x40000000, 0x00000007, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0x80000000, 0x00000006, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04800000, 0x004c2000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0xba000000, 0xb3b10003, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00800000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000005, 0x00000000, 0x00000000, // dsub0_dsub1_dsub2
  0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, // dsub1_dsub2_dsub3
  0x00000000, 0x00000000, 0x04000000, 0x00440000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x00480000, 0x00000000, // qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x98000000, 0x91900002, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, // zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDDSubClassMask[] = {
  0x00000000, 0xff000000, 0x00000007, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub0_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x22000000, 0x00000005, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00441010, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x91908100, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x64000000, 0x00000007, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c3020, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0xc8000000, 0x00000007, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub3_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x90000000, 0x00000006, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x20000000, 0x00000005, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00441000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x91908000, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x40000000, 0x00000007, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c2000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x80000000, 0x00000006, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000005, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00440000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x91900000, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00480000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00400000, 0x00000000, // dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
  0x00000000, 0x00000000, 0x00000000, 0x91800000, 0x00000002, // dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
};

static const uint32_t QQSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000268, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub0_qsub1
  0x00000000, 0x00000000, 0x04c74000, 0x004c70f4, 0x00000000, // qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub2_qsub3
  0x00000000, 0x00000000, 0xfb38bd90, 0xffb38f0b, 0x00000003, // zsub_zsub1_then_zsub
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR2SubClassMask[] = {
  0x00000000, 0x00000000, 0x00003d90, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub0_zsub1
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub2_zsub3
};

static const uint32_t QQ_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000220, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04410000, 0x00441010, 0x00000000, // qsub0_qsub1
  0x00000000, 0x00000000, 0x04c20000, 0x004c3020, 0x00000000, // qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // qsub2_qsub3
  0x00000000, 0x00000000, 0x99082c80, 0x91908102, 0x00000002, // zsub_zsub1_then_zsub
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000240, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04c20000, 0x004c3020, 0x00000000, // qsub0_qsub1
  0x00000000, 0x00000000, 0x04840000, 0x004c6040, 0x00000000, // qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub2_qsub3
  0x00000000, 0x00000000, 0xbb103d00, 0xb3b18203, 0x00000003, // zsub_zsub1_then_zsub
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR2_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00002c80, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x99080000, 0x91908102, 0x00000002, // zsub0_zsub1
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub2_zsub3
};

static const uint32_t ZPR2_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00003d00, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // zsub0_zsub1
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub2_zsub3
};

static const uint32_t QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000200, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x04400000, 0x00441000, 0x00000000, // qsub0_qsub1
  0x00000000, 0x00000000, 0x04800000, 0x004c2000, 0x00000000, // qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, // qsub2_qsub3
  0x00000000, 0x00000000, 0x99002c00, 0x91908002, 0x00000002, // zsub_zsub1_then_zsub
  0x00000000, 0x00000000, 0xba000000, 0xb3b10003, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00002c00, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x99000000, 0x91908002, 0x00000002, // zsub0_zsub1
  0x00000000, 0x00000000, 0xba000000, 0xb3b10003, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub2_zsub3
};

static const uint32_t ZPR2_with_zsub0_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00002800, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x90000000, 0x91000002, 0x00000002, // zsub0_zsub1
  0x00000000, 0x00000000, 0xa0000000, 0xb2000003, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xe4000000, 0x00000003, // zsub2_zsub3
};

static const uint32_t ZPR2_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00003000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0xa0000000, 0xb2000003, 0x00000003, // zsub0_zsub1
  0x00000000, 0x00000000, 0x40000000, 0xe4000003, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0x48000000, 0x00000003, // zsub2_zsub3
};

static const uint32_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00002000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x80000000, 0x90000002, 0x00000002, // zsub0_zsub1
  0x00000000, 0x00000000, 0x00000000, 0xa0000003, 0x00000003, // zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000003, // zsub2_zsub3
};

static const uint32_t QQQSubClassMask[] = {
  0x00000000, 0x00000000, 0x04c74000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0xfb388000, 0xffb38f0b, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR3SubClassMask[] = {
  0x00000000, 0x00000000, 0xfb388000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t QQQ_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04410000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00441010, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c3020, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0x99080000, 0x91908102, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04c20000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c3020, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0xbb100000, 0xb3b18203, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04840000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0xfa200000, 0xf7b30403, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR3_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x99080000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91908100, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0xbb100000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0xfa200000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04400000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00441000, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x004c2000, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0x99000000, 0x91908002, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04800000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x004c2000, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0xba000000, 0xb3b10003, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x99000000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91908000, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0xba000000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x04000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00440000, 0x00000000, // qsub0_qsub1_qsub2
  0x00000000, 0x00000000, 0x00000000, 0x00480000, 0x00000000, // qsub1_qsub2_qsub3
  0x00000000, 0x00000000, 0x98000000, 0x91900002, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, // zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x98000000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91900000, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub0_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x90000000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91000000, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xb2000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0xa0000000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb2000000, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xe4000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x40000000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xe4000000, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0x48000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x80000000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x90000000, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0xa0000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xa0000000, 0x00000003, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x00000002, // zsub0_zsub1_zsub2
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, // zsub1_zsub2_zsub3
};

static const uint32_t QQQQSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x004c70f4, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR4SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xffb38f08, 0x00000003, 
};

static const uint32_t QQQQ_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00441010, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91908100, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x004c3020, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x004c6040, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub3_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00484080, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR4_with_dsub_in_FPR64_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x91908100, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xb3b18200, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xf7b30400, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub3_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xffa20800, 0x00000003, 
};

static const uint32_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00441000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91908000, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x004c2000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00484000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x91908000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xb3b10000, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xf7a20000, 0x00000003, 
};

static const uint32_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00440000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91900000, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00480000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x91900000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xb3a00000, 0x00000003, 
};

static const uint32_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00400000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x91800000, 0x00000002, // zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x91800000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub0_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x91000000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xb2000000, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xe4000000, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub3_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x48000000, 0x00000003, 
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x90000000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0xa0000000, 0x00000003, 
};

static const uint32_t ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000003, 
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x00000002, 
};

static const uint32_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 
};

static const uint32_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 15, 0,
  /* 2 */ 17, 19, 0,
  /* 5 */ 21, 22, 23, 24, 0,
  /* 10 */ 15, 16, 18, 47, 0,
  /* 15 */ 1, 26, 29, 32, 35, 39, 43, 48, 54, 60, 0,
  /* 26 */ 2, 3, 4, 5, 6, 36, 40, 44, 49, 55, 61, 0,
  /* 38 */ 7, 27, 30, 33, 37, 41, 45, 50, 56, 62, 0,
  /* 49 */ 14, 28, 31, 34, 38, 42, 46, 51, 57, 63, 0,
  /* 60 */ 10, 11, 12, 13, 20, 52, 58, 64, 0,
  /* 69 */ 82, 0,
  /* 71 */ 72, 85, 0,
  /* 74 */ 87, 0,
  /* 76 */ 90, 92, 0,
  /* 79 */ 89, 91, 93, 0,
  /* 83 */ 67, 69, 73, 80, 86, 95, 0,
  /* 90 */ 75, 77, 88, 97, 0,
  /* 95 */ 66, 68, 70, 71, 79, 81, 83, 94, 98, 0,
  /* 105 */ 74, 76, 78, 84, 96, 99, 0,
};

static const TargetRegisterClass *const FPR16_loSuperclasses[] = {
  &AArch64::FPR16RegClass,
  nullptr
};

static const TargetRegisterClass *const PPR_3bSuperclasses[] = {
  &AArch64::PPRRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR32Superclasses[] = {
  &AArch64::GPR32allRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR32spSuperclasses[] = {
  &AArch64::GPR32allRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR32commonSuperclasses[] = {
  &AArch64::GPR32allRegClass,
  &AArch64::GPR32RegClass,
  &AArch64::GPR32spRegClass,
  nullptr
};

static const TargetRegisterClass *const FPR32_with_hsub_in_FPR16_loSuperclasses[] = {
  &AArch64::FPR32RegClass,
  nullptr
};

static const TargetRegisterClass *const GPR32argSuperclasses[] = {
  &AArch64::GPR32allRegClass,
  &AArch64::GPR32RegClass,
  &AArch64::GPR32spRegClass,
  &AArch64::GPR32commonRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR32sponlySuperclasses[] = {
  &AArch64::GPR32allRegClass,
  &AArch64::GPR32spRegClass,
  nullptr
};

static const TargetRegisterClass *const WSeqPairsClass_with_subo32_in_GPR32commonSuperclasses[] = {
  &AArch64::WSeqPairsClassRegClass,
  nullptr
};

static const TargetRegisterClass *const WSeqPairsClass_with_sube32_in_GPR32argSuperclasses[] = {
  &AArch64::WSeqPairsClassRegClass,
  &AArch64::WSeqPairsClass_with_subo32_in_GPR32commonRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64Superclasses[] = {
  &AArch64::GPR64allRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64spSuperclasses[] = {
  &AArch64::GPR64allRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64commonSuperclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64noipSuperclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64common_and_GPR64noipSuperclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  &AArch64::GPR64commonRegClass,
  &AArch64::GPR64noipRegClass,
  nullptr
};

static const TargetRegisterClass *const tcGPR64Superclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  &AArch64::GPR64commonRegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64noip_and_tcGPR64Superclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  &AArch64::GPR64commonRegClass,
  &AArch64::GPR64noipRegClass,
  &AArch64::GPR64common_and_GPR64noipRegClass,
  &AArch64::tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const FPR64_loSuperclasses[] = {
  &AArch64::FPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64argSuperclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  &AArch64::GPR64commonRegClass,
  &AArch64::GPR64noipRegClass,
  &AArch64::GPR64common_and_GPR64noipRegClass,
  &AArch64::tcGPR64RegClass,
  &AArch64::GPR64noip_and_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const rtcGPR64Superclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64RegClass,
  &AArch64::GPR64spRegClass,
  &AArch64::GPR64commonRegClass,
  &AArch64::tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GPR64sponlySuperclasses[] = {
  &AArch64::GPR64allRegClass,
  &AArch64::GPR64spRegClass,
  nullptr
};

static const TargetRegisterClass *const DD_with_dsub0_in_FPR64_loSuperclasses[] = {
  &AArch64::DDRegClass,
  nullptr
};

static const TargetRegisterClass *const DD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDRegClass,
  nullptr
};

static const TargetRegisterClass *const DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDRegClass,
  &AArch64::DD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DD_with_dsub1_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_subo64_in_GPR64commonSuperclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_subo64_in_GPR64noipSuperclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_sube64_in_GPR64noipSuperclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_sube64_in_tcGPR64Superclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64Superclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_subo64_in_tcGPR64Superclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64Superclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_sub_32_in_GPR32argSuperclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const XSeqPairsClass_with_sube64_in_rtcGPR64Superclasses[] = {
  &AArch64::XSeqPairsClassRegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
  &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
  &AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClass,
  nullptr
};

static const TargetRegisterClass *const FPR128_loSuperclasses[] = {
  &AArch64::FPR128RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR_4bSuperclasses[] = {
  &AArch64::ZPRRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR_3bSuperclasses[] = {
  &AArch64::ZPRRegClass,
  &AArch64::ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub0_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  &AArch64::DDD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub1_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  &AArch64::DDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub2_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDRegClass,
  &AArch64::DDD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub0_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub3_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub3_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub3_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses[] = {
  &AArch64::DDDDRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub3_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
  &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
  nullptr
};

static const TargetRegisterClass *const QQ_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::QQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  nullptr
};

static const TargetRegisterClass *const QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQRegClass,
  &AArch64::QQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQ_with_qsub1_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  &AArch64::ZPR2_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_zsub0_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  &AArch64::ZPR2_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  &AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR2RegClass,
  &AArch64::ZPR2_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR2_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR2_with_zsub1_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  &AArch64::QQQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQQ_with_qsub1_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  &AArch64::QQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQ_with_qsub2_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQRegClass,
  &AArch64::QQQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub0_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR3RegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR3_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub3_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_loSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub3_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub3_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub3_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses[] = {
  &AArch64::QQQQRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub3_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
  &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub0_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub3_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
  nullptr
};

static const TargetRegisterClass *const ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses[] = {
  &AArch64::ZPR4RegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
  &AArch64::ZPR4_with_zsub0_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub3_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
  &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
  nullptr
};


static inline unsigned GPR32AltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR32GetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WZR, AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR32RegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR32AltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GPR32spAltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR32spGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WSP, AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR32spRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR32spAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GPR32commonAltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR32commonGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR32commonRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR32commonAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GPR64AltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR64GetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::XZR, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR64RegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR64AltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GPR64spAltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR64spGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::SP, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR64spRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR64spAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GPR64commonAltOrderSelect(const MachineFunction &MF) { return 1; }

static ArrayRef<MCPhysReg> GPR64commonGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7 };
  const MCRegisterClass &MCR = AArch64MCRegisterClasses[AArch64::GPR64commonRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GPR64commonAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

namespace AArch64 {   // Register class instances
  extern const TargetRegisterClass FPR8RegClass = {
    &AArch64MCRegisterClasses[FPR8RegClassID],
    FPR8SubClassMask,
    SuperRegIdxSeqs + 15,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPR16RegClass = {
    &AArch64MCRegisterClasses[FPR16RegClassID],
    FPR16SubClassMask,
    SuperRegIdxSeqs + 38,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPR16_loRegClass = {
    &AArch64MCRegisterClasses[FPR16_loRegClassID],
    FPR16_loSubClassMask,
    SuperRegIdxSeqs + 38,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR16_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PPRRegClass = {
    &AArch64MCRegisterClasses[PPRRegClassID],
    PPRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass PPR_3bRegClass = {
    &AArch64MCRegisterClasses[PPR_3bRegClassID],
    PPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    PPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR32allRegClass = {
    &AArch64MCRegisterClasses[GPR32allRegClassID],
    GPR32allSubClassMask,
    SuperRegIdxSeqs + 10,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPR32RegClass = {
    &AArch64MCRegisterClasses[FPR32RegClassID],
    FPR32SubClassMask,
    SuperRegIdxSeqs + 49,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR32RegClass = {
    &AArch64MCRegisterClasses[GPR32RegClassID],
    GPR32SubClassMask,
    SuperRegIdxSeqs + 10,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR32Superclasses,
    GPR32GetRawAllocationOrder
  };

  extern const TargetRegisterClass GPR32spRegClass = {
    &AArch64MCRegisterClasses[GPR32spRegClassID],
    GPR32spSubClassMask,
    SuperRegIdxSeqs + 10,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR32spSuperclasses,
    GPR32spGetRawAllocationOrder
  };

  extern const TargetRegisterClass GPR32commonRegClass = {
    &AArch64MCRegisterClasses[GPR32commonRegClassID],
    GPR32commonSubClassMask,
    SuperRegIdxSeqs + 10,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR32commonSuperclasses,
    GPR32commonGetRawAllocationOrder
  };

  extern const TargetRegisterClass FPR32_with_hsub_in_FPR16_loRegClass = {
    &AArch64MCRegisterClasses[FPR32_with_hsub_in_FPR16_loRegClassID],
    FPR32_with_hsub_in_FPR16_loSubClassMask,
    SuperRegIdxSeqs + 49,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR32_with_hsub_in_FPR16_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR32argRegClass = {
    &AArch64MCRegisterClasses[GPR32argRegClassID],
    GPR32argSubClassMask,
    SuperRegIdxSeqs + 10,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR32argSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &AArch64MCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR32sponlyRegClass = {
    &AArch64MCRegisterClasses[GPR32sponlyRegClassID],
    GPR32sponlySubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR32sponlySuperclasses,
    nullptr
  };

  extern const TargetRegisterClass WSeqPairsClassRegClass = {
    &AArch64MCRegisterClasses[WSeqPairsClassRegClassID],
    WSeqPairsClassSubClassMask,
    SuperRegIdxSeqs + 69,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass WSeqPairsClass_with_subo32_in_GPR32commonRegClass = {
    &AArch64MCRegisterClasses[WSeqPairsClass_with_subo32_in_GPR32commonRegClassID],
    WSeqPairsClass_with_subo32_in_GPR32commonSubClassMask,
    SuperRegIdxSeqs + 69,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    WSeqPairsClass_with_subo32_in_GPR32commonSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass WSeqPairsClass_with_sube32_in_GPR32argRegClass = {
    &AArch64MCRegisterClasses[WSeqPairsClass_with_sube32_in_GPR32argRegClassID],
    WSeqPairsClass_with_sube32_in_GPR32argSubClassMask,
    SuperRegIdxSeqs + 69,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    WSeqPairsClass_with_sube32_in_GPR32argSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64allRegClass = {
    &AArch64MCRegisterClasses[GPR64allRegClassID],
    GPR64allSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPR64RegClass = {
    &AArch64MCRegisterClasses[FPR64RegClassID],
    FPR64SubClassMask,
    SuperRegIdxSeqs + 26,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64RegClass = {
    &AArch64MCRegisterClasses[GPR64RegClassID],
    GPR64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64Superclasses,
    GPR64GetRawAllocationOrder
  };

  extern const TargetRegisterClass GPR64spRegClass = {
    &AArch64MCRegisterClasses[GPR64spRegClassID],
    GPR64spSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64spSuperclasses,
    GPR64spGetRawAllocationOrder
  };

  extern const TargetRegisterClass GPR64commonRegClass = {
    &AArch64MCRegisterClasses[GPR64commonRegClassID],
    GPR64commonSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64commonSuperclasses,
    GPR64commonGetRawAllocationOrder
  };

  extern const TargetRegisterClass GPR64noipRegClass = {
    &AArch64MCRegisterClasses[GPR64noipRegClassID],
    GPR64noipSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64noipSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64common_and_GPR64noipRegClass = {
    &AArch64MCRegisterClasses[GPR64common_and_GPR64noipRegClassID],
    GPR64common_and_GPR64noipSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64common_and_GPR64noipSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass tcGPR64RegClass = {
    &AArch64MCRegisterClasses[tcGPR64RegClassID],
    tcGPR64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64noip_and_tcGPR64RegClass = {
    &AArch64MCRegisterClasses[GPR64noip_and_tcGPR64RegClassID],
    GPR64noip_and_tcGPR64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64noip_and_tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass FPR64_loRegClass = {
    &AArch64MCRegisterClasses[FPR64_loRegClassID],
    FPR64_loSubClassMask,
    SuperRegIdxSeqs + 26,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64argRegClass = {
    &AArch64MCRegisterClasses[GPR64argRegClassID],
    GPR64argSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64argSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass rtcGPR64RegClass = {
    &AArch64MCRegisterClasses[rtcGPR64RegClassID],
    rtcGPR64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    rtcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GPR64sponlyRegClass = {
    &AArch64MCRegisterClasses[GPR64sponlyRegClassID],
    GPR64sponlySubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000008),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR64sponlySuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDRegClass = {
    &AArch64MCRegisterClasses[DDRegClassID],
    DDSubClassMask,
    SuperRegIdxSeqs + 95,
    LaneBitmask(0x0000000000000081),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DD_with_dsub0_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DD_with_dsub0_in_FPR64_loRegClassID],
    DD_with_dsub0_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 95,
    LaneBitmask(0x0000000000000081),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DD_with_dsub0_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DD_with_dsub1_in_FPR64_loRegClassID],
    DD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 95,
    LaneBitmask(0x0000000000000081),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClassRegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClassRegClassID],
    XSeqPairsClassSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID],
    DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 95,
    LaneBitmask(0x0000000000000081),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64commonRegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_subo64_in_GPR64commonRegClassID],
    XSeqPairsClass_with_subo64_in_GPR64commonSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_subo64_in_GPR64commonSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64noipRegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_subo64_in_GPR64noipRegClassID],
    XSeqPairsClass_with_subo64_in_GPR64noipSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_subo64_in_GPR64noipSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_GPR64noipRegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_sube64_in_GPR64noipRegClassID],
    XSeqPairsClass_with_sube64_in_GPR64noipSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_sube64_in_GPR64noipSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_tcGPR64RegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_sube64_in_tcGPR64RegClassID],
    XSeqPairsClass_with_sube64_in_tcGPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_sube64_in_tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClassID],
    XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_tcGPR64RegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_subo64_in_tcGPR64RegClassID],
    XSeqPairsClass_with_subo64_in_tcGPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_subo64_in_tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID],
    XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_sub_32_in_GPR32argRegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_sub_32_in_GPR32argRegClassID],
    XSeqPairsClass_with_sub_32_in_GPR32argSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_sub_32_in_GPR32argSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass XSeqPairsClass_with_sube64_in_rtcGPR64RegClass = {
    &AArch64MCRegisterClasses[XSeqPairsClass_with_sube64_in_rtcGPR64RegClassID],
    XSeqPairsClass_with_sube64_in_rtcGPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000002008),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    XSeqPairsClass_with_sube64_in_rtcGPR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass FPR128RegClass = {
    &AArch64MCRegisterClasses[FPR128RegClassID],
    FPR128SubClassMask,
    SuperRegIdxSeqs + 60,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZPRRegClass = {
    &AArch64MCRegisterClasses[ZPRRegClassID],
    ZPRSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000041),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FPR128_loRegClass = {
    &AArch64MCRegisterClasses[FPR128_loRegClassID],
    FPR128_loSubClassMask,
    SuperRegIdxSeqs + 60,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR_4bRegClassID],
    ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000041),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR_3bRegClassID],
    ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000041),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDRegClass = {
    &AArch64MCRegisterClasses[DDDRegClassID],
    DDDSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub0_in_FPR64_loRegClassID],
    DDD_with_dsub0_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub0_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub1_in_FPR64_loRegClassID],
    DDD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub2_in_FPR64_loRegClassID],
    DDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID],
    DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID],
    DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID],
    DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 83,
    LaneBitmask(0x0000000000000281),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDDRegClass = {
    &AArch64MCRegisterClasses[DDDDRegClassID],
    DDDDSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub0_in_FPR64_loRegClassID],
    DDDD_with_dsub0_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub0_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub1_in_FPR64_loRegClassID],
    DDDD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub2_in_FPR64_loRegClassID],
    DDDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub3_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub3_in_FPR64_loRegClassID],
    DDDD_with_dsub3_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub3_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID],
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID],
    DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID],
    DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID],
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID],
    DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID],
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 71,
    LaneBitmask(0x0000000000000381),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQRegClass = {
    &AArch64MCRegisterClasses[QQRegClassID],
    QQSubClassMask,
    SuperRegIdxSeqs + 105,
    LaneBitmask(0x0000000000000401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2RegClass = {
    &AArch64MCRegisterClasses[ZPR2RegClassID],
    ZPR2SubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QQ_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[QQ_with_dsub_in_FPR64_loRegClassID],
    QQ_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 105,
    LaneBitmask(0x0000000000000401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQ_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQ_with_qsub1_in_FPR128_loRegClassID],
    QQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 105,
    LaneBitmask(0x0000000000000401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_dsub_in_FPR64_loRegClassID],
    ZPR2_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_zsub1_in_ZPR_4bRegClassID],
    ZPR2_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClassID],
    QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 105,
    LaneBitmask(0x0000000000000401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClassID],
    ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_zsub0_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_zsub0_in_ZPR_3bRegClassID],
    ZPR2_with_zsub0_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_zsub0_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_zsub1_in_ZPR_3bRegClassID],
    ZPR2_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClassID],
    ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 79,
    LaneBitmask(0x000000000000C041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQRegClass = {
    &AArch64MCRegisterClasses[QQQRegClassID],
    QQQSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3RegClass = {
    &AArch64MCRegisterClasses[ZPR3RegClassID],
    ZPR3SubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_dsub_in_FPR64_loRegClassID],
    QQQ_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_qsub1_in_FPR128_loRegClassID],
    QQQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_dsub_in_FPR64_loRegClassID],
    ZPR3_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub1_in_ZPR_4bRegClassID],
    ZPR3_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub2_in_ZPR_4bRegClassID],
    ZPR3_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClassID],
    QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClassID],
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID],
    ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 90,
    LaneBitmask(0x0000000000001401),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID],
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub0_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub0_in_ZPR_3bRegClassID],
    ZPR3_with_zsub0_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub0_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub1_in_ZPR_3bRegClassID],
    ZPR3_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub2_in_ZPR_3bRegClassID],
    ZPR3_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClassID],
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID],
    ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID],
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 76,
    LaneBitmask(0x00000000000CC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQRegClass = {
    &AArch64MCRegisterClasses[QQQQRegClassID],
    QQQQSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4RegClass = {
    &AArch64MCRegisterClasses[ZPR4RegClassID],
    ZPR4SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_dsub_in_FPR64_loRegClassID],
    QQQQ_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub1_in_FPR128_loRegClassID],
    QQQQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub3_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub3_in_FPR128_loRegClassID],
    QQQQ_with_qsub3_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub3_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_loRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_loRegClassID],
    ZPR4_with_dsub_in_FPR64_loSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_4bRegClassID],
    ZPR4_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub2_in_ZPR_4bRegClassID],
    ZPR4_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub3_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub3_in_ZPR_4bRegClassID],
    ZPR4_with_zsub3_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub3_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClassID],
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID],
    QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID],
    ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID],
    ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID],
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID],
    QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID],
    ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass = {
    &AArch64MCRegisterClasses[QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID],
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loSubClassMask,
    SuperRegIdxSeqs + 74,
    LaneBitmask(0x0000000000001C01),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub0_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub0_in_ZPR_3bRegClassID],
    ZPR4_with_zsub0_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub0_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_3bRegClassID],
    ZPR4_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub2_in_ZPR_3bRegClassID],
    ZPR4_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub3_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub3_in_ZPR_3bRegClassID],
    ZPR4_with_zsub3_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub3_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID],
    ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID],
    ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID],
    ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClass = {
    &AArch64MCRegisterClasses[ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID],
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x00000000000FC041),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bSuperclasses,
    nullptr
  };

} // end namespace AArch64

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &AArch64::FPR8RegClass,
    &AArch64::FPR16RegClass,
    &AArch64::FPR16_loRegClass,
    &AArch64::PPRRegClass,
    &AArch64::PPR_3bRegClass,
    &AArch64::GPR32allRegClass,
    &AArch64::FPR32RegClass,
    &AArch64::GPR32RegClass,
    &AArch64::GPR32spRegClass,
    &AArch64::GPR32commonRegClass,
    &AArch64::FPR32_with_hsub_in_FPR16_loRegClass,
    &AArch64::GPR32argRegClass,
    &AArch64::CCRRegClass,
    &AArch64::GPR32sponlyRegClass,
    &AArch64::WSeqPairsClassRegClass,
    &AArch64::WSeqPairsClass_with_subo32_in_GPR32commonRegClass,
    &AArch64::WSeqPairsClass_with_sube32_in_GPR32argRegClass,
    &AArch64::GPR64allRegClass,
    &AArch64::FPR64RegClass,
    &AArch64::GPR64RegClass,
    &AArch64::GPR64spRegClass,
    &AArch64::GPR64commonRegClass,
    &AArch64::GPR64noipRegClass,
    &AArch64::GPR64common_and_GPR64noipRegClass,
    &AArch64::tcGPR64RegClass,
    &AArch64::GPR64noip_and_tcGPR64RegClass,
    &AArch64::FPR64_loRegClass,
    &AArch64::GPR64argRegClass,
    &AArch64::rtcGPR64RegClass,
    &AArch64::GPR64sponlyRegClass,
    &AArch64::DDRegClass,
    &AArch64::DD_with_dsub0_in_FPR64_loRegClass,
    &AArch64::DD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::XSeqPairsClassRegClass,
    &AArch64::DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::XSeqPairsClass_with_subo64_in_GPR64commonRegClass,
    &AArch64::XSeqPairsClass_with_subo64_in_GPR64noipRegClass,
    &AArch64::XSeqPairsClass_with_sube64_in_GPR64noipRegClass,
    &AArch64::XSeqPairsClass_with_sube64_in_tcGPR64RegClass,
    &AArch64::XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64RegClass,
    &AArch64::XSeqPairsClass_with_subo64_in_tcGPR64RegClass,
    &AArch64::XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64RegClass,
    &AArch64::XSeqPairsClass_with_sub_32_in_GPR32argRegClass,
    &AArch64::XSeqPairsClass_with_sube64_in_rtcGPR64RegClass,
    &AArch64::FPR128RegClass,
    &AArch64::ZPRRegClass,
    &AArch64::FPR128_loRegClass,
    &AArch64::ZPR_4bRegClass,
    &AArch64::ZPR_3bRegClass,
    &AArch64::DDDRegClass,
    &AArch64::DDD_with_dsub0_in_FPR64_loRegClass,
    &AArch64::DDD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::DDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDDDRegClass,
    &AArch64::DDDD_with_dsub0_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub3_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
    &AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClass,
    &AArch64::QQRegClass,
    &AArch64::ZPR2RegClass,
    &AArch64::QQ_with_dsub_in_FPR64_loRegClass,
    &AArch64::QQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::ZPR2_with_dsub_in_FPR64_loRegClass,
    &AArch64::ZPR2_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::ZPR2_with_zsub0_in_ZPR_3bRegClass,
    &AArch64::ZPR2_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::QQQRegClass,
    &AArch64::ZPR3RegClass,
    &AArch64::QQQ_with_dsub_in_FPR64_loRegClass,
    &AArch64::QQQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::QQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::ZPR3_with_dsub_in_FPR64_loRegClass,
    &AArch64::ZPR3_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::ZPR3_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::ZPR3_with_zsub0_in_ZPR_3bRegClass,
    &AArch64::ZPR3_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::ZPR3_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::QQQQRegClass,
    &AArch64::ZPR4RegClass,
    &AArch64::QQQQ_with_dsub_in_FPR64_loRegClass,
    &AArch64::QQQQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::QQQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::QQQQ_with_qsub3_in_FPR128_loRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_loRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub3_in_ZPR_4bRegClass,
    &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClass,
    &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
    &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClass,
    &AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
    &AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClass,
    &AArch64::ZPR4_with_zsub0_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub3_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
    &AArch64::ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc AArch64RegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, true },
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
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
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
unsigned AArch64GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[99] = {
    0, 0, 0, 1, 2, 3, 0, 0, 0, 0, 4, 5, 6, 0, 0, 0, 0, 0, 1, 0, 0, 7, 8, 9, 0, 0, 1, 1, 0, 3, 3, 0, 2, 2, 0, 4, 4, 4, 0, 6, 6, 6, 0, 5, 5, 5, 0, 0, 7, 7, 7, 7, 0, 0, 9, 9, 9, 9, 0, 0, 8, 8, 8, 8, 0, 0, 0, 1, 1, 2, 10, 10, 10, 0, 0, 4, 4, 5, 4, 4, 5, 0, 11, 10, 11, 11, 10, 10, 0, 0, 7, 7, 8, 7, 7, 7, 7, 8, 8, 
  };
  static const uint8_t Rows[12][99] = {
    { AArch64::bsub, AArch64::dsub, AArch64::dsub0, AArch64::dsub1, AArch64::dsub2, 0, AArch64::hsub, 0, 0, AArch64::qsub0, AArch64::qsub1, AArch64::qsub2, 0, AArch64::ssub, AArch64::sub_32, AArch64::sub_32, 0, AArch64::subo64_then_sub_32, 0, AArch64::zsub, AArch64::zsub0, AArch64::zsub1, AArch64::zsub2, 0, AArch64::zsub_hi, AArch64::dsub1_then_bsub, AArch64::dsub1_then_hsub, AArch64::dsub1_then_ssub, 0, 0, 0, AArch64::dsub2_then_bsub, AArch64::dsub2_then_hsub, AArch64::dsub2_then_ssub, AArch64::qsub1_then_bsub, AArch64::qsub1_then_dsub, AArch64::qsub1_then_hsub, AArch64::qsub1_then_ssub, 0, 0, 0, 0, AArch64::qsub2_then_bsub, AArch64::qsub2_then_dsub, AArch64::qsub2_then_hsub, AArch64::qsub2_then_ssub, 0, AArch64::zsub1_then_bsub, AArch64::zsub1_then_dsub, AArch64::zsub1_then_hsub, AArch64::zsub1_then_ssub, AArch64::zsub1_then_zsub, AArch64::zsub1_then_zsub_hi, 0, 0, 0, 0, 0, 0, AArch64::zsub2_then_bsub, AArch64::zsub2_then_dsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, AArch64::zsub2_then_zsub, AArch64::zsub2_then_zsub_hi, AArch64::dsub0_dsub1, 0, AArch64::dsub1_dsub2, 0, 0, AArch64::dsub_qsub1_then_dsub, 0, AArch64::dsub_qsub1_then_dsub_qsub2_then_dsub, AArch64::qsub0_qsub1, 0, AArch64::qsub1_qsub2, 0, 0, AArch64::qsub1_then_dsub_qsub2_then_dsub, 0, 0, 0, AArch64::dsub_zsub1_then_dsub, AArch64::zsub_zsub1_then_zsub, 0, AArch64::dsub_zsub1_then_dsub_zsub2_then_dsub, 0, AArch64::zsub_zsub1_then_zsub_zsub2_then_zsub, AArch64::zsub0_zsub1, 0, AArch64::zsub1_zsub2, 0, 0, AArch64::zsub1_then_dsub_zsub2_then_dsub, 0, AArch64::zsub1_then_zsub_zsub2_then_zsub, 0, 0, 0, },
    { AArch64::dsub1_then_bsub, 0, AArch64::dsub1, AArch64::dsub2, AArch64::dsub3, 0, AArch64::dsub1_then_hsub, 0, 0, 0, 0, 0, 0, AArch64::dsub1_then_ssub, AArch64::subo64_then_sub_32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::dsub2_then_bsub, AArch64::dsub2_then_hsub, AArch64::dsub2_then_ssub, 0, 0, 0, AArch64::dsub3_then_bsub, AArch64::dsub3_then_hsub, AArch64::dsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::dsub1_dsub2, 0, AArch64::dsub2_dsub3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::dsub2_then_bsub, 0, AArch64::dsub2, AArch64::dsub3, 0, 0, AArch64::dsub2_then_hsub, 0, 0, 0, 0, 0, 0, AArch64::dsub2_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::dsub3_then_bsub, AArch64::dsub3_then_hsub, AArch64::dsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::dsub3_then_bsub, 0, 0, 0, 0, 0, AArch64::dsub3_then_hsub, 0, 0, 0, 0, 0, 0, AArch64::dsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::qsub1_then_bsub, AArch64::qsub1_then_dsub, AArch64::qsub1_then_dsub, AArch64::qsub2_then_dsub, AArch64::qsub3_then_dsub, 0, AArch64::qsub1_then_hsub, 0, 0, AArch64::qsub1, AArch64::qsub2, AArch64::qsub3, 0, AArch64::qsub1_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::qsub2_then_bsub, AArch64::qsub2_then_hsub, AArch64::qsub2_then_ssub, 0, 0, 0, AArch64::qsub3_then_bsub, AArch64::qsub3_then_hsub, AArch64::qsub3_then_ssub, AArch64::qsub2_then_bsub, AArch64::qsub2_then_dsub, AArch64::qsub2_then_hsub, AArch64::qsub2_then_ssub, 0, 0, 0, 0, AArch64::qsub3_then_bsub, AArch64::qsub3_then_dsub, AArch64::qsub3_then_hsub, AArch64::qsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::qsub1_then_dsub_qsub2_then_dsub, 0, AArch64::qsub2_then_dsub_qsub3_then_dsub, 0, 0, AArch64::qsub1_then_dsub_qsub2_then_dsub, 0, AArch64::qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub, AArch64::qsub1_qsub2, 0, AArch64::qsub2_qsub3, 0, 0, AArch64::qsub2_then_dsub_qsub3_then_dsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::qsub2_then_bsub, AArch64::qsub2_then_dsub, AArch64::qsub2_then_dsub, AArch64::qsub3_then_dsub, 0, 0, AArch64::qsub2_then_hsub, 0, 0, AArch64::qsub2, AArch64::qsub3, 0, 0, AArch64::qsub2_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::qsub3_then_bsub, AArch64::qsub3_then_hsub, AArch64::qsub3_then_ssub, 0, 0, 0, 0, 0, 0, AArch64::qsub3_then_bsub, AArch64::qsub3_then_dsub, AArch64::qsub3_then_hsub, AArch64::qsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::qsub2_then_dsub_qsub3_then_dsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::qsub3_then_bsub, AArch64::qsub3_then_dsub, 0, 0, 0, 0, AArch64::qsub3_then_hsub, 0, 0, 0, 0, 0, 0, AArch64::qsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::zsub1_then_bsub, AArch64::zsub1_then_dsub, AArch64::zsub1_then_dsub, AArch64::zsub2_then_dsub, AArch64::zsub3_then_dsub, 0, AArch64::zsub1_then_hsub, 0, 0, AArch64::zsub1_then_zsub, AArch64::zsub2_then_zsub, AArch64::zsub3_then_zsub, 0, AArch64::zsub1_then_ssub, 0, 0, 0, 0, 0, AArch64::zsub1_then_zsub, AArch64::zsub1, AArch64::zsub2, AArch64::zsub3, 0, AArch64::zsub1_then_zsub_hi, AArch64::zsub2_then_bsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, 0, 0, 0, AArch64::zsub3_then_bsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, AArch64::zsub2_then_bsub, AArch64::zsub2_then_dsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, 0, 0, 0, 0, AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, 0, AArch64::zsub2_then_bsub, AArch64::zsub2_then_dsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, AArch64::zsub2_then_zsub, AArch64::zsub2_then_zsub_hi, 0, 0, 0, 0, 0, 0, AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, AArch64::zsub3_then_zsub, AArch64::zsub3_then_zsub_hi, AArch64::zsub1_then_dsub_zsub2_then_dsub, 0, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, 0, AArch64::zsub1_then_dsub_zsub2_then_dsub, 0, AArch64::zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub, AArch64::zsub1_then_zsub_zsub2_then_zsub, 0, AArch64::zsub2_then_zsub_zsub3_then_zsub, 0, 0, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, 0, 0, AArch64::zsub1_then_dsub_zsub2_then_dsub, AArch64::zsub1_then_zsub_zsub2_then_zsub, 0, AArch64::zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub, 0, AArch64::zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub, AArch64::zsub1_zsub2, 0, AArch64::zsub2_zsub3, 0, 0, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, AArch64::zsub2_then_zsub_zsub3_then_zsub, 0, 0, 0, },
    { AArch64::zsub2_then_bsub, AArch64::zsub2_then_dsub, AArch64::zsub2_then_dsub, AArch64::zsub3_then_dsub, 0, 0, AArch64::zsub2_then_hsub, 0, 0, AArch64::zsub2_then_zsub, AArch64::zsub3_then_zsub, 0, 0, AArch64::zsub2_then_ssub, 0, 0, 0, 0, 0, AArch64::zsub2_then_zsub, AArch64::zsub2, AArch64::zsub3, 0, 0, AArch64::zsub2_then_zsub_hi, AArch64::zsub3_then_bsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, 0, 0, 0, 0, 0, 0, AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, AArch64::zsub3_then_zsub, AArch64::zsub3_then_zsub_hi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::zsub2_then_dsub_zsub3_then_dsub, AArch64::zsub2_then_zsub_zsub3_then_zsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, 0, 0, 0, 0, AArch64::zsub3_then_hsub, 0, 0, 0, 0, 0, 0, AArch64::zsub3_then_ssub, 0, 0, 0, 0, 0, AArch64::zsub3_then_zsub, 0, 0, 0, 0, AArch64::zsub3_then_zsub_hi, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::bsub, AArch64::dsub, AArch64::dsub, AArch64::qsub1_then_dsub, AArch64::qsub2_then_dsub, AArch64::qsub3_then_dsub, AArch64::hsub, 0, 0, AArch64::zsub, AArch64::zsub1_then_zsub, AArch64::zsub2_then_zsub, AArch64::zsub3_then_zsub, AArch64::ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::qsub1_then_bsub, AArch64::qsub1_then_hsub, AArch64::qsub1_then_ssub, AArch64::qsub3_then_bsub, AArch64::qsub3_then_hsub, AArch64::qsub3_then_ssub, AArch64::qsub2_then_bsub, AArch64::qsub2_then_hsub, AArch64::qsub2_then_ssub, AArch64::zsub1_then_bsub, AArch64::zsub1_then_dsub, AArch64::zsub1_then_hsub, AArch64::zsub1_then_ssub, AArch64::zsub3_then_bsub, AArch64::zsub3_then_dsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, AArch64::zsub2_then_bsub, AArch64::zsub2_then_dsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::dsub_qsub1_then_dsub, AArch64::dsub_qsub1_then_dsub_qsub2_then_dsub, AArch64::qsub1_then_dsub_qsub2_then_dsub, AArch64::qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub, AArch64::qsub2_then_dsub_qsub3_then_dsub, AArch64::dsub_zsub1_then_dsub, AArch64::dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub, AArch64::dsub_zsub1_then_dsub_zsub2_then_dsub, AArch64::zsub_zsub1_then_zsub, AArch64::zsub_zsub1_then_zsub_zsub2_then_zsub, AArch64::zsub1_then_zsub_zsub2_then_zsub, AArch64::zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub, AArch64::zsub2_then_zsub_zsub3_then_zsub, AArch64::zsub1_then_dsub_zsub2_then_dsub, AArch64::zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { AArch64::bsub, 0, AArch64::dsub, AArch64::zsub1_then_dsub, AArch64::zsub2_then_dsub, AArch64::zsub3_then_dsub, AArch64::hsub, 0, 0, 0, 0, 0, 0, AArch64::ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::zsub1_then_bsub, AArch64::zsub1_then_hsub, AArch64::zsub1_then_ssub, AArch64::zsub3_then_bsub, AArch64::zsub3_then_hsub, AArch64::zsub3_then_ssub, AArch64::zsub2_then_bsub, AArch64::zsub2_then_hsub, AArch64::zsub2_then_ssub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AArch64::dsub_zsub1_then_dsub, AArch64::dsub_zsub1_then_dsub_zsub2_then_dsub, AArch64::zsub1_then_dsub_zsub2_then_dsub, AArch64::zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub, AArch64::zsub2_then_dsub_zsub3_then_dsub, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 99);
  --IdxB; assert(IdxB < 99);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  7 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  9 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  8 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 10 }, { LaneBitmask::getNone(), 0 },   // Sequence 12
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 12 }, { LaneBitmask::getNone(), 0 },   // Sequence 14
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 11 }, { LaneBitmask::getNone(), 0 },   // Sequence 16
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 18
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 20
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 22
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000040),  9 }, { LaneBitmask::getNone(), 0 },   // Sequence 24
    { LaneBitmask(0x0000000000000001), 18 }, { LaneBitmask(0x0000000000000040), 13 }, { LaneBitmask::getNone(), 0 },   // Sequence 27
    { LaneBitmask(0x0000000000000001), 16 }, { LaneBitmask(0x0000000000000040), 11 }, { LaneBitmask::getNone(), 0 },   // Sequence 30
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 },   // Sequence 33
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 13 }, { LaneBitmask::getNone(), 0 },   // Sequence 35
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 14 }, { LaneBitmask::getNone(), 0 },   // Sequence 37
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 15 }, { LaneBitmask::getNone(), 0 },   // Sequence 39
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 16 }, { LaneBitmask::getNone(), 0 },   // Sequence 41
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 17 }, { LaneBitmask::getNone(), 0 },   // Sequence 43
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 18 }, { LaneBitmask::getNone(), 0 },   // Sequence 45
    { LaneBitmask(0xFFFFFFFFFFFFFFFF), 19 }, { LaneBitmask::getNone(), 0 },   // Sequence 47
    { LaneBitmask(0x0000000000000001),  7 }, { LaneBitmask(0x0000000000000080),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 49
    { LaneBitmask(0x0000000000000001),  7 }, { LaneBitmask(0x0000000000000080),  2 }, { LaneBitmask(0x0000000000000200), 63 }, { LaneBitmask::getNone(), 0 },   // Sequence 52
    { LaneBitmask(0x0000000000000001),  9 }, { LaneBitmask(0x0000000000000080),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 56
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000080),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 59
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000380),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 62
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000280),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 65
    { LaneBitmask(0x0000000000000001), 10 }, { LaneBitmask(0x0000000000000400),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 68
    { LaneBitmask(0x0000000000000001), 10 }, { LaneBitmask(0x0000000000000400),  2 }, { LaneBitmask(0x0000000000001000), 63 }, { LaneBitmask::getNone(), 0 },   // Sequence 71
    { LaneBitmask(0x0000000000000001), 12 }, { LaneBitmask(0x0000000000000400),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 75
    { LaneBitmask(0x0000000000000001), 10 }, { LaneBitmask(0x0000000000000080),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 78
    { LaneBitmask(0x0000000000000001), 10 }, { LaneBitmask(0x0000000000000080),  5 }, { LaneBitmask(0x0000000000000200),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 81
    { LaneBitmask(0x0000000000000001), 12 }, { LaneBitmask(0x0000000000000080),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 85
    { LaneBitmask(0x0000000000000010), 63 }, { LaneBitmask(0x0000000000000020),  8 }, { LaneBitmask::getNone(), 0 },   // Sequence 88
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000080),  7 }, { LaneBitmask::getNone(), 0 },   // Sequence 91
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000400),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 94
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000080),  7 }, { LaneBitmask(0x0000000000000100),  8 }, { LaneBitmask(0x0000000000000200),  9 }, { LaneBitmask::getNone(), 0 },   // Sequence 97
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000080),  7 }, { LaneBitmask(0x0000000000000200),  9 }, { LaneBitmask::getNone(), 0 },   // Sequence 102
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000400),  4 }, { LaneBitmask(0x0000000000000800),  5 }, { LaneBitmask(0x0000000000001000),  6 }, { LaneBitmask::getNone(), 0 },   // Sequence 106
    { LaneBitmask(0x0000000000000001),  0 }, { LaneBitmask(0x0000000000000400),  4 }, { LaneBitmask(0x0000000000001000),  6 }, { LaneBitmask::getNone(), 0 },   // Sequence 111
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000040),  9 }, { LaneBitmask(0x000000000000C000),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 115
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000040),  9 }, { LaneBitmask(0x000000000000C000),  4 }, { LaneBitmask(0x00000000000C0000), 62 }, { LaneBitmask::getNone(), 0 },   // Sequence 119
    { LaneBitmask(0x0000000000000001), 18 }, { LaneBitmask(0x0000000000000040), 13 }, { LaneBitmask(0x000000000000C000),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 124
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000080), 11 }, { LaneBitmask::getNone(), 0 },   // Sequence 128
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000080), 11 }, { LaneBitmask(0x0000000000000200),  7 }, { LaneBitmask::getNone(), 0 },   // Sequence 131
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000400),  8 }, { LaneBitmask::getNone(), 0 },   // Sequence 135
    { LaneBitmask(0x0000000000000001), 14 }, { LaneBitmask(0x0000000000000400),  8 }, { LaneBitmask(0x0000000000001000),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 138
    { LaneBitmask(0x0000000000000001), 18 }, { LaneBitmask(0x0000000000000080),  9 }, { LaneBitmask::getNone(), 0 },   // Sequence 142
    { LaneBitmask(0x0000000000000001), 18 }, { LaneBitmask(0x0000000000000400),  6 }, { LaneBitmask::getNone(), 0 }  // Sequence 145
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to bsub
    &LaneMaskComposeSequences[0], // to dsub
    &LaneMaskComposeSequences[0], // to dsub0
    &LaneMaskComposeSequences[2], // to dsub1
    &LaneMaskComposeSequences[4], // to dsub2
    &LaneMaskComposeSequences[6], // to dsub3
    &LaneMaskComposeSequences[0], // to hsub
    &LaneMaskComposeSequences[8], // to qhisub
    &LaneMaskComposeSequences[10], // to qsub
    &LaneMaskComposeSequences[0], // to qsub0
    &LaneMaskComposeSequences[12], // to qsub1
    &LaneMaskComposeSequences[14], // to qsub2
    &LaneMaskComposeSequences[16], // to qsub3
    &LaneMaskComposeSequences[0], // to ssub
    &LaneMaskComposeSequences[18], // to sub_32
    &LaneMaskComposeSequences[20], // to sube32
    &LaneMaskComposeSequences[0], // to sube64
    &LaneMaskComposeSequences[22], // to subo32
    &LaneMaskComposeSequences[12], // to subo64
    &LaneMaskComposeSequences[0], // to zsub
    &LaneMaskComposeSequences[0], // to zsub0
    &LaneMaskComposeSequences[24], // to zsub1
    &LaneMaskComposeSequences[27], // to zsub2
    &LaneMaskComposeSequences[30], // to zsub3
    &LaneMaskComposeSequences[33], // to zsub_hi
    &LaneMaskComposeSequences[2], // to dsub1_then_bsub
    &LaneMaskComposeSequences[2], // to dsub1_then_hsub
    &LaneMaskComposeSequences[2], // to dsub1_then_ssub
    &LaneMaskComposeSequences[6], // to dsub3_then_bsub
    &LaneMaskComposeSequences[6], // to dsub3_then_hsub
    &LaneMaskComposeSequences[6], // to dsub3_then_ssub
    &LaneMaskComposeSequences[4], // to dsub2_then_bsub
    &LaneMaskComposeSequences[4], // to dsub2_then_hsub
    &LaneMaskComposeSequences[4], // to dsub2_then_ssub
    &LaneMaskComposeSequences[12], // to qsub1_then_bsub
    &LaneMaskComposeSequences[12], // to qsub1_then_dsub
    &LaneMaskComposeSequences[12], // to qsub1_then_hsub
    &LaneMaskComposeSequences[12], // to qsub1_then_ssub
    &LaneMaskComposeSequences[16], // to qsub3_then_bsub
    &LaneMaskComposeSequences[16], // to qsub3_then_dsub
    &LaneMaskComposeSequences[16], // to qsub3_then_hsub
    &LaneMaskComposeSequences[16], // to qsub3_then_ssub
    &LaneMaskComposeSequences[14], // to qsub2_then_bsub
    &LaneMaskComposeSequences[14], // to qsub2_then_dsub
    &LaneMaskComposeSequences[14], // to qsub2_then_hsub
    &LaneMaskComposeSequences[14], // to qsub2_then_ssub
    &LaneMaskComposeSequences[35], // to subo64_then_sub_32
    &LaneMaskComposeSequences[37], // to zsub1_then_bsub
    &LaneMaskComposeSequences[37], // to zsub1_then_dsub
    &LaneMaskComposeSequences[37], // to zsub1_then_hsub
    &LaneMaskComposeSequences[37], // to zsub1_then_ssub
    &LaneMaskComposeSequences[37], // to zsub1_then_zsub
    &LaneMaskComposeSequences[39], // to zsub1_then_zsub_hi
    &LaneMaskComposeSequences[41], // to zsub3_then_bsub
    &LaneMaskComposeSequences[41], // to zsub3_then_dsub
    &LaneMaskComposeSequences[41], // to zsub3_then_hsub
    &LaneMaskComposeSequences[41], // to zsub3_then_ssub
    &LaneMaskComposeSequences[41], // to zsub3_then_zsub
    &LaneMaskComposeSequences[43], // to zsub3_then_zsub_hi
    &LaneMaskComposeSequences[45], // to zsub2_then_bsub
    &LaneMaskComposeSequences[45], // to zsub2_then_dsub
    &LaneMaskComposeSequences[45], // to zsub2_then_hsub
    &LaneMaskComposeSequences[45], // to zsub2_then_ssub
    &LaneMaskComposeSequences[45], // to zsub2_then_zsub
    &LaneMaskComposeSequences[47], // to zsub2_then_zsub_hi
    &LaneMaskComposeSequences[0], // to dsub0_dsub1
    &LaneMaskComposeSequences[0], // to dsub0_dsub1_dsub2
    &LaneMaskComposeSequences[49], // to dsub1_dsub2
    &LaneMaskComposeSequences[52], // to dsub1_dsub2_dsub3
    &LaneMaskComposeSequences[56], // to dsub2_dsub3
    &LaneMaskComposeSequences[59], // to dsub_qsub1_then_dsub
    &LaneMaskComposeSequences[62], // to dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
    &LaneMaskComposeSequences[65], // to dsub_qsub1_then_dsub_qsub2_then_dsub
    &LaneMaskComposeSequences[0], // to qsub0_qsub1
    &LaneMaskComposeSequences[0], // to qsub0_qsub1_qsub2
    &LaneMaskComposeSequences[68], // to qsub1_qsub2
    &LaneMaskComposeSequences[71], // to qsub1_qsub2_qsub3
    &LaneMaskComposeSequences[75], // to qsub2_qsub3
    &LaneMaskComposeSequences[78], // to qsub1_then_dsub_qsub2_then_dsub
    &LaneMaskComposeSequences[81], // to qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
    &LaneMaskComposeSequences[85], // to qsub2_then_dsub_qsub3_then_dsub
    &LaneMaskComposeSequences[88], // to sub_32_subo64_then_sub_32
    &LaneMaskComposeSequences[91], // to dsub_zsub1_then_dsub
    &LaneMaskComposeSequences[94], // to zsub_zsub1_then_zsub
    &LaneMaskComposeSequences[97], // to dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
    &LaneMaskComposeSequences[102], // to dsub_zsub1_then_dsub_zsub2_then_dsub
    &LaneMaskComposeSequences[106], // to zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
    &LaneMaskComposeSequences[111], // to zsub_zsub1_then_zsub_zsub2_then_zsub
    &LaneMaskComposeSequences[0], // to zsub0_zsub1
    &LaneMaskComposeSequences[0], // to zsub0_zsub1_zsub2
    &LaneMaskComposeSequences[115], // to zsub1_zsub2
    &LaneMaskComposeSequences[119], // to zsub1_zsub2_zsub3
    &LaneMaskComposeSequences[124], // to zsub2_zsub3
    &LaneMaskComposeSequences[128], // to zsub1_then_dsub_zsub2_then_dsub
    &LaneMaskComposeSequences[131], // to zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
    &LaneMaskComposeSequences[135], // to zsub1_then_zsub_zsub2_then_zsub
    &LaneMaskComposeSequences[138], // to zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
    &LaneMaskComposeSequences[142], // to zsub2_then_dsub_zsub3_then_dsub
    &LaneMaskComposeSequences[145] // to zsub2_then_zsub_zsub3_then_zsub
  };

LaneBitmask AArch64GenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 99 && "Subregister index out of bounds");
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

LaneBitmask AArch64GenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 99 && "Subregister index out of bounds");
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

const TargetRegisterClass *AArch64GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[130][99] = {
    {	// FPR8
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR16
      2,	// bsub -> FPR16
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR16_lo
      3,	// bsub -> FPR16_lo
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// PPR
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// PPR_3b
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32all
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR32
      7,	// bsub -> FPR32
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      7,	// hsub -> FPR32
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32sp
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32common
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR32_with_hsub_in_FPR16_lo
      11,	// bsub -> FPR32_with_hsub_in_FPR16_lo
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      11,	// hsub -> FPR32_with_hsub_in_FPR16_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32arg
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// CCR
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR32sponly
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// WSeqPairsClass
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      15,	// sube32 -> WSeqPairsClass
      0,	// sube64
      15,	// subo32 -> WSeqPairsClass
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// WSeqPairsClass_with_subo32_in_GPR32common
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      16,	// sube32 -> WSeqPairsClass_with_subo32_in_GPR32common
      0,	// sube64
      16,	// subo32 -> WSeqPairsClass_with_subo32_in_GPR32common
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// WSeqPairsClass_with_sube32_in_GPR32arg
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      0,	// sub_32
      17,	// sube32 -> WSeqPairsClass_with_sube32_in_GPR32arg
      0,	// sube64
      17,	// subo32 -> WSeqPairsClass_with_sube32_in_GPR32arg
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64all
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      18,	// sub_32 -> GPR64all
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR64
      19,	// bsub -> FPR64
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      19,	// hsub -> FPR64
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      19,	// ssub -> FPR64
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      20,	// sub_32 -> GPR64
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64sp
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      21,	// sub_32 -> GPR64sp
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64common
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      22,	// sub_32 -> GPR64common
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64noip
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      23,	// sub_32 -> GPR64noip
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64common_and_GPR64noip
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      24,	// sub_32 -> GPR64common_and_GPR64noip
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      25,	// sub_32 -> tcGPR64
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64noip_and_tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      26,	// sub_32 -> GPR64noip_and_tcGPR64
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR64_lo
      27,	// bsub -> FPR64_lo
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      27,	// hsub -> FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      27,	// ssub -> FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64arg
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      28,	// sub_32 -> GPR64arg
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// rtcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      29,	// sub_32 -> rtcGPR64
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// GPR64sponly
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      30,	// sub_32 -> GPR64sponly
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DD
      31,	// bsub -> DD
      0,	// dsub
      31,	// dsub0 -> DD
      31,	// dsub1 -> DD
      0,	// dsub2
      0,	// dsub3
      31,	// hsub -> DD
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      31,	// ssub -> DD
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      31,	// dsub1_then_bsub -> DD
      31,	// dsub1_then_hsub -> DD
      31,	// dsub1_then_ssub -> DD
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DD_with_dsub0_in_FPR64_lo
      32,	// bsub -> DD_with_dsub0_in_FPR64_lo
      0,	// dsub
      32,	// dsub0 -> DD_with_dsub0_in_FPR64_lo
      32,	// dsub1 -> DD_with_dsub0_in_FPR64_lo
      0,	// dsub2
      0,	// dsub3
      32,	// hsub -> DD_with_dsub0_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      32,	// ssub -> DD_with_dsub0_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      32,	// dsub1_then_bsub -> DD_with_dsub0_in_FPR64_lo
      32,	// dsub1_then_hsub -> DD_with_dsub0_in_FPR64_lo
      32,	// dsub1_then_ssub -> DD_with_dsub0_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DD_with_dsub1_in_FPR64_lo
      33,	// bsub -> DD_with_dsub1_in_FPR64_lo
      0,	// dsub
      33,	// dsub0 -> DD_with_dsub1_in_FPR64_lo
      33,	// dsub1 -> DD_with_dsub1_in_FPR64_lo
      0,	// dsub2
      0,	// dsub3
      33,	// hsub -> DD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      33,	// ssub -> DD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      33,	// dsub1_then_bsub -> DD_with_dsub1_in_FPR64_lo
      33,	// dsub1_then_hsub -> DD_with_dsub1_in_FPR64_lo
      33,	// dsub1_then_ssub -> DD_with_dsub1_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      34,	// sub_32 -> XSeqPairsClass
      0,	// sube32
      34,	// sube64 -> XSeqPairsClass
      0,	// subo32
      34,	// subo64 -> XSeqPairsClass
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      34,	// subo64_then_sub_32 -> XSeqPairsClass
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      34,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      35,	// bsub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      0,	// dsub
      35,	// dsub0 -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      35,	// dsub1 -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      0,	// dsub2
      0,	// dsub3
      35,	// hsub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      35,	// ssub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      35,	// dsub1_then_bsub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      35,	// dsub1_then_hsub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      35,	// dsub1_then_ssub -> DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_subo64_in_GPR64common
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      36,	// sub_32 -> XSeqPairsClass_with_subo64_in_GPR64common
      0,	// sube32
      36,	// sube64 -> XSeqPairsClass_with_subo64_in_GPR64common
      0,	// subo32
      36,	// subo64 -> XSeqPairsClass_with_subo64_in_GPR64common
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      36,	// subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64common
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      36,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64common
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      37,	// sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// sube32
      37,	// sube64 -> XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// subo32
      37,	// subo64 -> XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      37,	// subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      37,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      38,	// sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// sube32
      38,	// sube64 -> XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// subo32
      38,	// subo64 -> XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      38,	// subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      38,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      39,	// sub_32 -> XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// sube32
      39,	// sube64 -> XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// subo32
      39,	// subo64 -> XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      39,	// subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      39,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_tcGPR64
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      40,	// sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// sube32
      40,	// sube64 -> XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// subo32
      40,	// subo64 -> XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      40,	// subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      40,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      41,	// sub_32 -> XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// sube32
      41,	// sube64 -> XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// subo32
      41,	// subo64 -> XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      41,	// subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      41,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_tcGPR64
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      42,	// sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// sube32
      42,	// sube64 -> XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// subo32
      42,	// subo64 -> XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      42,	// subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      42,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      43,	// sub_32 -> XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// sube32
      43,	// sube64 -> XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// subo32
      43,	// subo64 -> XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      43,	// subo64_then_sub_32 -> XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      43,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_sub_32_in_GPR32arg
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// bsub
      0,	// dsub
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      0,	// hsub
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      0,	// ssub
      44,	// sub_32 -> XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// sube32
      44,	// sube64 -> XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// subo32
      44,	// subo64 -> XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      44,	// subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      44,	// sub_32_subo64_then_sub_32 -> XSeqPairsClass_with_sube64_in_rtcGPR64
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR128
      45,	// bsub -> FPR128
      45,	// dsub -> FPR128
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      45,	// hsub -> FPR128
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      45,	// ssub -> FPR128
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR
      46,	// bsub -> ZPR
      46,	// dsub -> ZPR
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      46,	// hsub -> ZPR
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      46,	// ssub -> ZPR
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      46,	// zsub -> ZPR
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      46,	// zsub_hi -> ZPR
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// FPR128_lo
      47,	// bsub -> FPR128_lo
      47,	// dsub -> FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      47,	// hsub -> FPR128_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      47,	// ssub -> FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR_4b
      48,	// bsub -> ZPR_4b
      48,	// dsub -> ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      48,	// hsub -> ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      48,	// ssub -> ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      48,	// zsub -> ZPR_4b
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      48,	// zsub_hi -> ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR_3b
      49,	// bsub -> ZPR_3b
      49,	// dsub -> ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      49,	// hsub -> ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      49,	// ssub -> ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      49,	// zsub -> ZPR_3b
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      49,	// zsub_hi -> ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD
      50,	// bsub -> DDD
      0,	// dsub
      50,	// dsub0 -> DDD
      50,	// dsub1 -> DDD
      50,	// dsub2 -> DDD
      0,	// dsub3
      50,	// hsub -> DDD
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      50,	// ssub -> DDD
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      50,	// dsub1_then_bsub -> DDD
      50,	// dsub1_then_hsub -> DDD
      50,	// dsub1_then_ssub -> DDD
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      50,	// dsub2_then_bsub -> DDD
      50,	// dsub2_then_hsub -> DDD
      50,	// dsub2_then_ssub -> DDD
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      50,	// dsub0_dsub1 -> DDD
      0,	// dsub0_dsub1_dsub2
      50,	// dsub1_dsub2 -> DDD
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub0_in_FPR64_lo
      51,	// bsub -> DDD_with_dsub0_in_FPR64_lo
      0,	// dsub
      51,	// dsub0 -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub1 -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub2 -> DDD_with_dsub0_in_FPR64_lo
      0,	// dsub3
      51,	// hsub -> DDD_with_dsub0_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      51,	// ssub -> DDD_with_dsub0_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      51,	// dsub1_then_bsub -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub1_then_hsub -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub1_then_ssub -> DDD_with_dsub0_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      51,	// dsub2_then_bsub -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub2_then_hsub -> DDD_with_dsub0_in_FPR64_lo
      51,	// dsub2_then_ssub -> DDD_with_dsub0_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      51,	// dsub0_dsub1 -> DDD_with_dsub0_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      51,	// dsub1_dsub2 -> DDD_with_dsub0_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub1_in_FPR64_lo
      52,	// bsub -> DDD_with_dsub1_in_FPR64_lo
      0,	// dsub
      52,	// dsub0 -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub1 -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub2 -> DDD_with_dsub1_in_FPR64_lo
      0,	// dsub3
      52,	// hsub -> DDD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      52,	// ssub -> DDD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      52,	// dsub1_then_bsub -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub1_then_hsub -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub1_then_ssub -> DDD_with_dsub1_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      52,	// dsub2_then_bsub -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub2_then_hsub -> DDD_with_dsub1_in_FPR64_lo
      52,	// dsub2_then_ssub -> DDD_with_dsub1_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      52,	// dsub0_dsub1 -> DDD_with_dsub1_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      52,	// dsub1_dsub2 -> DDD_with_dsub1_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub2_in_FPR64_lo
      53,	// bsub -> DDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      53,	// dsub0 -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub1 -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub2 -> DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3
      53,	// hsub -> DDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      53,	// ssub -> DDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      53,	// dsub1_then_bsub -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub1_then_hsub -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub1_then_ssub -> DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      53,	// dsub2_then_bsub -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub2_then_hsub -> DDD_with_dsub2_in_FPR64_lo
      53,	// dsub2_then_ssub -> DDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      53,	// dsub0_dsub1 -> DDD_with_dsub2_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      53,	// dsub1_dsub2 -> DDD_with_dsub2_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// dsub
      54,	// dsub0 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub1 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub2 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// dsub3
      54,	// hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      54,	// ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      54,	// dsub1_then_bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub1_then_hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub1_then_ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      54,	// dsub2_then_bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub2_then_hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      54,	// dsub2_then_ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      54,	// dsub0_dsub1 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      54,	// dsub1_dsub2 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// bsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      55,	// dsub0 -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub1 -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub2 -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3
      55,	// hsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      55,	// ssub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      55,	// dsub1_then_bsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub1_then_hsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub1_then_ssub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      55,	// dsub2_then_bsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub2_then_hsub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      55,	// dsub2_then_ssub -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      55,	// dsub0_dsub1 -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      55,	// dsub1_dsub2 -> DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      56,	// dsub0 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub1 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub2 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3
      56,	// hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      56,	// ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      56,	// dsub1_then_bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub1_then_hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub1_then_ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      56,	// dsub2_then_bsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub2_then_hsub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      56,	// dsub2_then_ssub -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      56,	// dsub0_dsub1 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub0_dsub1_dsub2
      56,	// dsub1_dsub2 -> DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD
      57,	// bsub -> DDDD
      0,	// dsub
      57,	// dsub0 -> DDDD
      57,	// dsub1 -> DDDD
      57,	// dsub2 -> DDDD
      57,	// dsub3 -> DDDD
      57,	// hsub -> DDDD
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      57,	// ssub -> DDDD
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      57,	// dsub1_then_bsub -> DDDD
      57,	// dsub1_then_hsub -> DDDD
      57,	// dsub1_then_ssub -> DDDD
      57,	// dsub3_then_bsub -> DDDD
      57,	// dsub3_then_hsub -> DDDD
      57,	// dsub3_then_ssub -> DDDD
      57,	// dsub2_then_bsub -> DDDD
      57,	// dsub2_then_hsub -> DDDD
      57,	// dsub2_then_ssub -> DDDD
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      57,	// dsub0_dsub1 -> DDDD
      57,	// dsub0_dsub1_dsub2 -> DDDD
      57,	// dsub1_dsub2 -> DDDD
      57,	// dsub1_dsub2_dsub3 -> DDDD
      57,	// dsub2_dsub3 -> DDDD
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub0_in_FPR64_lo
      58,	// bsub -> DDDD_with_dsub0_in_FPR64_lo
      0,	// dsub
      58,	// dsub0 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub1 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub2 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub3 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// hsub -> DDDD_with_dsub0_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      58,	// ssub -> DDDD_with_dsub0_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      58,	// dsub1_then_bsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub1_then_hsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub1_then_ssub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub3_then_bsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub3_then_hsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub3_then_ssub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub2_then_bsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub2_then_hsub -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub2_then_ssub -> DDDD_with_dsub0_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      58,	// dsub0_dsub1 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo
      58,	// dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub1_in_FPR64_lo
      59,	// bsub -> DDDD_with_dsub1_in_FPR64_lo
      0,	// dsub
      59,	// dsub0 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub1 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub2 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub3 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// hsub -> DDDD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      59,	// ssub -> DDDD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      59,	// dsub1_then_bsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub1_then_hsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub1_then_ssub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub3_then_bsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub3_then_hsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub3_then_ssub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub2_then_bsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub2_then_hsub -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub2_then_ssub -> DDDD_with_dsub1_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      59,	// dsub0_dsub1 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo
      59,	// dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub2_in_FPR64_lo
      60,	// bsub -> DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      60,	// dsub0 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub1 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub2 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub3 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// hsub -> DDDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      60,	// ssub -> DDDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      60,	// dsub1_then_bsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub1_then_hsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub1_then_ssub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub3_then_bsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub3_then_hsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub3_then_ssub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub2_then_bsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub2_then_hsub -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub2_then_ssub -> DDDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      60,	// dsub0_dsub1 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub1_dsub2 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub2_in_FPR64_lo
      60,	// dsub2_dsub3 -> DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub3_in_FPR64_lo
      61,	// bsub -> DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub
      61,	// dsub0 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub1 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub2 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub3 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// hsub -> DDDD_with_dsub3_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      61,	// ssub -> DDDD_with_dsub3_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      61,	// dsub1_then_bsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub1_then_hsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub1_then_ssub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub3_then_bsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub3_then_hsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub3_then_ssub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub2_then_bsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub2_then_hsub -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub2_then_ssub -> DDDD_with_dsub3_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      61,	// dsub0_dsub1 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub1_dsub2 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub3_in_FPR64_lo
      61,	// dsub2_dsub3 -> DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      0,	// dsub
      62,	// dsub0 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      62,	// ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      62,	// dsub1_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub1_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub1_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub3_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub3_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub3_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub2_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub2_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub2_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      62,	// dsub0_dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      62,	// dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      63,	// dsub0 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub1 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      63,	// ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      63,	// dsub1_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub1_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub1_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub3_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub3_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub3_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub2_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub2_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub2_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      63,	// dsub0_dsub1 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      63,	// dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// bsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub
      64,	// dsub0 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub1 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub2 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub3 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// hsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      64,	// ssub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      64,	// dsub1_then_bsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub1_then_hsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub1_then_ssub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub3_then_bsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub3_then_hsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub3_then_ssub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub2_then_bsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub2_then_hsub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub2_then_ssub -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      64,	// dsub0_dsub1 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub1_dsub2 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      64,	// dsub2_dsub3 -> DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub
      65,	// dsub0 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      65,	// ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      65,	// dsub1_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub1_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub1_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub3_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub3_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub3_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub2_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub2_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub2_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      65,	// dsub0_dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      65,	// dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub
      66,	// dsub0 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub1 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      66,	// ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      66,	// dsub1_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub1_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub1_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub3_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub3_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub3_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub2_then_bsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub2_then_hsub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub2_then_ssub -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      66,	// dsub0_dsub1 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub1_dsub2 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      66,	// dsub2_dsub3 -> DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub
      67,	// dsub0 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      67,	// ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      67,	// dsub1_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub1_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub1_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub3_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub3_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub3_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub2_then_bsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub2_then_hsub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub2_then_ssub -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      67,	// dsub0_dsub1 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub0_dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub1_dsub2 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub1_dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      67,	// dsub2_dsub3 -> DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQ
      68,	// bsub -> QQ
      68,	// dsub -> QQ
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      68,	// hsub -> QQ
      0,	// qhisub
      0,	// qsub
      68,	// qsub0 -> QQ
      68,	// qsub1 -> QQ
      0,	// qsub2
      0,	// qsub3
      68,	// ssub -> QQ
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      68,	// qsub1_then_bsub -> QQ
      68,	// qsub1_then_dsub -> QQ
      68,	// qsub1_then_hsub -> QQ
      68,	// qsub1_then_ssub -> QQ
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      68,	// dsub_qsub1_then_dsub -> QQ
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2
      69,	// bsub -> ZPR2
      69,	// dsub -> ZPR2
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      69,	// hsub -> ZPR2
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      69,	// ssub -> ZPR2
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      69,	// zsub -> ZPR2
      69,	// zsub0 -> ZPR2
      69,	// zsub1 -> ZPR2
      0,	// zsub2
      0,	// zsub3
      69,	// zsub_hi -> ZPR2
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      69,	// zsub1_then_bsub -> ZPR2
      69,	// zsub1_then_dsub -> ZPR2
      69,	// zsub1_then_hsub -> ZPR2
      69,	// zsub1_then_ssub -> ZPR2
      69,	// zsub1_then_zsub -> ZPR2
      69,	// zsub1_then_zsub_hi -> ZPR2
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      69,	// dsub_zsub1_then_dsub -> ZPR2
      69,	// zsub_zsub1_then_zsub -> ZPR2
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQ_with_dsub_in_FPR64_lo
      70,	// bsub -> QQ_with_dsub_in_FPR64_lo
      70,	// dsub -> QQ_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      70,	// hsub -> QQ_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      70,	// qsub0 -> QQ_with_dsub_in_FPR64_lo
      70,	// qsub1 -> QQ_with_dsub_in_FPR64_lo
      0,	// qsub2
      0,	// qsub3
      70,	// ssub -> QQ_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      70,	// qsub1_then_bsub -> QQ_with_dsub_in_FPR64_lo
      70,	// qsub1_then_dsub -> QQ_with_dsub_in_FPR64_lo
      70,	// qsub1_then_hsub -> QQ_with_dsub_in_FPR64_lo
      70,	// qsub1_then_ssub -> QQ_with_dsub_in_FPR64_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      70,	// dsub_qsub1_then_dsub -> QQ_with_dsub_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQ_with_qsub1_in_FPR128_lo
      71,	// bsub -> QQ_with_qsub1_in_FPR128_lo
      71,	// dsub -> QQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      71,	// hsub -> QQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      71,	// qsub0 -> QQ_with_qsub1_in_FPR128_lo
      71,	// qsub1 -> QQ_with_qsub1_in_FPR128_lo
      0,	// qsub2
      0,	// qsub3
      71,	// ssub -> QQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      71,	// qsub1_then_bsub -> QQ_with_qsub1_in_FPR128_lo
      71,	// qsub1_then_dsub -> QQ_with_qsub1_in_FPR128_lo
      71,	// qsub1_then_hsub -> QQ_with_qsub1_in_FPR128_lo
      71,	// qsub1_then_ssub -> QQ_with_qsub1_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      71,	// dsub_qsub1_then_dsub -> QQ_with_qsub1_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_dsub_in_FPR64_lo
      72,	// bsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// dsub -> ZPR2_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      72,	// hsub -> ZPR2_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      72,	// ssub -> ZPR2_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      72,	// zsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub0 -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1 -> ZPR2_with_dsub_in_FPR64_lo
      0,	// zsub2
      0,	// zsub3
      72,	// zsub_hi -> ZPR2_with_dsub_in_FPR64_lo
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      72,	// zsub1_then_bsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1_then_hsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1_then_ssub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub1_then_zsub_hi -> ZPR2_with_dsub_in_FPR64_lo
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      72,	// dsub_zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo
      72,	// zsub_zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_zsub1_in_ZPR_4b
      73,	// bsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// dsub -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      73,	// hsub -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      73,	// ssub -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      73,	// zsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub0 -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1 -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// zsub2
      0,	// zsub3
      73,	// zsub_hi -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      73,	// zsub1_then_bsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1_then_dsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1_then_hsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1_then_ssub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1_then_zsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub1_then_zsub_hi -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      73,	// dsub_zsub1_then_dsub -> ZPR2_with_zsub1_in_ZPR_4b
      73,	// zsub_zsub1_then_zsub -> ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// bsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// dsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      74,	// hsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      74,	// qsub0 -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// qsub1 -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// qsub2
      0,	// qsub3
      74,	// ssub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      74,	// qsub1_then_bsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// qsub1_then_dsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// qsub1_then_hsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      74,	// qsub1_then_ssub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      74,	// dsub_qsub1_then_dsub -> QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// bsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      75,	// hsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      75,	// ssub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      75,	// zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub0 -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1 -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// zsub2
      0,	// zsub3
      75,	// zsub_hi -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      75,	// zsub1_then_bsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1_then_hsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1_then_ssub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub1_then_zsub_hi -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      75,	// dsub_zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      75,	// zsub_zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_zsub0_in_ZPR_3b
      76,	// bsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// dsub -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      76,	// hsub -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      76,	// ssub -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      76,	// zsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub0 -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1 -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// zsub2
      0,	// zsub3
      76,	// zsub_hi -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      76,	// zsub1_then_bsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1_then_dsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1_then_hsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1_then_ssub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1_then_zsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub1_then_zsub_hi -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      76,	// dsub_zsub1_then_dsub -> ZPR2_with_zsub0_in_ZPR_3b
      76,	// zsub_zsub1_then_zsub -> ZPR2_with_zsub0_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_zsub1_in_ZPR_3b
      77,	// bsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// dsub -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      77,	// hsub -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      77,	// ssub -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      77,	// zsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub0 -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1 -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// zsub2
      0,	// zsub3
      77,	// zsub_hi -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      77,	// zsub1_then_bsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1_then_dsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1_then_hsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1_then_ssub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1_then_zsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub1_then_zsub_hi -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      77,	// dsub_zsub1_then_dsub -> ZPR2_with_zsub1_in_ZPR_3b
      77,	// zsub_zsub1_then_zsub -> ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// bsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      78,	// hsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      78,	// ssub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      78,	// zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub0 -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1 -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// zsub2
      0,	// zsub3
      78,	// zsub_hi -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      78,	// zsub1_then_bsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1_then_hsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1_then_ssub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub1_then_zsub_hi -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      78,	// dsub_zsub1_then_dsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      78,	// zsub_zsub1_then_zsub -> ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ
      79,	// bsub -> QQQ
      79,	// dsub -> QQQ
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      79,	// hsub -> QQQ
      0,	// qhisub
      0,	// qsub
      79,	// qsub0 -> QQQ
      79,	// qsub1 -> QQQ
      79,	// qsub2 -> QQQ
      0,	// qsub3
      79,	// ssub -> QQQ
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      79,	// qsub1_then_bsub -> QQQ
      79,	// qsub1_then_dsub -> QQQ
      79,	// qsub1_then_hsub -> QQQ
      79,	// qsub1_then_ssub -> QQQ
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      79,	// qsub2_then_bsub -> QQQ
      79,	// qsub2_then_dsub -> QQQ
      79,	// qsub2_then_hsub -> QQQ
      79,	// qsub2_then_ssub -> QQQ
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      79,	// dsub_qsub1_then_dsub -> QQQ
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      79,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ
      79,	// qsub0_qsub1 -> QQQ
      0,	// qsub0_qsub1_qsub2
      79,	// qsub1_qsub2 -> QQQ
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      79,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3
      80,	// bsub -> ZPR3
      80,	// dsub -> ZPR3
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      80,	// hsub -> ZPR3
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      80,	// ssub -> ZPR3
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      80,	// zsub -> ZPR3
      80,	// zsub0 -> ZPR3
      80,	// zsub1 -> ZPR3
      80,	// zsub2 -> ZPR3
      0,	// zsub3
      80,	// zsub_hi -> ZPR3
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      80,	// zsub1_then_bsub -> ZPR3
      80,	// zsub1_then_dsub -> ZPR3
      80,	// zsub1_then_hsub -> ZPR3
      80,	// zsub1_then_ssub -> ZPR3
      80,	// zsub1_then_zsub -> ZPR3
      80,	// zsub1_then_zsub_hi -> ZPR3
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      80,	// zsub2_then_bsub -> ZPR3
      80,	// zsub2_then_dsub -> ZPR3
      80,	// zsub2_then_hsub -> ZPR3
      80,	// zsub2_then_ssub -> ZPR3
      80,	// zsub2_then_zsub -> ZPR3
      80,	// zsub2_then_zsub_hi -> ZPR3
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      80,	// dsub_zsub1_then_dsub -> ZPR3
      80,	// zsub_zsub1_then_zsub -> ZPR3
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      80,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      80,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3
      80,	// zsub0_zsub1 -> ZPR3
      0,	// zsub0_zsub1_zsub2
      80,	// zsub1_zsub2 -> ZPR3
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      80,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      80,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_dsub_in_FPR64_lo
      81,	// bsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// dsub -> QQQ_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      81,	// hsub -> QQQ_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      81,	// qsub0 -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub1 -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub2 -> QQQ_with_dsub_in_FPR64_lo
      0,	// qsub3
      81,	// ssub -> QQQ_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      81,	// qsub1_then_bsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub1_then_hsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub1_then_ssub -> QQQ_with_dsub_in_FPR64_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      81,	// qsub2_then_bsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub2_then_hsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub2_then_ssub -> QQQ_with_dsub_in_FPR64_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      81,	// dsub_qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      81,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo
      81,	// qsub0_qsub1 -> QQQ_with_dsub_in_FPR64_lo
      0,	// qsub0_qsub1_qsub2
      81,	// qsub1_qsub2 -> QQQ_with_dsub_in_FPR64_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      81,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_qsub1_in_FPR128_lo
      82,	// bsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// dsub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      82,	// hsub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      82,	// qsub0 -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub1 -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub2 -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub3
      82,	// ssub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      82,	// qsub1_then_bsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub1_then_dsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub1_then_hsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub1_then_ssub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      82,	// qsub2_then_bsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub2_then_hsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub2_then_ssub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      82,	// dsub_qsub1_then_dsub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      82,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo
      82,	// qsub0_qsub1 -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub0_qsub1_qsub2
      82,	// qsub1_qsub2 -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      82,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_qsub2_in_FPR128_lo
      83,	// bsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// dsub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      83,	// hsub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      83,	// qsub0 -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub1 -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub2 -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3
      83,	// ssub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      83,	// qsub1_then_bsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub1_then_dsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub1_then_hsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub1_then_ssub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      83,	// qsub2_then_bsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub2_then_dsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub2_then_hsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub2_then_ssub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      83,	// dsub_qsub1_then_dsub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      83,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub2_in_FPR128_lo
      83,	// qsub0_qsub1 -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub0_qsub1_qsub2
      83,	// qsub1_qsub2 -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      83,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_dsub_in_FPR64_lo
      84,	// bsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// dsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      84,	// hsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      84,	// ssub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      84,	// zsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub0 -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1 -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2 -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub3
      84,	// zsub_hi -> ZPR3_with_dsub_in_FPR64_lo
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      84,	// zsub1_then_bsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1_then_hsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1_then_ssub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub1_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      84,	// zsub2_then_bsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2_then_hsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2_then_ssub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub2_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      84,	// dsub_zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub_zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      84,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      84,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo
      84,	// zsub0_zsub1 -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub0_zsub1_zsub2
      84,	// zsub1_zsub2 -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      84,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      84,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub1_in_ZPR_4b
      85,	// bsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// dsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      85,	// hsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      85,	// ssub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      85,	// zsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub0 -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1 -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2 -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub3
      85,	// zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      85,	// zsub1_then_bsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1_then_hsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1_then_ssub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub1_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      85,	// zsub2_then_bsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2_then_hsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2_then_ssub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub2_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      85,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      85,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      85,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b
      85,	// zsub0_zsub1 -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub0_zsub1_zsub2
      85,	// zsub1_zsub2 -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      85,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      85,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub2_in_ZPR_4b
      86,	// bsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// dsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      86,	// hsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      86,	// ssub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      86,	// zsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub0 -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1 -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2 -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3
      86,	// zsub_hi -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      86,	// zsub1_then_bsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1_then_dsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1_then_hsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1_then_ssub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1_then_zsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub1_then_zsub_hi -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      86,	// zsub2_then_bsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2_then_hsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2_then_ssub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub2_then_zsub_hi -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      86,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      86,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      86,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_4b
      86,	// zsub0_zsub1 -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub0_zsub1_zsub2
      86,	// zsub1_zsub2 -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      86,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      86,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      87,	// hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      87,	// qsub0 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub1 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub2 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub3
      87,	// ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      87,	// qsub1_then_bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub1_then_hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub1_then_ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      87,	// qsub2_then_bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub2_then_hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub2_then_ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      87,	// dsub_qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      87,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      87,	// qsub0_qsub1 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub0_qsub1_qsub2
      87,	// qsub1_qsub2 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      87,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// bsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      88,	// hsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      88,	// qsub0 -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub1 -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub2 -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3
      88,	// ssub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      88,	// qsub1_then_bsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub1_then_dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub1_then_hsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub1_then_ssub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      88,	// qsub2_then_bsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub2_then_hsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub2_then_ssub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      88,	// dsub_qsub1_then_dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      88,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      88,	// qsub0_qsub1 -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub0_qsub1_qsub2
      88,	// qsub1_qsub2 -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      88,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      89,	// hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      89,	// ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      89,	// zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub0 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub3
      89,	// zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      89,	// zsub1_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub1_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      89,	// zsub2_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub2_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      89,	// dsub_zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub_zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      89,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      89,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      89,	// zsub0_zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub0_zsub1_zsub2
      89,	// zsub1_zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      89,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      89,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// bsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      90,	// hsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      90,	// ssub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      90,	// zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub0 -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1 -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2 -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3
      90,	// zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      90,	// zsub1_then_bsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1_then_hsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1_then_ssub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub1_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      90,	// zsub2_then_bsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2_then_hsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2_then_ssub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub2_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      90,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      90,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      90,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      90,	// zsub0_zsub1 -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub0_zsub1_zsub2
      90,	// zsub1_zsub2 -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      90,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      90,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      91,	// hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      91,	// qsub0 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub1 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub2 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3
      91,	// ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      91,	// qsub1_then_bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub1_then_hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub1_then_ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      91,	// qsub2_then_bsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub2_then_hsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub2_then_ssub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      91,	// dsub_qsub1_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      91,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      91,	// qsub0_qsub1 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub0_qsub1_qsub2
      91,	// qsub1_qsub2 -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      91,	// qsub1_then_dsub_qsub2_then_dsub -> QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      92,	// hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      92,	// ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      92,	// zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub0 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3
      92,	// zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      92,	// zsub1_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub1_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      92,	// zsub2_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub2_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      92,	// dsub_zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub_zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      92,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      92,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      92,	// zsub0_zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub0_zsub1_zsub2
      92,	// zsub1_zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      92,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      92,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub0_in_ZPR_3b
      93,	// bsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// dsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      93,	// hsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      93,	// ssub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      93,	// zsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub0 -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1 -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2 -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub3
      93,	// zsub_hi -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      93,	// zsub1_then_bsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1_then_dsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1_then_hsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1_then_ssub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1_then_zsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub1_then_zsub_hi -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      93,	// zsub2_then_bsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2_then_dsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2_then_hsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2_then_ssub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2_then_zsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub2_then_zsub_hi -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      93,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      93,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      93,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub0_in_ZPR_3b
      93,	// zsub0_zsub1 -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      93,	// zsub1_zsub2 -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      93,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      93,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub0_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub1_in_ZPR_3b
      94,	// bsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// dsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      94,	// hsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      94,	// ssub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      94,	// zsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub0 -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1 -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2 -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub3
      94,	// zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      94,	// zsub1_then_bsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1_then_hsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1_then_ssub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub1_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      94,	// zsub2_then_bsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2_then_hsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2_then_ssub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub2_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      94,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      94,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      94,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b
      94,	// zsub0_zsub1 -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      94,	// zsub1_zsub2 -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      94,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      94,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub2_in_ZPR_3b
      95,	// bsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// dsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      95,	// hsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      95,	// ssub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      95,	// zsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub0 -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1 -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2 -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3
      95,	// zsub_hi -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      95,	// zsub1_then_bsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1_then_dsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1_then_hsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1_then_ssub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1_then_zsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub1_then_zsub_hi -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      95,	// zsub2_then_bsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2_then_hsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2_then_ssub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub2_then_zsub_hi -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      95,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      95,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      95,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_3b
      95,	// zsub0_zsub1 -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      95,	// zsub1_zsub2 -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      95,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      95,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      96,	// hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      96,	// ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      96,	// zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub0 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub3
      96,	// zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      96,	// zsub1_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub1_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      96,	// zsub2_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub2_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      96,	// dsub_zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub_zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      96,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      96,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      96,	// zsub0_zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      96,	// zsub1_zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      96,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      96,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// bsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      97,	// hsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      97,	// ssub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      97,	// zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub0 -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1 -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2 -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3
      97,	// zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      97,	// zsub1_then_bsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1_then_hsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1_then_ssub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub1_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      97,	// zsub2_then_bsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2_then_hsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2_then_ssub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub2_then_zsub_hi -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      97,	// dsub_zsub1_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub_zsub1_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      97,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      97,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      97,	// zsub0_zsub1 -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      97,	// zsub1_zsub2 -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      97,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      97,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      98,	// hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      98,	// ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      98,	// zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub0 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3
      98,	// zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      98,	// zsub1_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub1_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      98,	// zsub2_then_bsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2_then_hsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2_then_ssub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub2_then_zsub_hi -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      98,	// dsub_zsub1_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub_zsub1_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      98,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      98,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      98,	// zsub0_zsub1 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub0_zsub1_zsub2
      98,	// zsub1_zsub2 -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      98,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      98,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ
      99,	// bsub -> QQQQ
      99,	// dsub -> QQQQ
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      99,	// hsub -> QQQQ
      0,	// qhisub
      0,	// qsub
      99,	// qsub0 -> QQQQ
      99,	// qsub1 -> QQQQ
      99,	// qsub2 -> QQQQ
      99,	// qsub3 -> QQQQ
      99,	// ssub -> QQQQ
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      99,	// qsub1_then_bsub -> QQQQ
      99,	// qsub1_then_dsub -> QQQQ
      99,	// qsub1_then_hsub -> QQQQ
      99,	// qsub1_then_ssub -> QQQQ
      99,	// qsub3_then_bsub -> QQQQ
      99,	// qsub3_then_dsub -> QQQQ
      99,	// qsub3_then_hsub -> QQQQ
      99,	// qsub3_then_ssub -> QQQQ
      99,	// qsub2_then_bsub -> QQQQ
      99,	// qsub2_then_dsub -> QQQQ
      99,	// qsub2_then_hsub -> QQQQ
      99,	// qsub2_then_ssub -> QQQQ
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      99,	// dsub_qsub1_then_dsub -> QQQQ
      99,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ
      99,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ
      99,	// qsub0_qsub1 -> QQQQ
      99,	// qsub0_qsub1_qsub2 -> QQQQ
      99,	// qsub1_qsub2 -> QQQQ
      99,	// qsub1_qsub2_qsub3 -> QQQQ
      99,	// qsub2_qsub3 -> QQQQ
      99,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ
      99,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ
      99,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR4
      100,	// bsub -> ZPR4
      100,	// dsub -> ZPR4
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      100,	// hsub -> ZPR4
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      100,	// ssub -> ZPR4
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      100,	// zsub -> ZPR4
      100,	// zsub0 -> ZPR4
      100,	// zsub1 -> ZPR4
      100,	// zsub2 -> ZPR4
      100,	// zsub3 -> ZPR4
      100,	// zsub_hi -> ZPR4
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      100,	// zsub1_then_bsub -> ZPR4
      100,	// zsub1_then_dsub -> ZPR4
      100,	// zsub1_then_hsub -> ZPR4
      100,	// zsub1_then_ssub -> ZPR4
      100,	// zsub1_then_zsub -> ZPR4
      100,	// zsub1_then_zsub_hi -> ZPR4
      100,	// zsub3_then_bsub -> ZPR4
      100,	// zsub3_then_dsub -> ZPR4
      100,	// zsub3_then_hsub -> ZPR4
      100,	// zsub3_then_ssub -> ZPR4
      100,	// zsub3_then_zsub -> ZPR4
      100,	// zsub3_then_zsub_hi -> ZPR4
      100,	// zsub2_then_bsub -> ZPR4
      100,	// zsub2_then_dsub -> ZPR4
      100,	// zsub2_then_hsub -> ZPR4
      100,	// zsub2_then_ssub -> ZPR4
      100,	// zsub2_then_zsub -> ZPR4
      100,	// zsub2_then_zsub_hi -> ZPR4
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      100,	// dsub_zsub1_then_dsub -> ZPR4
      100,	// zsub_zsub1_then_zsub -> ZPR4
      100,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4
      100,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4
      100,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4
      100,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4
      100,	// zsub0_zsub1 -> ZPR4
      100,	// zsub0_zsub1_zsub2 -> ZPR4
      100,	// zsub1_zsub2 -> ZPR4
      100,	// zsub1_zsub2_zsub3 -> ZPR4
      100,	// zsub2_zsub3 -> ZPR4
      100,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4
      100,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4
      100,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4
      100,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4
      100,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4
      100,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4
    },
    {	// QQQQ_with_dsub_in_FPR64_lo
      101,	// bsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// dsub -> QQQQ_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      101,	// hsub -> QQQQ_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      101,	// qsub0 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub3 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// ssub -> QQQQ_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      101,	// qsub1_then_bsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_then_hsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_then_ssub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub3_then_bsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub3_then_hsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub3_then_ssub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_then_bsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_then_hsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_then_ssub -> QQQQ_with_dsub_in_FPR64_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      101,	// dsub_qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub0_qsub1 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub0_qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      101,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub1_in_FPR128_lo
      102,	// bsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// dsub -> QQQQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      102,	// hsub -> QQQQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      102,	// qsub0 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub3 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// ssub -> QQQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      102,	// qsub1_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub3_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub3_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub3_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      102,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub0_qsub1 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      102,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub2_in_FPR128_lo
      103,	// bsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// dsub -> QQQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      103,	// hsub -> QQQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      103,	// qsub0 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub3 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// ssub -> QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      103,	// qsub1_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub3_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub3_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub3_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      103,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub0_qsub1 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_qsub2 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_qsub3 -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      103,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub3_in_FPR128_lo
      104,	// bsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// dsub -> QQQQ_with_qsub3_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      104,	// hsub -> QQQQ_with_qsub3_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      104,	// qsub0 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub3 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// ssub -> QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      104,	// qsub1_then_bsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_then_hsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_then_ssub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub3_then_bsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub3_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub3_then_hsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub3_then_ssub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_then_bsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_then_hsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_then_ssub -> QQQQ_with_qsub3_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      104,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub0_qsub1 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_qsub2 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_qsub3 -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      104,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR4_with_dsub_in_FPR64_lo
      105,	// bsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// dsub -> ZPR4_with_dsub_in_FPR64_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      105,	// hsub -> ZPR4_with_dsub_in_FPR64_lo
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      105,	// ssub -> ZPR4_with_dsub_in_FPR64_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      105,	// zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      105,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      105,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo
      105,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo
    },
    {	// ZPR4_with_zsub1_in_ZPR_4b
      106,	// bsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// dsub -> ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      106,	// hsub -> ZPR4_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      106,	// ssub -> ZPR4_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      106,	// zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      106,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      106,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b
      106,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b
    },
    {	// ZPR4_with_zsub2_in_ZPR_4b
      107,	// bsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// dsub -> ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      107,	// hsub -> ZPR4_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      107,	// ssub -> ZPR4_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      107,	// zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub0 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      107,	// zsub1_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub3_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      107,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub0_zsub1 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b
      107,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b
    },
    {	// ZPR4_with_zsub3_in_ZPR_4b
      108,	// bsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// dsub -> ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      108,	// hsub -> ZPR4_with_zsub3_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      108,	// ssub -> ZPR4_with_zsub3_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      108,	// zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub0 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub_hi -> ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      108,	// zsub1_then_bsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_hsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_ssub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_bsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_hsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_ssub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub3_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_bsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_hsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_ssub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      108,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub0_zsub1 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_zsub2 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_zsub3 -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_4b
      108,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_4b
    },
    {	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      109,	// hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      109,	// qsub0 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      109,	// qsub1_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub3_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub3_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub3_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      109,	// dsub_qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub0_qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub0_qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      109,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      110,	// hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      110,	// qsub0 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      110,	// qsub1_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub3_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub3_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub3_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      110,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub0_qsub1 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      110,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// bsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      111,	// hsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      111,	// qsub0 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub3 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// ssub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      111,	// qsub1_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub3_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub3_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub3_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_then_bsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_then_hsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_then_ssub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      111,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub0_qsub1 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_qsub2 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_qsub3 -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      111,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      112,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      112,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      112,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      112,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      112,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
      112,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
    },
    {	// ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      113,	// hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      113,	// ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      113,	// zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      113,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      113,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
      113,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
    },
    {	// ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// bsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      114,	// hsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      114,	// ssub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      114,	// zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub0 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      114,	// zsub1_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub3_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_bsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_hsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_ssub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      114,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub0_zsub1 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      114,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
    },
    {	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      115,	// hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      115,	// qsub0 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      115,	// qsub1_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub3_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub3_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub3_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      115,	// dsub_qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub0_qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub0_qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      115,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      116,	// hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      116,	// qsub0 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      116,	// qsub1_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub3_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub3_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub3_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_then_bsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_then_hsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_then_ssub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      116,	// dsub_qsub1_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub0_qsub1 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub0_qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_qsub2 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_qsub3 -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      116,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      117,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      117,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      117,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      117,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      117,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
      117,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
    },
    {	// ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      118,	// hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      118,	// ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      118,	// zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      118,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      118,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
      118,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
    },
    {	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      119,	// hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// qhisub
      0,	// qsub
      119,	// qsub0 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      0,	// zsub
      0,	// zsub0
      0,	// zsub1
      0,	// zsub2
      0,	// zsub3
      0,	// zsub_hi
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      119,	// qsub1_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub3_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub3_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub3_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_then_bsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_then_hsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_then_ssub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// subo64_then_sub_32
      0,	// zsub1_then_bsub
      0,	// zsub1_then_dsub
      0,	// zsub1_then_hsub
      0,	// zsub1_then_ssub
      0,	// zsub1_then_zsub
      0,	// zsub1_then_zsub_hi
      0,	// zsub3_then_bsub
      0,	// zsub3_then_dsub
      0,	// zsub3_then_hsub
      0,	// zsub3_then_ssub
      0,	// zsub3_then_zsub
      0,	// zsub3_then_zsub_hi
      0,	// zsub2_then_bsub
      0,	// zsub2_then_dsub
      0,	// zsub2_then_hsub
      0,	// zsub2_then_ssub
      0,	// zsub2_then_zsub
      0,	// zsub2_then_zsub_hi
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      119,	// dsub_qsub1_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// dsub_qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub0_qsub1 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub0_qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_qsub2 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_qsub3 -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_then_dsub_qsub2_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      119,	// qsub2_then_dsub_qsub3_then_dsub -> QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
      0,	// sub_32_subo64_then_sub_32
      0,	// dsub_zsub1_then_dsub
      0,	// zsub_zsub1_then_zsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// dsub_zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub_zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub0_zsub1
      0,	// zsub0_zsub1_zsub2
      0,	// zsub1_zsub2
      0,	// zsub1_zsub2_zsub3
      0,	// zsub2_zsub3
      0,	// zsub1_then_dsub_zsub2_then_dsub
      0,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub1_then_zsub_zsub2_then_zsub
      0,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub
      0,	// zsub2_then_dsub_zsub3_then_dsub
      0,	// zsub2_then_zsub_zsub3_then_zsub
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      120,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      120,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      120,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      120,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      120,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
      120,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
    },
    {	// ZPR4_with_zsub0_in_ZPR_3b
      121,	// bsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// dsub -> ZPR4_with_zsub0_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      121,	// hsub -> ZPR4_with_zsub0_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      121,	// ssub -> ZPR4_with_zsub0_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      121,	// zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub0 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub_hi -> ZPR4_with_zsub0_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      121,	// zsub1_then_bsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_hsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_ssub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_zsub_hi -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_bsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_hsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_ssub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub3_then_zsub_hi -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_bsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_hsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_ssub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_zsub_hi -> ZPR4_with_zsub0_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      121,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub0_zsub1 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_zsub2 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_zsub3 -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub0_in_ZPR_3b
      121,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub0_in_ZPR_3b
    },
    {	// ZPR4_with_zsub1_in_ZPR_3b
      122,	// bsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// dsub -> ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      122,	// hsub -> ZPR4_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      122,	// ssub -> ZPR4_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      122,	// zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      122,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      122,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b
      122,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b
    },
    {	// ZPR4_with_zsub2_in_ZPR_3b
      123,	// bsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// dsub -> ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      123,	// hsub -> ZPR4_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      123,	// ssub -> ZPR4_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      123,	// zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub0 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      123,	// zsub1_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub3_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      123,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub0_zsub1 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b
      123,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b
    },
    {	// ZPR4_with_zsub3_in_ZPR_3b
      124,	// bsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// dsub -> ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      124,	// hsub -> ZPR4_with_zsub3_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      124,	// ssub -> ZPR4_with_zsub3_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      124,	// zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub0 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub_hi -> ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      124,	// zsub1_then_bsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_hsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_ssub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_bsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_hsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_ssub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub3_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_bsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_hsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_ssub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_zsub_hi -> ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      124,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub0_zsub1 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_zsub2 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_zsub3 -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub3_in_ZPR_3b
      124,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub3_in_ZPR_3b
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      125,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      125,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      125,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      125,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      125,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
      125,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
    },
    {	// ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      126,	// hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      126,	// ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      126,	// zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      126,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      126,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
      126,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
    },
    {	// ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// bsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      127,	// hsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      127,	// ssub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      127,	// zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub0 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      127,	// zsub1_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub3_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_bsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_hsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_ssub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_zsub_hi -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      127,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub0_zsub1 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_zsub2 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_zsub3 -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      127,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      128,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      128,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      128,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      128,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      128,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
      128,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
    },
    {	// ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      129,	// hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      129,	// ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      129,	// zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub0 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      129,	// zsub1_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub3_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_bsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_hsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_ssub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_zsub_hi -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      129,	// dsub_zsub1_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub_zsub1_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub0_zsub1 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub0_zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_zsub2 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_zsub3 -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
      129,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
    },
    {	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0
      0,	// dsub1
      0,	// dsub2
      0,	// dsub3
      130,	// hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// qhisub
      0,	// qsub
      0,	// qsub0
      0,	// qsub1
      0,	// qsub2
      0,	// qsub3
      130,	// ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// sub_32
      0,	// sube32
      0,	// sube64
      0,	// subo32
      0,	// subo64
      130,	// zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub0 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub1_then_bsub
      0,	// dsub1_then_hsub
      0,	// dsub1_then_ssub
      0,	// dsub3_then_bsub
      0,	// dsub3_then_hsub
      0,	// dsub3_then_ssub
      0,	// dsub2_then_bsub
      0,	// dsub2_then_hsub
      0,	// dsub2_then_ssub
      0,	// qsub1_then_bsub
      0,	// qsub1_then_dsub
      0,	// qsub1_then_hsub
      0,	// qsub1_then_ssub
      0,	// qsub3_then_bsub
      0,	// qsub3_then_dsub
      0,	// qsub3_then_hsub
      0,	// qsub3_then_ssub
      0,	// qsub2_then_bsub
      0,	// qsub2_then_dsub
      0,	// qsub2_then_hsub
      0,	// qsub2_then_ssub
      0,	// subo64_then_sub_32
      130,	// zsub1_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub3_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_bsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_hsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_ssub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_zsub_hi -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      0,	// dsub0_dsub1
      0,	// dsub0_dsub1_dsub2
      0,	// dsub1_dsub2
      0,	// dsub1_dsub2_dsub3
      0,	// dsub2_dsub3
      0,	// dsub_qsub1_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// dsub_qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub0_qsub1
      0,	// qsub0_qsub1_qsub2
      0,	// qsub1_qsub2
      0,	// qsub1_qsub2_qsub3
      0,	// qsub2_qsub3
      0,	// qsub1_then_dsub_qsub2_then_dsub
      0,	// qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub
      0,	// qsub2_then_dsub_qsub3_then_dsub
      0,	// sub_32_subo64_then_sub_32
      130,	// dsub_zsub1_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub_zsub1_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// dsub_zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub_zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub0_zsub1 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub0_zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_zsub2 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_zsub3 -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_dsub_zsub2_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_zsub_zsub2_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_dsub_zsub3_then_dsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
      130,	// zsub2_then_zsub_zsub3_then_zsub -> ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 99 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &AArch64GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// FPR8
    {1, 32},  	// FPR16
    {1, 16},  	// FPR16_lo
    {1, 16},  	// PPR
    {1, 8},  	// PPR_3b
    {1, 33},  	// GPR32all
    {1, 32},  	// FPR32
    {1, 32},  	// GPR32
    {1, 32},  	// GPR32sp
    {1, 31},  	// GPR32common
    {1, 16},  	// FPR32_with_hsub_in_FPR16_lo
    {1, 8},  	// GPR32arg
    {0, 0},  	// CCR
    {1, 1},  	// GPR32sponly
    {2, 32},  	// WSeqPairsClass
    {2, 30},  	// WSeqPairsClass_with_subo32_in_GPR32common
    {2, 8},  	// WSeqPairsClass_with_sube32_in_GPR32arg
    {1, 33},  	// GPR64all
    {1, 32},  	// FPR64
    {1, 32},  	// GPR64
    {1, 32},  	// GPR64sp
    {1, 31},  	// GPR64common
    {1, 29},  	// GPR64noip
    {1, 28},  	// GPR64common_and_GPR64noip
    {1, 19},  	// tcGPR64
    {1, 17},  	// GPR64noip_and_tcGPR64
    {1, 16},  	// FPR64_lo
    {1, 8},  	// GPR64arg
    {1, 2},  	// rtcGPR64
    {1, 1},  	// GPR64sponly
    {2, 32},  	// DD
    {2, 17},  	// DD_with_dsub0_in_FPR64_lo
    {2, 17},  	// DD_with_dsub1_in_FPR64_lo
    {2, 32},  	// XSeqPairsClass
    {2, 16},  	// DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo
    {2, 30},  	// XSeqPairsClass_with_subo64_in_GPR64common
    {2, 30},  	// XSeqPairsClass_with_subo64_in_GPR64noip
    {2, 28},  	// XSeqPairsClass_with_sube64_in_GPR64noip
    {2, 20},  	// XSeqPairsClass_with_sube64_in_tcGPR64
    {2, 18},  	// XSeqPairsClass_with_sube64_in_GPR64noip_and_tcGPR64
    {2, 18},  	// XSeqPairsClass_with_subo64_in_tcGPR64
    {2, 16},  	// XSeqPairsClass_with_subo64_in_GPR64noip_and_tcGPR64
    {2, 8},  	// XSeqPairsClass_with_sub_32_in_GPR32arg
    {2, 2},  	// XSeqPairsClass_with_sube64_in_rtcGPR64
    {1, 32},  	// FPR128
    {2, 64},  	// ZPR
    {1, 16},  	// FPR128_lo
    {2, 32},  	// ZPR_4b
    {2, 16},  	// ZPR_3b
    {3, 32},  	// DDD
    {3, 18},  	// DDD_with_dsub0_in_FPR64_lo
    {3, 18},  	// DDD_with_dsub1_in_FPR64_lo
    {3, 18},  	// DDD_with_dsub2_in_FPR64_lo
    {3, 17},  	// DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo
    {3, 17},  	// DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
    {3, 16},  	// DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo
    {4, 32},  	// DDDD
    {4, 19},  	// DDDD_with_dsub0_in_FPR64_lo
    {4, 19},  	// DDDD_with_dsub1_in_FPR64_lo
    {4, 19},  	// DDDD_with_dsub2_in_FPR64_lo
    {4, 19},  	// DDDD_with_dsub3_in_FPR64_lo
    {4, 18},  	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo
    {4, 18},  	// DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
    {4, 18},  	// DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
    {4, 17},  	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo
    {4, 17},  	// DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
    {4, 16},  	// DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo
    {2, 32},  	// QQ
    {4, 64},  	// ZPR2
    {2, 17},  	// QQ_with_dsub_in_FPR64_lo
    {2, 17},  	// QQ_with_qsub1_in_FPR128_lo
    {4, 34},  	// ZPR2_with_dsub_in_FPR64_lo
    {4, 34},  	// ZPR2_with_zsub1_in_ZPR_4b
    {2, 16},  	// QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo
    {4, 32},  	// ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b
    {4, 18},  	// ZPR2_with_zsub0_in_ZPR_3b
    {4, 18},  	// ZPR2_with_zsub1_in_ZPR_3b
    {4, 16},  	// ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b
    {3, 32},  	// QQQ
    {6, 64},  	// ZPR3
    {3, 18},  	// QQQ_with_dsub_in_FPR64_lo
    {3, 18},  	// QQQ_with_qsub1_in_FPR128_lo
    {3, 18},  	// QQQ_with_qsub2_in_FPR128_lo
    {6, 36},  	// ZPR3_with_dsub_in_FPR64_lo
    {6, 36},  	// ZPR3_with_zsub1_in_ZPR_4b
    {6, 36},  	// ZPR3_with_zsub2_in_ZPR_4b
    {3, 17},  	// QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo
    {3, 17},  	// QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo
    {6, 34},  	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b
    {6, 34},  	// ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b
    {3, 16},  	// QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo
    {6, 32},  	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b
    {6, 20},  	// ZPR3_with_zsub0_in_ZPR_3b
    {6, 20},  	// ZPR3_with_zsub1_in_ZPR_3b
    {6, 20},  	// ZPR3_with_zsub2_in_ZPR_3b
    {6, 18},  	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b
    {6, 18},  	// ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b
    {6, 16},  	// ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b
    {4, 32},  	// QQQQ
    {8, 64},  	// ZPR4
    {4, 19},  	// QQQQ_with_dsub_in_FPR64_lo
    {4, 19},  	// QQQQ_with_qsub1_in_FPR128_lo
    {4, 19},  	// QQQQ_with_qsub2_in_FPR128_lo
    {4, 19},  	// QQQQ_with_qsub3_in_FPR128_lo
    {8, 38},  	// ZPR4_with_dsub_in_FPR64_lo
    {8, 38},  	// ZPR4_with_zsub1_in_ZPR_4b
    {8, 38},  	// ZPR4_with_zsub2_in_ZPR_4b
    {8, 38},  	// ZPR4_with_zsub3_in_ZPR_4b
    {4, 18},  	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo
    {4, 18},  	// QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo
    {4, 18},  	// QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
    {8, 36},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b
    {8, 36},  	// ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b
    {8, 36},  	// ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
    {4, 17},  	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo
    {4, 17},  	// QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo
    {8, 34},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b
    {8, 34},  	// ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b
    {4, 16},  	// QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo
    {8, 32},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b
    {8, 22},  	// ZPR4_with_zsub0_in_ZPR_3b
    {8, 22},  	// ZPR4_with_zsub1_in_ZPR_3b
    {8, 22},  	// ZPR4_with_zsub2_in_ZPR_3b
    {8, 22},  	// ZPR4_with_zsub3_in_ZPR_3b
    {8, 20},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b
    {8, 20},  	// ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b
    {8, 20},  	// ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
    {8, 18},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b
    {8, 18},  	// ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b
    {8, 16},  	// ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned AArch64GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 116 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned AArch64GenRegisterInfo::getNumRegPressureSets() const {
  return 32;
}

// Get the name of this register unit pressure set.
const char *AArch64GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "GPR32sponly",
    "rtcGPR64",
    "PPR_3b",
    "GPR32arg",
    "PPR",
    "tcGPR64",
    "FPR16_lo",
    "ZPR_3b",
    "FPR16_lo_with_ZPR_3b",
    "DD_with_dsub1_in_FPR64_lo_with_ZPR_3b",
    "DDD_with_dsub2_in_FPR64_lo_with_ZPR_3b",
    "DDD_with_dsub2_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b",
    "DDDD_with_dsub3_in_FPR64_lo_with_ZPR_3b",
    "DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b",
    "DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub2_in_ZPR_3b",
    "FPR16_lo_with_ZPR4_with_zsub1_in_ZPR_3b",
    "FPR8",
    "FPR16_lo_with_ZPR4_with_zsub2_in_ZPR_3b",
    "GPR32",
    "FPR16_lo_with_ZPR4_with_zsub3_in_ZPR_3b",
    "ZPR4_with_zsub3_in_ZPR_4b",
    "ZPR_4b",
    "FPR8_with_ZPR_3b",
    "FPR8_with_ZPR4_with_zsub1_in_ZPR_3b",
    "FPR8_with_ZPR4_with_zsub2_in_ZPR_3b",
    "FPR8_with_ZPR4_with_zsub3_in_ZPR_3b",
    "ZPR4_with_zsub2_in_ZPR_4b",
    "FPR8_with_ZPR_4b",
    "FPR8_with_ZPR4_with_zsub1_in_ZPR_4b",
    "FPR8_with_ZPR4_with_zsub2_in_ZPR_4b",
    "FPR8_with_ZPR4_with_zsub3_in_ZPR_4b",
    "ZPR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned AArch64GenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: GPR32sponly
    2,  	// 1: rtcGPR64
    8,  	// 2: PPR_3b
    8,  	// 3: GPR32arg
    16,  	// 4: PPR
    20,  	// 5: tcGPR64
    22,  	// 6: FPR16_lo
    28,  	// 7: ZPR_3b
    30,  	// 8: FPR16_lo_with_ZPR_3b
    30,  	// 9: DD_with_dsub1_in_FPR64_lo_with_ZPR_3b
    30,  	// 10: DDD_with_dsub2_in_FPR64_lo_with_ZPR_3b
    30,  	// 11: DDD_with_dsub2_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b
    30,  	// 12: DDDD_with_dsub3_in_FPR64_lo_with_ZPR_3b
    30,  	// 13: DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub1_in_ZPR_3b
    30,  	// 14: DDDD_with_dsub3_in_FPR64_lo_with_ZPR4_with_zsub2_in_ZPR_3b
    31,  	// 15: FPR16_lo_with_ZPR4_with_zsub1_in_ZPR_3b
    32,  	// 16: FPR8
    32,  	// 17: FPR16_lo_with_ZPR4_with_zsub2_in_ZPR_3b
    33,  	// 18: GPR32
    33,  	// 19: FPR16_lo_with_ZPR4_with_zsub3_in_ZPR_3b
    41,  	// 20: ZPR4_with_zsub3_in_ZPR_4b
    41,  	// 21: ZPR_4b
    43,  	// 22: FPR8_with_ZPR_3b
    43,  	// 23: FPR8_with_ZPR4_with_zsub1_in_ZPR_3b
    43,  	// 24: FPR8_with_ZPR4_with_zsub2_in_ZPR_3b
    43,  	// 25: FPR8_with_ZPR4_with_zsub3_in_ZPR_3b
    44,  	// 26: ZPR4_with_zsub2_in_ZPR_4b
    51,  	// 27: FPR8_with_ZPR_4b
    51,  	// 28: FPR8_with_ZPR4_with_zsub1_in_ZPR_4b
    51,  	// 29: FPR8_with_ZPR4_with_zsub2_in_ZPR_4b
    51,  	// 30: FPR8_with_ZPR4_with_zsub3_in_ZPR_4b
    64,  	// 31: ZPR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 2, 4, -1,
  /* 3 */ 0, 18, -1,
  /* 6 */ 1, 5, 18, -1,
  /* 10 */ 3, 5, 18, -1,
  /* 14 */ 21, 26, 27, 31, -1,
  /* 19 */ 26, 28, 31, -1,
  /* 23 */ 21, 26, 27, 28, 31, -1,
  /* 29 */ 26, 29, 31, -1,
  /* 33 */ 26, 28, 29, 31, -1,
  /* 38 */ 21, 26, 27, 28, 29, 31, -1,
  /* 45 */ 20, 26, 30, 31, -1,
  /* 50 */ 7, 19, 20, 25, 26, 30, 31, -1,
  /* 58 */ 20, 26, 29, 30, 31, -1,
  /* 64 */ 7, 14, 17, 20, 24, 26, 29, 30, 31, -1,
  /* 74 */ 7, 14, 17, 19, 20, 24, 25, 26, 29, 30, 31, -1,
  /* 86 */ 20, 26, 28, 29, 30, 31, -1,
  /* 93 */ 7, 11, 13, 15, 20, 23, 26, 28, 29, 30, 31, -1,
  /* 105 */ 7, 11, 13, 14, 15, 17, 20, 23, 24, 26, 28, 29, 30, 31, -1,
  /* 120 */ 7, 11, 13, 14, 15, 17, 19, 20, 23, 24, 25, 26, 28, 29, 30, 31, -1,
  /* 137 */ 16, 22, 23, 24, 25, 27, 28, 29, 30, 31, -1,
  /* 148 */ 20, 21, 26, 27, 28, 29, 30, 31, -1,
  /* 157 */ 7, 8, 9, 10, 12, 20, 21, 22, 26, 27, 28, 29, 30, 31, -1,
  /* 172 */ 7, 8, 9, 10, 11, 12, 13, 15, 20, 21, 22, 23, 26, 27, 28, 29, 30, 31, -1,
  /* 191 */ 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 31, -1,
  /* 213 */ 6, 12, 13, 14, 16, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 232 */ 6, 7, 12, 13, 14, 16, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 252 */ 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 276 */ 6, 10, 11, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 295 */ 6, 10, 11, 12, 13, 14, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 317 */ 6, 7, 10, 11, 12, 13, 14, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 340 */ 6, 8, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 359 */ 6, 9, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 378 */ 6, 8, 9, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 398 */ 6, 9, 10, 11, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 419 */ 6, 8, 9, 10, 11, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 441 */ 6, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 465 */ 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 490 */ 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
  /* 515 */ 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* AArch64GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint16_t RCSetStartTable[] = {
    137,137,490,1,0,4,137,4,4,4,490,10,2,3,4,4,10,4,137,4,4,4,4,4,7,7,490,10,6,3,137,419,441,4,490,4,4,4,7,7,7,7,10,6,137,17,490,148,252,137,378,398,295,419,441,490,137,340,359,276,213,378,398,295,419,441,490,137,17,419,441,38,86,490,148,191,120,252,137,17,378,398,295,23,33,58,419,441,38,86,490,148,172,105,74,191,120,252,137,17,340,359,276,213,14,19,29,45,378,398,295,23,33,58,419,441,38,86,490,148,157,93,64,50,172,105,74,191,120,252,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* AArch64GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 116 && "invalid register unit");
  static const uint16_t RUSetStartTable[] = {
    2,4,4,2,3,2,4,515,515,515,515,515,515,515,515,515,515,515,490,490,490,490,490,419,378,340,137,137,137,137,137,137,137,137,137,137,232,317,465,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,10,10,10,10,10,10,10,10,7,7,7,7,7,7,7,7,6,6,7,7,4,4,4,4,4,4,4,4,4,252,252,252,252,252,252,252,252,191,172,157,148,148,148,148,148,38,23,14,17,17,17,17,17,17,17,17,17,17,50,74,120,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc AArch64RegDesc[];
extern const MCPhysReg AArch64RegDiffLists[];
extern const LaneBitmask AArch64LaneMaskLists[];
extern const char AArch64RegStrings[];
extern const char AArch64RegClassStrings[];
extern const MCPhysReg AArch64RegUnitRoots[][2];
extern const uint16_t AArch64SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits AArch64SubRegIdxRanges[];
extern const uint16_t AArch64RegEncodingTable[];
// AArch64 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AArch64DwarfFlavour0Dwarf2L[];
extern const unsigned AArch64DwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64EHFlavour0Dwarf2L[];
extern const unsigned AArch64EHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64DwarfFlavour0L2Dwarf[];
extern const unsigned AArch64DwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AArch64EHFlavour0L2Dwarf[];
extern const unsigned AArch64EHFlavour0L2DwarfSize;

AArch64GenRegisterInfo::
AArch64GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(AArch64RegInfoDesc, RegisterClasses, RegisterClasses+130,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFB6), RegClassInfos, HwMode) {
  InitMCRegisterInfo(AArch64RegDesc, 630, RA, PC,
                     AArch64MCRegisterClasses, 130,
                     AArch64RegUnitRoots,
                     116,
                     AArch64RegDiffLists,
                     AArch64LaneMaskLists,
                     AArch64RegStrings,
                     AArch64RegClassStrings,
                     AArch64SubRegIdxLists,
                     100,
                     AArch64SubRegIdxRanges,
                     AArch64RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AArch64DwarfFlavour0Dwarf2L, AArch64DwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AArch64EHFlavour0Dwarf2L, AArch64EHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AArch64DwarfFlavour0L2Dwarf, AArch64DwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AArch64EHFlavour0L2Dwarf, AArch64EHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_AArch64_AAPCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_AArch64_AAPCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAPCS_SCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X18, 0 };
static const uint32_t CSR_AArch64_AAPCS_SCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01fff000, 0x003ff800, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003e00bf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAPCS_SwiftError_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_AArch64_AAPCS_SwiftError_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ff6000, 0x003fb000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003800bc, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAPCS_SwiftError_SCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X18, 0 };
static const uint32_t CSR_AArch64_AAPCS_SwiftError_SCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ff7000, 0x003fb800, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003a00bd, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAPCS_ThisReturn_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X0, 0 };
static const uint32_t CSR_AArch64_AAPCS_ThisReturn_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x040003fc, 0x03ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAPCS_X18_SaveList[] = { AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_AArch64_AAPCS_X18_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01fff000, 0x003ff800, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003e00bf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAVPCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, 0 };
static const uint32_t CSR_AArch64_AAVPCS_RegMask[] = { 0xfffc000c, 0xfffc0003, 0xfffc0003, 0x00000003, 0x0003fffc, 0x0003fffc, 0x01ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc0001fff, 0xc00007ff, 0xc0000fff, 0xc0001fff, 0xc00007ff, 0x00000fff, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AAVPCS_SCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::X18, 0 };
static const uint32_t CSR_AArch64_AAVPCS_SCS_RegMask[] = { 0xfffc000c, 0xfffc0003, 0xfffc0003, 0x00000003, 0x0003fffc, 0x0003fffc, 0x01fff000, 0x003ff800, 0x00000000, 0xc0000000, 0xc0001fff, 0xc00007ff, 0xc0000fff, 0xc0001fff, 0xc00007ff, 0x00000fff, 0x003e00bf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AllRegs_SaveList[] = { AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WSP, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::SP, AArch64::B0, AArch64::B1, AArch64::B2, AArch64::B3, AArch64::B4, AArch64::B5, AArch64::B6, AArch64::B7, AArch64::B8, AArch64::B9, AArch64::B10, AArch64::B11, AArch64::B12, AArch64::B13, AArch64::B14, AArch64::B15, AArch64::B16, AArch64::B17, AArch64::B18, AArch64::B19, AArch64::B20, AArch64::B21, AArch64::B22, AArch64::B23, AArch64::B24, AArch64::B25, AArch64::B26, AArch64::B27, AArch64::B28, AArch64::B29, AArch64::B30, AArch64::B31, AArch64::H0, AArch64::H1, AArch64::H2, AArch64::H3, AArch64::H4, AArch64::H5, AArch64::H6, AArch64::H7, AArch64::H8, AArch64::H9, AArch64::H10, AArch64::H11, AArch64::H12, AArch64::H13, AArch64::H14, AArch64::H15, AArch64::H16, AArch64::H17, AArch64::H18, AArch64::H19, AArch64::H20, AArch64::H21, AArch64::H22, AArch64::H23, AArch64::H24, AArch64::H25, AArch64::H26, AArch64::H27, AArch64::H28, AArch64::H29, AArch64::H30, AArch64::H31, AArch64::S0, AArch64::S1, AArch64::S2, AArch64::S3, AArch64::S4, AArch64::S5, AArch64::S6, AArch64::S7, AArch64::S8, AArch64::S9, AArch64::S10, AArch64::S11, AArch64::S12, AArch64::S13, AArch64::S14, AArch64::S15, AArch64::S16, AArch64::S17, AArch64::S18, AArch64::S19, AArch64::S20, AArch64::S21, AArch64::S22, AArch64::S23, AArch64::S24, AArch64::S25, AArch64::S26, AArch64::S27, AArch64::S28, AArch64::S29, AArch64::S30, AArch64::S31, AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::D16, AArch64::D17, AArch64::D18, AArch64::D19, AArch64::D20, AArch64::D21, AArch64::D22, AArch64::D23, AArch64::D24, AArch64::D25, AArch64::D26, AArch64::D27, AArch64::D28, AArch64::D29, AArch64::D30, AArch64::D31, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 0 };
static const uint32_t CSR_AArch64_AllRegs_RegMask[] = { 0xfffffcac, 0xffffffff, 0xffffffff, 0xfc0003ff, 0xffffffff, 0xffffffff, 0xffffffff, 0x003fffff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffbfffff, 0x003fffbf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_AllRegs_SCS_SaveList[] = { AArch64::W0, AArch64::W1, AArch64::W2, AArch64::W3, AArch64::W4, AArch64::W5, AArch64::W6, AArch64::W7, AArch64::W8, AArch64::W9, AArch64::W10, AArch64::W11, AArch64::W12, AArch64::W13, AArch64::W14, AArch64::W15, AArch64::W16, AArch64::W17, AArch64::W18, AArch64::W19, AArch64::W20, AArch64::W21, AArch64::W22, AArch64::W23, AArch64::W24, AArch64::W25, AArch64::W26, AArch64::W27, AArch64::W28, AArch64::W29, AArch64::W30, AArch64::WSP, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::SP, AArch64::B0, AArch64::B1, AArch64::B2, AArch64::B3, AArch64::B4, AArch64::B5, AArch64::B6, AArch64::B7, AArch64::B8, AArch64::B9, AArch64::B10, AArch64::B11, AArch64::B12, AArch64::B13, AArch64::B14, AArch64::B15, AArch64::B16, AArch64::B17, AArch64::B18, AArch64::B19, AArch64::B20, AArch64::B21, AArch64::B22, AArch64::B23, AArch64::B24, AArch64::B25, AArch64::B26, AArch64::B27, AArch64::B28, AArch64::B29, AArch64::B30, AArch64::B31, AArch64::H0, AArch64::H1, AArch64::H2, AArch64::H3, AArch64::H4, AArch64::H5, AArch64::H6, AArch64::H7, AArch64::H8, AArch64::H9, AArch64::H10, AArch64::H11, AArch64::H12, AArch64::H13, AArch64::H14, AArch64::H15, AArch64::H16, AArch64::H17, AArch64::H18, AArch64::H19, AArch64::H20, AArch64::H21, AArch64::H22, AArch64::H23, AArch64::H24, AArch64::H25, AArch64::H26, AArch64::H27, AArch64::H28, AArch64::H29, AArch64::H30, AArch64::H31, AArch64::S0, AArch64::S1, AArch64::S2, AArch64::S3, AArch64::S4, AArch64::S5, AArch64::S6, AArch64::S7, AArch64::S8, AArch64::S9, AArch64::S10, AArch64::S11, AArch64::S12, AArch64::S13, AArch64::S14, AArch64::S15, AArch64::S16, AArch64::S17, AArch64::S18, AArch64::S19, AArch64::S20, AArch64::S21, AArch64::S22, AArch64::S23, AArch64::S24, AArch64::S25, AArch64::S26, AArch64::S27, AArch64::S28, AArch64::S29, AArch64::S30, AArch64::S31, AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::D16, AArch64::D17, AArch64::D18, AArch64::D19, AArch64::D20, AArch64::D21, AArch64::D22, AArch64::D23, AArch64::D24, AArch64::D25, AArch64::D26, AArch64::D27, AArch64::D28, AArch64::D29, AArch64::D30, AArch64::D31, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 0 };
static const uint32_t CSR_AArch64_AllRegs_SCS_RegMask[] = { 0xfffffcac, 0xffffffff, 0xffffffff, 0xfc0003ff, 0xffffffff, 0xffffffff, 0xffffffff, 0x003fffff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffbfffff, 0x003fffbf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_AArch64_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_NoRegs_SCS_SaveList[] = { AArch64::X18, 0 };
static const uint32_t CSR_AArch64_NoRegs_SCS_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001000, 0x00000800, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_RT_MostRegs_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, 0 };
static const uint32_t CSR_AArch64_RT_MostRegs_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ffe3f8, 0x003ff1fc, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x70000000, 0x003ce0be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_RT_MostRegs_SCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, 0 };
static const uint32_t CSR_AArch64_RT_MostRegs_SCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01fff3f8, 0x003ff9fc, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x70000000, 0x003ee0bf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_SVE_AAPCS_SaveList[] = { AArch64::Z8, AArch64::Z9, AArch64::Z10, AArch64::Z11, AArch64::Z12, AArch64::Z13, AArch64::Z14, AArch64::Z15, AArch64::Z16, AArch64::Z17, AArch64::Z18, AArch64::Z19, AArch64::Z20, AArch64::Z21, AArch64::Z22, AArch64::Z23, AArch64::P4, AArch64::P5, AArch64::P6, AArch64::P7, AArch64::P8, AArch64::P9, AArch64::P10, AArch64::P11, AArch64::P12, AArch64::P13, AArch64::P14, AArch64::P15, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, 0 };
static const uint32_t CSR_AArch64_SVE_AAPCS_RegMask[] = { 0xfffc000c, 0xfffc0003, 0xfffc0003, 0x03ffc003, 0x0003fffc, 0x0003fffc, 0x01ffe000, 0xc03ff000, 0xc0003fff, 0xc0003fff, 0xc0001fff, 0xc00007ff, 0xc0000fff, 0xc0001fff, 0xc00007ff, 0x00000fff, 0xc03c00be, 0xc0001fff, 0xc00007ff, 0x00000fff, };
static const MCPhysReg CSR_AArch64_SVE_AAPCS_SCS_SaveList[] = { AArch64::Z8, AArch64::Z9, AArch64::Z10, AArch64::Z11, AArch64::Z12, AArch64::Z13, AArch64::Z14, AArch64::Z15, AArch64::Z16, AArch64::Z17, AArch64::Z18, AArch64::Z19, AArch64::Z20, AArch64::Z21, AArch64::Z22, AArch64::Z23, AArch64::P4, AArch64::P5, AArch64::P6, AArch64::P7, AArch64::P8, AArch64::P9, AArch64::P10, AArch64::P11, AArch64::P12, AArch64::P13, AArch64::P14, AArch64::P15, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::LR, AArch64::FP, AArch64::X18, 0 };
static const uint32_t CSR_AArch64_SVE_AAPCS_SCS_RegMask[] = { 0xfffc000c, 0xfffc0003, 0xfffc0003, 0x03ffc003, 0x0003fffc, 0x0003fffc, 0x01fff000, 0xc03ff800, 0xc0003fff, 0xc0003fff, 0xc0001fff, 0xc00007ff, 0xc0000fff, 0xc0001fff, 0xc00007ff, 0x00000fff, 0xc03e00bf, 0xc0001fff, 0xc00007ff, 0x00000fff, };
static const MCPhysReg CSR_AArch64_StackProbe_Windows_SaveList[] = { AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::SP, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 0 };
static const uint32_t CSR_AArch64_StackProbe_Windows_RegMask[] = { 0xfffffca4, 0xffffffff, 0xffffffff, 0xfc0003ff, 0xffffffff, 0xffffffff, 0xfefff3ff, 0x003ff9ff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x7fbfffff, 0x003effbf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_AArch64_TLS_ELF_SaveList[] = { AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X16, AArch64::X17, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 0 };
static const uint32_t CSR_AArch64_TLS_ELF_RegMask[] = { 0xfffffc04, 0xffffffff, 0xffffffff, 0xfc0003ff, 0xffffffff, 0xfbffffff, 0xfcffffff, 0x003fffff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xff3fffff, 0x003ffebf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_AAPCS_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_Darwin_AArch64_AAPCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_AAPCS_SwiftError_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_Darwin_AArch64_AAPCS_SwiftError_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ff6000, 0x003fb000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003800bc, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_AAPCS_ThisReturn_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X0, 0 };
static const uint32_t CSR_Darwin_AArch64_AAPCS_ThisReturn_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x040003fc, 0x03ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_AAVPCS_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, 0 };
static const uint32_t CSR_Darwin_AArch64_AAVPCS_RegMask[] = { 0xfffc000c, 0xfffc0003, 0xfffc0003, 0x00000003, 0x0003fffc, 0x0003fffc, 0x01ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc0001fff, 0xc00007ff, 0xc0000fff, 0xc0001fff, 0xc00007ff, 0x00000fff, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_CXX_TLS_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D16, AArch64::D17, AArch64::D18, AArch64::D19, AArch64::D20, AArch64::D21, AArch64::D22, AArch64::D23, AArch64::D24, AArch64::D25, AArch64::D26, AArch64::D27, AArch64::D28, AArch64::D29, AArch64::D30, AArch64::D31, 0 };
static const uint32_t CSR_Darwin_AArch64_CXX_TLS_RegMask[] = { 0xfffffc0c, 0xffffffff, 0xffffffff, 0x000003ff, 0xfc000000, 0xfbffffff, 0xfdffe1ff, 0x003ff0ff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0x003fffff, 0x00000000, 0x00000000, 0x3f000000, 0x003c7ebe, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_CXX_TLS_PE_SaveList[] = { AArch64::LR, AArch64::FP, 0 };
static const uint32_t CSR_Darwin_AArch64_CXX_TLS_PE_RegMask[] = { 0x0000000c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x01800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_CXX_TLS_ViaCopy_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::D0, AArch64::D1, AArch64::D2, AArch64::D3, AArch64::D4, AArch64::D5, AArch64::D6, AArch64::D7, AArch64::D16, AArch64::D17, AArch64::D18, AArch64::D19, AArch64::D20, AArch64::D21, AArch64::D22, AArch64::D23, AArch64::D24, AArch64::D25, AArch64::D26, AArch64::D27, AArch64::D28, AArch64::D29, AArch64::D30, AArch64::D31, 0 };
static const uint32_t CSR_Darwin_AArch64_CXX_TLS_ViaCopy_RegMask[] = { 0xfffffc00, 0xffffffff, 0xffffffff, 0x000003ff, 0xfc000000, 0xfbffffff, 0xfc7fe1ff, 0x003ff0ff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0x003fffff, 0x00000000, 0x00000000, 0x3f000000, 0x003c7e1e, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_RT_MostRegs_SaveList[] = { AArch64::LR, AArch64::FP, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, 0 };
static const uint32_t CSR_Darwin_AArch64_RT_MostRegs_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ffe3f8, 0x003ff1fc, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x70000000, 0x003ce0be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Darwin_AArch64_TLS_SaveList[] = { AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::X9, AArch64::X10, AArch64::X11, AArch64::X12, AArch64::X13, AArch64::X14, AArch64::X15, AArch64::X18, AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, AArch64::Q8, AArch64::Q9, AArch64::Q10, AArch64::Q11, AArch64::Q12, AArch64::Q13, AArch64::Q14, AArch64::Q15, AArch64::Q16, AArch64::Q17, AArch64::Q18, AArch64::Q19, AArch64::Q20, AArch64::Q21, AArch64::Q22, AArch64::Q23, AArch64::Q24, AArch64::Q25, AArch64::Q26, AArch64::Q27, AArch64::Q28, AArch64::Q29, AArch64::Q30, AArch64::Q31, 0 };
static const uint32_t CSR_Darwin_AArch64_TLS_RegMask[] = { 0xfffffc04, 0xffffffff, 0xffffffff, 0xfc0003ff, 0xffffffff, 0xfbffffff, 0xfcfff3ff, 0x003ff9ff, 0x00000000, 0xffc00000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x7f3fffff, 0x003efebf, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win_AArch64_AAPCS_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, 0 };
static const uint32_t CSR_Win_AArch64_AAPCS_RegMask[] = { 0x03fc000c, 0x03fc0000, 0x03fc0000, 0x00000000, 0x00000000, 0x000003fc, 0x01ffe000, 0x003ff000, 0x00000000, 0xc0000000, 0xc000001f, 0xc0000007, 0x0000000f, 0x00000000, 0x00000000, 0x00000000, 0x003c00be, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win_AArch64_CFGuard_Check_SaveList[] = { AArch64::X19, AArch64::X20, AArch64::X21, AArch64::X22, AArch64::X23, AArch64::X24, AArch64::X25, AArch64::X26, AArch64::X27, AArch64::X28, AArch64::FP, AArch64::LR, AArch64::D8, AArch64::D9, AArch64::D10, AArch64::D11, AArch64::D12, AArch64::D13, AArch64::D14, AArch64::D15, AArch64::X0, AArch64::X1, AArch64::X2, AArch64::X3, AArch64::X4, AArch64::X5, AArch64::X6, AArch64::X7, AArch64::X8, AArch64::Q0, AArch64::Q1, AArch64::Q2, AArch64::Q3, AArch64::Q4, AArch64::Q5, AArch64::Q6, AArch64::Q7, 0 };
static const uint32_t CSR_Win_AArch64_CFGuard_Check_RegMask[] = { 0x03fffc0c, 0x03fffc00, 0x03fffc00, 0xfc000000, 0xfc000003, 0xfc0003ff, 0xffffe007, 0x003ff003, 0x00000000, 0xffc00000, 0xffc0001f, 0xffc00007, 0x1fc0000f, 0x07c00000, 0x0fc00000, 0x07800000, 0x003c0fbe, 0x00000000, 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> AArch64GenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_AArch64_AAPCS_RegMask,
    CSR_AArch64_AAPCS_SCS_RegMask,
    CSR_AArch64_AAPCS_SwiftError_RegMask,
    CSR_AArch64_AAPCS_SwiftError_SCS_RegMask,
    CSR_AArch64_AAPCS_ThisReturn_RegMask,
    CSR_AArch64_AAPCS_X18_RegMask,
    CSR_AArch64_AAVPCS_RegMask,
    CSR_AArch64_AAVPCS_SCS_RegMask,
    CSR_AArch64_AllRegs_RegMask,
    CSR_AArch64_AllRegs_SCS_RegMask,
    CSR_AArch64_NoRegs_RegMask,
    CSR_AArch64_NoRegs_SCS_RegMask,
    CSR_AArch64_RT_MostRegs_RegMask,
    CSR_AArch64_RT_MostRegs_SCS_RegMask,
    CSR_AArch64_SVE_AAPCS_RegMask,
    CSR_AArch64_SVE_AAPCS_SCS_RegMask,
    CSR_AArch64_StackProbe_Windows_RegMask,
    CSR_AArch64_TLS_ELF_RegMask,
    CSR_Darwin_AArch64_AAPCS_RegMask,
    CSR_Darwin_AArch64_AAPCS_SwiftError_RegMask,
    CSR_Darwin_AArch64_AAPCS_ThisReturn_RegMask,
    CSR_Darwin_AArch64_AAVPCS_RegMask,
    CSR_Darwin_AArch64_CXX_TLS_RegMask,
    CSR_Darwin_AArch64_CXX_TLS_PE_RegMask,
    CSR_Darwin_AArch64_CXX_TLS_ViaCopy_RegMask,
    CSR_Darwin_AArch64_RT_MostRegs_RegMask,
    CSR_Darwin_AArch64_TLS_RegMask,
    CSR_Win_AArch64_AAPCS_RegMask,
    CSR_Win_AArch64_CFGuard_Check_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> AArch64GenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_AArch64_AAPCS",
    "CSR_AArch64_AAPCS_SCS",
    "CSR_AArch64_AAPCS_SwiftError",
    "CSR_AArch64_AAPCS_SwiftError_SCS",
    "CSR_AArch64_AAPCS_ThisReturn",
    "CSR_AArch64_AAPCS_X18",
    "CSR_AArch64_AAVPCS",
    "CSR_AArch64_AAVPCS_SCS",
    "CSR_AArch64_AllRegs",
    "CSR_AArch64_AllRegs_SCS",
    "CSR_AArch64_NoRegs",
    "CSR_AArch64_NoRegs_SCS",
    "CSR_AArch64_RT_MostRegs",
    "CSR_AArch64_RT_MostRegs_SCS",
    "CSR_AArch64_SVE_AAPCS",
    "CSR_AArch64_SVE_AAPCS_SCS",
    "CSR_AArch64_StackProbe_Windows",
    "CSR_AArch64_TLS_ELF",
    "CSR_Darwin_AArch64_AAPCS",
    "CSR_Darwin_AArch64_AAPCS_SwiftError",
    "CSR_Darwin_AArch64_AAPCS_ThisReturn",
    "CSR_Darwin_AArch64_AAVPCS",
    "CSR_Darwin_AArch64_CXX_TLS",
    "CSR_Darwin_AArch64_CXX_TLS_PE",
    "CSR_Darwin_AArch64_CXX_TLS_ViaCopy",
    "CSR_Darwin_AArch64_RT_MostRegs",
    "CSR_Darwin_AArch64_TLS",
    "CSR_Win_AArch64_AAPCS",
    "CSR_Win_AArch64_CFGuard_Check",
  };
  return makeArrayRef(Names);
}

const AArch64FrameLowering *
AArch64GenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const AArch64FrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


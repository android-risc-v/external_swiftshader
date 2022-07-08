#ifdef GET_AT_DECL
enum ATValues {
  S1E1R = 960,
  S1E2R = 9152,
  S1E3R = 13248,
  S1E1W = 961,
  S1E2W = 9153,
  S1E3W = 13249,
  S1E0R = 962,
  S1E0W = 963,
  S12E1R = 9156,
  S12E1W = 9157,
  S12E0R = 9158,
  S12E0W = 9159,
  S1E1RP = 968,
  S1E1WP = 969,
};
#endif

#ifdef GET_BTI_DECL
enum BTIValues {
  c = 1,
  j = 2,
  jc = 3,
};
#endif

#ifdef GET_DB_DECL
enum DBValues {
  oshld = 1,
  oshst = 2,
  osh = 3,
  nshld = 5,
  nshst = 6,
  nsh = 7,
  ishld = 9,
  ishst = 10,
  ish = 11,
  ld = 13,
  st = 14,
  sy = 15,
};
#endif

#ifdef GET_DC_DECL
enum DCValues {
  ZVA = 7073,
  IVAC = 945,
  ISW = 946,
  CVAC = 7121,
  CSW = 978,
  CVAU = 7129,
  CIVAC = 7153,
  CISW = 1010,
  CVAP = 7137,
  CVADP = 7145,
  IGVAC = 947,
  IGSW = 948,
  CGSW = 980,
  CIGSW = 1012,
  CGVAC = 7123,
  CGVAP = 7139,
  CGVADP = 7147,
  CIGVAC = 7155,
  GVA = 7075,
  IGDVAC = 949,
  IGDSW = 950,
  CGDSW = 982,
  CIGDSW = 1014,
  CGDVAC = 7125,
  CGDVAP = 7141,
  CGDVADP = 7149,
  CIGDVAC = 7157,
  GZVA = 7076,
};
#endif

#ifdef GET_EXACTFPIMM_DECL
enum ExactFPImmValues {
  zero = 0,
  half = 1,
  one = 2,
  two = 3,
};
#endif

#ifdef GET_IC_DECL
enum ICValues {
  IALLUIS = 904,
  IALLU = 936,
  IVAU = 7081,
};
#endif

#ifdef GET_ISB_DECL
enum ISBValues {
  sy = 15,
};
#endif

#ifdef GET_PRCTX_DECL
enum PRCTXValues {
  RCTX = 883,
};
#endif

#ifdef GET_PRFM_DECL
enum PRFMValues {
  pldl1keep = 0,
  pldl1strm = 1,
  pldl2keep = 2,
  pldl2strm = 3,
  pldl3keep = 4,
  pldl3strm = 5,
  plil1keep = 8,
  plil1strm = 9,
  plil2keep = 10,
  plil2strm = 11,
  plil3keep = 12,
  plil3strm = 13,
  pstl1keep = 16,
  pstl1strm = 17,
  pstl2keep = 18,
  pstl2strm = 19,
  pstl3keep = 20,
  pstl3strm = 21,
};
#endif

#ifdef GET_PSB_DECL
enum PSBValues {
  csync = 17,
};
#endif

#ifdef GET_PSTATE_DECL
enum PStateValues {
  SPSel = 5,
  DAIFSet = 30,
  DAIFClr = 31,
  PAN = 4,
  UAO = 3,
  DIT = 26,
  SSBS = 25,
  TCO = 28,
};
#endif

#ifdef GET_SVEPREDPAT_DECL
enum SVEPREDPATValues {
  pow2 = 0,
  vl1 = 1,
  vl2 = 2,
  vl3 = 3,
  vl4 = 4,
  vl5 = 5,
  vl6 = 6,
  vl7 = 7,
  vl8 = 8,
  vl16 = 9,
  vl32 = 10,
  vl64 = 11,
  vl128 = 12,
  vl256 = 13,
  mul4 = 29,
  mul3 = 30,
  all = 31,
};
#endif

#ifdef GET_SVEPRFM_DECL
enum SVEPRFMValues {
  pldl1keep = 0,
  pldl1strm = 1,
  pldl2keep = 2,
  pldl2strm = 3,
  pldl3keep = 4,
  pldl3strm = 5,
  pstl1keep = 8,
  pstl1strm = 9,
  pstl2keep = 10,
  pstl2strm = 11,
  pstl3keep = 12,
  pstl3strm = 13,
};
#endif

#ifdef GET_SYSREG_DECL
enum SysRegValues {
  TRCRSCTLR15 = 35064,
  TRCRSCTLR16 = 34945,
  TRCRSCTLR17 = 34953,
  TRCRSCTLR18 = 34961,
  TRCRSCTLR19 = 34969,
  TRCRSCTLR20 = 34977,
  TRCRSCTLR21 = 34985,
  TRCRSCTLR22 = 34993,
  TRCRSCTLR23 = 35001,
  TRCRSCTLR24 = 35009,
  TRCRSCTLR25 = 35017,
  TRCRSCTLR26 = 35025,
  TRCRSCTLR27 = 35033,
  TRCRSCTLR28 = 35041,
  TRCRSCTLR29 = 35049,
  TRCRSCTLR30 = 35057,
  TRCRSCTLR31 = 35065,
  TRCSSCCR0 = 34946,
  TRCSSCCR1 = 34954,
  TRCSSCCR2 = 34962,
  TRCSSCCR3 = 34970,
  TRCSSCCR4 = 34978,
  TRCSSCCR5 = 34986,
  TRCSSCCR6 = 34994,
  TRCSSCCR7 = 35002,
  TRCSSCSR0 = 35010,
  TRCSSCSR1 = 35018,
  TRCSSCSR2 = 35026,
  TRCSSCSR3 = 35034,
  TRCSSCSR4 = 35042,
  TRCSSCSR5 = 35050,
  TRCSSCSR6 = 35058,
  TRCSSCSR7 = 35066,
  TRCSSPCICR0 = 34947,
  TRCSSPCICR1 = 34955,
  TRCSSPCICR2 = 34963,
  TRCSSPCICR3 = 34971,
  TRCSSPCICR4 = 34979,
  TRCSSPCICR5 = 34987,
  TRCSSPCICR6 = 34995,
  TRCSSPCICR7 = 35003,
  TRCPDCR = 34980,
  TRCACVR0 = 35072,
  TRCACVR1 = 35088,
  TRCACVR2 = 35104,
  TRCACVR3 = 35120,
  TRCACVR4 = 35136,
  TRCACVR5 = 35152,
  TRCACVR6 = 35168,
  TRCACVR7 = 35184,
  TRCACVR8 = 35073,
  TRCACVR9 = 35089,
  TRCACVR10 = 35105,
  TRCACVR11 = 35121,
  TRCACVR12 = 35137,
  TRCACVR13 = 35153,
  TRCACVR14 = 35169,
  TRCACVR15 = 35185,
  TRCACATR0 = 35074,
  TRCACATR1 = 35090,
  TRCACATR2 = 35106,
  TRCACATR3 = 35122,
  TRCACATR4 = 35138,
  TRCACATR5 = 35154,
  TRCACATR6 = 35170,
  TRCACATR7 = 35186,
  TRCACATR8 = 35075,
  TRCACATR9 = 35091,
  TRCACATR10 = 35107,
  TRCACATR11 = 35123,
  TRCACATR12 = 35139,
  TRCACATR13 = 35155,
  TRCACATR14 = 35171,
  TRCACATR15 = 35187,
  TRCDVCVR0 = 35076,
  TRCDVCVR1 = 35108,
  TRCDVCVR2 = 35140,
  TRCDVCVR3 = 35172,
  TRCDVCVR4 = 35077,
  TRCDVCVR5 = 35109,
  TRCDVCVR6 = 35141,
  TRCDVCVR7 = 35173,
  TRCDVCMR0 = 35078,
  TRCDVCMR1 = 35110,
  TRCDVCMR2 = 35142,
  TRCDVCMR3 = 35174,
  TRCDVCMR4 = 35079,
  TRCDVCMR5 = 35111,
  TRCDVCMR6 = 35143,
  TRCDVCMR7 = 35175,
  TRCCIDCVR0 = 35200,
  TRCCIDCVR1 = 35216,
  TRCCIDCVR2 = 35232,
  TRCCIDCVR3 = 35248,
  TRCCIDCVR4 = 35264,
  TRCCIDCVR5 = 35280,
  TRCCIDCVR6 = 35296,
  TRCCIDCVR7 = 35312,
  TRCVMIDCVR0 = 35201,
  TRCVMIDCVR1 = 35217,
  TRCVMIDCVR2 = 35233,
  TRCVMIDCVR3 = 35249,
  TRCVMIDCVR4 = 35265,
  TRCVMIDCVR5 = 35281,
  TRCVMIDCVR6 = 35297,
  TRCVMIDCVR7 = 35313,
  TRCCIDCCTLR0 = 35202,
  TRCCIDCCTLR1 = 35210,
  TRCVMIDCCTLR0 = 35218,
  TRCVMIDCCTLR1 = 35226,
  TRCITCTRL = 35716,
  TRCCLAIMSET = 35782,
  TRCCLAIMCLR = 35790,
  ICC_BPR1_EL1 = 50787,
  ICC_BPR0_EL1 = 50755,
  ICC_PMR_EL1 = 49712,
  ICC_CTLR_EL1 = 50788,
  ICC_CTLR_EL3 = 63076,
  ICC_SRE_EL1 = 50789,
  ICC_SRE_EL2 = 58957,
  ICC_SRE_EL3 = 63077,
  ICC_IGRPEN0_EL1 = 50790,
  ICC_IGRPEN1_EL1 = 50791,
  ICC_IGRPEN1_EL3 = 63079,
  ICC_AP0R0_EL1 = 50756,
  ICC_AP0R1_EL1 = 50757,
  ICC_AP0R2_EL1 = 50758,
  ICC_AP0R3_EL1 = 50759,
  ICC_AP1R0_EL1 = 50760,
  ICC_AP1R1_EL1 = 50761,
  ICC_AP1R2_EL1 = 50762,
  ICC_AP1R3_EL1 = 50763,
  ICH_AP0R0_EL2 = 58944,
  ICH_AP0R1_EL2 = 58945,
  ICH_AP0R2_EL2 = 58946,
  ICH_AP0R3_EL2 = 58947,
  ICH_AP1R0_EL2 = 58952,
  ICH_AP1R1_EL2 = 58953,
  ICH_AP1R2_EL2 = 58954,
  ICH_AP1R3_EL2 = 58955,
  ICH_HCR_EL2 = 58968,
  ICH_MISR_EL2 = 58970,
  ICH_VMCR_EL2 = 58975,
  ICH_LR0_EL2 = 58976,
  ICH_LR1_EL2 = 58977,
  ICH_LR2_EL2 = 58978,
  ICH_LR3_EL2 = 58979,
  ICH_LR4_EL2 = 58980,
  ICH_LR5_EL2 = 58981,
  ICH_LR6_EL2 = 58982,
  ICH_LR7_EL2 = 58983,
  ICH_LR8_EL2 = 58984,
  ICH_LR9_EL2 = 58985,
  ICH_LR10_EL2 = 58986,
  ICH_LR11_EL2 = 58987,
  ICH_LR12_EL2 = 58988,
  ICH_LR13_EL2 = 58989,
  ICH_LR14_EL2 = 58990,
  ICH_LR15_EL2 = 58991,
  PAN = 49683,
  LORSA_EL1 = 50464,
  LOREA_EL1 = 50465,
  LORN_EL1 = 50466,
  LORC_EL1 = 50467,
  TTBR1_EL2 = 57601,
  CONTEXTIDR_EL2 = 59009,
  CNTHV_TVAL_EL2 = 59160,
  CNTHV_CVAL_EL2 = 59162,
  CNTHV_CTL_EL2 = 59161,
  SCTLR_EL12 = 59520,
  CPACR_EL12 = 59522,
  TTBR0_EL12 = 59648,
  TTBR1_EL12 = 59649,
  TCR_EL12 = 59650,
  AFSR0_EL12 = 60040,
  AFSR1_EL12 = 60041,
  ESR_EL12 = 60048,
  FAR_EL12 = 60160,
  MAIR_EL12 = 60688,
  AMAIR_EL12 = 60696,
  VBAR_EL12 = 60928,
  CONTEXTIDR_EL12 = 61057,
  CNTKCTL_EL12 = 61192,
  CNTP_TVAL_EL02 = 61200,
  CNTP_CTL_EL02 = 61201,
  CNTP_CVAL_EL02 = 61202,
  CNTV_TVAL_EL02 = 61208,
  CNTV_CTL_EL02 = 61209,
  CNTV_CVAL_EL02 = 61210,
  SPSR_EL12 = 59904,
  ELR_EL12 = 59905,
  UAO = 49684,
  PMBLIMITR_EL1 = 50384,
  PMBPTR_EL1 = 50385,
  PMBSR_EL1 = 50387,
  PMBIDR_EL1 = 50391,
  PMSCR_EL2 = 58568,
  PMSCR_EL12 = 60616,
  PMSCR_EL1 = 50376,
  PMSICR_EL1 = 50378,
  PMSIRR_EL1 = 50379,
  PMSFCR_EL1 = 50380,
  PMSEVFR_EL1 = 50381,
  PMSLATFR_EL1 = 50382,
  PMSIDR_EL1 = 50383,
  ERRSELR_EL1 = 49817,
  ERXCTLR_EL1 = 49825,
  ERXSTATUS_EL1 = 49826,
  ERXADDR_EL1 = 49827,
  ERXMISC0_EL1 = 49832,
  ERXMISC1_EL1 = 49833,
  DISR_EL1 = 50697,
  VDISR_EL2 = 58889,
  VSESR_EL2 = 58003,
  APIAKeyLo_EL1 = 49416,
  APIAKeyHi_EL1 = 49417,
  APIBKeyLo_EL1 = 49418,
  APIBKeyHi_EL1 = 49419,
  APDAKeyLo_EL1 = 49424,
  APDAKeyHi_EL1 = 49425,
  APDBKeyLo_EL1 = 49426,
  APDBKeyHi_EL1 = 49427,
  APGAKeyLo_EL1 = 49432,
  APGAKeyHi_EL1 = 49433,
  VSTCR_EL2 = 57650,
  VSTTBR_EL2 = 57648,
  CNTHVS_TVAL_EL2 = 59168,
  CNTHVS_CVAL_EL2 = 59170,
  CNTHVS_CTL_EL2 = 59169,
  CNTHPS_TVAL_EL2 = 59176,
  CNTHPS_CVAL_EL2 = 59178,
  CNTHPS_CTL_EL2 = 59177,
  SDER32_EL2 = 57497,
  PMMIR_EL1 = 50422,
  ERXPFGCTL_EL1 = 49829,
  ERXPFGCDN_EL1 = 49830,
  ERXTS_EL1 = 49839,
  ERXMISC2_EL1 = 49834,
  ERXMISC3_EL1 = 49835,
  ERXPFGF_EL1 = 49828,
  MPAM0_EL1 = 50473,
  MPAM1_EL1 = 50472,
  MPAM2_EL2 = 58664,
  MPAM3_EL3 = 62760,
  MPAM1_EL12 = 60712,
  MPAMHCR_EL2 = 58656,
  MPAMVPMV_EL2 = 58657,
  MPAMVPM0_EL2 = 58672,
  MPAMVPM1_EL2 = 58673,
  MPAMVPM2_EL2 = 58674,
  MPAMVPM3_EL2 = 58675,
  MPAMVPM4_EL2 = 58676,
  MPAMVPM5_EL2 = 58677,
  MPAMVPM6_EL2 = 58678,
  MPAMVPM7_EL2 = 58679,
  MPAMIDR_EL1 = 50468,
  AMCR_EL0 = 56976,
  AMCFGR_EL0 = 56977,
  AMCGCR_EL0 = 56978,
  AMUSERENR_EL0 = 56979,
  AMCNTENCLR0_EL0 = 56980,
  AMCNTENSET0_EL0 = 56981,
  AMEVCNTR00_EL0 = 56992,
  AMEVCNTR01_EL0 = 56993,
  AMEVCNTR02_EL0 = 56994,
  AMEVCNTR03_EL0 = 56995,
  AMEVTYPER00_EL0 = 57008,
  AMEVTYPER01_EL0 = 57009,
  AMEVTYPER02_EL0 = 57010,
  AMEVTYPER03_EL0 = 57011,
  AMCNTENCLR1_EL0 = 56984,
  AMCNTENSET1_EL0 = 56985,
  AMEVCNTR10_EL0 = 57056,
  AMEVCNTR11_EL0 = 57057,
  AMEVCNTR12_EL0 = 57058,
  AMEVCNTR13_EL0 = 57059,
  AMEVCNTR14_EL0 = 57060,
  AMEVCNTR15_EL0 = 57061,
  AMEVCNTR16_EL0 = 57062,
  AMEVCNTR17_EL0 = 57063,
  AMEVCNTR18_EL0 = 57064,
  AMEVCNTR19_EL0 = 57065,
  AMEVCNTR110_EL0 = 57066,
  AMEVCNTR111_EL0 = 57067,
  AMEVCNTR112_EL0 = 57068,
  AMEVCNTR113_EL0 = 57069,
  AMEVCNTR114_EL0 = 57070,
  AMEVCNTR115_EL0 = 57071,
  AMEVTYPER10_EL0 = 57072,
  AMEVTYPER11_EL0 = 57073,
  AMEVTYPER12_EL0 = 57074,
  AMEVTYPER13_EL0 = 57075,
  AMEVTYPER14_EL0 = 57076,
  AMEVTYPER15_EL0 = 57077,
  AMEVTYPER16_EL0 = 57078,
  AMEVTYPER17_EL0 = 57079,
  AMEVTYPER18_EL0 = 57080,
  AMEVTYPER19_EL0 = 57081,
  AMEVTYPER110_EL0 = 57082,
  AMEVTYPER111_EL0 = 57083,
  AMEVTYPER112_EL0 = 57084,
  AMEVTYPER113_EL0 = 57085,
  AMEVTYPER114_EL0 = 57086,
  AMEVTYPER115_EL0 = 57087,
  TRFCR_EL1 = 49297,
  TRFCR_EL2 = 57489,
  TRFCR_EL12 = 59537,
  DIT = 55829,
  VNCR_EL2 = 57616,
  ZCR_EL1 = 49296,
  ZCR_EL2 = 57488,
  ZCR_EL3 = 61584,
  ZCR_EL12 = 59536,
  SSBS = 55830,
  TCO = 55831,
  GCR_EL1 = 49286,
  RGSR_EL1 = 49285,
  TFSR_EL1 = 49840,
  TFSR_EL2 = 58032,
  TFSR_EL3 = 62128,
  TFSR_EL12 = 60080,
  TFSRE0_EL1 = 49841,
  GMID_EL1 = 51204,
  TRCRSR = 34896,
  TRCEXTINSELR0 = 34884,
  TRCEXTINSELR1 = 34892,
  TRCEXTINSELR2 = 34900,
  TRCEXTINSELR3 = 34908,
  TRBLIMITR_EL1 = 50392,
  TRBPTR_EL1 = 50393,
  TRBBASER_EL1 = 50394,
  TRBSR_EL1 = 50395,
  TRBMAR_EL1 = 50396,
  TRBTRG_EL1 = 50398,
  TRBIDR_EL1 = 50399,
  CPM_IOACC_CTL_EL3 = 65424,
  MDCCSR_EL0 = 38920,
  DBGDTRRX_EL0 = 38952,
  MDRAR_EL1 = 32896,
  OSLSR_EL1 = 32908,
  DBGAUTHSTATUS_EL1 = 33782,
  PMCEID0_EL0 = 56550,
  PMCEID1_EL0 = 56551,
  MIDR_EL1 = 49152,
  CCSIDR_EL1 = 51200,
  CCSIDR2_EL1 = 51202,
  CLIDR_EL1 = 51201,
  CTR_EL0 = 55297,
  MPIDR_EL1 = 49157,
  REVIDR_EL1 = 49158,
  AIDR_EL1 = 51207,
  DCZID_EL0 = 55303,
  ID_PFR0_EL1 = 49160,
  ID_PFR1_EL1 = 49161,
  ID_PFR2_EL1 = 49180,
  ID_DFR0_EL1 = 49162,
  ID_AFR0_EL1 = 49163,
  ID_MMFR0_EL1 = 49164,
  ID_MMFR1_EL1 = 49165,
  ID_MMFR2_EL1 = 49166,
  ID_MMFR3_EL1 = 49167,
  ID_ISAR0_EL1 = 49168,
  ID_ISAR1_EL1 = 49169,
  ID_ISAR2_EL1 = 49170,
  ID_ISAR3_EL1 = 49171,
  ID_ISAR4_EL1 = 49172,
  ID_ISAR5_EL1 = 49173,
  ID_ISAR6_EL1 = 49175,
  ID_AA64PFR0_EL1 = 49184,
  ID_AA64PFR1_EL1 = 49185,
  ID_AA64DFR0_EL1 = 49192,
  ID_AA64DFR1_EL1 = 49193,
  ID_AA64AFR0_EL1 = 49196,
  ID_AA64AFR1_EL1 = 49197,
  ID_AA64ISAR0_EL1 = 49200,
  ID_AA64ISAR1_EL1 = 49201,
  ID_AA64MMFR0_EL1 = 49208,
  ID_AA64MMFR1_EL1 = 49209,
  ID_AA64MMFR2_EL1 = 49210,
  MVFR0_EL1 = 49176,
  MVFR1_EL1 = 49177,
  MVFR2_EL1 = 49178,
  RVBAR_EL1 = 50689,
  RVBAR_EL2 = 58881,
  RVBAR_EL3 = 62977,
  ISR_EL1 = 50696,
  CNTPCT_EL0 = 57089,
  CNTVCT_EL0 = 57090,
  ID_MMFR4_EL1 = 49174,
  ID_MMFR5_EL1 = 49182,
  TRCSTATR = 34840,
  TRCIDR8 = 34822,
  TRCIDR9 = 34830,
  TRCIDR10 = 34838,
  TRCIDR11 = 34846,
  TRCIDR12 = 34854,
  TRCIDR13 = 34862,
  TRCIDR0 = 34887,
  TRCIDR1 = 34895,
  TRCIDR2 = 34903,
  TRCIDR3 = 34911,
  TRCIDR4 = 34919,
  TRCIDR5 = 34927,
  TRCIDR6 = 34935,
  TRCIDR7 = 34943,
  TRCOSLSR = 34956,
  TRCPDSR = 34988,
  TRCDEVAFF0 = 35798,
  TRCDEVAFF1 = 35806,
  TRCLSR = 35822,
  TRCAUTHSTATUS = 35830,
  TRCDEVARCH = 35838,
  TRCDEVID = 35735,
  TRCDEVTYPE = 35743,
  TRCPIDR4 = 35751,
  TRCPIDR5 = 35759,
  TRCPIDR6 = 35767,
  TRCPIDR7 = 35775,
  TRCPIDR0 = 35783,
  TRCPIDR1 = 35791,
  TRCPIDR2 = 35799,
  TRCPIDR3 = 35807,
  TRCCIDR0 = 35815,
  TRCCIDR1 = 35823,
  TRCCIDR2 = 35831,
  TRCCIDR3 = 35839,
  ICC_IAR1_EL1 = 50784,
  ICC_IAR0_EL1 = 50752,
  ICC_HPPIR1_EL1 = 50786,
  ICC_HPPIR0_EL1 = 50754,
  ICC_RPR_EL1 = 50779,
  ICH_VTR_EL2 = 58969,
  ICH_EISR_EL2 = 58971,
  ICH_ELRSR_EL2 = 58973,
  ID_AA64ZFR0_EL1 = 49188,
  LORID_EL1 = 50471,
  ERRIDR_EL1 = 49816,
  ERXFR_EL1 = 49824,
  RNDR = 55584,
  RNDRRS = 55585,
  SCXTNUM_EL0 = 56967,
  SCXTNUM_EL1 = 50823,
  SCXTNUM_EL2 = 59015,
  SCXTNUM_EL3 = 63111,
  SCXTNUM_EL12 = 61063,
  DBGDTRTX_EL0 = 38952,
  OSLAR_EL1 = 32900,
  PMSWINC_EL0 = 56548,
  TRCOSLAR = 34948,
  TRCLAR = 35814,
  ICC_EOIR1_EL1 = 50785,
  ICC_EOIR0_EL1 = 50753,
  ICC_DIR_EL1 = 50777,
  ICC_SGI1R_EL1 = 50781,
  ICC_ASGI1R_EL1 = 50782,
  ICC_SGI0R_EL1 = 50783,
  OSDTRRX_EL1 = 32770,
  OSDTRTX_EL1 = 32794,
  TEECR32_EL1 = 36864,
  MDCCINT_EL1 = 32784,
  MDSCR_EL1 = 32786,
  DBGDTR_EL0 = 38944,
  OSECCR_EL1 = 32818,
  DBGVCR32_EL2 = 41016,
  DBGBVR0_EL1 = 32772,
  DBGBVR1_EL1 = 32780,
  DBGBVR2_EL1 = 32788,
  DBGBVR3_EL1 = 32796,
  DBGBVR4_EL1 = 32804,
  DBGBVR5_EL1 = 32812,
  DBGBVR6_EL1 = 32820,
  DBGBVR7_EL1 = 32828,
  DBGBVR8_EL1 = 32836,
  DBGBVR9_EL1 = 32844,
  DBGBVR10_EL1 = 32852,
  DBGBVR11_EL1 = 32860,
  DBGBVR12_EL1 = 32868,
  DBGBVR13_EL1 = 32876,
  DBGBVR14_EL1 = 32884,
  DBGBVR15_EL1 = 32892,
  DBGBCR0_EL1 = 32773,
  DBGBCR1_EL1 = 32781,
  DBGBCR2_EL1 = 32789,
  DBGBCR3_EL1 = 32797,
  DBGBCR4_EL1 = 32805,
  DBGBCR5_EL1 = 32813,
  DBGBCR6_EL1 = 32821,
  DBGBCR7_EL1 = 32829,
  DBGBCR8_EL1 = 32837,
  DBGBCR9_EL1 = 32845,
  DBGBCR10_EL1 = 32853,
  DBGBCR11_EL1 = 32861,
  DBGBCR12_EL1 = 32869,
  DBGBCR13_EL1 = 32877,
  DBGBCR14_EL1 = 32885,
  DBGBCR15_EL1 = 32893,
  DBGWVR0_EL1 = 32774,
  DBGWVR1_EL1 = 32782,
  DBGWVR2_EL1 = 32790,
  DBGWVR3_EL1 = 32798,
  DBGWVR4_EL1 = 32806,
  DBGWVR5_EL1 = 32814,
  DBGWVR6_EL1 = 32822,
  DBGWVR7_EL1 = 32830,
  DBGWVR8_EL1 = 32838,
  DBGWVR9_EL1 = 32846,
  DBGWVR10_EL1 = 32854,
  DBGWVR11_EL1 = 32862,
  DBGWVR12_EL1 = 32870,
  DBGWVR13_EL1 = 32878,
  DBGWVR14_EL1 = 32886,
  DBGWVR15_EL1 = 32894,
  DBGWCR0_EL1 = 32775,
  DBGWCR1_EL1 = 32783,
  DBGWCR2_EL1 = 32791,
  DBGWCR3_EL1 = 32799,
  DBGWCR4_EL1 = 32807,
  DBGWCR5_EL1 = 32815,
  DBGWCR6_EL1 = 32823,
  DBGWCR7_EL1 = 32831,
  DBGWCR8_EL1 = 32839,
  DBGWCR9_EL1 = 32847,
  DBGWCR10_EL1 = 32855,
  DBGWCR11_EL1 = 32863,
  DBGWCR12_EL1 = 32871,
  DBGWCR13_EL1 = 32879,
  DBGWCR14_EL1 = 32887,
  DBGWCR15_EL1 = 32895,
  TEEHBR32_EL1 = 36992,
  OSDLR_EL1 = 32924,
  DBGPRCR_EL1 = 32932,
  DBGCLAIMSET_EL1 = 33734,
  DBGCLAIMCLR_EL1 = 33742,
  CSSELR_EL1 = 53248,
  VPIDR_EL2 = 57344,
  VMPIDR_EL2 = 57349,
  CPACR_EL1 = 49282,
  SCTLR_EL1 = 49280,
  SCTLR_EL2 = 57472,
  SCTLR_EL3 = 61568,
  ACTLR_EL1 = 49281,
  ACTLR_EL2 = 57473,
  ACTLR_EL3 = 61569,
  HCR_EL2 = 57480,
  SCR_EL3 = 61576,
  MDCR_EL2 = 57481,
  SDER32_EL3 = 61577,
  CPTR_EL2 = 57482,
  CPTR_EL3 = 61578,
  HSTR_EL2 = 57483,
  HACR_EL2 = 57487,
  MDCR_EL3 = 61593,
  TTBR0_EL1 = 49408,
  TTBR0_EL2 = 57600,
  TTBR0_EL3 = 61696,
  TTBR1_EL1 = 49409,
  TCR_EL1 = 49410,
  TCR_EL2 = 57602,
  TCR_EL3 = 61698,
  VTTBR_EL2 = 57608,
  VTCR_EL2 = 57610,
  DACR32_EL2 = 57728,
  SPSR_EL1 = 49664,
  SPSR_EL2 = 57856,
  SPSR_EL3 = 61952,
  ELR_EL1 = 49665,
  ELR_EL2 = 57857,
  ELR_EL3 = 61953,
  SP_EL0 = 49672,
  SP_EL1 = 57864,
  SP_EL2 = 61960,
  SPSel = 49680,
  NZCV = 55824,
  DAIF = 55825,
  CurrentEL = 49682,
  SPSR_irq = 57880,
  SPSR_abt = 57881,
  SPSR_und = 57882,
  SPSR_fiq = 57883,
  FPCR = 55840,
  FPSR = 55841,
  DSPSR_EL0 = 55848,
  DLR_EL0 = 55849,
  IFSR32_EL2 = 57985,
  AFSR0_EL1 = 49800,
  AFSR0_EL2 = 57992,
  AFSR0_EL3 = 62088,
  AFSR1_EL1 = 49801,
  AFSR1_EL2 = 57993,
  AFSR1_EL3 = 62089,
  ESR_EL1 = 49808,
  ESR_EL2 = 58000,
  ESR_EL3 = 62096,
  FPEXC32_EL2 = 58008,
  FAR_EL1 = 49920,
  FAR_EL2 = 58112,
  FAR_EL3 = 62208,
  HPFAR_EL2 = 58116,
  PAR_EL1 = 50080,
  PMCR_EL0 = 56544,
  PMCNTENSET_EL0 = 56545,
  PMCNTENCLR_EL0 = 56546,
  PMOVSCLR_EL0 = 56547,
  PMSELR_EL0 = 56549,
  PMCCNTR_EL0 = 56552,
  PMXEVTYPER_EL0 = 56553,
  PMXEVCNTR_EL0 = 56554,
  PMUSERENR_EL0 = 56560,
  PMINTENSET_EL1 = 50417,
  PMINTENCLR_EL1 = 50418,
  PMOVSSET_EL0 = 56563,
  MAIR_EL1 = 50448,
  MAIR_EL2 = 58640,
  MAIR_EL3 = 62736,
  AMAIR_EL1 = 50456,
  AMAIR_EL2 = 58648,
  AMAIR_EL3 = 62744,
  VBAR_EL1 = 50688,
  VBAR_EL2 = 58880,
  VBAR_EL3 = 62976,
  RMR_EL1 = 50690,
  RMR_EL2 = 58882,
  RMR_EL3 = 62978,
  CONTEXTIDR_EL1 = 50817,
  TPIDR_EL0 = 56962,
  TPIDR_EL2 = 59010,
  TPIDR_EL3 = 63106,
  TPIDRRO_EL0 = 56963,
  TPIDR_EL1 = 50820,
  CNTFRQ_EL0 = 57088,
  CNTVOFF_EL2 = 59139,
  CNTKCTL_EL1 = 50952,
  CNTHCTL_EL2 = 59144,
  CNTP_TVAL_EL0 = 57104,
  CNTHP_TVAL_EL2 = 59152,
  CNTPS_TVAL_EL1 = 65296,
  CNTP_CTL_EL0 = 57105,
  CNTHP_CTL_EL2 = 59153,
  CNTPS_CTL_EL1 = 65297,
  CNTP_CVAL_EL0 = 57106,
  CNTHP_CVAL_EL2 = 59154,
  CNTPS_CVAL_EL1 = 65298,
  CNTV_TVAL_EL0 = 57112,
  CNTV_CTL_EL0 = 57113,
  CNTV_CVAL_EL0 = 57114,
  PMEVCNTR0_EL0 = 57152,
  PMEVCNTR1_EL0 = 57153,
  PMEVCNTR2_EL0 = 57154,
  PMEVCNTR3_EL0 = 57155,
  PMEVCNTR4_EL0 = 57156,
  PMEVCNTR5_EL0 = 57157,
  PMEVCNTR6_EL0 = 57158,
  PMEVCNTR7_EL0 = 57159,
  PMEVCNTR8_EL0 = 57160,
  PMEVCNTR9_EL0 = 57161,
  PMEVCNTR10_EL0 = 57162,
  PMEVCNTR11_EL0 = 57163,
  PMEVCNTR12_EL0 = 57164,
  PMEVCNTR13_EL0 = 57165,
  PMEVCNTR14_EL0 = 57166,
  PMEVCNTR15_EL0 = 57167,
  PMEVCNTR16_EL0 = 57168,
  PMEVCNTR17_EL0 = 57169,
  PMEVCNTR18_EL0 = 57170,
  PMEVCNTR19_EL0 = 57171,
  PMEVCNTR20_EL0 = 57172,
  PMEVCNTR21_EL0 = 57173,
  PMEVCNTR22_EL0 = 57174,
  PMEVCNTR23_EL0 = 57175,
  PMEVCNTR24_EL0 = 57176,
  PMEVCNTR25_EL0 = 57177,
  PMEVCNTR26_EL0 = 57178,
  PMEVCNTR27_EL0 = 57179,
  PMEVCNTR28_EL0 = 57180,
  PMEVCNTR29_EL0 = 57181,
  PMEVCNTR30_EL0 = 57182,
  PMCCFILTR_EL0 = 57215,
  PMEVTYPER0_EL0 = 57184,
  PMEVTYPER1_EL0 = 57185,
  PMEVTYPER2_EL0 = 57186,
  PMEVTYPER3_EL0 = 57187,
  PMEVTYPER4_EL0 = 57188,
  PMEVTYPER5_EL0 = 57189,
  PMEVTYPER6_EL0 = 57190,
  PMEVTYPER7_EL0 = 57191,
  PMEVTYPER8_EL0 = 57192,
  PMEVTYPER9_EL0 = 57193,
  PMEVTYPER10_EL0 = 57194,
  PMEVTYPER11_EL0 = 57195,
  PMEVTYPER12_EL0 = 57196,
  PMEVTYPER13_EL0 = 57197,
  PMEVTYPER14_EL0 = 57198,
  PMEVTYPER15_EL0 = 57199,
  PMEVTYPER16_EL0 = 57200,
  PMEVTYPER17_EL0 = 57201,
  PMEVTYPER18_EL0 = 57202,
  PMEVTYPER19_EL0 = 57203,
  PMEVTYPER20_EL0 = 57204,
  PMEVTYPER21_EL0 = 57205,
  PMEVTYPER22_EL0 = 57206,
  PMEVTYPER23_EL0 = 57207,
  PMEVTYPER24_EL0 = 57208,
  PMEVTYPER25_EL0 = 57209,
  PMEVTYPER26_EL0 = 57210,
  PMEVTYPER27_EL0 = 57211,
  PMEVTYPER28_EL0 = 57212,
  PMEVTYPER29_EL0 = 57213,
  PMEVTYPER30_EL0 = 57214,
  TRCPRGCTLR = 34824,
  TRCPROCSELR = 34832,
  TRCCONFIGR = 34848,
  TRCAUXCTLR = 34864,
  TRCEVENTCTL0R = 34880,
  TRCEVENTCTL1R = 34888,
  TRCSTALLCTLR = 34904,
  TRCTSCTLR = 34912,
  TRCSYNCPR = 34920,
  TRCCCCTLR = 34928,
  TRCBBCTLR = 34936,
  TRCTRACEIDR = 34817,
  TRCQCTLR = 34825,
  TRCVICTLR = 34818,
  TRCVIIECTLR = 34826,
  TRCVISSCTLR = 34834,
  TRCVIPCSSCTLR = 34842,
  TRCVDCTLR = 34882,
  TRCVDSACCTLR = 34890,
  TRCVDARCCTLR = 34898,
  TRCSEQEVR0 = 34820,
  TRCSEQEVR1 = 34828,
  TRCSEQEVR2 = 34836,
  TRCSEQRSTEVR = 34868,
  TRCSEQSTR = 34876,
  TRCEXTINSELR = 34884,
  TRCCNTRLDVR0 = 34821,
  TRCCNTRLDVR1 = 34829,
  TRCCNTRLDVR2 = 34837,
  TRCCNTRLDVR3 = 34845,
  TRCCNTCTLR0 = 34853,
  TRCCNTCTLR1 = 34861,
  TRCCNTCTLR2 = 34869,
  TRCCNTCTLR3 = 34877,
  TRCCNTVR0 = 34885,
  TRCCNTVR1 = 34893,
  TRCCNTVR2 = 34901,
  TRCCNTVR3 = 34909,
  TRCIMSPEC0 = 34823,
  TRCIMSPEC1 = 34831,
  TRCIMSPEC2 = 34839,
  TRCIMSPEC3 = 34847,
  TRCIMSPEC4 = 34855,
  TRCIMSPEC5 = 34863,
  TRCIMSPEC6 = 34871,
  TRCIMSPEC7 = 34879,
  TRCRSCTLR2 = 34960,
  TRCRSCTLR3 = 34968,
  TRCRSCTLR4 = 34976,
  TRCRSCTLR5 = 34984,
  TRCRSCTLR6 = 34992,
  TRCRSCTLR7 = 35000,
  TRCRSCTLR8 = 35008,
  TRCRSCTLR9 = 35016,
  TRCRSCTLR10 = 35024,
  TRCRSCTLR11 = 35032,
  TRCRSCTLR12 = 35040,
  TRCRSCTLR13 = 35048,
  TRCRSCTLR14 = 35056,
};
#endif

#ifdef GET_TLBI_DECL
enum TLBIValues {
  IPAS2E1IS = 9217,
  IPAS2LE1IS = 9221,
  VMALLE1IS = 1048,
  ALLE2IS = 9240,
  ALLE3IS = 13336,
  VAE1IS = 1049,
  VAE2IS = 9241,
  VAE3IS = 13337,
  ASIDE1IS = 1050,
  VAAE1IS = 1051,
  ALLE1IS = 9244,
  VALE1IS = 1053,
  VALE2IS = 9245,
  VALE3IS = 13341,
  VMALLS12E1IS = 9246,
  VAALE1IS = 1055,
  IPAS2E1 = 9249,
  IPAS2LE1 = 9253,
  VMALLE1 = 1080,
  ALLE2 = 9272,
  ALLE3 = 13368,
  VAE1 = 1081,
  VAE2 = 9273,
  VAE3 = 13369,
  ASIDE1 = 1082,
  VAAE1 = 1083,
  ALLE1 = 9276,
  VALE1 = 1085,
  VALE2 = 9277,
  VALE3 = 13373,
  VMALLS12E1 = 9278,
  VAALE1 = 1087,
  VMALLE1OS = 1032,
  VAE1OS = 1033,
  ASIDE1OS = 1034,
  VAAE1OS = 1035,
  VALE1OS = 1037,
  VAALE1OS = 1039,
  IPAS2E1OS = 9248,
  IPAS2LE1OS = 9252,
  VAE2OS = 9225,
  VALE2OS = 9229,
  VMALLS12E1OS = 9230,
  VAE3OS = 13321,
  VALE3OS = 13325,
  ALLE2OS = 9224,
  ALLE1OS = 9228,
  ALLE3OS = 13320,
  RVAE1 = 1073,
  RVAAE1 = 1075,
  RVALE1 = 1077,
  RVAALE1 = 1079,
  RVAE1IS = 1041,
  RVAAE1IS = 1043,
  RVALE1IS = 1045,
  RVAALE1IS = 1047,
  RVAE1OS = 1065,
  RVAAE1OS = 1067,
  RVALE1OS = 1069,
  RVAALE1OS = 1071,
  RIPAS2E1IS = 9218,
  RIPAS2LE1IS = 9222,
  RIPAS2E1 = 9250,
  RIPAS2LE1 = 9254,
  RIPAS2E1OS = 9251,
  RIPAS2LE1OS = 9255,
  RVAE2 = 9265,
  RVALE2 = 9269,
  RVAE2IS = 9233,
  RVALE2IS = 9237,
  RVAE2OS = 9257,
  RVALE2OS = 9261,
  RVAE3 = 13361,
  RVALE3 = 13365,
  RVAE3IS = 13329,
  RVALE3IS = 13333,
  RVAE3OS = 13353,
  RVALE3OS = 13357,
};
#endif

#ifdef GET_TSB_DECL
enum TSBValues {
  csync = 0,
};
#endif

#ifdef GET_AT_DECL
const AT *lookupATByName(StringRef Name);
const AT *lookupATByEncoding(uint16_t Encoding);
#endif

#ifdef GET_AT_IMPL
constexpr AT ATsList[] = {
  { "S1E1R", 0x3C0,  {}  }, // 0
  { "S1E2R", 0x23C0,  {}  }, // 1
  { "S1E3R", 0x33C0,  {}  }, // 2
  { "S1E1W", 0x3C1,  {}  }, // 3
  { "S1E2W", 0x23C1,  {}  }, // 4
  { "S1E3W", 0x33C1,  {}  }, // 5
  { "S1E0R", 0x3C2,  {}  }, // 6
  { "S1E0W", 0x3C3,  {}  }, // 7
  { "S12E1R", 0x23C4,  {}  }, // 8
  { "S12E1W", 0x23C5,  {}  }, // 9
  { "S12E0R", 0x23C6,  {}  }, // 10
  { "S12E0W", 0x23C7,  {}  }, // 11
  { "S1E1RP", 0x3C8,  {AArch64::FeaturePAN_RWV}  }, // 12
  { "S1E1WP", 0x3C9,  {AArch64::FeaturePAN_RWV}  }, // 13
 };

const AT *lookupATByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "S12E0R", 10 },
    { "S12E0W", 11 },
    { "S12E1R", 8 },
    { "S12E1W", 9 },
    { "S1E0R", 6 },
    { "S1E0W", 7 },
    { "S1E1R", 0 },
    { "S1E1RP", 12 },
    { "S1E1W", 3 },
    { "S1E1WP", 13 },
    { "S1E2R", 1 },
    { "S1E2W", 4 },
    { "S1E3R", 2 },
    { "S1E3W", 5 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &ATsList[Idx->_index];
}

const AT *lookupATByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x3C0, 0 },
    { 0x3C1, 3 },
    { 0x3C2, 6 },
    { 0x3C3, 7 },
    { 0x3C8, 12 },
    { 0x3C9, 13 },
    { 0x23C0, 1 },
    { 0x23C1, 4 },
    { 0x23C4, 8 },
    { 0x23C5, 9 },
    { 0x23C6, 10 },
    { 0x23C7, 11 },
    { 0x33C0, 2 },
    { 0x33C1, 5 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &ATsList[Idx->_index];
}
#endif

#ifdef GET_BTI_DECL
const BTI *lookupBTIByName(StringRef Name);
const BTI *lookupBTIByEncoding(uint8_t Encoding);
#endif

#ifdef GET_BTI_IMPL
constexpr BTI BTIsList[] = {
  { "c", 0x1 }, // 0
  { "j", 0x2 }, // 1
  { "jc", 0x3 }, // 2
 };

const BTI *lookupBTIByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "C", 0 },
    { "J", 1 },
    { "JC", 2 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &BTIsList[Idx->_index];
}

const BTI *lookupBTIByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x1, 0 },
    { 0x2, 1 },
    { 0x3, 2 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &BTIsList[Idx->_index];
}
#endif

#ifdef GET_DB_DECL
const DB *lookupDBByName(StringRef Name);
const DB *lookupDBByEncoding(uint8_t Encoding);
#endif

#ifdef GET_DB_IMPL
constexpr DB DBsList[] = {
  { "oshld", 0x1 }, // 0
  { "oshst", 0x2 }, // 1
  { "osh", 0x3 }, // 2
  { "nshld", 0x5 }, // 3
  { "nshst", 0x6 }, // 4
  { "nsh", 0x7 }, // 5
  { "ishld", 0x9 }, // 6
  { "ishst", 0xA }, // 7
  { "ish", 0xB }, // 8
  { "ld", 0xD }, // 9
  { "st", 0xE }, // 10
  { "sy", 0xF }, // 11
 };

const DB *lookupDBByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "ISH", 8 },
    { "ISHLD", 6 },
    { "ISHST", 7 },
    { "LD", 9 },
    { "NSH", 5 },
    { "NSHLD", 3 },
    { "NSHST", 4 },
    { "OSH", 2 },
    { "OSHLD", 0 },
    { "OSHST", 1 },
    { "ST", 10 },
    { "SY", 11 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &DBsList[Idx->_index];
}

const DB *lookupDBByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x1, 0 },
    { 0x2, 1 },
    { 0x3, 2 },
    { 0x5, 3 },
    { 0x6, 4 },
    { 0x7, 5 },
    { 0x9, 6 },
    { 0xA, 7 },
    { 0xB, 8 },
    { 0xD, 9 },
    { 0xE, 10 },
    { 0xF, 11 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &DBsList[Idx->_index];
}
#endif

#ifdef GET_DC_DECL
const DC *lookupDCByName(StringRef Name);
const DC *lookupDCByEncoding(uint16_t Encoding);
#endif

#ifdef GET_DC_IMPL
constexpr DC DCsList[] = {
  { "ZVA", 0x1BA1,  {}  }, // 0
  { "IVAC", 0x3B1,  {}  }, // 1
  { "ISW", 0x3B2,  {}  }, // 2
  { "CVAC", 0x1BD1,  {}  }, // 3
  { "CSW", 0x3D2,  {}  }, // 4
  { "CVAU", 0x1BD9,  {}  }, // 5
  { "CIVAC", 0x1BF1,  {}  }, // 6
  { "CISW", 0x3F2,  {}  }, // 7
  { "CVAP", 0x1BE1,  {AArch64::FeatureCCPP}  }, // 8
  { "CVADP", 0x1BE9,  {AArch64::FeatureCacheDeepPersist}  }, // 9
  { "IGVAC", 0x3B3,  {AArch64::FeatureMTE}  }, // 10
  { "IGSW", 0x3B4,  {AArch64::FeatureMTE}  }, // 11
  { "CGSW", 0x3D4,  {AArch64::FeatureMTE}  }, // 12
  { "CIGSW", 0x3F4,  {AArch64::FeatureMTE}  }, // 13
  { "CGVAC", 0x1BD3,  {AArch64::FeatureMTE}  }, // 14
  { "CGVAP", 0x1BE3,  {AArch64::FeatureMTE}  }, // 15
  { "CGVADP", 0x1BEB,  {AArch64::FeatureMTE}  }, // 16
  { "CIGVAC", 0x1BF3,  {AArch64::FeatureMTE}  }, // 17
  { "GVA", 0x1BA3,  {AArch64::FeatureMTE}  }, // 18
  { "IGDVAC", 0x3B5,  {AArch64::FeatureMTE}  }, // 19
  { "IGDSW", 0x3B6,  {AArch64::FeatureMTE}  }, // 20
  { "CGDSW", 0x3D6,  {AArch64::FeatureMTE}  }, // 21
  { "CIGDSW", 0x3F6,  {AArch64::FeatureMTE}  }, // 22
  { "CGDVAC", 0x1BD5,  {AArch64::FeatureMTE}  }, // 23
  { "CGDVAP", 0x1BE5,  {AArch64::FeatureMTE}  }, // 24
  { "CGDVADP", 0x1BED,  {AArch64::FeatureMTE}  }, // 25
  { "CIGDVAC", 0x1BF5,  {AArch64::FeatureMTE}  }, // 26
  { "GZVA", 0x1BA4,  {AArch64::FeatureMTE}  }, // 27
 };

const DC *lookupDCByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "CGDSW", 21 },
    { "CGDVAC", 23 },
    { "CGDVADP", 25 },
    { "CGDVAP", 24 },
    { "CGSW", 12 },
    { "CGVAC", 14 },
    { "CGVADP", 16 },
    { "CGVAP", 15 },
    { "CIGDSW", 22 },
    { "CIGDVAC", 26 },
    { "CIGSW", 13 },
    { "CIGVAC", 17 },
    { "CISW", 7 },
    { "CIVAC", 6 },
    { "CSW", 4 },
    { "CVAC", 3 },
    { "CVADP", 9 },
    { "CVAP", 8 },
    { "CVAU", 5 },
    { "GVA", 18 },
    { "GZVA", 27 },
    { "IGDSW", 20 },
    { "IGDVAC", 19 },
    { "IGSW", 11 },
    { "IGVAC", 10 },
    { "ISW", 2 },
    { "IVAC", 1 },
    { "ZVA", 0 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &DCsList[Idx->_index];
}

const DC *lookupDCByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x3B1, 1 },
    { 0x3B2, 2 },
    { 0x3B3, 10 },
    { 0x3B4, 11 },
    { 0x3B5, 19 },
    { 0x3B6, 20 },
    { 0x3D2, 4 },
    { 0x3D4, 12 },
    { 0x3D6, 21 },
    { 0x3F2, 7 },
    { 0x3F4, 13 },
    { 0x3F6, 22 },
    { 0x1BA1, 0 },
    { 0x1BA3, 18 },
    { 0x1BA4, 27 },
    { 0x1BD1, 3 },
    { 0x1BD3, 14 },
    { 0x1BD5, 23 },
    { 0x1BD9, 5 },
    { 0x1BE1, 8 },
    { 0x1BE3, 15 },
    { 0x1BE5, 24 },
    { 0x1BE9, 9 },
    { 0x1BEB, 16 },
    { 0x1BED, 25 },
    { 0x1BF1, 6 },
    { 0x1BF3, 17 },
    { 0x1BF5, 26 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &DCsList[Idx->_index];
}
#endif

#ifdef GET_EXACTFPIMM_DECL
const ExactFPImm *lookupExactFPImmByEnum(uint8_t Enum);
const ExactFPImm *lookupExactFPImmByRepr(StringRef Repr);
#endif

#ifdef GET_EXACTFPIMM_IMPL
constexpr ExactFPImm ExactFPImmsList[] = {
  { "zero", 0x0, "0.0" }, // 0
  { "half", 0x1, "0.5" }, // 1
  { "one", 0x2, "1.0" }, // 2
  { "two", 0x3, "2.0" }, // 3
 };

const ExactFPImm *lookupExactFPImmByEnum(uint8_t Enum) {
  struct IndexType {
    uint8_t Enum;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
  };

  auto Table = makeArrayRef(Index);
  size_t Idx = Enum;
  return Idx >= Table.size() ? nullptr : &ExactFPImmsList[Table[Idx]._index];
}

const ExactFPImm *lookupExactFPImmByRepr(StringRef Repr) {
  struct IndexType {
    const char * Repr;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "0.0", 0 },
    { "0.5", 1 },
    { "1.0", 2 },
    { "2.0", 3 },
  };

  struct KeyType {
    std::string Repr;
  };
  KeyType Key = { Repr.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpRepr = StringRef(LHS.Repr).compare(RHS.Repr);
      if (CmpRepr < 0) return true;
      if (CmpRepr > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Repr != Idx->Repr)
    return nullptr;
  return &ExactFPImmsList[Idx->_index];
}
#endif

#ifdef GET_IC_DECL
const IC *lookupICByName(StringRef Name);
const IC *lookupICByEncoding(uint16_t Encoding);
#endif

#ifdef GET_IC_IMPL
constexpr IC ICsList[] = {
  { "IALLUIS", 0x388, false }, // 0
  { "IALLU", 0x3A8, false }, // 1
  { "IVAU", 0x1BA9, true }, // 2
 };

const IC *lookupICByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "IALLU", 1 },
    { "IALLUIS", 0 },
    { "IVAU", 2 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &ICsList[Idx->_index];
}

const IC *lookupICByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x388, 0 },
    { 0x3A8, 1 },
    { 0x1BA9, 2 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &ICsList[Idx->_index];
}
#endif

#ifdef GET_ISB_DECL
const ISB *lookupISBByName(StringRef Name);
const ISB *lookupISBByEncoding(uint8_t Encoding);
#endif

#ifdef GET_ISB_IMPL
constexpr ISB ISBsList[] = {
  { "sy", 0xF }, // 0
 };

const ISB *lookupISBByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "SY", 0 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &ISBsList[Idx->_index];
}

const ISB *lookupISBByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0xF, 0 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &ISBsList[Idx->_index];
}
#endif

#ifdef GET_PRCTX_DECL
const PRCTX *lookupPRCTXByName(StringRef Name);
const PRCTX *lookupPRCTXByEncoding(uint16_t Encoding);
#endif

#ifdef GET_PRCTX_IMPL
constexpr PRCTX PRCTXsList[] = {
  { "RCTX", 0x373, true,  {AArch64::FeaturePredRes}  }, // 0
 };

const PRCTX *lookupPRCTXByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "RCTX", 0 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &PRCTXsList[Idx->_index];
}

const PRCTX *lookupPRCTXByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x373, 0 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &PRCTXsList[Idx->_index];
}
#endif

#ifdef GET_PRFM_DECL
const PRFM *lookupPRFMByName(StringRef Name);
const PRFM *lookupPRFMByEncoding(uint8_t Encoding);
#endif

#ifdef GET_PRFM_IMPL
constexpr PRFM PRFMsList[] = {
  { "pldl1keep", 0x0 }, // 0
  { "pldl1strm", 0x1 }, // 1
  { "pldl2keep", 0x2 }, // 2
  { "pldl2strm", 0x3 }, // 3
  { "pldl3keep", 0x4 }, // 4
  { "pldl3strm", 0x5 }, // 5
  { "plil1keep", 0x8 }, // 6
  { "plil1strm", 0x9 }, // 7
  { "plil2keep", 0xA }, // 8
  { "plil2strm", 0xB }, // 9
  { "plil3keep", 0xC }, // 10
  { "plil3strm", 0xD }, // 11
  { "pstl1keep", 0x10 }, // 12
  { "pstl1strm", 0x11 }, // 13
  { "pstl2keep", 0x12 }, // 14
  { "pstl2strm", 0x13 }, // 15
  { "pstl3keep", 0x14 }, // 16
  { "pstl3strm", 0x15 }, // 17
 };

const PRFM *lookupPRFMByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "PLDL1KEEP", 0 },
    { "PLDL1STRM", 1 },
    { "PLDL2KEEP", 2 },
    { "PLDL2STRM", 3 },
    { "PLDL3KEEP", 4 },
    { "PLDL3STRM", 5 },
    { "PLIL1KEEP", 6 },
    { "PLIL1STRM", 7 },
    { "PLIL2KEEP", 8 },
    { "PLIL2STRM", 9 },
    { "PLIL3KEEP", 10 },
    { "PLIL3STRM", 11 },
    { "PSTL1KEEP", 12 },
    { "PSTL1STRM", 13 },
    { "PSTL2KEEP", 14 },
    { "PSTL2STRM", 15 },
    { "PSTL3KEEP", 16 },
    { "PSTL3STRM", 17 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &PRFMsList[Idx->_index];
}

const PRFM *lookupPRFMByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
    { 0x4, 4 },
    { 0x5, 5 },
    { 0x8, 6 },
    { 0x9, 7 },
    { 0xA, 8 },
    { 0xB, 9 },
    { 0xC, 10 },
    { 0xD, 11 },
    { 0x10, 12 },
    { 0x11, 13 },
    { 0x12, 14 },
    { 0x13, 15 },
    { 0x14, 16 },
    { 0x15, 17 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &PRFMsList[Idx->_index];
}
#endif

#ifdef GET_PSB_DECL
const PSB *lookupPSBByName(StringRef Name);
const PSB *lookupPSBByEncoding(uint8_t Encoding);
#endif

#ifdef GET_PSB_IMPL
constexpr PSB PSBsList[] = {
  { "csync", 0x11 }, // 0
 };

const PSB *lookupPSBByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "CSYNC", 0 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &PSBsList[Idx->_index];
}

const PSB *lookupPSBByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x11, 0 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &PSBsList[Idx->_index];
}
#endif

#ifdef GET_PSTATE_DECL
const PState *lookupPStateByName(StringRef Name);
const PState *lookupPStateByEncoding(uint8_t Encoding);
#endif

#ifdef GET_PSTATE_IMPL
constexpr PState PStatesList[] = {
  { "SPSel", 0x5,  {}  }, // 0
  { "DAIFSet", 0x1E,  {}  }, // 1
  { "DAIFClr", 0x1F,  {}  }, // 2
  { "PAN", 0x4,  {AArch64::FeaturePAN}  }, // 3
  { "UAO", 0x3,  {AArch64::FeaturePsUAO}  }, // 4
  { "DIT", 0x1A,  {AArch64::FeatureDIT}  }, // 5
  { "SSBS", 0x19,  {AArch64::FeatureSSBS}  }, // 6
  { "TCO", 0x1C,  {AArch64::FeatureMTE}  }, // 7
 };

const PState *lookupPStateByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "DAIFCLR", 2 },
    { "DAIFSET", 1 },
    { "DIT", 5 },
    { "PAN", 3 },
    { "SPSEL", 0 },
    { "SSBS", 6 },
    { "TCO", 7 },
    { "UAO", 4 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &PStatesList[Idx->_index];
}

const PState *lookupPStateByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x3, 4 },
    { 0x4, 3 },
    { 0x5, 0 },
    { 0x19, 6 },
    { 0x1A, 5 },
    { 0x1C, 7 },
    { 0x1E, 1 },
    { 0x1F, 2 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &PStatesList[Idx->_index];
}
#endif

#ifdef GET_SVEPREDPAT_DECL
const SVEPREDPAT *lookupSVEPREDPATByName(StringRef Name);
const SVEPREDPAT *lookupSVEPREDPATByEncoding(uint8_t Encoding);
#endif

#ifdef GET_SVEPREDPAT_IMPL
constexpr SVEPREDPAT SVEPREDPATsList[] = {
  { "pow2", 0x0 }, // 0
  { "vl1", 0x1 }, // 1
  { "vl2", 0x2 }, // 2
  { "vl3", 0x3 }, // 3
  { "vl4", 0x4 }, // 4
  { "vl5", 0x5 }, // 5
  { "vl6", 0x6 }, // 6
  { "vl7", 0x7 }, // 7
  { "vl8", 0x8 }, // 8
  { "vl16", 0x9 }, // 9
  { "vl32", 0xA }, // 10
  { "vl64", 0xB }, // 11
  { "vl128", 0xC }, // 12
  { "vl256", 0xD }, // 13
  { "mul4", 0x1D }, // 14
  { "mul3", 0x1E }, // 15
  { "all", 0x1F }, // 16
 };

const SVEPREDPAT *lookupSVEPREDPATByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "ALL", 16 },
    { "MUL3", 15 },
    { "MUL4", 14 },
    { "POW2", 0 },
    { "VL1", 1 },
    { "VL128", 12 },
    { "VL16", 9 },
    { "VL2", 2 },
    { "VL256", 13 },
    { "VL3", 3 },
    { "VL32", 10 },
    { "VL4", 4 },
    { "VL5", 5 },
    { "VL6", 6 },
    { "VL64", 11 },
    { "VL7", 7 },
    { "VL8", 8 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &SVEPREDPATsList[Idx->_index];
}

const SVEPREDPAT *lookupSVEPREDPATByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
    { 0x4, 4 },
    { 0x5, 5 },
    { 0x6, 6 },
    { 0x7, 7 },
    { 0x8, 8 },
    { 0x9, 9 },
    { 0xA, 10 },
    { 0xB, 11 },
    { 0xC, 12 },
    { 0xD, 13 },
    { 0x1D, 14 },
    { 0x1E, 15 },
    { 0x1F, 16 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &SVEPREDPATsList[Idx->_index];
}
#endif

#ifdef GET_SVEPRFM_DECL
const SVEPRFM *lookupSVEPRFMByName(StringRef Name);
const SVEPRFM *lookupSVEPRFMByEncoding(uint8_t Encoding);
#endif

#ifdef GET_SVEPRFM_IMPL
constexpr SVEPRFM SVEPRFMsList[] = {
  { "pldl1keep", 0x0,  {AArch64::FeatureSVE}  }, // 0
  { "pldl1strm", 0x1,  {AArch64::FeatureSVE}  }, // 1
  { "pldl2keep", 0x2,  {AArch64::FeatureSVE}  }, // 2
  { "pldl2strm", 0x3,  {AArch64::FeatureSVE}  }, // 3
  { "pldl3keep", 0x4,  {AArch64::FeatureSVE}  }, // 4
  { "pldl3strm", 0x5,  {AArch64::FeatureSVE}  }, // 5
  { "pstl1keep", 0x8,  {AArch64::FeatureSVE}  }, // 6
  { "pstl1strm", 0x9,  {AArch64::FeatureSVE}  }, // 7
  { "pstl2keep", 0xA,  {AArch64::FeatureSVE}  }, // 8
  { "pstl2strm", 0xB,  {AArch64::FeatureSVE}  }, // 9
  { "pstl3keep", 0xC,  {AArch64::FeatureSVE}  }, // 10
  { "pstl3strm", 0xD,  {AArch64::FeatureSVE}  }, // 11
 };

const SVEPRFM *lookupSVEPRFMByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "PLDL1KEEP", 0 },
    { "PLDL1STRM", 1 },
    { "PLDL2KEEP", 2 },
    { "PLDL2STRM", 3 },
    { "PLDL3KEEP", 4 },
    { "PLDL3STRM", 5 },
    { "PSTL1KEEP", 6 },
    { "PSTL1STRM", 7 },
    { "PSTL2KEEP", 8 },
    { "PSTL2STRM", 9 },
    { "PSTL3KEEP", 10 },
    { "PSTL3STRM", 11 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &SVEPRFMsList[Idx->_index];
}

const SVEPRFM *lookupSVEPRFMByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
    { 0x4, 4 },
    { 0x5, 5 },
    { 0x8, 6 },
    { 0x9, 7 },
    { 0xA, 8 },
    { 0xB, 9 },
    { 0xC, 10 },
    { 0xD, 11 },
  };

  struct KeyType {
    uint8_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &SVEPRFMsList[Idx->_index];
}
#endif

#ifdef GET_SYSREG_DECL
const SysReg *lookupSysRegByName(StringRef Name);
const SysReg *lookupSysRegByEncoding(uint16_t Encoding);
#endif

#ifdef GET_SYSREG_IMPL
constexpr SysReg SysRegsList[] = {
  { "TRCRSCTLR15", 0x88F8, true, true,  {}  }, // 0
  { "TRCRSCTLR16", 0x8881, true, true,  {}  }, // 1
  { "TRCRSCTLR17", 0x8889, true, true,  {}  }, // 2
  { "TRCRSCTLR18", 0x8891, true, true,  {}  }, // 3
  { "TRCRSCTLR19", 0x8899, true, true,  {}  }, // 4
  { "TRCRSCTLR20", 0x88A1, true, true,  {}  }, // 5
  { "TRCRSCTLR21", 0x88A9, true, true,  {}  }, // 6
  { "TRCRSCTLR22", 0x88B1, true, true,  {}  }, // 7
  { "TRCRSCTLR23", 0x88B9, true, true,  {}  }, // 8
  { "TRCRSCTLR24", 0x88C1, true, true,  {}  }, // 9
  { "TRCRSCTLR25", 0x88C9, true, true,  {}  }, // 10
  { "TRCRSCTLR26", 0x88D1, true, true,  {}  }, // 11
  { "TRCRSCTLR27", 0x88D9, true, true,  {}  }, // 12
  { "TRCRSCTLR28", 0x88E1, true, true,  {}  }, // 13
  { "TRCRSCTLR29", 0x88E9, true, true,  {}  }, // 14
  { "TRCRSCTLR30", 0x88F1, true, true,  {}  }, // 15
  { "TRCRSCTLR31", 0x88F9, true, true,  {}  }, // 16
  { "TRCSSCCR0", 0x8882, true, true,  {}  }, // 17
  { "TRCSSCCR1", 0x888A, true, true,  {}  }, // 18
  { "TRCSSCCR2", 0x8892, true, true,  {}  }, // 19
  { "TRCSSCCR3", 0x889A, true, true,  {}  }, // 20
  { "TRCSSCCR4", 0x88A2, true, true,  {}  }, // 21
  { "TRCSSCCR5", 0x88AA, true, true,  {}  }, // 22
  { "TRCSSCCR6", 0x88B2, true, true,  {}  }, // 23
  { "TRCSSCCR7", 0x88BA, true, true,  {}  }, // 24
  { "TRCSSCSR0", 0x88C2, true, true,  {}  }, // 25
  { "TRCSSCSR1", 0x88CA, true, true,  {}  }, // 26
  { "TRCSSCSR2", 0x88D2, true, true,  {}  }, // 27
  { "TRCSSCSR3", 0x88DA, true, true,  {}  }, // 28
  { "TRCSSCSR4", 0x88E2, true, true,  {}  }, // 29
  { "TRCSSCSR5", 0x88EA, true, true,  {}  }, // 30
  { "TRCSSCSR6", 0x88F2, true, true,  {}  }, // 31
  { "TRCSSCSR7", 0x88FA, true, true,  {}  }, // 32
  { "TRCSSPCICR0", 0x8883, true, true,  {}  }, // 33
  { "TRCSSPCICR1", 0x888B, true, true,  {}  }, // 34
  { "TRCSSPCICR2", 0x8893, true, true,  {}  }, // 35
  { "TRCSSPCICR3", 0x889B, true, true,  {}  }, // 36
  { "TRCSSPCICR4", 0x88A3, true, true,  {}  }, // 37
  { "TRCSSPCICR5", 0x88AB, true, true,  {}  }, // 38
  { "TRCSSPCICR6", 0x88B3, true, true,  {}  }, // 39
  { "TRCSSPCICR7", 0x88BB, true, true,  {}  }, // 40
  { "TRCPDCR", 0x88A4, true, true,  {}  }, // 41
  { "TRCACVR0", 0x8900, true, true,  {}  }, // 42
  { "TRCACVR1", 0x8910, true, true,  {}  }, // 43
  { "TRCACVR2", 0x8920, true, true,  {}  }, // 44
  { "TRCACVR3", 0x8930, true, true,  {}  }, // 45
  { "TRCACVR4", 0x8940, true, true,  {}  }, // 46
  { "TRCACVR5", 0x8950, true, true,  {}  }, // 47
  { "TRCACVR6", 0x8960, true, true,  {}  }, // 48
  { "TRCACVR7", 0x8970, true, true,  {}  }, // 49
  { "TRCACVR8", 0x8901, true, true,  {}  }, // 50
  { "TRCACVR9", 0x8911, true, true,  {}  }, // 51
  { "TRCACVR10", 0x8921, true, true,  {}  }, // 52
  { "TRCACVR11", 0x8931, true, true,  {}  }, // 53
  { "TRCACVR12", 0x8941, true, true,  {}  }, // 54
  { "TRCACVR13", 0x8951, true, true,  {}  }, // 55
  { "TRCACVR14", 0x8961, true, true,  {}  }, // 56
  { "TRCACVR15", 0x8971, true, true,  {}  }, // 57
  { "TRCACATR0", 0x8902, true, true,  {}  }, // 58
  { "TRCACATR1", 0x8912, true, true,  {}  }, // 59
  { "TRCACATR2", 0x8922, true, true,  {}  }, // 60
  { "TRCACATR3", 0x8932, true, true,  {}  }, // 61
  { "TRCACATR4", 0x8942, true, true,  {}  }, // 62
  { "TRCACATR5", 0x8952, true, true,  {}  }, // 63
  { "TRCACATR6", 0x8962, true, true,  {}  }, // 64
  { "TRCACATR7", 0x8972, true, true,  {}  }, // 65
  { "TRCACATR8", 0x8903, true, true,  {}  }, // 66
  { "TRCACATR9", 0x8913, true, true,  {}  }, // 67
  { "TRCACATR10", 0x8923, true, true,  {}  }, // 68
  { "TRCACATR11", 0x8933, true, true,  {}  }, // 69
  { "TRCACATR12", 0x8943, true, true,  {}  }, // 70
  { "TRCACATR13", 0x8953, true, true,  {}  }, // 71
  { "TRCACATR14", 0x8963, true, true,  {}  }, // 72
  { "TRCACATR15", 0x8973, true, true,  {}  }, // 73
  { "TRCDVCVR0", 0x8904, true, true,  {}  }, // 74
  { "TRCDVCVR1", 0x8924, true, true,  {}  }, // 75
  { "TRCDVCVR2", 0x8944, true, true,  {}  }, // 76
  { "TRCDVCVR3", 0x8964, true, true,  {}  }, // 77
  { "TRCDVCVR4", 0x8905, true, true,  {}  }, // 78
  { "TRCDVCVR5", 0x8925, true, true,  {}  }, // 79
  { "TRCDVCVR6", 0x8945, true, true,  {}  }, // 80
  { "TRCDVCVR7", 0x8965, true, true,  {}  }, // 81
  { "TRCDVCMR0", 0x8906, true, true,  {}  }, // 82
  { "TRCDVCMR1", 0x8926, true, true,  {}  }, // 83
  { "TRCDVCMR2", 0x8946, true, true,  {}  }, // 84
  { "TRCDVCMR3", 0x8966, true, true,  {}  }, // 85
  { "TRCDVCMR4", 0x8907, true, true,  {}  }, // 86
  { "TRCDVCMR5", 0x8927, true, true,  {}  }, // 87
  { "TRCDVCMR6", 0x8947, true, true,  {}  }, // 88
  { "TRCDVCMR7", 0x8967, true, true,  {}  }, // 89
  { "TRCCIDCVR0", 0x8980, true, true,  {}  }, // 90
  { "TRCCIDCVR1", 0x8990, true, true,  {}  }, // 91
  { "TRCCIDCVR2", 0x89A0, true, true,  {}  }, // 92
  { "TRCCIDCVR3", 0x89B0, true, true,  {}  }, // 93
  { "TRCCIDCVR4", 0x89C0, true, true,  {}  }, // 94
  { "TRCCIDCVR5", 0x89D0, true, true,  {}  }, // 95
  { "TRCCIDCVR6", 0x89E0, true, true,  {}  }, // 96
  { "TRCCIDCVR7", 0x89F0, true, true,  {}  }, // 97
  { "TRCVMIDCVR0", 0x8981, true, true,  {}  }, // 98
  { "TRCVMIDCVR1", 0x8991, true, true,  {}  }, // 99
  { "TRCVMIDCVR2", 0x89A1, true, true,  {}  }, // 100
  { "TRCVMIDCVR3", 0x89B1, true, true,  {}  }, // 101
  { "TRCVMIDCVR4", 0x89C1, true, true,  {}  }, // 102
  { "TRCVMIDCVR5", 0x89D1, true, true,  {}  }, // 103
  { "TRCVMIDCVR6", 0x89E1, true, true,  {}  }, // 104
  { "TRCVMIDCVR7", 0x89F1, true, true,  {}  }, // 105
  { "TRCCIDCCTLR0", 0x8982, true, true,  {}  }, // 106
  { "TRCCIDCCTLR1", 0x898A, true, true,  {}  }, // 107
  { "TRCVMIDCCTLR0", 0x8992, true, true,  {}  }, // 108
  { "TRCVMIDCCTLR1", 0x899A, true, true,  {}  }, // 109
  { "TRCITCTRL", 0x8B84, true, true,  {}  }, // 110
  { "TRCCLAIMSET", 0x8BC6, true, true,  {}  }, // 111
  { "TRCCLAIMCLR", 0x8BCE, true, true,  {}  }, // 112
  { "ICC_BPR1_EL1", 0xC663, true, true,  {}  }, // 113
  { "ICC_BPR0_EL1", 0xC643, true, true,  {}  }, // 114
  { "ICC_PMR_EL1", 0xC230, true, true,  {}  }, // 115
  { "ICC_CTLR_EL1", 0xC664, true, true,  {}  }, // 116
  { "ICC_CTLR_EL3", 0xF664, true, true,  {}  }, // 117
  { "ICC_SRE_EL1", 0xC665, true, true,  {}  }, // 118
  { "ICC_SRE_EL2", 0xE64D, true, true,  {}  }, // 119
  { "ICC_SRE_EL3", 0xF665, true, true,  {}  }, // 120
  { "ICC_IGRPEN0_EL1", 0xC666, true, true,  {}  }, // 121
  { "ICC_IGRPEN1_EL1", 0xC667, true, true,  {}  }, // 122
  { "ICC_IGRPEN1_EL3", 0xF667, true, true,  {}  }, // 123
  { "ICC_AP0R0_EL1", 0xC644, true, true,  {}  }, // 124
  { "ICC_AP0R1_EL1", 0xC645, true, true,  {}  }, // 125
  { "ICC_AP0R2_EL1", 0xC646, true, true,  {}  }, // 126
  { "ICC_AP0R3_EL1", 0xC647, true, true,  {}  }, // 127
  { "ICC_AP1R0_EL1", 0xC648, true, true,  {}  }, // 128
  { "ICC_AP1R1_EL1", 0xC649, true, true,  {}  }, // 129
  { "ICC_AP1R2_EL1", 0xC64A, true, true,  {}  }, // 130
  { "ICC_AP1R3_EL1", 0xC64B, true, true,  {}  }, // 131
  { "ICH_AP0R0_EL2", 0xE640, true, true,  {}  }, // 132
  { "ICH_AP0R1_EL2", 0xE641, true, true,  {}  }, // 133
  { "ICH_AP0R2_EL2", 0xE642, true, true,  {}  }, // 134
  { "ICH_AP0R3_EL2", 0xE643, true, true,  {}  }, // 135
  { "ICH_AP1R0_EL2", 0xE648, true, true,  {}  }, // 136
  { "ICH_AP1R1_EL2", 0xE649, true, true,  {}  }, // 137
  { "ICH_AP1R2_EL2", 0xE64A, true, true,  {}  }, // 138
  { "ICH_AP1R3_EL2", 0xE64B, true, true,  {}  }, // 139
  { "ICH_HCR_EL2", 0xE658, true, true,  {}  }, // 140
  { "ICH_MISR_EL2", 0xE65A, true, true,  {}  }, // 141
  { "ICH_VMCR_EL2", 0xE65F, true, true,  {}  }, // 142
  { "ICH_LR0_EL2", 0xE660, true, true,  {}  }, // 143
  { "ICH_LR1_EL2", 0xE661, true, true,  {}  }, // 144
  { "ICH_LR2_EL2", 0xE662, true, true,  {}  }, // 145
  { "ICH_LR3_EL2", 0xE663, true, true,  {}  }, // 146
  { "ICH_LR4_EL2", 0xE664, true, true,  {}  }, // 147
  { "ICH_LR5_EL2", 0xE665, true, true,  {}  }, // 148
  { "ICH_LR6_EL2", 0xE666, true, true,  {}  }, // 149
  { "ICH_LR7_EL2", 0xE667, true, true,  {}  }, // 150
  { "ICH_LR8_EL2", 0xE668, true, true,  {}  }, // 151
  { "ICH_LR9_EL2", 0xE669, true, true,  {}  }, // 152
  { "ICH_LR10_EL2", 0xE66A, true, true,  {}  }, // 153
  { "ICH_LR11_EL2", 0xE66B, true, true,  {}  }, // 154
  { "ICH_LR12_EL2", 0xE66C, true, true,  {}  }, // 155
  { "ICH_LR13_EL2", 0xE66D, true, true,  {}  }, // 156
  { "ICH_LR14_EL2", 0xE66E, true, true,  {}  }, // 157
  { "ICH_LR15_EL2", 0xE66F, true, true,  {}  }, // 158
  { "PAN", 0xC213, true, true,  {AArch64::FeaturePAN}  }, // 159
  { "LORSA_EL1", 0xC520, true, true,  {AArch64::FeatureLOR}  }, // 160
  { "LOREA_EL1", 0xC521, true, true,  {AArch64::FeatureLOR}  }, // 161
  { "LORN_EL1", 0xC522, true, true,  {AArch64::FeatureLOR}  }, // 162
  { "LORC_EL1", 0xC523, true, true,  {AArch64::FeatureLOR}  }, // 163
  { "TTBR1_EL2", 0xE101, true, true,  {AArch64::FeatureVH}  }, // 164
  { "CONTEXTIDR_EL2", 0xE681, true, true,  {AArch64::FeatureVH}  }, // 165
  { "CNTHV_TVAL_EL2", 0xE718, true, true,  {AArch64::FeatureVH}  }, // 166
  { "CNTHV_CVAL_EL2", 0xE71A, true, true,  {AArch64::FeatureVH}  }, // 167
  { "CNTHV_CTL_EL2", 0xE719, true, true,  {AArch64::FeatureVH}  }, // 168
  { "SCTLR_EL12", 0xE880, true, true,  {AArch64::FeatureVH}  }, // 169
  { "CPACR_EL12", 0xE882, true, true,  {AArch64::FeatureVH}  }, // 170
  { "TTBR0_EL12", 0xE900, true, true,  {AArch64::FeatureVH}  }, // 171
  { "TTBR1_EL12", 0xE901, true, true,  {AArch64::FeatureVH}  }, // 172
  { "TCR_EL12", 0xE902, true, true,  {AArch64::FeatureVH}  }, // 173
  { "AFSR0_EL12", 0xEA88, true, true,  {AArch64::FeatureVH}  }, // 174
  { "AFSR1_EL12", 0xEA89, true, true,  {AArch64::FeatureVH}  }, // 175
  { "ESR_EL12", 0xEA90, true, true,  {AArch64::FeatureVH}  }, // 176
  { "FAR_EL12", 0xEB00, true, true,  {AArch64::FeatureVH}  }, // 177
  { "MAIR_EL12", 0xED10, true, true,  {AArch64::FeatureVH}  }, // 178
  { "AMAIR_EL12", 0xED18, true, true,  {AArch64::FeatureVH}  }, // 179
  { "VBAR_EL12", 0xEE00, true, true,  {AArch64::FeatureVH}  }, // 180
  { "CONTEXTIDR_EL12", 0xEE81, true, true,  {AArch64::FeatureVH}  }, // 181
  { "CNTKCTL_EL12", 0xEF08, true, true,  {AArch64::FeatureVH}  }, // 182
  { "CNTP_TVAL_EL02", 0xEF10, true, true,  {AArch64::FeatureVH}  }, // 183
  { "CNTP_CTL_EL02", 0xEF11, true, true,  {AArch64::FeatureVH}  }, // 184
  { "CNTP_CVAL_EL02", 0xEF12, true, true,  {AArch64::FeatureVH}  }, // 185
  { "CNTV_TVAL_EL02", 0xEF18, true, true,  {AArch64::FeatureVH}  }, // 186
  { "CNTV_CTL_EL02", 0xEF19, true, true,  {AArch64::FeatureVH}  }, // 187
  { "CNTV_CVAL_EL02", 0xEF1A, true, true,  {AArch64::FeatureVH}  }, // 188
  { "SPSR_EL12", 0xEA00, true, true,  {AArch64::FeatureVH}  }, // 189
  { "ELR_EL12", 0xEA01, true, true,  {AArch64::FeatureVH}  }, // 190
  { "UAO", 0xC214, true, true,  {AArch64::FeaturePsUAO}  }, // 191
  { "PMBLIMITR_EL1", 0xC4D0, true, true,  {AArch64::FeatureSPE}  }, // 192
  { "PMBPTR_EL1", 0xC4D1, true, true,  {AArch64::FeatureSPE}  }, // 193
  { "PMBSR_EL1", 0xC4D3, true, true,  {AArch64::FeatureSPE}  }, // 194
  { "PMBIDR_EL1", 0xC4D7, true, true,  {AArch64::FeatureSPE}  }, // 195
  { "PMSCR_EL2", 0xE4C8, true, true,  {AArch64::FeatureSPE}  }, // 196
  { "PMSCR_EL12", 0xECC8, true, true,  {AArch64::FeatureSPE}  }, // 197
  { "PMSCR_EL1", 0xC4C8, true, true,  {AArch64::FeatureSPE}  }, // 198
  { "PMSICR_EL1", 0xC4CA, true, true,  {AArch64::FeatureSPE}  }, // 199
  { "PMSIRR_EL1", 0xC4CB, true, true,  {AArch64::FeatureSPE}  }, // 200
  { "PMSFCR_EL1", 0xC4CC, true, true,  {AArch64::FeatureSPE}  }, // 201
  { "PMSEVFR_EL1", 0xC4CD, true, true,  {AArch64::FeatureSPE}  }, // 202
  { "PMSLATFR_EL1", 0xC4CE, true, true,  {AArch64::FeatureSPE}  }, // 203
  { "PMSIDR_EL1", 0xC4CF, true, true,  {AArch64::FeatureSPE}  }, // 204
  { "ERRSELR_EL1", 0xC299, true, true,  {AArch64::FeatureRAS}  }, // 205
  { "ERXCTLR_EL1", 0xC2A1, true, true,  {AArch64::FeatureRAS}  }, // 206
  { "ERXSTATUS_EL1", 0xC2A2, true, true,  {AArch64::FeatureRAS}  }, // 207
  { "ERXADDR_EL1", 0xC2A3, true, true,  {AArch64::FeatureRAS}  }, // 208
  { "ERXMISC0_EL1", 0xC2A8, true, true,  {AArch64::FeatureRAS}  }, // 209
  { "ERXMISC1_EL1", 0xC2A9, true, true,  {AArch64::FeatureRAS}  }, // 210
  { "DISR_EL1", 0xC609, true, true,  {AArch64::FeatureRAS}  }, // 211
  { "VDISR_EL2", 0xE609, true, true,  {AArch64::FeatureRAS}  }, // 212
  { "VSESR_EL2", 0xE293, true, true,  {AArch64::FeatureRAS}  }, // 213
  { "APIAKeyLo_EL1", 0xC108, true, true,  {AArch64::FeaturePA}  }, // 214
  { "APIAKeyHi_EL1", 0xC109, true, true,  {AArch64::FeaturePA}  }, // 215
  { "APIBKeyLo_EL1", 0xC10A, true, true,  {AArch64::FeaturePA}  }, // 216
  { "APIBKeyHi_EL1", 0xC10B, true, true,  {AArch64::FeaturePA}  }, // 217
  { "APDAKeyLo_EL1", 0xC110, true, true,  {AArch64::FeaturePA}  }, // 218
  { "APDAKeyHi_EL1", 0xC111, true, true,  {AArch64::FeaturePA}  }, // 219
  { "APDBKeyLo_EL1", 0xC112, true, true,  {AArch64::FeaturePA}  }, // 220
  { "APDBKeyHi_EL1", 0xC113, true, true,  {AArch64::FeaturePA}  }, // 221
  { "APGAKeyLo_EL1", 0xC118, true, true,  {AArch64::FeaturePA}  }, // 222
  { "APGAKeyHi_EL1", 0xC119, true, true,  {AArch64::FeaturePA}  }, // 223
  { "VSTCR_EL2", 0xE132, true, true,  {AArch64::FeatureSEL2}  }, // 224
  { "VSTTBR_EL2", 0xE130, true, true,  {AArch64::FeatureSEL2}  }, // 225
  { "CNTHVS_TVAL_EL2", 0xE720, true, true,  {AArch64::FeatureSEL2}  }, // 226
  { "CNTHVS_CVAL_EL2", 0xE722, true, true,  {AArch64::FeatureSEL2}  }, // 227
  { "CNTHVS_CTL_EL2", 0xE721, true, true,  {AArch64::FeatureSEL2}  }, // 228
  { "CNTHPS_TVAL_EL2", 0xE728, true, true,  {AArch64::FeatureSEL2}  }, // 229
  { "CNTHPS_CVAL_EL2", 0xE72A, true, true,  {AArch64::FeatureSEL2}  }, // 230
  { "CNTHPS_CTL_EL2", 0xE729, true, true,  {AArch64::FeatureSEL2}  }, // 231
  { "SDER32_EL2", 0xE099, true, true,  {AArch64::FeatureSEL2}  }, // 232
  { "PMMIR_EL1", 0xC4F6, true, true,  {AArch64::FeaturePMU}  }, // 233
  { "ERXPFGCTL_EL1", 0xC2A5, true, true,  {AArch64::FeatureRASv8_4}  }, // 234
  { "ERXPFGCDN_EL1", 0xC2A6, true, true,  {AArch64::FeatureRASv8_4}  }, // 235
  { "ERXTS_EL1", 0xC2AF, true, true,  {AArch64::FeatureRASv8_4}  }, // 236
  { "ERXMISC2_EL1", 0xC2AA, true, true,  {AArch64::FeatureRASv8_4}  }, // 237
  { "ERXMISC3_EL1", 0xC2AB, true, true,  {AArch64::FeatureRASv8_4}  }, // 238
  { "ERXPFGF_EL1", 0xC2A4, true, false,  {AArch64::FeatureRASv8_4}  }, // 239
  { "MPAM0_EL1", 0xC529, true, true,  {AArch64::FeatureMPAM}  }, // 240
  { "MPAM1_EL1", 0xC528, true, true,  {AArch64::FeatureMPAM}  }, // 241
  { "MPAM2_EL2", 0xE528, true, true,  {AArch64::FeatureMPAM}  }, // 242
  { "MPAM3_EL3", 0xF528, true, true,  {AArch64::FeatureMPAM}  }, // 243
  { "MPAM1_EL12", 0xED28, true, true,  {AArch64::FeatureMPAM}  }, // 244
  { "MPAMHCR_EL2", 0xE520, true, true,  {AArch64::FeatureMPAM}  }, // 245
  { "MPAMVPMV_EL2", 0xE521, true, true,  {AArch64::FeatureMPAM}  }, // 246
  { "MPAMVPM0_EL2", 0xE530, true, true,  {AArch64::FeatureMPAM}  }, // 247
  { "MPAMVPM1_EL2", 0xE531, true, true,  {AArch64::FeatureMPAM}  }, // 248
  { "MPAMVPM2_EL2", 0xE532, true, true,  {AArch64::FeatureMPAM}  }, // 249
  { "MPAMVPM3_EL2", 0xE533, true, true,  {AArch64::FeatureMPAM}  }, // 250
  { "MPAMVPM4_EL2", 0xE534, true, true,  {AArch64::FeatureMPAM}  }, // 251
  { "MPAMVPM5_EL2", 0xE535, true, true,  {AArch64::FeatureMPAM}  }, // 252
  { "MPAMVPM6_EL2", 0xE536, true, true,  {AArch64::FeatureMPAM}  }, // 253
  { "MPAMVPM7_EL2", 0xE537, true, true,  {AArch64::FeatureMPAM}  }, // 254
  { "MPAMIDR_EL1", 0xC524, true, false,  {AArch64::FeatureMPAM}  }, // 255
  { "AMCR_EL0", 0xDE90, true, true,  {AArch64::FeatureAM}  }, // 256
  { "AMCFGR_EL0", 0xDE91, true, false,  {AArch64::FeatureAM}  }, // 257
  { "AMCGCR_EL0", 0xDE92, true, false,  {AArch64::FeatureAM}  }, // 258
  { "AMUSERENR_EL0", 0xDE93, true, true,  {AArch64::FeatureAM}  }, // 259
  { "AMCNTENCLR0_EL0", 0xDE94, true, true,  {AArch64::FeatureAM}  }, // 260
  { "AMCNTENSET0_EL0", 0xDE95, true, true,  {AArch64::FeatureAM}  }, // 261
  { "AMEVCNTR00_EL0", 0xDEA0, true, true,  {AArch64::FeatureAM}  }, // 262
  { "AMEVCNTR01_EL0", 0xDEA1, true, true,  {AArch64::FeatureAM}  }, // 263
  { "AMEVCNTR02_EL0", 0xDEA2, true, true,  {AArch64::FeatureAM}  }, // 264
  { "AMEVCNTR03_EL0", 0xDEA3, true, true,  {AArch64::FeatureAM}  }, // 265
  { "AMEVTYPER00_EL0", 0xDEB0, true, false,  {AArch64::FeatureAM}  }, // 266
  { "AMEVTYPER01_EL0", 0xDEB1, true, false,  {AArch64::FeatureAM}  }, // 267
  { "AMEVTYPER02_EL0", 0xDEB2, true, false,  {AArch64::FeatureAM}  }, // 268
  { "AMEVTYPER03_EL0", 0xDEB3, true, false,  {AArch64::FeatureAM}  }, // 269
  { "AMCNTENCLR1_EL0", 0xDE98, true, true,  {AArch64::FeatureAM}  }, // 270
  { "AMCNTENSET1_EL0", 0xDE99, true, true,  {AArch64::FeatureAM}  }, // 271
  { "AMEVCNTR10_EL0", 0xDEE0, true, true,  {AArch64::FeatureAM}  }, // 272
  { "AMEVCNTR11_EL0", 0xDEE1, true, true,  {AArch64::FeatureAM}  }, // 273
  { "AMEVCNTR12_EL0", 0xDEE2, true, true,  {AArch64::FeatureAM}  }, // 274
  { "AMEVCNTR13_EL0", 0xDEE3, true, true,  {AArch64::FeatureAM}  }, // 275
  { "AMEVCNTR14_EL0", 0xDEE4, true, true,  {AArch64::FeatureAM}  }, // 276
  { "AMEVCNTR15_EL0", 0xDEE5, true, true,  {AArch64::FeatureAM}  }, // 277
  { "AMEVCNTR16_EL0", 0xDEE6, true, true,  {AArch64::FeatureAM}  }, // 278
  { "AMEVCNTR17_EL0", 0xDEE7, true, true,  {AArch64::FeatureAM}  }, // 279
  { "AMEVCNTR18_EL0", 0xDEE8, true, true,  {AArch64::FeatureAM}  }, // 280
  { "AMEVCNTR19_EL0", 0xDEE9, true, true,  {AArch64::FeatureAM}  }, // 281
  { "AMEVCNTR110_EL0", 0xDEEA, true, true,  {AArch64::FeatureAM}  }, // 282
  { "AMEVCNTR111_EL0", 0xDEEB, true, true,  {AArch64::FeatureAM}  }, // 283
  { "AMEVCNTR112_EL0", 0xDEEC, true, true,  {AArch64::FeatureAM}  }, // 284
  { "AMEVCNTR113_EL0", 0xDEED, true, true,  {AArch64::FeatureAM}  }, // 285
  { "AMEVCNTR114_EL0", 0xDEEE, true, true,  {AArch64::FeatureAM}  }, // 286
  { "AMEVCNTR115_EL0", 0xDEEF, true, true,  {AArch64::FeatureAM}  }, // 287
  { "AMEVTYPER10_EL0", 0xDEF0, true, true,  {AArch64::FeatureAM}  }, // 288
  { "AMEVTYPER11_EL0", 0xDEF1, true, true,  {AArch64::FeatureAM}  }, // 289
  { "AMEVTYPER12_EL0", 0xDEF2, true, true,  {AArch64::FeatureAM}  }, // 290
  { "AMEVTYPER13_EL0", 0xDEF3, true, true,  {AArch64::FeatureAM}  }, // 291
  { "AMEVTYPER14_EL0", 0xDEF4, true, true,  {AArch64::FeatureAM}  }, // 292
  { "AMEVTYPER15_EL0", 0xDEF5, true, true,  {AArch64::FeatureAM}  }, // 293
  { "AMEVTYPER16_EL0", 0xDEF6, true, true,  {AArch64::FeatureAM}  }, // 294
  { "AMEVTYPER17_EL0", 0xDEF7, true, true,  {AArch64::FeatureAM}  }, // 295
  { "AMEVTYPER18_EL0", 0xDEF8, true, true,  {AArch64::FeatureAM}  }, // 296
  { "AMEVTYPER19_EL0", 0xDEF9, true, true,  {AArch64::FeatureAM}  }, // 297
  { "AMEVTYPER110_EL0", 0xDEFA, true, true,  {AArch64::FeatureAM}  }, // 298
  { "AMEVTYPER111_EL0", 0xDEFB, true, true,  {AArch64::FeatureAM}  }, // 299
  { "AMEVTYPER112_EL0", 0xDEFC, true, true,  {AArch64::FeatureAM}  }, // 300
  { "AMEVTYPER113_EL0", 0xDEFD, true, true,  {AArch64::FeatureAM}  }, // 301
  { "AMEVTYPER114_EL0", 0xDEFE, true, true,  {AArch64::FeatureAM}  }, // 302
  { "AMEVTYPER115_EL0", 0xDEFF, true, true,  {AArch64::FeatureAM}  }, // 303
  { "TRFCR_EL1", 0xC091, true, true,  {AArch64::FeatureTRACEV8_4}  }, // 304
  { "TRFCR_EL2", 0xE091, true, true,  {AArch64::FeatureTRACEV8_4}  }, // 305
  { "TRFCR_EL12", 0xE891, true, true,  {AArch64::FeatureTRACEV8_4}  }, // 306
  { "DIT", 0xDA15, true, true,  {AArch64::FeatureDIT}  }, // 307
  { "VNCR_EL2", 0xE110, true, true,  {AArch64::FeatureNV}  }, // 308
  { "ZCR_EL1", 0xC090, true, true,  {AArch64::FeatureSVE}  }, // 309
  { "ZCR_EL2", 0xE090, true, true,  {AArch64::FeatureSVE}  }, // 310
  { "ZCR_EL3", 0xF090, true, true,  {AArch64::FeatureSVE}  }, // 311
  { "ZCR_EL12", 0xE890, true, true,  {AArch64::FeatureSVE}  }, // 312
  { "SSBS", 0xDA16, true, true,  {AArch64::FeatureSSBS}  }, // 313
  { "TCO", 0xDA17, true, true,  {AArch64::FeatureMTE}  }, // 314
  { "GCR_EL1", 0xC086, true, true,  {AArch64::FeatureMTE}  }, // 315
  { "RGSR_EL1", 0xC085, true, true,  {AArch64::FeatureMTE}  }, // 316
  { "TFSR_EL1", 0xC2B0, true, true,  {AArch64::FeatureMTE}  }, // 317
  { "TFSR_EL2", 0xE2B0, true, true,  {AArch64::FeatureMTE}  }, // 318
  { "TFSR_EL3", 0xF2B0, true, true,  {AArch64::FeatureMTE}  }, // 319
  { "TFSR_EL12", 0xEAB0, true, true,  {AArch64::FeatureMTE}  }, // 320
  { "TFSRE0_EL1", 0xC2B1, true, true,  {AArch64::FeatureMTE}  }, // 321
  { "GMID_EL1", 0xC804, true, false,  {AArch64::FeatureMTE}  }, // 322
  { "TRCRSR", 0x8850, true, true,  {AArch64::FeatureETE}  }, // 323
  { "TRCEXTINSELR0", 0x8844, true, true,  {AArch64::FeatureETE}  }, // 324
  { "TRCEXTINSELR1", 0x884C, true, true,  {AArch64::FeatureETE}  }, // 325
  { "TRCEXTINSELR2", 0x8854, true, true,  {AArch64::FeatureETE}  }, // 326
  { "TRCEXTINSELR3", 0x885C, true, true,  {AArch64::FeatureETE}  }, // 327
  { "TRBLIMITR_EL1", 0xC4D8, true, true,  {AArch64::FeatureTRBE}  }, // 328
  { "TRBPTR_EL1", 0xC4D9, true, true,  {AArch64::FeatureTRBE}  }, // 329
  { "TRBBASER_EL1", 0xC4DA, true, true,  {AArch64::FeatureTRBE}  }, // 330
  { "TRBSR_EL1", 0xC4DB, true, true,  {AArch64::FeatureTRBE}  }, // 331
  { "TRBMAR_EL1", 0xC4DC, true, true,  {AArch64::FeatureTRBE}  }, // 332
  { "TRBTRG_EL1", 0xC4DE, true, true,  {AArch64::FeatureTRBE}  }, // 333
  { "TRBIDR_EL1", 0xC4DF, true, false,  {AArch64::FeatureTRBE}  }, // 334
  { "CPM_IOACC_CTL_EL3", 0xFF90, true, true,  {AArch64::ProcAppleA7}  }, // 335
  { "MDCCSR_EL0", 0x9808, true, false,  {}  }, // 336
  { "DBGDTRRX_EL0", 0x9828, true, false,  {}  }, // 337
  { "MDRAR_EL1", 0x8080, true, false,  {}  }, // 338
  { "OSLSR_EL1", 0x808C, true, false,  {}  }, // 339
  { "DBGAUTHSTATUS_EL1", 0x83F6, true, false,  {}  }, // 340
  { "PMCEID0_EL0", 0xDCE6, true, false,  {}  }, // 341
  { "PMCEID1_EL0", 0xDCE7, true, false,  {}  }, // 342
  { "MIDR_EL1", 0xC000, true, false,  {}  }, // 343
  { "CCSIDR_EL1", 0xC800, true, false,  {}  }, // 344
  { "CCSIDR2_EL1", 0xC802, true, false,  {AArch64::FeatureCCIDX}  }, // 345
  { "CLIDR_EL1", 0xC801, true, false,  {}  }, // 346
  { "CTR_EL0", 0xD801, true, false,  {}  }, // 347
  { "MPIDR_EL1", 0xC005, true, false,  {}  }, // 348
  { "REVIDR_EL1", 0xC006, true, false,  {}  }, // 349
  { "AIDR_EL1", 0xC807, true, false,  {}  }, // 350
  { "DCZID_EL0", 0xD807, true, false,  {}  }, // 351
  { "ID_PFR0_EL1", 0xC008, true, false,  {}  }, // 352
  { "ID_PFR1_EL1", 0xC009, true, false,  {}  }, // 353
  { "ID_PFR2_EL1", 0xC01C, true, false,  {AArch64::FeatureSpecRestrict}  }, // 354
  { "ID_DFR0_EL1", 0xC00A, true, false,  {}  }, // 355
  { "ID_AFR0_EL1", 0xC00B, true, false,  {}  }, // 356
  { "ID_MMFR0_EL1", 0xC00C, true, false,  {}  }, // 357
  { "ID_MMFR1_EL1", 0xC00D, true, false,  {}  }, // 358
  { "ID_MMFR2_EL1", 0xC00E, true, false,  {}  }, // 359
  { "ID_MMFR3_EL1", 0xC00F, true, false,  {}  }, // 360
  { "ID_ISAR0_EL1", 0xC010, true, false,  {}  }, // 361
  { "ID_ISAR1_EL1", 0xC011, true, false,  {}  }, // 362
  { "ID_ISAR2_EL1", 0xC012, true, false,  {}  }, // 363
  { "ID_ISAR3_EL1", 0xC013, true, false,  {}  }, // 364
  { "ID_ISAR4_EL1", 0xC014, true, false,  {}  }, // 365
  { "ID_ISAR5_EL1", 0xC015, true, false,  {}  }, // 366
  { "ID_ISAR6_EL1", 0xC017, true, false,  {AArch64::HasV8_2aOps}  }, // 367
  { "ID_AA64PFR0_EL1", 0xC020, true, false,  {}  }, // 368
  { "ID_AA64PFR1_EL1", 0xC021, true, false,  {}  }, // 369
  { "ID_AA64DFR0_EL1", 0xC028, true, false,  {}  }, // 370
  { "ID_AA64DFR1_EL1", 0xC029, true, false,  {}  }, // 371
  { "ID_AA64AFR0_EL1", 0xC02C, true, false,  {}  }, // 372
  { "ID_AA64AFR1_EL1", 0xC02D, true, false,  {}  }, // 373
  { "ID_AA64ISAR0_EL1", 0xC030, true, false,  {}  }, // 374
  { "ID_AA64ISAR1_EL1", 0xC031, true, false,  {}  }, // 375
  { "ID_AA64MMFR0_EL1", 0xC038, true, false,  {}  }, // 376
  { "ID_AA64MMFR1_EL1", 0xC039, true, false,  {}  }, // 377
  { "ID_AA64MMFR2_EL1", 0xC03A, true, false,  {}  }, // 378
  { "MVFR0_EL1", 0xC018, true, false,  {}  }, // 379
  { "MVFR1_EL1", 0xC019, true, false,  {}  }, // 380
  { "MVFR2_EL1", 0xC01A, true, false,  {}  }, // 381
  { "RVBAR_EL1", 0xC601, true, false,  {}  }, // 382
  { "RVBAR_EL2", 0xE601, true, false,  {}  }, // 383
  { "RVBAR_EL3", 0xF601, true, false,  {}  }, // 384
  { "ISR_EL1", 0xC608, true, false,  {}  }, // 385
  { "CNTPCT_EL0", 0xDF01, true, false,  {}  }, // 386
  { "CNTVCT_EL0", 0xDF02, true, false,  {}  }, // 387
  { "ID_MMFR4_EL1", 0xC016, true, false,  {}  }, // 388
  { "ID_MMFR5_EL1", 0xC01E, true, false,  {}  }, // 389
  { "TRCSTATR", 0x8818, true, false,  {}  }, // 390
  { "TRCIDR8", 0x8806, true, false,  {}  }, // 391
  { "TRCIDR9", 0x880E, true, false,  {}  }, // 392
  { "TRCIDR10", 0x8816, true, false,  {}  }, // 393
  { "TRCIDR11", 0x881E, true, false,  {}  }, // 394
  { "TRCIDR12", 0x8826, true, false,  {}  }, // 395
  { "TRCIDR13", 0x882E, true, false,  {}  }, // 396
  { "TRCIDR0", 0x8847, true, false,  {}  }, // 397
  { "TRCIDR1", 0x884F, true, false,  {}  }, // 398
  { "TRCIDR2", 0x8857, true, false,  {}  }, // 399
  { "TRCIDR3", 0x885F, true, false,  {}  }, // 400
  { "TRCIDR4", 0x8867, true, false,  {}  }, // 401
  { "TRCIDR5", 0x886F, true, false,  {}  }, // 402
  { "TRCIDR6", 0x8877, true, false,  {}  }, // 403
  { "TRCIDR7", 0x887F, true, false,  {}  }, // 404
  { "TRCOSLSR", 0x888C, true, false,  {}  }, // 405
  { "TRCPDSR", 0x88AC, true, false,  {}  }, // 406
  { "TRCDEVAFF0", 0x8BD6, true, false,  {}  }, // 407
  { "TRCDEVAFF1", 0x8BDE, true, false,  {}  }, // 408
  { "TRCLSR", 0x8BEE, true, false,  {}  }, // 409
  { "TRCAUTHSTATUS", 0x8BF6, true, false,  {}  }, // 410
  { "TRCDEVARCH", 0x8BFE, true, false,  {}  }, // 411
  { "TRCDEVID", 0x8B97, true, false,  {}  }, // 412
  { "TRCDEVTYPE", 0x8B9F, true, false,  {}  }, // 413
  { "TRCPIDR4", 0x8BA7, true, false,  {}  }, // 414
  { "TRCPIDR5", 0x8BAF, true, false,  {}  }, // 415
  { "TRCPIDR6", 0x8BB7, true, false,  {}  }, // 416
  { "TRCPIDR7", 0x8BBF, true, false,  {}  }, // 417
  { "TRCPIDR0", 0x8BC7, true, false,  {}  }, // 418
  { "TRCPIDR1", 0x8BCF, true, false,  {}  }, // 419
  { "TRCPIDR2", 0x8BD7, true, false,  {}  }, // 420
  { "TRCPIDR3", 0x8BDF, true, false,  {}  }, // 421
  { "TRCCIDR0", 0x8BE7, true, false,  {}  }, // 422
  { "TRCCIDR1", 0x8BEF, true, false,  {}  }, // 423
  { "TRCCIDR2", 0x8BF7, true, false,  {}  }, // 424
  { "TRCCIDR3", 0x8BFF, true, false,  {}  }, // 425
  { "ICC_IAR1_EL1", 0xC660, true, false,  {}  }, // 426
  { "ICC_IAR0_EL1", 0xC640, true, false,  {}  }, // 427
  { "ICC_HPPIR1_EL1", 0xC662, true, false,  {}  }, // 428
  { "ICC_HPPIR0_EL1", 0xC642, true, false,  {}  }, // 429
  { "ICC_RPR_EL1", 0xC65B, true, false,  {}  }, // 430
  { "ICH_VTR_EL2", 0xE659, true, false,  {}  }, // 431
  { "ICH_EISR_EL2", 0xE65B, true, false,  {}  }, // 432
  { "ICH_ELRSR_EL2", 0xE65D, true, false,  {}  }, // 433
  { "ID_AA64ZFR0_EL1", 0xC024, true, false,  {AArch64::FeatureSVE}  }, // 434
  { "LORID_EL1", 0xC527, true, false,  {AArch64::FeatureLOR}  }, // 435
  { "ERRIDR_EL1", 0xC298, true, false,  {AArch64::FeatureRAS}  }, // 436
  { "ERXFR_EL1", 0xC2A0, true, false,  {AArch64::FeatureRAS}  }, // 437
  { "RNDR", 0xD920, true, false,  {AArch64::FeatureRandGen}  }, // 438
  { "RNDRRS", 0xD921, true, false,  {AArch64::FeatureRandGen}  }, // 439
  { "SCXTNUM_EL0", 0xDE87, true, true,  {AArch64::FeatureSpecRestrict}  }, // 440
  { "SCXTNUM_EL1", 0xC687, true, true,  {AArch64::FeatureSpecRestrict}  }, // 441
  { "SCXTNUM_EL2", 0xE687, true, true,  {AArch64::FeatureSpecRestrict}  }, // 442
  { "SCXTNUM_EL3", 0xF687, true, true,  {AArch64::FeatureSpecRestrict}  }, // 443
  { "SCXTNUM_EL12", 0xEE87, true, true,  {AArch64::FeatureSpecRestrict}  }, // 444
  { "DBGDTRTX_EL0", 0x9828, false, true,  {}  }, // 445
  { "OSLAR_EL1", 0x8084, false, true,  {}  }, // 446
  { "PMSWINC_EL0", 0xDCE4, false, true,  {}  }, // 447
  { "TRCOSLAR", 0x8884, false, true,  {}  }, // 448
  { "TRCLAR", 0x8BE6, false, true,  {}  }, // 449
  { "ICC_EOIR1_EL1", 0xC661, false, true,  {}  }, // 450
  { "ICC_EOIR0_EL1", 0xC641, false, true,  {}  }, // 451
  { "ICC_DIR_EL1", 0xC659, false, true,  {}  }, // 452
  { "ICC_SGI1R_EL1", 0xC65D, false, true,  {}  }, // 453
  { "ICC_ASGI1R_EL1", 0xC65E, false, true,  {}  }, // 454
  { "ICC_SGI0R_EL1", 0xC65F, false, true,  {}  }, // 455
  { "OSDTRRX_EL1", 0x8002, true, true,  {}  }, // 456
  { "OSDTRTX_EL1", 0x801A, true, true,  {}  }, // 457
  { "TEECR32_EL1", 0x9000, true, true,  {}  }, // 458
  { "MDCCINT_EL1", 0x8010, true, true,  {}  }, // 459
  { "MDSCR_EL1", 0x8012, true, true,  {}  }, // 460
  { "DBGDTR_EL0", 0x9820, true, true,  {}  }, // 461
  { "OSECCR_EL1", 0x8032, true, true,  {}  }, // 462
  { "DBGVCR32_EL2", 0xA038, true, true,  {}  }, // 463
  { "DBGBVR0_EL1", 0x8004, true, true,  {}  }, // 464
  { "DBGBVR1_EL1", 0x800C, true, true,  {}  }, // 465
  { "DBGBVR2_EL1", 0x8014, true, true,  {}  }, // 466
  { "DBGBVR3_EL1", 0x801C, true, true,  {}  }, // 467
  { "DBGBVR4_EL1", 0x8024, true, true,  {}  }, // 468
  { "DBGBVR5_EL1", 0x802C, true, true,  {}  }, // 469
  { "DBGBVR6_EL1", 0x8034, true, true,  {}  }, // 470
  { "DBGBVR7_EL1", 0x803C, true, true,  {}  }, // 471
  { "DBGBVR8_EL1", 0x8044, true, true,  {}  }, // 472
  { "DBGBVR9_EL1", 0x804C, true, true,  {}  }, // 473
  { "DBGBVR10_EL1", 0x8054, true, true,  {}  }, // 474
  { "DBGBVR11_EL1", 0x805C, true, true,  {}  }, // 475
  { "DBGBVR12_EL1", 0x8064, true, true,  {}  }, // 476
  { "DBGBVR13_EL1", 0x806C, true, true,  {}  }, // 477
  { "DBGBVR14_EL1", 0x8074, true, true,  {}  }, // 478
  { "DBGBVR15_EL1", 0x807C, true, true,  {}  }, // 479
  { "DBGBCR0_EL1", 0x8005, true, true,  {}  }, // 480
  { "DBGBCR1_EL1", 0x800D, true, true,  {}  }, // 481
  { "DBGBCR2_EL1", 0x8015, true, true,  {}  }, // 482
  { "DBGBCR3_EL1", 0x801D, true, true,  {}  }, // 483
  { "DBGBCR4_EL1", 0x8025, true, true,  {}  }, // 484
  { "DBGBCR5_EL1", 0x802D, true, true,  {}  }, // 485
  { "DBGBCR6_EL1", 0x8035, true, true,  {}  }, // 486
  { "DBGBCR7_EL1", 0x803D, true, true,  {}  }, // 487
  { "DBGBCR8_EL1", 0x8045, true, true,  {}  }, // 488
  { "DBGBCR9_EL1", 0x804D, true, true,  {}  }, // 489
  { "DBGBCR10_EL1", 0x8055, true, true,  {}  }, // 490
  { "DBGBCR11_EL1", 0x805D, true, true,  {}  }, // 491
  { "DBGBCR12_EL1", 0x8065, true, true,  {}  }, // 492
  { "DBGBCR13_EL1", 0x806D, true, true,  {}  }, // 493
  { "DBGBCR14_EL1", 0x8075, true, true,  {}  }, // 494
  { "DBGBCR15_EL1", 0x807D, true, true,  {}  }, // 495
  { "DBGWVR0_EL1", 0x8006, true, true,  {}  }, // 496
  { "DBGWVR1_EL1", 0x800E, true, true,  {}  }, // 497
  { "DBGWVR2_EL1", 0x8016, true, true,  {}  }, // 498
  { "DBGWVR3_EL1", 0x801E, true, true,  {}  }, // 499
  { "DBGWVR4_EL1", 0x8026, true, true,  {}  }, // 500
  { "DBGWVR5_EL1", 0x802E, true, true,  {}  }, // 501
  { "DBGWVR6_EL1", 0x8036, true, true,  {}  }, // 502
  { "DBGWVR7_EL1", 0x803E, true, true,  {}  }, // 503
  { "DBGWVR8_EL1", 0x8046, true, true,  {}  }, // 504
  { "DBGWVR9_EL1", 0x804E, true, true,  {}  }, // 505
  { "DBGWVR10_EL1", 0x8056, true, true,  {}  }, // 506
  { "DBGWVR11_EL1", 0x805E, true, true,  {}  }, // 507
  { "DBGWVR12_EL1", 0x8066, true, true,  {}  }, // 508
  { "DBGWVR13_EL1", 0x806E, true, true,  {}  }, // 509
  { "DBGWVR14_EL1", 0x8076, true, true,  {}  }, // 510
  { "DBGWVR15_EL1", 0x807E, true, true,  {}  }, // 511
  { "DBGWCR0_EL1", 0x8007, true, true,  {}  }, // 512
  { "DBGWCR1_EL1", 0x800F, true, true,  {}  }, // 513
  { "DBGWCR2_EL1", 0x8017, true, true,  {}  }, // 514
  { "DBGWCR3_EL1", 0x801F, true, true,  {}  }, // 515
  { "DBGWCR4_EL1", 0x8027, true, true,  {}  }, // 516
  { "DBGWCR5_EL1", 0x802F, true, true,  {}  }, // 517
  { "DBGWCR6_EL1", 0x8037, true, true,  {}  }, // 518
  { "DBGWCR7_EL1", 0x803F, true, true,  {}  }, // 519
  { "DBGWCR8_EL1", 0x8047, true, true,  {}  }, // 520
  { "DBGWCR9_EL1", 0x804F, true, true,  {}  }, // 521
  { "DBGWCR10_EL1", 0x8057, true, true,  {}  }, // 522
  { "DBGWCR11_EL1", 0x805F, true, true,  {}  }, // 523
  { "DBGWCR12_EL1", 0x8067, true, true,  {}  }, // 524
  { "DBGWCR13_EL1", 0x806F, true, true,  {}  }, // 525
  { "DBGWCR14_EL1", 0x8077, true, true,  {}  }, // 526
  { "DBGWCR15_EL1", 0x807F, true, true,  {}  }, // 527
  { "TEEHBR32_EL1", 0x9080, true, true,  {}  }, // 528
  { "OSDLR_EL1", 0x809C, true, true,  {}  }, // 529
  { "DBGPRCR_EL1", 0x80A4, true, true,  {}  }, // 530
  { "DBGCLAIMSET_EL1", 0x83C6, true, true,  {}  }, // 531
  { "DBGCLAIMCLR_EL1", 0x83CE, true, true,  {}  }, // 532
  { "CSSELR_EL1", 0xD000, true, true,  {}  }, // 533
  { "VPIDR_EL2", 0xE000, true, true,  {}  }, // 534
  { "VMPIDR_EL2", 0xE005, true, true,  {}  }, // 535
  { "CPACR_EL1", 0xC082, true, true,  {}  }, // 536
  { "SCTLR_EL1", 0xC080, true, true,  {}  }, // 537
  { "SCTLR_EL2", 0xE080, true, true,  {}  }, // 538
  { "SCTLR_EL3", 0xF080, true, true,  {}  }, // 539
  { "ACTLR_EL1", 0xC081, true, true,  {}  }, // 540
  { "ACTLR_EL2", 0xE081, true, true,  {}  }, // 541
  { "ACTLR_EL3", 0xF081, true, true,  {}  }, // 542
  { "HCR_EL2", 0xE088, true, true,  {}  }, // 543
  { "SCR_EL3", 0xF088, true, true,  {}  }, // 544
  { "MDCR_EL2", 0xE089, true, true,  {}  }, // 545
  { "SDER32_EL3", 0xF089, true, true,  {}  }, // 546
  { "CPTR_EL2", 0xE08A, true, true,  {}  }, // 547
  { "CPTR_EL3", 0xF08A, true, true,  {}  }, // 548
  { "HSTR_EL2", 0xE08B, true, true,  {}  }, // 549
  { "HACR_EL2", 0xE08F, true, true,  {}  }, // 550
  { "MDCR_EL3", 0xF099, true, true,  {}  }, // 551
  { "TTBR0_EL1", 0xC100, true, true,  {}  }, // 552
  { "TTBR0_EL2", 0xE100, true, true,  {}  }, // 553
  { "TTBR0_EL3", 0xF100, true, true,  {}  }, // 554
  { "TTBR1_EL1", 0xC101, true, true,  {}  }, // 555
  { "TCR_EL1", 0xC102, true, true,  {}  }, // 556
  { "TCR_EL2", 0xE102, true, true,  {}  }, // 557
  { "TCR_EL3", 0xF102, true, true,  {}  }, // 558
  { "VTTBR_EL2", 0xE108, true, true,  {}  }, // 559
  { "VTCR_EL2", 0xE10A, true, true,  {}  }, // 560
  { "DACR32_EL2", 0xE180, true, true,  {}  }, // 561
  { "SPSR_EL1", 0xC200, true, true,  {}  }, // 562
  { "SPSR_EL2", 0xE200, true, true,  {}  }, // 563
  { "SPSR_EL3", 0xF200, true, true,  {}  }, // 564
  { "ELR_EL1", 0xC201, true, true,  {}  }, // 565
  { "ELR_EL2", 0xE201, true, true,  {}  }, // 566
  { "ELR_EL3", 0xF201, true, true,  {}  }, // 567
  { "SP_EL0", 0xC208, true, true,  {}  }, // 568
  { "SP_EL1", 0xE208, true, true,  {}  }, // 569
  { "SP_EL2", 0xF208, true, true,  {}  }, // 570
  { "SPSel", 0xC210, true, true,  {}  }, // 571
  { "NZCV", 0xDA10, true, true,  {}  }, // 572
  { "DAIF", 0xDA11, true, true,  {}  }, // 573
  { "CurrentEL", 0xC212, true, true,  {}  }, // 574
  { "SPSR_irq", 0xE218, true, true,  {}  }, // 575
  { "SPSR_abt", 0xE219, true, true,  {}  }, // 576
  { "SPSR_und", 0xE21A, true, true,  {}  }, // 577
  { "SPSR_fiq", 0xE21B, true, true,  {}  }, // 578
  { "FPCR", 0xDA20, true, true,  {}  }, // 579
  { "FPSR", 0xDA21, true, true,  {}  }, // 580
  { "DSPSR_EL0", 0xDA28, true, true,  {}  }, // 581
  { "DLR_EL0", 0xDA29, true, true,  {}  }, // 582
  { "IFSR32_EL2", 0xE281, true, true,  {}  }, // 583
  { "AFSR0_EL1", 0xC288, true, true,  {}  }, // 584
  { "AFSR0_EL2", 0xE288, true, true,  {}  }, // 585
  { "AFSR0_EL3", 0xF288, true, true,  {}  }, // 586
  { "AFSR1_EL1", 0xC289, true, true,  {}  }, // 587
  { "AFSR1_EL2", 0xE289, true, true,  {}  }, // 588
  { "AFSR1_EL3", 0xF289, true, true,  {}  }, // 589
  { "ESR_EL1", 0xC290, true, true,  {}  }, // 590
  { "ESR_EL2", 0xE290, true, true,  {}  }, // 591
  { "ESR_EL3", 0xF290, true, true,  {}  }, // 592
  { "FPEXC32_EL2", 0xE298, true, true,  {}  }, // 593
  { "FAR_EL1", 0xC300, true, true,  {}  }, // 594
  { "FAR_EL2", 0xE300, true, true,  {}  }, // 595
  { "FAR_EL3", 0xF300, true, true,  {}  }, // 596
  { "HPFAR_EL2", 0xE304, true, true,  {}  }, // 597
  { "PAR_EL1", 0xC3A0, true, true,  {}  }, // 598
  { "PMCR_EL0", 0xDCE0, true, true,  {}  }, // 599
  { "PMCNTENSET_EL0", 0xDCE1, true, true,  {}  }, // 600
  { "PMCNTENCLR_EL0", 0xDCE2, true, true,  {}  }, // 601
  { "PMOVSCLR_EL0", 0xDCE3, true, true,  {}  }, // 602
  { "PMSELR_EL0", 0xDCE5, true, true,  {}  }, // 603
  { "PMCCNTR_EL0", 0xDCE8, true, true,  {}  }, // 604
  { "PMXEVTYPER_EL0", 0xDCE9, true, true,  {}  }, // 605
  { "PMXEVCNTR_EL0", 0xDCEA, true, true,  {}  }, // 606
  { "PMUSERENR_EL0", 0xDCF0, true, true,  {}  }, // 607
  { "PMINTENSET_EL1", 0xC4F1, true, true,  {}  }, // 608
  { "PMINTENCLR_EL1", 0xC4F2, true, true,  {}  }, // 609
  { "PMOVSSET_EL0", 0xDCF3, true, true,  {}  }, // 610
  { "MAIR_EL1", 0xC510, true, true,  {}  }, // 611
  { "MAIR_EL2", 0xE510, true, true,  {}  }, // 612
  { "MAIR_EL3", 0xF510, true, true,  {}  }, // 613
  { "AMAIR_EL1", 0xC518, true, true,  {}  }, // 614
  { "AMAIR_EL2", 0xE518, true, true,  {}  }, // 615
  { "AMAIR_EL3", 0xF518, true, true,  {}  }, // 616
  { "VBAR_EL1", 0xC600, true, true,  {}  }, // 617
  { "VBAR_EL2", 0xE600, true, true,  {}  }, // 618
  { "VBAR_EL3", 0xF600, true, true,  {}  }, // 619
  { "RMR_EL1", 0xC602, true, true,  {}  }, // 620
  { "RMR_EL2", 0xE602, true, true,  {}  }, // 621
  { "RMR_EL3", 0xF602, true, true,  {}  }, // 622
  { "CONTEXTIDR_EL1", 0xC681, true, true,  {}  }, // 623
  { "TPIDR_EL0", 0xDE82, true, true,  {}  }, // 624
  { "TPIDR_EL2", 0xE682, true, true,  {}  }, // 625
  { "TPIDR_EL3", 0xF682, true, true,  {}  }, // 626
  { "TPIDRRO_EL0", 0xDE83, true, true,  {}  }, // 627
  { "TPIDR_EL1", 0xC684, true, true,  {}  }, // 628
  { "CNTFRQ_EL0", 0xDF00, true, true,  {}  }, // 629
  { "CNTVOFF_EL2", 0xE703, true, true,  {}  }, // 630
  { "CNTKCTL_EL1", 0xC708, true, true,  {}  }, // 631
  { "CNTHCTL_EL2", 0xE708, true, true,  {}  }, // 632
  { "CNTP_TVAL_EL0", 0xDF10, true, true,  {}  }, // 633
  { "CNTHP_TVAL_EL2", 0xE710, true, true,  {}  }, // 634
  { "CNTPS_TVAL_EL1", 0xFF10, true, true,  {}  }, // 635
  { "CNTP_CTL_EL0", 0xDF11, true, true,  {}  }, // 636
  { "CNTHP_CTL_EL2", 0xE711, true, true,  {}  }, // 637
  { "CNTPS_CTL_EL1", 0xFF11, true, true,  {}  }, // 638
  { "CNTP_CVAL_EL0", 0xDF12, true, true,  {}  }, // 639
  { "CNTHP_CVAL_EL2", 0xE712, true, true,  {}  }, // 640
  { "CNTPS_CVAL_EL1", 0xFF12, true, true,  {}  }, // 641
  { "CNTV_TVAL_EL0", 0xDF18, true, true,  {}  }, // 642
  { "CNTV_CTL_EL0", 0xDF19, true, true,  {}  }, // 643
  { "CNTV_CVAL_EL0", 0xDF1A, true, true,  {}  }, // 644
  { "PMEVCNTR0_EL0", 0xDF40, true, true,  {}  }, // 645
  { "PMEVCNTR1_EL0", 0xDF41, true, true,  {}  }, // 646
  { "PMEVCNTR2_EL0", 0xDF42, true, true,  {}  }, // 647
  { "PMEVCNTR3_EL0", 0xDF43, true, true,  {}  }, // 648
  { "PMEVCNTR4_EL0", 0xDF44, true, true,  {}  }, // 649
  { "PMEVCNTR5_EL0", 0xDF45, true, true,  {}  }, // 650
  { "PMEVCNTR6_EL0", 0xDF46, true, true,  {}  }, // 651
  { "PMEVCNTR7_EL0", 0xDF47, true, true,  {}  }, // 652
  { "PMEVCNTR8_EL0", 0xDF48, true, true,  {}  }, // 653
  { "PMEVCNTR9_EL0", 0xDF49, true, true,  {}  }, // 654
  { "PMEVCNTR10_EL0", 0xDF4A, true, true,  {}  }, // 655
  { "PMEVCNTR11_EL0", 0xDF4B, true, true,  {}  }, // 656
  { "PMEVCNTR12_EL0", 0xDF4C, true, true,  {}  }, // 657
  { "PMEVCNTR13_EL0", 0xDF4D, true, true,  {}  }, // 658
  { "PMEVCNTR14_EL0", 0xDF4E, true, true,  {}  }, // 659
  { "PMEVCNTR15_EL0", 0xDF4F, true, true,  {}  }, // 660
  { "PMEVCNTR16_EL0", 0xDF50, true, true,  {}  }, // 661
  { "PMEVCNTR17_EL0", 0xDF51, true, true,  {}  }, // 662
  { "PMEVCNTR18_EL0", 0xDF52, true, true,  {}  }, // 663
  { "PMEVCNTR19_EL0", 0xDF53, true, true,  {}  }, // 664
  { "PMEVCNTR20_EL0", 0xDF54, true, true,  {}  }, // 665
  { "PMEVCNTR21_EL0", 0xDF55, true, true,  {}  }, // 666
  { "PMEVCNTR22_EL0", 0xDF56, true, true,  {}  }, // 667
  { "PMEVCNTR23_EL0", 0xDF57, true, true,  {}  }, // 668
  { "PMEVCNTR24_EL0", 0xDF58, true, true,  {}  }, // 669
  { "PMEVCNTR25_EL0", 0xDF59, true, true,  {}  }, // 670
  { "PMEVCNTR26_EL0", 0xDF5A, true, true,  {}  }, // 671
  { "PMEVCNTR27_EL0", 0xDF5B, true, true,  {}  }, // 672
  { "PMEVCNTR28_EL0", 0xDF5C, true, true,  {}  }, // 673
  { "PMEVCNTR29_EL0", 0xDF5D, true, true,  {}  }, // 674
  { "PMEVCNTR30_EL0", 0xDF5E, true, true,  {}  }, // 675
  { "PMCCFILTR_EL0", 0xDF7F, true, true,  {}  }, // 676
  { "PMEVTYPER0_EL0", 0xDF60, true, true,  {}  }, // 677
  { "PMEVTYPER1_EL0", 0xDF61, true, true,  {}  }, // 678
  { "PMEVTYPER2_EL0", 0xDF62, true, true,  {}  }, // 679
  { "PMEVTYPER3_EL0", 0xDF63, true, true,  {}  }, // 680
  { "PMEVTYPER4_EL0", 0xDF64, true, true,  {}  }, // 681
  { "PMEVTYPER5_EL0", 0xDF65, true, true,  {}  }, // 682
  { "PMEVTYPER6_EL0", 0xDF66, true, true,  {}  }, // 683
  { "PMEVTYPER7_EL0", 0xDF67, true, true,  {}  }, // 684
  { "PMEVTYPER8_EL0", 0xDF68, true, true,  {}  }, // 685
  { "PMEVTYPER9_EL0", 0xDF69, true, true,  {}  }, // 686
  { "PMEVTYPER10_EL0", 0xDF6A, true, true,  {}  }, // 687
  { "PMEVTYPER11_EL0", 0xDF6B, true, true,  {}  }, // 688
  { "PMEVTYPER12_EL0", 0xDF6C, true, true,  {}  }, // 689
  { "PMEVTYPER13_EL0", 0xDF6D, true, true,  {}  }, // 690
  { "PMEVTYPER14_EL0", 0xDF6E, true, true,  {}  }, // 691
  { "PMEVTYPER15_EL0", 0xDF6F, true, true,  {}  }, // 692
  { "PMEVTYPER16_EL0", 0xDF70, true, true,  {}  }, // 693
  { "PMEVTYPER17_EL0", 0xDF71, true, true,  {}  }, // 694
  { "PMEVTYPER18_EL0", 0xDF72, true, true,  {}  }, // 695
  { "PMEVTYPER19_EL0", 0xDF73, true, true,  {}  }, // 696
  { "PMEVTYPER20_EL0", 0xDF74, true, true,  {}  }, // 697
  { "PMEVTYPER21_EL0", 0xDF75, true, true,  {}  }, // 698
  { "PMEVTYPER22_EL0", 0xDF76, true, true,  {}  }, // 699
  { "PMEVTYPER23_EL0", 0xDF77, true, true,  {}  }, // 700
  { "PMEVTYPER24_EL0", 0xDF78, true, true,  {}  }, // 701
  { "PMEVTYPER25_EL0", 0xDF79, true, true,  {}  }, // 702
  { "PMEVTYPER26_EL0", 0xDF7A, true, true,  {}  }, // 703
  { "PMEVTYPER27_EL0", 0xDF7B, true, true,  {}  }, // 704
  { "PMEVTYPER28_EL0", 0xDF7C, true, true,  {}  }, // 705
  { "PMEVTYPER29_EL0", 0xDF7D, true, true,  {}  }, // 706
  { "PMEVTYPER30_EL0", 0xDF7E, true, true,  {}  }, // 707
  { "TRCPRGCTLR", 0x8808, true, true,  {}  }, // 708
  { "TRCPROCSELR", 0x8810, true, true,  {}  }, // 709
  { "TRCCONFIGR", 0x8820, true, true,  {}  }, // 710
  { "TRCAUXCTLR", 0x8830, true, true,  {}  }, // 711
  { "TRCEVENTCTL0R", 0x8840, true, true,  {}  }, // 712
  { "TRCEVENTCTL1R", 0x8848, true, true,  {}  }, // 713
  { "TRCSTALLCTLR", 0x8858, true, true,  {}  }, // 714
  { "TRCTSCTLR", 0x8860, true, true,  {}  }, // 715
  { "TRCSYNCPR", 0x8868, true, true,  {}  }, // 716
  { "TRCCCCTLR", 0x8870, true, true,  {}  }, // 717
  { "TRCBBCTLR", 0x8878, true, true,  {}  }, // 718
  { "TRCTRACEIDR", 0x8801, true, true,  {}  }, // 719
  { "TRCQCTLR", 0x8809, true, true,  {}  }, // 720
  { "TRCVICTLR", 0x8802, true, true,  {}  }, // 721
  { "TRCVIIECTLR", 0x880A, true, true,  {}  }, // 722
  { "TRCVISSCTLR", 0x8812, true, true,  {}  }, // 723
  { "TRCVIPCSSCTLR", 0x881A, true, true,  {}  }, // 724
  { "TRCVDCTLR", 0x8842, true, true,  {}  }, // 725
  { "TRCVDSACCTLR", 0x884A, true, true,  {}  }, // 726
  { "TRCVDARCCTLR", 0x8852, true, true,  {}  }, // 727
  { "TRCSEQEVR0", 0x8804, true, true,  {}  }, // 728
  { "TRCSEQEVR1", 0x880C, true, true,  {}  }, // 729
  { "TRCSEQEVR2", 0x8814, true, true,  {}  }, // 730
  { "TRCSEQRSTEVR", 0x8834, true, true,  {}  }, // 731
  { "TRCSEQSTR", 0x883C, true, true,  {}  }, // 732
  { "TRCEXTINSELR", 0x8844, true, true,  {}  }, // 733
  { "TRCCNTRLDVR0", 0x8805, true, true,  {}  }, // 734
  { "TRCCNTRLDVR1", 0x880D, true, true,  {}  }, // 735
  { "TRCCNTRLDVR2", 0x8815, true, true,  {}  }, // 736
  { "TRCCNTRLDVR3", 0x881D, true, true,  {}  }, // 737
  { "TRCCNTCTLR0", 0x8825, true, true,  {}  }, // 738
  { "TRCCNTCTLR1", 0x882D, true, true,  {}  }, // 739
  { "TRCCNTCTLR2", 0x8835, true, true,  {}  }, // 740
  { "TRCCNTCTLR3", 0x883D, true, true,  {}  }, // 741
  { "TRCCNTVR0", 0x8845, true, true,  {}  }, // 742
  { "TRCCNTVR1", 0x884D, true, true,  {}  }, // 743
  { "TRCCNTVR2", 0x8855, true, true,  {}  }, // 744
  { "TRCCNTVR3", 0x885D, true, true,  {}  }, // 745
  { "TRCIMSPEC0", 0x8807, true, true,  {}  }, // 746
  { "TRCIMSPEC1", 0x880F, true, true,  {}  }, // 747
  { "TRCIMSPEC2", 0x8817, true, true,  {}  }, // 748
  { "TRCIMSPEC3", 0x881F, true, true,  {}  }, // 749
  { "TRCIMSPEC4", 0x8827, true, true,  {}  }, // 750
  { "TRCIMSPEC5", 0x882F, true, true,  {}  }, // 751
  { "TRCIMSPEC6", 0x8837, true, true,  {}  }, // 752
  { "TRCIMSPEC7", 0x883F, true, true,  {}  }, // 753
  { "TRCRSCTLR2", 0x8890, true, true,  {}  }, // 754
  { "TRCRSCTLR3", 0x8898, true, true,  {}  }, // 755
  { "TRCRSCTLR4", 0x88A0, true, true,  {}  }, // 756
  { "TRCRSCTLR5", 0x88A8, true, true,  {}  }, // 757
  { "TRCRSCTLR6", 0x88B0, true, true,  {}  }, // 758
  { "TRCRSCTLR7", 0x88B8, true, true,  {}  }, // 759
  { "TRCRSCTLR8", 0x88C0, true, true,  {}  }, // 760
  { "TRCRSCTLR9", 0x88C8, true, true,  {}  }, // 761
  { "TRCRSCTLR10", 0x88D0, true, true,  {}  }, // 762
  { "TRCRSCTLR11", 0x88D8, true, true,  {}  }, // 763
  { "TRCRSCTLR12", 0x88E0, true, true,  {}  }, // 764
  { "TRCRSCTLR13", 0x88E8, true, true,  {}  }, // 765
  { "TRCRSCTLR14", 0x88F0, true, true,  {}  }, // 766
 };

const SysReg *lookupSysRegByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "ACTLR_EL1", 540 },
    { "ACTLR_EL2", 541 },
    { "ACTLR_EL3", 542 },
    { "AFSR0_EL1", 584 },
    { "AFSR0_EL12", 174 },
    { "AFSR0_EL2", 585 },
    { "AFSR0_EL3", 586 },
    { "AFSR1_EL1", 587 },
    { "AFSR1_EL12", 175 },
    { "AFSR1_EL2", 588 },
    { "AFSR1_EL3", 589 },
    { "AIDR_EL1", 350 },
    { "AMAIR_EL1", 614 },
    { "AMAIR_EL12", 179 },
    { "AMAIR_EL2", 615 },
    { "AMAIR_EL3", 616 },
    { "AMCFGR_EL0", 257 },
    { "AMCGCR_EL0", 258 },
    { "AMCNTENCLR0_EL0", 260 },
    { "AMCNTENCLR1_EL0", 270 },
    { "AMCNTENSET0_EL0", 261 },
    { "AMCNTENSET1_EL0", 271 },
    { "AMCR_EL0", 256 },
    { "AMEVCNTR00_EL0", 262 },
    { "AMEVCNTR01_EL0", 263 },
    { "AMEVCNTR02_EL0", 264 },
    { "AMEVCNTR03_EL0", 265 },
    { "AMEVCNTR10_EL0", 272 },
    { "AMEVCNTR110_EL0", 282 },
    { "AMEVCNTR111_EL0", 283 },
    { "AMEVCNTR112_EL0", 284 },
    { "AMEVCNTR113_EL0", 285 },
    { "AMEVCNTR114_EL0", 286 },
    { "AMEVCNTR115_EL0", 287 },
    { "AMEVCNTR11_EL0", 273 },
    { "AMEVCNTR12_EL0", 274 },
    { "AMEVCNTR13_EL0", 275 },
    { "AMEVCNTR14_EL0", 276 },
    { "AMEVCNTR15_EL0", 277 },
    { "AMEVCNTR16_EL0", 278 },
    { "AMEVCNTR17_EL0", 279 },
    { "AMEVCNTR18_EL0", 280 },
    { "AMEVCNTR19_EL0", 281 },
    { "AMEVTYPER00_EL0", 266 },
    { "AMEVTYPER01_EL0", 267 },
    { "AMEVTYPER02_EL0", 268 },
    { "AMEVTYPER03_EL0", 269 },
    { "AMEVTYPER10_EL0", 288 },
    { "AMEVTYPER110_EL0", 298 },
    { "AMEVTYPER111_EL0", 299 },
    { "AMEVTYPER112_EL0", 300 },
    { "AMEVTYPER113_EL0", 301 },
    { "AMEVTYPER114_EL0", 302 },
    { "AMEVTYPER115_EL0", 303 },
    { "AMEVTYPER11_EL0", 289 },
    { "AMEVTYPER12_EL0", 290 },
    { "AMEVTYPER13_EL0", 291 },
    { "AMEVTYPER14_EL0", 292 },
    { "AMEVTYPER15_EL0", 293 },
    { "AMEVTYPER16_EL0", 294 },
    { "AMEVTYPER17_EL0", 295 },
    { "AMEVTYPER18_EL0", 296 },
    { "AMEVTYPER19_EL0", 297 },
    { "AMUSERENR_EL0", 259 },
    { "APDAKEYHI_EL1", 219 },
    { "APDAKEYLO_EL1", 218 },
    { "APDBKEYHI_EL1", 221 },
    { "APDBKEYLO_EL1", 220 },
    { "APGAKEYHI_EL1", 223 },
    { "APGAKEYLO_EL1", 222 },
    { "APIAKEYHI_EL1", 215 },
    { "APIAKEYLO_EL1", 214 },
    { "APIBKEYHI_EL1", 217 },
    { "APIBKEYLO_EL1", 216 },
    { "CCSIDR2_EL1", 345 },
    { "CCSIDR_EL1", 344 },
    { "CLIDR_EL1", 346 },
    { "CNTFRQ_EL0", 629 },
    { "CNTHCTL_EL2", 632 },
    { "CNTHPS_CTL_EL2", 231 },
    { "CNTHPS_CVAL_EL2", 230 },
    { "CNTHPS_TVAL_EL2", 229 },
    { "CNTHP_CTL_EL2", 637 },
    { "CNTHP_CVAL_EL2", 640 },
    { "CNTHP_TVAL_EL2", 634 },
    { "CNTHVS_CTL_EL2", 228 },
    { "CNTHVS_CVAL_EL2", 227 },
    { "CNTHVS_TVAL_EL2", 226 },
    { "CNTHV_CTL_EL2", 168 },
    { "CNTHV_CVAL_EL2", 167 },
    { "CNTHV_TVAL_EL2", 166 },
    { "CNTKCTL_EL1", 631 },
    { "CNTKCTL_EL12", 182 },
    { "CNTPCT_EL0", 386 },
    { "CNTPS_CTL_EL1", 638 },
    { "CNTPS_CVAL_EL1", 641 },
    { "CNTPS_TVAL_EL1", 635 },
    { "CNTP_CTL_EL0", 636 },
    { "CNTP_CTL_EL02", 184 },
    { "CNTP_CVAL_EL0", 639 },
    { "CNTP_CVAL_EL02", 185 },
    { "CNTP_TVAL_EL0", 633 },
    { "CNTP_TVAL_EL02", 183 },
    { "CNTVCT_EL0", 387 },
    { "CNTVOFF_EL2", 630 },
    { "CNTV_CTL_EL0", 643 },
    { "CNTV_CTL_EL02", 187 },
    { "CNTV_CVAL_EL0", 644 },
    { "CNTV_CVAL_EL02", 188 },
    { "CNTV_TVAL_EL0", 642 },
    { "CNTV_TVAL_EL02", 186 },
    { "CONTEXTIDR_EL1", 623 },
    { "CONTEXTIDR_EL12", 181 },
    { "CONTEXTIDR_EL2", 165 },
    { "CPACR_EL1", 536 },
    { "CPACR_EL12", 170 },
    { "CPM_IOACC_CTL_EL3", 335 },
    { "CPTR_EL2", 547 },
    { "CPTR_EL3", 548 },
    { "CSSELR_EL1", 533 },
    { "CTR_EL0", 347 },
    { "CURRENTEL", 574 },
    { "DACR32_EL2", 561 },
    { "DAIF", 573 },
    { "DBGAUTHSTATUS_EL1", 340 },
    { "DBGBCR0_EL1", 480 },
    { "DBGBCR10_EL1", 490 },
    { "DBGBCR11_EL1", 491 },
    { "DBGBCR12_EL1", 492 },
    { "DBGBCR13_EL1", 493 },
    { "DBGBCR14_EL1", 494 },
    { "DBGBCR15_EL1", 495 },
    { "DBGBCR1_EL1", 481 },
    { "DBGBCR2_EL1", 482 },
    { "DBGBCR3_EL1", 483 },
    { "DBGBCR4_EL1", 484 },
    { "DBGBCR5_EL1", 485 },
    { "DBGBCR6_EL1", 486 },
    { "DBGBCR7_EL1", 487 },
    { "DBGBCR8_EL1", 488 },
    { "DBGBCR9_EL1", 489 },
    { "DBGBVR0_EL1", 464 },
    { "DBGBVR10_EL1", 474 },
    { "DBGBVR11_EL1", 475 },
    { "DBGBVR12_EL1", 476 },
    { "DBGBVR13_EL1", 477 },
    { "DBGBVR14_EL1", 478 },
    { "DBGBVR15_EL1", 479 },
    { "DBGBVR1_EL1", 465 },
    { "DBGBVR2_EL1", 466 },
    { "DBGBVR3_EL1", 467 },
    { "DBGBVR4_EL1", 468 },
    { "DBGBVR5_EL1", 469 },
    { "DBGBVR6_EL1", 470 },
    { "DBGBVR7_EL1", 471 },
    { "DBGBVR8_EL1", 472 },
    { "DBGBVR9_EL1", 473 },
    { "DBGCLAIMCLR_EL1", 532 },
    { "DBGCLAIMSET_EL1", 531 },
    { "DBGDTRRX_EL0", 337 },
    { "DBGDTRTX_EL0", 445 },
    { "DBGDTR_EL0", 461 },
    { "DBGPRCR_EL1", 530 },
    { "DBGVCR32_EL2", 463 },
    { "DBGWCR0_EL1", 512 },
    { "DBGWCR10_EL1", 522 },
    { "DBGWCR11_EL1", 523 },
    { "DBGWCR12_EL1", 524 },
    { "DBGWCR13_EL1", 525 },
    { "DBGWCR14_EL1", 526 },
    { "DBGWCR15_EL1", 527 },
    { "DBGWCR1_EL1", 513 },
    { "DBGWCR2_EL1", 514 },
    { "DBGWCR3_EL1", 515 },
    { "DBGWCR4_EL1", 516 },
    { "DBGWCR5_EL1", 517 },
    { "DBGWCR6_EL1", 518 },
    { "DBGWCR7_EL1", 519 },
    { "DBGWCR8_EL1", 520 },
    { "DBGWCR9_EL1", 521 },
    { "DBGWVR0_EL1", 496 },
    { "DBGWVR10_EL1", 506 },
    { "DBGWVR11_EL1", 507 },
    { "DBGWVR12_EL1", 508 },
    { "DBGWVR13_EL1", 509 },
    { "DBGWVR14_EL1", 510 },
    { "DBGWVR15_EL1", 511 },
    { "DBGWVR1_EL1", 497 },
    { "DBGWVR2_EL1", 498 },
    { "DBGWVR3_EL1", 499 },
    { "DBGWVR4_EL1", 500 },
    { "DBGWVR5_EL1", 501 },
    { "DBGWVR6_EL1", 502 },
    { "DBGWVR7_EL1", 503 },
    { "DBGWVR8_EL1", 504 },
    { "DBGWVR9_EL1", 505 },
    { "DCZID_EL0", 351 },
    { "DISR_EL1", 211 },
    { "DIT", 307 },
    { "DLR_EL0", 582 },
    { "DSPSR_EL0", 581 },
    { "ELR_EL1", 565 },
    { "ELR_EL12", 190 },
    { "ELR_EL2", 566 },
    { "ELR_EL3", 567 },
    { "ERRIDR_EL1", 436 },
    { "ERRSELR_EL1", 205 },
    { "ERXADDR_EL1", 208 },
    { "ERXCTLR_EL1", 206 },
    { "ERXFR_EL1", 437 },
    { "ERXMISC0_EL1", 209 },
    { "ERXMISC1_EL1", 210 },
    { "ERXMISC2_EL1", 237 },
    { "ERXMISC3_EL1", 238 },
    { "ERXPFGCDN_EL1", 235 },
    { "ERXPFGCTL_EL1", 234 },
    { "ERXPFGF_EL1", 239 },
    { "ERXSTATUS_EL1", 207 },
    { "ERXTS_EL1", 236 },
    { "ESR_EL1", 590 },
    { "ESR_EL12", 176 },
    { "ESR_EL2", 591 },
    { "ESR_EL3", 592 },
    { "FAR_EL1", 594 },
    { "FAR_EL12", 177 },
    { "FAR_EL2", 595 },
    { "FAR_EL3", 596 },
    { "FPCR", 579 },
    { "FPEXC32_EL2", 593 },
    { "FPSR", 580 },
    { "GCR_EL1", 315 },
    { "GMID_EL1", 322 },
    { "HACR_EL2", 550 },
    { "HCR_EL2", 543 },
    { "HPFAR_EL2", 597 },
    { "HSTR_EL2", 549 },
    { "ICC_AP0R0_EL1", 124 },
    { "ICC_AP0R1_EL1", 125 },
    { "ICC_AP0R2_EL1", 126 },
    { "ICC_AP0R3_EL1", 127 },
    { "ICC_AP1R0_EL1", 128 },
    { "ICC_AP1R1_EL1", 129 },
    { "ICC_AP1R2_EL1", 130 },
    { "ICC_AP1R3_EL1", 131 },
    { "ICC_ASGI1R_EL1", 454 },
    { "ICC_BPR0_EL1", 114 },
    { "ICC_BPR1_EL1", 113 },
    { "ICC_CTLR_EL1", 116 },
    { "ICC_CTLR_EL3", 117 },
    { "ICC_DIR_EL1", 452 },
    { "ICC_EOIR0_EL1", 451 },
    { "ICC_EOIR1_EL1", 450 },
    { "ICC_HPPIR0_EL1", 429 },
    { "ICC_HPPIR1_EL1", 428 },
    { "ICC_IAR0_EL1", 427 },
    { "ICC_IAR1_EL1", 426 },
    { "ICC_IGRPEN0_EL1", 121 },
    { "ICC_IGRPEN1_EL1", 122 },
    { "ICC_IGRPEN1_EL3", 123 },
    { "ICC_PMR_EL1", 115 },
    { "ICC_RPR_EL1", 430 },
    { "ICC_SGI0R_EL1", 455 },
    { "ICC_SGI1R_EL1", 453 },
    { "ICC_SRE_EL1", 118 },
    { "ICC_SRE_EL2", 119 },
    { "ICC_SRE_EL3", 120 },
    { "ICH_AP0R0_EL2", 132 },
    { "ICH_AP0R1_EL2", 133 },
    { "ICH_AP0R2_EL2", 134 },
    { "ICH_AP0R3_EL2", 135 },
    { "ICH_AP1R0_EL2", 136 },
    { "ICH_AP1R1_EL2", 137 },
    { "ICH_AP1R2_EL2", 138 },
    { "ICH_AP1R3_EL2", 139 },
    { "ICH_EISR_EL2", 432 },
    { "ICH_ELRSR_EL2", 433 },
    { "ICH_HCR_EL2", 140 },
    { "ICH_LR0_EL2", 143 },
    { "ICH_LR10_EL2", 153 },
    { "ICH_LR11_EL2", 154 },
    { "ICH_LR12_EL2", 155 },
    { "ICH_LR13_EL2", 156 },
    { "ICH_LR14_EL2", 157 },
    { "ICH_LR15_EL2", 158 },
    { "ICH_LR1_EL2", 144 },
    { "ICH_LR2_EL2", 145 },
    { "ICH_LR3_EL2", 146 },
    { "ICH_LR4_EL2", 147 },
    { "ICH_LR5_EL2", 148 },
    { "ICH_LR6_EL2", 149 },
    { "ICH_LR7_EL2", 150 },
    { "ICH_LR8_EL2", 151 },
    { "ICH_LR9_EL2", 152 },
    { "ICH_MISR_EL2", 141 },
    { "ICH_VMCR_EL2", 142 },
    { "ICH_VTR_EL2", 431 },
    { "ID_AA64AFR0_EL1", 372 },
    { "ID_AA64AFR1_EL1", 373 },
    { "ID_AA64DFR0_EL1", 370 },
    { "ID_AA64DFR1_EL1", 371 },
    { "ID_AA64ISAR0_EL1", 374 },
    { "ID_AA64ISAR1_EL1", 375 },
    { "ID_AA64MMFR0_EL1", 376 },
    { "ID_AA64MMFR1_EL1", 377 },
    { "ID_AA64MMFR2_EL1", 378 },
    { "ID_AA64PFR0_EL1", 368 },
    { "ID_AA64PFR1_EL1", 369 },
    { "ID_AA64ZFR0_EL1", 434 },
    { "ID_AFR0_EL1", 356 },
    { "ID_DFR0_EL1", 355 },
    { "ID_ISAR0_EL1", 361 },
    { "ID_ISAR1_EL1", 362 },
    { "ID_ISAR2_EL1", 363 },
    { "ID_ISAR3_EL1", 364 },
    { "ID_ISAR4_EL1", 365 },
    { "ID_ISAR5_EL1", 366 },
    { "ID_ISAR6_EL1", 367 },
    { "ID_MMFR0_EL1", 357 },
    { "ID_MMFR1_EL1", 358 },
    { "ID_MMFR2_EL1", 359 },
    { "ID_MMFR3_EL1", 360 },
    { "ID_MMFR4_EL1", 388 },
    { "ID_MMFR5_EL1", 389 },
    { "ID_PFR0_EL1", 352 },
    { "ID_PFR1_EL1", 353 },
    { "ID_PFR2_EL1", 354 },
    { "IFSR32_EL2", 583 },
    { "ISR_EL1", 385 },
    { "LORC_EL1", 163 },
    { "LOREA_EL1", 161 },
    { "LORID_EL1", 435 },
    { "LORN_EL1", 162 },
    { "LORSA_EL1", 160 },
    { "MAIR_EL1", 611 },
    { "MAIR_EL12", 178 },
    { "MAIR_EL2", 612 },
    { "MAIR_EL3", 613 },
    { "MDCCINT_EL1", 459 },
    { "MDCCSR_EL0", 336 },
    { "MDCR_EL2", 545 },
    { "MDCR_EL3", 551 },
    { "MDRAR_EL1", 338 },
    { "MDSCR_EL1", 460 },
    { "MIDR_EL1", 343 },
    { "MPAM0_EL1", 240 },
    { "MPAM1_EL1", 241 },
    { "MPAM1_EL12", 244 },
    { "MPAM2_EL2", 242 },
    { "MPAM3_EL3", 243 },
    { "MPAMHCR_EL2", 245 },
    { "MPAMIDR_EL1", 255 },
    { "MPAMVPM0_EL2", 247 },
    { "MPAMVPM1_EL2", 248 },
    { "MPAMVPM2_EL2", 249 },
    { "MPAMVPM3_EL2", 250 },
    { "MPAMVPM4_EL2", 251 },
    { "MPAMVPM5_EL2", 252 },
    { "MPAMVPM6_EL2", 253 },
    { "MPAMVPM7_EL2", 254 },
    { "MPAMVPMV_EL2", 246 },
    { "MPIDR_EL1", 348 },
    { "MVFR0_EL1", 379 },
    { "MVFR1_EL1", 380 },
    { "MVFR2_EL1", 381 },
    { "NZCV", 572 },
    { "OSDLR_EL1", 529 },
    { "OSDTRRX_EL1", 456 },
    { "OSDTRTX_EL1", 457 },
    { "OSECCR_EL1", 462 },
    { "OSLAR_EL1", 446 },
    { "OSLSR_EL1", 339 },
    { "PAN", 159 },
    { "PAR_EL1", 598 },
    { "PMBIDR_EL1", 195 },
    { "PMBLIMITR_EL1", 192 },
    { "PMBPTR_EL1", 193 },
    { "PMBSR_EL1", 194 },
    { "PMCCFILTR_EL0", 676 },
    { "PMCCNTR_EL0", 604 },
    { "PMCEID0_EL0", 341 },
    { "PMCEID1_EL0", 342 },
    { "PMCNTENCLR_EL0", 601 },
    { "PMCNTENSET_EL0", 600 },
    { "PMCR_EL0", 599 },
    { "PMEVCNTR0_EL0", 645 },
    { "PMEVCNTR10_EL0", 655 },
    { "PMEVCNTR11_EL0", 656 },
    { "PMEVCNTR12_EL0", 657 },
    { "PMEVCNTR13_EL0", 658 },
    { "PMEVCNTR14_EL0", 659 },
    { "PMEVCNTR15_EL0", 660 },
    { "PMEVCNTR16_EL0", 661 },
    { "PMEVCNTR17_EL0", 662 },
    { "PMEVCNTR18_EL0", 663 },
    { "PMEVCNTR19_EL0", 664 },
    { "PMEVCNTR1_EL0", 646 },
    { "PMEVCNTR20_EL0", 665 },
    { "PMEVCNTR21_EL0", 666 },
    { "PMEVCNTR22_EL0", 667 },
    { "PMEVCNTR23_EL0", 668 },
    { "PMEVCNTR24_EL0", 669 },
    { "PMEVCNTR25_EL0", 670 },
    { "PMEVCNTR26_EL0", 671 },
    { "PMEVCNTR27_EL0", 672 },
    { "PMEVCNTR28_EL0", 673 },
    { "PMEVCNTR29_EL0", 674 },
    { "PMEVCNTR2_EL0", 647 },
    { "PMEVCNTR30_EL0", 675 },
    { "PMEVCNTR3_EL0", 648 },
    { "PMEVCNTR4_EL0", 649 },
    { "PMEVCNTR5_EL0", 650 },
    { "PMEVCNTR6_EL0", 651 },
    { "PMEVCNTR7_EL0", 652 },
    { "PMEVCNTR8_EL0", 653 },
    { "PMEVCNTR9_EL0", 654 },
    { "PMEVTYPER0_EL0", 677 },
    { "PMEVTYPER10_EL0", 687 },
    { "PMEVTYPER11_EL0", 688 },
    { "PMEVTYPER12_EL0", 689 },
    { "PMEVTYPER13_EL0", 690 },
    { "PMEVTYPER14_EL0", 691 },
    { "PMEVTYPER15_EL0", 692 },
    { "PMEVTYPER16_EL0", 693 },
    { "PMEVTYPER17_EL0", 694 },
    { "PMEVTYPER18_EL0", 695 },
    { "PMEVTYPER19_EL0", 696 },
    { "PMEVTYPER1_EL0", 678 },
    { "PMEVTYPER20_EL0", 697 },
    { "PMEVTYPER21_EL0", 698 },
    { "PMEVTYPER22_EL0", 699 },
    { "PMEVTYPER23_EL0", 700 },
    { "PMEVTYPER24_EL0", 701 },
    { "PMEVTYPER25_EL0", 702 },
    { "PMEVTYPER26_EL0", 703 },
    { "PMEVTYPER27_EL0", 704 },
    { "PMEVTYPER28_EL0", 705 },
    { "PMEVTYPER29_EL0", 706 },
    { "PMEVTYPER2_EL0", 679 },
    { "PMEVTYPER30_EL0", 707 },
    { "PMEVTYPER3_EL0", 680 },
    { "PMEVTYPER4_EL0", 681 },
    { "PMEVTYPER5_EL0", 682 },
    { "PMEVTYPER6_EL0", 683 },
    { "PMEVTYPER7_EL0", 684 },
    { "PMEVTYPER8_EL0", 685 },
    { "PMEVTYPER9_EL0", 686 },
    { "PMINTENCLR_EL1", 609 },
    { "PMINTENSET_EL1", 608 },
    { "PMMIR_EL1", 233 },
    { "PMOVSCLR_EL0", 602 },
    { "PMOVSSET_EL0", 610 },
    { "PMSCR_EL1", 198 },
    { "PMSCR_EL12", 197 },
    { "PMSCR_EL2", 196 },
    { "PMSELR_EL0", 603 },
    { "PMSEVFR_EL1", 202 },
    { "PMSFCR_EL1", 201 },
    { "PMSICR_EL1", 199 },
    { "PMSIDR_EL1", 204 },
    { "PMSIRR_EL1", 200 },
    { "PMSLATFR_EL1", 203 },
    { "PMSWINC_EL0", 447 },
    { "PMUSERENR_EL0", 607 },
    { "PMXEVCNTR_EL0", 606 },
    { "PMXEVTYPER_EL0", 605 },
    { "REVIDR_EL1", 349 },
    { "RGSR_EL1", 316 },
    { "RMR_EL1", 620 },
    { "RMR_EL2", 621 },
    { "RMR_EL3", 622 },
    { "RNDR", 438 },
    { "RNDRRS", 439 },
    { "RVBAR_EL1", 382 },
    { "RVBAR_EL2", 383 },
    { "RVBAR_EL3", 384 },
    { "SCR_EL3", 544 },
    { "SCTLR_EL1", 537 },
    { "SCTLR_EL12", 169 },
    { "SCTLR_EL2", 538 },
    { "SCTLR_EL3", 539 },
    { "SCXTNUM_EL0", 440 },
    { "SCXTNUM_EL1", 441 },
    { "SCXTNUM_EL12", 444 },
    { "SCXTNUM_EL2", 442 },
    { "SCXTNUM_EL3", 443 },
    { "SDER32_EL2", 232 },
    { "SDER32_EL3", 546 },
    { "SPSEL", 571 },
    { "SPSR_ABT", 576 },
    { "SPSR_EL1", 562 },
    { "SPSR_EL12", 189 },
    { "SPSR_EL2", 563 },
    { "SPSR_EL3", 564 },
    { "SPSR_FIQ", 578 },
    { "SPSR_IRQ", 575 },
    { "SPSR_UND", 577 },
    { "SP_EL0", 568 },
    { "SP_EL1", 569 },
    { "SP_EL2", 570 },
    { "SSBS", 313 },
    { "TCO", 314 },
    { "TCR_EL1", 556 },
    { "TCR_EL12", 173 },
    { "TCR_EL2", 557 },
    { "TCR_EL3", 558 },
    { "TEECR32_EL1", 458 },
    { "TEEHBR32_EL1", 528 },
    { "TFSRE0_EL1", 321 },
    { "TFSR_EL1", 317 },
    { "TFSR_EL12", 320 },
    { "TFSR_EL2", 318 },
    { "TFSR_EL3", 319 },
    { "TPIDRRO_EL0", 627 },
    { "TPIDR_EL0", 624 },
    { "TPIDR_EL1", 628 },
    { "TPIDR_EL2", 625 },
    { "TPIDR_EL3", 626 },
    { "TRBBASER_EL1", 330 },
    { "TRBIDR_EL1", 334 },
    { "TRBLIMITR_EL1", 328 },
    { "TRBMAR_EL1", 332 },
    { "TRBPTR_EL1", 329 },
    { "TRBSR_EL1", 331 },
    { "TRBTRG_EL1", 333 },
    { "TRCACATR0", 58 },
    { "TRCACATR1", 59 },
    { "TRCACATR10", 68 },
    { "TRCACATR11", 69 },
    { "TRCACATR12", 70 },
    { "TRCACATR13", 71 },
    { "TRCACATR14", 72 },
    { "TRCACATR15", 73 },
    { "TRCACATR2", 60 },
    { "TRCACATR3", 61 },
    { "TRCACATR4", 62 },
    { "TRCACATR5", 63 },
    { "TRCACATR6", 64 },
    { "TRCACATR7", 65 },
    { "TRCACATR8", 66 },
    { "TRCACATR9", 67 },
    { "TRCACVR0", 42 },
    { "TRCACVR1", 43 },
    { "TRCACVR10", 52 },
    { "TRCACVR11", 53 },
    { "TRCACVR12", 54 },
    { "TRCACVR13", 55 },
    { "TRCACVR14", 56 },
    { "TRCACVR15", 57 },
    { "TRCACVR2", 44 },
    { "TRCACVR3", 45 },
    { "TRCACVR4", 46 },
    { "TRCACVR5", 47 },
    { "TRCACVR6", 48 },
    { "TRCACVR7", 49 },
    { "TRCACVR8", 50 },
    { "TRCACVR9", 51 },
    { "TRCAUTHSTATUS", 410 },
    { "TRCAUXCTLR", 711 },
    { "TRCBBCTLR", 718 },
    { "TRCCCCTLR", 717 },
    { "TRCCIDCCTLR0", 106 },
    { "TRCCIDCCTLR1", 107 },
    { "TRCCIDCVR0", 90 },
    { "TRCCIDCVR1", 91 },
    { "TRCCIDCVR2", 92 },
    { "TRCCIDCVR3", 93 },
    { "TRCCIDCVR4", 94 },
    { "TRCCIDCVR5", 95 },
    { "TRCCIDCVR6", 96 },
    { "TRCCIDCVR7", 97 },
    { "TRCCIDR0", 422 },
    { "TRCCIDR1", 423 },
    { "TRCCIDR2", 424 },
    { "TRCCIDR3", 425 },
    { "TRCCLAIMCLR", 112 },
    { "TRCCLAIMSET", 111 },
    { "TRCCNTCTLR0", 738 },
    { "TRCCNTCTLR1", 739 },
    { "TRCCNTCTLR2", 740 },
    { "TRCCNTCTLR3", 741 },
    { "TRCCNTRLDVR0", 734 },
    { "TRCCNTRLDVR1", 735 },
    { "TRCCNTRLDVR2", 736 },
    { "TRCCNTRLDVR3", 737 },
    { "TRCCNTVR0", 742 },
    { "TRCCNTVR1", 743 },
    { "TRCCNTVR2", 744 },
    { "TRCCNTVR3", 745 },
    { "TRCCONFIGR", 710 },
    { "TRCDEVAFF0", 407 },
    { "TRCDEVAFF1", 408 },
    { "TRCDEVARCH", 411 },
    { "TRCDEVID", 412 },
    { "TRCDEVTYPE", 413 },
    { "TRCDVCMR0", 82 },
    { "TRCDVCMR1", 83 },
    { "TRCDVCMR2", 84 },
    { "TRCDVCMR3", 85 },
    { "TRCDVCMR4", 86 },
    { "TRCDVCMR5", 87 },
    { "TRCDVCMR6", 88 },
    { "TRCDVCMR7", 89 },
    { "TRCDVCVR0", 74 },
    { "TRCDVCVR1", 75 },
    { "TRCDVCVR2", 76 },
    { "TRCDVCVR3", 77 },
    { "TRCDVCVR4", 78 },
    { "TRCDVCVR5", 79 },
    { "TRCDVCVR6", 80 },
    { "TRCDVCVR7", 81 },
    { "TRCEVENTCTL0R", 712 },
    { "TRCEVENTCTL1R", 713 },
    { "TRCEXTINSELR", 733 },
    { "TRCEXTINSELR0", 324 },
    { "TRCEXTINSELR1", 325 },
    { "TRCEXTINSELR2", 326 },
    { "TRCEXTINSELR3", 327 },
    { "TRCIDR0", 397 },
    { "TRCIDR1", 398 },
    { "TRCIDR10", 393 },
    { "TRCIDR11", 394 },
    { "TRCIDR12", 395 },
    { "TRCIDR13", 396 },
    { "TRCIDR2", 399 },
    { "TRCIDR3", 400 },
    { "TRCIDR4", 401 },
    { "TRCIDR5", 402 },
    { "TRCIDR6", 403 },
    { "TRCIDR7", 404 },
    { "TRCIDR8", 391 },
    { "TRCIDR9", 392 },
    { "TRCIMSPEC0", 746 },
    { "TRCIMSPEC1", 747 },
    { "TRCIMSPEC2", 748 },
    { "TRCIMSPEC3", 749 },
    { "TRCIMSPEC4", 750 },
    { "TRCIMSPEC5", 751 },
    { "TRCIMSPEC6", 752 },
    { "TRCIMSPEC7", 753 },
    { "TRCITCTRL", 110 },
    { "TRCLAR", 449 },
    { "TRCLSR", 409 },
    { "TRCOSLAR", 448 },
    { "TRCOSLSR", 405 },
    { "TRCPDCR", 41 },
    { "TRCPDSR", 406 },
    { "TRCPIDR0", 418 },
    { "TRCPIDR1", 419 },
    { "TRCPIDR2", 420 },
    { "TRCPIDR3", 421 },
    { "TRCPIDR4", 414 },
    { "TRCPIDR5", 415 },
    { "TRCPIDR6", 416 },
    { "TRCPIDR7", 417 },
    { "TRCPRGCTLR", 708 },
    { "TRCPROCSELR", 709 },
    { "TRCQCTLR", 720 },
    { "TRCRSCTLR10", 762 },
    { "TRCRSCTLR11", 763 },
    { "TRCRSCTLR12", 764 },
    { "TRCRSCTLR13", 765 },
    { "TRCRSCTLR14", 766 },
    { "TRCRSCTLR15", 0 },
    { "TRCRSCTLR16", 1 },
    { "TRCRSCTLR17", 2 },
    { "TRCRSCTLR18", 3 },
    { "TRCRSCTLR19", 4 },
    { "TRCRSCTLR2", 754 },
    { "TRCRSCTLR20", 5 },
    { "TRCRSCTLR21", 6 },
    { "TRCRSCTLR22", 7 },
    { "TRCRSCTLR23", 8 },
    { "TRCRSCTLR24", 9 },
    { "TRCRSCTLR25", 10 },
    { "TRCRSCTLR26", 11 },
    { "TRCRSCTLR27", 12 },
    { "TRCRSCTLR28", 13 },
    { "TRCRSCTLR29", 14 },
    { "TRCRSCTLR3", 755 },
    { "TRCRSCTLR30", 15 },
    { "TRCRSCTLR31", 16 },
    { "TRCRSCTLR4", 756 },
    { "TRCRSCTLR5", 757 },
    { "TRCRSCTLR6", 758 },
    { "TRCRSCTLR7", 759 },
    { "TRCRSCTLR8", 760 },
    { "TRCRSCTLR9", 761 },
    { "TRCRSR", 323 },
    { "TRCSEQEVR0", 728 },
    { "TRCSEQEVR1", 729 },
    { "TRCSEQEVR2", 730 },
    { "TRCSEQRSTEVR", 731 },
    { "TRCSEQSTR", 732 },
    { "TRCSSCCR0", 17 },
    { "TRCSSCCR1", 18 },
    { "TRCSSCCR2", 19 },
    { "TRCSSCCR3", 20 },
    { "TRCSSCCR4", 21 },
    { "TRCSSCCR5", 22 },
    { "TRCSSCCR6", 23 },
    { "TRCSSCCR7", 24 },
    { "TRCSSCSR0", 25 },
    { "TRCSSCSR1", 26 },
    { "TRCSSCSR2", 27 },
    { "TRCSSCSR3", 28 },
    { "TRCSSCSR4", 29 },
    { "TRCSSCSR5", 30 },
    { "TRCSSCSR6", 31 },
    { "TRCSSCSR7", 32 },
    { "TRCSSPCICR0", 33 },
    { "TRCSSPCICR1", 34 },
    { "TRCSSPCICR2", 35 },
    { "TRCSSPCICR3", 36 },
    { "TRCSSPCICR4", 37 },
    { "TRCSSPCICR5", 38 },
    { "TRCSSPCICR6", 39 },
    { "TRCSSPCICR7", 40 },
    { "TRCSTALLCTLR", 714 },
    { "TRCSTATR", 390 },
    { "TRCSYNCPR", 716 },
    { "TRCTRACEIDR", 719 },
    { "TRCTSCTLR", 715 },
    { "TRCVDARCCTLR", 727 },
    { "TRCVDCTLR", 725 },
    { "TRCVDSACCTLR", 726 },
    { "TRCVICTLR", 721 },
    { "TRCVIIECTLR", 722 },
    { "TRCVIPCSSCTLR", 724 },
    { "TRCVISSCTLR", 723 },
    { "TRCVMIDCCTLR0", 108 },
    { "TRCVMIDCCTLR1", 109 },
    { "TRCVMIDCVR0", 98 },
    { "TRCVMIDCVR1", 99 },
    { "TRCVMIDCVR2", 100 },
    { "TRCVMIDCVR3", 101 },
    { "TRCVMIDCVR4", 102 },
    { "TRCVMIDCVR5", 103 },
    { "TRCVMIDCVR6", 104 },
    { "TRCVMIDCVR7", 105 },
    { "TRFCR_EL1", 304 },
    { "TRFCR_EL12", 306 },
    { "TRFCR_EL2", 305 },
    { "TTBR0_EL1", 552 },
    { "TTBR0_EL12", 171 },
    { "TTBR0_EL2", 553 },
    { "TTBR0_EL3", 554 },
    { "TTBR1_EL1", 555 },
    { "TTBR1_EL12", 172 },
    { "TTBR1_EL2", 164 },
    { "UAO", 191 },
    { "VBAR_EL1", 617 },
    { "VBAR_EL12", 180 },
    { "VBAR_EL2", 618 },
    { "VBAR_EL3", 619 },
    { "VDISR_EL2", 212 },
    { "VMPIDR_EL2", 535 },
    { "VNCR_EL2", 308 },
    { "VPIDR_EL2", 534 },
    { "VSESR_EL2", 213 },
    { "VSTCR_EL2", 224 },
    { "VSTTBR_EL2", 225 },
    { "VTCR_EL2", 560 },
    { "VTTBR_EL2", 559 },
    { "ZCR_EL1", 309 },
    { "ZCR_EL12", 312 },
    { "ZCR_EL2", 310 },
    { "ZCR_EL3", 311 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &SysRegsList[Idx->_index];
}

const SysReg *lookupSysRegByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x8002, 456 },
    { 0x8004, 464 },
    { 0x8005, 480 },
    { 0x8006, 496 },
    { 0x8007, 512 },
    { 0x800C, 465 },
    { 0x800D, 481 },
    { 0x800E, 497 },
    { 0x800F, 513 },
    { 0x8010, 459 },
    { 0x8012, 460 },
    { 0x8014, 466 },
    { 0x8015, 482 },
    { 0x8016, 498 },
    { 0x8017, 514 },
    { 0x801A, 457 },
    { 0x801C, 467 },
    { 0x801D, 483 },
    { 0x801E, 499 },
    { 0x801F, 515 },
    { 0x8024, 468 },
    { 0x8025, 484 },
    { 0x8026, 500 },
    { 0x8027, 516 },
    { 0x802C, 469 },
    { 0x802D, 485 },
    { 0x802E, 501 },
    { 0x802F, 517 },
    { 0x8032, 462 },
    { 0x8034, 470 },
    { 0x8035, 486 },
    { 0x8036, 502 },
    { 0x8037, 518 },
    { 0x803C, 471 },
    { 0x803D, 487 },
    { 0x803E, 503 },
    { 0x803F, 519 },
    { 0x8044, 472 },
    { 0x8045, 488 },
    { 0x8046, 504 },
    { 0x8047, 520 },
    { 0x804C, 473 },
    { 0x804D, 489 },
    { 0x804E, 505 },
    { 0x804F, 521 },
    { 0x8054, 474 },
    { 0x8055, 490 },
    { 0x8056, 506 },
    { 0x8057, 522 },
    { 0x805C, 475 },
    { 0x805D, 491 },
    { 0x805E, 507 },
    { 0x805F, 523 },
    { 0x8064, 476 },
    { 0x8065, 492 },
    { 0x8066, 508 },
    { 0x8067, 524 },
    { 0x806C, 477 },
    { 0x806D, 493 },
    { 0x806E, 509 },
    { 0x806F, 525 },
    { 0x8074, 478 },
    { 0x8075, 494 },
    { 0x8076, 510 },
    { 0x8077, 526 },
    { 0x807C, 479 },
    { 0x807D, 495 },
    { 0x807E, 511 },
    { 0x807F, 527 },
    { 0x8080, 338 },
    { 0x8084, 446 },
    { 0x808C, 339 },
    { 0x809C, 529 },
    { 0x80A4, 530 },
    { 0x83C6, 531 },
    { 0x83CE, 532 },
    { 0x83F6, 340 },
    { 0x8801, 719 },
    { 0x8802, 721 },
    { 0x8804, 728 },
    { 0x8805, 734 },
    { 0x8806, 391 },
    { 0x8807, 746 },
    { 0x8808, 708 },
    { 0x8809, 720 },
    { 0x880A, 722 },
    { 0x880C, 729 },
    { 0x880D, 735 },
    { 0x880E, 392 },
    { 0x880F, 747 },
    { 0x8810, 709 },
    { 0x8812, 723 },
    { 0x8814, 730 },
    { 0x8815, 736 },
    { 0x8816, 393 },
    { 0x8817, 748 },
    { 0x8818, 390 },
    { 0x881A, 724 },
    { 0x881D, 737 },
    { 0x881E, 394 },
    { 0x881F, 749 },
    { 0x8820, 710 },
    { 0x8825, 738 },
    { 0x8826, 395 },
    { 0x8827, 750 },
    { 0x882D, 739 },
    { 0x882E, 396 },
    { 0x882F, 751 },
    { 0x8830, 711 },
    { 0x8834, 731 },
    { 0x8835, 740 },
    { 0x8837, 752 },
    { 0x883C, 732 },
    { 0x883D, 741 },
    { 0x883F, 753 },
    { 0x8840, 712 },
    { 0x8842, 725 },
    { 0x8844, 324 },
    { 0x8844, 733 },
    { 0x8845, 742 },
    { 0x8847, 397 },
    { 0x8848, 713 },
    { 0x884A, 726 },
    { 0x884C, 325 },
    { 0x884D, 743 },
    { 0x884F, 398 },
    { 0x8850, 323 },
    { 0x8852, 727 },
    { 0x8854, 326 },
    { 0x8855, 744 },
    { 0x8857, 399 },
    { 0x8858, 714 },
    { 0x885C, 327 },
    { 0x885D, 745 },
    { 0x885F, 400 },
    { 0x8860, 715 },
    { 0x8867, 401 },
    { 0x8868, 716 },
    { 0x886F, 402 },
    { 0x8870, 717 },
    { 0x8877, 403 },
    { 0x8878, 718 },
    { 0x887F, 404 },
    { 0x8881, 1 },
    { 0x8882, 17 },
    { 0x8883, 33 },
    { 0x8884, 448 },
    { 0x8889, 2 },
    { 0x888A, 18 },
    { 0x888B, 34 },
    { 0x888C, 405 },
    { 0x8890, 754 },
    { 0x8891, 3 },
    { 0x8892, 19 },
    { 0x8893, 35 },
    { 0x8898, 755 },
    { 0x8899, 4 },
    { 0x889A, 20 },
    { 0x889B, 36 },
    { 0x88A0, 756 },
    { 0x88A1, 5 },
    { 0x88A2, 21 },
    { 0x88A3, 37 },
    { 0x88A4, 41 },
    { 0x88A8, 757 },
    { 0x88A9, 6 },
    { 0x88AA, 22 },
    { 0x88AB, 38 },
    { 0x88AC, 406 },
    { 0x88B0, 758 },
    { 0x88B1, 7 },
    { 0x88B2, 23 },
    { 0x88B3, 39 },
    { 0x88B8, 759 },
    { 0x88B9, 8 },
    { 0x88BA, 24 },
    { 0x88BB, 40 },
    { 0x88C0, 760 },
    { 0x88C1, 9 },
    { 0x88C2, 25 },
    { 0x88C8, 761 },
    { 0x88C9, 10 },
    { 0x88CA, 26 },
    { 0x88D0, 762 },
    { 0x88D1, 11 },
    { 0x88D2, 27 },
    { 0x88D8, 763 },
    { 0x88D9, 12 },
    { 0x88DA, 28 },
    { 0x88E0, 764 },
    { 0x88E1, 13 },
    { 0x88E2, 29 },
    { 0x88E8, 765 },
    { 0x88E9, 14 },
    { 0x88EA, 30 },
    { 0x88F0, 766 },
    { 0x88F1, 15 },
    { 0x88F2, 31 },
    { 0x88F8, 0 },
    { 0x88F9, 16 },
    { 0x88FA, 32 },
    { 0x8900, 42 },
    { 0x8901, 50 },
    { 0x8902, 58 },
    { 0x8903, 66 },
    { 0x8904, 74 },
    { 0x8905, 78 },
    { 0x8906, 82 },
    { 0x8907, 86 },
    { 0x8910, 43 },
    { 0x8911, 51 },
    { 0x8912, 59 },
    { 0x8913, 67 },
    { 0x8920, 44 },
    { 0x8921, 52 },
    { 0x8922, 60 },
    { 0x8923, 68 },
    { 0x8924, 75 },
    { 0x8925, 79 },
    { 0x8926, 83 },
    { 0x8927, 87 },
    { 0x8930, 45 },
    { 0x8931, 53 },
    { 0x8932, 61 },
    { 0x8933, 69 },
    { 0x8940, 46 },
    { 0x8941, 54 },
    { 0x8942, 62 },
    { 0x8943, 70 },
    { 0x8944, 76 },
    { 0x8945, 80 },
    { 0x8946, 84 },
    { 0x8947, 88 },
    { 0x8950, 47 },
    { 0x8951, 55 },
    { 0x8952, 63 },
    { 0x8953, 71 },
    { 0x8960, 48 },
    { 0x8961, 56 },
    { 0x8962, 64 },
    { 0x8963, 72 },
    { 0x8964, 77 },
    { 0x8965, 81 },
    { 0x8966, 85 },
    { 0x8967, 89 },
    { 0x8970, 49 },
    { 0x8971, 57 },
    { 0x8972, 65 },
    { 0x8973, 73 },
    { 0x8980, 90 },
    { 0x8981, 98 },
    { 0x8982, 106 },
    { 0x898A, 107 },
    { 0x8990, 91 },
    { 0x8991, 99 },
    { 0x8992, 108 },
    { 0x899A, 109 },
    { 0x89A0, 92 },
    { 0x89A1, 100 },
    { 0x89B0, 93 },
    { 0x89B1, 101 },
    { 0x89C0, 94 },
    { 0x89C1, 102 },
    { 0x89D0, 95 },
    { 0x89D1, 103 },
    { 0x89E0, 96 },
    { 0x89E1, 104 },
    { 0x89F0, 97 },
    { 0x89F1, 105 },
    { 0x8B84, 110 },
    { 0x8B97, 412 },
    { 0x8B9F, 413 },
    { 0x8BA7, 414 },
    { 0x8BAF, 415 },
    { 0x8BB7, 416 },
    { 0x8BBF, 417 },
    { 0x8BC6, 111 },
    { 0x8BC7, 418 },
    { 0x8BCE, 112 },
    { 0x8BCF, 419 },
    { 0x8BD6, 407 },
    { 0x8BD7, 420 },
    { 0x8BDE, 408 },
    { 0x8BDF, 421 },
    { 0x8BE6, 449 },
    { 0x8BE7, 422 },
    { 0x8BEE, 409 },
    { 0x8BEF, 423 },
    { 0x8BF6, 410 },
    { 0x8BF7, 424 },
    { 0x8BFE, 411 },
    { 0x8BFF, 425 },
    { 0x9000, 458 },
    { 0x9080, 528 },
    { 0x9808, 336 },
    { 0x9820, 461 },
    { 0x9828, 337 },
    { 0x9828, 445 },
    { 0xA038, 463 },
    { 0xC000, 343 },
    { 0xC005, 348 },
    { 0xC006, 349 },
    { 0xC008, 352 },
    { 0xC009, 353 },
    { 0xC00A, 355 },
    { 0xC00B, 356 },
    { 0xC00C, 357 },
    { 0xC00D, 358 },
    { 0xC00E, 359 },
    { 0xC00F, 360 },
    { 0xC010, 361 },
    { 0xC011, 362 },
    { 0xC012, 363 },
    { 0xC013, 364 },
    { 0xC014, 365 },
    { 0xC015, 366 },
    { 0xC016, 388 },
    { 0xC017, 367 },
    { 0xC018, 379 },
    { 0xC019, 380 },
    { 0xC01A, 381 },
    { 0xC01C, 354 },
    { 0xC01E, 389 },
    { 0xC020, 368 },
    { 0xC021, 369 },
    { 0xC024, 434 },
    { 0xC028, 370 },
    { 0xC029, 371 },
    { 0xC02C, 372 },
    { 0xC02D, 373 },
    { 0xC030, 374 },
    { 0xC031, 375 },
    { 0xC038, 376 },
    { 0xC039, 377 },
    { 0xC03A, 378 },
    { 0xC080, 537 },
    { 0xC081, 540 },
    { 0xC082, 536 },
    { 0xC085, 316 },
    { 0xC086, 315 },
    { 0xC090, 309 },
    { 0xC091, 304 },
    { 0xC100, 552 },
    { 0xC101, 555 },
    { 0xC102, 556 },
    { 0xC108, 214 },
    { 0xC109, 215 },
    { 0xC10A, 216 },
    { 0xC10B, 217 },
    { 0xC110, 218 },
    { 0xC111, 219 },
    { 0xC112, 220 },
    { 0xC113, 221 },
    { 0xC118, 222 },
    { 0xC119, 223 },
    { 0xC200, 562 },
    { 0xC201, 565 },
    { 0xC208, 568 },
    { 0xC210, 571 },
    { 0xC212, 574 },
    { 0xC213, 159 },
    { 0xC214, 191 },
    { 0xC230, 115 },
    { 0xC288, 584 },
    { 0xC289, 587 },
    { 0xC290, 590 },
    { 0xC298, 436 },
    { 0xC299, 205 },
    { 0xC2A0, 437 },
    { 0xC2A1, 206 },
    { 0xC2A2, 207 },
    { 0xC2A3, 208 },
    { 0xC2A4, 239 },
    { 0xC2A5, 234 },
    { 0xC2A6, 235 },
    { 0xC2A8, 209 },
    { 0xC2A9, 210 },
    { 0xC2AA, 237 },
    { 0xC2AB, 238 },
    { 0xC2AF, 236 },
    { 0xC2B0, 317 },
    { 0xC2B1, 321 },
    { 0xC300, 594 },
    { 0xC3A0, 598 },
    { 0xC4C8, 198 },
    { 0xC4CA, 199 },
    { 0xC4CB, 200 },
    { 0xC4CC, 201 },
    { 0xC4CD, 202 },
    { 0xC4CE, 203 },
    { 0xC4CF, 204 },
    { 0xC4D0, 192 },
    { 0xC4D1, 193 },
    { 0xC4D3, 194 },
    { 0xC4D7, 195 },
    { 0xC4D8, 328 },
    { 0xC4D9, 329 },
    { 0xC4DA, 330 },
    { 0xC4DB, 331 },
    { 0xC4DC, 332 },
    { 0xC4DE, 333 },
    { 0xC4DF, 334 },
    { 0xC4F1, 608 },
    { 0xC4F2, 609 },
    { 0xC4F6, 233 },
    { 0xC510, 611 },
    { 0xC518, 614 },
    { 0xC520, 160 },
    { 0xC521, 161 },
    { 0xC522, 162 },
    { 0xC523, 163 },
    { 0xC524, 255 },
    { 0xC527, 435 },
    { 0xC528, 241 },
    { 0xC529, 240 },
    { 0xC600, 617 },
    { 0xC601, 382 },
    { 0xC602, 620 },
    { 0xC608, 385 },
    { 0xC609, 211 },
    { 0xC640, 427 },
    { 0xC641, 451 },
    { 0xC642, 429 },
    { 0xC643, 114 },
    { 0xC644, 124 },
    { 0xC645, 125 },
    { 0xC646, 126 },
    { 0xC647, 127 },
    { 0xC648, 128 },
    { 0xC649, 129 },
    { 0xC64A, 130 },
    { 0xC64B, 131 },
    { 0xC659, 452 },
    { 0xC65B, 430 },
    { 0xC65D, 453 },
    { 0xC65E, 454 },
    { 0xC65F, 455 },
    { 0xC660, 426 },
    { 0xC661, 450 },
    { 0xC662, 428 },
    { 0xC663, 113 },
    { 0xC664, 116 },
    { 0xC665, 118 },
    { 0xC666, 121 },
    { 0xC667, 122 },
    { 0xC681, 623 },
    { 0xC684, 628 },
    { 0xC687, 441 },
    { 0xC708, 631 },
    { 0xC800, 344 },
    { 0xC801, 346 },
    { 0xC802, 345 },
    { 0xC804, 322 },
    { 0xC807, 350 },
    { 0xD000, 533 },
    { 0xD801, 347 },
    { 0xD807, 351 },
    { 0xD920, 438 },
    { 0xD921, 439 },
    { 0xDA10, 572 },
    { 0xDA11, 573 },
    { 0xDA15, 307 },
    { 0xDA16, 313 },
    { 0xDA17, 314 },
    { 0xDA20, 579 },
    { 0xDA21, 580 },
    { 0xDA28, 581 },
    { 0xDA29, 582 },
    { 0xDCE0, 599 },
    { 0xDCE1, 600 },
    { 0xDCE2, 601 },
    { 0xDCE3, 602 },
    { 0xDCE4, 447 },
    { 0xDCE5, 603 },
    { 0xDCE6, 341 },
    { 0xDCE7, 342 },
    { 0xDCE8, 604 },
    { 0xDCE9, 605 },
    { 0xDCEA, 606 },
    { 0xDCF0, 607 },
    { 0xDCF3, 610 },
    { 0xDE82, 624 },
    { 0xDE83, 627 },
    { 0xDE87, 440 },
    { 0xDE90, 256 },
    { 0xDE91, 257 },
    { 0xDE92, 258 },
    { 0xDE93, 259 },
    { 0xDE94, 260 },
    { 0xDE95, 261 },
    { 0xDE98, 270 },
    { 0xDE99, 271 },
    { 0xDEA0, 262 },
    { 0xDEA1, 263 },
    { 0xDEA2, 264 },
    { 0xDEA3, 265 },
    { 0xDEB0, 266 },
    { 0xDEB1, 267 },
    { 0xDEB2, 268 },
    { 0xDEB3, 269 },
    { 0xDEE0, 272 },
    { 0xDEE1, 273 },
    { 0xDEE2, 274 },
    { 0xDEE3, 275 },
    { 0xDEE4, 276 },
    { 0xDEE5, 277 },
    { 0xDEE6, 278 },
    { 0xDEE7, 279 },
    { 0xDEE8, 280 },
    { 0xDEE9, 281 },
    { 0xDEEA, 282 },
    { 0xDEEB, 283 },
    { 0xDEEC, 284 },
    { 0xDEED, 285 },
    { 0xDEEE, 286 },
    { 0xDEEF, 287 },
    { 0xDEF0, 288 },
    { 0xDEF1, 289 },
    { 0xDEF2, 290 },
    { 0xDEF3, 291 },
    { 0xDEF4, 292 },
    { 0xDEF5, 293 },
    { 0xDEF6, 294 },
    { 0xDEF7, 295 },
    { 0xDEF8, 296 },
    { 0xDEF9, 297 },
    { 0xDEFA, 298 },
    { 0xDEFB, 299 },
    { 0xDEFC, 300 },
    { 0xDEFD, 301 },
    { 0xDEFE, 302 },
    { 0xDEFF, 303 },
    { 0xDF00, 629 },
    { 0xDF01, 386 },
    { 0xDF02, 387 },
    { 0xDF10, 633 },
    { 0xDF11, 636 },
    { 0xDF12, 639 },
    { 0xDF18, 642 },
    { 0xDF19, 643 },
    { 0xDF1A, 644 },
    { 0xDF40, 645 },
    { 0xDF41, 646 },
    { 0xDF42, 647 },
    { 0xDF43, 648 },
    { 0xDF44, 649 },
    { 0xDF45, 650 },
    { 0xDF46, 651 },
    { 0xDF47, 652 },
    { 0xDF48, 653 },
    { 0xDF49, 654 },
    { 0xDF4A, 655 },
    { 0xDF4B, 656 },
    { 0xDF4C, 657 },
    { 0xDF4D, 658 },
    { 0xDF4E, 659 },
    { 0xDF4F, 660 },
    { 0xDF50, 661 },
    { 0xDF51, 662 },
    { 0xDF52, 663 },
    { 0xDF53, 664 },
    { 0xDF54, 665 },
    { 0xDF55, 666 },
    { 0xDF56, 667 },
    { 0xDF57, 668 },
    { 0xDF58, 669 },
    { 0xDF59, 670 },
    { 0xDF5A, 671 },
    { 0xDF5B, 672 },
    { 0xDF5C, 673 },
    { 0xDF5D, 674 },
    { 0xDF5E, 675 },
    { 0xDF60, 677 },
    { 0xDF61, 678 },
    { 0xDF62, 679 },
    { 0xDF63, 680 },
    { 0xDF64, 681 },
    { 0xDF65, 682 },
    { 0xDF66, 683 },
    { 0xDF67, 684 },
    { 0xDF68, 685 },
    { 0xDF69, 686 },
    { 0xDF6A, 687 },
    { 0xDF6B, 688 },
    { 0xDF6C, 689 },
    { 0xDF6D, 690 },
    { 0xDF6E, 691 },
    { 0xDF6F, 692 },
    { 0xDF70, 693 },
    { 0xDF71, 694 },
    { 0xDF72, 695 },
    { 0xDF73, 696 },
    { 0xDF74, 697 },
    { 0xDF75, 698 },
    { 0xDF76, 699 },
    { 0xDF77, 700 },
    { 0xDF78, 701 },
    { 0xDF79, 702 },
    { 0xDF7A, 703 },
    { 0xDF7B, 704 },
    { 0xDF7C, 705 },
    { 0xDF7D, 706 },
    { 0xDF7E, 707 },
    { 0xDF7F, 676 },
    { 0xE000, 534 },
    { 0xE005, 535 },
    { 0xE080, 538 },
    { 0xE081, 541 },
    { 0xE088, 543 },
    { 0xE089, 545 },
    { 0xE08A, 547 },
    { 0xE08B, 549 },
    { 0xE08F, 550 },
    { 0xE090, 310 },
    { 0xE091, 305 },
    { 0xE099, 232 },
    { 0xE100, 553 },
    { 0xE101, 164 },
    { 0xE102, 557 },
    { 0xE108, 559 },
    { 0xE10A, 560 },
    { 0xE110, 308 },
    { 0xE130, 225 },
    { 0xE132, 224 },
    { 0xE180, 561 },
    { 0xE200, 563 },
    { 0xE201, 566 },
    { 0xE208, 569 },
    { 0xE218, 575 },
    { 0xE219, 576 },
    { 0xE21A, 577 },
    { 0xE21B, 578 },
    { 0xE281, 583 },
    { 0xE288, 585 },
    { 0xE289, 588 },
    { 0xE290, 591 },
    { 0xE293, 213 },
    { 0xE298, 593 },
    { 0xE2B0, 318 },
    { 0xE300, 595 },
    { 0xE304, 597 },
    { 0xE4C8, 196 },
    { 0xE510, 612 },
    { 0xE518, 615 },
    { 0xE520, 245 },
    { 0xE521, 246 },
    { 0xE528, 242 },
    { 0xE530, 247 },
    { 0xE531, 248 },
    { 0xE532, 249 },
    { 0xE533, 250 },
    { 0xE534, 251 },
    { 0xE535, 252 },
    { 0xE536, 253 },
    { 0xE537, 254 },
    { 0xE600, 618 },
    { 0xE601, 383 },
    { 0xE602, 621 },
    { 0xE609, 212 },
    { 0xE640, 132 },
    { 0xE641, 133 },
    { 0xE642, 134 },
    { 0xE643, 135 },
    { 0xE648, 136 },
    { 0xE649, 137 },
    { 0xE64A, 138 },
    { 0xE64B, 139 },
    { 0xE64D, 119 },
    { 0xE658, 140 },
    { 0xE659, 431 },
    { 0xE65A, 141 },
    { 0xE65B, 432 },
    { 0xE65D, 433 },
    { 0xE65F, 142 },
    { 0xE660, 143 },
    { 0xE661, 144 },
    { 0xE662, 145 },
    { 0xE663, 146 },
    { 0xE664, 147 },
    { 0xE665, 148 },
    { 0xE666, 149 },
    { 0xE667, 150 },
    { 0xE668, 151 },
    { 0xE669, 152 },
    { 0xE66A, 153 },
    { 0xE66B, 154 },
    { 0xE66C, 155 },
    { 0xE66D, 156 },
    { 0xE66E, 157 },
    { 0xE66F, 158 },
    { 0xE681, 165 },
    { 0xE682, 625 },
    { 0xE687, 442 },
    { 0xE703, 630 },
    { 0xE708, 632 },
    { 0xE710, 634 },
    { 0xE711, 637 },
    { 0xE712, 640 },
    { 0xE718, 166 },
    { 0xE719, 168 },
    { 0xE71A, 167 },
    { 0xE720, 226 },
    { 0xE721, 228 },
    { 0xE722, 227 },
    { 0xE728, 229 },
    { 0xE729, 231 },
    { 0xE72A, 230 },
    { 0xE880, 169 },
    { 0xE882, 170 },
    { 0xE890, 312 },
    { 0xE891, 306 },
    { 0xE900, 171 },
    { 0xE901, 172 },
    { 0xE902, 173 },
    { 0xEA00, 189 },
    { 0xEA01, 190 },
    { 0xEA88, 174 },
    { 0xEA89, 175 },
    { 0xEA90, 176 },
    { 0xEAB0, 320 },
    { 0xEB00, 177 },
    { 0xECC8, 197 },
    { 0xED10, 178 },
    { 0xED18, 179 },
    { 0xED28, 244 },
    { 0xEE00, 180 },
    { 0xEE81, 181 },
    { 0xEE87, 444 },
    { 0xEF08, 182 },
    { 0xEF10, 183 },
    { 0xEF11, 184 },
    { 0xEF12, 185 },
    { 0xEF18, 186 },
    { 0xEF19, 187 },
    { 0xEF1A, 188 },
    { 0xF080, 539 },
    { 0xF081, 542 },
    { 0xF088, 544 },
    { 0xF089, 546 },
    { 0xF08A, 548 },
    { 0xF090, 311 },
    { 0xF099, 551 },
    { 0xF100, 554 },
    { 0xF102, 558 },
    { 0xF200, 564 },
    { 0xF201, 567 },
    { 0xF208, 570 },
    { 0xF288, 586 },
    { 0xF289, 589 },
    { 0xF290, 592 },
    { 0xF2B0, 319 },
    { 0xF300, 596 },
    { 0xF510, 613 },
    { 0xF518, 616 },
    { 0xF528, 243 },
    { 0xF600, 619 },
    { 0xF601, 384 },
    { 0xF602, 622 },
    { 0xF664, 117 },
    { 0xF665, 120 },
    { 0xF667, 123 },
    { 0xF682, 626 },
    { 0xF687, 443 },
    { 0xFF10, 635 },
    { 0xFF11, 638 },
    { 0xFF12, 641 },
    { 0xFF90, 335 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &SysRegsList[Idx->_index];
}
#endif

#ifdef GET_TLBI_DECL
const TLBI *lookupTLBIByName(StringRef Name);
const TLBI *lookupTLBIByEncoding(uint16_t Encoding);
#endif

#ifdef GET_TLBI_IMPL
constexpr TLBI TLBIsList[] = {
  { "IPAS2E1IS", 0x2401, true,  {}  }, // 0
  { "IPAS2LE1IS", 0x2405, true,  {}  }, // 1
  { "VMALLE1IS", 0x418, false,  {}  }, // 2
  { "ALLE2IS", 0x2418, false,  {}  }, // 3
  { "ALLE3IS", 0x3418, false,  {}  }, // 4
  { "VAE1IS", 0x419, true,  {}  }, // 5
  { "VAE2IS", 0x2419, true,  {}  }, // 6
  { "VAE3IS", 0x3419, true,  {}  }, // 7
  { "ASIDE1IS", 0x41A, true,  {}  }, // 8
  { "VAAE1IS", 0x41B, true,  {}  }, // 9
  { "ALLE1IS", 0x241C, false,  {}  }, // 10
  { "VALE1IS", 0x41D, true,  {}  }, // 11
  { "VALE2IS", 0x241D, true,  {}  }, // 12
  { "VALE3IS", 0x341D, true,  {}  }, // 13
  { "VMALLS12E1IS", 0x241E, false,  {}  }, // 14
  { "VAALE1IS", 0x41F, true,  {}  }, // 15
  { "IPAS2E1", 0x2421, true,  {}  }, // 16
  { "IPAS2LE1", 0x2425, true,  {}  }, // 17
  { "VMALLE1", 0x438, false,  {}  }, // 18
  { "ALLE2", 0x2438, false,  {}  }, // 19
  { "ALLE3", 0x3438, false,  {}  }, // 20
  { "VAE1", 0x439, true,  {}  }, // 21
  { "VAE2", 0x2439, true,  {}  }, // 22
  { "VAE3", 0x3439, true,  {}  }, // 23
  { "ASIDE1", 0x43A, true,  {}  }, // 24
  { "VAAE1", 0x43B, true,  {}  }, // 25
  { "ALLE1", 0x243C, false,  {}  }, // 26
  { "VALE1", 0x43D, true,  {}  }, // 27
  { "VALE2", 0x243D, true,  {}  }, // 28
  { "VALE3", 0x343D, true,  {}  }, // 29
  { "VMALLS12E1", 0x243E, false,  {}  }, // 30
  { "VAALE1", 0x43F, true,  {}  }, // 31
  { "VMALLE1OS", 0x408, false,  {AArch64::FeatureTLB_RMI}  }, // 32
  { "VAE1OS", 0x409, true,  {AArch64::FeatureTLB_RMI}  }, // 33
  { "ASIDE1OS", 0x40A, true,  {AArch64::FeatureTLB_RMI}  }, // 34
  { "VAAE1OS", 0x40B, true,  {AArch64::FeatureTLB_RMI}  }, // 35
  { "VALE1OS", 0x40D, true,  {AArch64::FeatureTLB_RMI}  }, // 36
  { "VAALE1OS", 0x40F, true,  {AArch64::FeatureTLB_RMI}  }, // 37
  { "IPAS2E1OS", 0x2420, true,  {AArch64::FeatureTLB_RMI}  }, // 38
  { "IPAS2LE1OS", 0x2424, true,  {AArch64::FeatureTLB_RMI}  }, // 39
  { "VAE2OS", 0x2409, true,  {AArch64::FeatureTLB_RMI}  }, // 40
  { "VALE2OS", 0x240D, true,  {AArch64::FeatureTLB_RMI}  }, // 41
  { "VMALLS12E1OS", 0x240E, false,  {AArch64::FeatureTLB_RMI}  }, // 42
  { "VAE3OS", 0x3409, true,  {AArch64::FeatureTLB_RMI}  }, // 43
  { "VALE3OS", 0x340D, true,  {AArch64::FeatureTLB_RMI}  }, // 44
  { "ALLE2OS", 0x2408, false,  {AArch64::FeatureTLB_RMI}  }, // 45
  { "ALLE1OS", 0x240C, false,  {AArch64::FeatureTLB_RMI}  }, // 46
  { "ALLE3OS", 0x3408, false,  {AArch64::FeatureTLB_RMI}  }, // 47
  { "RVAE1", 0x431, true,  {AArch64::FeatureTLB_RMI}  }, // 48
  { "RVAAE1", 0x433, true,  {AArch64::FeatureTLB_RMI}  }, // 49
  { "RVALE1", 0x435, true,  {AArch64::FeatureTLB_RMI}  }, // 50
  { "RVAALE1", 0x437, true,  {AArch64::FeatureTLB_RMI}  }, // 51
  { "RVAE1IS", 0x411, true,  {AArch64::FeatureTLB_RMI}  }, // 52
  { "RVAAE1IS", 0x413, true,  {AArch64::FeatureTLB_RMI}  }, // 53
  { "RVALE1IS", 0x415, true,  {AArch64::FeatureTLB_RMI}  }, // 54
  { "RVAALE1IS", 0x417, true,  {AArch64::FeatureTLB_RMI}  }, // 55
  { "RVAE1OS", 0x429, true,  {AArch64::FeatureTLB_RMI}  }, // 56
  { "RVAAE1OS", 0x42B, true,  {AArch64::FeatureTLB_RMI}  }, // 57
  { "RVALE1OS", 0x42D, true,  {AArch64::FeatureTLB_RMI}  }, // 58
  { "RVAALE1OS", 0x42F, true,  {AArch64::FeatureTLB_RMI}  }, // 59
  { "RIPAS2E1IS", 0x2402, true,  {AArch64::FeatureTLB_RMI}  }, // 60
  { "RIPAS2LE1IS", 0x2406, true,  {AArch64::FeatureTLB_RMI}  }, // 61
  { "RIPAS2E1", 0x2422, true,  {AArch64::FeatureTLB_RMI}  }, // 62
  { "RIPAS2LE1", 0x2426, true,  {AArch64::FeatureTLB_RMI}  }, // 63
  { "RIPAS2E1OS", 0x2423, true,  {AArch64::FeatureTLB_RMI}  }, // 64
  { "RIPAS2LE1OS", 0x2427, true,  {AArch64::FeatureTLB_RMI}  }, // 65
  { "RVAE2", 0x2431, true,  {AArch64::FeatureTLB_RMI}  }, // 66
  { "RVALE2", 0x2435, true,  {AArch64::FeatureTLB_RMI}  }, // 67
  { "RVAE2IS", 0x2411, true,  {AArch64::FeatureTLB_RMI}  }, // 68
  { "RVALE2IS", 0x2415, true,  {AArch64::FeatureTLB_RMI}  }, // 69
  { "RVAE2OS", 0x2429, true,  {AArch64::FeatureTLB_RMI}  }, // 70
  { "RVALE2OS", 0x242D, true,  {AArch64::FeatureTLB_RMI}  }, // 71
  { "RVAE3", 0x3431, true,  {AArch64::FeatureTLB_RMI}  }, // 72
  { "RVALE3", 0x3435, true,  {AArch64::FeatureTLB_RMI}  }, // 73
  { "RVAE3IS", 0x3411, true,  {AArch64::FeatureTLB_RMI}  }, // 74
  { "RVALE3IS", 0x3415, true,  {AArch64::FeatureTLB_RMI}  }, // 75
  { "RVAE3OS", 0x3429, true,  {AArch64::FeatureTLB_RMI}  }, // 76
  { "RVALE3OS", 0x342D, true,  {AArch64::FeatureTLB_RMI}  }, // 77
 };

const TLBI *lookupTLBIByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "ALLE1", 26 },
    { "ALLE1IS", 10 },
    { "ALLE1OS", 46 },
    { "ALLE2", 19 },
    { "ALLE2IS", 3 },
    { "ALLE2OS", 45 },
    { "ALLE3", 20 },
    { "ALLE3IS", 4 },
    { "ALLE3OS", 47 },
    { "ASIDE1", 24 },
    { "ASIDE1IS", 8 },
    { "ASIDE1OS", 34 },
    { "IPAS2E1", 16 },
    { "IPAS2E1IS", 0 },
    { "IPAS2E1OS", 38 },
    { "IPAS2LE1", 17 },
    { "IPAS2LE1IS", 1 },
    { "IPAS2LE1OS", 39 },
    { "RIPAS2E1", 62 },
    { "RIPAS2E1IS", 60 },
    { "RIPAS2E1OS", 64 },
    { "RIPAS2LE1", 63 },
    { "RIPAS2LE1IS", 61 },
    { "RIPAS2LE1OS", 65 },
    { "RVAAE1", 49 },
    { "RVAAE1IS", 53 },
    { "RVAAE1OS", 57 },
    { "RVAALE1", 51 },
    { "RVAALE1IS", 55 },
    { "RVAALE1OS", 59 },
    { "RVAE1", 48 },
    { "RVAE1IS", 52 },
    { "RVAE1OS", 56 },
    { "RVAE2", 66 },
    { "RVAE2IS", 68 },
    { "RVAE2OS", 70 },
    { "RVAE3", 72 },
    { "RVAE3IS", 74 },
    { "RVAE3OS", 76 },
    { "RVALE1", 50 },
    { "RVALE1IS", 54 },
    { "RVALE1OS", 58 },
    { "RVALE2", 67 },
    { "RVALE2IS", 69 },
    { "RVALE2OS", 71 },
    { "RVALE3", 73 },
    { "RVALE3IS", 75 },
    { "RVALE3OS", 77 },
    { "VAAE1", 25 },
    { "VAAE1IS", 9 },
    { "VAAE1OS", 35 },
    { "VAALE1", 31 },
    { "VAALE1IS", 15 },
    { "VAALE1OS", 37 },
    { "VAE1", 21 },
    { "VAE1IS", 5 },
    { "VAE1OS", 33 },
    { "VAE2", 22 },
    { "VAE2IS", 6 },
    { "VAE2OS", 40 },
    { "VAE3", 23 },
    { "VAE3IS", 7 },
    { "VAE3OS", 43 },
    { "VALE1", 27 },
    { "VALE1IS", 11 },
    { "VALE1OS", 36 },
    { "VALE2", 28 },
    { "VALE2IS", 12 },
    { "VALE2OS", 41 },
    { "VALE3", 29 },
    { "VALE3IS", 13 },
    { "VALE3OS", 44 },
    { "VMALLE1", 18 },
    { "VMALLE1IS", 2 },
    { "VMALLE1OS", 32 },
    { "VMALLS12E1", 30 },
    { "VMALLS12E1IS", 14 },
    { "VMALLS12E1OS", 42 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &TLBIsList[Idx->_index];
}

const TLBI *lookupTLBIByEncoding(uint16_t Encoding) {
  struct IndexType {
    uint16_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x408, 32 },
    { 0x409, 33 },
    { 0x40A, 34 },
    { 0x40B, 35 },
    { 0x40D, 36 },
    { 0x40F, 37 },
    { 0x411, 52 },
    { 0x413, 53 },
    { 0x415, 54 },
    { 0x417, 55 },
    { 0x418, 2 },
    { 0x419, 5 },
    { 0x41A, 8 },
    { 0x41B, 9 },
    { 0x41D, 11 },
    { 0x41F, 15 },
    { 0x429, 56 },
    { 0x42B, 57 },
    { 0x42D, 58 },
    { 0x42F, 59 },
    { 0x431, 48 },
    { 0x433, 49 },
    { 0x435, 50 },
    { 0x437, 51 },
    { 0x438, 18 },
    { 0x439, 21 },
    { 0x43A, 24 },
    { 0x43B, 25 },
    { 0x43D, 27 },
    { 0x43F, 31 },
    { 0x2401, 0 },
    { 0x2402, 60 },
    { 0x2405, 1 },
    { 0x2406, 61 },
    { 0x2408, 45 },
    { 0x2409, 40 },
    { 0x240C, 46 },
    { 0x240D, 41 },
    { 0x240E, 42 },
    { 0x2411, 68 },
    { 0x2415, 69 },
    { 0x2418, 3 },
    { 0x2419, 6 },
    { 0x241C, 10 },
    { 0x241D, 12 },
    { 0x241E, 14 },
    { 0x2420, 38 },
    { 0x2421, 16 },
    { 0x2422, 62 },
    { 0x2423, 64 },
    { 0x2424, 39 },
    { 0x2425, 17 },
    { 0x2426, 63 },
    { 0x2427, 65 },
    { 0x2429, 70 },
    { 0x242D, 71 },
    { 0x2431, 66 },
    { 0x2435, 67 },
    { 0x2438, 19 },
    { 0x2439, 22 },
    { 0x243C, 26 },
    { 0x243D, 28 },
    { 0x243E, 30 },
    { 0x3408, 47 },
    { 0x3409, 43 },
    { 0x340D, 44 },
    { 0x3411, 74 },
    { 0x3415, 75 },
    { 0x3418, 4 },
    { 0x3419, 7 },
    { 0x341D, 13 },
    { 0x3429, 76 },
    { 0x342D, 77 },
    { 0x3431, 72 },
    { 0x3435, 73 },
    { 0x3438, 20 },
    { 0x3439, 23 },
    { 0x343D, 29 },
  };

  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &TLBIsList[Idx->_index];
}
#endif

#ifdef GET_TSB_DECL
const TSB *lookupTSBByName(StringRef Name);
const TSB *lookupTSBByEncoding(uint8_t Encoding);
#endif

#ifdef GET_TSB_IMPL
constexpr TSB TSBsList[] = {
  { "csync", 0x0,  {AArch64::FeatureTRACEV8_4}  }, // 0
 };

const TSB *lookupTSBByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "CSYNC", 0 },
  };

  struct KeyType {
    std::string Name;
  };
  KeyType Key = { Name.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpName = StringRef(LHS.Name).compare(RHS.Name);
      if (CmpName < 0) return true;
      if (CmpName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Name != Idx->Name)
    return nullptr;
  return &TSBsList[Idx->_index];
}

const TSB *lookupTSBByEncoding(uint8_t Encoding) {
  struct IndexType {
    uint8_t Encoding;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { 0x0, 0 },
  };

  auto Table = makeArrayRef(Index);
  size_t Idx = Encoding;
  return Idx >= Table.size() ? nullptr : &TSBsList[Table[Idx]._index];
}
#endif

#undef GET_AT_DECL
#undef GET_AT_IMPL
#undef GET_BTI_DECL
#undef GET_BTI_IMPL
#undef GET_DB_DECL
#undef GET_DB_IMPL
#undef GET_DC_DECL
#undef GET_DC_IMPL
#undef GET_EXACTFPIMM_DECL
#undef GET_EXACTFPIMM_IMPL
#undef GET_IC_DECL
#undef GET_IC_IMPL
#undef GET_ISB_DECL
#undef GET_ISB_IMPL
#undef GET_PRCTX_DECL
#undef GET_PRCTX_IMPL
#undef GET_PRFM_DECL
#undef GET_PRFM_IMPL
#undef GET_PSB_DECL
#undef GET_PSB_IMPL
#undef GET_PSTATE_DECL
#undef GET_PSTATE_IMPL
#undef GET_SVEPREDPAT_DECL
#undef GET_SVEPREDPAT_IMPL
#undef GET_SVEPRFM_DECL
#undef GET_SVEPRFM_IMPL
#undef GET_SYSREG_DECL
#undef GET_SYSREG_IMPL
#undef GET_TLBI_DECL
#undef GET_TLBI_IMPL
#undef GET_TSB_DECL
#undef GET_TSB_IMPL

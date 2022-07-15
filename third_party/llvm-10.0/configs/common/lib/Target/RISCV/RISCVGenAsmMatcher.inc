/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands,
                       const SmallBitVector &OptionalOperandsMask);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

  Match_InvalidBareSymbol,
  Match_InvalidCLUIImm,
  Match_InvalidCSRSystemRegister,
  Match_InvalidCallSymbol,
  Match_InvalidFRMArg,
  Match_InvalidFenceArg,
  Match_InvalidImmXLenLI,
  Match_InvalidImmZero,
  Match_InvalidPseudoJumpSymbol,
  Match_InvalidSImm10Lsb0000NonZero,
  Match_InvalidSImm12,
  Match_InvalidSImm12Lsb0,
  Match_InvalidSImm13Lsb0,
  Match_InvalidSImm21Lsb0JAL,
  Match_InvalidSImm5,
  Match_InvalidSImm5Plus1,
  Match_InvalidSImm6,
  Match_InvalidSImm6NonZero,
  Match_InvalidSImm9Lsb0,
  Match_InvalidTPRelAddSymbol,
  Match_InvalidUImm10Lsb00NonZero,
  Match_InvalidUImm20AUIPC,
  Match_InvalidUImm20LUI,
  Match_InvalidUImm5,
  Match_InvalidUImm7Lsb00,
  Match_InvalidUImm8Lsb00,
  Match_InvalidUImm8Lsb000,
  Match_InvalidUImm9Lsb000,
  Match_InvalidUImmLog2XLen,
  Match_InvalidUImmLog2XLenHalf,
  Match_InvalidUImmLog2XLenNonZero,
  Match_InvalidVMaskRegister,
  Match_InvalidVTypeI,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasStdExtMBit = 6,
  Feature_HasStdExtABit = 1,
  Feature_HasStdExtFBit = 5,
  Feature_HasStdExtDBit = 4,
  Feature_HasStdExtCBit = 3,
  Feature_HasStdExtZbbBit = 8,
  Feature_HasStdExtZbcBit = 10,
  Feature_HasStdExtZbeBit = 11,
  Feature_HasStdExtZbfBit = 12,
  Feature_HasStdExtZbmBit = 13,
  Feature_HasStdExtZbpBit = 14,
  Feature_HasStdExtZbrBit = 16,
  Feature_HasStdExtZbsBit = 17,
  Feature_HasStdExtZbtBit = 18,
  Feature_HasStdExtZbbOrZbpBit = 9,
  Feature_HasStdExtZbproposedcBit = 15,
  Feature_HasStdExtBBit = 2,
  Feature_HasRVCHintsBit = 0,
  Feature_HasStdExtVBit = 7,
  Feature_IsRV64Bit = 21,
  Feature_IsRV32Bit = 19,
  Feature_IsRV32EBit = 20,
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 51 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 20 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 2 strings to match.
        return 67;	 // "f0"
      case '1':	 // 2 strings to match.
        return 68;	 // "f1"
      case '2':	 // 2 strings to match.
        return 69;	 // "f2"
      case '3':	 // 2 strings to match.
        return 70;	 // "f3"
      case '4':	 // 2 strings to match.
        return 71;	 // "f4"
      case '5':	 // 2 strings to match.
        return 72;	 // "f5"
      case '6':	 // 2 strings to match.
        return 73;	 // "f6"
      case '7':	 // 2 strings to match.
        return 74;	 // "f7"
      case '8':	 // 2 strings to match.
        return 75;	 // "f8"
      case '9':	 // 2 strings to match.
        return 76;	 // "f9"
      }
      break;
    case 'v':	 // 21 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 4 strings to match.
        return 3;	 // "v0"
      case '1':	 // 1 string to match.
        return 4;	 // "v1"
      case '2':	 // 2 strings to match.
        return 5;	 // "v2"
      case '3':	 // 1 string to match.
        return 6;	 // "v3"
      case '4':	 // 3 strings to match.
        return 7;	 // "v4"
      case '5':	 // 1 string to match.
        return 8;	 // "v5"
      case '6':	 // 2 strings to match.
        return 9;	 // "v6"
      case '7':	 // 1 string to match.
        return 10;	 // "v7"
      case '8':	 // 4 strings to match.
        return 11;	 // "v8"
      case '9':	 // 1 string to match.
        return 12;	 // "v9"
      case 'l':	 // 1 string to match.
        return 1;	 // "vl"
      }
      break;
    case 'x':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 35;	 // "x0"
      case '1':	 // 1 string to match.
        return 36;	 // "x1"
      case '2':	 // 1 string to match.
        return 37;	 // "x2"
      case '3':	 // 1 string to match.
        return 38;	 // "x3"
      case '4':	 // 1 string to match.
        return 39;	 // "x4"
      case '5':	 // 1 string to match.
        return 40;	 // "x5"
      case '6':	 // 1 string to match.
        return 41;	 // "x6"
      case '7':	 // 1 string to match.
        return 42;	 // "x7"
      case '8':	 // 1 string to match.
        return 43;	 // "x8"
      case '9':	 // 1 string to match.
        return 44;	 // "x9"
      }
      break;
    }
    break;
  case 3:	 // 106 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 44 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 20 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 77;	 // "f10"
        case '1':	 // 2 strings to match.
          return 78;	 // "f11"
        case '2':	 // 2 strings to match.
          return 79;	 // "f12"
        case '3':	 // 2 strings to match.
          return 80;	 // "f13"
        case '4':	 // 2 strings to match.
          return 81;	 // "f14"
        case '5':	 // 2 strings to match.
          return 82;	 // "f15"
        case '6':	 // 2 strings to match.
          return 83;	 // "f16"
        case '7':	 // 2 strings to match.
          return 84;	 // "f17"
        case '8':	 // 2 strings to match.
          return 85;	 // "f18"
        case '9':	 // 2 strings to match.
          return 86;	 // "f19"
        }
        break;
      case '2':	 // 20 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 87;	 // "f20"
        case '1':	 // 2 strings to match.
          return 88;	 // "f21"
        case '2':	 // 2 strings to match.
          return 89;	 // "f22"
        case '3':	 // 2 strings to match.
          return 90;	 // "f23"
        case '4':	 // 2 strings to match.
          return 91;	 // "f24"
        case '5':	 // 2 strings to match.
          return 92;	 // "f25"
        case '6':	 // 2 strings to match.
          return 93;	 // "f26"
        case '7':	 // 2 strings to match.
          return 94;	 // "f27"
        case '8':	 // 2 strings to match.
          return 95;	 // "f28"
        case '9':	 // 2 strings to match.
          return 96;	 // "f29"
        }
        break;
      case '3':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 97;	 // "f30"
        case '1':	 // 2 strings to match.
          return 98;	 // "f31"
        }
        break;
      }
      break;
    case 'v':	 // 40 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 18 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 13;	 // "v10"
        case '1':	 // 1 string to match.
          return 14;	 // "v11"
        case '2':	 // 3 strings to match.
          return 15;	 // "v12"
        case '3':	 // 1 string to match.
          return 16;	 // "v13"
        case '4':	 // 2 strings to match.
          return 17;	 // "v14"
        case '5':	 // 1 string to match.
          return 18;	 // "v15"
        case '6':	 // 4 strings to match.
          return 19;	 // "v16"
        case '7':	 // 1 string to match.
          return 20;	 // "v17"
        case '8':	 // 2 strings to match.
          return 21;	 // "v18"
        case '9':	 // 1 string to match.
          return 22;	 // "v19"
        }
        break;
      case '2':	 // 19 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 23;	 // "v20"
        case '1':	 // 1 string to match.
          return 24;	 // "v21"
        case '2':	 // 2 strings to match.
          return 25;	 // "v22"
        case '3':	 // 1 string to match.
          return 26;	 // "v23"
        case '4':	 // 4 strings to match.
          return 27;	 // "v24"
        case '5':	 // 1 string to match.
          return 28;	 // "v25"
        case '6':	 // 2 strings to match.
          return 29;	 // "v26"
        case '7':	 // 1 string to match.
          return 30;	 // "v27"
        case '8':	 // 3 strings to match.
          return 31;	 // "v28"
        case '9':	 // 1 string to match.
          return 32;	 // "v29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 33;	 // "v30"
        case '1':	 // 1 string to match.
          return 34;	 // "v31"
        }
        break;
      }
      break;
    case 'x':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 45;	 // "x10"
        case '1':	 // 1 string to match.
          return 46;	 // "x11"
        case '2':	 // 1 string to match.
          return 47;	 // "x12"
        case '3':	 // 1 string to match.
          return 48;	 // "x13"
        case '4':	 // 1 string to match.
          return 49;	 // "x14"
        case '5':	 // 1 string to match.
          return 50;	 // "x15"
        case '6':	 // 1 string to match.
          return 51;	 // "x16"
        case '7':	 // 1 string to match.
          return 52;	 // "x17"
        case '8':	 // 1 string to match.
          return 53;	 // "x18"
        case '9':	 // 1 string to match.
          return 54;	 // "x19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 55;	 // "x20"
        case '1':	 // 1 string to match.
          return 56;	 // "x21"
        case '2':	 // 1 string to match.
          return 57;	 // "x22"
        case '3':	 // 1 string to match.
          return 58;	 // "x23"
        case '4':	 // 1 string to match.
          return 59;	 // "x24"
        case '5':	 // 1 string to match.
          return 60;	 // "x25"
        case '6':	 // 1 string to match.
          return 61;	 // "x26"
        case '7':	 // 1 string to match.
          return 62;	 // "x27"
        case '8':	 // 1 string to match.
          return 63;	 // "x28"
        case '9':	 // 1 string to match.
          return 64;	 // "x29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 65;	 // "x30"
        case '1':	 // 1 string to match.
          return 66;	 // "x31"
        }
        break;
      }
      break;
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vtype", 5) != 0)
      break;
    return 2;	 // "vtype"
  }
  return 0;
}

static unsigned MatchRegisterAltName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 51 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 45;	 // "a0"
      case '1':	 // 1 string to match.
        return 46;	 // "a1"
      case '2':	 // 1 string to match.
        return 47;	 // "a2"
      case '3':	 // 1 string to match.
        return 48;	 // "a3"
      case '4':	 // 1 string to match.
        return 49;	 // "a4"
      case '5':	 // 1 string to match.
        return 50;	 // "a5"
      case '6':	 // 1 string to match.
        return 51;	 // "a6"
      case '7':	 // 1 string to match.
        return 52;	 // "a7"
      }
      break;
    case 'f':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 43;	 // "fp"
    case 'g':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 38;	 // "gp"
    case 'r':	 // 1 string to match.
      if (Name[1] != 'a')
        break;
      return 36;	 // "ra"
    case 's':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 43;	 // "s0"
      case '1':	 // 1 string to match.
        return 44;	 // "s1"
      case '2':	 // 1 string to match.
        return 53;	 // "s2"
      case '3':	 // 1 string to match.
        return 54;	 // "s3"
      case '4':	 // 1 string to match.
        return 55;	 // "s4"
      case '5':	 // 1 string to match.
        return 56;	 // "s5"
      case '6':	 // 1 string to match.
        return 57;	 // "s6"
      case '7':	 // 1 string to match.
        return 58;	 // "s7"
      case '8':	 // 1 string to match.
        return 59;	 // "s8"
      case '9':	 // 1 string to match.
        return 60;	 // "s9"
      case 'p':	 // 1 string to match.
        return 37;	 // "sp"
      }
      break;
    case 't':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 40;	 // "t0"
      case '1':	 // 1 string to match.
        return 41;	 // "t1"
      case '2':	 // 1 string to match.
        return 42;	 // "t2"
      case '3':	 // 1 string to match.
        return 63;	 // "t3"
      case '4':	 // 1 string to match.
        return 64;	 // "t4"
      case '5':	 // 1 string to match.
        return 65;	 // "t5"
      case '6':	 // 1 string to match.
        return 66;	 // "t6"
      case 'p':	 // 1 string to match.
        return 39;	 // "tp"
      }
      break;
    case 'v':	 // 21 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 4 strings to match.
        return 3;	 // "v0"
      case '1':	 // 1 string to match.
        return 4;	 // "v1"
      case '2':	 // 2 strings to match.
        return 5;	 // "v2"
      case '3':	 // 1 string to match.
        return 6;	 // "v3"
      case '4':	 // 3 strings to match.
        return 7;	 // "v4"
      case '5':	 // 1 string to match.
        return 8;	 // "v5"
      case '6':	 // 2 strings to match.
        return 9;	 // "v6"
      case '7':	 // 1 string to match.
        return 10;	 // "v7"
      case '8':	 // 4 strings to match.
        return 11;	 // "v8"
      case '9':	 // 1 string to match.
        return 12;	 // "v9"
      case 'l':	 // 1 string to match.
        return 1;	 // "vl"
      }
      break;
    }
    break;
  case 3:	 // 98 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 56 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 16 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 77;	 // "fa0"
        case '1':	 // 2 strings to match.
          return 78;	 // "fa1"
        case '2':	 // 2 strings to match.
          return 79;	 // "fa2"
        case '3':	 // 2 strings to match.
          return 80;	 // "fa3"
        case '4':	 // 2 strings to match.
          return 81;	 // "fa4"
        case '5':	 // 2 strings to match.
          return 82;	 // "fa5"
        case '6':	 // 2 strings to match.
          return 83;	 // "fa6"
        case '7':	 // 2 strings to match.
          return 84;	 // "fa7"
        }
        break;
      case 's':	 // 20 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 75;	 // "fs0"
        case '1':	 // 2 strings to match.
          return 76;	 // "fs1"
        case '2':	 // 2 strings to match.
          return 85;	 // "fs2"
        case '3':	 // 2 strings to match.
          return 86;	 // "fs3"
        case '4':	 // 2 strings to match.
          return 87;	 // "fs4"
        case '5':	 // 2 strings to match.
          return 88;	 // "fs5"
        case '6':	 // 2 strings to match.
          return 89;	 // "fs6"
        case '7':	 // 2 strings to match.
          return 90;	 // "fs7"
        case '8':	 // 2 strings to match.
          return 91;	 // "fs8"
        case '9':	 // 2 strings to match.
          return 92;	 // "fs9"
        }
        break;
      case 't':	 // 20 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 67;	 // "ft0"
        case '1':	 // 2 strings to match.
          return 68;	 // "ft1"
        case '2':	 // 2 strings to match.
          return 69;	 // "ft2"
        case '3':	 // 2 strings to match.
          return 70;	 // "ft3"
        case '4':	 // 2 strings to match.
          return 71;	 // "ft4"
        case '5':	 // 2 strings to match.
          return 72;	 // "ft5"
        case '6':	 // 2 strings to match.
          return 73;	 // "ft6"
        case '7':	 // 2 strings to match.
          return 74;	 // "ft7"
        case '8':	 // 2 strings to match.
          return 95;	 // "ft8"
        case '9':	 // 2 strings to match.
          return 96;	 // "ft9"
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 61;	 // "s10"
      case '1':	 // 1 string to match.
        return 62;	 // "s11"
      }
      break;
    case 'v':	 // 40 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 18 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 13;	 // "v10"
        case '1':	 // 1 string to match.
          return 14;	 // "v11"
        case '2':	 // 3 strings to match.
          return 15;	 // "v12"
        case '3':	 // 1 string to match.
          return 16;	 // "v13"
        case '4':	 // 2 strings to match.
          return 17;	 // "v14"
        case '5':	 // 1 string to match.
          return 18;	 // "v15"
        case '6':	 // 4 strings to match.
          return 19;	 // "v16"
        case '7':	 // 1 string to match.
          return 20;	 // "v17"
        case '8':	 // 2 strings to match.
          return 21;	 // "v18"
        case '9':	 // 1 string to match.
          return 22;	 // "v19"
        }
        break;
      case '2':	 // 19 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 23;	 // "v20"
        case '1':	 // 1 string to match.
          return 24;	 // "v21"
        case '2':	 // 2 strings to match.
          return 25;	 // "v22"
        case '3':	 // 1 string to match.
          return 26;	 // "v23"
        case '4':	 // 4 strings to match.
          return 27;	 // "v24"
        case '5':	 // 1 string to match.
          return 28;	 // "v25"
        case '6':	 // 2 strings to match.
          return 29;	 // "v26"
        case '7':	 // 1 string to match.
          return 30;	 // "v27"
        case '8':	 // 3 strings to match.
          return 31;	 // "v28"
        case '9':	 // 1 string to match.
          return 32;	 // "v29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 33;	 // "v30"
        case '1':	 // 1 string to match.
          return 34;	 // "v31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 4 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 93;	 // "fs10"
        case '1':	 // 2 strings to match.
          return 94;	 // "fs11"
        }
        break;
      case 't':	 // 4 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 97;	 // "ft10"
        case '1':	 // 2 strings to match.
          return 98;	 // "ft11"
        }
        break;
      }
      break;
    case 'z':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ero", 3) != 0)
        break;
      return 35;	 // "zero"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vtype", 5) != 0)
      break;
    return 2;	 // "vtype"
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasStdExtMBit: return "'M' (Integer Multiplication and Division)";
  case Feature_HasStdExtABit: return "'A' (Atomic Instructions)";
  case Feature_HasStdExtFBit: return "'F' (Single-Precision Floating-Point)";
  case Feature_HasStdExtDBit: return "'D' (Double-Precision Floating-Point)";
  case Feature_HasStdExtCBit: return "'C' (Compressed Instructions)";
  case Feature_HasStdExtZbbBit: return "'Zbb' (Base 'B' Instructions)";
  case Feature_HasStdExtZbcBit: return "'Zbc' (Carry-Less 'B' Instructions)";
  case Feature_HasStdExtZbeBit: return "'Zbe' (Extract-Deposit 'B' Instructions)";
  case Feature_HasStdExtZbfBit: return "'Zbf' (Bit-Field 'B' Instructions)";
  case Feature_HasStdExtZbmBit: return "'Zbm' (Matrix 'B' Instructions)";
  case Feature_HasStdExtZbpBit: return "'Zbp' (Permutation 'B' Instructions)";
  case Feature_HasStdExtZbrBit: return "'Zbr' (Polynomial Reduction 'B' Instructions)";
  case Feature_HasStdExtZbsBit: return "'Zbs' (Single-Bit 'B' Instructions)";
  case Feature_HasStdExtZbtBit: return "'Zbt' (Ternary 'B' Instructions)";
  case Feature_HasStdExtZbbOrZbpBit: return "";
  case Feature_HasStdExtZbproposedcBit: return "'Zbproposedc' (Proposed Compressed 'B' Instructions)";
  case Feature_HasStdExtBBit: return "'B' (Bit Manipulation Instructions)";
  case Feature_HasRVCHintsBit: return "RVC Hint Instructions";
  case Feature_HasStdExtVBit: return "'V' (Vector Instructions)";
  case Feature_IsRV64Bit: return "RV64I Base Instruction Set";
  case Feature_IsRV32Bit: return "RV32I Base Instruction Set";
  case Feature_IsRV32EBit: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, const FeatureBitset &Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
          break;
        Mnemonic = "mv";	 // "move"
        return;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
          break;
        Mnemonic = "ecall";	 // "scall"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
          break;
        Mnemonic = "ebreak";	 // "sbreak"
        return;
      case 7:	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
            Mnemonic = "fmv.w.x";
          return;
        case 'x':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
            Mnemonic = "fmv.x.w";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
      break;
    Mnemonic = "mv";	 // "move"
    return;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
      break;
    Mnemonic = "ecall";	 // "scall"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
      break;
    Mnemonic = "ebreak";	 // "sbreak"
    return;
  case 7:	 // 2 strings to match.
    if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
      break;
    switch (Mnemonic[4]) {
    default: break;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
        Mnemonic = "fmv.w.x";
      return;
    case 'x':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
        Mnemonic = "fmv.x.w";
      return;
    }
    break;
  }
}

enum {
  Tie0_1_1,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_95_addRegOperands,
  CVT_regX0,
  CVT_imm_95_0,
  CVT_95_addCSRSystemRegisterOperands,
  CVT_imm_95_7,
  CVT_95_addFRMArgOperands,
  CVT_imm_95_15,
  CVT_95_addFenceArgOperands,
  CVT_imm_95_3,
  CVT_imm_95_1,
  CVT_imm_95_2,
  CVT_regX1,
  CVT_imm_95__MINUS_1,
  CVT_imm_95_31,
  CVT_imm_95_63,
  CVT_imm_95_16,
  CVT_imm_95_48,
  CVT_imm_95_30,
  CVT_imm_95_62,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_imm_95_32,
  CVT_imm_95_28,
  CVT_imm_95_60,
  CVT_imm_95_4,
  CVT_imm_95_12,
  CVT_imm_95_24,
  CVT_imm_95_56,
  CVT_imm_95_8,
  CVT_imm_95_3072,
  CVT_imm_95_3200,
  CVT_imm_95_3074,
  CVT_imm_95_3202,
  CVT_imm_95_3073,
  CVT_imm_95_3201,
  CVT_95_addRegOperands_95_defaultMaskRegOp,
  CVT_95_addSImm5Plus1Operands,
  CVT_95_addVTypeIOperands,
  CVT_imm_95_255,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__SImm121_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3,
  Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1,
  Convert__Reg1_0__UImm20AUIPC1_1,
  Convert__Reg1_0__Reg1_1__SImm13Lsb01_2,
  Convert__Reg1_0__regX0__SImm13Lsb01_1,
  Convert__Reg1_1__Reg1_0__SImm13Lsb01_2,
  Convert__regX0__Reg1_0__SImm13Lsb01_1,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__ImmZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1,
  Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2,
  Convert__Reg1_0__Tie0_1_1__SImm61_1,
  Convert__Reg1_0__SImm9Lsb01_1,
  Convert_NoOperands,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm7Lsb001_1,
  Convert__Reg1_0__Reg1_3__UImm8Lsb001_1,
  Convert__SImm12Lsb01_0,
  Convert__Reg1_0,
  Convert__Reg1_0__SImm61_1,
  Convert__Reg1_0__CLUIImm1_1,
  Convert__Reg1_0__Tie0_1_1,
  Convert__SImm6NonZero1_0,
  Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1,
  Convert__CallSymbol1_0,
  Convert__Reg1_0__CallSymbol1_1,
  Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3,
  Convert__regX0__CSRSystemRegister1_0__Reg1_1,
  Convert__regX0__CSRSystemRegister1_0__UImm51_1,
  Convert__Reg1_0__CSRSystemRegister1_1__regX0,
  Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2,
  Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2,
  Convert__imm_95_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3,
  Convert__Reg1_0__Reg1_1__imm_95_7,
  Convert__Reg1_0__Reg1_1__FRMArg1_2,
  Convert__imm_95_15__imm_95_15,
  Convert__FenceArg1_0__FenceArg1_1,
  Convert__Reg1_0__Reg1_2__Reg1_1,
  Convert__Reg1_0__Reg1_2__BareSymbol1_1,
  Convert__Reg1_0__Reg1_3__SImm121_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4,
  Convert__Reg1_0__imm_95_3__regX0,
  Convert__Reg1_0__imm_95_1__regX0,
  Convert__Reg1_0__imm_95_2__regX0,
  Convert__regX0__imm_95_3__Reg1_0,
  Convert__Reg1_0__imm_95_3__Reg1_1,
  Convert__regX0__imm_95_1__Reg1_0,
  Convert__Reg1_0__imm_95_1__Reg1_1,
  Convert__regX0__imm_95_1__UImm51_0,
  Convert__Reg1_0__imm_95_1__UImm51_1,
  Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3,
  Convert__regX0__imm_95_2__Reg1_0,
  Convert__Reg1_0__imm_95_2__Reg1_1,
  Convert__regX0__imm_95_2__UImm51_0,
  Convert__Reg1_0__imm_95_2__UImm51_1,
  Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2,
  Convert__Reg1_0__Reg1_1__UImm51_2,
  Convert__regX0__SImm21Lsb0JAL1_0,
  Convert__regX1__SImm21Lsb0JAL1_0,
  Convert__Reg1_0__SImm21Lsb0JAL1_1,
  Convert__regX1__Reg1_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95_0,
  Convert__regX1__Reg1_0__SImm121_1,
  Convert__regX1__Reg1_2__SImm121_0,
  Convert__regX0__Reg1_0__imm_95_0,
  Convert__regX0__Reg1_0__SImm121_1,
  Convert__regX0__Reg1_2__SImm121_0,
  Convert__Reg1_1__PseudoJumpSymbol1_0,
  Convert__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__ImmXLenLI1_1,
  Convert__Reg1_0__AtomicMemOpOperand1_1,
  Convert__Reg1_0__UImm20LUI1_1,
  Convert__Reg1_0__regX0__Reg1_1,
  Convert__regX0__regX0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1,
  Convert__Reg1_0__Reg1_1__imm_95_31,
  Convert__Reg1_0__Reg1_1__imm_95_63,
  Convert__Reg1_0__Reg1_1__imm_95_15,
  Convert__Reg1_0__Reg1_1__imm_95_3,
  Convert__Reg1_0__Reg1_1__imm_95_1,
  Convert__Reg1_0__Reg1_1__imm_95_16,
  Convert__Reg1_0__Reg1_1__imm_95_48,
  Convert__Reg1_0__Reg1_1__imm_95_30,
  Convert__Reg1_0__Reg1_1__imm_95_62,
  Convert__Reg1_0__Reg1_1__imm_95_6,
  Convert__Reg1_0__Reg1_1__imm_95_14,
  Convert__Reg1_0__Reg1_1__imm_95_2,
  Convert__Reg1_0__Reg1_1__imm_95_32,
  Convert__Reg1_0__Reg1_1__imm_95_28,
  Convert__Reg1_0__Reg1_1__imm_95_60,
  Convert__Reg1_0__Reg1_1__imm_95_4,
  Convert__Reg1_0__Reg1_1__imm_95_12,
  Convert__Reg1_0__Reg1_1__imm_95_24,
  Convert__Reg1_0__Reg1_1__imm_95_56,
  Convert__Reg1_0__Reg1_1__imm_95_8,
  Convert__Reg1_0__imm_95_3072__regX0,
  Convert__Reg1_0__imm_95_3200__regX0,
  Convert__Reg1_0__imm_95_3074__regX0,
  Convert__Reg1_0__imm_95_3202__regX0,
  Convert__Reg1_0__imm_95_3073__regX0,
  Convert__Reg1_0__imm_95_3201__regX0,
  Convert__regX0__regX1__imm_95_0,
  Convert__regX0__regX0,
  Convert__Reg1_0__regX0,
  Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2,
  Convert__Reg1_0__Reg1_1__regX0,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__imm_95_0,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2,
  Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__RVVRegOpOperand1_1,
  Convert__RVVRegOpOperand1_0__Reg1_1,
  Convert__RVVRegOpOperand1_0__RVVMaskRegOpOperand1_1,
  Convert__RVVRegOpOperand1_0__Reg1_2,
  Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4,
  Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5,
  Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_0__RVVRegOpOperand1_0,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_1,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__SImm51_1,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__VTypeI1_2,
  Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__regX0__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__imm_95_255,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm121_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__UImm20AUIPC1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm13Lsb01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__regX0__SImm13Lsb01_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0__SImm13Lsb01_2
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__Reg1_0__SImm13Lsb01_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__ImmZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm61_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__SImm9Lsb01_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm7Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm12Lsb01_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__SImm61_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CLUIImm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__SImm6NonZero1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__CallSymbol1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__CallSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__Reg1_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__UImm51_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__regX0
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__imm_95_15__imm_95_15
  { CVT_imm_95_15, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__FenceArg1_0__FenceArg1_1
  { CVT_95_addFenceArgOperands, 1, CVT_95_addFenceArgOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__SImm121_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__Reg1_0__imm_95_3__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_1__regX0
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_2__regX0
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__imm_95_3__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_3__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regX0__imm_95_2__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_2__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__SImm21Lsb0JAL1_0
  { CVT_regX0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX1__SImm21Lsb0JAL1_0
  { CVT_regX1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__SImm21Lsb0JAL1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_0__imm_95_0
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX1__Reg1_0__SImm121_1
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_2__SImm121_0
  { CVT_regX1, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX0__Reg1_0__imm_95_0
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__Reg1_0__SImm121_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__Reg1_2__SImm121_0
  { CVT_regX0, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__PseudoJumpSymbol1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__ImmXLenLI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__AtomicMemOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__UImm20LUI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__Reg1_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_31
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_63
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_63, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_16
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_16, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_48
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_48, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_30
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_30, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_62
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_62, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_32
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_32, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_28
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_28, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_60
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_60, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_24
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_24, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_56
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_56, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3072__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3072, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3200__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3200, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3074__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3074, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3202__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3202, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3073__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3073, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3201__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3201, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__regX1__imm_95_0
  { CVT_regX0, 0, CVT_regX1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__regX0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__regX0
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__RVVRegOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_1
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVMaskRegOpOperand1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands_95_defaultMaskRegOp, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_2
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 5, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addRegOperands_95_defaultMaskRegOp, 6, CVT_Done },
  // Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5
  { CVT_95_addRegOperands, 1, CVT_95_Reg, 3, CVT_95_addRegOperands, 5, CVT_95_addRegOperands_95_defaultMaskRegOp, 6, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_0__RVVRegOpOperand1_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addSImm5Plus1Operands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__SImm51_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95__MINUS_1, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__VTypeI1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__regX0__RVVMaskRegOpOperand1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_regX0, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_255
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_255, 0, CVT_Done },
};

void RISCVAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands,
                const SmallBitVector &OptionalOperandsMask) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned DefaultsOffset[7] = { 0 };
  assert(OptionalOperandsMask.size() == 6);
  for (unsigned i = 0, NumDefaults = 0; i < 6; ++i) {
    DefaultsOffset[i + 1] = NumDefaults;
    NumDefaults += (OptionalOperandsMask[i] ? 1 : 0);
  }
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1) - DefaultsOffset[*(p + 1)];
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                          std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t) -1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_Reg:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(RISCV::X0));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addCSRSystemRegisterOperands(Inst, 1);
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_95_addFRMArgOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_95_addFenceArgOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addFenceArgOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_regX1:
      Inst.addOperand(MCOperand::createReg(RISCV::X1));
      break;
    case CVT_imm_95__MINUS_1:
      Inst.addOperand(MCOperand::createImm(-1));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_imm_95_63:
      Inst.addOperand(MCOperand::createImm(63));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_30:
      Inst.addOperand(MCOperand::createImm(30));
      break;
    case CVT_imm_95_62:
      Inst.addOperand(MCOperand::createImm(62));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_32:
      Inst.addOperand(MCOperand::createImm(32));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_60:
      Inst.addOperand(MCOperand::createImm(60));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    case CVT_imm_95_56:
      Inst.addOperand(MCOperand::createImm(56));
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_3072:
      Inst.addOperand(MCOperand::createImm(3072));
      break;
    case CVT_imm_95_3200:
      Inst.addOperand(MCOperand::createImm(3200));
      break;
    case CVT_imm_95_3074:
      Inst.addOperand(MCOperand::createImm(3074));
      break;
    case CVT_imm_95_3202:
      Inst.addOperand(MCOperand::createImm(3202));
      break;
    case CVT_imm_95_3073:
      Inst.addOperand(MCOperand::createImm(3073));
      break;
    case CVT_imm_95_3201:
      Inst.addOperand(MCOperand::createImm(3201));
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultMaskRegOp()->addRegOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      }
      break;
    case CVT_95_addSImm5Plus1Operands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addSImm5Plus1Operands(Inst, 1);
      break;
    case CVT_95_addVTypeIOperands:
      static_cast<RISCVOperand&>(*Operands[OpIdx]).addVTypeIOperands(Inst, 1);
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    }
  }
}

void RISCVAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFRMArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFenceArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95__MINUS_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_63:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_30:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_62:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_32:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_60:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_56:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3072:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3200:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3074:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3202:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3073:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3201:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addSImm5Plus1Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addVTypeIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK_LAST_TOKEN = MCK__41_,
  MCK_Reg18, // derived register class
  MCK_Reg16, // derived register class
  MCK_Reg14, // derived register class
  MCK_GPRX0, // register class 'GPRX0'
  MCK_SP, // register class 'SP'
  MCK_VMV0, // register class 'VMV0,V0'
  MCK_VRM8, // register class 'VRM8'
  MCK_Reg7, // derived register class
  MCK_FPR32C, // register class 'FPR32C'
  MCK_FPR64C, // register class 'FPR64C'
  MCK_GPRC, // register class 'GPRC'
  MCK_VRM4, // register class 'VRM4'
  MCK_GPRTC, // register class 'GPRTC'
  MCK_VRM2, // register class 'VRM2'
  MCK_GPRNoX0X2, // register class 'GPRNoX0X2'
  MCK_GPRNoX0, // register class 'GPRNoX0'
  MCK_FPR32, // register class 'FPR32'
  MCK_FPR64, // register class 'FPR64'
  MCK_GPR, // register class 'GPR'
  MCK_VM, // register class 'VM,VR'
  MCK_LAST_REGISTER = MCK_VM,
  MCK_AtomicMemOpOperand, // user defined class 'AtomicMemOpOperand'
  MCK_BareSymbol, // user defined class 'BareSymbol'
  MCK_CLUIImm, // user defined class 'CLUIImmAsmOperand'
  MCK_CSRSystemRegister, // user defined class 'CSRSystemRegister'
  MCK_CallSymbol, // user defined class 'CallSymbol'
  MCK_FRMArg, // user defined class 'FRMArg'
  MCK_FenceArg, // user defined class 'FenceArg'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ImmZero, // user defined class 'ImmZeroAsmOperand'
  MCK_PseudoJumpSymbol, // user defined class 'PseudoJumpSymbol'
  MCK_SImm5Plus1, // user defined class 'SImm5Plus1AsmOperand'
  MCK_SImm21Lsb0JAL, // user defined class 'Simm21Lsb0JALAsmOperand'
  MCK_TPRelAddSymbol, // user defined class 'TPRelAddSymbol'
  MCK_UImmLog2XLen, // user defined class 'UImmLog2XLenAsmOperand'
  MCK_UImmLog2XLenHalf, // user defined class 'UImmLog2XLenHalfAsmOperand'
  MCK_UImmLog2XLenNonZero, // user defined class 'UImmLog2XLenNonZeroAsmOperand'
  MCK_RVVMaskRegOpOperand, // user defined class 'VMaskAsmOperand'
  MCK_RVVRegOpOperand, // user defined class 'VRegAsmOperand'
  MCK_VTypeI, // user defined class 'VTypeIAsmOperand'
  MCK_UImm5, // user defined class 'anonymous_2504'
  MCK_SImm12, // user defined class 'anonymous_2505'
  MCK_SImm13Lsb0, // user defined class 'anonymous_2506'
  MCK_UImm20LUI, // user defined class 'anonymous_2507'
  MCK_UImm20AUIPC, // user defined class 'anonymous_2508'
  MCK_ImmXLenLI, // user defined class 'anonymous_2509'
  MCK_SImm6, // user defined class 'anonymous_3166'
  MCK_SImm6NonZero, // user defined class 'anonymous_3167'
  MCK_UImm7Lsb00, // user defined class 'anonymous_3168'
  MCK_UImm8Lsb00, // user defined class 'anonymous_3169'
  MCK_UImm8Lsb000, // user defined class 'anonymous_3170'
  MCK_SImm9Lsb0, // user defined class 'anonymous_3171'
  MCK_UImm9Lsb000, // user defined class 'anonymous_3172'
  MCK_UImm10Lsb00NonZero, // user defined class 'anonymous_3173'
  MCK_SImm10Lsb0000NonZero, // user defined class 'anonymous_3174'
  MCK_SImm12Lsb0, // user defined class 'anonymous_3175'
  MCK_SImm5, // user defined class 'anonymous_3465'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg18:
    return B == MCK_VRM8;

  case MCK_Reg16:
    return B == MCK_VRM4;

  case MCK_Reg14:
    return B == MCK_VRM2;

  case MCK_GPRX0:
    return B == MCK_GPR;

  case MCK_SP:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_VMV0:
    return B == MCK_VM;

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRTC: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_FPR32C:
    return B == MCK_FPR32;

  case MCK_FPR64C:
    return B == MCK_FPR64;

  case MCK_GPRC:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRTC:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRNoX0X2:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRNoX0:
    return B == MCK_GPR;

  case MCK_RVVMaskRegOpOperand:
    return B == OptionalMatchClass;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  RISCVOperand &Operand = (RISCVOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'AtomicMemOpOperand' class
  case MCK_AtomicMemOpOperand: {
    DiagnosticPredicate DP(Operand.isGPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BareSymbol' class
  case MCK_BareSymbol: {
    DiagnosticPredicate DP(Operand.isBareSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidBareSymbol;
    break;
    }
  // 'CLUIImm' class
  case MCK_CLUIImm: {
    DiagnosticPredicate DP(Operand.isCLUIImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCLUIImm;
    break;
    }
  // 'CSRSystemRegister' class
  case MCK_CSRSystemRegister: {
    DiagnosticPredicate DP(Operand.isCSRSystemRegister());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCSRSystemRegister;
    break;
    }
  // 'CallSymbol' class
  case MCK_CallSymbol: {
    DiagnosticPredicate DP(Operand.isCallSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCallSymbol;
    break;
    }
  // 'FRMArg' class
  case MCK_FRMArg: {
    DiagnosticPredicate DP(Operand.isFRMArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFRMArg;
    break;
    }
  // 'FenceArg' class
  case MCK_FenceArg: {
    DiagnosticPredicate DP(Operand.isFenceArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFenceArg;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmZero;
    break;
    }
  // 'PseudoJumpSymbol' class
  case MCK_PseudoJumpSymbol: {
    DiagnosticPredicate DP(Operand.isPseudoJumpSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidPseudoJumpSymbol;
    break;
    }
  // 'SImm5Plus1' class
  case MCK_SImm5Plus1: {
    DiagnosticPredicate DP(Operand.isSImm5Plus1());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5Plus1;
    break;
    }
  // 'SImm21Lsb0JAL' class
  case MCK_SImm21Lsb0JAL: {
    DiagnosticPredicate DP(Operand.isSImm21Lsb0JAL());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm21Lsb0JAL;
    break;
    }
  // 'TPRelAddSymbol' class
  case MCK_TPRelAddSymbol: {
    DiagnosticPredicate DP(Operand.isTPRelAddSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidTPRelAddSymbol;
    break;
    }
  // 'UImmLog2XLen' class
  case MCK_UImmLog2XLen: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLen());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLen;
    break;
    }
  // 'UImmLog2XLenHalf' class
  case MCK_UImmLog2XLenHalf: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenHalf());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenHalf;
    break;
    }
  // 'UImmLog2XLenNonZero' class
  case MCK_UImmLog2XLenNonZero: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenNonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenNonZero;
    break;
    }
  // 'RVVMaskRegOpOperand' class
  case MCK_RVVMaskRegOpOperand: {
    DiagnosticPredicate DP(Operand.isV0Reg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVMaskRegister;
    break;
    }
  // 'RVVRegOpOperand' class
  case MCK_RVVRegOpOperand: {
    DiagnosticPredicate DP(Operand.isReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VTypeI' class
  case MCK_VTypeI: {
    DiagnosticPredicate DP(Operand.isVTypeI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'UImm5' class
  case MCK_UImm5: {
    DiagnosticPredicate DP(Operand.isUImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm5;
    break;
    }
  // 'SImm12' class
  case MCK_SImm12: {
    DiagnosticPredicate DP(Operand.isSImm12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12;
    break;
    }
  // 'SImm13Lsb0' class
  case MCK_SImm13Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm13Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm13Lsb0;
    break;
    }
  // 'UImm20LUI' class
  case MCK_UImm20LUI: {
    DiagnosticPredicate DP(Operand.isUImm20LUI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20LUI;
    break;
    }
  // 'UImm20AUIPC' class
  case MCK_UImm20AUIPC: {
    DiagnosticPredicate DP(Operand.isUImm20AUIPC());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20AUIPC;
    break;
    }
  // 'ImmXLenLI' class
  case MCK_ImmXLenLI: {
    DiagnosticPredicate DP(Operand.isImmXLenLI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmXLenLI;
    break;
    }
  // 'SImm6' class
  case MCK_SImm6: {
    DiagnosticPredicate DP(Operand.isSImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6;
    break;
    }
  // 'SImm6NonZero' class
  case MCK_SImm6NonZero: {
    DiagnosticPredicate DP(Operand.isSImm6NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6NonZero;
    break;
    }
  // 'UImm7Lsb00' class
  case MCK_UImm7Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm7Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7Lsb00;
    break;
    }
  // 'UImm8Lsb00' class
  case MCK_UImm8Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb00;
    break;
    }
  // 'UImm8Lsb000' class
  case MCK_UImm8Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb000;
    break;
    }
  // 'SImm9Lsb0' class
  case MCK_SImm9Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm9Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm9Lsb0;
    break;
    }
  // 'UImm9Lsb000' class
  case MCK_UImm9Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm9Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm9Lsb000;
    break;
    }
  // 'UImm10Lsb00NonZero' class
  case MCK_UImm10Lsb00NonZero: {
    DiagnosticPredicate DP(Operand.isUImm10Lsb00NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm10Lsb00NonZero;
    break;
    }
  // 'SImm10Lsb0000NonZero' class
  case MCK_SImm10Lsb0000NonZero: {
    DiagnosticPredicate DP(Operand.isSImm10Lsb0000NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm10Lsb0000NonZero;
    break;
    }
  // 'SImm12Lsb0' class
  case MCK_SImm12Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb0;
    break;
    }
  // 'SImm5' class
  case MCK_SImm5: {
    DiagnosticPredicate DP(Operand.isSImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case RISCV::X0: OpKind = MCK_GPRX0; break;
    case RISCV::X1: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X2: OpKind = MCK_SP; break;
    case RISCV::X3: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X4: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X5: OpKind = MCK_GPRTC; break;
    case RISCV::X6: OpKind = MCK_GPRTC; break;
    case RISCV::X7: OpKind = MCK_GPRTC; break;
    case RISCV::X8: OpKind = MCK_GPRC; break;
    case RISCV::X9: OpKind = MCK_GPRC; break;
    case RISCV::X10: OpKind = MCK_Reg7; break;
    case RISCV::X11: OpKind = MCK_Reg7; break;
    case RISCV::X12: OpKind = MCK_Reg7; break;
    case RISCV::X13: OpKind = MCK_Reg7; break;
    case RISCV::X14: OpKind = MCK_Reg7; break;
    case RISCV::X15: OpKind = MCK_Reg7; break;
    case RISCV::X16: OpKind = MCK_GPRTC; break;
    case RISCV::X17: OpKind = MCK_GPRTC; break;
    case RISCV::X18: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X19: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X20: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X21: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X22: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X23: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X24: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X25: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X26: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X27: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X28: OpKind = MCK_GPRTC; break;
    case RISCV::X29: OpKind = MCK_GPRTC; break;
    case RISCV::X30: OpKind = MCK_GPRTC; break;
    case RISCV::X31: OpKind = MCK_GPRTC; break;
    case RISCV::F0_F: OpKind = MCK_FPR32; break;
    case RISCV::F1_F: OpKind = MCK_FPR32; break;
    case RISCV::F2_F: OpKind = MCK_FPR32; break;
    case RISCV::F3_F: OpKind = MCK_FPR32; break;
    case RISCV::F4_F: OpKind = MCK_FPR32; break;
    case RISCV::F5_F: OpKind = MCK_FPR32; break;
    case RISCV::F6_F: OpKind = MCK_FPR32; break;
    case RISCV::F7_F: OpKind = MCK_FPR32; break;
    case RISCV::F8_F: OpKind = MCK_FPR32C; break;
    case RISCV::F9_F: OpKind = MCK_FPR32C; break;
    case RISCV::F10_F: OpKind = MCK_FPR32C; break;
    case RISCV::F11_F: OpKind = MCK_FPR32C; break;
    case RISCV::F12_F: OpKind = MCK_FPR32C; break;
    case RISCV::F13_F: OpKind = MCK_FPR32C; break;
    case RISCV::F14_F: OpKind = MCK_FPR32C; break;
    case RISCV::F15_F: OpKind = MCK_FPR32C; break;
    case RISCV::F16_F: OpKind = MCK_FPR32; break;
    case RISCV::F17_F: OpKind = MCK_FPR32; break;
    case RISCV::F18_F: OpKind = MCK_FPR32; break;
    case RISCV::F19_F: OpKind = MCK_FPR32; break;
    case RISCV::F20_F: OpKind = MCK_FPR32; break;
    case RISCV::F21_F: OpKind = MCK_FPR32; break;
    case RISCV::F22_F: OpKind = MCK_FPR32; break;
    case RISCV::F23_F: OpKind = MCK_FPR32; break;
    case RISCV::F24_F: OpKind = MCK_FPR32; break;
    case RISCV::F25_F: OpKind = MCK_FPR32; break;
    case RISCV::F26_F: OpKind = MCK_FPR32; break;
    case RISCV::F27_F: OpKind = MCK_FPR32; break;
    case RISCV::F28_F: OpKind = MCK_FPR32; break;
    case RISCV::F29_F: OpKind = MCK_FPR32; break;
    case RISCV::F30_F: OpKind = MCK_FPR32; break;
    case RISCV::F31_F: OpKind = MCK_FPR32; break;
    case RISCV::F0_D: OpKind = MCK_FPR64; break;
    case RISCV::F1_D: OpKind = MCK_FPR64; break;
    case RISCV::F2_D: OpKind = MCK_FPR64; break;
    case RISCV::F3_D: OpKind = MCK_FPR64; break;
    case RISCV::F4_D: OpKind = MCK_FPR64; break;
    case RISCV::F5_D: OpKind = MCK_FPR64; break;
    case RISCV::F6_D: OpKind = MCK_FPR64; break;
    case RISCV::F7_D: OpKind = MCK_FPR64; break;
    case RISCV::F8_D: OpKind = MCK_FPR64C; break;
    case RISCV::F9_D: OpKind = MCK_FPR64C; break;
    case RISCV::F10_D: OpKind = MCK_FPR64C; break;
    case RISCV::F11_D: OpKind = MCK_FPR64C; break;
    case RISCV::F12_D: OpKind = MCK_FPR64C; break;
    case RISCV::F13_D: OpKind = MCK_FPR64C; break;
    case RISCV::F14_D: OpKind = MCK_FPR64C; break;
    case RISCV::F15_D: OpKind = MCK_FPR64C; break;
    case RISCV::F16_D: OpKind = MCK_FPR64; break;
    case RISCV::F17_D: OpKind = MCK_FPR64; break;
    case RISCV::F18_D: OpKind = MCK_FPR64; break;
    case RISCV::F19_D: OpKind = MCK_FPR64; break;
    case RISCV::F20_D: OpKind = MCK_FPR64; break;
    case RISCV::F21_D: OpKind = MCK_FPR64; break;
    case RISCV::F22_D: OpKind = MCK_FPR64; break;
    case RISCV::F23_D: OpKind = MCK_FPR64; break;
    case RISCV::F24_D: OpKind = MCK_FPR64; break;
    case RISCV::F25_D: OpKind = MCK_FPR64; break;
    case RISCV::F26_D: OpKind = MCK_FPR64; break;
    case RISCV::F27_D: OpKind = MCK_FPR64; break;
    case RISCV::F28_D: OpKind = MCK_FPR64; break;
    case RISCV::F29_D: OpKind = MCK_FPR64; break;
    case RISCV::F30_D: OpKind = MCK_FPR64; break;
    case RISCV::F31_D: OpKind = MCK_FPR64; break;
    case RISCV::V0: OpKind = MCK_VMV0; break;
    case RISCV::V1: OpKind = MCK_VM; break;
    case RISCV::V2: OpKind = MCK_VM; break;
    case RISCV::V3: OpKind = MCK_VM; break;
    case RISCV::V4: OpKind = MCK_VM; break;
    case RISCV::V5: OpKind = MCK_VM; break;
    case RISCV::V6: OpKind = MCK_VM; break;
    case RISCV::V7: OpKind = MCK_VM; break;
    case RISCV::V8: OpKind = MCK_VM; break;
    case RISCV::V9: OpKind = MCK_VM; break;
    case RISCV::V10: OpKind = MCK_VM; break;
    case RISCV::V11: OpKind = MCK_VM; break;
    case RISCV::V12: OpKind = MCK_VM; break;
    case RISCV::V13: OpKind = MCK_VM; break;
    case RISCV::V14: OpKind = MCK_VM; break;
    case RISCV::V15: OpKind = MCK_VM; break;
    case RISCV::V16: OpKind = MCK_VM; break;
    case RISCV::V17: OpKind = MCK_VM; break;
    case RISCV::V18: OpKind = MCK_VM; break;
    case RISCV::V19: OpKind = MCK_VM; break;
    case RISCV::V20: OpKind = MCK_VM; break;
    case RISCV::V21: OpKind = MCK_VM; break;
    case RISCV::V22: OpKind = MCK_VM; break;
    case RISCV::V23: OpKind = MCK_VM; break;
    case RISCV::V24: OpKind = MCK_VM; break;
    case RISCV::V25: OpKind = MCK_VM; break;
    case RISCV::V26: OpKind = MCK_VM; break;
    case RISCV::V27: OpKind = MCK_VM; break;
    case RISCV::V28: OpKind = MCK_VM; break;
    case RISCV::V29: OpKind = MCK_VM; break;
    case RISCV::V30: OpKind = MCK_VM; break;
    case RISCV::V31: OpKind = MCK_VM; break;
    case RISCV::V0M2: OpKind = MCK_Reg14; break;
    case RISCV::V2M2: OpKind = MCK_VRM2; break;
    case RISCV::V4M2: OpKind = MCK_VRM2; break;
    case RISCV::V6M2: OpKind = MCK_VRM2; break;
    case RISCV::V8M2: OpKind = MCK_VRM2; break;
    case RISCV::V10M2: OpKind = MCK_VRM2; break;
    case RISCV::V12M2: OpKind = MCK_VRM2; break;
    case RISCV::V14M2: OpKind = MCK_VRM2; break;
    case RISCV::V16M2: OpKind = MCK_VRM2; break;
    case RISCV::V18M2: OpKind = MCK_VRM2; break;
    case RISCV::V20M2: OpKind = MCK_VRM2; break;
    case RISCV::V22M2: OpKind = MCK_VRM2; break;
    case RISCV::V24M2: OpKind = MCK_VRM2; break;
    case RISCV::V26M2: OpKind = MCK_VRM2; break;
    case RISCV::V28M2: OpKind = MCK_VRM2; break;
    case RISCV::V30M2: OpKind = MCK_VRM2; break;
    case RISCV::V0M4: OpKind = MCK_Reg16; break;
    case RISCV::V4M4: OpKind = MCK_VRM4; break;
    case RISCV::V8M4: OpKind = MCK_VRM4; break;
    case RISCV::V12M4: OpKind = MCK_VRM4; break;
    case RISCV::V16M4: OpKind = MCK_VRM4; break;
    case RISCV::V20M4: OpKind = MCK_VRM4; break;
    case RISCV::V24M4: OpKind = MCK_VRM4; break;
    case RISCV::V28M4: OpKind = MCK_VRM4; break;
    case RISCV::V0M8: OpKind = MCK_Reg18; break;
    case RISCV::V8M8: OpKind = MCK_VRM8; break;
    case RISCV::V16M8: OpKind = MCK_VRM8; break;
    case RISCV::V24M8: OpKind = MCK_VRM8; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK__40_: return "MCK__40_";
  case MCK__41_: return "MCK__41_";
  case MCK_Reg18: return "MCK_Reg18";
  case MCK_Reg16: return "MCK_Reg16";
  case MCK_Reg14: return "MCK_Reg14";
  case MCK_GPRX0: return "MCK_GPRX0";
  case MCK_SP: return "MCK_SP";
  case MCK_VMV0: return "MCK_VMV0";
  case MCK_VRM8: return "MCK_VRM8";
  case MCK_Reg7: return "MCK_Reg7";
  case MCK_FPR32C: return "MCK_FPR32C";
  case MCK_FPR64C: return "MCK_FPR64C";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_VRM4: return "MCK_VRM4";
  case MCK_GPRTC: return "MCK_GPRTC";
  case MCK_VRM2: return "MCK_VRM2";
  case MCK_GPRNoX0X2: return "MCK_GPRNoX0X2";
  case MCK_GPRNoX0: return "MCK_GPRNoX0";
  case MCK_FPR32: return "MCK_FPR32";
  case MCK_FPR64: return "MCK_FPR64";
  case MCK_GPR: return "MCK_GPR";
  case MCK_VM: return "MCK_VM";
  case MCK_AtomicMemOpOperand: return "MCK_AtomicMemOpOperand";
  case MCK_BareSymbol: return "MCK_BareSymbol";
  case MCK_CLUIImm: return "MCK_CLUIImm";
  case MCK_CSRSystemRegister: return "MCK_CSRSystemRegister";
  case MCK_CallSymbol: return "MCK_CallSymbol";
  case MCK_FRMArg: return "MCK_FRMArg";
  case MCK_FenceArg: return "MCK_FenceArg";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_PseudoJumpSymbol: return "MCK_PseudoJumpSymbol";
  case MCK_SImm5Plus1: return "MCK_SImm5Plus1";
  case MCK_SImm21Lsb0JAL: return "MCK_SImm21Lsb0JAL";
  case MCK_TPRelAddSymbol: return "MCK_TPRelAddSymbol";
  case MCK_UImmLog2XLen: return "MCK_UImmLog2XLen";
  case MCK_UImmLog2XLenHalf: return "MCK_UImmLog2XLenHalf";
  case MCK_UImmLog2XLenNonZero: return "MCK_UImmLog2XLenNonZero";
  case MCK_RVVMaskRegOpOperand: return "MCK_RVVMaskRegOpOperand";
  case MCK_RVVRegOpOperand: return "MCK_RVVRegOpOperand";
  case MCK_VTypeI: return "MCK_VTypeI";
  case MCK_UImm5: return "MCK_UImm5";
  case MCK_SImm12: return "MCK_SImm12";
  case MCK_SImm13Lsb0: return "MCK_SImm13Lsb0";
  case MCK_UImm20LUI: return "MCK_UImm20LUI";
  case MCK_UImm20AUIPC: return "MCK_UImm20AUIPC";
  case MCK_ImmXLenLI: return "MCK_ImmXLenLI";
  case MCK_SImm6: return "MCK_SImm6";
  case MCK_SImm6NonZero: return "MCK_SImm6NonZero";
  case MCK_UImm7Lsb00: return "MCK_UImm7Lsb00";
  case MCK_UImm8Lsb00: return "MCK_UImm8Lsb00";
  case MCK_UImm8Lsb000: return "MCK_UImm8Lsb000";
  case MCK_SImm9Lsb0: return "MCK_SImm9Lsb0";
  case MCK_UImm9Lsb000: return "MCK_UImm9Lsb000";
  case MCK_UImm10Lsb00NonZero: return "MCK_UImm10Lsb00NonZero";
  case MCK_SImm10Lsb0000NonZero: return "MCK_SImm10Lsb0000NonZero";
  case MCK_SImm12Lsb0: return "MCK_SImm12Lsb0";
  case MCK_SImm5: return "MCK_SImm5";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset RISCVAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  FeatureBitset Features;
  if (FB[RISCV::FeatureStdExtM])
    Features.set(Feature_HasStdExtMBit);
  if (FB[RISCV::FeatureStdExtA])
    Features.set(Feature_HasStdExtABit);
  if (FB[RISCV::FeatureStdExtF])
    Features.set(Feature_HasStdExtFBit);
  if (FB[RISCV::FeatureStdExtD])
    Features.set(Feature_HasStdExtDBit);
  if (FB[RISCV::FeatureStdExtC])
    Features.set(Feature_HasStdExtCBit);
  if (FB[RISCV::FeatureExtZbb])
    Features.set(Feature_HasStdExtZbbBit);
  if (FB[RISCV::FeatureExtZbc])
    Features.set(Feature_HasStdExtZbcBit);
  if (FB[RISCV::FeatureExtZbe])
    Features.set(Feature_HasStdExtZbeBit);
  if (FB[RISCV::FeatureExtZbf])
    Features.set(Feature_HasStdExtZbfBit);
  if (FB[RISCV::FeatureExtZbm])
    Features.set(Feature_HasStdExtZbmBit);
  if (FB[RISCV::FeatureExtZbp])
    Features.set(Feature_HasStdExtZbpBit);
  if (FB[RISCV::FeatureExtZbr])
    Features.set(Feature_HasStdExtZbrBit);
  if (FB[RISCV::FeatureExtZbs])
    Features.set(Feature_HasStdExtZbsBit);
  if (FB[RISCV::FeatureExtZbt])
    Features.set(Feature_HasStdExtZbtBit);
  if ((FB[RISCV::FeatureExtZbb] || FB[RISCV::FeatureExtZbp]))
    Features.set(Feature_HasStdExtZbbOrZbpBit);
  if (FB[RISCV::FeatureExtZbproposedc])
    Features.set(Feature_HasStdExtZbproposedcBit);
  if (FB[RISCV::FeatureStdExtB])
    Features.set(Feature_HasStdExtBBit);
  if (!FB[RISCV::FeatureNoRVCHints])
    Features.set(Feature_HasRVCHintsBit);
  if (FB[RISCV::FeatureStdExtV])
    Features.set(Feature_HasStdExtVBit);
  if (FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV64Bit);
  if (!FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV32Bit);
  if (FB[RISCV::FeatureRV32E])
    Features.set(Feature_IsRV32EBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const RISCVAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p+1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char *const MnemonicTable =
    "\003add\004addi\005addiw\006addiwu\006addu.w\004addw\005addwu\010amoadd"
    ".d\013amoadd.d.aq\015amoadd.d.aqrl\013amoadd.d.rl\010amoadd.w\013amoadd"
    ".w.aq\015amoadd.w.aqrl\013amoadd.w.rl\010amoand.d\013amoand.d.aq\015amo"
    "and.d.aqrl\013amoand.d.rl\010amoand.w\013amoand.w.aq\015amoand.w.aqrl\013"
    "amoand.w.rl\010amomax.d\013amomax.d.aq\015amomax.d.aqrl\013amomax.d.rl\010"
    "amomax.w\013amomax.w.aq\015amomax.w.aqrl\013amomax.w.rl\tamomaxu.d\014a"
    "momaxu.d.aq\016amomaxu.d.aqrl\014amomaxu.d.rl\tamomaxu.w\014amomaxu.w.a"
    "q\016amomaxu.w.aqrl\014amomaxu.w.rl\010amomin.d\013amomin.d.aq\015amomi"
    "n.d.aqrl\013amomin.d.rl\010amomin.w\013amomin.w.aq\015amomin.w.aqrl\013"
    "amomin.w.rl\tamominu.d\014amominu.d.aq\016amominu.d.aqrl\014amominu.d.r"
    "l\tamominu.w\014amominu.w.aq\016amominu.w.aqrl\014amominu.w.rl\007amoor"
    ".d\namoor.d.aq\014amoor.d.aqrl\namoor.d.rl\007amoor.w\namoor.w.aq\014am"
    "oor.w.aqrl\namoor.w.rl\tamoswap.d\014amoswap.d.aq\016amoswap.d.aqrl\014"
    "amoswap.d.rl\tamoswap.w\014amoswap.w.aq\016amoswap.w.aqrl\014amoswap.w."
    "rl\010amoxor.d\013amoxor.d.aq\015amoxor.d.aqrl\013amoxor.d.rl\010amoxor"
    ".w\013amoxor.w.aq\015amoxor.w.aqrl\013amoxor.w.rl\003and\004andi\004and"
    "n\005auipc\004bdep\005bdepw\003beq\004beqz\004bext\005bextw\003bfp\004b"
    "fpw\003bge\004bgeu\004bgez\003bgt\004bgtu\004bgtz\003ble\004bleu\004ble"
    "z\003blt\004bltu\004bltz\010bmatflip\006bmator\007bmatxor\003bne\004bne"
    "z\005c.add\006c.addi\nc.addi16sp\nc.addi4spn\007c.addiw\006c.addw\005c."
    "and\006c.andi\006c.beqz\006c.bnez\010c.ebreak\005c.fld\007c.fldsp\005c."
    "flw\007c.flwsp\005c.fsd\007c.fsdsp\005c.fsw\007c.fswsp\003c.j\005c.jal\006"
    "c.jalr\004c.jr\004c.ld\006c.ldsp\004c.li\005c.lui\004c.lw\006c.lwsp\004"
    "c.mv\005c.neg\005c.nop\005c.not\004c.or\004c.sd\006c.sdsp\006c.slli\010"
    "c.slli64\006c.srai\010c.srai64\006c.srli\010c.srli64\005c.sub\006c.subw"
    "\004c.sw\006c.swsp\007c.unimp\005c.xor\010c.zext.w\004call\005clmul\006"
    "clmulh\007clmulhw\006clmulr\007clmulrw\006clmulw\003clz\004clzw\004cmix"
    "\004cmov\007crc32.b\007crc32.d\007crc32.h\007crc32.w\010crc32c.b\010crc"
    "32c.d\010crc32c.h\010crc32c.w\004csrc\005csrci\004csrr\005csrrc\006csrr"
    "ci\005csrrs\006csrrsi\005csrrw\006csrrwi\004csrs\005csrsi\004csrw\005cs"
    "rwi\003ctz\004ctzw\003div\004divu\005divuw\004divw\004dret\006ebreak\005"
    "ecall\006fabs.d\006fabs.s\006fadd.d\006fadd.s\010fclass.d\010fclass.s\010"
    "fcvt.d.l\tfcvt.d.lu\010fcvt.d.s\010fcvt.d.w\tfcvt.d.wu\010fcvt.l.d\010f"
    "cvt.l.s\tfcvt.lu.d\tfcvt.lu.s\010fcvt.s.d\010fcvt.s.l\tfcvt.s.lu\010fcv"
    "t.s.w\tfcvt.s.wu\010fcvt.w.d\010fcvt.w.s\tfcvt.wu.d\tfcvt.wu.s\006fdiv."
    "d\006fdiv.s\005fence\007fence.i\tfence.tso\005feq.d\005feq.s\005fge.d\005"
    "fge.s\005fgt.d\005fgt.s\003fld\005fle.d\005fle.s\005flt.d\005flt.s\003f"
    "lw\007fmadd.d\007fmadd.s\006fmax.d\006fmax.s\006fmin.d\006fmin.s\007fms"
    "ub.d\007fmsub.s\006fmul.d\006fmul.s\005fmv.d\007fmv.d.x\005fmv.s\007fmv"
    ".w.x\007fmv.x.d\007fmv.x.w\006fneg.d\006fneg.s\010fnmadd.d\010fnmadd.s\010"
    "fnmsub.d\010fnmsub.s\005frcsr\007frflags\004frrm\004frsr\005fscsr\003fs"
    "d\007fsflags\010fsflagsi\007fsgnj.d\007fsgnj.s\010fsgnjn.d\010fsgnjn.s\010"
    "fsgnjx.d\010fsgnjx.s\003fsl\004fslw\007fsqrt.d\007fsqrt.s\003fsr\004fsr"
    "i\005fsriw\004fsrm\005fsrmi\004fsrw\004fssr\006fsub.d\006fsub.s\003fsw\004"
    "gorc\005gorci\006gorciw\005gorcw\004grev\005grevi\006greviw\005grevw\001"
    "j\003jal\004jalr\002jr\004jump\002la\tla.tls.gd\tla.tls.ie\002lb\003lbu"
    "\002ld\002lh\003lhu\002li\003lla\004lr.d\007lr.d.aq\tlr.d.aqrl\007lr.d."
    "rl\004lr.w\007lr.w.aq\tlr.w.aqrl\007lr.w.rl\003lui\002lw\003lwu\003max\004"
    "maxu\003min\004minu\004mret\003mul\004mulh\006mulhsu\005mulhu\004mulw\002"
    "mv\003neg\004negw\003nop\003not\002or\003orc\005orc.b\005orc.h\005orc.n"
    "\005orc.p\005orc.w\005orc16\007orc16.w\004orc2\006orc2.b\006orc2.h\006o"
    "rc2.n\006orc2.w\005orc32\004orc4\006orc4.b\006orc4.h\006orc4.w\004orc8\006"
    "orc8.h\006orc8.w\003ori\003orn\004pack\005packh\005packu\006packuw\005p"
    "ackw\004pcnt\005pcntw\007rdcycle\010rdcycleh\trdinstret\nrdinstreth\006"
    "rdtime\007rdtimeh\003rem\004remu\005remuw\004remw\003ret\003rev\005rev."
    "b\005rev.h\005rev.n\005rev.p\005rev.w\005rev16\007rev16.w\004rev2\006re"
    "v2.b\006rev2.h\006rev2.n\006rev2.w\005rev32\004rev4\006rev4.b\006rev4.h"
    "\006rev4.w\004rev8\006rev8.h\006rev8.w\003rol\004rolw\003ror\004rori\005"
    "roriw\004rorw\002sb\005sbclr\006sbclri\007sbclriw\006sbclrw\005sbext\006"
    "sbexti\006sbextw\005sbinv\006sbinvi\007sbinviw\006sbinvw\005sbset\006sb"
    "seti\007sbsetiw\006sbsetw\004sc.d\007sc.d.aq\tsc.d.aqrl\007sc.d.rl\004s"
    "c.w\007sc.w.aq\tsc.w.aqrl\007sc.w.rl\002sd\004seqz\006sext.b\006sext.h\006"
    "sext.w\nsfence.vma\003sgt\004sgtu\004sgtz\002sh\004shfl\005shfli\005shf"
    "lw\003sll\004slli\007slliu.w\005slliw\004sllw\003slo\004sloi\005sloiw\004"
    "slow\003slt\004slti\005sltiu\004sltu\004sltz\004snez\003sra\004srai\005"
    "sraiw\004sraw\004sret\003srl\004srli\005srliw\004srlw\003sro\004sroi\005"
    "sroiw\004srow\003sub\006subu.w\004subw\005subwu\002sw\004tail\005unimp\006"
    "unshfl\007unshfli\007unshflw\005unzip\007unzip.b\007unzip.h\007unzip.n\007"
    "unzip.w\007unzip16\006unzip2\010unzip2.b\010unzip2.h\010unzip2.w\006unz"
    "ip4\010unzip4.h\010unzip4.w\006unzip8\010unzip8.w\004uret\010vaadd.vv\010"
    "vaadd.vx\tvaaddu.vv\tvaaddu.vx\010vadc.vim\010vadc.vvm\010vadc.vxm\007v"
    "add.vi\007vadd.vv\007vadd.vx\007vand.vi\007vand.vv\007vand.vx\010vasub."
    "vv\010vasub.vx\tvasubu.vv\tvasubu.vx\014vcompress.vm\007vdiv.vv\007vdiv"
    ".vx\010vdivu.vv\010vdivu.vx\010vfadd.vf\010vfadd.vv\tvfclass.v\013vfcvt"
    ".f.x.v\014vfcvt.f.xu.v\013vfcvt.x.f.v\014vfcvt.xu.f.v\010vfdiv.vf\010vf"
    "div.vv\010vfirst.m\tvfmacc.vf\tvfmacc.vv\tvfmadd.vf\tvfmadd.vv\010vfmax"
    ".vf\010vfmax.vv\013vfmerge.vfm\010vfmin.vf\010vfmin.vv\tvfmsac.vf\tvfms"
    "ac.vv\tvfmsub.vf\tvfmsub.vv\010vfmul.vf\010vfmul.vv\010vfmv.f.s\010vfmv"
    ".s.f\010vfmv.v.f\014vfncvt.f.f.w\014vfncvt.f.x.w\015vfncvt.f.xu.w\020vf"
    "ncvt.rod.f.f.w\014vfncvt.x.f.w\015vfncvt.xu.f.w\nvfnmacc.vf\nvfnmacc.vv"
    "\nvfnmadd.vf\nvfnmadd.vv\nvfnmsac.vf\nvfnmsac.vv\nvfnmsub.vf\nvfnmsub.v"
    "v\tvfrdiv.vf\013vfredmax.vs\013vfredmin.vs\014vfredosum.vs\013vfredsum."
    "vs\tvfrsub.vf\tvfsgnj.vf\tvfsgnj.vv\nvfsgnjn.vf\nvfsgnjn.vv\nvfsgnjx.vf"
    "\nvfsgnjx.vv\010vfsqrt.v\010vfsub.vf\010vfsub.vv\tvfwadd.vf\tvfwadd.vv\t"
    "vfwadd.wf\tvfwadd.wv\014vfwcvt.f.f.v\014vfwcvt.f.x.v\015vfwcvt.f.xu.v\014"
    "vfwcvt.x.f.v\015vfwcvt.xu.f.v\nvfwmacc.vf\nvfwmacc.vv\nvfwmsac.vf\nvfwm"
    "sac.vv\tvfwmul.vf\tvfwmul.vv\013vfwnmacc.vf\013vfwnmacc.vv\013vfwnmsac."
    "vf\013vfwnmsac.vv\015vfwredosum.vs\014vfwredsum.vs\tvfwsub.vf\tvfwsub.v"
    "v\tvfwsub.wf\tvfwsub.wv\005vid.v\007viota.m\006vl1r.v\005vlb.v\007vlbff"
    ".v\006vlbu.v\010vlbuff.v\005vle.v\007vleff.v\005vlh.v\007vlhff.v\006vlh"
    "u.v\010vlhuff.v\006vlsb.v\007vlsbu.v\006vlse.v\006vlsh.v\007vlshu.v\006"
    "vlsw.v\007vlswu.v\005vlw.v\007vlwff.v\006vlwu.v\010vlwuff.v\006vlxb.v\007"
    "vlxbu.v\006vlxe.v\006vlxh.v\007vlxhu.v\006vlxw.v\007vlxwu.v\010vmacc.vv"
    "\010vmacc.vx\010vmadc.vi\tvmadc.vim\010vmadc.vv\tvmadc.vvm\010vmadc.vx\t"
    "vmadc.vxm\010vmadd.vv\010vmadd.vx\010vmand.mm\013vmandnot.mm\007vmax.vv"
    "\007vmax.vx\010vmaxu.vv\010vmaxu.vx\007vmclr.m\007vmcpy.m\nvmerge.vim\n"
    "vmerge.vvm\nvmerge.vxm\010vmfeq.vf\010vmfeq.vv\010vmfge.vf\010vmfge.vv\010"
    "vmfgt.vf\010vmfgt.vv\010vmfle.vf\010vmfle.vv\010vmflt.vf\010vmflt.vv\010"
    "vmfne.vf\010vmfne.vv\007vmin.vv\007vmin.vx\010vminu.vv\010vminu.vx\tvmn"
    "and.mm\010vmnor.mm\007vmnot.m\007vmor.mm\nvmornot.mm\010vmsbc.vv\tvmsbc"
    ".vvm\010vmsbc.vx\tvmsbc.vxm\007vmsbf.m\010vmseq.vi\010vmseq.vv\010vmseq"
    ".vx\007vmset.m\010vmsge.vi\010vmsge.vv\tvmsgeu.vi\tvmsgeu.vv\010vmsgt.v"
    "i\010vmsgt.vv\010vmsgt.vx\tvmsgtu.vi\tvmsgtu.vv\tvmsgtu.vx\007vmsif.m\010"
    "vmsle.vi\010vmsle.vv\010vmsle.vx\tvmsleu.vi\tvmsleu.vv\tvmsleu.vx\010vm"
    "slt.vi\010vmslt.vv\010vmslt.vx\tvmsltu.vi\tvmsltu.vv\tvmsltu.vx\010vmsn"
    "e.vi\010vmsne.vv\010vmsne.vx\007vmsof.m\007vmul.vv\007vmul.vx\010vmulh."
    "vv\010vmulh.vx\nvmulhsu.vv\nvmulhsu.vx\tvmulhu.vv\tvmulhu.vx\007vmv.s.x"
    "\007vmv.v.i\007vmv.v.v\007vmv.v.x\007vmv.x.s\007vmv1r.v\007vmv2r.v\007v"
    "mv4r.v\007vmv8r.v\tvmxnor.mm\010vmxor.mm\tvnclip.wi\tvnclip.wv\tvnclip."
    "wx\nvnclipu.wi\nvnclipu.wv\nvnclipu.wx\tvnmsac.vv\tvnmsac.vx\tvnmsub.vv"
    "\tvnmsub.vx\006vnot.v\010vnsra.wi\010vnsra.wv\010vnsra.wx\010vnsrl.wi\010"
    "vnsrl.wv\010vnsrl.wx\006vor.vi\006vor.vv\006vor.vx\007vpopc.m\nvredand."
    "vs\nvredmax.vs\013vredmaxu.vs\nvredmin.vs\013vredminu.vs\tvredor.vs\nvr"
    "edsum.vs\nvredxor.vs\007vrem.vv\007vrem.vx\010vremu.vv\010vremu.vx\013v"
    "rgather.vi\013vrgather.vv\013vrgather.vx\010vrsub.vi\010vrsub.vx\006vs1"
    "r.v\010vsadd.vi\010vsadd.vv\010vsadd.vx\tvsaddu.vi\tvsaddu.vv\tvsaddu.v"
    "x\005vsb.v\010vsbc.vvm\010vsbc.vxm\005vse.v\006vsetvl\007vsetvli\005vsh"
    ".v\016vslide1down.vx\014vslide1up.vx\015vslidedown.vi\015vslidedown.vx\013"
    "vslideup.vi\013vslideup.vx\007vsll.vi\007vsll.vv\007vsll.vx\010vsmul.vv"
    "\010vsmul.vx\007vsra.vi\007vsra.vv\007vsra.vx\007vsrl.vi\007vsrl.vv\007"
    "vsrl.vx\006vssb.v\006vsse.v\006vssh.v\010vssra.vi\010vssra.vv\010vssra."
    "vx\010vssrl.vi\010vssrl.vv\010vssrl.vx\010vssub.vv\010vssub.vx\tvssubu."
    "vv\tvssubu.vx\006vssw.v\007vsub.vv\007vsub.vx\007vsuxb.v\007vsuxe.v\007"
    "vsuxh.v\007vsuxw.v\005vsw.v\006vsxb.v\006vsxe.v\006vsxh.v\006vsxw.v\010"
    "vwadd.vv\010vwadd.vx\010vwadd.wv\010vwadd.wx\tvwaddu.vv\tvwaddu.vx\tvwa"
    "ddu.wv\tvwaddu.wx\013vwcvt.x.x.v\014vwcvtu.x.x.v\tvwmacc.vv\tvwmacc.vx\013"
    "vwmaccsu.vv\013vwmaccsu.vx\nvwmaccu.vv\nvwmaccu.vx\013vwmaccus.vx\010vw"
    "mul.vv\010vwmul.vx\nvwmulsu.vv\nvwmulsu.vx\tvwmulu.vv\tvwmulu.vx\013vwr"
    "edsum.vs\014vwredsumu.vs\010vwsub.vv\010vwsub.vx\010vwsub.wv\010vwsub.w"
    "x\tvwsubu.vv\tvwsubu.vx\tvwsubu.wv\tvwsubu.wx\007vxor.vi\007vxor.vv\007"
    "vxor.vx\003wfi\004xnor\003xor\004xori\006zext.b\006zext.h\006zext.w\003"
    "zip\005zip.b\005zip.h\005zip.n\005zip.w\005zip16\004zip2\006zip2.b\006z"
    "ip2.h\006zip2.w\004zip4\006zip4.h\006zip4.w\004zip8\006zip8.w";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasStdExtA,
  AMFBS_HasStdExtC,
  AMFBS_HasStdExtD,
  AMFBS_HasStdExtF,
  AMFBS_HasStdExtM,
  AMFBS_HasStdExtV,
  AMFBS_HasStdExtZbb,
  AMFBS_HasStdExtZbbOrZbp,
  AMFBS_HasStdExtZbc,
  AMFBS_HasStdExtZbe,
  AMFBS_HasStdExtZbf,
  AMFBS_HasStdExtZbp,
  AMFBS_HasStdExtZbr,
  AMFBS_HasStdExtZbs,
  AMFBS_HasStdExtZbt,
  AMFBS_IsRV32,
  AMFBS_IsRV64,
  AMFBS_HasStdExtA_IsRV64,
  AMFBS_HasStdExtC_HasRVCHints,
  AMFBS_HasStdExtC_HasStdExtD,
  AMFBS_HasStdExtC_IsRV32,
  AMFBS_HasStdExtC_IsRV64,
  AMFBS_HasStdExtD_IsRV64,
  AMFBS_HasStdExtF_IsRV64,
  AMFBS_HasStdExtM_IsRV64,
  AMFBS_HasStdExtZbb_IsRV32,
  AMFBS_HasStdExtZbb_IsRV64,
  AMFBS_HasStdExtZbbOrZbp_IsRV32,
  AMFBS_HasStdExtZbbOrZbp_IsRV64,
  AMFBS_HasStdExtZbc_IsRV64,
  AMFBS_HasStdExtZbe_IsRV64,
  AMFBS_HasStdExtZbf_IsRV64,
  AMFBS_HasStdExtZbm_IsRV64,
  AMFBS_HasStdExtZbp_IsRV64,
  AMFBS_HasStdExtZbproposedc_HasStdExtC,
  AMFBS_HasStdExtZbr_IsRV64,
  AMFBS_HasStdExtZbs_IsRV64,
  AMFBS_HasStdExtZbt_IsRV64,
  AMFBS_HasStdExtC_HasStdExtF_IsRV32,
  AMFBS_HasStdExtZbproposedc_HasStdExtZbbOrZbp_HasStdExtC_IsRV64,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasStdExtABit, },
  {Feature_HasStdExtCBit, },
  {Feature_HasStdExtDBit, },
  {Feature_HasStdExtFBit, },
  {Feature_HasStdExtMBit, },
  {Feature_HasStdExtVBit, },
  {Feature_HasStdExtZbbBit, },
  {Feature_HasStdExtZbbOrZbpBit, },
  {Feature_HasStdExtZbcBit, },
  {Feature_HasStdExtZbeBit, },
  {Feature_HasStdExtZbfBit, },
  {Feature_HasStdExtZbpBit, },
  {Feature_HasStdExtZbrBit, },
  {Feature_HasStdExtZbsBit, },
  {Feature_HasStdExtZbtBit, },
  {Feature_IsRV32Bit, },
  {Feature_IsRV64Bit, },
  {Feature_HasStdExtABit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCBit, Feature_HasRVCHintsBit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtCBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtCBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtDBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtFBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtMBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbcBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbeBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbfBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbmBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbproposedcBit, Feature_HasStdExtCBit, },
  {Feature_HasStdExtZbrBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbsBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbtBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtFBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbproposedcBit, Feature_HasStdExtZbbOrZbpBit, Feature_HasStdExtCBit, Feature_IsRV64Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, RISCV::ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 0 /* add */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 0 /* add */, RISCV::PseudoAddTPRel, Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_TPRelAddSymbol }, },
  { 4 /* addi */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 9 /* addiw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 15 /* addiwu */, RISCV::ADDIWU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 22 /* addu.w */, RISCV::ADDUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 29 /* addw */, RISCV::ADDW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 29 /* addw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 34 /* addwu */, RISCV::ADDWU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 40 /* amoadd.d */, RISCV::AMOADD_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 49 /* amoadd.d.aq */, RISCV::AMOADD_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 61 /* amoadd.d.aqrl */, RISCV::AMOADD_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 75 /* amoadd.d.rl */, RISCV::AMOADD_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 87 /* amoadd.w */, RISCV::AMOADD_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 96 /* amoadd.w.aq */, RISCV::AMOADD_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 108 /* amoadd.w.aqrl */, RISCV::AMOADD_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 122 /* amoadd.w.rl */, RISCV::AMOADD_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 134 /* amoand.d */, RISCV::AMOAND_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 143 /* amoand.d.aq */, RISCV::AMOAND_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 155 /* amoand.d.aqrl */, RISCV::AMOAND_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 169 /* amoand.d.rl */, RISCV::AMOAND_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 181 /* amoand.w */, RISCV::AMOAND_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 190 /* amoand.w.aq */, RISCV::AMOAND_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 202 /* amoand.w.aqrl */, RISCV::AMOAND_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 216 /* amoand.w.rl */, RISCV::AMOAND_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 228 /* amomax.d */, RISCV::AMOMAX_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 237 /* amomax.d.aq */, RISCV::AMOMAX_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 249 /* amomax.d.aqrl */, RISCV::AMOMAX_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 263 /* amomax.d.rl */, RISCV::AMOMAX_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 275 /* amomax.w */, RISCV::AMOMAX_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 284 /* amomax.w.aq */, RISCV::AMOMAX_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 296 /* amomax.w.aqrl */, RISCV::AMOMAX_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 310 /* amomax.w.rl */, RISCV::AMOMAX_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 322 /* amomaxu.d */, RISCV::AMOMAXU_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 332 /* amomaxu.d.aq */, RISCV::AMOMAXU_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 345 /* amomaxu.d.aqrl */, RISCV::AMOMAXU_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 360 /* amomaxu.d.rl */, RISCV::AMOMAXU_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 373 /* amomaxu.w */, RISCV::AMOMAXU_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 383 /* amomaxu.w.aq */, RISCV::AMOMAXU_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 396 /* amomaxu.w.aqrl */, RISCV::AMOMAXU_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 411 /* amomaxu.w.rl */, RISCV::AMOMAXU_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 424 /* amomin.d */, RISCV::AMOMIN_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 433 /* amomin.d.aq */, RISCV::AMOMIN_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 445 /* amomin.d.aqrl */, RISCV::AMOMIN_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 459 /* amomin.d.rl */, RISCV::AMOMIN_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 471 /* amomin.w */, RISCV::AMOMIN_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 480 /* amomin.w.aq */, RISCV::AMOMIN_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 492 /* amomin.w.aqrl */, RISCV::AMOMIN_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 506 /* amomin.w.rl */, RISCV::AMOMIN_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 518 /* amominu.d */, RISCV::AMOMINU_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 528 /* amominu.d.aq */, RISCV::AMOMINU_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 541 /* amominu.d.aqrl */, RISCV::AMOMINU_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 556 /* amominu.d.rl */, RISCV::AMOMINU_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 569 /* amominu.w */, RISCV::AMOMINU_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 579 /* amominu.w.aq */, RISCV::AMOMINU_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 592 /* amominu.w.aqrl */, RISCV::AMOMINU_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 607 /* amominu.w.rl */, RISCV::AMOMINU_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 620 /* amoor.d */, RISCV::AMOOR_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 628 /* amoor.d.aq */, RISCV::AMOOR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 639 /* amoor.d.aqrl */, RISCV::AMOOR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 652 /* amoor.d.rl */, RISCV::AMOOR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 663 /* amoor.w */, RISCV::AMOOR_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 671 /* amoor.w.aq */, RISCV::AMOOR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 682 /* amoor.w.aqrl */, RISCV::AMOOR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 695 /* amoor.w.rl */, RISCV::AMOOR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 706 /* amoswap.d */, RISCV::AMOSWAP_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 716 /* amoswap.d.aq */, RISCV::AMOSWAP_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 729 /* amoswap.d.aqrl */, RISCV::AMOSWAP_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 744 /* amoswap.d.rl */, RISCV::AMOSWAP_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 757 /* amoswap.w */, RISCV::AMOSWAP_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 767 /* amoswap.w.aq */, RISCV::AMOSWAP_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 780 /* amoswap.w.aqrl */, RISCV::AMOSWAP_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 795 /* amoswap.w.rl */, RISCV::AMOSWAP_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 808 /* amoxor.d */, RISCV::AMOXOR_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 817 /* amoxor.d.aq */, RISCV::AMOXOR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 829 /* amoxor.d.aqrl */, RISCV::AMOXOR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 843 /* amoxor.d.rl */, RISCV::AMOXOR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 855 /* amoxor.w */, RISCV::AMOXOR_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 864 /* amoxor.w.aq */, RISCV::AMOXOR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 876 /* amoxor.w.aqrl */, RISCV::AMOXOR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 890 /* amoxor.w.rl */, RISCV::AMOXOR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 902 /* and */, RISCV::AND, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 902 /* and */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 906 /* andi */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 911 /* andn */, RISCV::ANDN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 916 /* auipc */, RISCV::AUIPC, Convert__Reg1_0__UImm20AUIPC1_1, AMFBS_None, { MCK_GPR, MCK_UImm20AUIPC }, },
  { 922 /* bdep */, RISCV::BDEP, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 927 /* bdepw */, RISCV::BDEPW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 933 /* beq */, RISCV::BEQ, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 937 /* beqz */, RISCV::BEQ, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 942 /* bext */, RISCV::BEXT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 947 /* bextw */, RISCV::BEXTW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 953 /* bfp */, RISCV::BFP, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 957 /* bfpw */, RISCV::BFPW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 962 /* bge */, RISCV::BGE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 966 /* bgeu */, RISCV::BGEU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 971 /* bgez */, RISCV::BGE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 976 /* bgt */, RISCV::BLT, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 980 /* bgtu */, RISCV::BLTU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 985 /* bgtz */, RISCV::BLT, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 990 /* ble */, RISCV::BGE, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 994 /* bleu */, RISCV::BGEU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 999 /* blez */, RISCV::BGE, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1004 /* blt */, RISCV::BLT, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1008 /* bltu */, RISCV::BLTU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1013 /* bltz */, RISCV::BLT, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1018 /* bmatflip */, RISCV::BMATFLIP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1027 /* bmator */, RISCV::BMATOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1034 /* bmatxor */, RISCV::BMATXOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1042 /* bne */, RISCV::BNE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1046 /* bnez */, RISCV::BNE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1051 /* c.add */, RISCV::C_ADD_HINT, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1051 /* c.add */, RISCV::C_ADD, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1057 /* c.addi */, RISCV::C_ADDI_NOP, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC, { MCK_GPRX0, MCK_ImmZero }, },
  { 1057 /* c.addi */, RISCV::C_ADDI_HINT_X0, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6NonZero }, },
  { 1057 /* c.addi */, RISCV::C_ADDI_HINT_IMM_ZERO, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRNoX0, MCK_ImmZero }, },
  { 1057 /* c.addi */, RISCV::C_ADDI, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6NonZero }, },
  { 1064 /* c.addi16sp */, RISCV::C_ADDI16SP, Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1, AMFBS_HasStdExtC, { MCK_SP, MCK_SImm10Lsb0000NonZero }, },
  { 1075 /* c.addi4spn */, RISCV::C_ADDI4SPN, Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SP, MCK_UImm10Lsb00NonZero }, },
  { 1086 /* c.addiw */, RISCV::C_ADDIW, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1094 /* c.addw */, RISCV::C_ADDW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1101 /* c.and */, RISCV::C_AND, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1107 /* c.andi */, RISCV::C_ANDI, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm6 }, },
  { 1114 /* c.beqz */, RISCV::C_BEQZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1121 /* c.bnez */, RISCV::C_BNEZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1128 /* c.ebreak */, RISCV::C_EBREAK, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1137 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1137 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1143 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1143 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1151 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1151 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1157 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1157 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1165 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1165 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1171 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1171 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1179 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1179 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1185 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1185 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1193 /* c.j */, RISCV::C_J, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC, { MCK_SImm12Lsb0 }, },
  { 1197 /* c.jal */, RISCV::C_JAL, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC_IsRV32, { MCK_SImm12Lsb0 }, },
  { 1203 /* c.jalr */, RISCV::C_JALR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1210 /* c.jr */, RISCV::C_JR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1215 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1215 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1220 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1220 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1227 /* c.li */, RISCV::C_LI_HINT, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6 }, },
  { 1227 /* c.li */, RISCV::C_LI, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1232 /* c.lui */, RISCV::C_LUI_HINT, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_CLUIImm }, },
  { 1232 /* c.lui */, RISCV::C_LUI, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0X2, MCK_CLUIImm }, },
  { 1238 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1238 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1243 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1243 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1250 /* c.mv */, RISCV::C_MV_HINT, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1250 /* c.mv */, RISCV::C_MV, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1255 /* c.neg */, RISCV::C_NEG, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtC, { MCK_GPRC }, },
  { 1261 /* c.nop */, RISCV::C_NOP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1261 /* c.nop */, RISCV::C_NOP_HINT, Convert__SImm6NonZero1_0, AMFBS_HasStdExtC_HasRVCHints, { MCK_SImm6NonZero }, },
  { 1267 /* c.not */, RISCV::C_NOT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtC, { MCK_GPRC }, },
  { 1273 /* c.or */, RISCV::C_OR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1278 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1278 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1283 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1283 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPR, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1290 /* c.slli */, RISCV::C_SLLI_HINT, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_UImmLog2XLenNonZero }, },
  { 1290 /* c.slli */, RISCV::C_SLLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImmLog2XLenNonZero }, },
  { 1297 /* c.slli64 */, RISCV::C_SLLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPR }, },
  { 1306 /* c.srai */, RISCV::C_SRAI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1313 /* c.srai64 */, RISCV::C_SRAI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1322 /* c.srli */, RISCV::C_SRLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1329 /* c.srli64 */, RISCV::C_SRLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1338 /* c.sub */, RISCV::C_SUB, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1344 /* c.subw */, RISCV::C_SUBW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1351 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1351 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1356 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1356 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPR, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1363 /* c.unimp */, RISCV::C_UNIMP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1371 /* c.xor */, RISCV::C_XOR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1377 /* c.zext.w */, RISCV::C_ZEXTW, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtZbbOrZbp_HasStdExtC_IsRV64, { MCK_GPRC }, },
  { 1386 /* call */, RISCV::PseudoCALL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 1386 /* call */, RISCV::PseudoCALLReg, Convert__Reg1_0__CallSymbol1_1, AMFBS_None, { MCK_GPR, MCK_CallSymbol }, },
  { 1391 /* clmul */, RISCV::CLMUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1397 /* clmulh */, RISCV::CLMULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1404 /* clmulhw */, RISCV::CLMULHW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1412 /* clmulr */, RISCV::CLMULR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1419 /* clmulrw */, RISCV::CLMULRW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1427 /* clmulw */, RISCV::CLMULW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1434 /* clz */, RISCV::CLZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1438 /* clzw */, RISCV::CLZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1443 /* cmix */, RISCV::CMIX, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1448 /* cmov */, RISCV::CMOV, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1453 /* crc32.b */, RISCV::CRC32B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1461 /* crc32.d */, RISCV::CRC32D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1469 /* crc32.h */, RISCV::CRC32H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1477 /* crc32.w */, RISCV::CRC32W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1485 /* crc32c.b */, RISCV::CRC32CB, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1494 /* crc32c.d */, RISCV::CRC32CD, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1503 /* crc32c.h */, RISCV::CRC32CH, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1512 /* crc32c.w */, RISCV::CRC32CW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1521 /* csrc */, RISCV::CSRRC, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1521 /* csrc */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1526 /* csrci */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1532 /* csrr */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__regX0, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister }, },
  { 1537 /* csrrc */, RISCV::CSRRC, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1537 /* csrrc */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1543 /* csrrci */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1550 /* csrrs */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1550 /* csrrs */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1556 /* csrrsi */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1563 /* csrrw */, RISCV::CSRRW, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1563 /* csrrw */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1569 /* csrrwi */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1576 /* csrs */, RISCV::CSRRS, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1576 /* csrs */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1581 /* csrsi */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1587 /* csrw */, RISCV::CSRRW, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1587 /* csrw */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1592 /* csrwi */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1598 /* ctz */, RISCV::CTZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1602 /* ctzw */, RISCV::CTZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1607 /* div */, RISCV::DIV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1611 /* divu */, RISCV::DIVU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1616 /* divuw */, RISCV::DIVUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1622 /* divw */, RISCV::DIVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1627 /* dret */, RISCV::DRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 1632 /* ebreak */, RISCV::EBREAK, Convert_NoOperands, AMFBS_None, {  }, },
  { 1639 /* ecall */, RISCV::ECALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 1645 /* fabs.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 1652 /* fabs.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 1659 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1659 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 1666 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1666 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 1673 /* fclass.d */, RISCV::FCLASS_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 1682 /* fclass.s */, RISCV::FCLASS_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 1691 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1691 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1700 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1700 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1710 /* fcvt.d.s */, RISCV::FCVT_D_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR32 }, },
  { 1719 /* fcvt.d.w */, RISCV::FCVT_D_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 1728 /* fcvt.d.wu */, RISCV::FCVT_D_WU, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 1738 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 1738 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1747 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 1747 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1756 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 1756 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1766 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 1766 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1776 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64 }, },
  { 1776 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64, MCK_FRMArg }, },
  { 1785 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 1785 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 1794 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 1794 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 1804 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 1804 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 1813 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 1813 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 1823 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 1823 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1832 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 1832 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1841 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 1841 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1851 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 1851 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1861 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1861 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 1868 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1868 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 1875 /* fence */, RISCV::FENCE, Convert__imm_95_15__imm_95_15, AMFBS_None, {  }, },
  { 1875 /* fence */, RISCV::FENCE, Convert__FenceArg1_0__FenceArg1_1, AMFBS_None, { MCK_FenceArg, MCK_FenceArg }, },
  { 1881 /* fence.i */, RISCV::FENCE_I, Convert_NoOperands, AMFBS_None, {  }, },
  { 1889 /* fence.tso */, RISCV::FENCE_TSO, Convert_NoOperands, AMFBS_None, {  }, },
  { 1899 /* feq.d */, RISCV::FEQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 1905 /* feq.s */, RISCV::FEQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 1911 /* fge.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 1917 /* fge.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 1923 /* fgt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 1929 /* fgt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 1935 /* fld */, RISCV::PseudoFLD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 1935 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 1935 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 1939 /* fle.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 1945 /* fle.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 1951 /* flt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 1957 /* flt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 1963 /* flw */, RISCV::PseudoFLW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 1963 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 1963 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 1967 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1967 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 1975 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1975 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 1983 /* fmax.d */, RISCV::FMAX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1990 /* fmax.s */, RISCV::FMAX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1997 /* fmin.d */, RISCV::FMIN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2004 /* fmin.s */, RISCV::FMIN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2011 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2011 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2019 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2019 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2027 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2027 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2034 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2034 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2041 /* fmv.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2047 /* fmv.d.x */, RISCV::FMV_D_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 2055 /* fmv.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2061 /* fmv.w.x */, RISCV::FMV_W_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2069 /* fmv.x.d */, RISCV::FMV_X_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 2077 /* fmv.x.w */, RISCV::FMV_X_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2085 /* fneg.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2092 /* fneg.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2099 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2099 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2108 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2108 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2117 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2117 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2126 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2126 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2135 /* frcsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2141 /* frflags */, RISCV::CSRRS, Convert__Reg1_0__imm_95_1__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2149 /* frrm */, RISCV::CSRRS, Convert__Reg1_0__imm_95_2__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2154 /* frsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2159 /* fscsr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2159 /* fscsr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2165 /* fsd */, RISCV::PseudoFSD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 2165 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2165 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2169 /* fsflags */, RISCV::CSRRW, Convert__regX0__imm_95_1__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2169 /* fsflags */, RISCV::CSRRW, Convert__Reg1_0__imm_95_1__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2177 /* fsflagsi */, RISCV::CSRRWI, Convert__regX0__imm_95_1__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2177 /* fsflagsi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_1__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2186 /* fsgnj.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2194 /* fsgnj.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2202 /* fsgnjn.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2211 /* fsgnjn.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2220 /* fsgnjx.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2229 /* fsgnjx.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2238 /* fsl */, RISCV::FSL, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2242 /* fslw */, RISCV::FSLW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2247 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2247 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2255 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2255 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2263 /* fsr */, RISCV::FSR, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2267 /* fsri */, RISCV::FSRI, Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2272 /* fsriw */, RISCV::FSRIW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2278 /* fsrm */, RISCV::CSRRW, Convert__regX0__imm_95_2__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2278 /* fsrm */, RISCV::CSRRW, Convert__Reg1_0__imm_95_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2283 /* fsrmi */, RISCV::CSRRWI, Convert__regX0__imm_95_2__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2283 /* fsrmi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_2__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2289 /* fsrw */, RISCV::FSRW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2294 /* fssr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2294 /* fssr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2299 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2299 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2306 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2306 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2313 /* fsw */, RISCV::PseudoFSW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 2313 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2313 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2317 /* gorc */, RISCV::GORC, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2322 /* gorci */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2328 /* gorciw */, RISCV::GORCIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2335 /* gorcw */, RISCV::GORCW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2341 /* grev */, RISCV::GREV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2346 /* grevi */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2352 /* greviw */, RISCV::GREVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2359 /* grevw */, RISCV::GREVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2365 /* j */, RISCV::JAL, Convert__regX0__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 2367 /* jal */, RISCV::JAL, Convert__regX1__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 2367 /* jal */, RISCV::JAL, Convert__Reg1_0__SImm21Lsb0JAL1_1, AMFBS_None, { MCK_GPR, MCK_SImm21Lsb0JAL }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2371 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2376 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 2376 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 2376 /* jr */, RISCV::JALR, Convert__regX0__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2379 /* jump */, RISCV::PseudoJump, Convert__Reg1_1__PseudoJumpSymbol1_0, AMFBS_None, { MCK_PseudoJumpSymbol, MCK_GPR }, },
  { 2384 /* la */, RISCV::PseudoLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2387 /* la.tls.gd */, RISCV::PseudoLA_TLS_GD, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2397 /* la.tls.ie */, RISCV::PseudoLA_TLS_IE, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2407 /* lb */, RISCV::PseudoLB, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2407 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2407 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2410 /* lbu */, RISCV::PseudoLBU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2410 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2410 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2414 /* ld */, RISCV::PseudoLD, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 2414 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2414 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2417 /* lh */, RISCV::PseudoLH, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2417 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2417 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2420 /* lhu */, RISCV::PseudoLHU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2420 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2420 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2424 /* li */, RISCV::PseudoLI, Convert__Reg1_0__ImmXLenLI1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI }, },
  { 2427 /* lla */, RISCV::PseudoLLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2431 /* lr.d */, RISCV::LR_D, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2436 /* lr.d.aq */, RISCV::LR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2444 /* lr.d.aqrl */, RISCV::LR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2454 /* lr.d.rl */, RISCV::LR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2462 /* lr.w */, RISCV::LR_W, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2467 /* lr.w.aq */, RISCV::LR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2475 /* lr.w.aqrl */, RISCV::LR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2485 /* lr.w.rl */, RISCV::LR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2493 /* lui */, RISCV::LUI, Convert__Reg1_0__UImm20LUI1_1, AMFBS_None, { MCK_GPR, MCK_UImm20LUI }, },
  { 2497 /* lw */, RISCV::PseudoLW, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2497 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2497 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2500 /* lwu */, RISCV::PseudoLWU, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 2500 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2500 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2504 /* max */, RISCV::MAX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2508 /* maxu */, RISCV::MAXU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2513 /* min */, RISCV::MIN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2517 /* minu */, RISCV::MINU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2522 /* mret */, RISCV::MRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 2527 /* mul */, RISCV::MUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2531 /* mulh */, RISCV::MULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2536 /* mulhsu */, RISCV::MULHSU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2543 /* mulhu */, RISCV::MULHU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2549 /* mulw */, RISCV::MULW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2554 /* mv */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2557 /* neg */, RISCV::SUB, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2561 /* negw */, RISCV::SUBW, Convert__Reg1_0__regX0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2566 /* nop */, RISCV::ADDI, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 2570 /* not */, RISCV::XORI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2574 /* or */, RISCV::OR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2574 /* or */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2577 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2577 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2581 /* orc.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2587 /* orc.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2593 /* orc.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2599 /* orc.p */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2605 /* orc.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2611 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2611 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2617 /* orc16.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2625 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2625 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2630 /* orc2.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2637 /* orc2.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2644 /* orc2.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2651 /* orc2.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2658 /* orc32 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2664 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2664 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2669 /* orc4.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2676 /* orc4.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2683 /* orc4.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2690 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2690 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_56, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2695 /* orc8.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2702 /* orc8.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2709 /* ori */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2713 /* orn */, RISCV::ORN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2717 /* pack */, RISCV::PACK, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2722 /* packh */, RISCV::PACKH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2728 /* packu */, RISCV::PACKU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2734 /* packuw */, RISCV::PACKUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2741 /* packw */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2747 /* pcnt */, RISCV::PCNT, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 2752 /* pcntw */, RISCV::PCNTW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2758 /* rdcycle */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3072__regX0, AMFBS_None, { MCK_GPR }, },
  { 2766 /* rdcycleh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3200__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 2775 /* rdinstret */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3074__regX0, AMFBS_None, { MCK_GPR }, },
  { 2785 /* rdinstreth */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3202__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 2796 /* rdtime */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3073__regX0, AMFBS_None, { MCK_GPR }, },
  { 2803 /* rdtimeh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3201__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 2811 /* rem */, RISCV::REM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2815 /* remu */, RISCV::REMU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2820 /* remuw */, RISCV::REMUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2826 /* remw */, RISCV::REMW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2831 /* ret */, RISCV::JALR, Convert__regX0__regX1__imm_95_0, AMFBS_None, {  }, },
  { 2835 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2835 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2839 /* rev.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2845 /* rev.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2851 /* rev.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2857 /* rev.p */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2863 /* rev.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2869 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2869 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2875 /* rev16.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2883 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2883 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2888 /* rev2.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2895 /* rev2.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2902 /* rev2.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2909 /* rev2.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2916 /* rev32 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2922 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2922 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2927 /* rev4.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2934 /* rev4.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2941 /* rev4.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2948 /* rev8 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2948 /* rev8 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_56, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2953 /* rev8.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2960 /* rev8.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2967 /* rol */, RISCV::ROL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2971 /* rolw */, RISCV::ROLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2976 /* ror */, RISCV::ROR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2980 /* rori */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2985 /* roriw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2991 /* rorw */, RISCV::RORW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2996 /* sb */, RISCV::PseudoSB, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 2996 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2996 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2999 /* sbclr */, RISCV::SBCLR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3005 /* sbclri */, RISCV::SBCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3012 /* sbclriw */, RISCV::SBCLRIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3020 /* sbclrw */, RISCV::SBCLRW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3027 /* sbext */, RISCV::SBEXT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3033 /* sbexti */, RISCV::SBEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3040 /* sbextw */, RISCV::SBEXTW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3047 /* sbinv */, RISCV::SBINV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3053 /* sbinvi */, RISCV::SBINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3060 /* sbinviw */, RISCV::SBINVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3068 /* sbinvw */, RISCV::SBINVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3075 /* sbset */, RISCV::SBSET, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3081 /* sbseti */, RISCV::SBSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3088 /* sbsetiw */, RISCV::SBSETIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3096 /* sbsetw */, RISCV::SBSETW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3103 /* sc.d */, RISCV::SC_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3108 /* sc.d.aq */, RISCV::SC_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3116 /* sc.d.aqrl */, RISCV::SC_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3126 /* sc.d.rl */, RISCV::SC_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3134 /* sc.w */, RISCV::SC_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3139 /* sc.w.aq */, RISCV::SC_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3147 /* sc.w.aqrl */, RISCV::SC_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3157 /* sc.w.rl */, RISCV::SC_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3165 /* sd */, RISCV::PseudoSD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3165 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3165 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3168 /* seqz */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3173 /* sext.b */, RISCV::SEXTB, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3180 /* sext.h */, RISCV::SEXTH, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3187 /* sext.w */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3194 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 3194 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 3194 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3205 /* sgt */, RISCV::SLT, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3209 /* sgtu */, RISCV::SLTU, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3214 /* sgtz */, RISCV::SLT, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3219 /* sh */, RISCV::PseudoSH, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3219 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3219 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3222 /* shfl */, RISCV::SHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3227 /* shfli */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 3233 /* shflw */, RISCV::SHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3239 /* sll */, RISCV::SLL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3239 /* sll */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3243 /* slli */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3248 /* slliu.w */, RISCV::SLLIUW, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3256 /* slliw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3262 /* sllw */, RISCV::SLLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3262 /* sllw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3267 /* slo */, RISCV::SLO, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3271 /* sloi */, RISCV::SLOI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3276 /* sloiw */, RISCV::SLOIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3282 /* slow */, RISCV::SLOW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3287 /* slt */, RISCV::SLT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3287 /* slt */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3291 /* slti */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3296 /* sltiu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3302 /* sltu */, RISCV::SLTU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3302 /* sltu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3307 /* sltz */, RISCV::SLT, Convert__Reg1_0__Reg1_1__regX0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3312 /* snez */, RISCV::SLTU, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3317 /* sra */, RISCV::SRA, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3317 /* sra */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3321 /* srai */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3326 /* sraiw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3332 /* sraw */, RISCV::SRAW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3332 /* sraw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3337 /* sret */, RISCV::SRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3342 /* srl */, RISCV::SRL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3342 /* srl */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3346 /* srli */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3351 /* srliw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3357 /* srlw */, RISCV::SRLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3357 /* srlw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3362 /* sro */, RISCV::SRO, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3366 /* sroi */, RISCV::SROI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3371 /* sroiw */, RISCV::SROIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3377 /* srow */, RISCV::SROW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3382 /* sub */, RISCV::SUB, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3386 /* subu.w */, RISCV::SUBUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3393 /* subw */, RISCV::SUBW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3398 /* subwu */, RISCV::SUBWU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3404 /* sw */, RISCV::PseudoSW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3404 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3404 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3407 /* tail */, RISCV::PseudoTAIL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 3412 /* unimp */, RISCV::UNIMP, Convert_NoOperands, AMFBS_None, {  }, },
  { 3418 /* unshfl */, RISCV::UNSHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3425 /* unshfli */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 3433 /* unshflw */, RISCV::UNSHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3441 /* unzip */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3441 /* unzip */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3447 /* unzip.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3455 /* unzip.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3463 /* unzip.n */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3471 /* unzip.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3479 /* unzip16 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3487 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3487 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3494 /* unzip2.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3503 /* unzip2.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3512 /* unzip2.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3521 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3521 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3528 /* unzip4.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 3537 /* unzip4.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3546 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3546 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3553 /* unzip8.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3562 /* uret */, RISCV::URET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3567 /* vaadd.vv */, RISCV::VAADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3576 /* vaadd.vx */, RISCV::VAADD_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3585 /* vaaddu.vv */, RISCV::VAADDU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3595 /* vaaddu.vx */, RISCV::VAADDU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3605 /* vadc.vim */, RISCV::VADC_VIM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_VMV0 }, },
  { 3614 /* vadc.vvm */, RISCV::VADC_VVM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_VMV0 }, },
  { 3623 /* vadc.vxm */, RISCV::VADC_VXM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_VMV0 }, },
  { 3632 /* vadd.vi */, RISCV::VADD_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 3640 /* vadd.vv */, RISCV::VADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3648 /* vadd.vx */, RISCV::VADD_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3656 /* vand.vi */, RISCV::VAND_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 3664 /* vand.vv */, RISCV::VAND_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3672 /* vand.vx */, RISCV::VAND_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3680 /* vasub.vv */, RISCV::VASUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3689 /* vasub.vx */, RISCV::VASUB_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3698 /* vasubu.vv */, RISCV::VASUBU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3708 /* vasubu.vx */, RISCV::VASUBU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3718 /* vcompress.vm */, RISCV::VCOMPRESS_VM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 3731 /* vdiv.vv */, RISCV::VDIV_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3739 /* vdiv.vx */, RISCV::VDIV_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3747 /* vdivu.vv */, RISCV::VDIVU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3756 /* vdivu.vx */, RISCV::VDIVU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3765 /* vfadd.vf */, RISCV::VFADD_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 3774 /* vfadd.vv */, RISCV::VFADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3783 /* vfclass.v */, RISCV::VFCLASS_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3793 /* vfcvt.f.x.v */, RISCV::VFCVT_F_X_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3805 /* vfcvt.f.xu.v */, RISCV::VFCVT_F_XU_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3818 /* vfcvt.x.f.v */, RISCV::VFCVT_X_F_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3830 /* vfcvt.xu.f.v */, RISCV::VFCVT_XU_F_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3843 /* vfdiv.vf */, RISCV::VFDIV_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 3852 /* vfdiv.vv */, RISCV::VFDIV_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3861 /* vfirst.m */, RISCV::VFIRST_M, Convert__Reg1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3870 /* vfmacc.vf */, RISCV::VFMACC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3880 /* vfmacc.vv */, RISCV::VFMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3890 /* vfmadd.vf */, RISCV::VFMADD_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3900 /* vfmadd.vv */, RISCV::VFMADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3910 /* vfmax.vf */, RISCV::VFMAX_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 3919 /* vfmax.vv */, RISCV::VFMAX_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3928 /* vfmerge.vfm */, RISCV::VFMERGE_VFM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_VMV0 }, },
  { 3940 /* vfmin.vf */, RISCV::VFMIN_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 3949 /* vfmin.vv */, RISCV::VFMIN_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3958 /* vfmsac.vf */, RISCV::VFMSAC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3968 /* vfmsac.vv */, RISCV::VFMSAC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3978 /* vfmsub.vf */, RISCV::VFMSUB_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3988 /* vfmsub.vv */, RISCV::VFMSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 3998 /* vfmul.vf */, RISCV::VFMUL_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4007 /* vfmul.vv */, RISCV::VFMUL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4016 /* vfmv.f.s */, RISCV::VFMV_F_S, Convert__Reg1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_FPR32, MCK_RVVRegOpOperand }, },
  { 4025 /* vfmv.s.f */, RISCV::VFMV_S_F, Convert__RVVRegOpOperand1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32 }, },
  { 4034 /* vfmv.v.f */, RISCV::VFMV_V_F, Convert__RVVRegOpOperand1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32 }, },
  { 4043 /* vfncvt.f.f.w */, RISCV::VFNCVT_F_F_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4056 /* vfncvt.f.x.w */, RISCV::VFNCVT_F_X_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4069 /* vfncvt.f.xu.w */, RISCV::VFNCVT_F_XU_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4083 /* vfncvt.rod.f.f.w */, RISCV::VFNCVT_ROD_F_F_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4100 /* vfncvt.x.f.w */, RISCV::VFNCVT_X_F_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4113 /* vfncvt.xu.f.w */, RISCV::VFNCVT_XU_F_W, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4127 /* vfnmacc.vf */, RISCV::VFNMACC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4138 /* vfnmacc.vv */, RISCV::VFNMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4149 /* vfnmadd.vf */, RISCV::VFNMADD_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4160 /* vfnmadd.vv */, RISCV::VFNMADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4171 /* vfnmsac.vf */, RISCV::VFNMSAC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4182 /* vfnmsac.vv */, RISCV::VFNMSAC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4193 /* vfnmsub.vf */, RISCV::VFNMSUB_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4204 /* vfnmsub.vv */, RISCV::VFNMSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4215 /* vfrdiv.vf */, RISCV::VFRDIV_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4225 /* vfredmax.vs */, RISCV::VFREDMAX_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4237 /* vfredmin.vs */, RISCV::VFREDMIN_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4249 /* vfredosum.vs */, RISCV::VFREDOSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4262 /* vfredsum.vs */, RISCV::VFREDSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4274 /* vfrsub.vf */, RISCV::VFRSUB_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4284 /* vfsgnj.vf */, RISCV::VFSGNJ_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4294 /* vfsgnj.vv */, RISCV::VFSGNJ_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4304 /* vfsgnjn.vf */, RISCV::VFSGNJN_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4315 /* vfsgnjn.vv */, RISCV::VFSGNJN_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4326 /* vfsgnjx.vf */, RISCV::VFSGNJX_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4337 /* vfsgnjx.vv */, RISCV::VFSGNJX_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4348 /* vfsqrt.v */, RISCV::VFSQRT_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4357 /* vfsub.vf */, RISCV::VFSUB_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4366 /* vfsub.vv */, RISCV::VFSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4375 /* vfwadd.vf */, RISCV::VFWADD_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4385 /* vfwadd.vv */, RISCV::VFWADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4395 /* vfwadd.wf */, RISCV::VFWADD_WF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4405 /* vfwadd.wv */, RISCV::VFWADD_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4415 /* vfwcvt.f.f.v */, RISCV::VFWCVT_F_F_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4428 /* vfwcvt.f.x.v */, RISCV::VFWCVT_F_X_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4441 /* vfwcvt.f.xu.v */, RISCV::VFWCVT_F_XU_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4455 /* vfwcvt.x.f.v */, RISCV::VFWCVT_X_F_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4468 /* vfwcvt.xu.f.v */, RISCV::VFWCVT_XU_F_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4482 /* vfwmacc.vf */, RISCV::VFWMACC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4493 /* vfwmacc.vv */, RISCV::VFWMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4504 /* vfwmsac.vf */, RISCV::VFWMSAC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4515 /* vfwmsac.vv */, RISCV::VFWMSAC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4526 /* vfwmul.vf */, RISCV::VFWMUL_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4536 /* vfwmul.vv */, RISCV::VFWMUL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4546 /* vfwnmacc.vf */, RISCV::VFWNMACC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4558 /* vfwnmacc.vv */, RISCV::VFWNMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4570 /* vfwnmsac.vf */, RISCV::VFWNMSAC_VF, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4582 /* vfwnmsac.vv */, RISCV::VFWNMSAC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4594 /* vfwredosum.vs */, RISCV::VFWREDOSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4608 /* vfwredsum.vs */, RISCV::VFWREDSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4621 /* vfwsub.vf */, RISCV::VFWSUB_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4631 /* vfwsub.vv */, RISCV::VFWSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4641 /* vfwsub.wf */, RISCV::VFWSUB_WF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4651 /* vfwsub.wv */, RISCV::VFWSUB_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4661 /* vid.v */, RISCV::VID_V, Convert__RVVRegOpOperand1_0__RVVMaskRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4667 /* viota.m */, RISCV::VIOTA_M, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4675 /* vl1r.v */, RISCV::VL1R_V, Convert__RVVRegOpOperand1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 4682 /* vlb.v */, RISCV::VLB_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4688 /* vlbff.v */, RISCV::VLBFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4696 /* vlbu.v */, RISCV::VLBU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4703 /* vlbuff.v */, RISCV::VLBUFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4712 /* vle.v */, RISCV::VLE_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4718 /* vleff.v */, RISCV::VLEFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4726 /* vlh.v */, RISCV::VLH_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4732 /* vlhff.v */, RISCV::VLHFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4740 /* vlhu.v */, RISCV::VLHU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4747 /* vlhuff.v */, RISCV::VLHUFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4756 /* vlsb.v */, RISCV::VLSB_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4763 /* vlsbu.v */, RISCV::VLSBU_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4771 /* vlse.v */, RISCV::VLSE_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4778 /* vlsh.v */, RISCV::VLSH_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4785 /* vlshu.v */, RISCV::VLSHU_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4793 /* vlsw.v */, RISCV::VLSW_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4800 /* vlswu.v */, RISCV::VLSWU_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4808 /* vlw.v */, RISCV::VLW_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4814 /* vlwff.v */, RISCV::VLWFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4822 /* vlwu.v */, RISCV::VLWU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4829 /* vlwuff.v */, RISCV::VLWUFF_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 4838 /* vlxb.v */, RISCV::VLXB_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4845 /* vlxbu.v */, RISCV::VLXBU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4853 /* vlxe.v */, RISCV::VLXE_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4860 /* vlxh.v */, RISCV::VLXH_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4867 /* vlxhu.v */, RISCV::VLXHU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4875 /* vlxw.v */, RISCV::VLXW_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4882 /* vlxwu.v */, RISCV::VLXWU_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4890 /* vmacc.vv */, RISCV::VMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4899 /* vmacc.vx */, RISCV::VMACC_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4908 /* vmadc.vi */, RISCV::VMADC_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5 }, },
  { 4917 /* vmadc.vim */, RISCV::VMADC_VIM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_VMV0 }, },
  { 4927 /* vmadc.vv */, RISCV::VMADC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 4936 /* vmadc.vvm */, RISCV::VMADC_VVM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_VMV0 }, },
  { 4946 /* vmadc.vx */, RISCV::VMADC_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR }, },
  { 4955 /* vmadc.vxm */, RISCV::VMADC_VXM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_VMV0 }, },
  { 4965 /* vmadd.vv */, RISCV::VMADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4974 /* vmadd.vx */, RISCV::VMADD_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 4983 /* vmand.mm */, RISCV::VMAND_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 4992 /* vmandnot.mm */, RISCV::VMANDNOT_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5004 /* vmax.vv */, RISCV::VMAX_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5012 /* vmax.vx */, RISCV::VMAX_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5020 /* vmaxu.vv */, RISCV::VMAXU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5029 /* vmaxu.vx */, RISCV::VMAXU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5038 /* vmclr.m */, RISCV::VMXOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_0__RVVRegOpOperand1_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand }, },
  { 5046 /* vmcpy.m */, RISCV::VMAND_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5054 /* vmerge.vim */, RISCV::VMERGE_VIM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_VMV0 }, },
  { 5065 /* vmerge.vvm */, RISCV::VMERGE_VVM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_VMV0 }, },
  { 5076 /* vmerge.vxm */, RISCV::VMERGE_VXM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_VMV0 }, },
  { 5087 /* vmfeq.vf */, RISCV::VMFEQ_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5096 /* vmfeq.vv */, RISCV::VMFEQ_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5105 /* vmfge.vf */, RISCV::VMFGE_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5114 /* vmfge.vv */, RISCV::VMFLE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5123 /* vmfgt.vf */, RISCV::VMFGT_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5132 /* vmfgt.vv */, RISCV::VMFLT_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5141 /* vmfle.vf */, RISCV::VMFLE_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5150 /* vmfle.vv */, RISCV::VMFLE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5159 /* vmflt.vf */, RISCV::VMFLT_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5168 /* vmflt.vv */, RISCV::VMFLT_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5177 /* vmfne.vf */, RISCV::VMFNE_VF, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5186 /* vmfne.vv */, RISCV::VMFNE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5195 /* vmin.vv */, RISCV::VMIN_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5203 /* vmin.vx */, RISCV::VMIN_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5211 /* vminu.vv */, RISCV::VMINU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5220 /* vminu.vx */, RISCV::VMINU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5229 /* vmnand.mm */, RISCV::VMNAND_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5239 /* vmnor.mm */, RISCV::VMNOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5248 /* vmnot.m */, RISCV::VMNAND_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5256 /* vmor.mm */, RISCV::VMOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5264 /* vmornot.mm */, RISCV::VMORNOT_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5275 /* vmsbc.vv */, RISCV::VMSBC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5284 /* vmsbc.vvm */, RISCV::VMSBC_VVM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_VMV0 }, },
  { 5294 /* vmsbc.vx */, RISCV::VMSBC_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR }, },
  { 5303 /* vmsbc.vxm */, RISCV::VMSBC_VXM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_VMV0 }, },
  { 5313 /* vmsbf.m */, RISCV::VMSBF_M, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5321 /* vmseq.vi */, RISCV::VMSEQ_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5330 /* vmseq.vv */, RISCV::VMSEQ_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5339 /* vmseq.vx */, RISCV::VMSEQ_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5348 /* vmset.m */, RISCV::VMXNOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_0__RVVRegOpOperand1_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand }, },
  { 5356 /* vmsge.vi */, RISCV::VMSGT_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 5365 /* vmsge.vv */, RISCV::VMSLE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5374 /* vmsgeu.vi */, RISCV::VMSGTU_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 5384 /* vmsgeu.vv */, RISCV::VMSLEU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5394 /* vmsgt.vi */, RISCV::VMSGT_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5403 /* vmsgt.vv */, RISCV::VMSLT_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5412 /* vmsgt.vx */, RISCV::VMSGT_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5421 /* vmsgtu.vi */, RISCV::VMSGTU_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5431 /* vmsgtu.vv */, RISCV::VMSLTU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_2__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5441 /* vmsgtu.vx */, RISCV::VMSGTU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5451 /* vmsif.m */, RISCV::VMSIF_M, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5459 /* vmsle.vi */, RISCV::VMSLE_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5468 /* vmsle.vv */, RISCV::VMSLE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5477 /* vmsle.vx */, RISCV::VMSLE_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5486 /* vmsleu.vi */, RISCV::VMSLEU_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5496 /* vmsleu.vv */, RISCV::VMSLEU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5506 /* vmsleu.vx */, RISCV::VMSLEU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5516 /* vmslt.vi */, RISCV::VMSLE_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 5525 /* vmslt.vv */, RISCV::VMSLT_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5534 /* vmslt.vx */, RISCV::VMSLT_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5543 /* vmsltu.vi */, RISCV::VMSLEU_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 5553 /* vmsltu.vv */, RISCV::VMSLTU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5563 /* vmsltu.vx */, RISCV::VMSLTU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5573 /* vmsne.vi */, RISCV::VMSNE_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5582 /* vmsne.vv */, RISCV::VMSNE_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5591 /* vmsne.vx */, RISCV::VMSNE_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5600 /* vmsof.m */, RISCV::VMSOF_M, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5608 /* vmul.vv */, RISCV::VMUL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5616 /* vmul.vx */, RISCV::VMUL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5624 /* vmulh.vv */, RISCV::VMULH_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5633 /* vmulh.vx */, RISCV::VMULH_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5642 /* vmulhsu.vv */, RISCV::VMULHSU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5653 /* vmulhsu.vx */, RISCV::VMULHSU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5664 /* vmulhu.vv */, RISCV::VMULHU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5674 /* vmulhu.vx */, RISCV::VMULHU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5684 /* vmv.s.x */, RISCV::VMV_S_X, Convert__RVVRegOpOperand1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR }, },
  { 5692 /* vmv.v.i */, RISCV::VMV_V_I, Convert__RVVRegOpOperand1_0__SImm51_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_SImm5 }, },
  { 5700 /* vmv.v.v */, RISCV::VMV_V_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5708 /* vmv.v.x */, RISCV::VMV_V_X, Convert__RVVRegOpOperand1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR }, },
  { 5716 /* vmv.x.s */, RISCV::VMV_X_S, Convert__Reg1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_GPR, MCK_RVVRegOpOperand }, },
  { 5724 /* vmv1r.v */, RISCV::VMV1R_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5732 /* vmv2r.v */, RISCV::VMV2R_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5740 /* vmv4r.v */, RISCV::VMV4R_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5748 /* vmv8r.v */, RISCV::VMV8R_V, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5756 /* vmxnor.mm */, RISCV::VMXNOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5766 /* vmxor.mm */, RISCV::VMXOR_MM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand }, },
  { 5775 /* vnclip.wi */, RISCV::VNCLIP_WI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 5785 /* vnclip.wv */, RISCV::VNCLIP_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5795 /* vnclip.wx */, RISCV::VNCLIP_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5805 /* vnclipu.wi */, RISCV::VNCLIPU_WI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 5816 /* vnclipu.wv */, RISCV::VNCLIPU_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5827 /* vnclipu.wx */, RISCV::VNCLIPU_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5838 /* vnmsac.vv */, RISCV::VNMSAC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5848 /* vnmsac.vx */, RISCV::VNMSAC_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5858 /* vnmsub.vv */, RISCV::VNMSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5868 /* vnmsub.vx */, RISCV::VNMSUB_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5878 /* vnot.v */, RISCV::VXOR_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5885 /* vnsra.wi */, RISCV::VNSRA_WI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 5894 /* vnsra.wv */, RISCV::VNSRA_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5903 /* vnsra.wx */, RISCV::VNSRA_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5912 /* vnsrl.wi */, RISCV::VNSRL_WI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 5921 /* vnsrl.wv */, RISCV::VNSRL_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5930 /* vnsrl.wx */, RISCV::VNSRL_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5939 /* vor.vi */, RISCV::VOR_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 5946 /* vor.vv */, RISCV::VOR_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5953 /* vor.vx */, RISCV::VOR_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 5960 /* vpopc.m */, RISCV::VPOPC_M, Convert__Reg1_0__RVVRegOpOperand1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5968 /* vredand.vs */, RISCV::VREDAND_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5979 /* vredmax.vs */, RISCV::VREDMAX_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 5990 /* vredmaxu.vs */, RISCV::VREDMAXU_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6002 /* vredmin.vs */, RISCV::VREDMIN_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6013 /* vredminu.vs */, RISCV::VREDMINU_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6025 /* vredor.vs */, RISCV::VREDOR_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6035 /* vredsum.vs */, RISCV::VREDSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6046 /* vredxor.vs */, RISCV::VREDXOR_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6057 /* vrem.vv */, RISCV::VREM_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6065 /* vrem.vx */, RISCV::VREM_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6073 /* vremu.vv */, RISCV::VREMU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6082 /* vremu.vx */, RISCV::VREMU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6091 /* vrgather.vi */, RISCV::VRGATHER_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6103 /* vrgather.vv */, RISCV::VRGATHER_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6115 /* vrgather.vx */, RISCV::VRGATHER_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6127 /* vrsub.vi */, RISCV::VRSUB_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 6136 /* vrsub.vx */, RISCV::VRSUB_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6145 /* vs1r.v */, RISCV::VS1R_V, Convert__RVVRegOpOperand1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 6152 /* vsadd.vi */, RISCV::VSADD_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 6161 /* vsadd.vv */, RISCV::VSADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6170 /* vsadd.vx */, RISCV::VSADD_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6179 /* vsaddu.vi */, RISCV::VSADDU_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 6189 /* vsaddu.vv */, RISCV::VSADDU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6199 /* vsaddu.vx */, RISCV::VSADDU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6209 /* vsb.v */, RISCV::VSB_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6215 /* vsbc.vvm */, RISCV::VSBC_VVM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_VMV0 }, },
  { 6224 /* vsbc.vxm */, RISCV::VSBC_VXM, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_VMV0 }, },
  { 6233 /* vse.v */, RISCV::VSE_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6239 /* vsetvl */, RISCV::VSETVL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 6246 /* vsetvli */, RISCV::VSETVLI, Convert__Reg1_0__Reg1_1__VTypeI1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_GPR, MCK_VTypeI }, },
  { 6254 /* vsh.v */, RISCV::VSH_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6260 /* vslide1down.vx */, RISCV::VSLIDE1DOWN_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6275 /* vslide1up.vx */, RISCV::VSLIDE1UP_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6288 /* vslidedown.vi */, RISCV::VSLIDEDOWN_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6302 /* vslidedown.vx */, RISCV::VSLIDEDOWN_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6316 /* vslideup.vi */, RISCV::VSLIDEUP_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6328 /* vslideup.vx */, RISCV::VSLIDEUP_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6340 /* vsll.vi */, RISCV::VSLL_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6348 /* vsll.vv */, RISCV::VSLL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6356 /* vsll.vx */, RISCV::VSLL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6364 /* vsmul.vv */, RISCV::VSMUL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6373 /* vsmul.vx */, RISCV::VSMUL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6382 /* vsra.vi */, RISCV::VSRA_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6390 /* vsra.vv */, RISCV::VSRA_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6398 /* vsra.vx */, RISCV::VSRA_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6406 /* vsrl.vi */, RISCV::VSRL_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6414 /* vsrl.vv */, RISCV::VSRL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6422 /* vsrl.vx */, RISCV::VSRL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6430 /* vssb.v */, RISCV::VSSB_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6437 /* vsse.v */, RISCV::VSSE_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6444 /* vssh.v */, RISCV::VSSH_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6451 /* vssra.vi */, RISCV::VSSRA_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6460 /* vssra.vv */, RISCV::VSSRA_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6469 /* vssra.vx */, RISCV::VSSRA_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6478 /* vssrl.vi */, RISCV::VSSRL_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 6487 /* vssrl.vv */, RISCV::VSSRL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6496 /* vssrl.vx */, RISCV::VSSRL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6505 /* vssub.vv */, RISCV::VSSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6514 /* vssub.vx */, RISCV::VSSUB_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6523 /* vssubu.vv */, RISCV::VSSUBU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6533 /* vssubu.vx */, RISCV::VSSUBU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6543 /* vssw.v */, RISCV::VSSW_V, Convert__RVVRegOpOperand1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6550 /* vsub.vv */, RISCV::VSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6558 /* vsub.vx */, RISCV::VSUB_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6566 /* vsuxb.v */, RISCV::VSUXB_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6574 /* vsuxe.v */, RISCV::VSUXE_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6582 /* vsuxh.v */, RISCV::VSUXH_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6590 /* vsuxw.v */, RISCV::VSUXW_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6598 /* vsw.v */, RISCV::VSW_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6604 /* vsxb.v */, RISCV::VSXB_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6611 /* vsxe.v */, RISCV::VSXE_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6618 /* vsxh.v */, RISCV::VSXH_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6625 /* vsxw.v */, RISCV::VSXW_V, Convert__RVVRegOpOperand1_0__Reg1_2__RVVRegOpOperand1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6632 /* vwadd.vv */, RISCV::VWADD_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6641 /* vwadd.vx */, RISCV::VWADD_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6650 /* vwadd.wv */, RISCV::VWADD_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6659 /* vwadd.wx */, RISCV::VWADD_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6668 /* vwaddu.vv */, RISCV::VWADDU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6678 /* vwaddu.vx */, RISCV::VWADDU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6688 /* vwaddu.wv */, RISCV::VWADDU_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6698 /* vwaddu.wx */, RISCV::VWADDU_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6708 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6720 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6733 /* vwmacc.vv */, RISCV::VWMACC_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6743 /* vwmacc.vx */, RISCV::VWMACC_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6753 /* vwmaccsu.vv */, RISCV::VWMACCSU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6765 /* vwmaccsu.vx */, RISCV::VWMACCSU_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6777 /* vwmaccu.vv */, RISCV::VWMACCU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6788 /* vwmaccu.vx */, RISCV::VWMACCU_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6799 /* vwmaccus.vx */, RISCV::VWMACCUS_VX, Convert__RVVRegOpOperand1_0__Reg1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6811 /* vwmul.vv */, RISCV::VWMUL_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6820 /* vwmul.vx */, RISCV::VWMUL_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6829 /* vwmulsu.vv */, RISCV::VWMULSU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6840 /* vwmulsu.vx */, RISCV::VWMULSU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6851 /* vwmulu.vv */, RISCV::VWMULU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6861 /* vwmulu.vx */, RISCV::VWMULU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6871 /* vwredsum.vs */, RISCV::VWREDSUM_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6883 /* vwredsumu.vs */, RISCV::VWREDSUMU_VS, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6896 /* vwsub.vv */, RISCV::VWSUB_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6905 /* vwsub.vx */, RISCV::VWSUB_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6914 /* vwsub.wv */, RISCV::VWSUB_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6923 /* vwsub.wx */, RISCV::VWSUB_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6932 /* vwsubu.vv */, RISCV::VWSUBU_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6942 /* vwsubu.vx */, RISCV::VWSUBU_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6952 /* vwsubu.wv */, RISCV::VWSUBU_WV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6962 /* vwsubu.wx */, RISCV::VWSUBU_WX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6972 /* vxor.vi */, RISCV::VXOR_VI, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 6980 /* vxor.vv */, RISCV::VXOR_VV, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__RVVRegOpOperand1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_RVVMaskRegOpOperand }, },
  { 6988 /* vxor.vx */, RISCV::VXOR_VX, Convert__RVVRegOpOperand1_0__RVVRegOpOperand1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_RVVRegOpOperand, MCK_RVVRegOpOperand, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6996 /* wfi */, RISCV::WFI, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 7000 /* xnor */, RISCV::XNOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 7005 /* xor */, RISCV::XOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 7005 /* xor */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 7009 /* xori */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 7014 /* zext.b */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__imm_95_255, AMFBS_HasStdExtZbb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7014 /* zext.b */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__imm_95_255, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7021 /* zext.h */, RISCV::PACK, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZbb_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7021 /* zext.h */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7028 /* zext.w */, RISCV::PACK, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7035 /* zip */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7035 /* zip */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7039 /* zip.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7045 /* zip.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7051 /* zip.n */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7057 /* zip.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7063 /* zip16 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7069 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7069 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7074 /* zip2.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7081 /* zip2.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7088 /* zip2.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7095 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7095 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7100 /* zip4.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 7107 /* zip4.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7114 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 7114 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 7119 /* zip8.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned RISCVAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((RISCVOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  SmallBitVector OptionalOperandsMask(6);
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) << 
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    OptionalOperandsMask.reset(0, 6);
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        OptionalOperandsMask.set(FormalIdx, 6);
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        OptionalOperandsMask.set(FormalIdx);
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                       for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                         if (NewMissingFeatures[I])
                           dbgs() << ' ' << I;
                       dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands,
                    OptionalOperandsMask);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[809] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* add */, 8 /* 3 */, MCK_TPRelAddSymbol, AMFBS_None },
  { 40 /* amoadd.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 49 /* amoadd.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 61 /* amoadd.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 75 /* amoadd.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 87 /* amoadd.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 96 /* amoadd.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 108 /* amoadd.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 122 /* amoadd.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 134 /* amoand.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 143 /* amoand.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 155 /* amoand.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 169 /* amoand.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 181 /* amoand.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 190 /* amoand.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 202 /* amoand.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 216 /* amoand.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 228 /* amomax.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 237 /* amomax.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 249 /* amomax.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 263 /* amomax.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 275 /* amomax.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 284 /* amomax.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 296 /* amomax.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 310 /* amomax.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 322 /* amomaxu.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 332 /* amomaxu.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 345 /* amomaxu.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 360 /* amomaxu.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 373 /* amomaxu.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 383 /* amomaxu.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 396 /* amomaxu.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 411 /* amomaxu.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 424 /* amomin.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 433 /* amomin.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 445 /* amomin.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 459 /* amomin.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 471 /* amomin.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 480 /* amomin.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 492 /* amomin.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 506 /* amomin.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 518 /* amominu.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 528 /* amominu.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 541 /* amominu.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 556 /* amominu.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 569 /* amominu.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 579 /* amominu.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 592 /* amominu.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 607 /* amominu.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 620 /* amoor.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 628 /* amoor.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 639 /* amoor.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 652 /* amoor.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 663 /* amoor.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 671 /* amoor.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 682 /* amoor.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 695 /* amoor.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 706 /* amoswap.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 716 /* amoswap.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 729 /* amoswap.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 744 /* amoswap.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 757 /* amoswap.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 767 /* amoswap.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 780 /* amoswap.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 795 /* amoswap.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 808 /* amoxor.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 817 /* amoxor.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 829 /* amoxor.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 843 /* amoxor.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 855 /* amoxor.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 864 /* amoxor.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 876 /* amoxor.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 890 /* amoxor.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 1386 /* call */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 1386 /* call */, 2 /* 1 */, MCK_CallSymbol, AMFBS_None },
  { 1521 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1521 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1526 /* csrci */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1532 /* csrr */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1537 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1537 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1543 /* csrrci */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1550 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1550 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1556 /* csrrsi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1563 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1563 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1569 /* csrrwi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1576 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1576 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1581 /* csrsi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1587 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1587 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1592 /* csrwi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1935 /* fld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 1963 /* flw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2165 /* fsd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 2313 /* fsw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2365 /* j */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2367 /* jal */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2367 /* jal */, 2 /* 1 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2379 /* jump */, 1 /* 0 */, MCK_PseudoJumpSymbol, AMFBS_None },
  { 2384 /* la */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2387 /* la.tls.gd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2397 /* la.tls.ie */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2407 /* lb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2410 /* lbu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2414 /* ld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 2417 /* lh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2420 /* lhu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2427 /* lla */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2431 /* lr.d */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2436 /* lr.d.aq */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2444 /* lr.d.aqrl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2454 /* lr.d.rl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2462 /* lr.w */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2467 /* lr.w.aq */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2475 /* lr.w.aqrl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2485 /* lr.w.rl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2497 /* lw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2500 /* lwu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 2996 /* sb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3103 /* sc.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3108 /* sc.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3116 /* sc.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3126 /* sc.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3134 /* sc.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3139 /* sc.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3147 /* sc.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3157 /* sc.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3165 /* sd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3219 /* sh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3404 /* sw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3407 /* tail */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 3567 /* vaadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3567 /* vaadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3576 /* vaadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3576 /* vaadd.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3585 /* vaaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3585 /* vaaddu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3595 /* vaaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3595 /* vaaddu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3605 /* vadc.vim */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3614 /* vadc.vvm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3623 /* vadc.vxm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3632 /* vadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3632 /* vadd.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3640 /* vadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3640 /* vadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3648 /* vadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3648 /* vadd.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3656 /* vand.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3656 /* vand.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3664 /* vand.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3664 /* vand.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3672 /* vand.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3672 /* vand.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3680 /* vasub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3680 /* vasub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3689 /* vasub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3689 /* vasub.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3698 /* vasubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3698 /* vasubu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3708 /* vasubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3708 /* vasubu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3718 /* vcompress.vm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3731 /* vdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3731 /* vdiv.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3739 /* vdiv.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3739 /* vdiv.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3747 /* vdivu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3747 /* vdivu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3756 /* vdivu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3756 /* vdivu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3765 /* vfadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3765 /* vfadd.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3774 /* vfadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3774 /* vfadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3783 /* vfclass.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3783 /* vfclass.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3793 /* vfcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3793 /* vfcvt.f.x.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3805 /* vfcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3805 /* vfcvt.f.xu.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3818 /* vfcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3818 /* vfcvt.x.f.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3830 /* vfcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3830 /* vfcvt.xu.f.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3843 /* vfdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3843 /* vfdiv.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3852 /* vfdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3852 /* vfdiv.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3861 /* vfirst.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3861 /* vfirst.m */, 2 /* 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3870 /* vfmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3870 /* vfmacc.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3880 /* vfmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3880 /* vfmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3890 /* vfmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3890 /* vfmadd.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3900 /* vfmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3900 /* vfmadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3910 /* vfmax.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3910 /* vfmax.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3919 /* vfmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3919 /* vfmax.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3928 /* vfmerge.vfm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3940 /* vfmin.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3940 /* vfmin.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3949 /* vfmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3949 /* vfmin.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3958 /* vfmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3958 /* vfmsac.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3968 /* vfmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3968 /* vfmsac.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3978 /* vfmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3978 /* vfmsub.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3988 /* vfmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3988 /* vfmsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 3998 /* vfmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3998 /* vfmul.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4007 /* vfmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4007 /* vfmul.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4016 /* vfmv.f.s */, 2 /* 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4025 /* vfmv.s.f */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4034 /* vfmv.v.f */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4043 /* vfncvt.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4043 /* vfncvt.f.f.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4056 /* vfncvt.f.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4056 /* vfncvt.f.x.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4069 /* vfncvt.f.xu.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4069 /* vfncvt.f.xu.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4083 /* vfncvt.rod.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4083 /* vfncvt.rod.f.f.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4100 /* vfncvt.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4100 /* vfncvt.x.f.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4113 /* vfncvt.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4113 /* vfncvt.xu.f.w */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4127 /* vfnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4127 /* vfnmacc.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4138 /* vfnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4138 /* vfnmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4149 /* vfnmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4149 /* vfnmadd.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4160 /* vfnmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4160 /* vfnmadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4171 /* vfnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4171 /* vfnmsac.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4182 /* vfnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4182 /* vfnmsac.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4193 /* vfnmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4193 /* vfnmsub.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4204 /* vfnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4204 /* vfnmsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4215 /* vfrdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4215 /* vfrdiv.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4225 /* vfredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4225 /* vfredmax.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4237 /* vfredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4237 /* vfredmin.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4249 /* vfredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4249 /* vfredosum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4262 /* vfredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4262 /* vfredsum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4274 /* vfrsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4274 /* vfrsub.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4284 /* vfsgnj.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4284 /* vfsgnj.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4294 /* vfsgnj.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4294 /* vfsgnj.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4304 /* vfsgnjn.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4304 /* vfsgnjn.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4315 /* vfsgnjn.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4315 /* vfsgnjn.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4326 /* vfsgnjx.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4326 /* vfsgnjx.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4337 /* vfsgnjx.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4337 /* vfsgnjx.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4348 /* vfsqrt.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4348 /* vfsqrt.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4357 /* vfsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4357 /* vfsub.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4366 /* vfsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4366 /* vfsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4375 /* vfwadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4375 /* vfwadd.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4385 /* vfwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4385 /* vfwadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4395 /* vfwadd.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4395 /* vfwadd.wf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4405 /* vfwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4405 /* vfwadd.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4415 /* vfwcvt.f.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4415 /* vfwcvt.f.f.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4428 /* vfwcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4428 /* vfwcvt.f.x.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4441 /* vfwcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4441 /* vfwcvt.f.xu.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4455 /* vfwcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4455 /* vfwcvt.x.f.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4468 /* vfwcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4468 /* vfwcvt.xu.f.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4482 /* vfwmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4482 /* vfwmacc.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4493 /* vfwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4493 /* vfwmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4504 /* vfwmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4504 /* vfwmsac.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4515 /* vfwmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4515 /* vfwmsac.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4526 /* vfwmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4526 /* vfwmul.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4536 /* vfwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4536 /* vfwmul.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4546 /* vfwnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4546 /* vfwnmacc.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4558 /* vfwnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4558 /* vfwnmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4570 /* vfwnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4570 /* vfwnmsac.vf */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4582 /* vfwnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4582 /* vfwnmsac.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4594 /* vfwredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4594 /* vfwredosum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4608 /* vfwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4608 /* vfwredsum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4621 /* vfwsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4621 /* vfwsub.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4631 /* vfwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4631 /* vfwsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4641 /* vfwsub.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4641 /* vfwsub.wf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4651 /* vfwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4651 /* vfwsub.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4661 /* vid.v */, 2 /* 1 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4661 /* vid.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4667 /* viota.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4667 /* viota.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4675 /* vl1r.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4682 /* vlb.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4682 /* vlb.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4688 /* vlbff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4688 /* vlbff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4696 /* vlbu.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4696 /* vlbu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4703 /* vlbuff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4703 /* vlbuff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4712 /* vle.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4712 /* vle.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4718 /* vleff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4718 /* vleff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4726 /* vlh.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4726 /* vlh.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4732 /* vlhff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4732 /* vlhff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4740 /* vlhu.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4740 /* vlhu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4747 /* vlhuff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4747 /* vlhuff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4756 /* vlsb.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4756 /* vlsb.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4763 /* vlsbu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4763 /* vlsbu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4771 /* vlse.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4771 /* vlse.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4778 /* vlsh.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4778 /* vlsh.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4785 /* vlshu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4785 /* vlshu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4793 /* vlsw.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4793 /* vlsw.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4800 /* vlswu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4800 /* vlswu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4808 /* vlw.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4808 /* vlw.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4814 /* vlwff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4814 /* vlwff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4822 /* vlwu.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4822 /* vlwu.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4829 /* vlwuff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4829 /* vlwuff.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4838 /* vlxb.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4838 /* vlxb.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4845 /* vlxbu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4845 /* vlxbu.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4853 /* vlxe.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4853 /* vlxe.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4860 /* vlxh.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4860 /* vlxh.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4867 /* vlxhu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4867 /* vlxhu.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4875 /* vlxw.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4875 /* vlxw.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4882 /* vlxwu.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4882 /* vlxwu.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4890 /* vmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4890 /* vmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4899 /* vmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4899 /* vmacc.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4908 /* vmadc.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4917 /* vmadc.vim */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4927 /* vmadc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4936 /* vmadc.vvm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4946 /* vmadc.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4955 /* vmadc.vxm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4965 /* vmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4965 /* vmadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4974 /* vmadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4974 /* vmadd.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4983 /* vmand.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 4992 /* vmandnot.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5004 /* vmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5004 /* vmax.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5012 /* vmax.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5012 /* vmax.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5020 /* vmaxu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5020 /* vmaxu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5029 /* vmaxu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5029 /* vmaxu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5038 /* vmclr.m */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5046 /* vmcpy.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5054 /* vmerge.vim */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5065 /* vmerge.vvm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5076 /* vmerge.vxm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5087 /* vmfeq.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5087 /* vmfeq.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5096 /* vmfeq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5096 /* vmfeq.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5105 /* vmfge.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5105 /* vmfge.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5114 /* vmfge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5114 /* vmfge.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5123 /* vmfgt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5123 /* vmfgt.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5132 /* vmfgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5132 /* vmfgt.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5141 /* vmfle.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5141 /* vmfle.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5150 /* vmfle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5150 /* vmfle.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5159 /* vmflt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5159 /* vmflt.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5168 /* vmflt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5168 /* vmflt.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5177 /* vmfne.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5177 /* vmfne.vf */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5186 /* vmfne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5186 /* vmfne.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5195 /* vmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5195 /* vmin.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5203 /* vmin.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5203 /* vmin.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5211 /* vminu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5211 /* vminu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5220 /* vminu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5220 /* vminu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5229 /* vmnand.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5239 /* vmnor.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5248 /* vmnot.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5256 /* vmor.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5264 /* vmornot.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5275 /* vmsbc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5284 /* vmsbc.vvm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5294 /* vmsbc.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5303 /* vmsbc.vxm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5313 /* vmsbf.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5313 /* vmsbf.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5321 /* vmseq.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5321 /* vmseq.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5330 /* vmseq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5330 /* vmseq.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5339 /* vmseq.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5339 /* vmseq.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5348 /* vmset.m */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5356 /* vmsge.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5356 /* vmsge.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5365 /* vmsge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5365 /* vmsge.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5374 /* vmsgeu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5374 /* vmsgeu.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5384 /* vmsgeu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5384 /* vmsgeu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5394 /* vmsgt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5394 /* vmsgt.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5403 /* vmsgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5403 /* vmsgt.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5412 /* vmsgt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5412 /* vmsgt.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5421 /* vmsgtu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5421 /* vmsgtu.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5431 /* vmsgtu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5431 /* vmsgtu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5441 /* vmsgtu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5441 /* vmsgtu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5451 /* vmsif.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5451 /* vmsif.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5459 /* vmsle.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5459 /* vmsle.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5468 /* vmsle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5468 /* vmsle.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5477 /* vmsle.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5477 /* vmsle.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5486 /* vmsleu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5486 /* vmsleu.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5496 /* vmsleu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5496 /* vmsleu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5506 /* vmsleu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5506 /* vmsleu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5516 /* vmslt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5516 /* vmslt.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5525 /* vmslt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5525 /* vmslt.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5534 /* vmslt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5534 /* vmslt.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5543 /* vmsltu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5543 /* vmsltu.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5553 /* vmsltu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5553 /* vmsltu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5563 /* vmsltu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5563 /* vmsltu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5573 /* vmsne.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5573 /* vmsne.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5582 /* vmsne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5582 /* vmsne.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5591 /* vmsne.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5591 /* vmsne.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5600 /* vmsof.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5600 /* vmsof.m */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5608 /* vmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5608 /* vmul.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5616 /* vmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5616 /* vmul.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5624 /* vmulh.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5624 /* vmulh.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5633 /* vmulh.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5633 /* vmulh.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5642 /* vmulhsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5642 /* vmulhsu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5653 /* vmulhsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5653 /* vmulhsu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5664 /* vmulhu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5664 /* vmulhu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5674 /* vmulhu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5674 /* vmulhu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5684 /* vmv.s.x */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5692 /* vmv.v.i */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5700 /* vmv.v.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5708 /* vmv.v.x */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5716 /* vmv.x.s */, 2 /* 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5724 /* vmv1r.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5732 /* vmv2r.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5740 /* vmv4r.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5748 /* vmv8r.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5756 /* vmxnor.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5766 /* vmxor.mm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5775 /* vnclip.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5775 /* vnclip.wi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5785 /* vnclip.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5785 /* vnclip.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5795 /* vnclip.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5795 /* vnclip.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5805 /* vnclipu.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5805 /* vnclipu.wi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5816 /* vnclipu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5816 /* vnclipu.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5827 /* vnclipu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5827 /* vnclipu.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5838 /* vnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5838 /* vnmsac.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5848 /* vnmsac.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5848 /* vnmsac.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5858 /* vnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5858 /* vnmsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5868 /* vnmsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5868 /* vnmsub.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5878 /* vnot.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5878 /* vnot.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5885 /* vnsra.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5885 /* vnsra.wi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5894 /* vnsra.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5894 /* vnsra.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5903 /* vnsra.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5903 /* vnsra.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5912 /* vnsrl.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5912 /* vnsrl.wi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5921 /* vnsrl.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5921 /* vnsrl.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5930 /* vnsrl.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5930 /* vnsrl.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5939 /* vor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5939 /* vor.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5946 /* vor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5946 /* vor.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5953 /* vor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5953 /* vor.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5960 /* vpopc.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5960 /* vpopc.m */, 2 /* 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5968 /* vredand.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5968 /* vredand.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5979 /* vredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5979 /* vredmax.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 5990 /* vredmaxu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5990 /* vredmaxu.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6002 /* vredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6002 /* vredmin.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6013 /* vredminu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6013 /* vredminu.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6025 /* vredor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6025 /* vredor.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6035 /* vredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6035 /* vredsum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6046 /* vredxor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6046 /* vredxor.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6057 /* vrem.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6057 /* vrem.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6065 /* vrem.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6065 /* vrem.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6073 /* vremu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6073 /* vremu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6082 /* vremu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6082 /* vremu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6091 /* vrgather.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6091 /* vrgather.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6103 /* vrgather.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6103 /* vrgather.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6115 /* vrgather.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6115 /* vrgather.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6127 /* vrsub.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6127 /* vrsub.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6136 /* vrsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6136 /* vrsub.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6145 /* vs1r.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6152 /* vsadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6152 /* vsadd.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6161 /* vsadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6161 /* vsadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6170 /* vsadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6170 /* vsadd.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6179 /* vsaddu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6179 /* vsaddu.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6189 /* vsaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6189 /* vsaddu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6199 /* vsaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6199 /* vsaddu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6209 /* vsb.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6209 /* vsb.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6215 /* vsbc.vvm */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6224 /* vsbc.vxm */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6233 /* vse.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6233 /* vse.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6246 /* vsetvli */, 4 /* 2 */, MCK_VTypeI, AMFBS_HasStdExtV },
  { 6254 /* vsh.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6254 /* vsh.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6260 /* vslide1down.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6260 /* vslide1down.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6275 /* vslide1up.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6275 /* vslide1up.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6288 /* vslidedown.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6288 /* vslidedown.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6302 /* vslidedown.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6302 /* vslidedown.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6316 /* vslideup.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6316 /* vslideup.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6328 /* vslideup.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6328 /* vslideup.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6340 /* vsll.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6340 /* vsll.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6348 /* vsll.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6348 /* vsll.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6356 /* vsll.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6356 /* vsll.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6364 /* vsmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6364 /* vsmul.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6373 /* vsmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6373 /* vsmul.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6382 /* vsra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6382 /* vsra.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6390 /* vsra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6390 /* vsra.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6398 /* vsra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6398 /* vsra.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6406 /* vsrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6406 /* vsrl.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6414 /* vsrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6414 /* vsrl.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6422 /* vsrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6422 /* vsrl.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6430 /* vssb.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6430 /* vssb.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6437 /* vsse.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6437 /* vsse.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6444 /* vssh.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6444 /* vssh.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6451 /* vssra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6451 /* vssra.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6460 /* vssra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6460 /* vssra.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6469 /* vssra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6469 /* vssra.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6478 /* vssrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6478 /* vssrl.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6487 /* vssrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6487 /* vssrl.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6496 /* vssrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6496 /* vssrl.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6505 /* vssub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6505 /* vssub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6514 /* vssub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6514 /* vssub.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6523 /* vssubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6523 /* vssubu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6533 /* vssubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6533 /* vssubu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6543 /* vssw.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6543 /* vssw.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6550 /* vsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6550 /* vsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6558 /* vsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6558 /* vsub.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6566 /* vsuxb.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6566 /* vsuxb.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6574 /* vsuxe.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6574 /* vsuxe.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6582 /* vsuxh.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6582 /* vsuxh.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6590 /* vsuxw.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6590 /* vsuxw.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6598 /* vsw.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6598 /* vsw.v */, 1 /* 0 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6604 /* vsxb.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6604 /* vsxb.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6611 /* vsxe.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6611 /* vsxe.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6618 /* vsxh.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6618 /* vsxh.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6625 /* vsxw.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6625 /* vsxw.v */, 17 /* 0, 4 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6632 /* vwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6632 /* vwadd.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6641 /* vwadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6641 /* vwadd.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6650 /* vwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6650 /* vwadd.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6659 /* vwadd.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6659 /* vwadd.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6668 /* vwaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6668 /* vwaddu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6678 /* vwaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6678 /* vwaddu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6688 /* vwaddu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6688 /* vwaddu.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6698 /* vwaddu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6698 /* vwaddu.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6708 /* vwcvt.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6708 /* vwcvt.x.x.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6720 /* vwcvtu.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6720 /* vwcvtu.x.x.v */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6733 /* vwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6733 /* vwmacc.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6743 /* vwmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6743 /* vwmacc.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6753 /* vwmaccsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6753 /* vwmaccsu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6765 /* vwmaccsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6765 /* vwmaccsu.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6777 /* vwmaccu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6777 /* vwmaccu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6788 /* vwmaccu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6788 /* vwmaccu.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6799 /* vwmaccus.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6799 /* vwmaccus.vx */, 5 /* 0, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6811 /* vwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6811 /* vwmul.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6820 /* vwmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6820 /* vwmul.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6829 /* vwmulsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6829 /* vwmulsu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6840 /* vwmulsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6840 /* vwmulsu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6851 /* vwmulu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6851 /* vwmulu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6861 /* vwmulu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6861 /* vwmulu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6871 /* vwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6871 /* vwredsum.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6883 /* vwredsumu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6883 /* vwredsumu.vs */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6896 /* vwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6896 /* vwsub.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6905 /* vwsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6905 /* vwsub.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6914 /* vwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6914 /* vwsub.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6923 /* vwsub.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6923 /* vwsub.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6932 /* vwsubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6932 /* vwsubu.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6942 /* vwsubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6942 /* vwsubu.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6952 /* vwsubu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6952 /* vwsubu.wv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6962 /* vwsubu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6962 /* vwsubu.wx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6972 /* vxor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6972 /* vxor.vi */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6980 /* vxor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6980 /* vxor.vv */, 7 /* 0, 1, 2 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
  { 6988 /* vxor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6988 /* vxor.vx */, 3 /* 0, 1 */, MCK_RVVRegOpOperand, AMFBS_HasStdExtV },
};

OperandMatchResultTy RISCVAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_AtomicMemOpOperand:
    return parseAtomicMemOp(Operands);
  case MCK_BareSymbol:
    return parseBareSymbol(Operands);
  case MCK_CSRSystemRegister:
    return parseCSRSystemRegister(Operands);
  case MCK_CallSymbol:
    return parseCallSymbol(Operands);
  case MCK_PseudoJumpSymbol:
    return parsePseudoJumpSymbol(Operands);
  case MCK_SImm21Lsb0JAL:
    return parseJALOffset(Operands);
  case MCK_TPRelAddSymbol:
    return parseOperandWithModifier(Operands);
  case MCK_RVVMaskRegOpOperand:
    return parseMaskReg(Operands);
  case MCK_RVVRegOpOperand:
    return parseRegister(Operands);
  case MCK_VTypeI:
    return parseVTypeI(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy RISCVAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
        continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string RISCVMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for( ; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


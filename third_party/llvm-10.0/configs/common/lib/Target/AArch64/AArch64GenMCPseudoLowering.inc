/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Pseudo-instruction MC lowering Source Fragment                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

bool AArch64AsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
    default: return false;
    case AArch64::LD1B_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1B_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1B_H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1B_H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1B_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1B_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1B_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1B_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1H_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1H_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1H_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1H_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SB_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SB_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SB_H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SB_H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SB_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SB_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SH_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SH_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SH_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SH_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1SW_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1SW_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1W_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1W_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LD1W_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LD1W_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1B: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1B_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1B_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1B_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1B_H: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1B_H_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1B_S: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1B_S_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1H: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1H_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1H_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1H_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1H_S: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1H_S_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SB_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SB_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SB_H: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SB_H_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SB_S: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SB_S_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SH_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SH_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SH_S: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SH_S_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1SW_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1SW_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1W: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1W_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDFF1W_D: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDFF1W_D_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1B_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1B_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1B_H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1B_H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1B_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1B_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1B_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1B_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1H_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1H_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1H_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1H_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SB_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SB_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SB_H_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SB_H_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SB_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SB_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SH_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SH_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SH_S_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SH_S_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1SW_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1SW_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1W_D_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1W_D_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::LDNF1W_IMM: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::LDNF1W_IMM_REAL);
      // Operand: Zt
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm4
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::RDFFR_P: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::RDFFR_P_REAL);
      // Operand: Pd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
    case AArch64::RDFFR_PPz: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(AArch64::RDFFR_PPz_REAL);
      // Operand: Pd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Pg
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      EmitToStreamer(OutStreamer, TmpInst);
      break;
    }
  }
  return true;
}


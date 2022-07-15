/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Combiner                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H
class AArch64GenPostLegalizerCombinerHelperRuleConfig {
  SparseBitVector<> DisabledRules;

public:
  bool parseCommandLineOption();
  bool isRuleDisabled(unsigned ID) const;
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);

};

class AArch64GenPostLegalizerCombinerHelper {
 const AArch64GenPostLegalizerCombinerHelperRuleConfig *RuleConfig;

public:
  template<typename ... Args>AArch64GenPostLegalizerCombinerHelper(const AArch64GenPostLegalizerCombinerHelperRuleConfig &RuleConfig, Args &&... args) : RuleConfig(&RuleConfig) {}

  bool tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const;
};

static Optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 3:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "up", 2) != 0)
        break;
      return 3;	 // "dup"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      return 5;	 // "ext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ev", 2) != 0)
        break;
      return 4;	 // "rev"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rn", 2) != 0)
        break;
      return 8;	 // "trn"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "zp", 2) != 0)
        break;
      return 7;	 // "uzp"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ip", 2) != 0)
        break;
      return 6;	 // "zip"
    }
    break;
  case 15:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extending_loads", 15) != 0)
      break;
    return 1;	 // "extending_loads"
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "erase_undef_store", 17) != 0)
      break;
    return 0;	 // "erase_undef_store"
  case 21:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "sext_already_extended", 21) != 0)
      break;
    return 2;	 // "sext_already_extended"
  }
#endif // ifndef NDEBUG

  return None;
}
static Optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First.hasValue() || !Last.hasValue())
      return None;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{ *First, *Last + 1 }};
  } else if (RangePair.first == "*") {
    return {{ 0, 9 }};
  } else {
    const auto I = getRuleIdxForIdentifier(RangePair.first);
    if (!I.hasValue())
      return None;
    return {{*I, *I + 1}};
  }
  return None;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if(!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if(!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::isRuleDisabled(unsigned RuleID) const {
  return DisabledRules.test(RuleID);
}
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP

std::vector<std::string> AArch64PostLegalizerCombinerHelperOption;
cl::list<std::string> AArch64PostLegalizerCombinerHelperDisableOption(
    "aarch64postlegalizercombinerhelper-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerCombinerHelper pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerCombinerHelperOption.push_back(Str);
    }));
cl::list<std::string> AArch64PostLegalizerCombinerHelperOnlyEnableOption(
    "aarch64postlegalizercombinerhelper-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerCombinerHelper pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerCombinerHelperOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerCombinerHelperOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerCombinerHelperOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

bool AArch64GenPostLegalizerCombinerHelper::tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const {
  MachineBasicBlock *MBB = MI.getParent();
  MachineFunction *MF = MBB->getParent();
  MachineRegisterInfo &MRI = MF->getRegInfo();
  SmallVector<MachineInstr *, 8> MIs = { &MI };

  (void)MBB; (void)MF; (void)MRI; (void)RuleConfig;

  // Match data
  PreferredTuple MatchData1;
  ShuffleVectorPseudo MatchData3;
  ShuffleVectorPseudo MatchData4;
  ShuffleVectorPseudo MatchData5;
  ShuffleVectorPseudo MatchData6;
  ShuffleVectorPseudo MatchData7;
  ShuffleVectorPseudo MatchData8;

  int Partition = -1;
  Partition = -1;
  switch (MIs[0]->getOpcode()) {
  case TargetOpcode::G_STORE: Partition = 0; break;
  case TargetOpcode::G_LOAD: Partition = 1; break;
  case TargetOpcode::G_SEXTLOAD: Partition = 2; break;
  case TargetOpcode::G_ZEXTLOAD: Partition = 3; break;
  case TargetOpcode::G_SEXT_INREG: Partition = 4; break;
  case TargetOpcode::G_SHUFFLE_VECTOR: Partition = 5; break;
  }
  // Default case but without conflicting with potential default case in selection.
  if (Partition == -1) return false;
  if (Partition == 0 /* TargetOpcode::G_STORE */) {
    // Leaf name: erase_undef_store
    // Rule: erase_undef_store
    if (!RuleConfig->isRuleDisabled(0)) {
      if (1
          && [&]() {
           return Helper.matchUndefStore(*MIs[0]); 
          return true;
      }()) {
        return Helper.eraseInst(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 1 /* TargetOpcode::G_LOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData1); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 2 /* TargetOpcode::G_SEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData1); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 3 /* TargetOpcode::G_ZEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData1); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData1); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 4 /* TargetOpcode::G_SEXT_INREG */) {
    // Leaf name: sext_already_extended
    // Rule: sext_already_extended
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchSextAlreadyExtended(*MIs[0]); 
          return true;
      }()) {
        Helper.applySextAlreadyExtended(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 5 /* TargetOpcode::G_SHUFFLE_VECTOR */) {
    // Leaf name: dup
    // Rule: dup
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return matchDup(*MIs[0], MRI, MatchData3); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: rev
    // Rule: rev
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return matchREV(*MIs[0], MRI, MatchData4); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData4); 
        return true;
      }
    }
    // Leaf name: ext
    // Rule: ext
    if (!RuleConfig->isRuleDisabled(5)) {
      if (1
          && [&]() {
           return matchEXT(*MIs[0], MRI, MatchData5); 
          return true;
      }()) {
        applyEXT(*MIs[0], MatchData5); 
        return true;
      }
    }
    // Leaf name: zip
    // Rule: zip
    if (!RuleConfig->isRuleDisabled(6)) {
      if (1
          && [&]() {
           return matchZip(*MIs[0], MRI, MatchData6); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData6); 
        return true;
      }
    }
    // Leaf name: uzp
    // Rule: uzp
    if (!RuleConfig->isRuleDisabled(7)) {
      if (1
          && [&]() {
           return matchUZP(*MIs[0], MRI, MatchData7); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData7); 
        return true;
      }
    }
    // Leaf name: trn
    // Rule: trn
    if (!RuleConfig->isRuleDisabled(8)) {
      if (1
          && [&]() {
           return matchTRN(*MIs[0], MRI, MatchData8); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData8); 
        return true;
      }
    }
    return false;
  }

  return false;
}
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP

#ifdef GET_SysRegsList_DECL
const SysReg *lookupSysRegByEncoding(uint16_t Encoding);
const SysReg *lookupSysRegByAltName(StringRef AltName);
const SysReg *lookupSysRegByName(StringRef Name);
#endif

#ifdef GET_SysRegsList_IMPL
constexpr SysReg SysRegsList[] = {
  { "ustatus", 0x0, "ustatus",  {} , false }, // 0
  { "fflags", 0x1, "fflags",  {} , false }, // 1
  { "frm", 0x2, "frm",  {} , false }, // 2
  { "fcsr", 0x3, "fcsr",  {} , false }, // 3
  { "uie", 0x4, "uie",  {} , false }, // 4
  { "utvec", 0x5, "utvec",  {} , false }, // 5
  { "vstart", 0x8, "vstart",  {} , false }, // 6
  { "vxsat", 0x9, "vxsat",  {} , false }, // 7
  { "vxrm", 0xA, "vxrm",  {} , false }, // 8
  { "uscratch", 0x40, "uscratch",  {} , false }, // 9
  { "uepc", 0x41, "uepc",  {} , false }, // 10
  { "ucause", 0x42, "ucause",  {} , false }, // 11
  { "utval", 0x43, "utval",  {} , false }, // 12
  { "uip", 0x44, "uip",  {} , false }, // 13
  { "sstatus", 0x100, "sstatus",  {} , false }, // 14
  { "sedeleg", 0x102, "sedeleg",  {} , false }, // 15
  { "sideleg", 0x103, "sideleg",  {} , false }, // 16
  { "sie", 0x104, "sie",  {} , false }, // 17
  { "stvec", 0x105, "stvec",  {} , false }, // 18
  { "scounteren", 0x106, "scounteren",  {} , false }, // 19
  { "sscratch", 0x140, "sscratch",  {} , false }, // 20
  { "sepc", 0x141, "sepc",  {} , false }, // 21
  { "scause", 0x142, "scause",  {} , false }, // 22
  { "stval", 0x143, "stval",  {} , false }, // 23
  { "sip", 0x144, "sip",  {} , false }, // 24
  { "satp", 0x180, "satp",  {} , false }, // 25
  { "mstatus", 0x300, "mstatus",  {} , false }, // 26
  { "misa", 0x301, "misa",  {} , false }, // 27
  { "medeleg", 0x302, "medeleg",  {} , false }, // 28
  { "mideleg", 0x303, "mideleg",  {} , false }, // 29
  { "mie", 0x304, "mie",  {} , false }, // 30
  { "mtvec", 0x305, "mtvec",  {} , false }, // 31
  { "mcounteren", 0x306, "mcounteren",  {} , false }, // 32
  { "mcountinhibit", 0x320, "mcountinhibit",  {} , false }, // 33
  { "mhpmevent3", 0x323, "mhpmevent3",  {} , false }, // 34
  { "mhpmevent4", 0x324, "mhpmevent4",  {} , false }, // 35
  { "mhpmevent5", 0x325, "mhpmevent5",  {} , false }, // 36
  { "mhpmevent6", 0x326, "mhpmevent6",  {} , false }, // 37
  { "mhpmevent7", 0x327, "mhpmevent7",  {} , false }, // 38
  { "mhpmevent8", 0x328, "mhpmevent8",  {} , false }, // 39
  { "mhpmevent9", 0x329, "mhpmevent9",  {} , false }, // 40
  { "mhpmevent10", 0x32A, "mhpmevent10",  {} , false }, // 41
  { "mhpmevent11", 0x32B, "mhpmevent11",  {} , false }, // 42
  { "mhpmevent12", 0x32C, "mhpmevent12",  {} , false }, // 43
  { "mhpmevent13", 0x32D, "mhpmevent13",  {} , false }, // 44
  { "mhpmevent14", 0x32E, "mhpmevent14",  {} , false }, // 45
  { "mhpmevent15", 0x32F, "mhpmevent15",  {} , false }, // 46
  { "mhpmevent16", 0x330, "mhpmevent16",  {} , false }, // 47
  { "mhpmevent17", 0x331, "mhpmevent17",  {} , false }, // 48
  { "mhpmevent18", 0x332, "mhpmevent18",  {} , false }, // 49
  { "mhpmevent19", 0x333, "mhpmevent19",  {} , false }, // 50
  { "mhpmevent20", 0x334, "mhpmevent20",  {} , false }, // 51
  { "mhpmevent21", 0x335, "mhpmevent21",  {} , false }, // 52
  { "mhpmevent22", 0x336, "mhpmevent22",  {} , false }, // 53
  { "mhpmevent23", 0x337, "mhpmevent23",  {} , false }, // 54
  { "mhpmevent24", 0x338, "mhpmevent24",  {} , false }, // 55
  { "mhpmevent25", 0x339, "mhpmevent25",  {} , false }, // 56
  { "mhpmevent26", 0x33A, "mhpmevent26",  {} , false }, // 57
  { "mhpmevent27", 0x33B, "mhpmevent27",  {} , false }, // 58
  { "mhpmevent28", 0x33C, "mhpmevent28",  {} , false }, // 59
  { "mhpmevent29", 0x33D, "mhpmevent29",  {} , false }, // 60
  { "mhpmevent30", 0x33E, "mhpmevent30",  {} , false }, // 61
  { "mhpmevent31", 0x33F, "mhpmevent31",  {} , false }, // 62
  { "mscratch", 0x340, "mscratch",  {} , false }, // 63
  { "mepc", 0x341, "mepc",  {} , false }, // 64
  { "mcause", 0x342, "mcause",  {} , false }, // 65
  { "mtval", 0x343, "mtval",  {} , false }, // 66
  { "mip", 0x344, "mip",  {} , false }, // 67
  { "pmpcfg0", 0x3A0, "pmpcfg0",  {} , false }, // 68
  { "pmpcfg1", 0x3A1, "pmpcfg1",  {} , true }, // 69
  { "pmpcfg2", 0x3A2, "pmpcfg2",  {} , false }, // 70
  { "pmpcfg3", 0x3A3, "pmpcfg3",  {} , true }, // 71
  { "pmpaddr0", 0x3B0, "pmpaddr0",  {} , false }, // 72
  { "pmpaddr1", 0x3B1, "pmpaddr1",  {} , false }, // 73
  { "pmpaddr2", 0x3B2, "pmpaddr2",  {} , false }, // 74
  { "pmpaddr3", 0x3B3, "pmpaddr3",  {} , false }, // 75
  { "pmpaddr4", 0x3B4, "pmpaddr4",  {} , false }, // 76
  { "pmpaddr5", 0x3B5, "pmpaddr5",  {} , false }, // 77
  { "pmpaddr6", 0x3B6, "pmpaddr6",  {} , false }, // 78
  { "pmpaddr7", 0x3B7, "pmpaddr7",  {} , false }, // 79
  { "pmpaddr8", 0x3B8, "pmpaddr8",  {} , false }, // 80
  { "pmpaddr9", 0x3B9, "pmpaddr9",  {} , false }, // 81
  { "pmpaddr10", 0x3BA, "pmpaddr10",  {} , false }, // 82
  { "pmpaddr11", 0x3BB, "pmpaddr11",  {} , false }, // 83
  { "pmpaddr12", 0x3BC, "pmpaddr12",  {} , false }, // 84
  { "pmpaddr13", 0x3BD, "pmpaddr13",  {} , false }, // 85
  { "pmpaddr14", 0x3BE, "pmpaddr14",  {} , false }, // 86
  { "pmpaddr15", 0x3BF, "pmpaddr15",  {} , false }, // 87
  { "tselect", 0x7A0, "tselect",  {} , false }, // 88
  { "tdata1", 0x7A1, "tdata1",  {} , false }, // 89
  { "tdata2", 0x7A2, "tdata2",  {} , false }, // 90
  { "tdata3", 0x7A3, "tdata3",  {} , false }, // 91
  { "dcsr", 0x7B0, "dcsr",  {} , false }, // 92
  { "dpc", 0x7B1, "dpc",  {} , false }, // 93
  { "dscratch0", 0x7B2, "dscratch",  {} , false }, // 94
  { "dscratch1", 0x7B3, "dscratch1",  {} , false }, // 95
  { "mcycle", 0xB00, "mcycle",  {} , false }, // 96
  { "minstret", 0xB02, "minstret",  {} , false }, // 97
  { "mhpmcounter3", 0xB03, "mhpmcounter3",  {} , false }, // 98
  { "mhpmcounter4", 0xB04, "mhpmcounter4",  {} , false }, // 99
  { "mhpmcounter5", 0xB05, "mhpmcounter5",  {} , false }, // 100
  { "mhpmcounter6", 0xB06, "mhpmcounter6",  {} , false }, // 101
  { "mhpmcounter7", 0xB07, "mhpmcounter7",  {} , false }, // 102
  { "mhpmcounter8", 0xB08, "mhpmcounter8",  {} , false }, // 103
  { "mhpmcounter9", 0xB09, "mhpmcounter9",  {} , false }, // 104
  { "mhpmcounter10", 0xB0A, "mhpmcounter10",  {} , false }, // 105
  { "mhpmcounter11", 0xB0B, "mhpmcounter11",  {} , false }, // 106
  { "mhpmcounter12", 0xB0C, "mhpmcounter12",  {} , false }, // 107
  { "mhpmcounter13", 0xB0D, "mhpmcounter13",  {} , false }, // 108
  { "mhpmcounter14", 0xB0E, "mhpmcounter14",  {} , false }, // 109
  { "mhpmcounter15", 0xB0F, "mhpmcounter15",  {} , false }, // 110
  { "mhpmcounter16", 0xB10, "mhpmcounter16",  {} , false }, // 111
  { "mhpmcounter17", 0xB11, "mhpmcounter17",  {} , false }, // 112
  { "mhpmcounter18", 0xB12, "mhpmcounter18",  {} , false }, // 113
  { "mhpmcounter19", 0xB13, "mhpmcounter19",  {} , false }, // 114
  { "mhpmcounter20", 0xB14, "mhpmcounter20",  {} , false }, // 115
  { "mhpmcounter21", 0xB15, "mhpmcounter21",  {} , false }, // 116
  { "mhpmcounter22", 0xB16, "mhpmcounter22",  {} , false }, // 117
  { "mhpmcounter23", 0xB17, "mhpmcounter23",  {} , false }, // 118
  { "mhpmcounter24", 0xB18, "mhpmcounter24",  {} , false }, // 119
  { "mhpmcounter25", 0xB19, "mhpmcounter25",  {} , false }, // 120
  { "mhpmcounter26", 0xB1A, "mhpmcounter26",  {} , false }, // 121
  { "mhpmcounter27", 0xB1B, "mhpmcounter27",  {} , false }, // 122
  { "mhpmcounter28", 0xB1C, "mhpmcounter28",  {} , false }, // 123
  { "mhpmcounter29", 0xB1D, "mhpmcounter29",  {} , false }, // 124
  { "mhpmcounter30", 0xB1E, "mhpmcounter30",  {} , false }, // 125
  { "mhpmcounter31", 0xB1F, "mhpmcounter31",  {} , false }, // 126
  { "mcycleh", 0xB80, "mcycleh",  {} , true }, // 127
  { "minstreth", 0xB82, "minstreth",  {} , true }, // 128
  { "mhpmcounter3h", 0xB83, "mhpmcounter3h",  {} , true }, // 129
  { "mhpmcounter4h", 0xB84, "mhpmcounter4h",  {} , true }, // 130
  { "mhpmcounter5h", 0xB85, "mhpmcounter5h",  {} , true }, // 131
  { "mhpmcounter6h", 0xB86, "mhpmcounter6h",  {} , true }, // 132
  { "mhpmcounter7h", 0xB87, "mhpmcounter7h",  {} , true }, // 133
  { "mhpmcounter8h", 0xB88, "mhpmcounter8h",  {} , true }, // 134
  { "mhpmcounter9h", 0xB89, "mhpmcounter9h",  {} , true }, // 135
  { "mhpmcounter10h", 0xB8A, "mhpmcounter10h",  {} , true }, // 136
  { "mhpmcounter11h", 0xB8B, "mhpmcounter11h",  {} , true }, // 137
  { "mhpmcounter12h", 0xB8C, "mhpmcounter12h",  {} , true }, // 138
  { "mhpmcounter13h", 0xB8D, "mhpmcounter13h",  {} , true }, // 139
  { "mhpmcounter14h", 0xB8E, "mhpmcounter14h",  {} , true }, // 140
  { "mhpmcounter15h", 0xB8F, "mhpmcounter15h",  {} , true }, // 141
  { "mhpmcounter16h", 0xB90, "mhpmcounter16h",  {} , true }, // 142
  { "mhpmcounter17h", 0xB91, "mhpmcounter17h",  {} , true }, // 143
  { "mhpmcounter18h", 0xB92, "mhpmcounter18h",  {} , true }, // 144
  { "mhpmcounter19h", 0xB93, "mhpmcounter19h",  {} , true }, // 145
  { "mhpmcounter20h", 0xB94, "mhpmcounter20h",  {} , true }, // 146
  { "mhpmcounter21h", 0xB95, "mhpmcounter21h",  {} , true }, // 147
  { "mhpmcounter22h", 0xB96, "mhpmcounter22h",  {} , true }, // 148
  { "mhpmcounter23h", 0xB97, "mhpmcounter23h",  {} , true }, // 149
  { "mhpmcounter24h", 0xB98, "mhpmcounter24h",  {} , true }, // 150
  { "mhpmcounter25h", 0xB99, "mhpmcounter25h",  {} , true }, // 151
  { "mhpmcounter26h", 0xB9A, "mhpmcounter26h",  {} , true }, // 152
  { "mhpmcounter27h", 0xB9B, "mhpmcounter27h",  {} , true }, // 153
  { "mhpmcounter28h", 0xB9C, "mhpmcounter28h",  {} , true }, // 154
  { "mhpmcounter29h", 0xB9D, "mhpmcounter29h",  {} , true }, // 155
  { "mhpmcounter30h", 0xB9E, "mhpmcounter30h",  {} , true }, // 156
  { "mhpmcounter31h", 0xB9F, "mhpmcounter31h",  {} , true }, // 157
  { "cycle", 0xC00, "cycle",  {} , false }, // 158
  { "time", 0xC01, "time",  {} , false }, // 159
  { "instret", 0xC02, "instret",  {} , false }, // 160
  { "hpmcounter3", 0xC03, "hpmcounter3",  {} , false }, // 161
  { "hpmcounter4", 0xC04, "hpmcounter4",  {} , false }, // 162
  { "hpmcounter5", 0xC05, "hpmcounter5",  {} , false }, // 163
  { "hpmcounter6", 0xC06, "hpmcounter6",  {} , false }, // 164
  { "hpmcounter7", 0xC07, "hpmcounter7",  {} , false }, // 165
  { "hpmcounter8", 0xC08, "hpmcounter8",  {} , false }, // 166
  { "hpmcounter9", 0xC09, "hpmcounter9",  {} , false }, // 167
  { "hpmcounter10", 0xC0A, "hpmcounter10",  {} , false }, // 168
  { "hpmcounter11", 0xC0B, "hpmcounter11",  {} , false }, // 169
  { "hpmcounter12", 0xC0C, "hpmcounter12",  {} , false }, // 170
  { "hpmcounter13", 0xC0D, "hpmcounter13",  {} , false }, // 171
  { "hpmcounter14", 0xC0E, "hpmcounter14",  {} , false }, // 172
  { "hpmcounter15", 0xC0F, "hpmcounter15",  {} , false }, // 173
  { "hpmcounter16", 0xC10, "hpmcounter16",  {} , false }, // 174
  { "hpmcounter17", 0xC11, "hpmcounter17",  {} , false }, // 175
  { "hpmcounter18", 0xC12, "hpmcounter18",  {} , false }, // 176
  { "hpmcounter19", 0xC13, "hpmcounter19",  {} , false }, // 177
  { "hpmcounter20", 0xC14, "hpmcounter20",  {} , false }, // 178
  { "hpmcounter21", 0xC15, "hpmcounter21",  {} , false }, // 179
  { "hpmcounter22", 0xC16, "hpmcounter22",  {} , false }, // 180
  { "hpmcounter23", 0xC17, "hpmcounter23",  {} , false }, // 181
  { "hpmcounter24", 0xC18, "hpmcounter24",  {} , false }, // 182
  { "hpmcounter25", 0xC19, "hpmcounter25",  {} , false }, // 183
  { "hpmcounter26", 0xC1A, "hpmcounter26",  {} , false }, // 184
  { "hpmcounter27", 0xC1B, "hpmcounter27",  {} , false }, // 185
  { "hpmcounter28", 0xC1C, "hpmcounter28",  {} , false }, // 186
  { "hpmcounter29", 0xC1D, "hpmcounter29",  {} , false }, // 187
  { "hpmcounter30", 0xC1E, "hpmcounter30",  {} , false }, // 188
  { "hpmcounter31", 0xC1F, "hpmcounter31",  {} , false }, // 189
  { "vl", 0xC20, "vl",  {} , false }, // 190
  { "vtype", 0xC21, "vtype",  {} , false }, // 191
  { "vlenb", 0xC22, "vlenb",  {} , false }, // 192
  { "cycleh", 0xC80, "cycleh",  {} , true }, // 193
  { "timeh", 0xC81, "timeh",  {} , true }, // 194
  { "instreth", 0xC82, "instreth",  {} , true }, // 195
  { "hpmcounter3h", 0xC83, "hpmcounter3h",  {} , true }, // 196
  { "hpmcounter4h", 0xC84, "hpmcounter4h",  {} , true }, // 197
  { "hpmcounter5h", 0xC85, "hpmcounter5h",  {} , true }, // 198
  { "hpmcounter6h", 0xC86, "hpmcounter6h",  {} , true }, // 199
  { "hpmcounter7h", 0xC87, "hpmcounter7h",  {} , true }, // 200
  { "hpmcounter8h", 0xC88, "hpmcounter8h",  {} , true }, // 201
  { "hpmcounter9h", 0xC89, "hpmcounter9h",  {} , true }, // 202
  { "hpmcounter10h", 0xC8A, "hpmcounter10h",  {} , true }, // 203
  { "hpmcounter11h", 0xC8B, "hpmcounter11h",  {} , true }, // 204
  { "hpmcounter12h", 0xC8C, "hpmcounter12h",  {} , true }, // 205
  { "hpmcounter13h", 0xC8D, "hpmcounter13h",  {} , true }, // 206
  { "hpmcounter14h", 0xC8E, "hpmcounter14h",  {} , true }, // 207
  { "hpmcounter15h", 0xC8F, "hpmcounter15h",  {} , true }, // 208
  { "hpmcounter16h", 0xC90, "hpmcounter16h",  {} , true }, // 209
  { "hpmcounter17h", 0xC91, "hpmcounter17h",  {} , true }, // 210
  { "hpmcounter18h", 0xC92, "hpmcounter18h",  {} , true }, // 211
  { "hpmcounter19h", 0xC93, "hpmcounter19h",  {} , true }, // 212
  { "hpmcounter20h", 0xC94, "hpmcounter20h",  {} , true }, // 213
  { "hpmcounter21h", 0xC95, "hpmcounter21h",  {} , true }, // 214
  { "hpmcounter22h", 0xC96, "hpmcounter22h",  {} , true }, // 215
  { "hpmcounter23h", 0xC97, "hpmcounter23h",  {} , true }, // 216
  { "hpmcounter24h", 0xC98, "hpmcounter24h",  {} , true }, // 217
  { "hpmcounter25h", 0xC99, "hpmcounter25h",  {} , true }, // 218
  { "hpmcounter26h", 0xC9A, "hpmcounter26h",  {} , true }, // 219
  { "hpmcounter27h", 0xC9B, "hpmcounter27h",  {} , true }, // 220
  { "hpmcounter28h", 0xC9C, "hpmcounter28h",  {} , true }, // 221
  { "hpmcounter29h", 0xC9D, "hpmcounter29h",  {} , true }, // 222
  { "hpmcounter30h", 0xC9E, "hpmcounter30h",  {} , true }, // 223
  { "hpmcounter31h", 0xC9F, "hpmcounter31h",  {} , true }, // 224
  { "mvendorid", 0xF11, "mvendorid",  {} , false }, // 225
  { "marchid", 0xF12, "marchid",  {} , false }, // 226
  { "mimpid", 0xF13, "mimpid",  {} , false }, // 227
  { "mhartid", 0xF14, "mhartid",  {} , false }, // 228
 };

const SysReg *lookupSysRegByEncoding(uint16_t Encoding) {
  struct KeyType {
    uint16_t Encoding;
  };
  KeyType Key = { Encoding };
  auto Table = makeArrayRef(SysRegsList);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const SysReg &LHS, const KeyType &RHS) {
      if (LHS.Encoding < RHS.Encoding)
        return true;
      if (LHS.Encoding > RHS.Encoding)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Encoding != Idx->Encoding)
    return nullptr;
  return &*Idx;
}

const SysReg *lookupSysRegByAltName(StringRef AltName) {
  struct IndexType {
    const char * AltName;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "CYCLE", 158 },
    { "CYCLEH", 193 },
    { "DCSR", 92 },
    { "DPC", 93 },
    { "DSCRATCH", 94 },
    { "DSCRATCH1", 95 },
    { "FCSR", 3 },
    { "FFLAGS", 1 },
    { "FRM", 2 },
    { "HPMCOUNTER10", 168 },
    { "HPMCOUNTER10H", 203 },
    { "HPMCOUNTER11", 169 },
    { "HPMCOUNTER11H", 204 },
    { "HPMCOUNTER12", 170 },
    { "HPMCOUNTER12H", 205 },
    { "HPMCOUNTER13", 171 },
    { "HPMCOUNTER13H", 206 },
    { "HPMCOUNTER14", 172 },
    { "HPMCOUNTER14H", 207 },
    { "HPMCOUNTER15", 173 },
    { "HPMCOUNTER15H", 208 },
    { "HPMCOUNTER16", 174 },
    { "HPMCOUNTER16H", 209 },
    { "HPMCOUNTER17", 175 },
    { "HPMCOUNTER17H", 210 },
    { "HPMCOUNTER18", 176 },
    { "HPMCOUNTER18H", 211 },
    { "HPMCOUNTER19", 177 },
    { "HPMCOUNTER19H", 212 },
    { "HPMCOUNTER20", 178 },
    { "HPMCOUNTER20H", 213 },
    { "HPMCOUNTER21", 179 },
    { "HPMCOUNTER21H", 214 },
    { "HPMCOUNTER22", 180 },
    { "HPMCOUNTER22H", 215 },
    { "HPMCOUNTER23", 181 },
    { "HPMCOUNTER23H", 216 },
    { "HPMCOUNTER24", 182 },
    { "HPMCOUNTER24H", 217 },
    { "HPMCOUNTER25", 183 },
    { "HPMCOUNTER25H", 218 },
    { "HPMCOUNTER26", 184 },
    { "HPMCOUNTER26H", 219 },
    { "HPMCOUNTER27", 185 },
    { "HPMCOUNTER27H", 220 },
    { "HPMCOUNTER28", 186 },
    { "HPMCOUNTER28H", 221 },
    { "HPMCOUNTER29", 187 },
    { "HPMCOUNTER29H", 222 },
    { "HPMCOUNTER3", 161 },
    { "HPMCOUNTER30", 188 },
    { "HPMCOUNTER30H", 223 },
    { "HPMCOUNTER31", 189 },
    { "HPMCOUNTER31H", 224 },
    { "HPMCOUNTER3H", 196 },
    { "HPMCOUNTER4", 162 },
    { "HPMCOUNTER4H", 197 },
    { "HPMCOUNTER5", 163 },
    { "HPMCOUNTER5H", 198 },
    { "HPMCOUNTER6", 164 },
    { "HPMCOUNTER6H", 199 },
    { "HPMCOUNTER7", 165 },
    { "HPMCOUNTER7H", 200 },
    { "HPMCOUNTER8", 166 },
    { "HPMCOUNTER8H", 201 },
    { "HPMCOUNTER9", 167 },
    { "HPMCOUNTER9H", 202 },
    { "INSTRET", 160 },
    { "INSTRETH", 195 },
    { "MARCHID", 226 },
    { "MCAUSE", 65 },
    { "MCOUNTEREN", 32 },
    { "MCOUNTINHIBIT", 33 },
    { "MCYCLE", 96 },
    { "MCYCLEH", 127 },
    { "MEDELEG", 28 },
    { "MEPC", 64 },
    { "MHARTID", 228 },
    { "MHPMCOUNTER10", 105 },
    { "MHPMCOUNTER10H", 136 },
    { "MHPMCOUNTER11", 106 },
    { "MHPMCOUNTER11H", 137 },
    { "MHPMCOUNTER12", 107 },
    { "MHPMCOUNTER12H", 138 },
    { "MHPMCOUNTER13", 108 },
    { "MHPMCOUNTER13H", 139 },
    { "MHPMCOUNTER14", 109 },
    { "MHPMCOUNTER14H", 140 },
    { "MHPMCOUNTER15", 110 },
    { "MHPMCOUNTER15H", 141 },
    { "MHPMCOUNTER16", 111 },
    { "MHPMCOUNTER16H", 142 },
    { "MHPMCOUNTER17", 112 },
    { "MHPMCOUNTER17H", 143 },
    { "MHPMCOUNTER18", 113 },
    { "MHPMCOUNTER18H", 144 },
    { "MHPMCOUNTER19", 114 },
    { "MHPMCOUNTER19H", 145 },
    { "MHPMCOUNTER20", 115 },
    { "MHPMCOUNTER20H", 146 },
    { "MHPMCOUNTER21", 116 },
    { "MHPMCOUNTER21H", 147 },
    { "MHPMCOUNTER22", 117 },
    { "MHPMCOUNTER22H", 148 },
    { "MHPMCOUNTER23", 118 },
    { "MHPMCOUNTER23H", 149 },
    { "MHPMCOUNTER24", 119 },
    { "MHPMCOUNTER24H", 150 },
    { "MHPMCOUNTER25", 120 },
    { "MHPMCOUNTER25H", 151 },
    { "MHPMCOUNTER26", 121 },
    { "MHPMCOUNTER26H", 152 },
    { "MHPMCOUNTER27", 122 },
    { "MHPMCOUNTER27H", 153 },
    { "MHPMCOUNTER28", 123 },
    { "MHPMCOUNTER28H", 154 },
    { "MHPMCOUNTER29", 124 },
    { "MHPMCOUNTER29H", 155 },
    { "MHPMCOUNTER3", 98 },
    { "MHPMCOUNTER30", 125 },
    { "MHPMCOUNTER30H", 156 },
    { "MHPMCOUNTER31", 126 },
    { "MHPMCOUNTER31H", 157 },
    { "MHPMCOUNTER3H", 129 },
    { "MHPMCOUNTER4", 99 },
    { "MHPMCOUNTER4H", 130 },
    { "MHPMCOUNTER5", 100 },
    { "MHPMCOUNTER5H", 131 },
    { "MHPMCOUNTER6", 101 },
    { "MHPMCOUNTER6H", 132 },
    { "MHPMCOUNTER7", 102 },
    { "MHPMCOUNTER7H", 133 },
    { "MHPMCOUNTER8", 103 },
    { "MHPMCOUNTER8H", 134 },
    { "MHPMCOUNTER9", 104 },
    { "MHPMCOUNTER9H", 135 },
    { "MHPMEVENT10", 41 },
    { "MHPMEVENT11", 42 },
    { "MHPMEVENT12", 43 },
    { "MHPMEVENT13", 44 },
    { "MHPMEVENT14", 45 },
    { "MHPMEVENT15", 46 },
    { "MHPMEVENT16", 47 },
    { "MHPMEVENT17", 48 },
    { "MHPMEVENT18", 49 },
    { "MHPMEVENT19", 50 },
    { "MHPMEVENT20", 51 },
    { "MHPMEVENT21", 52 },
    { "MHPMEVENT22", 53 },
    { "MHPMEVENT23", 54 },
    { "MHPMEVENT24", 55 },
    { "MHPMEVENT25", 56 },
    { "MHPMEVENT26", 57 },
    { "MHPMEVENT27", 58 },
    { "MHPMEVENT28", 59 },
    { "MHPMEVENT29", 60 },
    { "MHPMEVENT3", 34 },
    { "MHPMEVENT30", 61 },
    { "MHPMEVENT31", 62 },
    { "MHPMEVENT4", 35 },
    { "MHPMEVENT5", 36 },
    { "MHPMEVENT6", 37 },
    { "MHPMEVENT7", 38 },
    { "MHPMEVENT8", 39 },
    { "MHPMEVENT9", 40 },
    { "MIDELEG", 29 },
    { "MIE", 30 },
    { "MIMPID", 227 },
    { "MINSTRET", 97 },
    { "MINSTRETH", 128 },
    { "MIP", 67 },
    { "MISA", 27 },
    { "MSCRATCH", 63 },
    { "MSTATUS", 26 },
    { "MTVAL", 66 },
    { "MTVEC", 31 },
    { "MVENDORID", 225 },
    { "PMPADDR0", 72 },
    { "PMPADDR1", 73 },
    { "PMPADDR10", 82 },
    { "PMPADDR11", 83 },
    { "PMPADDR12", 84 },
    { "PMPADDR13", 85 },
    { "PMPADDR14", 86 },
    { "PMPADDR15", 87 },
    { "PMPADDR2", 74 },
    { "PMPADDR3", 75 },
    { "PMPADDR4", 76 },
    { "PMPADDR5", 77 },
    { "PMPADDR6", 78 },
    { "PMPADDR7", 79 },
    { "PMPADDR8", 80 },
    { "PMPADDR9", 81 },
    { "PMPCFG0", 68 },
    { "PMPCFG1", 69 },
    { "PMPCFG2", 70 },
    { "PMPCFG3", 71 },
    { "SATP", 25 },
    { "SCAUSE", 22 },
    { "SCOUNTEREN", 19 },
    { "SEDELEG", 15 },
    { "SEPC", 21 },
    { "SIDELEG", 16 },
    { "SIE", 17 },
    { "SIP", 24 },
    { "SSCRATCH", 20 },
    { "SSTATUS", 14 },
    { "STVAL", 23 },
    { "STVEC", 18 },
    { "TDATA1", 89 },
    { "TDATA2", 90 },
    { "TDATA3", 91 },
    { "TIME", 159 },
    { "TIMEH", 194 },
    { "TSELECT", 88 },
    { "UCAUSE", 11 },
    { "UEPC", 10 },
    { "UIE", 4 },
    { "UIP", 13 },
    { "USCRATCH", 9 },
    { "USTATUS", 0 },
    { "UTVAL", 12 },
    { "UTVEC", 5 },
    { "VL", 190 },
    { "VLENB", 192 },
    { "VSTART", 6 },
    { "VTYPE", 191 },
    { "VXRM", 8 },
    { "VXSAT", 7 },
  };

  struct KeyType {
    std::string AltName;
  };
  KeyType Key = { AltName.upper() };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      int CmpAltName = StringRef(LHS.AltName).compare(RHS.AltName);
      if (CmpAltName < 0) return true;
      if (CmpAltName > 0) return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.AltName != Idx->AltName)
    return nullptr;
  return &SysRegsList[Idx->_index];
}

const SysReg *lookupSysRegByName(StringRef Name) {
  struct IndexType {
    const char * Name;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { "CYCLE", 158 },
    { "CYCLEH", 193 },
    { "DCSR", 92 },
    { "DPC", 93 },
    { "DSCRATCH0", 94 },
    { "DSCRATCH1", 95 },
    { "FCSR", 3 },
    { "FFLAGS", 1 },
    { "FRM", 2 },
    { "HPMCOUNTER10", 168 },
    { "HPMCOUNTER10H", 203 },
    { "HPMCOUNTER11", 169 },
    { "HPMCOUNTER11H", 204 },
    { "HPMCOUNTER12", 170 },
    { "HPMCOUNTER12H", 205 },
    { "HPMCOUNTER13", 171 },
    { "HPMCOUNTER13H", 206 },
    { "HPMCOUNTER14", 172 },
    { "HPMCOUNTER14H", 207 },
    { "HPMCOUNTER15", 173 },
    { "HPMCOUNTER15H", 208 },
    { "HPMCOUNTER16", 174 },
    { "HPMCOUNTER16H", 209 },
    { "HPMCOUNTER17", 175 },
    { "HPMCOUNTER17H", 210 },
    { "HPMCOUNTER18", 176 },
    { "HPMCOUNTER18H", 211 },
    { "HPMCOUNTER19", 177 },
    { "HPMCOUNTER19H", 212 },
    { "HPMCOUNTER20", 178 },
    { "HPMCOUNTER20H", 213 },
    { "HPMCOUNTER21", 179 },
    { "HPMCOUNTER21H", 214 },
    { "HPMCOUNTER22", 180 },
    { "HPMCOUNTER22H", 215 },
    { "HPMCOUNTER23", 181 },
    { "HPMCOUNTER23H", 216 },
    { "HPMCOUNTER24", 182 },
    { "HPMCOUNTER24H", 217 },
    { "HPMCOUNTER25", 183 },
    { "HPMCOUNTER25H", 218 },
    { "HPMCOUNTER26", 184 },
    { "HPMCOUNTER26H", 219 },
    { "HPMCOUNTER27", 185 },
    { "HPMCOUNTER27H", 220 },
    { "HPMCOUNTER28", 186 },
    { "HPMCOUNTER28H", 221 },
    { "HPMCOUNTER29", 187 },
    { "HPMCOUNTER29H", 222 },
    { "HPMCOUNTER3", 161 },
    { "HPMCOUNTER30", 188 },
    { "HPMCOUNTER30H", 223 },
    { "HPMCOUNTER31", 189 },
    { "HPMCOUNTER31H", 224 },
    { "HPMCOUNTER3H", 196 },
    { "HPMCOUNTER4", 162 },
    { "HPMCOUNTER4H", 197 },
    { "HPMCOUNTER5", 163 },
    { "HPMCOUNTER5H", 198 },
    { "HPMCOUNTER6", 164 },
    { "HPMCOUNTER6H", 199 },
    { "HPMCOUNTER7", 165 },
    { "HPMCOUNTER7H", 200 },
    { "HPMCOUNTER8", 166 },
    { "HPMCOUNTER8H", 201 },
    { "HPMCOUNTER9", 167 },
    { "HPMCOUNTER9H", 202 },
    { "INSTRET", 160 },
    { "INSTRETH", 195 },
    { "MARCHID", 226 },
    { "MCAUSE", 65 },
    { "MCOUNTEREN", 32 },
    { "MCOUNTINHIBIT", 33 },
    { "MCYCLE", 96 },
    { "MCYCLEH", 127 },
    { "MEDELEG", 28 },
    { "MEPC", 64 },
    { "MHARTID", 228 },
    { "MHPMCOUNTER10", 105 },
    { "MHPMCOUNTER10H", 136 },
    { "MHPMCOUNTER11", 106 },
    { "MHPMCOUNTER11H", 137 },
    { "MHPMCOUNTER12", 107 },
    { "MHPMCOUNTER12H", 138 },
    { "MHPMCOUNTER13", 108 },
    { "MHPMCOUNTER13H", 139 },
    { "MHPMCOUNTER14", 109 },
    { "MHPMCOUNTER14H", 140 },
    { "MHPMCOUNTER15", 110 },
    { "MHPMCOUNTER15H", 141 },
    { "MHPMCOUNTER16", 111 },
    { "MHPMCOUNTER16H", 142 },
    { "MHPMCOUNTER17", 112 },
    { "MHPMCOUNTER17H", 143 },
    { "MHPMCOUNTER18", 113 },
    { "MHPMCOUNTER18H", 144 },
    { "MHPMCOUNTER19", 114 },
    { "MHPMCOUNTER19H", 145 },
    { "MHPMCOUNTER20", 115 },
    { "MHPMCOUNTER20H", 146 },
    { "MHPMCOUNTER21", 116 },
    { "MHPMCOUNTER21H", 147 },
    { "MHPMCOUNTER22", 117 },
    { "MHPMCOUNTER22H", 148 },
    { "MHPMCOUNTER23", 118 },
    { "MHPMCOUNTER23H", 149 },
    { "MHPMCOUNTER24", 119 },
    { "MHPMCOUNTER24H", 150 },
    { "MHPMCOUNTER25", 120 },
    { "MHPMCOUNTER25H", 151 },
    { "MHPMCOUNTER26", 121 },
    { "MHPMCOUNTER26H", 152 },
    { "MHPMCOUNTER27", 122 },
    { "MHPMCOUNTER27H", 153 },
    { "MHPMCOUNTER28", 123 },
    { "MHPMCOUNTER28H", 154 },
    { "MHPMCOUNTER29", 124 },
    { "MHPMCOUNTER29H", 155 },
    { "MHPMCOUNTER3", 98 },
    { "MHPMCOUNTER30", 125 },
    { "MHPMCOUNTER30H", 156 },
    { "MHPMCOUNTER31", 126 },
    { "MHPMCOUNTER31H", 157 },
    { "MHPMCOUNTER3H", 129 },
    { "MHPMCOUNTER4", 99 },
    { "MHPMCOUNTER4H", 130 },
    { "MHPMCOUNTER5", 100 },
    { "MHPMCOUNTER5H", 131 },
    { "MHPMCOUNTER6", 101 },
    { "MHPMCOUNTER6H", 132 },
    { "MHPMCOUNTER7", 102 },
    { "MHPMCOUNTER7H", 133 },
    { "MHPMCOUNTER8", 103 },
    { "MHPMCOUNTER8H", 134 },
    { "MHPMCOUNTER9", 104 },
    { "MHPMCOUNTER9H", 135 },
    { "MHPMEVENT10", 41 },
    { "MHPMEVENT11", 42 },
    { "MHPMEVENT12", 43 },
    { "MHPMEVENT13", 44 },
    { "MHPMEVENT14", 45 },
    { "MHPMEVENT15", 46 },
    { "MHPMEVENT16", 47 },
    { "MHPMEVENT17", 48 },
    { "MHPMEVENT18", 49 },
    { "MHPMEVENT19", 50 },
    { "MHPMEVENT20", 51 },
    { "MHPMEVENT21", 52 },
    { "MHPMEVENT22", 53 },
    { "MHPMEVENT23", 54 },
    { "MHPMEVENT24", 55 },
    { "MHPMEVENT25", 56 },
    { "MHPMEVENT26", 57 },
    { "MHPMEVENT27", 58 },
    { "MHPMEVENT28", 59 },
    { "MHPMEVENT29", 60 },
    { "MHPMEVENT3", 34 },
    { "MHPMEVENT30", 61 },
    { "MHPMEVENT31", 62 },
    { "MHPMEVENT4", 35 },
    { "MHPMEVENT5", 36 },
    { "MHPMEVENT6", 37 },
    { "MHPMEVENT7", 38 },
    { "MHPMEVENT8", 39 },
    { "MHPMEVENT9", 40 },
    { "MIDELEG", 29 },
    { "MIE", 30 },
    { "MIMPID", 227 },
    { "MINSTRET", 97 },
    { "MINSTRETH", 128 },
    { "MIP", 67 },
    { "MISA", 27 },
    { "MSCRATCH", 63 },
    { "MSTATUS", 26 },
    { "MTVAL", 66 },
    { "MTVEC", 31 },
    { "MVENDORID", 225 },
    { "PMPADDR0", 72 },
    { "PMPADDR1", 73 },
    { "PMPADDR10", 82 },
    { "PMPADDR11", 83 },
    { "PMPADDR12", 84 },
    { "PMPADDR13", 85 },
    { "PMPADDR14", 86 },
    { "PMPADDR15", 87 },
    { "PMPADDR2", 74 },
    { "PMPADDR3", 75 },
    { "PMPADDR4", 76 },
    { "PMPADDR5", 77 },
    { "PMPADDR6", 78 },
    { "PMPADDR7", 79 },
    { "PMPADDR8", 80 },
    { "PMPADDR9", 81 },
    { "PMPCFG0", 68 },
    { "PMPCFG1", 69 },
    { "PMPCFG2", 70 },
    { "PMPCFG3", 71 },
    { "SATP", 25 },
    { "SCAUSE", 22 },
    { "SCOUNTEREN", 19 },
    { "SEDELEG", 15 },
    { "SEPC", 21 },
    { "SIDELEG", 16 },
    { "SIE", 17 },
    { "SIP", 24 },
    { "SSCRATCH", 20 },
    { "SSTATUS", 14 },
    { "STVAL", 23 },
    { "STVEC", 18 },
    { "TDATA1", 89 },
    { "TDATA2", 90 },
    { "TDATA3", 91 },
    { "TIME", 159 },
    { "TIMEH", 194 },
    { "TSELECT", 88 },
    { "UCAUSE", 11 },
    { "UEPC", 10 },
    { "UIE", 4 },
    { "UIP", 13 },
    { "USCRATCH", 9 },
    { "USTATUS", 0 },
    { "UTVAL", 12 },
    { "UTVEC", 5 },
    { "VL", 190 },
    { "VLENB", 192 },
    { "VSTART", 6 },
    { "VTYPE", 191 },
    { "VXRM", 8 },
    { "VXSAT", 7 },
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
#endif

#undef GET_SysRegsList_DECL
#undef GET_SysRegsList_IMPL

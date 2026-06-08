/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20251212 (64-bit version)
 * Copyright (c) 2000 - 2025 Intel Corporation
 * 
 * Disassembly of IVRS.dat
 *
 * ACPI Data Table [IVRS]
 *
 * Format: [HexOffset DecimalOffset ByteLength]  FieldName : FieldValue (in hex)
 */

[000h 0000 004h]                   Signature : "IVRS"    [I/O Virtualization Reporting Structure]
[004h 0004 004h]                Table Length : 000000D0
[008h 0008 001h]                    Revision : 02
[009h 0009 001h]                    Checksum : 17
[00Ah 0010 006h]                      Oem ID : "AMD  "
[010h 0016 008h]                Oem Table ID : "AMD IVRS"
[018h 0024 004h]                Oem Revision : 00000001
[01Ch 0028 004h]             Asl Compiler ID : "AMD "
[020h 0032 004h]       Asl Compiler Revision : 00000000

[024h 0036 004h]         Virtualization Info : 00203041
[028h 0040 008h]                    Reserved : 0000000000000000

[030h 0048 001h]               Subtable Type : 10 [Hardware Definition Block (IVHD)]
[031h 0049 001h]       Flags (decoded below) : 20
                                     HtTunEn : 0
                                      PassPW : 0
                                   ResPassPW : 0
                                Isoc Control : 0
                               Iotlb Support : 0
                                    Coherent : 1
                            Prefetch Support : 0
                                 PPR Support : 0
[032h 0050 002h]                      Length : 0048
[034h 0052 002h]                    DeviceId : 0002
[036h 0054 002h]           Capability Offset : 0040
[038h 0056 008h]                Base Address : 00000000FEB80000
[040h 0064 002h]           PCI Segment Group : 0000
[042h 0066 002h]         Virtualization Info : 0000
[044h 0068 004h]           Feature Reporting : 0004872C

[048h 0072 001h]               Subtable Type : 03 [Device Entry: Start of Range]
[049h 0073 002h]                   Device ID : 0008
[04Bh 0075 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[04Ch 0076 001h]               Subtable Type : 04 [Device Entry: End of Range]
[04Dh 0077 002h]                   Device ID : FFFE
[04Fh 0079 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[050h 0080 001h]               Subtable Type : 43 [Device Entry: Alias Start of Range]
[051h 0081 002h]                   Device ID : 0200
[053h 0083 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[054h 0084 001h]                    Reserved : 00
[055h 0085 002h]       Source Used Device ID : 00A4
[057h 0087 001h]                    Reserved : 00

[058h 0088 001h]               Subtable Type : 04 [Device Entry: End of Range]
[059h 0089 002h]                   Device ID : 02FF
[05Bh 0091 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[05Ch 0092 001h]               Subtable Type : 00 [Unknown/Reserved Device Entry Type]
[05Dh 0093 002h]                   Device ID : 0000
[05Fh 0095 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[060h 0096 001h]               Subtable Type : 48 [Device Entry: Special Device]
[061h 0097 002h]                   Device ID : 0000
[063h 0099 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[064h 0100 001h]                      Handle : 00
[065h 0101 002h]       Source Used Device ID : 00A0
[067h 0103 001h]                     Variety : 02

[068h 0104 001h]               Subtable Type : 48 [Device Entry: Special Device]
[069h 0105 002h]                   Device ID : 0000
[06Bh 0107 001h] Data Setting (decoded below) : D7
                                    INITPass : 1
                                    EIntPass : 1
                                     NMIPass : 1
                                    Reserved : 0
                                 System MGMT : 1
                                  LINT0 Pass : 1
                                  LINT1 Pass : 1
[06Ch 0108 001h]                      Handle : 0D
[06Dh 0109 002h]       Source Used Device ID : 00A0
[06Fh 0111 001h]                     Variety : 01

[070h 0112 001h]               Subtable Type : 48 [Device Entry: Special Device]
[071h 0113 002h]                   Device ID : 0000
[073h 0115 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[074h 0116 001h]                      Handle : 0E
[075h 0117 002h]       Source Used Device ID : 0001
[077h 0119 001h]                     Variety : 01

[078h 0120 001h]               Subtable Type : 11 [Hardware Definition Block (IVHD)]
[079h 0121 001h]       Flags (decoded below) : 20
                                     HtTunEn : 0
                                      PassPW : 0
                                   ResPassPW : 0
                                Isoc Control : 0
                               Iotlb Support : 0
                                    Coherent : 1
                            Prefetch Support : 0
                                 PPR Support : 0
[07Ah 0122 002h]                      Length : 0058
[07Ch 0124 002h]                    DeviceId : 0002
[07Eh 0126 002h]           Capability Offset : 0040
[080h 0128 008h]                Base Address : 00000000FEB80000
[088h 0136 002h]           PCI Segment Group : 0000
[08Ah 0138 002h]         Virtualization Info : 0000
[08Ch 0140 004h]                  Attributes : 00040200
[090h 0144 008h]                   EFR Image : 0421600720094250
[098h 0152 008h]                    Reserved : 0000000000000000

[0A0h 0160 001h]               Subtable Type : 03 [Device Entry: Start of Range]
[0A1h 0161 002h]                   Device ID : 0008
[0A3h 0163 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[0A4h 0164 001h]               Subtable Type : 04 [Device Entry: End of Range]
[0A5h 0165 002h]                   Device ID : FFFE
[0A7h 0167 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[0A8h 0168 001h]               Subtable Type : 43 [Device Entry: Alias Start of Range]
[0A9h 0169 002h]                   Device ID : 0200
[0ABh 0171 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[0ACh 0172 001h]                    Reserved : 00
[0ADh 0173 002h]       Source Used Device ID : 00A4
[0AFh 0175 001h]                    Reserved : 00

[0B0h 0176 001h]               Subtable Type : 04 [Device Entry: End of Range]
[0B1h 0177 002h]                   Device ID : 02FF
[0B3h 0179 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[0B4h 0180 001h]               Subtable Type : 00 [Unknown/Reserved Device Entry Type]
[0B5h 0181 002h]                   Device ID : 0000
[0B7h 0183 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0

[0B8h 0184 001h]               Subtable Type : 48 [Device Entry: Special Device]
[0B9h 0185 002h]                   Device ID : 0000
[0BBh 0187 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[0BCh 0188 001h]                      Handle : 00
[0BDh 0189 002h]       Source Used Device ID : 00A0
[0BFh 0191 001h]                     Variety : 02

[0C0h 0192 001h]               Subtable Type : 48 [Device Entry: Special Device]
[0C1h 0193 002h]                   Device ID : 0000
[0C3h 0195 001h] Data Setting (decoded below) : D7
                                    INITPass : 1
                                    EIntPass : 1
                                     NMIPass : 1
                                    Reserved : 0
                                 System MGMT : 1
                                  LINT0 Pass : 1
                                  LINT1 Pass : 1
[0C4h 0196 001h]                      Handle : 0D
[0C5h 0197 002h]       Source Used Device ID : 00A0
[0C7h 0199 001h]                     Variety : 01

[0C8h 0200 001h]               Subtable Type : 48 [Device Entry: Special Device]
[0C9h 0201 002h]                   Device ID : 0000
[0CBh 0203 001h] Data Setting (decoded below) : 00
                                    INITPass : 0
                                    EIntPass : 0
                                     NMIPass : 0
                                    Reserved : 0
                                 System MGMT : 0
                                  LINT0 Pass : 0
                                  LINT1 Pass : 0
[0CCh 0204 001h]                      Handle : 0E
[0CDh 0205 002h]       Source Used Device ID : 0001
[0CFh 0207 001h]                     Variety : 01

Raw Table Data: Length 208 (0xD0)

    0000: 49 56 52 53 D0 00 00 00 02 17 41 4D 44 20 20 00  // IVRS......AMD  .
    0010: 41 4D 44 20 49 56 52 53 01 00 00 00 41 4D 44 20  // AMD IVRS....AMD 
    0020: 00 00 00 00 41 30 20 00 00 00 00 00 00 00 00 00  // ....A0 .........
    0030: 10 20 48 00 02 00 40 00 00 00 B8 FE 00 00 00 00  // . H...@.........
    0040: 00 00 00 00 2C 87 04 00 03 08 00 00 04 FE FF 00  // ....,...........
    0050: 43 00 02 00 00 A4 00 00 04 FF 02 00 00 00 00 00  // C...............
    0060: 48 00 00 00 00 A0 00 02 48 00 00 D7 0D A0 00 01  // H.......H.......
    0070: 48 00 00 00 0E 01 00 01 11 20 58 00 02 00 40 00  // H........ X...@.
    0080: 00 00 B8 FE 00 00 00 00 00 00 00 00 00 02 04 00  // ................
    0090: 50 42 09 20 07 60 21 04 00 00 00 00 00 00 00 00  // PB. .`!.........
    00A0: 03 08 00 00 04 FE FF 00 43 00 02 00 00 A4 00 00  // ........C.......
    00B0: 04 FF 02 00 00 00 00 00 48 00 00 00 00 A0 00 02  // ........H.......
    00C0: 48 00 00 D7 0D A0 00 01 48 00 00 00 0E 01 00 01  // H.......H.......

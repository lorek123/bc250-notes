/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20251212 (64-bit version)
 * Copyright (c) 2000 - 2025 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT2.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x00001942 (6466)
 *     Revision         0x01
 *     Checksum         0x5D
 *     OEM ID           "AMD"
 *     OEM Table ID     "AmdTable"
 *     OEM Revision     0x00000001 (1)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20120913 (538052883)
 */
DefinitionBlock ("", "SSDT", 1, "AMD", "AmdTable", 0x00000001)
{
    /*
     * iASL Warning: There were 8 external control methods found during
     * disassembly, but only 0 were resolved (8 unresolved). Additional
     * ACPI tables may be required to properly disassemble the code. This
     * resulting disassembler output file may not compile because the
     * disassembler did not know how many arguments to assign to the
     * unresolved methods. Note: SSDTs can be dynamically loaded at
     * runtime and may or may not be available via the host OS.
     *
     * To specify the tables needed to resolve external control method
     * references, the -e option can be used to specify the filenames.
     * Example iASL invocations:
     *     iasl -e ssdt1.aml ssdt2.aml ssdt3.aml -d dsdt.aml
     *     iasl -e dsdt.aml ssdt2.aml -d ssdt1.aml
     *     iasl -e ssdt*.aml -d dsdt.aml
     *
     * In addition, the -fe option can be used to specify a file containing
     * control method external declarations with the associated method
     * argument counts. Each line of the file must be of the form:
     *     External (<method pathname>, MethodObj, <argument count>)
     * Invocation:
     *     iasl -fe refs.txt -d dsdt.aml
     *
     * The following methods were unresolved and many not compile properly
     * because the disassembler had to guess at the number of arguments
     * required for each:
     */
    External (_SB_.ALIB, MethodObj)    // Warning: Unknown method, guessing 2 arguments
    External (_SB_.IPTS, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (_SB_.IWAK, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (_SB_.PCI0.GP18.SATA.TPTS, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (_SB_.PCI0.GP18.SATA.TWAK, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (_SB_.PCI0.SATA.TPTS, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (_SB_.PCI0.SATA.TWAK, MethodObj)    // Warning: Unknown method, guessing 1 arguments
    External (M038, IntObj)
    External (M039, MethodObj)    // Warning: Unknown method, guessing 2 arguments
    External (MOEM, IntObj)

    OperationRegion (CPNV, SystemMemory, 0x7DEE8018, 0x000100C2)
    Field (CPNV, AnyAcc, Lock, Preserve)
    {
        M082,   32, 
        M083,   32, 
        M084,   32, 
        M085,   8, 
        M221,   8, 
        M086,   16, 
        M229,   8, 
        M231,   16, 
        M235,   8, 
        M233,   32, 
            ,   1, 
            ,   2, 
            ,   1, 
            ,   1, 
            ,   1, 
            ,   1, 
        Offset (0x19), 
        M087,   1, 
            ,   1, 
        Offset (0x1C), 
        M088,   16, 
        M089,   16, 
        M090,   3, 
        M091,   5, 
        M092,   8, 
        M093,   3, 
        M094,   5, 
        M095,   8, 
        M096,   8, 
        M097,   8, 
        M331,   8, 
        M098,   32, 
        M099,   32, 
        M100,   32, 
        M101,   32, 
        M102,   32, 
        M103,   32, 
        M104,   224, 
        M105,   32, 
        M106,   522240, 
        Offset (0x1005F), 
        M107,   64, 
        M320,   32, 
        M321,   32, 
        M322,   32, 
        M323,   32, 
        M324,   32, 
        M325,   32, 
        M326,   16, 
        M327,   8, 
        M128,   32, 
        M108,   32, 
        M109,   32, 
        M110,   32, 
        M122,   32, 
        M131,   32, 
        M132,   32, 
        M133,   32, 
        M134,   32, 
        M135,   32, 
        M136,   32, 
        M220,   32, 
        M226,   32, 
        M251,   32, 
        M310,   32, 
        M330,   32
    }

    Method (M000, 1, Serialized)
    {
        Local0 = (Arg0 + 0xB0000C00)
        OperationRegion (VARM, SystemIO, 0x80, 0x04)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VARR,   32
        }

        VARR = Local0
    }

    Method (M019, 4, Serialized)
    {
        Return (M017 (Arg0, Arg1, Arg2, Arg3, Zero, 0x20))
    }

    Method (M020, 5, Serialized)
    {
        M018 (Arg0, Arg1, Arg2, Arg3, Zero, 0x20, Arg4)
    }

    Mutex (M253, 0x00)
    Method (M249, 3, Serialized)
    {
        Local0 = M252 (Arg0, Arg1)
        If ((Local0 == Ones))
        {
            Return (Ones)
        }

        Acquire (M253, 0xFFFF)
        Local1 = M017 (Local0, Zero, Zero, 0xB8, Zero, 0x20)
        M018 (Local0, Zero, Zero, 0xB8, Zero, 0x20, Arg2)
        Local2 = M017 (Local0, Zero, Zero, 0xBC, Zero, 0x20)
        M018 (Local0, Zero, Zero, 0xB8, Zero, 0x20, Local1)
        Release (M253)
        Return (Local2)
    }

    Method (M250, 4, Serialized)
    {
        Local0 = M252 (Arg0, Arg1)
        If ((Local0 != Ones))
        {
            Acquire (M253, 0xFFFF)
            Local1 = M017 (Local0, Zero, Zero, 0xB8, Zero, 0x20)
            M018 (Local0, Zero, Zero, 0xB8, Zero, 0x20, Arg2)
            M018 (Local0, Zero, Zero, 0xBC, Zero, 0x20, Arg3)
            M018 (Local0, Zero, Zero, 0xB8, Zero, 0x20, Local1)
            Release (M253)
        }
    }

    Method (M021, 4, Serialized)
    {
        Local0 = (M083 + (Arg0 << 0x14))
        Local0 += (Arg1 << 0x0F)
        Local0 += (Arg2 << 0x0C)
        Local0 += 0xE0
        OperationRegion (VARM, SystemMemory, Local0, 0x08)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VAR1,   32
        }

        BankField (VARM, VAR1, Arg3, DWordAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            VAR2,   32
        }

        Local0 = VAR2 /* \M021.VAR2 */
        Return (Local0)
    }

    Method (M022, 5, Serialized)
    {
        Local0 = (M083 + (Arg0 << 0x14))
        Local0 += (Arg1 << 0x0F)
        Local0 += (Arg2 << 0x0C)
        Local0 += 0xE0
        OperationRegion (VARM, SystemMemory, Local0, 0x08)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VAR1,   32
        }

        BankField (VARM, VAR1, Arg3, DWordAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            VAR2,   32
        }

        VAR2 = Arg4
    }

    Method (M023, 3, Serialized)
    {
        M018 (Arg0, Arg1, Arg2, 0x70, 0x03, One, Zero)
        M018 (Arg0, Arg1, Arg2, 0x70, 0x13, One, One)
    }

    Method (M024, 3, Serialized)
    {
        Local0 = M019 (Arg0, Arg1, Arg2, 0x0128)
        If ((Local0 & 0x00020000))
        {
            Return (Ones)
        }
        Else
        {
            Return (Zero)
        }
    }

    Method (M026, 3, Serialized)
    {
        Local0 = M021 (Arg0, Arg1, Arg2, 0xA2)
        Local0 &= 0xFFFFFFF8
        Local1 = (Local0 >> 0x04)
        Local1 &= 0x07
        Local0 |= Local1
        Local0 |= 0x0100
        M022 (Arg0, Arg1, Arg2, 0xA2, Local0)
    }

    Method (M025, 3, Serialized)
    {
        Local0 = M019 (Arg0, Arg1, Arg2, 0x68)
        Local0 &= 0xFFFFFFDF
        M020 (Arg0, Arg1, Arg2, 0x68, Local0)
        Local0 |= 0x20
        M020 (Arg0, Arg1, Arg2, 0x68, Local0)
        Local1 = 0x64
        Local2 = One
        While ((Local1 && Local2))
        {
            Sleep (One)
            Local3 = M019 (Arg0, Arg1, Arg2, 0x68)
            If ((Local3 & 0x08000000))
            {
                Local1--
            }
            Else
            {
                Local2 = Zero
            }
        }

        Local0 &= 0xFFFFFFDF
        M020 (Arg0, Arg1, Arg2, 0x68, Local0)
        If (!Local2)
        {
            Return (Ones)
        }
        Else
        {
            Return (Zero)
        }
    }

    Method (M009, 1, Serialized)
    {
        Local0 = (Arg0 >> 0x08)
        Local1 = (Arg0 & 0xFF)
        Local2 = Zero
        If ((Local0 == Zero))
        {
            If ((M085 >= 0x02))
            {
                Local2 = M011 ((M084 + 0x1502), (Local1 * 0x04), Zero, 
                    One)
            }
            Else
            {
                Local2 = M011 ((M084 + 0x0100), Local1, 0x07, One)
            }
        }
        ElseIf ((Local0 == One))
        {
            Local1 = M038 /* External reference */
            Local2
        }
        ElseIf ((Local0 == 0x02))
        {
            (Local1 + 0x08) = M038 /* External reference */
            Local2
        }

        Return (Local2)
    }

    Method (M010, 2, Serialized)
    {
        Local0 = (Arg0 >> 0x08)
        Local1 = (Arg0 & 0xFF)
        If ((Local0 == Zero))
        {
            If ((M085 >= 0x02))
            {
                M012 ((M084 + 0x1502), (Local1 * 0x04), 0x06, 0x02, (
                    0x02 | Arg1))
            }
            Else
            {
                M012 ((M084 + 0x0100), Local1, 0x06, One, Arg1)
                M012 ((M084 + 0x0100), Local1, 0x05, One, Zero)
            }
        }
        ElseIf ((Local0 == One))
        {
            M039 (Local1, Arg1)
        }
        ElseIf ((Local0 == 0x02))
        {
            M039 ((Local1 + 0x08), Arg1)
        }
    }

    Name (M037, Buffer (0x17)
    {
        /* 0000 */  0x7E, 0x81, 0x03, 0x16, 0x04, 0x15, 0x0E, 0x05,  // ~.......
        /* 0008 */  0x02, 0x20, 0x06, 0x07, 0x10, 0x11, 0x12, 0x18,  // . ......
        /* 0010 */  0x17, 0x19, 0x0B, 0x01, 0x0F, 0x0D, 0x09         // .......
    })
    Name (M227, Buffer (0x18)
    {
        /* 0000 */  0x41, 0x42, 0x03, 0x16, 0x04, 0x15, 0x0E, 0x05,  // AB......
        /* 0008 */  0x02, 0x44, 0x06, 0x07, 0x10, 0x11, 0x12, 0x18,  // .D......
        /* 0010 */  0x17, 0x45, 0x0B, 0x01, 0x0F, 0x0D, 0x09, 0x08   // .E......
    })
    Method (M029, 1, Serialized)
    {
        Switch (M085)
        {
            Case (0x02)
            {
                Return (M011 ((M084 + 0x1502), (DerefOf (M037 [Arg0]) * 
                    0x04), Zero, One))
            }
            Case (Package (0x07)
                {
                    0x03, 
                    0x04, 
                    0x05, 
                    0x06, 
                    0x07, 
                    0x08, 
                    0x09
                }

)
            {
                Return (M011 ((M084 + 0x1502), (DerefOf (M227 [Arg0]) * 
                    0x04), Zero, One))
            }
            Default
            {
                Return (M011 ((M084 + 0x0160), Arg0, 0x07, One))
            }

        }
    }

    Method (M031, 1, Serialized)
    {
        Local0 = M011 ((M084 + 0x0240), Arg0, Zero, 0x05)
        Return (M011 ((M084 + 0x0208), (Local0 / 0x08), (Local0 & 
            0x07), One))
    }

    Method (M032, 2, Serialized)
    {
        Local0 = M011 ((M084 + 0x0240), Arg0, Zero, 0x05)
        M012 ((M084 + 0x0208), (Local0 / 0x08), (Local0 & 0x07
            ), One, Arg1)
    }

    Method (M013, 4, Serialized)
    {
        Local0 = (Arg0 + Arg1)
        OperationRegion (VARM, SystemMemory, Local0, 0x04)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VARR,   32
        }

        Local1 = VARR /* \M013.VARR */
        Local5 = 0x7FFFFFFF
        Local5 |= 0x80000000
        Local2 = ((Local1 >> Arg2) & (Local5 >> (0x20 - Arg3)
            ))
        Return (Local2)
    }

    Method (M014, 5, Serialized)
    {
        Local0 = (Arg0 + Arg1)
        OperationRegion (VARM, SystemMemory, Local0, 0x04)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VARR,   32
        }

        Local1 = VARR /* \M014.VARR */
        Local5 = 0x7FFFFFFF
        Local5 |= 0x80000000
        Local2 = (Arg2 + Arg3)
        Local2 = (0x20 - Local2)
        Local2 = (((Local5 << Local2) & Local5) >> Local2)
        Local2 = ((Local2 >> Arg2) << Arg2)
        Local3 = (Arg4 << Arg2)
        Local4 = ((Local1 & (Local5 ^ Local2)) | Local3)
        VARR = Local4
    }

    Method (M011, 4, Serialized)
    {
        Local0 = (Arg0 + Arg1)
        OperationRegion (VARM, SystemMemory, Local0, One)
        Field (VARM, ByteAcc, NoLock, Preserve)
        {
            VARR,   8
        }

        Local1 = VARR /* \M011.VARR */
        Local2 = ((Local1 >> Arg2) & (0xFF >> (0x08 - Arg3)
            ))
        Return (Local2)
    }

    Method (M012, 5, Serialized)
    {
        Local0 = (Arg0 + Arg1)
        OperationRegion (VARM, SystemMemory, Local0, One)
        Field (VARM, ByteAcc, NoLock, Preserve)
        {
            VARR,   8
        }

        Local1 = VARR /* \M012.VARR */
        Local2 = (Arg2 + Arg3)
        Local2 = (0x08 - Local2)
        Local2 = (((0xFF << Local2) & 0xFF) >> Local2)
        Local2 = ((Local2 >> Arg2) << Arg2)
        Local3 = (Arg4 << Arg2)
        Local4 = ((Local1 & (0xFF ^ Local2)) | Local3)
        VARR = Local4
    }

    Method (M017, 6, Serialized)
    {
        Local0 = M083 /* \M083 */
        Local1 = (M083 >> 0x14)
        Local2 = (Local1 & 0x0F00)
        Local2 += 0x0100
        If (((Local1 + Arg0) >= Local2))
        {
            Local3 = 0x7FFFFFFF
            Local3 |= 0x80000000
            Local4 = ((Local3 >> Arg4) & (Local3 >> (0x20 - Arg5)
                ))
            Return (Local4)
        }

        Local0 += (Arg0 << 0x14)
        Local0 += (Arg1 << 0x0F)
        Local0 += (Arg2 << 0x0C)
        Return (M013 (Local0, Arg3, Arg4, Arg5))
    }

    Method (M018, 7, Serialized)
    {
        Local0 = M083 /* \M083 */
        Local1 = (M083 >> 0x14)
        Local2 = (Local1 & 0x0F00)
        Local2 += 0x0100
        If (((Local1 + Arg0) < Local2))
        {
            Local0 += (Arg0 << 0x14)
            Local0 += (Arg1 << 0x0F)
            Local0 += (Arg2 << 0x0C)
            If ((M013 (Local0, Zero, Zero, 0x20) != Ones))
            {
                M014 (Local0, Arg3, Arg4, Arg5, Arg6)
            }
        }
    }

    Method (M033, 3, Serialized)
    {
        Local0 = Zero
        Local1 = M017 (Arg0, Arg1, Arg2, 0x34, Zero, 0x08)
        While ((Local1 != Zero))
        {
            Local2 = M017 (Arg0, Arg1, Arg2, Local1, Zero, 0x08)
            If (((Local2 == Zero) || (Local2 == 0xFF)))
            {
                Break
            }

            If ((Local2 == 0x10))
            {
                Local0 = M017 (Arg0, Arg1, Arg2, (Local1 + 0x0C), 0x0A, 0x02)
                Break
            }

            Local1 = M017 (Arg0, Arg1, Arg2, (Local1 + One), Zero, 0x08)
        }

        Return (Local0)
    }

    Method (M027, 3, Serialized)
    {
        Local0 = Zero
        Local1 = M017 (Arg0, Arg1, Arg2, 0x34, Zero, 0x08)
        While ((Local1 != Zero))
        {
            Local2 = M017 (Arg0, Arg1, Arg2, Local1, Zero, 0x08)
            If (((Local2 == Zero) || (Local2 == 0xFF)))
            {
                Break
            }

            If ((Local2 == 0x10))
            {
                Local0 = M017 (Arg0, Arg1, Arg2, (Local1 + 0x10), Zero, 0x02)
                Break
            }

            Local1 = M017 (Arg0, Arg1, Arg2, (Local1 + One), Zero, 0x08)
        }

        Return (Local0)
    }

    Method (M028, 4, Serialized)
    {
        Local0 = Zero
        Local1 = M017 (Arg0, Arg1, Arg2, 0x34, Zero, 0x08)
        While (((Local1 != Zero) && (Local1 < 0xFF)))
        {
            Local2 = M017 (Arg0, Arg1, Arg2, Local1, Zero, 0x08)
            If (((Local2 == Zero) || (Local2 == 0xFF)))
            {
                Break
            }

            If ((Local2 == 0x10))
            {
                M018 (Arg0, Arg1, Arg2, (Local1 + 0x10), Zero, 0x02, Arg3)
                Break
            }

            Local1 = M017 (Arg0, Arg1, Arg2, (Local1 + One), Zero, 0x08)
        }
    }

    Method (M034, 1, Serialized)
    {
        Return (M011 ((M084 + 0x0700), Arg0, Zero, 0x08))
    }

    Method (M015, 1, Serialized)
    {
        Return (M011 ((M084 + 0x0400), Arg0, Zero, 0x08))
    }

    Method (M016, 2, Serialized)
    {
        M012 ((M084 + 0x0400), Arg0, Zero, 0x08, Arg1)
    }

    Method (M035, 1, Serialized)
    {
        Return (M011 (M084, Arg0, Zero, 0x08))
    }

    Method (M036, 2, Serialized)
    {
        M012 (M084, Arg0, Zero, 0x08, Arg1)
    }

    Method (M001, 2, Serialized)
    {
        Local0 = Zero
        If ((Arg0 == 0x15))
        {
            Local0 = One
        }

        Return (Local0)
    }

    Method (M003, 3, Serialized)
    {
        Local0 = (Arg0 << 0x05)
        Local1 = (Local0 + Arg1)
        Local2 = (Local1 << 0x18)
        Local3 = (Local2 + Arg2)
        Return (Local3)
    }

    Method (M004, 1, Serialized)
    {
        OperationRegion (VARM, SystemIO, 0x0CD8, 0x08)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VAR1,   32
        }

        BankField (VARM, VAR1, Arg0, DWordAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            VAR2,   32
        }

        Local0 = VAR2 /* \M004.VAR2 */
        Return (Local0)
    }

    Method (M005, 2, Serialized)
    {
        Local0 = Arg0
        OperationRegion (VARM, SystemIO, 0x0CD8, 0x08)
        Field (VARM, DWordAcc, NoLock, Preserve)
        {
            VAR1,   32
        }

        BankField (VARM, VAR1, Arg0, DWordAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            VAR2,   32
        }

        VAR2 = Arg1
    }

    Method (M006, 3, Serialized)
    {
        Local0 = (M004 (Arg0) & Arg1)
        Local1 = (Local0 | Arg2)
        M005 (Arg0, Local1)
    }

    Method (M002, 2, Serialized)
    {
        If ((Arg0 == Zero))
        {
            If ((Arg1 == Zero))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFEFFF, Zero)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFEFE, Zero)
            }

            If ((Arg1 == One))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFDFFF, Zero)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFDFD, Zero)
            }

            If ((Arg1 == 0x02))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFBFFF, Zero)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFBFB, Zero)
            }

            If ((Arg1 == 0x03))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFF7FFF, Zero)
                M006 (M003 (One, Zero, 0x65), 0xFFFFF7F7, Zero)
            }

            Sleep (One)
        }

        If ((Arg0 == One))
        {
            If ((Arg1 == Zero))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFEFFF, 0x1000)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFEFE, 0x0101)
            }

            If ((Arg1 == One))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFDFFF, 0x2000)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFDFD, 0x0202)
            }

            If ((Arg1 == 0x02))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFFBFFF, 0x4000)
                M006 (M003 (One, Zero, 0x65), 0xFFFFFBFB, 0x0404)
            }

            If ((Arg1 == 0x03))
            {
                M006 (M003 (0x06, Zero, 0xC0), 0xFFFF7FFF, 0x8000)
                M006 (M003 (One, Zero, 0x65), 0xFFFFF7F7, 0x0808)
            }

            Sleep (One)
        }

        If ((Arg0 == Zero))
        {
            M008 (Arg1)
            Local0 = M004 (M003 (0x03, Arg1, 0xA5))
            Local0 &= 0xFF
            Local1 = 0x01F4
            While (((Local1 > Zero) && (Local0 != 0x10)))
            {
                Local0 = M004 (M003 (0x03, Arg1, 0xA5))
                Local0 &= 0xFF
                Local1--
                Sleep (One)
            }

            If ((Local0 != 0x10))
            {
                M007 (Arg1)
            }
        }
    }

    Method (M008, 1, Serialized)
    {
        Local0 = M019 (Zero, 0x15, Arg0, 0x88)
        Local1 = ((Local0 & 0xFFFFFFF0) | 0x02)
        M020 (Zero, 0x15, Arg0, 0x88, Local1)
        M006 (M003 (0x03, Arg0, 0xA4), 0xFFFFFFFE, One)
        M006 (M003 (0x03, Arg0, 0xA2), 0xFFFFDFFF, 0x2000)
        M006 (M003 (0x03, Arg0, 0xC0), 0xFFFF7FFF, 0x8000)
        M006 (M003 (0x03, Arg0, 0xA4), 0xDFFFFFFF, 0x20000000)
        Sleep (One)
    }

    Method (M007, 1, Serialized)
    {
        Local0 = M019 (Zero, 0x15, Arg0, 0x88)
        Local1 = ((Local0 & 0xFFFFFFF0) | One)
        M020 (Zero, 0x15, Arg0, 0x88, Local1)
        M006 (M003 (0x03, Arg0, 0xA4), 0xFFFFFFFE, Zero)
        M006 (M003 (0x03, Arg0, 0xA2), 0xFFFFDFFF, 0x2000)
        Sleep (One)
    }

    Method (M111, 2, Serialized)
    {
        If ((Arg0 != Zero))
        {
            Local0 = M110 /* \M110 */
            If (Local0)
            {
                Local0 += 0x10
                Local1 = Zero
                Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                While (((Local2 != 0xFF) && (Local2 != Zero)))
                {
                    Local3 = M013 ((Local0 + Local1), One, Zero, 0x08)
                    If (((Local2 == Arg0) && (Local3 == Arg1)))
                    {
                        Local4 = M013 ((Local0 + Local1), 0x02, Zero, 0x08)
                        If ((Local4 == Zero))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x03, 0x10, 0x08)
                            M010 (Local5, Local6)
                        }

                        If ((Local4 == One))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x03, 0x10, 0x08)
                            While ((M009 (Local5) != Local6)){}
                        }

                        If ((Local4 == 0x02))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x20)
                            Sleep (((Local5 + 0x03E7) / 0x03E8))
                        }
                    }

                    Local1 += 0x08
                    Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                }
            }
        }
    }

    Method (M228, 1, Serialized)
    {
        If ((Arg0 > 0x03))
        {
            Local0 = M110 /* \M110 */
            If (Local0)
            {
                Local0 += 0x10
                Local1 = Zero
                Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                While (((Local2 != 0xFF) && (Local2 != Zero)))
                {
                    Local3 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                    If ((Local3 == Arg0))
                    {
                        Local4 = M013 ((Local0 + Local1), 0x02, Zero, 0x08)
                        If ((Local4 == Zero))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x03, 0x10, 0x08)
                            M010 (Local5, Local6)
                        }

                        If ((Local4 == One))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x03, 0x10, 0x08)
                            While ((M009 (Local5) != Local6)){}
                        }

                        If ((Local4 == 0x02))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x20)
                            Sleep (((Local5 + 0x03E7) / 0x03E8))
                        }
                    }

                    Local1 += 0x08
                    Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                }
            }
        }
    }

    Method (M219, 2, Serialized)
    {
        If ((Arg0 != Zero))
        {
            Local0 = M221 /* \M221 */
            If ((Local0 & 0x02))
            {
                Local0 = M220 /* \M220 */
                If (Local0)
                {
                    Local0 += 0x10
                    Local1 = Zero
                    Local2 = One
                    While ((Local2 != 0xFF))
                    {
                        Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                        Local3 = M013 ((Local0 + Local1), One, Zero, 0x08)
                        Local4 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                        Local5 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                        If ((Local4 == Arg0))
                        {
                            If (((Local2 < 0x0A) && (Local5 & 0x80)))
                            {
                                If ((Arg1 == Zero))
                                {
                                    If ((M085 == 0x04))
                                    {
                                        M012 ((M084 + 0x0E00), Zero, (Local2 * 0x02), 0x02, Zero)
                                    }
                                    Else
                                    {
                                        M012 ((M084 + 0x0E00), (Local2 / 0x02), ((Local2 & 
                                            One) * 0x04), 0x04, Zero)
                                    }
                                }
                                ElseIf ((Local5 & 0x04))
                                {
                                    If ((Arg1 == One))
                                    {
                                        If ((M085 == 0x04))
                                        {
                                            M012 ((M084 + 0x0E00), Zero, (Local2 * 0x02), 0x02, 0x03)
                                        }
                                        Else
                                        {
                                            M012 ((M084 + 0x0E00), (Local2 / 0x02), ((Local2 & 
                                                One) * 0x04), 0x04, 0x0F)
                                        }
                                    }

                                    If ((Arg1 == 0x02))
                                    {
                                        Local6 = M019 (Zero, M013 ((Local0 + Local1), 0x05, Zero, 0x08), 
                                            M013 ((Local0 + Local1), 0x06, Zero, 0x08), 0x68)
                                        If (((Local6 & 0x0100) && (Local6 != Ones)))
                                        {
                                            If ((M085 == 0x04))
                                            {
                                                M012 ((M084 + 0x0E00), Zero, (Local2 * 0x02), 0x02, One)
                                            }
                                            Else
                                            {
                                                M012 ((M084 + 0x0E00), (Local2 / 0x02), ((Local2 & 
                                                    One) * 0x04), 0x04, Local3)
                                            }
                                        }
                                    }
                                }
                                ElseIf ((M085 == 0x04))
                                {
                                    M012 ((M084 + 0x0E00), Zero, (Local2 * 0x02), 0x02, One)
                                }
                                Else
                                {
                                    M012 ((M084 + 0x0E00), (Local2 / 0x02), ((Local2 & 
                                        One) * 0x04), 0x04, Local3)
                                }

                                Local2 = 0xFF
                            }
                        }

                        Local1 += 0x0C
                    }
                }
            }
        }
    }

    Method (M112, 2, Serialized)
    {
        If ((Arg0 != Zero))
        {
            Local0 = M109 /* \M109 */
            If (Local0)
            {
                Local0 += 0x10
                Local1 = Zero
                Local2 = One
                While (((Local2 != 0xFF) && (Local2 != Zero)))
                {
                    Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                    Local3 = M013 ((Local0 + Local1), One, Zero, 0x08)
                    If (((Local2 == Arg0) && (Local3 == Arg1)))
                    {
                        If ((Local3 < 0x02))
                        {
                            Local4 = M013 ((Local0 + Local1), 0x02, Zero, 0x08)
                            If ((Local4 == Zero))
                            {
                                Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x10)
                                Local6 = M013 ((Local0 + Local1), 0x03, 0x10, 0x08)
                                M010 (Local5, Local6)
                            }
                        }

                        If ((Local3 == 0x02))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x03, Zero, 0x20)
                            Sleep (((Local5 + 0x03E7) / 0x03E8))
                        }
                    }

                    Local1 += 0x08
                }
            }
        }
    }

    Method (M113, 1, Serialized)
    {
        If ((Arg0 != Zero))
        {
            Local0 = M108 /* \M108 */
            Local7 = One
            If (Local0)
            {
                Local0 += 0x10
                Local1 = Zero
                Local2 = One
                While (((Local2 != 0xFF) && (Local2 != Zero)))
                {
                    Local2 = M013 ((Local0 + Local1), Zero, Zero, 0x08)
                    If ((Local2 == Arg0))
                    {
                        Local2 = 0xFF
                        Local3 = M013 ((Local0 + Local1), One, Zero, 0x08)
                        If ((Local3 == Zero))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x02, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                            Local7 = (M009 (Local5) == Local6)
                        }

                        If ((Local3 == One))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x02, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                            Local7 = (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x05, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                            Local7 &= (M009 (Local5) == Local6)
                        }

                        If ((Local3 == 0x02))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x02, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                            Local7 = (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x05, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                            Local7 &= (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x08, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x0A, Zero, 0x08)
                            Local7 &= (M009 (Local5) == Local6)
                        }

                        If ((Local3 == 0x03))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x02, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                            Local7 = (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x05, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                            Local7 |= (M009 (Local5) == Local6)
                        }

                        If ((Local3 == 0x04))
                        {
                            Local5 = M013 ((Local0 + Local1), 0x02, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x04, Zero, 0x08)
                            Local7 = (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x05, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x07, Zero, 0x08)
                            Local7 |= (M009 (Local5) == Local6)
                            Local5 = M013 ((Local0 + Local1), 0x08, Zero, 0x10)
                            Local6 = M013 ((Local0 + Local1), 0x0A, Zero, 0x08)
                            Local7 |= (M009 (Local5) == Local6)
                        }
                    }
                    Else
                    {
                        Local1 += 0x0B
                    }
                }
            }
        }
        Else
        {
            Local7 = Zero
        }

        If (Local7)
        {
            Local7 = One
        }

        Return (Local7)
    }

    Method (M114, 3, Serialized)
    {
        Local7 = Zero
        If (!M001 (Arg0, Arg1))
        {
            Name (M115, Buffer (0x05){})
            CreateWordField (M115, Zero, M116)
            CreateField (M115, 0x10, 0x03, M117)
            CreateField (M115, 0x13, 0x05, M118)
            CreateByteField (M115, 0x03, M119)
            CreateByteField (M115, 0x04, M120)
            M116 = 0x05
            M119 = Zero
            M118 = Arg0
            M117 = Arg1
            If ((Arg2 == Zero))
            {
                M120 = Zero
                \_SB.ALIB (0x06, M115)
            }
            Else
            {
                M120 = One
                \_SB.ALIB (0x06, M115)
                Local0 = M017 (Zero, Arg0, Arg1, 0x19, Zero, 0x08)
                If (((Local0 != Zero) && (Local0 != 0xFF)))
                {
                    Local1 = M019 (Local0, Zero, Zero, Zero)
                    Local2 = 0x7FFFFFFF
                    Local2 |= 0x80000000
                    If (((Local1 != Zero) && (Local1 != Local2)))
                    {
                        Local7 = One
                    }
                }
            }
        }
        ElseIf ((Arg2 == Zero))
        {
            M002 (One, Arg1)
        }
        Else
        {
            M002 (Zero, Arg1)
            Local0 = M017 (Zero, Arg0, Arg1, 0x19, Zero, 0x08)
            If (((Local0 != Zero) && (Local0 != 0xFF)))
            {
                Local1 = M019 (Local0, Zero, Zero, Zero)
                Local2 = 0x7FFFFFFF
                Local2 |= 0x80000000
                If (((Local1 != Zero) && (Local1 != Local2)))
                {
                    Local7 = One
                }
            }
        }

        Return (Local7)
    }

    Method (M252, 2, Serialized)
    {
        If ((M085 >= 0x08))
        {
            Local0 = M251 /* \M251 */
            If (Local0)
            {
                Local0 += 0x10
                Local1 = Zero
                Local2 = Zero
                While ((Local2 != 0xFF))
                {
                    Local2 = M011 ((Local0 + Local1), Zero, Zero, 0x08)
                    Local3 = M011 ((Local0 + Local1), One, Zero, 0x08)
                    Local4 = M011 ((Local0 + Local1), 0x02, Zero, 0x08)
                    If (((Local2 == Arg0) && (Local3 == Arg1)))
                    {
                        Return (Local4)
                    }

                    Local1 += 0x03
                }
            }
        }

        Return (Ones)
    }

    Name (M046, Zero)
    Name (M047, Ones)
    Method (M045, 0, Serialized)
    {
        Local0 = Zero
        If ((M047 == Ones))
        {
            M047 = Zero
            M046 = Zero
            If (CondRefOf (\_OSI))
            {
                If (\_OSI ("Windows 2012"))
                {
                    M046 = One
                }

                If (\_OSI ("Windows 2013"))
                {
                    M046 = One
                }

                If (\_OSI ("Windows 2014"))
                {
                    M046 = One
                }

                If (\_OSI ("Windows 2015"))
                {
                    M046 = One
                }

                If (\_OSI ("Linux"))
                {
                    M046 = 0x02
                }
            }
        }

        If ((M046 == One))
        {
            Local0 = One
        }

        Return (Local0)
    }

    Method (M044, 0, Serialized)
    {
        M045 ()
        Local0 = Zero
        If ((M046 == 0x02))
        {
            Local0 = One
        }

        Return (Local0)
    }

    Method (M049, 2, Serialized)
    {
        Local0 = Zero
        If ((Arg0 != Zero))
        {
            Local0 = M011 (Arg0, Arg1, Zero, 0x08)
        }

        Return (Local0)
    }

    Mutex (M230, 0x00)
    Method (M232, 3, Serialized)
    {
        Local0 = Arg0
        Local1 = Arg1
        Local2 = Arg2
        Acquire (M230, 0xFFFF)
        Local0 = Arg0
        OperationRegion (VARM, SystemIO, M231, 0x02)
        Field (VARM, ByteAcc, NoLock, Preserve)
        {
            VAR1,   8, 
            VAR2,   8
        }

        VAR2 = Local1
        VAR1 = Local0
        Sleep (Local2)
        Release (M230)
    }

    Method (M043, 3, Serialized)
    {
        If (CondRefOf (MOEM))
        {
            Return (MOEM) /* External reference */
            Arg0
            Arg1
            Arg2
        }
        Else
        {
            Return (Zero)
        }
    }

    Method (MLIB, 2, Serialized)
    {
        Switch (Arg0)
        {
            Case (Zero)
            {
                Local0 = DerefOf (Arg1 [0x02])
                Switch (Local0)
                {
                    Case (0x03)
                    {
                        M228 (0x04)
                        M228 (0x05)
                    }
                    Case (0x04)
                    {
                        M228 (0x04)
                        M228 (0x06)
                    }
                    Case (0x03)
                    {
                        M228 (0x04)
                        M228 (0x07)
                    }

                }
            }

        }
    }

    Method (M248, 1, Serialized)
    {
        Switch (M085)
        {
            Case (0x08)
            {
                If ((Arg0 == Zero))
                {
                    Return (M017 (Zero, 0x07, One, 0x19, Zero, 0x08))
                }
                Else
                {
                    Return (M017 (Zero, 0x08, One, 0x19, Zero, 0x08))
                }
            }
            Case (0x09)
            {
                If ((Arg0 == Zero))
                {
                    Return (M017 (Zero, 0x08, One, 0x19, Zero, 0x08))
                }
                Else
                {
                    Return (M017 (Zero, 0x08, 0x02, 0x19, Zero, 0x08))
                }
            }
            Default
            {
                Return (Zero)
            }

        }
    }

    Method (MPTS, 1, NotSerialized)
    {
        Local0 = M049 (M128, 0x67)
        If (((Local0 & 0x03) == 0x03))
        {
            If ((M085 >= 0x08))
            {
                \_SB.PCI0.GP18.SATA.TPTS (Arg0)
            }
            Else
            {
                \_SB.PCI0.SATA.TPTS (Arg0)
            }
        }

        If ((M330 != Zero))
        {
            If ((M049 (M330, 0x11) && M049 (M330, 0x12)))
            {
                \_SB.IPTS (Arg0)
            }
        }
    }

    Method (MWAK, 1, NotSerialized)
    {
        Local0 = M049 (M128, 0x67)
        If (((Local0 & 0x03) == 0x03))
        {
            If ((M085 >= 0x08))
            {
                \_SB.PCI0.GP18.SATA.TWAK (Arg0)
            }
            Else
            {
                \_SB.PCI0.SATA.TWAK (Arg0)
            }
        }

        If ((M330 != Zero))
        {
            If ((M049 (M330, 0x11) && M049 (M330, 0x12)))
            {
                \_SB.IWAK (Arg0)
            }
        }
    }
}


/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20251212 (64-bit version)
 * Copyright (c) 2000 - 2025 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT3.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x0000057C (1404)
 *     Revision         0x01
 *     Checksum         0xF8
 *     OEM ID           "AMD"
 *     OEM Table ID     "BC250CST"
 *     OEM Revision     0x00000001 (1)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20260408 (539362312)
 */
DefinitionBlock ("", "SSDT", 1, "AMD", "BC250CST", 0x00000001)
{
    External (_PR_.P000, ProcessorObj)
    External (_PR_.P001, ProcessorObj)
    External (_PR_.P002, ProcessorObj)
    External (_PR_.P003, ProcessorObj)
    External (_PR_.P004, ProcessorObj)
    External (_PR_.P005, ProcessorObj)
    External (_PR_.P006, ProcessorObj)
    External (_PR_.P007, ProcessorObj)
    External (_PR_.P008, ProcessorObj)
    External (_PR_.P009, ProcessorObj)
    External (_PR_.P00A, ProcessorObj)
    External (_PR_.P00B, ProcessorObj)

    Scope (\_PR.P000)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                Zero, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P001)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                Zero, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P002)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                One, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P003)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                One, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P004)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x02, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P005)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x02, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P006)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x03, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P007)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x03, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P008)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x04, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P009)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x04, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P00A)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x05, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }

    Scope (\_PR.P00B)
    {
        Name (_CST, Package (0x03)  // _CST: C-States
        {
            0x02, 
            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (FFixedHW, 
                        0x02,               // Bit Width
                        0x02,               // Bit Offset
                        0x0000000000000000, // Address
                        ,)
                }, 

                One, 
                One, 
                Zero
            }, 

            Package (0x04)
            {
                ResourceTemplate ()
                {
                    Register (SystemIO, 
                        0x08,               // Bit Width
                        0x00,               // Bit Offset
                        0x0000000000000414, // Address
                        0x01,               // Access Size
                        )
                }, 

                0x02, 
                0x0190, 
                Zero
            }
        })
        Name (_CSD, Package (0x01)  // _CSD: C-State Dependencies
        {
            Package (0x06)
            {
                0x06, 
                Zero, 
                0x05, 
                0xFE, 
                0x02, 
                Zero
            }
        })
    }
}


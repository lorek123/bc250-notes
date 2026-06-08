/* Decompiled from: d00_e09_ABL1~0x31_22.4.6.0 */

/* Reset @ 00000000 */

/* WARNING: Control flow encountered bad instruction data */

void Reset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* UndefinedInstruction @ 00000004 */

/* WARNING: Control flow encountered bad instruction data */

void UndefinedInstruction(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* PrefetchAbort @ 0000000c */

/* WARNING: Control flow encountered bad instruction data */

void PrefetchAbort(void)

{
  undefined4 unaff_r11;
  undefined4 *in_r12;
  bool in_CY;
  
  if (!in_CY) {
    *in_r12 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* NotUsed @ 00000014 */

/* WARNING: Control flow encountered bad instruction data */

void NotUsed(uint param_1)

{
  undefined unaff_r10;
  undefined *unaff_r11;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    unaff_r11 = (undefined *)(param_1 & param_1 >> 0x1c);
  }
  if (!in_NG) {
    *unaff_r11 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* IRQ @ 00000018 */

/* WARNING: Control flow encountered bad instruction data */

void IRQ(void)

{
  undefined unaff_r10;
  undefined *unaff_r11;
  bool in_NG;
  
  if (!in_NG) {
    *unaff_r11 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FIQ @ 0000001c */

/* WARNING: Control flow encountered bad instruction data */

void FIQ(void)

{
  undefined unaff_r10;
  undefined *unaff_r11;
  bool in_NG;
  
  if (!in_NG) {
    *unaff_r11 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00000114 @ 00000114 */

undefined8 FUN_00000114(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar5 = param_3 - 0x20;
  if (0x1f < param_3) {
    do {
      uVar7 = *(undefined4 *)(param_2 + 4);
      uVar8 = *(undefined4 *)(param_2 + 8);
      uVar9 = *(undefined4 *)(param_2 + 0xc);
      bVar10 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
      *param_1 = *(undefined4 *)param_2;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_4 = *(undefined4 *)(param_2 + 0x10);
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 0x18);
      uVar9 = *(undefined4 *)(param_2 + 0x1c);
      param_2 = param_2 + 0x20;
      param_1[4] = param_4;
      param_1[5] = uVar7;
      param_1[6] = uVar8;
      param_1[7] = uVar9;
      param_1 = param_1 + 8;
    } while (bVar10);
  }
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(uVar5 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar2 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar6 = (undefined2)param_4;
  if ((uVar5 & 3) != 0) {
    bVar11 = (bool)((byte)(uVar5 >> 1) & 1);
    uVar5 = uVar5 << 0x1f;
    bVar10 = (int)uVar5 < 0;
    pbVar4 = pbVar3;
    if (bVar11) {
      pbVar4 = pbVar3 + 2;
      uVar6 = *(undefined2 *)pbVar3;
    }
    pbVar3 = pbVar4;
    if (bVar10) {
      pbVar3 = pbVar4 + 1;
      uVar5 = (uint)*pbVar4;
    }
    puVar1 = puVar2;
    if (bVar11) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar6;
    }
    puVar2 = puVar1;
    if (bVar10) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)uVar5;
    }
    return CONCAT44(pbVar3,puVar2);
  }
  return CONCAT44(pbVar3,puVar2);
}



/* FUN_000002f4 @ 000002f4 */

/* WARNING: Removing unreachable block (ram,0x000002d4) */
/* WARNING: Removing unreachable block (ram,0x000002e0) */
/* WARNING: Removing unreachable block (ram,0x000002d0) */

longlong FUN_000002f4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  iVar3 = 0;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        uVar1 = param_2 << 6;
        iVar3 = -0x4000000;
        if (param_1 >> 8 < uVar1) goto LAB_00000268;
        uVar1 = param_2 << 0xc;
        iVar3 = -0x100000;
        if (param_1 >> 8 < uVar1) goto LAB_00000268;
        uVar1 = param_2 << 0x12;
        iVar3 = -0x4000;
        if (uVar1 <= param_1 >> 8) {
          uVar1 = param_2 << 0x18;
          iVar3 = -0x100;
        }
        bVar4 = uVar1 == 0;
        if (!bVar4) {
          do {
            if (bVar4) {
              uVar1 = uVar1 >> 6;
            }
LAB_00000268:
            bVar4 = uVar1 <= param_1 >> 7;
            if (bVar4) {
              param_1 = param_1 + uVar1 * -0x80;
            }
            bVar5 = uVar1 <= param_1 >> 6;
            if (bVar5) {
              param_1 = param_1 + uVar1 * -0x40;
            }
            bVar6 = uVar1 <= param_1 >> 5;
            if (bVar6) {
              param_1 = param_1 + uVar1 * -0x20;
            }
            bVar7 = uVar1 <= param_1 >> 4;
            if (bVar7) {
              param_1 = param_1 + uVar1 * -0x10;
            }
            bVar8 = uVar1 <= param_1 >> 3;
            if (bVar8) {
              param_1 = param_1 + uVar1 * -8;
            }
            uVar2 = ((((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 +
                    (uint)bVar7) * 2 + (uint)bVar8;
            bVar5 = uVar1 <= param_1 >> 2;
            if (bVar5) {
              param_1 = param_1 + uVar1 * -4;
            }
            bVar4 = CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5);
            iVar3 = uVar2 * 2 + (uint)bVar5;
          } while (bVar4);
          bVar4 = uVar1 <= param_1 >> 1;
          if (bVar4) {
            param_1 = param_1 + uVar1 * -2;
          }
          uVar2 = param_1 - uVar1;
          if (uVar1 > param_1) {
            uVar2 = param_1;
          }
          return CONCAT44(uVar2,(iVar3 * 2 + (uint)bVar4) * 2 + (uint)(uVar1 <= param_1));
        }
        return (ulonglong)param_1 << 0x20;
      }
      bVar4 = param_2 <= param_1 >> 7;
      if (bVar4) {
        param_1 = param_1 + param_2 * -0x80;
      }
      bVar5 = param_2 <= param_1 >> 6;
      if (bVar5) {
        param_1 = param_1 + param_2 * -0x40;
      }
      bVar6 = param_2 <= param_1 >> 5;
      if (bVar6) {
        param_1 = param_1 + param_2 * -0x20;
      }
      iVar3 = ((uint)bVar4 * 2 + (uint)bVar5) * 2 + (uint)bVar6;
    }
    bVar4 = param_2 <= param_1 >> 4;
    if (bVar4) {
      param_1 = param_1 + param_2 * -0x10;
    }
    bVar5 = param_2 <= param_1 >> 3;
    if (bVar5) {
      param_1 = param_1 + param_2 * -8;
    }
    bVar6 = param_2 <= param_1 >> 2;
    if (bVar6) {
      param_1 = param_1 + param_2 * -4;
    }
    iVar3 = ((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
  }
  bVar4 = param_2 <= param_1 >> 1;
  if (bVar4) {
    param_1 = param_1 + param_2 * -2;
  }
  uVar1 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar1 = param_1;
  }
  return CONCAT44(uVar1,(iVar3 * 2 + (uint)bVar4) * 2 + (uint)(param_2 <= param_1));
}



/* FUN_00000318 @ 00000318 */

undefined4 FUN_00000318(undefined *param_1)

{
  if (param_1 == &DAT_00005341) {
    return 0x3d8;
  }
  if ((int)param_1 < 0x5342) {
    if (param_1 == (undefined *)0x4241) {
      return 0x3c0;
    }
    if (param_1 == (undefined *)0x4541) {
      return 0x3a8;
    }
    if (param_1 == (undefined *)0x4d41) {
      return 0x3d0;
    }
    if (param_1 == (undefined *)0x5241) {
      return 0x3c8;
    }
  }
  else {
    if (param_1 == (undefined *)0x5441) {
      return 0x3e0;
    }
    if (param_1 == (undefined *)0x5641) {
      return 0x3b8;
    }
    if (param_1 == (undefined *)0x5741) {
      return 0x3b0;
    }
  }
  FUN_000065c8(DAT_0000037c);
  return 0x380;
}



/* FUN_00000814 @ 00000814 */

uint FUN_00000814(void)

{
  undefined auStack_20 [12];
  uint local_14;
  uint local_10;
  
  FUN_00006d20(auStack_20);
  return local_10 & 0xff | (local_14 & 0xff) << 8;
}



/* FUN_00000830 @ 00000830 */

undefined4 FUN_00000830(short *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)*DAT_00000880 == '\x01') {
    uVar2 = 0;
    do {
      iVar1 = *DAT_00000884 + uVar2 * 0x10;
      if ((((*(short *)(iVar1 + 0x1a) == param_1[1]) &&
           (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 2))) &&
          (*(short *)(iVar1 + 0x18) == *param_1)) &&
         ((*(int *)(iVar1 + 0x20) == *(int *)(param_1 + 4) &&
          (*(int *)(iVar1 + 0x24) == *(int *)(param_1 + 6))))) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
  }
  return 0;
}



/* FUN_00000888 @ 00000888 */

void FUN_00000888(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(char *)*DAT_000008bc == '\x01') {
    FUN_0000140c(4,0,0x8c0);
    puVar3 = (undefined4 *)*DAT_000008dc;
    *puVar3 = 0;
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      *(undefined2 *)((int)puVar3 + uVar1 * 0x10 + 0x1a) = 0;
      puVar3[uVar1 * 4 + 7] = 0;
      puVar3[uVar1 * 4 + 8] = 0;
      puVar3[uVar1 * 4 + 9] = 0;
      uVar1 = uVar2;
    } while (uVar2 < 0x20);
  }
  return;
}



/* FUN_000008e0 @ 000008e0 */

undefined4 FUN_000008e0(short *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)*DAT_0000092c == '\x01') {
    uVar1 = 0;
    do {
      iVar2 = *DAT_00000930 + uVar1 * 0x10;
      if (((*(short *)(iVar2 + 0x1a) == param_1[1]) &&
          (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 2))) &&
         (*(short *)(iVar2 + 0x18) == *param_1)) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*DAT_00000930 + uVar1 * 0x10 + 0x20);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(iVar2 + 0x24);
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x20);
  }
  return 0;
}



/* FUN_00000934 @ 00000934 */

undefined8 FUN_00000934(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  local_18 = param_1;
  local_14 = param_2;
  if (*(char *)*DAT_00000994 == '\x01') {
    local_10 = param_3;
    local_c = param_4;
    FUN_0000140c(4,0,0x998);
    local_18 = 0x218;
    local_14 = s_Undefined_BF_enum___x_0000a038 + 0xd;
    local_10 = CONCAT31(local_10._1_3_,2);
    iVar2 = FUN_00006338(&local_18,param_1);
    if (iVar2 == 9) {
      FUN_00000ac0(1);
    }
    piVar1 = DAT_000009bc;
    *DAT_000009bc = (int)local_c;
    *local_c = 0;
    uVar3 = 0;
    iVar2 = *piVar1;
    do {
      iVar4 = iVar2 + uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(undefined2 *)(iVar4 + 0x1a) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
    } while (uVar3 < 0x20);
  }
  return CONCAT44(local_14,local_18);
}



/* FUN_000009c0 @ 000009c0 */

/* WARNING: Removing unreachable block (ram,0x000009f8) */
/* WARNING: Removing unreachable block (ram,0x000009fc) */

void FUN_000009c0(undefined2 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined auStack_78 [4];
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  undefined local_38;
  undefined auStack_34 [4];
  uint local_30;
  int local_20;
  
  piVar1 = DAT_00000aa0;
  if (*(char *)*DAT_00000aa0 == '\x01') {
    FUN_0000140c(4,0,0xaa4);
    iVar3 = FUN_00000830(param_1);
    puVar2 = DAT_00000abc;
    if (iVar3 == 0) {
      uVar5 = *(uint *)*DAT_00000abc;
      if (0x1f < uVar5) {
        do {
        } while( true );
      }
      FUN_00006d20(auStack_34);
      piVar4 = (int *)*puVar2;
      *(undefined2 *)((int)piVar4 + uVar5 * 0x10 + 0x1a) = param_1[1];
      piVar4[uVar5 * 4 + 7] = *(int *)(param_1 + 2);
      piVar4[uVar5 * 4 + 8] = *(int *)(param_1 + 4);
      piVar4[uVar5 * 4 + 9] = *(int *)(param_1 + 6);
      *(undefined2 *)(piVar4 + uVar5 * 4 + 6) = *param_1;
      *piVar4 = *piVar4 + 1;
      if (local_30 < 2) {
        if ((*(char *)(*piVar1 + 0x10) == '\x01') &&
           (*(short *)((int)piVar4 + uVar5 * 0x10 + 0x1a) == 9)) {
          FUN_00000ac0(1);
        }
      }
      else if (local_20 == 0) {
        if ((param_2 != 0) && (*(short *)((int)piVar4 + uVar5 * 0x10 + 0x1a) == 9)) {
          local_38 = 0;
          local_70 = (uint)*(ushort *)((int)piVar4 + uVar5 * 0x10 + 0x1a) |
                     piVar4[uVar5 * 4 + 7] << 0x10;
          local_6c = piVar4[uVar5 * 4 + 8];
          local_68 = piVar4[uVar5 * 4 + 9];
          local_74 = (uint)*(ushort *)(piVar4 + uVar5 * 4 + 6);
          FUN_000013cc(0,auStack_78);
        }
      }
      else if ((*(char *)(*piVar1 + 0x10) == '\x01') &&
              (*(short *)((int)piVar4 + uVar5 * 0x10 + 0x1a) == 9)) {
        FUN_00000ac0(1);
        do {
        } while( true );
      }
    }
  }
  return;
}



/* FUN_00000ac0 @ 00000ac0 */

void FUN_00000ac0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint local_25c [6];
  undefined4 uStack_244;
  undefined4 local_240;
  undefined auStack_44 [4];
  uint local_40;
  int local_30;
  
  FUN_00006d20(auStack_44);
  piVar1 = DAT_00000c08;
  if (*(char *)*DAT_00000c08 == '\x01') {
    if ((local_40 < 2) || (local_30 != 0)) {
      FUN_0000140c(4,0,0xc20);
      puVar2 = (uint *)*DAT_00000c38;
      if (puVar2 == (uint *)0x0) {
        uStack_244._2_2_ = 9;
        puVar7 = &uStack_244;
        puVar2 = local_25c;
        local_25c[0] = 0;
        local_240 = 0x3000;
      }
      else {
        puVar7 = puVar2 + 6;
      }
      uVar3 = *(uint *)(*piVar1 + 0xc) | 0xfc000000;
      uVar4 = *(uint *)(*piVar1 + 4) | 0xfc000000;
      do {
        FUN_0000140c(4,0,0xc3c);
        if (0x1f < *puVar2) {
          *puVar2 = 0x1f;
        }
        func_0x00011e78(uVar4,uVar3,DAT_00000c5c,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c84(uVar4,uVar3);
        func_0x00011e78(uVar4,uVar3,*puVar2,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c84(uVar4,uVar3);
        for (uVar6 = 0; uVar6 < *puVar2; uVar6 = uVar6 + 1) {
          uVar5 = 0;
          do {
            func_0x00011e78(uVar4,uVar3,puVar7[uVar5 + uVar6 * 4],*(uint *)(*piVar1 + 0x18) & 0xff,
                            *(undefined4 *)(*piVar1 + 0x1c));
            FUN_00000c84(uVar4,uVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < 4);
        }
        func_0x00011e78(uVar4,uVar3,DAT_00000c60,*(uint *)(*piVar1 + 0x18) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c84(uVar4,uVar3);
        FUN_0000140c(4,0,0xc64);
      } while (param_1 != 0);
      if (*puVar2 == 0x20) {
        FUN_00000888();
      }
    }
  }
  else {
    FUN_0000140c(4,0,0xc0c);
  }
  return;
}



/* FUN_00000c84 @ 00000c84 */

void FUN_00000c84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00000cd8;
  if (*(char *)*DAT_00000cd8 == '\x01') {
    FUN_0000140c(4,0,0xcdc,param_4,param_4);
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 3) == '\x01') {
      FUN_00000d00(param_1,param_2,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c));
    }
    else {
      software_interrupt(0x1b);
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x24) == '\x01') {
      func_0x00011e78(param_1,param_2,0,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c)
                     );
    }
  }
  return;
}



/* FUN_00000d00 @ 00000d00 */

void FUN_00000d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_1c;
  
  local_1c = 0;
  FUN_0000140c(4,0,0xd38,param_4,param_3);
  iVar1 = DAT_00000d5c;
  while (local_1c != iVar1) {
    func_0x000115a0(param_1,param_2,&local_1c,param_3,param_4);
  }
  return;
}



/* FUN_00000d60 @ 00000d60 */

void FUN_00000d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_30 [4];
  uint local_2c;
  int local_1c;
  
  FUN_00006d20(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    FUN_00000f50(param_1,param_2,param_3);
  }
  else {
    FUN_000010d8(param_1,param_2,param_3);
  }
  return;
}



/* FUN_00000d94 @ 00000d94 */

void FUN_00000d94(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar2;
  byte local_38 [4];
  undefined auStack_34 [4];
  uint local_30;
  int local_20;
  undefined auStack_18 [4];
  
  iVar2 = DAT_00000ea4;
  local_38[0] = 0;
  FUN_00006c84(3,param_2,DAT_00000ea4,0,local_38,0);
  FUN_0000140c(4,0,0xea8,local_38[0]);
  FUN_0000140c(4,0,0xea8);
  FUN_00006cd0(3,extraout_r1,iVar2,0,local_38,0);
  local_38[0] = 0;
  iVar2 = DAT_00000ea4 + 0x18;
  FUN_00006c84(1,extraout_r1_00,iVar2,0,local_38,0);
  FUN_0000140c(4,0,0xeb4,local_38[0]);
  local_38[0] = local_38[0] & 0x7f;
  FUN_0000140c(4,0,0xeb4);
  FUN_00006cd0(1,extraout_r1_01,iVar2,0,local_38,0);
  FUN_00006d20(auStack_34);
  FUN_00006ea4(3,DAT_00000ec4,DAT_00000ec0,param_1);
  iVar2 = FUN_00004900(2,1,local_38,auStack_18,0);
  if (iVar2 != 0) {
    bVar1 = local_38[0];
    if (local_38[0] != 1) {
      bVar1 = 0;
    }
    if (bVar1 != 0) {
      *DAT_00000ec8 = 1;
      iVar2 = FUN_00004930(s_ExternalVrefCtl____d_00001bf4 + 0xe,1,local_38,auStack_18,0);
      if (iVar2 == 0) {
        *DAT_00000ecc = 0;
      }
      else {
        *DAT_00000ecc = local_38[0];
      }
      if (*DAT_00000ec0 == DAT_00000ed0) {
        return;
      }
      if ((1 < local_30) && (local_20 == 0)) {
        return;
      }
      func_0x00011920(param_1);
      return;
    }
  }
  *DAT_00000ec8 = 0;
  return;
}



/* FUN_00000ed4 @ 00000ed4 */

undefined4 FUN_00000ed4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  uint local_24;
  int local_14;
  
  FUN_00006d20(auStack_28);
  if (local_24 < 2) {
    uVar1 = 0;
  }
  else if (local_14 == 0) {
    FUN_0000140c(0,0x40000000,DAT_00000f4c);
    uVar1 = 9;
  }
  else {
    FUN_0000140c(4,0,0xf18);
    uVar1 = FUN_000010b8(param_1,0xb,param_2);
  }
  return uVar1;
}



/* FUN_00000f50 @ 00000f50 */

undefined4 FUN_00000f50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined auStack_178 [312];
  undefined auStack_40 [32];
  
  FUN_00006d20(auStack_40);
  uVar4 = 0;
  if (param_2 != 8) {
    iVar2 = FUN_000010b8(param_1,param_2,auStack_178);
    iVar1 = DAT_00001010;
    if (iVar2 == 0) {
      for (uVar3 = 0; *(int *)(DAT_00001010 + uVar3 * 8) != 0; uVar3 = uVar3 + 1 & 0xff) {
        if (*(int *)(DAT_00001010 + uVar3 * 8 + 4) == param_2) {
          iVar2 = (**(code **)(DAT_00001010 + uVar3 * 8))(param_3,param_1);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 9;
          }
          if (*(int *)(iVar1 + uVar3 * 8) != 0) {
            return uVar4;
          }
          break;
        }
      }
      FUN_0000140c(0,0x40000000,s__ERROR___Master__ABL__Error__no_s_00001014);
      FUN_000065c8(DAT_0000104c);
    }
    else {
      FUN_0000140c(0,0x40000000,0xfd8);
      uVar4 = 9;
    }
  }
  return uVar4;
}



/* FUN_00001050 @ 00001050 */

undefined4 FUN_00001050(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  uint local_24;
  int local_14;
  
  FUN_00006d20(auStack_28);
  if (local_24 < 2) {
    uVar1 = 0;
  }
  else if (local_14 == 0) {
    FUN_0000140c(0,0x40000000,DAT_000010b4);
    uVar1 = 9;
  }
  else {
    FUN_0000140c(4,0,s_Master__Get_Data_from_Slaves_00001094);
    uVar1 = FUN_000010b8(param_1,0xc,param_2);
  }
  return uVar1;
}



/* FUN_000010b8 @ 000010b8 */

undefined4 FUN_000010b8(undefined4 param_1)

{
  undefined auStack_48 [32];
  undefined auStack_28 [32];
  
  thunk_FUN_00006c7e(auStack_48,0,0x20,param_1);
  FUN_00006d20(auStack_28);
  return 0;
}



/* FUN_000010d8 @ 000010d8 */

undefined4 FUN_000010d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_90;
  undefined *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [68];
  undefined auStack_3c [20];
  int local_28;
  
  local_90 = 0;
  local_8c = (undefined *)0x0;
  local_88 = 0;
  local_84 = 0;
  if (param_2 == 8) {
    local_90._0_2_ = 0;
    local_90._2_2_ = 9;
    local_8c = &DAT_00003004;
    uVar2 = FUN_00000814();
    local_90 = CONCAT22(local_90._2_2_,uVar2);
    FUN_000009c0(&local_90,1);
    FUN_000065c8(DAT_0000117c);
  }
  FUN_00006d20(auStack_3c);
  pcVar5 = DAT_00001180;
  if (local_28 == 0) {
    iVar3 = FUN_000013ac(param_1,param_2,auStack_80);
    iVar1 = DAT_00001184;
    if (iVar3 == 0) {
      for (uVar6 = 0; *(int *)(DAT_00001184 + uVar6 * 8) != 0; uVar6 = uVar6 + 1 & 0xff) {
        if (*(int *)(DAT_00001184 + uVar6 * 8 + 4) == param_2) {
          uVar4 = (**(code **)(DAT_00001184 + uVar6 * 8))(param_3,param_1);
          if (*(int *)(iVar1 + uVar6 * 8) != 0) {
            return uVar4;
          }
          break;
        }
      }
      pcVar5 = s__ERROR___Slave__ABL__Error__No_s_00001188;
    }
    else {
      pcVar5 = DAT_00001180 + -0x54;
    }
  }
  FUN_0000140c(0,0x40000000,pcVar5);
  return 9;
}



/* FUN_000011c0 @ 000011c0 */

undefined4
FUN_000011c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  uint uVar2;
  undefined auStack_78 [20];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c [7];
  undefined4 local_40;
  undefined auStack_34 [20];
  int local_20;
  
  FUN_00006d20(auStack_34);
  if (local_20 == 0) {
    FUN_0000140c(4,0,s_Slave__ABL__Get_Broadcast_Data_f_0000125c);
    local_40 = param_5;
    local_64 = param_2;
    uStack_60 = param_3;
    uVar1 = FUN_000013ac(param_1,0xb,auStack_78);
    uVar2 = 0;
    do {
      *(undefined4 *)(param_4 + uVar2 * 4) = local_5c[uVar2];
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 7);
  }
  else {
    FUN_0000140c(0,0x40000000,s__ERROR___Slave__ABL__Error__inva_00001220);
    uVar1 = 9;
  }
  return uVar1;
}



/* FUN_0000128c @ 0000128c */

undefined4
FUN_0000128c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined auStack_78 [20];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c [7];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined auStack_34 [20];
  int local_20;
  
  FUN_00006d20(auStack_34);
  if (local_20 == 0) {
    FUN_0000140c(4,0,s_Slave__ABL__Send_Data_to_Master_00001328);
    uStack_60 = 0;
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1 & 0xff;
      local_5c[uVar2] = *(undefined4 *)(param_3 + uVar2 * 4);
      uVar2 = uVar3;
    } while (uVar3 < 7);
    uStack_3c = param_5;
    local_64 = param_2;
    local_40 = param_4;
    uVar1 = FUN_000013ac(param_1,0xc,auStack_78);
  }
  else {
    FUN_0000140c(0,0x40000000,s__ERROR___Slave__ABL__Error__inva_000012f0);
    uVar1 = 9;
  }
  return uVar1;
}



/* FUN_0000134c @ 0000134c */

void FUN_0000134c(void)

{
  int iVar1;
  uint uVar2;
  undefined auStack_20 [4];
  int local_1c;
  
  FUN_00006d20(auStack_20);
  FUN_0000140c(4,0,s_Slave__ABL__Init_Slave_states_00001384);
  iVar1 = DAT_000013a4;
  for (uVar2 = 0; uVar2 < local_1c - 1U; uVar2 = uVar2 + 1 & 0xff) {
    *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
  }
  *DAT_000013a8 = 1;
  return;
}



/* FUN_000013ac @ 000013ac */

undefined4 FUN_000013ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auStack_28 [28];
  
  FUN_00006d20(auStack_28);
  *(undefined *)(param_3 + 0x40) = 0;
  software_interrupt(6);
  return 0;
}



/* FUN_000013cc @ 000013cc */

undefined4 FUN_000013cc(void)

{
  undefined auStack_20 [32];
  
  FUN_00006d20(auStack_20);
  return 0;
}



/* FUN_000013dc @ 000013dc */

undefined4 FUN_000013dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_00005184();
  uVar1 = DAT_00001408;
  FUN_00006ea4(3,DAT_00001408,&uStack_14,param_1,param_3);
  FUN_00006f70(3,uVar1,&uStack_14,param_1,0);
  return 0;
}



/* FUN_0000140c @ 0000140c */

void FUN_0000140c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if ((param_1 == 0x20 && param_2 == 0) || (param_1 == 1 && param_2 == 0)) {
    param_1 = 4;
    param_2 = 0;
  }
  uStack_4 = param_4;
  FUN_00001454(param_1,param_2,param_3,&uStack_4);
  return;
}



/* FUN_00001432 @ 00001432 */

undefined4 FUN_00001432(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  for (iVar3 = 0; puVar2 = *(undefined4 **)(param_1 + iVar3 * 4), puVar2 != (undefined4 *)0x0;
      iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* FUN_00001454 @ 00001454 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001454(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_234;
  uint local_230;
  uint uStack_22c;
  undefined local_228 [4];
  undefined auStack_224 [512];
  int local_24;
  
  iVar1 = DAT_0000151c;
  iVar2 = *DAT_00001518;
  local_24 = iVar2;
  FUN_000055fc(DAT_0000151c);
  iVar3 = FUN_00001432(iVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00001528(param_3,param_4,auStack_224,0x200,&local_234);
    if (iVar3 == 1) {
      FUN_00006948(auStack_224,0x200);
      local_234 = 0x200;
    }
    local_228[0] = 0;
    for (uVar5 = 0; puVar4 = *(undefined4 **)(iVar1 + uVar5 * 4), puVar4 != (undefined4 *)0x0;
        uVar5 = uVar5 + 1 & 0xff) {
      iVar3 = (*(code *)*puVar4)();
      if (iVar3 != 0) {
        local_230 = DAT_00001520;
        uStack_22c = DAT_00001524;
        (**(code **)(*(int *)(iVar1 + uVar5 * 4) + 4))(&local_230);
        if ((param_1 & local_230) != 0 || (param_2 & uStack_22c) != 0) {
          (**(code **)(*(int *)(iVar1 + uVar5 * 4) + 8))(param_1,param_2,local_228);
          (**(code **)(*(int *)(iVar1 + uVar5 * 4) + 0xc))(auStack_224,local_234,local_228);
        }
      }
    }
  }
  if (local_24 == iVar2) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00001528 @ 00001528 */

undefined4 FUN_00001528(byte *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint local_34;
  undefined4 local_30;
  byte *pbStack_2c;
  undefined4 *local_28;
  int iStack_24;
  int local_20;
  
  iVar7 = 0;
  pbStack_2c = param_1;
  local_28 = param_2;
  iStack_24 = param_3;
  local_20 = param_4;
  do {
    bVar1 = *param_1;
    if (bVar1 == 0) {
      if (local_20 == 0) {
LAB_00001650:
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        *(undefined *)(param_3 + iVar7) = 0;
        *param_5 = iVar7;
      }
      return uVar5;
    }
    if (local_20 == 0) goto LAB_00001650;
    if (bVar1 == 0x25) {
      param_1 = (byte *)FUN_0000564c(param_1,&local_34,&local_30,&local_28);
      bVar1 = *param_1;
      if (bVar1 == 100) {
        uVar5 = *local_28;
        local_28 = local_28 + 1;
        iVar3 = func_0x00011d54(param_3 + iVar7,uVar5,local_34,&local_20);
LAB_000015e4:
        if (iVar3 == 0xffff) goto LAB_00001650;
        iVar7 = iVar7 + iVar3;
      }
      else if (bVar1 < 0x65) {
        if (bVar1 == 0x25) {
LAB_0000158e:
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001650;
          *(byte *)(param_3 + iVar7) = *param_1;
        }
        else {
          if (bVar1 == 0x53) goto LAB_000015fe;
          if (bVar1 == 0x58) {
            local_34 = local_34 | 0x20;
            local_30 = 0x10;
LAB_000015b8:
            if ((int)(local_34 << 0x1b) < 0) {
              puVar2 = (undefined4 *)((int)local_28 + 7U & 0xfffffff8);
              local_28 = puVar2 + 2;
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
            }
            else {
              uVar5 = *local_28;
              local_28 = local_28 + 1;
              uVar6 = 0;
            }
            iVar3 = func_0x00011c98(param_3 + iVar7,local_34,uVar5,uVar6,local_34,local_30,&local_20
                                   );
            goto LAB_000015e4;
          }
          if (bVar1 != 99) goto LAB_00001580;
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001650;
          uVar5 = *local_28;
          local_28 = local_28 + 1;
          *(char *)(param_3 + iVar7) = (char)uVar5;
        }
        iVar7 = iVar7 + 1;
      }
      else if (bVar1 == 0x73) {
LAB_000015fe:
        puVar2 = local_28 + 1;
        for (pcVar4 = (char *)*local_28; local_28 = puVar2, *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001650;
          *(char *)(param_3 + iVar7) = *pcVar4;
          iVar7 = iVar7 + 1;
        }
      }
      else {
        if (bVar1 != 0x76) {
          if (bVar1 == 0x78) goto LAB_000015b8;
LAB_00001580:
          local_20 = local_20 + -1;
          if (local_20 != 0) {
            *(undefined *)(param_3 + iVar7) = 0x25;
            iVar7 = iVar7 + 1;
            goto LAB_0000158e;
          }
          goto LAB_00001650;
        }
        FUN_000065c8(DAT_00001654);
      }
    }
    else {
      *(byte *)(param_3 + iVar7) = bVar1;
      iVar7 = iVar7 + 1;
      local_20 = local_20 + -1;
    }
    param_1 = param_1 + 1;
  } while( true );
}



/* FUN_00001660 @ 00001660 */

void FUN_00001660(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  undefined auStack_30 [4];
  uint local_2c;
  int local_1c;
  undefined4 local_14;
  
  FUN_00006d20(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    if (*DAT_000016e0 == DAT_000016e4) {
      local_14 = DAT_000016e8;
      uVar2 = 3;
      pcVar3 = (char *)&local_14;
      while( true ) {
        FUN_00006b98(uVar2,0x80,pcVar3,0);
        bVar5 = param_2 == 0;
        param_2 = param_2 + -1;
        if (bVar5) break;
        uVar2 = 1;
        pcVar3 = param_1;
        param_1 = param_1 + 1;
      }
      local_14 = DAT_000016ec;
      FUN_00006b98(3,0x80,&local_14,0);
    }
    else {
      iVar4 = 200;
      while (bVar5 = param_2 != 0, param_2 = param_2 + -1, bVar5) {
        do {
          if (*param_1 == '\n') {
            FUN_000016f0(0xd);
          }
          iVar1 = FUN_000016f0(*param_1);
          iVar4 = iVar4 + -1;
        } while ((iVar1 == 0) && (iVar4 != 0));
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



/* FUN_000016f0 @ 000016f0 */

undefined4 FUN_000016f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar4;
  byte local_28 [4];
  undefined4 uStack_24;
  
  pcVar3 = DAT_000017ac;
  iVar2 = DAT_000017a8;
  iVar1 = DAT_000017a4;
  iVar4 = 200;
  local_28[0] = 0;
  uStack_24 = param_1;
  while( true ) {
    if (*pcVar3 == '\0') {
      FUN_00006bc0(1,0x3fd,local_28,0);
      param_2 = extraout_r1;
    }
    if (*pcVar3 == '\x01') {
      FUN_00006c84(1,param_2,iVar1,0,local_28,0);
      param_2 = extraout_r1_00;
    }
    if (*pcVar3 == '\x02') {
      FUN_00006c84(1,param_2,iVar2,0,local_28,0);
      param_2 = extraout_r1_01;
    }
    iVar4 = iVar4 + -1;
    if ((int)((uint)local_28[0] << 0x1a) < 0) break;
    if (iVar4 == 0) {
      return 0;
    }
  }
  if (iVar4 == 0) {
    return 0;
  }
  if (*pcVar3 == '\0') {
    FUN_00006c14(1,0x3f8,&uStack_24,0);
    param_2 = extraout_r1_02;
  }
  if (*pcVar3 == '\x01') {
    FUN_00006cd0(1,param_2,DAT_000017a4 + -0x14,0,&uStack_24,0);
    param_2 = extraout_r1_03;
  }
  if (*pcVar3 == '\x02') {
    FUN_00006cd0(1,param_2,DAT_000017a8 + -0x14,0,&uStack_24,0);
  }
  return 1;
}



/* FUN_000017bc @ 000017bc */

uint FUN_000017bc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined auStack_a8 [8];
  undefined4 local_a0;
  undefined local_5c;
  int local_48;
  int local_44;
  int iStack_40;
  undefined *local_3c;
  undefined4 local_34;
  undefined *local_30;
  undefined local_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_000065c8(DAT_00001a3c);
  }
  FUN_0000140c(4,0,DAT_00001a40);
  FUN_0000140c(4,0,s_Phase_1_Initialization___UMC_Pro_00001a44);
  FUN_0000140c(4,0,DAT_00001a40);
  FUN_00006528(0xe003,param_1);
  FUN_0000140c(4,0,s_MEM_PARAMS__00001a70);
  FUN_0000140c(4,0,s_AGESA_BL_Heap_Size____04x_00001a80,&DAT_00009000);
  FUN_0000140c(4,0,s_BottomIo____04x_00001a9c,*(undefined2 *)(*(int *)(param_1 + 0x28) + 0x24));
  FUN_0000140c(4,0,s_MemHoleRemap____d_00001ab0,*(undefined *)(*(int *)(param_1 + 0x28) + 0x26));
  FUN_0000140c(4,0,s_UserTimingMode____d_00001ac4,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28));
  FUN_0000140c(4,0,s_MemClockValue____d_00001adc,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c));
  FUN_0000140c(4,0,s_ChannelIntlv____d_00001af4,*(undefined *)(*(int *)(param_1 + 0x28) + 0x738));
  FUN_0000140c(4,0,s_PowerDown____d_00001b08,*(undefined *)(*(int *)(param_1 + 0x28) + 0x73b));
  FUN_0000140c(4,0,s_Parity____d_00001b1c,*(undefined *)(*(int *)(param_1 + 0x28) + 0x748));
  FUN_0000140c(4,0,s_BankSwizzle____d_00001b2c,*(undefined *)(*(int *)(param_1 + 0x28) + 0x749));
  FUN_0000140c(4,0,s_MemClr____d_00001b40,*(undefined *)(*(int *)(param_1 + 0x28) + 0x74a));
  FUN_0000140c(4,0,s_UmaMode____d_00001b50,*(undefined *)(*(int *)(param_1 + 0x28) + 0x74c));
  uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0x750);
  uVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x754) << 0x14 | uVar2 >> 0xc;
  iVar3 = uVar2 << 0x14;
  FUN_0000140c(4,0,s_UmaSize___0x_lx_00001b60);
  FUN_0000140c(4,0,s_DctEnValue___0x_04x_00001b74,*(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78c),
               iVar3,uVar5);
  FUN_0000140c(4,0,s_DctEnValueMos___0x_04x_00001b8c,
               *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78e));
  FUN_0000140c(4,0,s_AddressHashBank____d_00001ba8,*(undefined *)(*(int *)(param_1 + 0x28) + 0x786))
  ;
  FUN_0000140c(4,0,s_CABI____d_00001bc0,*(undefined *)(*(int *)(param_1 + 0x28) + 0x794));
  FUN_0000140c(4,0,s_EDC____d_00001bcc,*(undefined *)(*(int *)(param_1 + 0x28) + 0x792));
  FUN_0000140c(4,0,s_EDC_RLY____d_00001bd8,*(undefined *)(*(int *)(param_1 + 0x28) + 0x793));
  FUN_0000140c(4,0,s_DBI____d_00001be8,*(undefined *)(*(int *)(param_1 + 0x28) + 0x795));
  FUN_0000140c(4,0,s_ExternalVrefCtl____d_00001bf4,*(undefined *)(*(int *)(param_1 + 0x28) + 0x75d))
  ;
  FUN_0000140c(4,0,s_AMP____d_00001c0c,*(undefined *)(*(int *)(param_1 + 0x28) + 0x75f));
  local_3c = auStack_a8;
  local_48 = param_1;
  thunk_FUN_00006c7e(local_3c,0,0x60,param_1);
  local_a0 = 0;
  local_5c = 0;
  uVar2 = func_0x00010bb4(&local_48);
  puVar1 = DAT_00001c18;
  *DAT_00001c18 = uVar2;
  local_34 = 0x708;
  local_30 = &DAT_0000a00e;
  local_2c = 2;
  iVar4 = FUN_00006338(&local_34,param_1);
  iVar3 = DAT_00001c1c;
  if (iVar4 == 0) {
    uVar2 = 0;
    iStack_40 = local_28 + 0x700;
    local_44 = local_28;
    while( true ) {
      iVar4 = iVar3 + uVar2 * 0x1c;
      pcVar6 = *(code **)(iVar4 + 4);
      if (pcVar6 == Reset) break;
      iVar4 = (*pcVar6)(local_28,param_1,*(undefined4 *)(iVar4 + 0xc),auStack_a8,0);
      if (iVar4 != 0) {
        if (*(int *)(iVar3 + uVar2 * 0x1c + 4) != 0) {
          (**(code **)(*(int *)(local_28 + 0x1c) + 0x48))(local_28);
          iVar3 = DAT_00001c20;
          uVar2 = 0;
          goto LAB_00001a16;
        }
        break;
      }
      uVar2 = uVar2 + 1 & 0xff;
    }
  }
  else {
    FUN_000065c8(DAT_00001a3c + 0xce);
  }
  *puVar1 = 9;
  return 9;
LAB_00001a16:
  pcVar6 = *(code **)(iVar3 + uVar2 * 4);
  if (pcVar6 == Reset) {
LAB_00001a1e:
    FUN_00006528(0xe0fa,param_1);
    uVar2 = *(uint *)(*(int *)(local_28 + 8) + 8);
    if (uVar2 <= *puVar1) {
      return *puVar1;
    }
    *puVar1 = uVar2;
    return uVar2;
  }
  uVar5 = (*pcVar6)(&local_48);
  *puVar1 = uVar5;
  if (*(char *)(param_1 + 0x3d0) == '\x01') goto LAB_00001a1e;
  uVar2 = uVar2 + 1 & 0xff;
  goto LAB_00001a16;
}



/* FUN_00001c24 @ 00001c24 */

void FUN_00001c24(int param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_00006528(0xe001,param_1);
  *(undefined4 *)(param_1 + 0x3cc) = param_2;
  FUN_0000a054(param_1);
  pbVar2 = DAT_00001cb0;
  iVar1 = DAT_00001cac;
  for (uVar7 = 0; uVar7 < *pbVar2; uVar7 = uVar7 + 1 & 0xff) {
    pcVar5 = *(code **)(iVar1 + uVar7 * 0x1c + 8);
    if (pcVar5 != Reset) {
      (*pcVar5)(param_1);
    }
  }
  FUN_00006528(0xe00a,param_1);
  uVar3 = DAT_00001cb8;
  iVar1 = DAT_00001cb4;
  uVar6 = 0;
  uVar7 = 0;
  do {
    iVar4 = *(int *)(iVar1 + uVar6 * 4);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + uVar7 * 4 + 0x1f0) = uVar3;
    }
    else {
      uVar6 = uVar6 + 1 & 0xff;
      *(int *)(param_1 + uVar7 * 4 + 0x1f0) = iVar4;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 0x10);
  FUN_00006528(0xe046,param_1);
  *(undefined4 *)(param_1 + 0x230) = DAT_00001cbc;
  return;
}



/* FUN_00001cc0 @ 00001cc0 */

undefined4 FUN_00001cc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined auStack_18c [16];
  char acStack_17c [8];
  undefined4 auStack_174 [72];
  undefined local_54;
  undefined local_53;
  undefined2 local_52;
  undefined4 local_50 [7];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  thunk_FUN_00006c7e(&local_54,0,0x20,param_2);
  FUN_0000140c(4,0,s_Synchronize_All_Slave_Dies_with_t_00001e40);
  FUN_00006d20(&local_34);
  FUN_0000140c(4,0,s_MCM_Info_00001e70,local_34);
  FUN_0000140c(4,0,s_SocketCount____d_00001e7c,local_34);
  FUN_0000140c(4,0,s_Socket_ID____d_00001e90,local_28);
  FUN_0000140c(4,0,s_Dies_per_Socket____d_00001ea4,local_2c);
  FUN_0000140c(4,0,s_Die_Count____d_00001ebc,local_30);
  FUN_0000140c(4,0,s_Die_ID____d_00001ed0,local_24);
  if (local_1c == 0) {
    pcVar4 = s_FALSE_00001ee8;
  }
  else {
    pcVar4 = &DAT_00001ee0;
  }
  FUN_0000140c(4,0,s_Local_Master___s_00001ef0,pcVar4);
  if (local_20 == 0) {
    pcVar4 = s_FALSE_00001ee8;
  }
  else {
    pcVar4 = &DAT_00001ee0;
  }
  FUN_0000140c(4,0,s_System_Master___s_00001f04,pcVar4);
  if (local_30 < 2) {
    pcVar4 = (char *)0x2000;
  }
  else {
    if (local_20 == 0) {
      local_54 = (undefined)local_28;
      local_53 = (undefined)local_24;
      local_52 = 1;
      iVar1 = FUN_0000128c(param_2,0,&local_54,1,1);
      if (iVar1 != 9) {
        return 0;
      }
      FUN_000065c8(DAT_00001ffc);
      return 0;
    }
    FUN_0000140c(4,0,s_Synchronize_All_Slave_Dies_with_t_00001e40);
    FUN_0000140c(4,0,s_System_Master_waiting_on_callbac_00001f1c);
    iVar1 = FUN_00001050(param_2,auStack_18c);
    for (uVar5 = 1; uVar5 < local_30; uVar5 = uVar5 + 1 & 0xff) {
      FUN_0000140c(4,0,s_Slave__d_00001f50,uVar5);
      uVar2 = 0;
      do {
        uVar3 = uVar2 + 1 & 0xff;
        local_50[uVar2] = auStack_174[uVar5 * 7 + uVar2];
        uVar2 = uVar3;
      } while (uVar3 < 7);
      if (iVar1 == 9) {
        FUN_0000140c(4,0,s_Fatal_error__received_from_ABL_G_00001fa0);
      }
      else if (acStack_17c[uVar5] == '\x01') {
        FUN_0000140c(4,0,s_Slave_ID____d_00001f5c,0);
        FUN_0000140c(4,0,s_Slave_Socket_ID____d_00001f70,local_54);
        FUN_0000140c(4,0,s_Slave_Die_ID____d_00001f88,local_53);
      }
    }
    pcVar4 = s_All_Slave_Dies_synchronized_with_00001fcc;
  }
  FUN_0000140c(4,0,pcVar4);
  return 0;
}



/* FUN_0000202c @ 0000202c */

int FUN_0000202c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_0000140c(0,0,DAT_000020b0,param_1,param_2,param_2);
  iVar2 = FUN_000048d0(param_1,param_2,&local_20,param_4,param_5);
  if (iVar2 != 0) {
    cVar1 = *param_4;
    if (cVar1 == '\x01') {
      if ((~(uint)local_20 & 0xff) != 0) {
        *(char *)param_3 = (char)local_20;
      }
    }
    else if (cVar1 == '\x02') {
      if ((~(uint)local_20 & 0xffff) != 0) {
        *(short *)param_3 = (short)local_20;
      }
    }
    else if (cVar1 == '\x04') {
      if (local_20 != (undefined4 *)0xffffffff) {
        *param_3 = local_20;
      }
    }
    else if ((cVar1 == '\b') &&
            (local_20 != (undefined4 *)0xffffffff || pcStack_1c != (char *)0xffffffff)) {
      *param_3 = local_20;
      param_3[1] = pcStack_1c;
    }
    iVar2 = 1;
  }
  return iVar2;
}



/* FUN_000020b4 @ 000020b4 */

undefined4
FUN_000020b4(short *param_1,undefined4 param_2,undefined4 *param_3,char *param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *local_28;
  char *pcStack_24;
  
  uVar5 = 0;
  uVar6 = param_2;
  local_28 = param_3;
  pcStack_24 = param_4;
  if (*param_1 == 0) {
    FUN_000065c8(DAT_000021a0);
  }
  while( true ) {
    if (param_1[uVar5 + 1] == 0) {
      FUN_0000140c(0,0,s_Get_internal_APCB_parameter__Tok_000021e8,param_1[uVar5],param_2);
      iVar3 = FUN_00004900(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
      if (iVar3 == 0) {
        return 0;
      }
      cVar1 = *param_4;
      if (cVar1 == '\x01') {
        if ((~(uint)local_28 & 0xff) != 0 || param_5 != 0) {
          *(char *)param_3 = (char)local_28;
          return 1;
        }
      }
      else if (cVar1 == '\x02') {
        if ((~(uint)local_28 & 0xffff) != 0 || param_5 != 0) {
          *(short *)param_3 = (short)local_28;
          return 1;
        }
      }
      else if (cVar1 == '\x04') {
        if (param_5 != 0 || local_28 != (undefined4 *)0xffffffff) {
          *param_3 = local_28;
          return 1;
        }
      }
      else if ((cVar1 == '\b') &&
              ((local_28 != (undefined4 *)0xffffffff || pcStack_24 != (char *)0xffffffff ||
               (param_5 != 0)))) {
        *param_3 = local_28;
        param_3[1] = pcStack_24;
        return 1;
      }
      return 0;
    }
    iVar3 = FUN_00004900(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
    if (iVar3 == 0) break;
    if (((uint)local_28 & 0xff) != 1) {
      sVar2 = param_1[uVar5];
      pcVar4 = s_Parent_APCB_parameter_disabled__T_000021a4;
      goto LAB_000020f8;
    }
    uVar5 = uVar5 + 1 & 0xff;
  }
  sVar2 = param_1[uVar5];
  pcVar4 = DAT_000021e4;
LAB_000020f8:
  FUN_0000140c(0,0,pcVar4,sVar2,param_2);
  return 0;
}



/* FUN_00002224 @ 00002224 */

int FUN_00002224(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_0000140c(0,0,DAT_000022a8,param_1,param_2,param_2);
  iVar2 = FUN_00004900(param_1,param_2,&local_20,param_4,param_5);
  if (iVar2 != 0) {
    cVar1 = *param_4;
    if (cVar1 == '\x01') {
      if ((~(uint)local_20 & 0xff) != 0) {
        *(char *)param_3 = (char)local_20;
      }
    }
    else if (cVar1 == '\x02') {
      if ((~(uint)local_20 & 0xffff) != 0) {
        *(short *)param_3 = (short)local_20;
      }
    }
    else if (cVar1 == '\x04') {
      if (local_20 != (undefined4 *)0xffffffff) {
        *param_3 = local_20;
      }
    }
    else if ((cVar1 == '\b') &&
            (local_20 != (undefined4 *)0xffffffff || pcStack_1c != (char *)0xffffffff)) {
      *param_3 = local_20;
      param_3[1] = pcStack_1c;
    }
    iVar2 = 1;
  }
  return iVar2;
}



/* FUN_000022ac @ 000022ac */

void FUN_000022ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_34;
  char *pcStack_30;
  undefined local_2c;
  undefined4 *local_28;
  char *local_24 [3];
  char local_18 [4];
  undefined auStack_14 [4];
  
  iVar1 = DAT_00002314;
  local_24[0] = s_Undefined_BF_enum___x_0000a038 + 0xe;
  iVar2 = FUN_00006474(local_24,param_1);
  if (iVar2 != 0) {
    local_34 = 0xc;
    pcStack_30 = s_Undefined_BF_enum___x_0000a038 + 0xe;
    local_2c = 2;
    iVar2 = FUN_00006338(&local_34,param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_00004930(0x713,1,local_18,auStack_14,0);
      if (iVar2 == 0) {
        FUN_000065c8(DAT_00002318 + -0xb);
      }
      if (local_18[0] != '\0') {
        local_18[0] = '\x01';
      }
      *(char *)(local_28 + 1) = local_18[0];
      *local_28 = *(undefined4 *)(iVar1 + 0xc);
    }
    else {
      FUN_000065c8(DAT_00002318);
    }
  }
  return;
}



/* FUN_0000231c @ 0000231c */

undefined8 FUN_0000231c(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint local_34;
  undefined4 uStack_30;
  uint local_2c;
  
  piVar3 = param_1;
  local_34 = param_2;
  uStack_30 = param_3;
  local_2c = param_4;
  switch(param_2) {
  case 2:
    if ((*(char *)((int)param_1 + 0x331) != '\0') && (*(ushort *)((int)param_1 + 0x516) != 0xffff))
    {
      *(uint *)(param_1[1] + 0x2c) = (uint)*(ushort *)((int)param_1 + 0x516);
      *(undefined4 *)(param_1[1] + 0x28) = 2;
      FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Clock_000026e8,
                   *(undefined4 *)(param_1[1] + 0x2c));
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_0000202c(7,param_2,&local_34,&uStack_30);
    if (iVar2 == 0) break;
    FUN_0000140c(4,0,s_Override_Memory_clock__0x_x_0000271c,local_34 & 0xff);
    switch(local_34 & 0xff) {
    case 2:
      uVar1 = 0x7d;
      break;
    default:
      FUN_000065c8(DAT_0000273c);
      goto LAB_00002430;
    case 4:
      uVar1 = 0xe1;
      break;
    case 5:
      uVar1 = 0xfa;
      break;
    case 8:
      uVar1 = 400;
      break;
    case 9:
      uVar1 = 0x1c2;
      break;
    case 10:
      uVar1 = 500;
      break;
    case 0xf:
      uVar1 = 0x2ee;
      break;
    case 0x11:
      uVar1 = 0x352;
      break;
    case 0x14:
      uVar1 = 1000;
      break;
    case 0x19:
      uVar1 = 0x4e2;
      break;
    case 0x1a:
      uVar1 = 0x532;
      break;
    case 0x1b:
      uVar1 = 0x55f;
      break;
    case 0x1e:
      uVar1 = 0x5dc;
      break;
    case 0x20:
      uVar1 = 0x640;
      break;
    case 0x21:
      uVar1 = 0x672;
      break;
    case 0x22:
      uVar1 = 0x6a4;
      break;
    case 0x23:
      uVar1 = 0x6d6;
      break;
    case 0x24:
      uVar1 = 0x708;
      break;
    case 0x25:
      uVar1 = 0x73a;
      break;
    case 0x28:
      uVar1 = 2000;
    }
    *(undefined4 *)(param_1[1] + 0x2c) = uVar1;
LAB_00002430:
    *(undefined4 *)(param_1[1] + 0x28) = 2;
    break;
  case 3:
    if (*(char *)((int)param_1 + 0x331) != '\0') {
      if (*(char *)(param_1 + 0x146) != -1) {
        func_0x00010a58(param_1,0x1f2);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002740,*(undefined *)(param_1 + 0x146)
                    );
      }
      if (*(char *)((int)param_1 + 0x519) != -1) {
        func_0x00010a58(param_1,0x208);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002774,
                     *(undefined *)((int)param_1 + 0x519));
      }
      if (*(char *)((int)param_1 + 0x51a) != -1) {
        func_0x00010a58(param_1,0x20b);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000027a8,
                     *(undefined *)((int)param_1 + 0x51a));
      }
      if (*(char *)((int)param_1 + 0x51b) != -1) {
        func_0x00010a58(param_1,0x20c);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000027dc,
                     *(undefined *)((int)param_1 + 0x51b));
      }
      if (*(char *)(param_1 + 0x147) != -1) {
        func_0x00010a58(param_1,0x209);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002810,*(undefined *)(param_1 + 0x147)
                    );
      }
      if (*(char *)((int)param_1 + 0x51d) != -1) {
        func_0x00010a58(param_1,0x20a);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002844,
                     *(undefined *)((int)param_1 + 0x51d));
      }
      if (*(char *)((int)param_1 + 0x51e) != -1) {
        func_0x00010a58(param_1,0x227);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002878,
                     *(undefined *)((int)param_1 + 0x51e));
      }
      if (*(char *)((int)param_1 + 0x51f) != -1) {
        func_0x00010a58(param_1,0x228);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000028ac,
                     *(undefined *)((int)param_1 + 0x51f));
      }
      if (*(char *)(param_1 + 0x148) != -1) {
        func_0x00010a58(param_1,0x22b);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000028e0,*(undefined *)(param_1 + 0x148)
                    );
      }
      if (*(char *)((int)param_1 + 0x521) != -1) {
        func_0x00010a58(param_1,0x22a);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002910,
                     *(undefined *)((int)param_1 + 0x521));
      }
      if (*(char *)((int)param_1 + 0x522) != -1) {
        func_0x00010a58(param_1,0x22c);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002944,
                     *(undefined *)((int)param_1 + 0x522));
      }
      if (*(char *)((int)param_1 + 0x523) != -1) {
        func_0x00010a58(param_1,0x1f6);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002978,
                     *(undefined *)((int)param_1 + 0x523));
      }
      if (*(short *)(param_1 + 0x149) != -1) {
        func_0x00010a58(param_1,0x220);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000029ac,
                     *(undefined2 *)(param_1 + 0x149));
      }
      if (*(short *)((int)param_1 + 0x526) != -1) {
        func_0x00010a58(param_1,0x189);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_000029e0,
                     *(undefined2 *)((int)param_1 + 0x526));
      }
      if (*(short *)(param_1 + 0x14a) != -1) {
        func_0x00010a58(param_1,0x18b);
        FUN_0000140c(4,0,s__MEM_CONF__Override_Memory_Timin_00002a14,
                     *(undefined2 *)(param_1 + 0x14a));
      }
    }
    iVar2 = FUN_0000202c(8,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TCL___d_00002a48,local_34 & 0xff);
      func_0x00010a58(param_1,0x1f2,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_Trcdrd___d_00002a5c,local_34 & 0xff);
      func_0x00010a58(param_1,0x20b,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0xb,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_Trcdwr___d_00002a74,local_34 & 0xff);
      func_0x00010a58(param_1,0x20c,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(9,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_Tras___d_00002ccc,local_34 & 0xff);
      func_0x00010a58(param_1,0x208,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0xc,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrpAb___d_00002ce4,local_34 & 0xff);
      func_0x00010a58(param_1,0x227,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0xd,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrpPb___d_00002cfc,local_34 & 0xff);
      func_0x00010a58(param_1,0x228,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0xe,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrcAb___d_00002d14,local_34 & 0xff);
      func_0x00010a58(param_1,0x209,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0xf,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrcPb___d_00002d2c,local_34 & 0xff);
      func_0x00010a58(param_1,0x20a,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0x10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrrdL___d_00002d44,local_34 & 0xff);
      func_0x00010a58(param_1,0x22a,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0x11,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_TrrdS___d_00002d5c,local_34 & 0xff);
      func_0x00010a58(param_1,0x22b,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0x12,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_Trtp___d_00002d74,local_34 & 0xff);
      func_0x00010a58(param_1,0x22c,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0x13,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_0000140c(4,0,s_Override_Tfaw___d_00002d8c,local_34 & 0xff);
      func_0x00010a58(param_1,0x1f6,local_34 & 0xff);
    }
    iVar2 = FUN_0000202c(0x14,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_000048d0(0x15,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x00010a58(param_1,0x220,local_2c & 0xffff);
    }
    iVar2 = FUN_0000202c(0x18,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_000048d0(0x19,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x00010a58(param_1,0x18b,local_2c & 0xffff);
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_0000202c(0x16,param_2,&local_34,&uStack_30);
    bVar4 = iVar2 == 0;
    while ((!bVar4 && ((char)local_34 == '\x01'))) {
      piVar3 = (int *)*param_1;
      iVar2 = FUN_000048d0(0x17,param_2,&local_2c,&uStack_30);
      bVar4 = iVar2 == 0;
      if (!bVar4) {
        func_0x00010a58(param_1,0x189,local_2c & 0xffff);
        return CONCAT44(local_34,piVar3);
      }
    }
  }
  return CONCAT44(local_34,piVar3);
}



/* FUN_000047b4 @ 000047b4 */

void FUN_000047b4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_34;
  char *pcStack_30;
  undefined local_2c;
  undefined4 local_28;
  undefined *local_24;
  char *local_20 [2];
  undefined4 local_18;
  undefined auStack_14 [4];
  
  local_20[0] = s_Undefined_BF_enum___x_0000a038 + 10;
  iVar2 = FUN_00006474(local_20,param_1);
  puVar1 = DAT_00004844;
  if (iVar2 == 0) {
    *DAT_00004844 = local_18;
  }
  else {
    local_34 = 0x6c;
    pcStack_30 = s_Undefined_BF_enum___x_0000a038 + 10;
    local_2c = 2;
    iVar2 = FUN_00006338(&local_34,param_1);
    if (iVar2 == 0) {
      *puVar1 = local_28;
      FUN_00004f4c(0x1704,0x52,0,auStack_14,&local_24);
      puVar3 = (undefined *)*puVar1;
      *puVar3 = *local_24;
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(local_24 + 0xc);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(local_24 + 4);
      puVar3[0x10] = local_24[0x10];
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(local_24 + 8);
      puVar3[3] = local_24[3];
      puVar3[0x24] = local_24[0x24];
      *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(local_24 + 0x14);
      *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(local_24 + 0x18);
      *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(local_24 + 0x1c);
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(local_24 + 0x1c);
    }
    else {
      FUN_000065c8(DAT_00004848);
    }
  }
  return;
}



/* FUN_0000484c @ 0000484c */

void FUN_0000484c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_34;
  char *pcStack_30;
  undefined local_2c;
  undefined4 local_28;
  char *local_24 [2];
  undefined4 local_1c;
  undefined *local_18;
  undefined auStack_14 [4];
  
  local_24[0] = s_Undefined_BF_enum___x_0000a038 + 0xc;
  iVar2 = FUN_00006474(local_24,param_1);
  puVar1 = DAT_000048c8;
  if (iVar2 == 0) {
    *DAT_000048c8 = local_1c;
  }
  else {
    local_34 = 0x20;
    pcStack_30 = s_Undefined_BF_enum___x_0000a038 + 0xc;
    local_2c = 2;
    iVar2 = FUN_00006338(&local_34,param_1);
    if (iVar2 == 0) {
      *puVar1 = local_28;
      FUN_00004f4c(0x1704,0x53,0,auStack_14,&local_18);
      puVar3 = (undefined *)*puVar1;
      *puVar3 = *local_18;
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(local_18 + 8);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(local_18 + 4);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(local_18 + 0xc);
      *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(local_18 + 0x10);
      *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(local_18 + 0x14);
      *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(local_18 + 0x18);
      puVar3[0x1c] = local_18[0x1c];
    }
    else {
      FUN_000065c8(DAT_000048cc);
    }
  }
  return;
}



/* FUN_000048d0 @ 000048d0 */

undefined4
FUN_000048d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x1e) {
    uVar1 = FUN_00004acc(0xd,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_000065c8(DAT_000048fc);
  return 0;
}



/* FUN_00004900 @ 00004900 */

undefined4
FUN_00004900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x161) {
    uVar1 = FUN_00004acc(0xf,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_000065c8(DAT_0000492c);
  return 0;
}



/* FUN_00004930 @ 00004930 */

int FUN_00004930(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort local_38 [12];
  
  FUN_00000114(local_38,DAT_00004a18,0x14);
  uVar3 = 0;
  while ((local_38[uVar3 * 2] != param_1 ||
         (iVar1 = FUN_000048d0(local_38[uVar3 * 2 + 1],param_2,param_3,param_4,param_5), iVar1 == 0)
         )) {
    uVar3 = uVar3 + 1 & 0xff;
    if (4 < uVar3) {
      if (param_1 - 1 < 2) {
        iVar1 = 2;
      }
      else if (param_1 == 0x101) {
        iVar1 = 4;
      }
      else if (param_1 - 0x301 < 8) {
        iVar1 = 6;
      }
      else if (param_1 - 0x701 < 0x1b) {
        iVar1 = 8;
      }
      else {
        if (1 < param_1 - 0x1c01) {
          FUN_000065c8(DAT_00004ac8);
          return 0;
        }
        iVar1 = 0xc;
      }
      FUN_0000140c(0,0,s_Get_config_parameter__token__04x_00004a54,param_1,param_2);
      iVar2 = FUN_00004acc(iVar1,param_1,param_2,param_3,param_4,param_5);
      if (iVar2 == 0) {
        FUN_0000140c(0,0,s_Get_config_parameter_from_defaul_00004a88,param_1,param_2);
        iVar2 = FUN_00004acc(iVar1 + -1,param_1,param_2,param_3,param_4,param_5);
      }
      return iVar2;
    }
  }
  FUN_0000140c(0,0,s_APCB_Config_parameter__04x_mappe_00004a1c,local_38[uVar3 * 2],
               local_38[uVar3 * 2 + 1]);
  return 1;
}



/* FUN_00004acc @ 00004acc */

undefined4
FUN_00004acc(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,undefined4 param_6)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 local_98;
  int local_94;
  uint local_90;
  int local_8c;
  char *pcStack_88;
  undefined local_84;
  int local_80;
  char *local_7c [2];
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  undefined auStack_64 [4];
  ushort auStack_60 [18];
  int local_3c;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  local_68 = *DAT_00004ecc;
  local_3c = local_68;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_00000114(auStack_60,DAT_00004ed0,0x24);
  uVar9 = local_34 - 1;
  if (0xe < uVar9) {
    FUN_000065c8(DAT_00004ed4);
  }
  if (0xf < local_2c) {
    FUN_000065c8(DAT_00004ed4 + 0xb);
  }
  if (local_28 == 0) {
    FUN_000065c8(DAT_00004ed4 + 0xd);
  }
  if (param_5 == (byte *)0x0) {
    FUN_000065c8(DAT_00004ed4 + 0xe);
  }
  switch(local_34) {
  default:
    iVar6 = DAT_00004ed8 + -0xd1;
    goto LAB_00004ce8;
  case 1:
  case 2:
    local_98 = 0x1701;
    pcVar15 = (char *)0x3;
    pcVar13 = (char *)0x1;
    pcVar16 = (char *)0xff;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 4;
    iVar6 = 1;
    uVar9 = uVar9 & 0xff;
    break;
  case 3:
  case 4:
    local_98 = 0x1702;
    iVar6 = 3;
    pcVar13 = (char *)0x101;
    pcVar15 = (char *)0x102;
    pcVar16 = (char *)0x2ff;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 5;
    uVar9 = local_34 - 3 & 0xff;
    break;
  case 5:
  case 6:
    iVar6 = 5;
    local_98 = 0x1703;
    pcVar13 = (char *)0x301;
    pcVar15 = (char *)0x309;
    pcVar16 = (char *)0x6ff;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 6;
    uVar9 = local_34 - 5 & 0xff;
    break;
  case 7:
  case 8:
    iVar6 = 7;
    local_98 = 0x1704;
    pcVar13 = (char *)0x701;
    pcVar15 = (char *)0x71c;
    pcVar16 = (char *)0x17ff;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 7;
    uVar9 = local_34 - 7 & 0xff;
    break;
  case 9:
  case 10:
    iVar6 = 9;
    pcVar13 = (char *)0x1801;
    local_98 = 0x1705;
    pcVar15 = (char *)0x1801;
    pcVar16 = s_ExternalVrefCtl____d_00001bf4 + 0xb;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 8;
    uVar9 = local_34 - 9 & 0xff;
    break;
  case 0xb:
  case 0xc:
    iVar6 = 0xb;
    local_98 = 0x1706;
    pcVar13 = s_ExternalVrefCtl____d_00001bf4 + 0xd;
    pcVar15 = s_ExternalVrefCtl____d_00001bf4 + 0xf;
    pcVar16 = (char *)0x1ffe;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 9;
    uVar9 = local_34 - 0xb & 0xff;
    break;
  case 0xd:
    pcVar15 = (char *)0x1f;
    uVar9 = 0;
    pcVar16 = (char *)0x1ffe;
    pcVar13 = (char *)0x1;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 0x15;
    iVar6 = 0xd;
    local_98 = 0x1707;
    break;
  case 0xf:
    pcVar15 = (char *)0x162;
    uVar9 = 0;
    pcVar16 = (char *)0x1ffe;
    pcVar13 = (char *)0x1;
    pcVar14 = s_Undefined_BF_enum___x_0000a038 + 0x16;
    iVar6 = 0xf;
    local_98 = 0x1707;
  }
  local_90 = 0;
  if (local_34 < 0x11) {
    local_90 = (uint)auStack_60[local_34];
  }
  local_7c[0] = pcVar14;
  iVar4 = FUN_00006474(local_7c,param_6);
  if (iVar4 == 0) {
    if (*(int *)(local_74 + uVar9 * 4) != 0) {
      iVar6 = local_74 + 8 + (local_30 - (int)pcVar13) * 6;
      uVar10 = (uint)*(byte *)(iVar6 + 1);
      if ((uVar10 == local_2c) || (uVar10 == 1)) {
        bVar2 = *(byte *)(local_74 + 8 + (local_30 - (int)pcVar13) * 6);
        if (((bVar2 & 3) >> uVar9 & 1) != 0) {
          if (bVar2 >> 5 == 0) {
            uVar10 = (((uint)bVar2 << 0x1b) >> 0x1d) + 1;
            *param_5 = (byte)uVar10;
            uVar1 = *(ushort *)(iVar6 + uVar9 * 2 + 2);
            if (uVar10 < 9) {
              iVar6 = *(int *)(local_74 + uVar9 * 4);
              for (uVar9 = 0; uVar9 < *param_5; uVar9 = uVar9 + 1 & 0xff) {
                *(undefined *)(local_28 + uVar9) = *(undefined *)(iVar6 + (uint)uVar1 + uVar9);
              }
              uVar11 = 1;
              goto LAB_00004d28;
            }
            iVar6 = DAT_00004ed8 + -0x21;
          }
          else {
            iVar6 = DAT_00004ed8 + -0x36;
          }
LAB_00004ce8:
          FUN_000065c8(iVar6);
        }
      }
    }
    uVar11 = 0;
  }
  else {
    local_8c = ((int)pcVar15 - (int)pcVar13) * 6 + 8;
    local_84 = 4;
    pcStack_88 = pcVar14;
    iVar4 = FUN_00006338(&local_8c,param_6);
    if (iVar4 != 0) {
      FUN_000065c8(DAT_00004ed8);
    }
    local_70 = local_80;
    iVar4 = local_80 + 8;
    uVar9 = 0;
    do {
      local_6c = iVar6 + uVar9;
      iVar5 = FUN_00004f4c(local_98,local_6c & 0xffff,0,auStack_64,&local_94);
      if (iVar5 != 0) {
        FUN_0000140c(0,0,s_Initializing_APCB_parameters_for_00004edc,local_6c);
        uVar10 = 0;
        iVar5 = DAT_00004ed8 + 0x20;
        while (pcVar14 = (char *)((uint)(*(int *)(local_94 + uVar10 * 4) << 0xb) >> 0x13),
              pcVar14 != (char *)0x1fff) {
          if ((pcVar14 < pcVar13) || (pcVar16 <= pcVar14)) {
            FUN_000065c8(iVar5);
          }
          uVar10 = uVar10 + 1 & 0xff;
        }
        uVar12 = 0;
        *(uint *)(local_70 + uVar9 * 4) = local_94 + uVar10 * 4 + 4;
        uVar10 = 0;
        while( true ) {
          uVar8 = *(uint *)(local_94 + uVar12 * 4);
          pcVar14 = (char *)((uVar8 << 0xb) >> 0x13);
          if (pcVar14 == (char *)0x1fff) break;
          if (pcVar14 < pcVar15) {
            if (uVar8 >> 0x18 != 0) {
              iVar6 = DAT_00004ed8 + 0x41;
              goto LAB_00004ce8;
            }
            if (local_90 < ((uVar8 << 8) >> 0x1d) + 1) {
              iVar6 = DAT_00004ed8 + 0x62;
              goto LAB_00004ce8;
            }
            bVar2 = *(byte *)(iVar4 + ((int)pcVar14 - (int)pcVar13) * 6);
            bVar3 = ((byte)(1 << uVar9) | bVar2) & 3;
            *(byte *)(iVar4 + ((int)pcVar14 - (int)pcVar13) * 6) = bVar2 & 0xfc | bVar3;
            iVar5 = *(int *)(local_94 + uVar12 * 4);
            *(byte *)(iVar4 + (((uint)(iVar5 << 0xb) >> 0x13) - (int)pcVar13) * 6) =
                 bVar2 & 0xe0 | bVar3 | (byte)(((uint)(iVar5 << 8) >> 0x1d) << 2);
            iVar5 = *(int *)(local_94 + uVar12 * 4);
            *(char *)(iVar4 + (((uint)(iVar5 << 0xb) >> 0x13) - (int)pcVar13) * 6 + 1) = (char)iVar5
            ;
            *(short *)(iVar4 + (((uint)(*(int *)(local_94 + uVar12 * 4) << 0xb) >> 0x13) -
                               (int)pcVar13) * 6 + uVar9 * 2 + 2) = (short)uVar10;
            iVar5 = ((uint)(*(int *)(local_94 + uVar12 * 4) << 0xb) >> 0x13) - (int)pcVar13;
            *(byte *)(iVar4 + iVar5 * 6) = *(byte *)(iVar4 + iVar5 * 6) & 0x1f;
            uVar8 = (uint)(*(int *)(local_94 + uVar12 * 4) << 0xb) >> 0x13;
            FUN_0000140c(0,0,s_Type__d___Token_0x_x____00004f10,local_6c,uVar8);
            for (uVar7 = (uint)(*(int *)(local_94 + uVar12 * 4) << 8) >> 0x1d; uVar7 != 0xff;
                uVar7 = uVar7 - 1 & 0xff) {
              FUN_0000140c(0,0,&DAT_00004f2c,
                           *(undefined *)(*(int *)(local_70 + uVar9 * 4) + uVar10 + uVar7),uVar8);
            }
            iVar5 = ((uint)(*(int *)(local_94 + uVar12 * 4) << 0xb) >> 0x13) - (int)pcVar13;
            *(byte *)(iVar4 + iVar5 * 6) = *(byte *)(iVar4 + iVar5 * 6) | 1;
            FUN_0000140c(0,0,&DAT_00004f34);
          }
          uVar8 = ((uint)(*(int *)(local_94 + uVar12 * 4) << 8) >> 0x1d) + uVar10 + 1 & 0xffff;
          if (uVar8 <= uVar10) {
            FUN_000065c8(DAT_00004ed8 + 0xe9);
          }
          uVar12 = uVar12 + 1 & 0xff;
          uVar10 = uVar8;
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 2);
    uVar11 = FUN_00004acc(local_34,local_30,local_2c,local_28,param_5,param_6);
  }
LAB_00004d28:
  if (local_3c != local_68) {
    func_0x000121d4();
  }
  return uVar11;
}



/* FUN_00004f4c @ 00004f4c */

undefined4 FUN_00004f4c(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  FUN_0000140c(0,0,s_ToSearch__GroupId___0x_04X__Type_00004ff8,param_1,param_2);
  iVar2 = DAT_0000502c;
  FUN_00005048(*(undefined4 *)(DAT_0000502c + 8));
  iVar4 = iVar2 + 0x20;
  uVar5 = *(int *)(iVar2 + 8) + iVar2 + -1;
  FUN_00005064(*(undefined4 *)(iVar2 + 0x2c));
  uVar3 = iVar2 + 0x30;
  FUN_00005080(*(undefined2 *)(iVar2 + 0x34));
  while( true ) {
    if (uVar5 < iVar4 + 0xfU) {
      return 0;
    }
    if (uVar5 < (uVar3 - 1) + (uint)*(ushort *)(uVar3 + 4)) break;
    if (*(ushort *)(iVar4 + 4) == param_1) {
      if ((*(ushort *)(uVar3 + 2) == param_2) && (uVar1 = *(ushort *)(uVar3 + 6), uVar1 == param_3))
      {
        *param_5 = uVar3 + 0x10;
        *param_4 = *(ushort *)(uVar3 + 4) - 0x10;
        FUN_0000140c(0,0,s_Found_type_id_match__00005030,(uint)uVar1,uVar6);
        return 1;
      }
      iVar2 = *(ushort *)(uVar3 + 4) + uVar3;
      uVar3 = iVar2 + (-iVar2 & 3U) * 0x10;
      if ((uint)(iVar4 + -1 + *(int *)(iVar4 + 0xc)) < uVar3) {
        return 0;
      }
    }
    else {
      iVar4 = iVar4 + *(int *)(iVar4 + 0xc);
      uVar3 = iVar4 + 0x10;
    }
  }
  return 0;
}



/* FUN_00005048 @ 00005048 */

undefined4 FUN_00005048(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_000065c8(DAT_00005060);
    return 0;
  }
  return 1;
}



/* FUN_00005064 @ 00005064 */

undefined4 FUN_00005064(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_000065c8(DAT_0000507c);
    return 0;
  }
  return 1;
}



/* FUN_00005080 @ 00005080 */

undefined4 FUN_00005080(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_000065c8(DAT_00005098);
    return 0;
  }
  return 1;
}



/* FUN_0000509c @ 0000509c */

void FUN_0000509c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  iVar2 = *(int *)(DAT_000050d0 + 0xc);
  while( true ) {
    if (iVar2 == -1) {
      return;
    }
    iVar3 = DAT_000050d0 + iVar2;
    if (iVar2 == param_2) break;
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  if (iVar1 != -1) {
    *(undefined4 *)(DAT_000050d0 + iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    return;
  }
  *(undefined4 *)(DAT_000050d0 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  return;
}



/* FUN_000050d4 @ 000050d4 */

void FUN_000050d4(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint local_1c;
  
  local_1c = param_4;
  if (0xf < param_1) {
    FUN_000065c8(DAT_00005140);
  }
  FUN_0000140c(0x40000000,0,s_DF_UMC_SDP_connect_port__d_00005144,param_1,param_3);
  uVar1 = DAT_00005160;
  FUN_00006ea4(3,DAT_00005160,&local_1c,param_2);
  iVar2 = FUN_000069cc(param_2);
  if (iVar2 == 0) {
    local_1c = local_1c & 0xffff | 1 << (param_1 & 0xff);
  }
  else {
    local_1c = 0xffff;
  }
  FUN_00006f70(3,uVar1,&local_1c,param_2,1);
  FUN_0000140c(0x40000000,0,s_DF_UMC_SDP_connect_complete_00005164);
  return;
}



/* FUN_00005184 @ 00005184 */

void FUN_00005184(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint local_14;
  
  uVar1 = DAT_000051bc;
  local_14 = param_4;
  FUN_00006ea4(3,DAT_000051bc,&local_14,param_1,param_3);
  local_14._0_3_ = (uint3)(ushort)local_14;
  local_14 = local_14 & 0xfffffffe | 2;
  FUN_00006f70(3,uVar1,&local_14,param_1,1);
  return;
}



/* FUN_000051c0 @ 000051c0 */

void FUN_000051c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_000051d8;
  *DAT_000051d8 = DAT_000051d4;
  puVar1[1] = DAT_000051dc;
  puVar1[2] = DAT_000051e0;
  puVar1[3] = DAT_000051e4;
  return;
}



/* FUN_000055a2 @ 000055a2 */

void FUN_000055a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_18;
  char *local_14;
  undefined local_10;
  undefined3 uStack_f;
  int local_c;
  
  local_14 = s__R_Subfield___d__d_____x_0000a014 + 3;
  local_18 = 0x434;
  _local_10 = CONCAT31((int3)((uint)param_3 >> 8),4);
  local_c = param_4;
  FUN_00006338(&local_18,param_1);
  *(undefined2 *)(local_c + 0x30) = 0;
  return;
}



/* FUN_000055c8 @ 000055c8 */

char FUN_000055c8(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = '\0';
  pcVar2 = *(char **)(param_1 + 0x34);
  while( true ) {
    if (*pcVar2 == '\0') {
      return -1;
    }
    if (((*pcVar2 == *(char *)(param_1 + 4)) && ((byte)pcVar2[1] == param_4)) &&
       ((*(byte *)(*(int *)(pcVar2 + 0x24) + 4) & param_3) == (param_2 & param_3))) break;
    cVar1 = cVar1 + '\x01';
    pcVar2 = pcVar2 + 0x30;
  }
  return cVar1;
}



/* FUN_000055fc @ 000055fc */

void FUN_000055fc(undefined4 *param_1)

{
  FUN_000051c0();
  *param_1 = DAT_00005610;
  param_1[1] = 0;
  return;
}



/* FUN_0000564c @ 0000564c */

void FUN_0000564c(byte *param_1,uint *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  do {
    while( true ) {
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      if (bVar1 != 0x33) break;
LAB_000056e4:
      iVar5 = 0;
      pbVar2 = param_1;
      do {
        param_1 = pbVar2;
        iVar5 = iVar5 * 10 + -0x30 + (uint)*param_1;
        pbVar2 = param_1 + 1;
      } while (param_1[1] - 0x30 < 10);
LAB_00005702:
      *param_3 = iVar5;
    }
    if (0x33 < bVar1) {
      if (bVar1 != 0x38) {
        if (bVar1 < 0x39) {
          if ((((bVar1 != 0x34) && (bVar1 != 0x35)) && (bVar1 != 0x36)) && (bVar1 != 0x37)) {
            return;
          }
        }
        else if (bVar1 != 0x39) {
          if ((bVar1 != 0x4c) && (bVar1 != 0x6c)) {
            return;
          }
          uVar3 = *param_2 | 0x10;
          goto LAB_000056c6;
        }
      }
      goto LAB_000056e4;
    }
    if (bVar1 != 0x2d) {
      if (0x2d < bVar1) {
        if (bVar1 != 0x30) {
          if ((bVar1 != 0x31) && (bVar1 != 0x32)) {
            return;
          }
          goto LAB_000056e4;
        }
        uVar3 = *param_2 | 0x20;
        goto LAB_000056c6;
      }
      if (bVar1 == 0x20) {
        uVar3 = *param_2 | 4;
        goto LAB_000056c6;
      }
      if (bVar1 != 0x2a) {
        if (bVar1 == 0x2b) {
          uVar3 = *param_2 | 2;
        }
        else {
          if (bVar1 != 0x2c) {
            return;
          }
          uVar3 = *param_2 | 8;
        }
        goto LAB_000056c6;
      }
      piVar4 = (int *)*param_4;
      *param_4 = (int)(piVar4 + 1);
      iVar5 = *piVar4;
      goto LAB_00005702;
    }
    uVar3 = *param_2 | 1;
LAB_000056c6:
    *param_2 = uVar3;
  } while( true );
}



/* FUN_0000570c @ 0000570c */

void FUN_0000570c(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x34);
  bVar1 = *(byte *)(param_1 + 3);
  FUN_0000140c(4,0,s_GetMemAcTimingParam_00005940);
  FUN_00005bac(param_1,iVar4 + (uint)bVar1 * 0x30,param_2,param_3);
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    iVar4 = **(int **)(param_1 + 0x30);
    if (iVar4 != 0) {
      *param_3 = iVar4;
    }
    sVar3 = *(short *)(*(int *)(param_1 + 0x30) + 4);
    if (sVar3 != 0) {
      *(short *)(param_3 + 1) = sVar3;
    }
    sVar3 = *(short *)(*(int *)(param_1 + 0x30) + 6);
    if (sVar3 != 0) {
      *(short *)((int)param_3 + 6) = sVar3;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x30) + 8);
    if (cVar2 != '\0') {
      *(char *)(param_3 + 2) = cVar2;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x30) + 9);
    if (cVar2 != '\0') {
      *(char *)((int)param_3 + 9) = cVar2;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x30) + 0x19);
    if (cVar2 != '\0') {
      *(char *)((int)param_3 + 0x19) = cVar2;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x30) + 0x22);
    if (cVar2 != '\0') {
      *(char *)((int)param_3 + 0x22) = cVar2;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0x30) + 0x23);
    if (cVar2 != '\0') {
      *(char *)((int)param_3 + 0x23) = cVar2;
    }
    sVar3 = *(short *)(*(int *)(param_1 + 0x30) + 0x42);
    if (sVar3 != 0) {
      *(short *)((int)param_3 + 0x42) = sVar3;
    }
  }
  FUN_0000140c(4,0,s_ulClkRange____x_00005958,*param_3);
  FUN_0000140c(4,0,s_usMRS____x_0000596c,*(undefined2 *)(param_3 + 1));
  FUN_0000140c(4,0,s_usEMRS____x_0000597c,*(undefined2 *)((int)param_3 + 6));
  FUN_0000140c(4,0,s_ucCL____x_0000598c,*(undefined *)(param_3 + 2));
  FUN_0000140c(4,0,s_ucWL____x_0000599c,*(undefined *)((int)param_3 + 9));
  FUN_0000140c(4,0,s_uctRAS____x_000059ac,*(undefined *)((int)param_3 + 10));
  FUN_0000140c(4,0,s_uctRC____x_000059bc,*(undefined *)((int)param_3 + 0xb));
  FUN_0000140c(4,0,s_uctRFC____x_000059cc,*(undefined2 *)(param_3 + 4));
  FUN_0000140c(4,0,s_uctRCDR____x_000059dc,*(undefined *)((int)param_3 + 0x15));
  FUN_0000140c(4,0,s_uctRCDW____x_000059f0,*(undefined *)((int)param_3 + 0x16));
  FUN_0000140c(4,0,s_uctRP____x_00005a04,*(undefined *)((int)param_3 + 0x17));
  FUN_0000140c(4,0,s_uctRRD____x_00005a14,*(undefined *)(param_3 + 6));
  FUN_0000140c(4,0,s_uctWR____x_00005a24,*(undefined *)((int)param_3 + 0x19));
  FUN_0000140c(4,0,s_ucPPD____x_00005a34,*(undefined *)((int)param_3 + 0x1a));
  FUN_0000140c(4,0,s_uctWTR____x_00005a44,*(undefined *)((int)param_3 + 0x1b));
  FUN_0000140c(4,0,s_uctPDIX____x_00005a54,*(undefined *)((int)param_3 + 0x1d));
  FUN_0000140c(4,0,s_uctFAW____x_00005a68,*(undefined *)((int)param_3 + 0x1e));
  FUN_0000140c(4,0,s_uctAOND____x_00005a78,*(undefined *)((int)param_3 + 0x1f));
  FUN_0000140c(4,0,s_ucMR2_Lo_flag____x_00005a8c,*(undefined *)(param_3 + 8));
  FUN_0000140c(4,0,s_ucMR2_Hi_tCCDL____x_00005aa4,*(undefined *)((int)param_3 + 0x21));
  FUN_0000140c(4,0,s_uctCRCRL____x_00005abc,*(undefined *)((int)param_3 + 0x22));
  FUN_0000140c(4,0,s_uctCRCWL____x_00005ad0,*(undefined *)((int)param_3 + 0x23));
  FUN_0000140c(4,0,s_uctCKE____x_00005ae4,*(undefined *)(param_3 + 9));
  FUN_0000140c(4,0,s_uctCKRSE____x_00005af4,*(undefined *)((int)param_3 + 0x25));
  FUN_0000140c(4,0,s_uctCKRSX____x_00005b08,*(undefined *)((int)param_3 + 0x26));
  FUN_0000140c(4,0,s_usMR2____x_00005b1c,*(undefined2 *)((int)param_3 + 0x3e));
  FUN_0000140c(4,0,s_usMR3____x_00005b2c,*(undefined2 *)(param_3 + 0x10));
  FUN_0000140c(4,0,s_usMR4____x_00005b3c,*(undefined2 *)((int)param_3 + 0x42));
  FUN_0000140c(4,0,s_usMR5____x_00005b4c,*(undefined2 *)(param_3 + 0x11));
  FUN_0000140c(4,0,s_usMR6____x_00005b5c,*(undefined2 *)((int)param_3 + 0x46));
  FUN_0000140c(4,0,s_usMR7____x_00005b6c,*(undefined2 *)(param_3 + 0x12));
  FUN_0000140c(4,0,s_usMR8____x_00005b7c,*(undefined2 *)((int)param_3 + 0x4a));
  FUN_0000140c(4,0,s_usMR9____x_00005b8c,*(undefined2 *)(param_3 + 0x13));
  FUN_0000140c(4,0,s_usMR10____x_00005b9c,*(undefined2 *)((int)param_3 + 0x4e));
  return;
}



/* FUN_00005bac @ 00005bac */

void FUN_00005bac(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  
  puVar4 = (uint *)(*(int *)(param_2 + 0x24) + 8);
  bVar1 = 0;
  do {
    if ((param_3 <= *puVar4) || (*puVar4 == 0)) break;
    bVar1 = bVar1 + 1;
    puVar4 = puVar4 + 0x15;
  } while (bVar1 < 0x19);
  if ((bVar1 == 0x19) || (*puVar4 == 0)) {
    puVar4 = puVar4 + -0x15;
  }
  uVar3 = 0;
  do {
    *(undefined *)(param_4 + uVar3) = *(undefined *)((int)puVar4 + uVar3);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x54);
  iVar6 = param_4;
  FUN_0000140c(4,0,s_BitWidthPerDram_is__d_00005cb4,*(char *)(param_1 + 0x27),param_4);
  if (*(char *)(param_1 + 0x27) == '\b') {
    FUN_0000140c(4,0,s_x8_board_00005d44);
    if (((uint)*(ushort *)(param_4 + 6) << 0x1a) >> 0x1e == 1) {
      *(ushort *)(param_4 + 6) = *(ushort *)(param_4 + 6) & 0xffcf | 0x20;
      return;
    }
  }
  else {
    FUN_0000140c(4,0,s_x16_board_00005ccc);
    if (param_3 == DAT_00005cd8) {
      FUN_0000140c(4,0,s_ulMemClkFreq____1800Mhz_00005cdc);
      *(undefined *)(param_4 + 8) = 0x19;
      uVar5 = *(ushort *)(param_4 + 4) & 0xff87 | 0x20;
      *(ushort *)(param_4 + 4) = uVar5;
      FUN_0000140c(4,0,s_usMRS_is__x_00005cf8,uVar5,iVar6);
    }
    if (param_3 != DAT_00005d08) {
      if (param_3 != DAT_00005d50) {
        return;
      }
      FUN_0000140c(4,0,s_ulMemClkFreq____850Mhz_00005d54);
      *(undefined *)(param_4 + 8) = 0xf;
      *(ushort *)(param_4 + 4) = (*(ushort *)(param_4 + 4) & 0xff87) + 0x50;
      FUN_0000140c(4,0,s_usMRS_is__x_00005cf8);
      return;
    }
    FUN_0000140c(4,0,s_ulMemClkFreq____1750Mhz_00005d0c);
    *(undefined *)(param_4 + 8) = 0x18;
    sVar2 = (*(ushort *)(param_4 + 4) & 0xff87) + 0x18;
    *(short *)(param_4 + 4) = sVar2;
    FUN_0000140c(4,0,s_usMRS_is__x__usMR4_is__x_00005d28,sVar2,*(undefined2 *)(param_4 + 0x42));
  }
  return;
}



/* FUN_00005dbe @ 00005dbe */

undefined4 FUN_00005dbe(undefined2 *param_1)

{
  *param_1 = 2;
  param_1[1] = 1;
  return 1;
}



/* FUN_00005dcc @ 00005dcc */

undefined4 FUN_00005dcc(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00006e10();
  if (param_1 < uVar1) {
    iVar2 = FUN_00006d5c();
    if (iVar2 == 0) {
      FUN_000065c8(DAT_00005e04);
    }
    uVar4 = FUN_000002f4(param_1,iVar2);
    *param_2 = (int)uVar4;
    uVar3 = 1;
    *param_3 = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_00006338 @ 00006338 */

undefined4 FUN_00006338(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  
  piVar1 = DAT_00006460;
  param_1[3] = 0;
  iVar2 = DAT_00006464;
  iVar12 = 4 - (*param_1 & 3);
  *param_1 = *param_1 + iVar12;
  if (*piVar1 == iVar2) {
    uVar5 = piVar1[2];
    puVar10 = (uint *)(piVar1 + 4);
    uVar4 = param_4;
    if (uVar5 == 0xffffffff) {
LAB_000063a0:
      uVar5 = piVar1[3];
      while (puVar9 = (uint *)((int)piVar1 + uVar5), uVar5 != 0xffffffff) {
        uVar11 = -(int)puVar9 & 0xf;
        uVar6 = *param_1 + uVar11;
        *param_1 = uVar6;
        if (uVar6 <= puVar9[1]) {
          if (uVar5 != 0xffffffff) {
            FUN_0000509c(param_2,uVar5,param_3,uVar4,param_4);
            if (piVar1[2] == -1) {
              piVar1[2] = 0x10;
            }
            else {
              puVar10[3] = uVar5;
            }
            uVar6 = puVar9[1];
            uVar7 = *param_1;
            if (0x10 < uVar6 - uVar7) {
              puVar9[1] = uVar7;
              *(uint *)((int)piVar1 + uVar7 + uVar5 + 0x14) = (uVar6 - uVar7) - 0x10;
              FUN_00006910(param_2);
            }
            *puVar9 = param_1[1];
            cVar3 = *(char *)(param_1 + 2);
            if ((cVar3 != '\x03') && (cVar3 != '\x04')) {
              cVar3 = '\x02';
            }
            *(char *)(puVar9 + 2) = cVar3;
            puVar9[3] = 0xffffffff;
            *(char *)((int)puVar9 + 9) = (char)uVar11;
            thunk_FUN_00006c7e(puVar9 + 4,0,puVar9[1],param_2);
            piVar1[1] = piVar1[1] + puVar9[1] + 0x10;
            param_1[3] = (int)puVar9 + uVar11 + 0x10;
            *param_1 = *param_1 - (uVar11 + iVar12);
            return 0;
          }
          break;
        }
        *param_1 = uVar6 - uVar11;
        uVar5 = puVar9[3];
      }
      param_3 = param_1[1];
      uVar8 = DAT_00006470;
    }
    else {
      param_3 = param_1[1];
      do {
        puVar10 = (uint *)(uVar5 + (int)piVar1);
        uVar5 = puVar10[3];
        uVar8 = DAT_0000646c;
        if (uVar5 == 0xffffffff) {
          uVar4 = 0;
          if (*puVar10 != param_3) goto LAB_000063a0;
          break;
        }
      } while (*puVar10 != param_3);
    }
    func_0x000113a0(2,uVar8,param_3,0,param_2);
    uVar4 = 2;
  }
  else {
    FUN_000065c8(DAT_00006468);
    uVar4 = 7;
  }
  return uVar4;
}



/* FUN_00006474 @ 00006474 */

undefined4 FUN_00006474(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = DAT_000064ec;
  piVar2 = DAT_000064e8;
  if (*DAT_000064e8 != DAT_000064ec) {
    FUN_000065c8(DAT_000064f0);
    return 7;
  }
  iVar5 = DAT_000064e8[2];
  if (iVar5 != -1) {
    do {
      piVar4 = (int *)((int)DAT_000064e8 + iVar5);
      if (*piVar4 == *param_1) {
        bVar1 = *(byte *)((int)piVar4 + 9);
        param_1[2] = (int)piVar4 + bVar1 + 0x10;
        param_1[1] = piVar4[1] - (uint)bVar1;
        return 0;
      }
      iVar5 = piVar4[3];
    } while (iVar5 != -1);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  if ((piVar2 == (int *)0x0) || (*piVar2 != iVar3)) {
    FUN_000065c8(DAT_000064f0 + 0x4d);
  }
  else {
    func_0x000113a0(2,DAT_000064f4,*param_1,0,param_2);
  }
  return 2;
}



/* FUN_000064f8 @ 000064f8 */

undefined4 FUN_000064f8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00006520;
  *(undefined4 **)(param_1 + 0x18) = DAT_00006520;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1[1] = 0x10;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0x10;
  *puVar1 = DAT_00006524;
  puVar1[5] = &DAT_00008fe0;
  puVar1[7] = 0xffffffff;
  *(undefined *)(param_1 + 0x10) = 2;
  return 0;
}



/* FUN_00006528 @ 00006528 */

void FUN_00006528(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined auStack_2c [4];
  uint local_28;
  int local_18;
  uint local_10;
  
  local_10 = param_1 | 0xea000000;
  if ((param_1 != 0xe0e0) && (param_1 != 0xe0e1)) {
    FUN_0000140c(0,0x10000000,s__TP__04x__000065ac,param_1 & 0xffff);
  }
  FUN_00006d20(auStack_2c);
  puVar1 = DAT_000065b8;
  if ((1 < local_28) && (local_18 == 0)) {
    uVar2 = *DAT_000065b8;
    if (uVar2 < 0x181) {
      DAT_000065b8[uVar2 + 2] = local_10;
      *puVar1 = uVar2 + 1;
    }
    else if (uVar2 == 0x181) {
      *DAT_000065b8 = 0;
    }
    else {
      FUN_000065c8(DAT_000065bc);
    }
  }
  software_interrupt(10);
  FUN_00006f70(3,DAT_000065c4,&local_10,param_2,0);
  return;
}



/* FUN_000065c8 @ 000065c8 */

undefined4 FUN_000065c8(uint param_1)

{
  undefined2 uVar1;
  undefined4 local_24;
  undefined *local_20;
  uint local_1c;
  uint local_18;
  
  local_24 = 0;
  local_20 = (undefined *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_0000140c(0,0x40000000,s_ASSERT_on_File__x__Line__x__00006618,param_1 >> 0x10,param_1 & 0xffff)
  ;
  local_24._2_2_ = 9;
  local_20 = &DAT_00003009;
  local_1c = param_1 >> 0x10;
  local_18 = param_1 & 0xffff;
  uVar1 = FUN_00000814();
  local_24 = CONCAT22(local_24._2_2_,uVar1);
  FUN_000009c0(&local_24,1);
  FUN_00006638(param_1);
  return 1;
}



/* FUN_00006638 @ 00006638 */

/* WARNING: Removing unreachable block (ram,0x00006640) */

void FUN_00006638(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



/* FUN_00006644 @ 00006644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006644(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_0000140c(4,0,s_Init_UMC_Config_Start_000068a4);
  for (bVar3 = 0; bVar3 < *(byte *)(param_1 + 0x4b); bVar3 = bVar3 + 2) {
    func_0x00010abc(param_1,bVar3);
    func_0x00010a58(param_1,0x2e8,0);
    func_0x00010a58(param_1,0x2e2,DAT_000068c0);
    func_0x00010a58(param_1,0x2e0,DAT_000068c4);
    func_0x00010a58(param_1,0x2e1,DAT_000068c8);
    func_0x00010a58(param_1,0x2c4,DAT_000068cc);
    func_0x00010a58(param_1,0x2c7,0x110000);
    func_0x00010a58(param_1,0x2c6,0x120000);
    func_0x00010a58(param_1,0x2c8,0x130000);
    func_0x00010a58(param_1,0x2c9,0x140000);
    uVar1 = DAT_000068d0;
    func_0x00010a58(param_1,0x2c5,DAT_000068d0);
    func_0x00010a58(param_1,0x2ca,DAT_000068d4);
    func_0x00010a58(param_1,0x2cb,&DAT_000054d5);
    func_0x00010a58(param_1,0x2d2,DAT_000068d8);
    func_0x00010a58(param_1,0x2d9,DAT_000068dc);
    func_0x00010a58(param_1,0x2ce,0x110000);
    func_0x00010a58(param_1,0x2d5,0x110000);
    func_0x00010a58(param_1,0x2dc,0x110000);
    func_0x00010a58(param_1,0x2cd,0x120000);
    func_0x00010a58(param_1,0x2d4,0x120000);
    func_0x00010a58(param_1,0x2db,0x120000);
    uVar2 = DAT_000068e0;
    func_0x00010a58(param_1,0x2cf,DAT_000068e0);
    func_0x00010a58(param_1,0x2d6,uVar2);
    func_0x00010a58(param_1,0x2dd,uVar2);
    func_0x00010a58(param_1,0x2d0,0x140000);
    func_0x00010a58(param_1,0x2d7,0x140000);
    func_0x00010a58(param_1,0x2de,0x140000);
    func_0x00010a58(param_1,0x2cc,uVar1);
    func_0x00010a58(param_1,0x2d3,uVar1);
    func_0x00010a58(param_1,0x2da,DAT_000068e4);
    func_0x00010a58(param_1,0x2d1,DAT_000068e8);
    func_0x00010a58(param_1,0x2d8,DAT_000068ec);
    func_0x00010a58(param_1,0x2df,DAT_000068f0);
    func_0x00010a58(param_1,0x2eb,s_Slave_Socket_ID____d_000091f8 + 9);
    func_0x00010a58(param_1,0x2ab,0);
    func_0x00010a58(param_1,0x29a,0);
    func_0x00010a58(param_1,0x299,0);
    func_0x00010a58(param_1,0x29b,_DAT_000068f4);
    func_0x00010a58(param_1,0x29c,0);
    func_0x00010a58(param_1,0x29d,0);
    func_0x00010a58(param_1,0x29e,0);
    func_0x00010a58(param_1,0x294,0xb0);
    func_0x00010a58(param_1,0x298,0);
    func_0x00010a58(param_1,0x296,0);
    func_0x00010a58(param_1,0x295,0);
  }
  FUN_0000140c(4,0,s_n_Init_UMC_Config_End_000068f7 + 1);
  return;
}



/* FUN_00006910 @ 00006910 */

void FUN_00006910(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00006944;
  iVar2 = *(int *)(DAT_00006944 + 0xc);
  iVar4 = -1;
  while ((iVar3 = iVar2, iVar3 != -1 &&
         (*(uint *)(DAT_00006944 + iVar3 + 4) < *(uint *)(DAT_00006944 + param_2 + 4)))) {
    iVar4 = iVar3;
    iVar2 = *(int *)(DAT_00006944 + iVar3 + 0xc);
  }
  *(int *)(DAT_00006944 + param_2 + 0xc) = iVar3;
  if (iVar4 != -1) {
    *(int *)(iVar1 + iVar4 + 0xc) = param_2;
    return;
  }
  *(int *)(iVar1 + 0xc) = param_2;
  return;
}



/* FUN_00006948 @ 00006948 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006948(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_58 [40];
  undefined auStack_30 [24];
  int local_18;
  
  iVar1 = *DAT_00006984;
  local_18 = iVar1;
  FUN_00000114(auStack_30,s__BUFFER_OVERFLOW__00006988,0x18);
  thunk_FUN_00006c72(param_1 + param_2 + -0x15,auStack_30,0x15,auStack_58);
  if (local_18 != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* FUN_000069a0 @ 000069a0 */

uint FUN_000069a0(undefined2 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_8 [2];
  
  local_8[0] = param_4 & 0xffffff00;
  FUN_00006bc0(1,param_1,local_8,0);
  return local_8[0] & 0xff;
}



/* FUN_000069ba @ 000069ba */

undefined4 FUN_000069ba(uint param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_00006c14(1,param_1 & 0xffff,&uStack_c,0,param_1);
  return 0;
}



/* FUN_000069cc @ 000069cc */

undefined4 FUN_000069cc(void)

{
  return 0;
}



/* FUN_000069d0 @ 000069d0 */

undefined4 FUN_000069d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined local_10;
  undefined3 uStack_f;
  uint local_c;
  
  local_c = param_4 & 0xffffff00;
  uStack_f = (undefined3)((uint)param_3 >> 8);
  local_10 = 0x55;
  FUN_00006c14(1,0x164e,&local_10,0);
  local_10 = 0xd;
  FUN_00006c14(1,0x164e,&local_10,0);
  FUN_00006bc0(1,0x164f,&local_c,0);
  _local_10 = CONCAT31(uStack_f,0xaa);
  FUN_00006c14(1,0x164e,&local_10,0);
  if ((char)local_c != -0x7e) {
    return 0;
  }
  return 1;
}



/* FUN_00006a2e @ 00006a2e */

undefined4 FUN_00006a2e(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_000069ba(0x2e,0x87);
  FUN_000069ba(0x2e,1);
  FUN_000069ba(0x2e,0x55);
  FUN_000069ba(0x2e,0x55);
  FUN_000069ba(0x2e,0x20);
  iVar1 = FUN_000069a0(0x2f);
  FUN_000069ba(0x2e,0x21);
  uVar2 = FUN_000069a0(0x2f);
  FUN_000069ba(0x2e,2);
  FUN_000069ba(0x2f,2);
  if ((iVar1 << 8 | uVar2) == 0x8772) {
    return 1;
  }
  return 0;
}



/* FUN_00006a94 @ 00006a94 */

undefined4 FUN_00006a94(void)

{
  short sVar1;
  undefined uVar2;
  undefined4 in_r3;
  undefined local_10;
  undefined3 uStack_f;
  
  uStack_f = (undefined3)((uint)in_r3 >> 8);
  local_10 = 0x87;
  FUN_00006c14(1,0x2e,&local_10,0);
  local_10 = 0x87;
  FUN_00006c14(1,0x2e,&local_10,0);
  local_10 = 0x20;
  FUN_00006c14(1,0x2e,&local_10,0);
  FUN_00006bc0(1,0x2f,&local_10,0);
  uVar2 = local_10;
  local_10 = 0x21;
  FUN_00006c14(1,0x2e,&local_10,0);
  FUN_00006bc0(1,0x2f,&local_10,0);
  sVar1 = CONCAT11(uVar2,local_10);
  _local_10 = CONCAT31(uStack_f,0xaa);
  FUN_00006c14(1,0x2e,&local_10,0);
  if (sVar1 == -0x2bbf) {
    return 1;
  }
  return 0;
}



/* FUN_00006b22 @ 00006b22 */

undefined * FUN_00006b22(void)

{
  undefined local_18 [24];
  
  software_interrupt(0x26);
  return local_18;
}



/* FUN_00006b5c @ 00006b5c */

undefined * FUN_00006b5c(void)

{
  undefined local_18 [24];
  
  software_interrupt(0x27);
  return local_18;
}



/* FUN_00006b98 @ 00006b98 */

undefined8 FUN_00006b98(int param_1,int param_2)

{
  if (param_2 == 0x80) {
    param_2 = 0xfffd;
    if (param_1 == 3) {
      software_interrupt(10);
      return CONCAT44(0xfffd,DAT_00006bbc);
    }
    software_interrupt(10);
    param_1 = DAT_00006bbc;
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_00006bc0 @ 00006bc0 */

undefined * FUN_00006bc0(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00006bf8;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00006bf8;
    local_18[2] = param_3;
    FUN_000065c8(DAT_00006c10);
  }
LAB_00006bf8:
  software_interrupt(0x26);
  return (undefined *)local_18;
}



/* FUN_00006c14 @ 00006c14 */

undefined * FUN_00006c14(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00006c4c;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00006c4c;
    local_18[2] = param_3;
    FUN_000065c8(DAT_00006c64);
  }
LAB_00006c4c:
  software_interrupt(0x27);
  return (undefined *)local_18;
}



/* FUN_00006c72 @ 00006c72 */

void FUN_00006c72(undefined *param_1,undefined *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* FUN_00006c7e @ 00006c7e */

void FUN_00006c7e(undefined *param_1,undefined param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* FUN_00006c84 @ 00006c84 */

undefined *
FUN_00006c84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_8;
  
  uStack_10 = param_5;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00006cb6;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00006cb6;
    local_18 = param_3;
    local_14 = param_4;
    FUN_000065c8(DAT_00006ccc);
  }
LAB_00006cb6:
  software_interrupt(0x26);
  return (undefined *)&local_18;
}



/* FUN_00006cd0 @ 00006cd0 */

undefined *
FUN_00006cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_8;
  
  uStack_10 = param_5;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00006d02;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00006d02;
    local_18 = param_3;
    local_14 = param_4;
    FUN_000065c8(DAT_00006d18);
  }
LAB_00006d02:
  software_interrupt(0x27);
  return (undefined *)&local_18;
}



/* FUN_00006d1c @ 00006d1c */

void FUN_00006d1c(void)

{
  return;
}



/* FUN_00006d1e @ 00006d1e */

void FUN_00006d1e(void)

{
  return;
}



/* FUN_00006d20 @ 00006d20 */

void FUN_00006d20(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00006e4c();
  *param_1 = uVar1;
  uVar1 = FUN_00006e10();
  param_1[1] = uVar1;
  uVar1 = FUN_00006d5c();
  param_1[2] = uVar1;
  uVar1 = FUN_00006dd8();
  param_1[3] = uVar1;
  iVar2 = FUN_00006da0();
  param_1[4] = iVar2;
  if ((iVar2 == 0) && (param_1[3] == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  param_1[5] = uVar1;
  param_1[6] = (uint)(iVar2 == 0);
  return;
}



/* FUN_00006d5c @ 00006d5c */

undefined4 FUN_00006d5c(void)

{
  FUN_0000140c(0,2,s_PspBootRomServices_DiesPerSocket_00006d70,1);
  return 1;
}



/* FUN_00006da0 @ 00006da0 */

undefined4 FUN_00006da0(void)

{
  FUN_0000140c(0,2,s_PspBootRomServices_PhysDieId___d_00006db4);
  return 0;
}



/* FUN_00006dd8 @ 00006dd8 */

undefined4 FUN_00006dd8(void)

{
  FUN_0000140c(0,2,s_PspBootRomServices_SocketId___d_00006dec);
  return 0;
}



/* FUN_00006e10 @ 00006e10 */

undefined4 FUN_00006e10(void)

{
  FUN_0000140c(0,2,s_PspBootRomServices_SystemDieCoun_00006e24,1);
  return 1;
}



/* FUN_00006e4c @ 00006e4c */

undefined4 FUN_00006e4c(void)

{
  FUN_0000140c(0,2,s_PspBootRomServices_SystemSocketC_00006e60,1);
  return 1;
}



/* FUN_00006ea4 @ 00006ea4 */

uint FUN_00006ea4(int param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  
  FUN_0000140c(0,1,s__SMN_R__0x_0x__00006f24,param_2);
  if (*DAT_00006f38 != '\0') {
    for (uVar2 = *(uint *)(DAT_00006f38 + 4); uVar2 < *(uint *)(DAT_00006f38 + 8); uVar2 = uVar2 + 1
        ) {
    }
  }
  uVar2 = param_2 & 0xfff;
  param_2 = param_2 & 0xfffff000;
  software_interrupt(4);
  if (param_1 == 0x81) {
LAB_00006f02:
    pcVar1 = s_0x_02x__8b__00006f40;
    *(undefined *)param_3 = *(undefined *)(param_2 + uVar2);
  }
  else {
    if (param_1 < 0x82) {
      if (param_1 == 1) goto LAB_00006f02;
      if (param_1 == 2) goto LAB_00006f0a;
      if (param_1 != 3) goto LAB_00006ef4;
    }
    else {
      if (param_1 == 0x82) {
LAB_00006f0a:
        pcVar1 = s_0x_04x__16b__00006f50;
        *(undefined2 *)param_3 = *(undefined2 *)(param_2 + uVar2);
        goto LAB_00006f10;
      }
      if (param_1 != 0x83) {
LAB_00006ef4:
        FUN_000065c8(DAT_00006f3c);
        goto LAB_00006efa;
      }
    }
    pcVar1 = s_0x_08x__32b__00006f60;
    *param_3 = *(undefined4 *)(param_2 + uVar2);
  }
LAB_00006f10:
  FUN_0000140c(0,1,pcVar1);
LAB_00006efa:
  software_interrupt(5);
  return param_2;
}



/* FUN_00006f70 @ 00006f70 */

uint FUN_00006f70(int param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_00006fec;
  if (*DAT_00006fec != '\0') {
    FUN_0000140c(0,1,s__SMN_BW__0x_0x____0x_0x_00006ff0,param_2,*param_3);
    for (uVar2 = *(uint *)(pcVar1 + 4); uVar2 < *(uint *)(pcVar1 + 8); uVar2 = uVar2 + 1) {
    }
    return uVar2;
  }
  FUN_0000140c(0,1,s__SMN_W__0x_0x____0x_0x_0000700c,param_2,*param_3);
  uVar2 = param_2 & 0xfff;
  param_2 = param_2 & 0xfffff000;
  software_interrupt(4);
  if (param_1 == 0x81) {
LAB_00006fda:
    *(undefined *)(param_2 + uVar2) = *(undefined *)param_3;
  }
  else {
    if (param_1 < 0x82) {
      if (param_1 == 1) goto LAB_00006fda;
      if (param_1 == 2) goto LAB_00006fe0;
      if (param_1 != 3) goto LAB_00006fce;
    }
    else {
      if (param_1 == 0x82) {
LAB_00006fe0:
        *(undefined2 *)(param_2 + uVar2) = *(undefined2 *)param_3;
        goto LAB_00006fd4;
      }
      if (param_1 != 0x83) {
LAB_00006fce:
        FUN_000065c8(DAT_00007028);
        goto LAB_00006fd4;
      }
    }
    *(undefined4 *)(param_2 + uVar2) = *param_3;
  }
LAB_00006fd4:
  software_interrupt(5);
  return param_2;
}



/* FUN_0000702c @ 0000702c */

undefined4 FUN_0000702c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_43c;
  undefined4 local_438 [4];
  undefined local_428;
  undefined2 local_50;
  short sStack_4e;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_3c;
  undefined local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined auStack_28 [8];
  
  piVar1 = DAT_000072bc;
  local_50 = 0;
  sStack_4e = 0;
  local_4c = (undefined *)0x0;
  local_48 = 0;
  local_44 = 0;
  *DAT_000072bc = param_1;
  software_interrupt(0xf3);
  if ((DAT_000072c0 & 0xff) != 0) {
    FUN_000065c8(DAT_000072c4,&local_43c);
  }
  *DAT_000072c8 = local_43c;
  software_interrupt(0x19);
  software_interrupt(6);
  FUN_0000134c(local_438);
  local_428 = 1;
  local_438[0] = 0;
  iVar3 = FUN_000064f8(local_438);
  if (iVar3 == 9) goto LAB_0000723e;
  FUN_000055a2(local_438);
  local_40 = 0x888;
  local_3c = s_Undefined_BF_enum___x_0000a038 + 1;
  local_38 = 2;
  iVar4 = FUN_00006338(&local_40,local_438);
  iVar5 = local_34;
  piVar2 = DAT_000072d8;
  if (iVar4 == 0) {
    local_40 = 1000;
    local_3c = &DAT_0000a010;
    local_38 = 2;
    iVar4 = FUN_00006338(&local_40,local_438);
    if (iVar4 != 0) {
      iVar5 = DAT_000072c4 + 0x50;
      goto LAB_000070dc;
    }
    FUN_00000d94(local_438);
    if ((undefined *)(DAT_000072dc - DAT_000072e0) < &DAT_00002ef8) {
      FUN_000065c8(DAT_000072c4 + 0x60);
    }
    FUN_000047b4(local_438);
    FUN_00000934(local_438);
    FUN_0000484c(local_438);
    FUN_000022ac(local_438);
    FUN_00004930(2,1,&local_30,auStack_28,0);
    uVar6 = FUN_00000318(*(undefined2 *)(*(int *)(&DAT_00002ee8 + *piVar1) + 0xa0));
    FUN_0000140c(4,0,s_ABL_Version____sCAR_04x_000072e4,uVar6,
                 *(undefined4 *)(*(int *)(&DAT_00002ee8 + *piVar1) + 0x60));
    FUN_0000140c(4,0,s_APCB_Version____x_00007300,local_30);
    FUN_0000140c(4,0,s_ABL1___stack_chk_guard____08x_00007314,local_43c);
    FUN_00006528(0xe0b2,local_438);
    iVar3 = FUN_000013dc(0);
    if (iVar3 != 9) {
      *(int *)(iVar5 + 0xb8) = local_34;
      *(int *)(local_34 + 0x28) = iVar5 + 0x98;
      FUN_00000114(*(undefined4 *)(iVar5 + 0xb8),local_438,0x28);
      FUN_00001c24(*(undefined4 *)(iVar5 + 0xb8),iVar5 + 0x28);
      iVar4 = FUN_000017bc(*(int *)(iVar5 + 0xb8));
      *piVar2 = iVar4;
      *(int *)(*(int *)(iVar5 + 0xb8) + 0x3dc) = iVar4;
      if ((iVar4 == 9) || (iVar4 == 7)) {
        FUN_0000140c(4,0,DAT_00007364);
        sStack_4e = (short)*piVar2;
        local_4c = (undefined *)0x4000;
        local_50 = FUN_00000814();
        local_48 = 0;
        local_44 = 0;
        FUN_000009c0(&local_50,0);
        iVar3 = FUN_000073ec(*piVar2);
        if (iVar3 == 0) goto LAB_000071cc;
        iVar3 = 9;
        goto LAB_0000723e;
      }
      if (iVar3 == 7) goto LAB_0000723e;
LAB_000071cc:
      local_2c = 1;
      FUN_0000140c(4,0,s_AGESA_MEM___Multi_Die___Debug_Su_00007334);
      FUN_00006528(0xe0b4,local_438);
      iVar3 = FUN_00000d60(local_438,0xf,&local_2c);
      if (iVar3 == 9) goto LAB_0000723e;
      goto LAB_000071f6;
    }
  }
  else {
    iVar5 = DAT_000072c4 + 0x43;
LAB_000070dc:
    FUN_000065c8(iVar5);
LAB_000071f6:
    if (iVar3 != 7) {
      if (((*piVar2 == 9) || (*piVar2 == 7)) && (iVar5 = FUN_000073ec(), iVar5 != 0)) {
        FUN_00006528(0xe0b6,local_438);
        FUN_0000140c(4,0,s_ABL_1___Global_AGESA_FATAL_ERROR_00007390);
        iVar3 = 9;
      }
      goto LAB_00007298;
    }
  }
LAB_0000723e:
  FUN_00006528(0xe0b5,local_438);
  FUN_0000140c(4,0,s_ABL_1___AGESA_FATAL_ERROR_detect_00007368);
  if (sStack_4e == 0) {
    sStack_4e = (short)iVar3;
  }
  if (local_4c == (undefined *)0x0) {
    local_4c = &DAT_00003005;
    local_48 = 0;
    local_44 = 0;
  }
  local_50 = FUN_00000814();
  FUN_000009c0(&local_50,1);
LAB_00007298:
  FUN_0000140c(4,0,s_End_of_Phase_1_Initialization_000073cc);
  FUN_00006528(0xe0b7,local_438);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}



/* FUN_000073ec @ 000073ec */

undefined4 FUN_000073ec(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_24;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  FUN_00006d20(&local_38);
  uVar2 = 0;
  if (1 < local_34) {
    if (local_24 == 0) {
      return 0;
    }
    for (uVar4 = 0; uVar4 < local_38; uVar4 = uVar4 + 1 & 0xff) {
      for (uVar3 = 0; uVar3 < local_34; uVar3 = uVar3 + 1 & 0xff) {
        local_44 = 0x4000;
        local_48 = CONCAT22(9,(ushort)uVar3 | (ushort)(uVar4 << 8));
        iVar1 = FUN_000008e0(&local_48);
        if (iVar1 == 0) {
          local_48 = CONCAT22(7,(undefined2)local_48);
          iVar1 = FUN_000008e0(&local_48);
          if (iVar1 != 0) goto LAB_00007446;
        }
        else {
LAB_00007446:
          uVar2 = uVar2 + 1 & 0xff;
        }
      }
    }
    if (local_34 * local_38 - uVar2 != 0) {
      return 0;
    }
  }
  return 1;
}



/* FUN_00007478 @ 00007478 */

int FUN_00007478(int *param_1,int param_2,int param_3,int param_4)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *local_4c;
  undefined4 local_48;
  undefined local_44;
  int local_40;
  undefined auStack_3c [32];
  
  FUN_00005dbe(*(int *)(param_2 + 0x3c4) + 0x5e);
  iVar3 = func_0x0000ff60(*(int *)(param_2 + 0x3c4) + 0x5e);
  if (iVar3 != 0) {
    *param_1 = param_2;
    iVar3 = *(int *)(param_2 + 0x28);
    param_1[8] = param_4;
    param_1[1] = iVar3;
    puVar5 = *(undefined **)(param_2 + 0x3c4);
    param_1[2] = (int)puVar5;
    *puVar5 = 0;
    param_1[0x10] = *(int *)(puVar5 + 4);
    local_4c = s__MEM_CONF__Override_Memory_Timin_00002878 + 0x28;
    local_48 = 0x1080000;
    local_44 = 2;
    iVar3 = FUN_00006338(&local_4c,param_2);
    if (iVar3 == 0) {
      puVar5[0x74] = 0x10;
      *(int *)(puVar5 + 0x70) = local_40;
      local_40 = local_40 + 0x1700;
      uVar4 = 0;
      do {
        uVar1 = (undefined)uVar4;
        *(undefined *)(*(int *)(puVar5 + 0x70) + uVar4 * 0x170) = uVar1;
        *(undefined *)(*(int *)(puVar5 + 0x70) + uVar4 * 0x170 + 0x168) = uVar1;
        *(int *)(*(int *)(puVar5 + 0x70) + uVar4 * 0x170 + 0x164) = local_40;
        *(undefined *)(local_40 + 0x15) = uVar1;
        uVar4 = uVar4 + 1 & 0xff;
        local_40 = local_40 + 0xca;
      } while (uVar4 < 0x10);
      param_1[0xe] = local_40;
      local_4c = (char *)0x5a0;
      local_48 = 0x1280000;
      local_44 = 2;
      iVar3 = FUN_00006338(&local_4c,*param_1);
      if (iVar3 == 0) {
        param_1[0xb0] = local_40;
        param_1[0xb1] = local_40 + 0x3c;
        uVar4 = 0;
        local_40 = local_40 + 0x57c;
        param_1[0xb2] = local_40;
        do {
          iVar3 = uVar4 * 0x170 + 0x164;
          *(undefined4 *)
           (param_2 + (uint)(byte)puVar5[1] * 0x80 + (uVar4 + (uint)(byte)puVar5[2] * 2) * 4 + 0x344
           ) = *(undefined4 *)(*(int *)(puVar5 + 0x70) + iVar3);
          *(uint *)(param_2 + (uint)(byte)puVar5[1] * 0x80 + (uVar4 + (uint)(byte)puVar5[2] * 2) * 4
                   + 900) = uVar4 * 0x170 + 0x2c + *(int *)(puVar5 + 0x70);
          cVar2 = (char)uVar4;
          uVar4 = uVar4 + 1 & 0xff;
          **(char **)(*(int *)(puVar5 + 0x70) + iVar3) = cVar2 + puVar5[2] * '\x02';
        } while (uVar4 < 0x10);
        FUN_0000b090(param_1);
        (**(code **)(param_3 + 0x3c))(param_1);
        param_1[7] = param_3;
        FUN_00006d20(auStack_3c);
        *(undefined *)(param_1 + 200) = 0;
        func_0x00010abc(param_1,0);
        return 1;
      }
    }
    else {
      func_0x000113a0(9,DAT_00007608,0,0,param_2);
      func_0x00011abc(9,puVar5);
      FUN_000065c8(DAT_0000760c);
    }
    iVar3 = 0;
  }
  return iVar3;
}



/* FUN_000096fc @ 000096fc */

undefined4 FUN_000096fc(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  short sVar10;
  undefined8 uVar11;
  undefined4 local_198;
  undefined4 uStack_194;
  uint local_180;
  uint auStack_17c [55];
  undefined4 local_a0;
  uint local_60 [8];
  undefined auStack_40 [4];
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar6 = *param_1;
  uVar7 = 0;
  thunk_FUN_00006c7e(local_60,0,0x20,iVar6);
  FUN_0000140c(4,0,s_AGESA_MEM___Multi_Die___DRAM_Spe_000099ac);
  FUN_0000140c(4,0,s_Synchronize_Mem_Speed_for_each_c_000099d8);
  FUN_00006d20(auStack_40);
  thunk_FUN_00006c7e(iVar6 + 0x278,0xff,0x40,iVar6);
  if (local_3c < 2) {
    FUN_0000140c(4,0,DAT_00009b0c);
    for (; uVar7 < *(byte *)(*(int *)(iVar6 + 0x3c4) + 0x74); uVar7 = uVar7 + 1 & 0xff) {
      iVar3 = uVar7 * 0x170 + 0x20;
      uVar8 = (uint)*(ushort *)(*(int *)(*(int *)(iVar6 + 0x3c4) + 0x70) + iVar3);
      *(uint *)(iVar6 + local_34 * 0x40 + local_30 * 0x40 + uVar7 * 4 + 0x278) = uVar8;
      FUN_0000140c(4,0,s_Channel__d_Memory_Speed____d_00009b10,uVar7,uVar8);
      *(uint *)(iVar6 + 700) = (uint)*(ushort *)(*(int *)(*(int *)(iVar6 + 0x3c4) + 0x70) + iVar3);
    }
  }
  else {
    if (local_2c == 0) {
      sVar10 = *(byte *)(*(int *)(iVar6 + 0x3c4) + 0x74) + 1;
      local_60[0] = CONCAT22(sVar10,CONCAT11((char)local_30,(char)local_34));
      for (; uVar7 < *(byte *)(*(int *)(iVar6 + 0x3c4) + 0x74); uVar7 = uVar7 + 1 & 0xff) {
        (*(code *)param_1[0x14b])(param_1,uVar7);
        local_60[uVar7 + 1] = (uint)*(ushort *)(param_1[3] + 0x20);
      }
      iVar3 = FUN_0000128c(iVar6,0,local_60,sVar10,1);
      if (iVar3 == 9) {
        FUN_000065c8(DAT_00009ad8 + 0x24);
      }
      iVar3 = FUN_000011c0(iVar6,0,0x1000000,local_60,1);
      if (iVar3 == 9) {
        FUN_0000140c(0,0x40000000,s__ERROR___Slave__ABL__Error_ASSER_00009adc);
        FUN_000065c8(DAT_00009ad8 + 0x33);
      }
      *(uint *)(iVar6 + 700) = local_60[0];
      *(undefined *)(iVar6 + 0x2c0) = 1;
      for (bVar9 = 0; bVar9 < *(byte *)((int)param_1 + 0x4b); bVar9 = bVar9 + 1) {
        (*(code *)param_1[0x14b])(param_1,bVar9);
        *(short *)(param_1[3] + 0x20) = (short)local_60[0];
      }
      return 0;
    }
    FUN_0000140c(4,0,s_Running_on_System_Master__Retrei_00009a14);
    for (; uVar7 < *(byte *)((int)param_1 + 0x4b); uVar7 = uVar7 + 1 & 0xff) {
      (*(code *)param_1[0x14b])(param_1,uVar7);
      uVar1 = *(ushort *)(param_1[3] + 0x20);
      *(uint *)(iVar6 + uVar7 * 4 + 0x278) = (uint)uVar1;
      FUN_0000140c(4,0,s_Master_Channel__d_Memory_Speed___00009a50,uVar7,(uint)uVar1);
    }
    FUN_00001050(iVar6,&local_198);
    for (uVar7 = 1; uVar7 < local_3c; uVar7 = uVar7 + 1 & 0xff) {
      local_60[0] = auStack_17c[uVar7 * 7];
      local_60[1] = auStack_17c[uVar7 * 7 + 1];
      for (uVar8 = 0; uVar8 < *(byte *)(*(int *)(iVar6 + 0x3c4) + 0x74); uVar8 = uVar8 + 1 & 0xff) {
        FUN_0000140c(4,0,s_Slave__d_Channel__d_Memory_Speed_00009a78,uVar7,uVar8,local_60[uVar8]);
        uVar11 = FUN_000002f4(uVar7,local_38);
        uVar4 = local_60[uVar8];
        if (uVar4 == 0) {
          uVar4 = 0x7d1;
        }
        *(uint *)(iVar6 + (int)uVar11 * 0x40 + (int)((ulonglong)uVar11 >> 0x20) * 0x40 + uVar8 * 4 +
                 0x278) = uVar4;
      }
    }
    uVar7 = 0;
    uVar8 = 0x7d1;
    do {
      uVar4 = 0;
      do {
        uVar2 = 0;
        do {
          uVar5 = *(uint *)(iVar6 + uVar7 * 0x40 + uVar4 * 0x40 + uVar2 * 4 + 0x278);
          if (uVar5 < uVar8) {
            uVar8 = uVar5 & 0xffff;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 0x10);
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 == 0);
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 == 0);
    *(uint *)(iVar6 + 700) = uVar8;
    for (bVar9 = 0; bVar9 < *(byte *)((int)param_1 + 0x4b); bVar9 = bVar9 + 1) {
      (*(code *)param_1[0x14b])(param_1,bVar9);
      *(short *)(param_1[3] + 0x20) = (short)uVar8;
    }
    FUN_0000140c(4,0,s_Sending_Synchronized_Speed_back_t_00009aa4,*(undefined2 *)(param_1[3] + 0x20)
                );
    local_198 = 0;
    uStack_194 = 0x1000000;
    local_a0 = 1;
    local_180 = uVar8;
    iVar3 = FUN_00000ed4(iVar6,&local_198);
    if (iVar3 == 9) {
      FUN_000065c8(DAT_00009ad8);
    }
  }
  *(undefined *)(iVar6 + 0x2c0) = 1;
  return 0;
}



/* FUN_00009b30 @ 00009b30 */

undefined4 FUN_00009b30(int param_1,undefined4 param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  
  uVar1 = *(undefined *)(param_1 + 0x49);
  bVar3 = 0;
  while( true ) {
    if (*(byte *)(param_1 + 0x4b) <= bVar3) {
      func_0x00010abc(param_1,uVar1);
      return 1;
    }
    func_0x00010abc(param_1,bVar3);
    if ((*(int *)(*(int *)(param_1 + 0xc) + 0x28) != 0) &&
       (((bVar3 != 1 || (*(char *)(param_1 + 0x50) == '\0')) &&
        (iVar2 = FUN_0000ae18(param_1,param_2), iVar2 != param_3)))) break;
    bVar3 = bVar3 + 1;
  }
  func_0x00010abc(param_1,uVar1);
  return 0;
}



/* FUN_00009b8c @ 00009b8c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x00009ba2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00009ba6) */
/* WARNING: Removing unreachable block (ram,0x00009bac) */
/* WARNING: Removing unreachable block (ram,0x00009bb0) */
/* WARNING: Removing unreachable block (ram,0x00009bb6) */
/* WARNING: Removing unreachable block (ram,0x00009bc0) */

void FUN_00009b8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00009bd8 @ 00009bd8 */

uint FUN_00009bd8(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 *puStack_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  uVar6 = 0;
  local_54 = 0;
  local_2c = param_3 & 0xfff;
  puStack_34 = param_1;
  local_30 = param_2;
  uStack_28 = param_4;
  if (0x9af < local_2c) {
    FUN_000065c8(DAT_00009f74);
  }
  if (*(char *)(param_1 + 200) == '\0') {
    local_48 = 2;
  }
  else {
    local_48 = 0;
  }
  uStack_44 = 0;
  local_50 = (uint)(*(char *)(param_1 + 200) == '\0');
  uStack_4c = 0;
  uVar8 = *(uint *)(param_1[0x11] + local_2c * 4);
  if (uVar8 == 0) {
    FUN_0000140c(4,0,s_Undefined_BF_enum___x_0000a038,local_2c);
    FUN_000065c8(DAT_0000a004 + 0xd4);
  }
  else {
    if (local_2c < 0x652) {
      local_40 = (uVar8 << 8) >> 0x14;
      uVar10 = (uVar8 << 0x14) >> 0x1a;
      uVar9 = uVar8 & 0x3f;
      uVar12 = (uVar8 << 1) >> 0x1f;
      uVar11 = (uint)(0x1e < uVar10 - uVar9);
      uVar8 = *(uint *)(param_1[0x11] + local_40 * 4);
      if ((0x1f < uVar10) || (uVar10 < uVar9)) {
        FUN_000065c8(DAT_00009f74 + 0x42);
      }
    }
    else {
      uVar9 = 0;
      uVar11 = 1;
      uVar10 = 0x1f;
      local_40 = local_2c;
      uVar12 = uVar9;
    }
    local_38 = 0;
    local_3c = local_40 - 0x653;
    do {
      uVar2 = uVar6;
      if (local_3c < 0x1e) {
        if (uVar8 >> 0x10 != 0) {
          FUN_000065c8(DAT_00009f74 + 0x54);
        }
        uVar6 = param_1[0x10];
        uVar7 = uVar8 & 0x7fff | ((uVar6 << 0xc) >> 0x1b) << 0xf;
        uVar8 = uVar7 | ((uVar6 << 4) >> 0x18) << 0x14 | uVar6 & 0xf0000000;
        uVar3 = param_4;
        if ((-uVar11 & local_30) == 0) {
          uVar6 = uVar8;
          FUN_00006d1c(3,uVar8,&local_54,*param_1,uVar8);
          uVar6 = uVar6 & 0xfff;
          FUN_0000140c(local_48,uStack_44,s__R_F_d__03x_00009f78,(uVar7 << 0x10) >> 0x1c,uVar6);
          pcVar5 = s____x_00009f84;
          uVar7 = local_54;
LAB_00009de0:
          FUN_0000140c(local_48,uStack_44,pcVar5,uVar7,uVar6);
          uVar3 = local_54;
        }
      }
      else if (local_40 < 0x672) {
        FUN_0000140c(local_50,uStack_4c,s_RegIndex__d_out_of_range__BF_Enu_00009fdc,local_40,
                     local_2c);
        FUN_000065c8(DAT_0000a004);
        uVar3 = local_54;
      }
      else {
        uVar7 = uVar8 & 0xfff;
        uVar2 = uVar6 | uVar7;
        uVar3 = param_4;
        if ((-uVar11 & local_30) == 0) {
          uVar3 = (uVar8 << 2) >> 0x1d;
          if (uVar3 == 1) {
            uVar1 = (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
            uVar2 = uVar6 & 0xffffcfff | uVar7 | 0x50000 | uVar1 |
                    (*(byte *)((int)param_1 + 0x49) & 1) << 0xd | uVar2 | 0x50000 | uVar1;
            if (uVar12 != 0) {
              uVar2 = uVar2 & 0xfffff8ff | param_1[0xac] * 0x100 + 0x200U;
            }
          }
          else if (uVar3 == 2) {
            uVar1 = (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
            uVar2 = uVar6 & 0xffffcfff | uVar7 | 0x50000 | uVar1 |
                    (*(byte *)((int)param_1 + 0x49) & 1) << 0xd | uVar2 | 0x50000 | uVar1;
            if (uVar12 != 0) {
              uVar2 = uVar2 + param_1[0xac] * 0x14;
            }
          }
          else if (uVar3 == 3) {
            uVar2 = uVar2 | 0x53000 | (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
          }
          else if (uVar3 == 4) {
            uVar2 = uVar2 | 0x1c000;
          }
          else {
            FUN_000065c8(DAT_00009f74 + 0xfc);
          }
          FUN_00006ea4(3,uVar2,&local_54,*param_1);
          if (uVar3 == 1) {
            uVar6 = *(byte *)((int)param_1 + 0x49) & 1;
          }
          else {
            uVar6 = 0;
          }
          uVar7 = (uint)(*(byte *)((int)param_1 + 0x49) >> 1);
          if (uVar3 == 1) {
            pcVar5 = s__R_SMN_UMC_d_CH_d___6x___d__d____00009f8c;
          }
          else {
            pcVar5 = s__R_SMN_UMC_d_CTRL_d___6x___d__d__00009fb4;
          }
          goto LAB_00009de0;
        }
      }
      local_54 = uVar3;
      uVar6 = uVar2;
      if (local_30 == 0) {
        if (uVar11 == 0) {
          uVar3 = (1 << ((uVar10 - uVar9) + 1 & 0xff)) - 1U & local_54 >> uVar9;
          uVar4 = 0;
          pcVar5 = s__R_Subfield___d__d_____x_0000a014;
          uVar2 = 2;
          local_54 = uVar3;
          goto LAB_00009f4a;
        }
      }
      else {
        if (uVar11 == 0) {
          uVar2 = (1 << ((uVar10 - uVar9) + 1 & 0xff)) - 1;
          local_54 = (param_4 & uVar2) << uVar9 | local_54 & ~(uVar2 << uVar9);
        }
        if (local_3c < 0x1e) {
          FUN_00006d1e(3,uVar8,&local_54,*param_1);
          FUN_0000140c(local_50,uStack_4c,&DAT_0000a008,(uVar8 << 0x10) >> 0x1c,uVar8 & 0xfff);
          pcVar5 = s__R_SMN_UMC_d_CTRL_d___6x___d__d__00009fb4 + 0x18;
          uVar2 = local_50;
          uVar4 = uStack_4c;
          uVar3 = param_4;
LAB_00009f4a:
          FUN_0000140c(uVar2,uVar4,pcVar5,uVar10,uVar9,uVar3);
        }
        else if (local_40 < 0x672) {
          FUN_000065c8(DAT_0000a004 + 0xc2);
        }
        else {
          uVar2 = uVar8 & 0xfff;
          uVar7 = uVar6 | uVar2;
          uVar3 = (uVar8 << 2) >> 0x1d;
          if (uVar3 == 1) {
            uVar3 = (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
            uVar7 = uVar6 & 0xffffcfff | uVar2 | 0x50000 | uVar3 |
                    (*(byte *)((int)param_1 + 0x49) & 1) << 0xd | uVar7 | 0x50000 | uVar3;
            if (uVar12 != 0) {
              uVar7 = uVar7 & 0xfffff8ff | param_1[0xac] * 0x100 + 0x200U;
            }
          }
          else if (uVar3 == 2) {
            uVar3 = (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
            uVar7 = uVar6 & 0xffffcfff | uVar2 | 0x50000 | uVar3 |
                    (*(byte *)((int)param_1 + 0x49) & 1) << 0xd | uVar7 | 0x50000 | uVar3;
            if (uVar12 != 0) {
              uVar7 = uVar7 + param_1[0xac] * 0x14;
            }
          }
          else if (uVar3 == 3) {
            uVar7 = uVar7 | 0x53000 | (uint)(*(byte *)((int)param_1 + 0x49) >> 1) << 0x14;
          }
          else if (uVar3 == 4) {
            uVar7 = uVar7 | 0x1c000;
          }
          else {
            FUN_000065c8(DAT_0000a004 + 0x44);
          }
          FUN_00006f70(3,uVar7,&local_54,*param_1,0);
          uVar6 = uVar7;
        }
      }
    } while (local_38 != 0);
  }
  return local_54;
}



/* FUN_0000a054 @ 0000a054 */

void FUN_0000a054(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined auStack_b0 [4];
  byte local_ac [56];
  byte local_74 [4];
  uint local_70;
  int local_6c;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  int local_50;
  int local_4c;
  undefined auStack_48 [4];
  undefined2 local_44 [2];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar8 = 0;
  uVar7 = 0;
  FUN_00000114(local_ac,DAT_0000a460,0x38);
  if (param_1 == 0) {
    FUN_000065c8(DAT_0000a464);
  }
  local_44[0] = 0xb01;
  iVar6 = *(int *)(param_1 + 0x28);
  local_64 = (undefined *)(iVar6 + 0x785);
  local_34 = iVar6 + 0x74b;
  *(undefined *)(iVar6 + 0x785) = 1;
  local_5c = (undefined *)(iVar6 + 0x7a2);
  local_68 = (undefined *)(iVar6 + 0x73b);
  *(undefined *)(iVar6 + 0x74b) = 1;
  *(undefined *)(iVar6 + 0x73b) = 1;
  local_60 = (undefined *)(iVar6 + 0x7a3);
  *(undefined *)(iVar6 + 0x7a2) = 0;
  local_58 = (undefined *)(iVar6 + 0x7a0);
  *(undefined *)(iVar6 + 0x7a3) = 0;
  local_54 = (undefined *)(iVar6 + 0x73c);
  *(undefined *)(iVar6 + 0x7a0) = 1;
  local_2c = iVar6 + 0x78c;
  *(undefined *)(iVar6 + 0x73c) = 0;
  local_30 = iVar6 + 0x78e;
  *(undefined2 *)(iVar6 + 0x78c) = 0xffff;
  local_38 = iVar6 + 0x792;
  *(undefined2 *)(iVar6 + 0x78e) = 3;
  local_3c = iVar6 + 0x793;
  *(undefined *)(iVar6 + 0x792) = 1;
  local_4c = iVar6 + 0x794;
  *(undefined *)(iVar6 + 0x793) = 1;
  *(undefined *)(iVar6 + 0x794) = 0;
  local_50 = iVar6 + 0x795;
  *(undefined *)(iVar6 + 0x795) = 1;
  uVar2 = func_0x000114e4();
  *(undefined4 *)(iVar6 + 0x79c) = uVar2;
  FUN_0000140c(4,0,s_CPU_Family_Model_Stepping__0x_x_0000a468,uVar2);
  *(undefined *)(iVar6 + 0x786) = 1;
  puVar9 = (undefined *)(iVar6 + 0x786);
  *(undefined *)(iVar6 + 0x796) = 1;
  *(undefined *)(iVar6 + 0x797) = 1;
  *(undefined *)(iVar6 + 0x798) = 1;
  software_interrupt(0x1c);
  if (&stack0x00000000 != (undefined *)0x6c) {
    FUN_0000140c(0,0x40000000,s_Fail_to_get_boot_mode_0000a48c);
    FUN_000065c8(DAT_0000a464 + 0x9c);
  }
  iVar3 = FUN_00002224(0x161,1,local_74,auStack_b0);
  if ((iVar3 == 0) || (local_74[0] != 1)) {
    if (local_6c != 6) goto LAB_0000a166;
  }
  else {
    local_6c = 6;
  }
  *(undefined *)(iVar6 + 0x796) = 0;
LAB_0000a166:
  FUN_00006cd0(2,local_44,DAT_0000a4a4,0);
  func_0x00011f70(0x88,3,0x80);
  uVar2 = func_0x00011690(0x20,0x26,auStack_48);
  local_74[0] = (byte)uVar2;
  FUN_0000140c(4,0,s_SMB_Addr__0x20____x_0000a4a8,uVar2);
  iVar3 = func_0x00011690(0x4e,0,auStack_48);
  FUN_0000140c(4,0,s_Board_Config_ID_Rev_value__0x_x___0000a4c0,iVar3);
  if ((iVar3 == 0) || (iVar3 == 0xff)) {
    FUN_0000140c(4,0,s_Fail_to_access_AMD_reference_boa_0000a4f8);
    iVar3 = 0;
  }
  if (&stack0x00000000 == (undefined *)0x6c) {
    if (local_6c == 6) {
      FUN_00006ea4(3,DAT_0000a534,0xfffffffc,param_1);
      pcVar5 = s_Mos_Mode__Soc_Vid__0x_x_0000a554;
      uVar8 = (local_70 << 0x13) >> 0x18;
    }
    else {
      FUN_00006ea4(3,DAT_0000a534,0xfffffffc,param_1);
      FUN_00006ea4(3,DAT_0000a534 + 4,0x2c,param_1);
      pcVar5 = s_Native_Mode__Soc_Vid__0x_x_0000a538;
      uVar8 = (uint)(local_40 << 0x1b) >> 0x18 | local_70 >> 0x1d;
    }
    FUN_0000140c(4,0,pcVar5,uVar8);
  }
  else {
    FUN_0000140c(4,0,s_Fail_to_get_boot_mode_0000a48c);
    FUN_000065c8(DAT_0000a464 + 0xdb);
  }
  while( true ) {
    iVar4 = uVar7 * 3;
    if (local_ac[iVar4] == 0xff) break;
    if (local_ac[iVar4] == uVar8) {
      FUN_0000140c(4,0,s_Index__0x_x__VID_1_0x_x__VID_2_0_0000a570,uVar7);
      func_0x00011f70(0x28,0xe3,local_ac[iVar4 + 1]);
      func_0x00011f70(0x28,0xe5,local_ac[iVar4 + 2]);
      func_0x00011f70(0x3e,0xe3,local_ac[iVar4 + 1]);
      func_0x00011f70(0x3e,0xe5,local_ac[iVar4 + 2]);
    }
    uVar7 = uVar7 + 1 & 0xffff;
  }
  iVar4 = FUN_00002224(0x7e,1,local_74,auStack_b0);
  if (iVar4 != 0) {
    uVar8 = 0;
    while( true ) {
      iVar4 = uVar8 * 3;
      if (local_ac[iVar4] == 0xff) break;
      if (local_ac[iVar4] == local_74[0]) {
        FUN_0000140c(4,0,s_VMEMP_VID_override_Index__0x_x__V_0000a598,uVar8);
        func_0x00011f70(0x30,0xe3,local_ac[iVar4 + 1]);
        func_0x00011f70(0x30,0xe5,local_ac[iVar4 + 2]);
      }
      uVar8 = uVar8 + 1 & 0xffff;
    }
  }
  iVar4 = FUN_00004930(0x701,1,iVar6 + 0x24,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0);
  }
  iVar4 = FUN_00004930(0x711,1,iVar6 + 0x74c,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 1);
  }
  iVar4 = FUN_00004930(0x712,1,iVar6 + 0x750,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 2);
  }
  iVar4 = FUN_00004930(0x709,1,iVar6 + 0x26,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x69);
  }
  iVar4 = FUN_00004930(0x715,1,iVar6 + 0x769,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x6a);
  }
  iVar4 = FUN_00004930(0x716,1,iVar6 + 0x76c,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x6b);
  }
  iVar4 = FUN_00004930(0x70a,1,iVar6 + 0x28,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x6c);
  }
  iVar4 = FUN_00004930(0x70b,1,iVar6 + 0x2c,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x6d);
  }
  iVar4 = FUN_00004930(0x710,1,iVar6 + 0x74a,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x6e);
  }
  iVar4 = FUN_00004930(0x70c,1,iVar6 + 0x738,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x70);
  }
  iVar4 = FUN_00004930(0x70f,1,iVar6 + 0x749,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x71);
  }
  iVar4 = FUN_00004930(0x70e,1,iVar6 + 0x748,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x72);
  }
  iVar4 = FUN_00004930(0x70d,1,local_68,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a5d0 + 0x79);
  }
  iVar4 = FUN_00004930(0x714,1,iVar6 + 0x75f,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x7a);
  }
  iVar4 = FUN_00004930(0x717,1,iVar6 + 0x770,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x7b);
  }
  iVar4 = FUN_00004930(0x718,1,iVar6 + 0x774,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x7c);
  }
  iVar4 = FUN_00004930(0x719,1,local_64,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x7d);
  }
  iVar4 = FUN_00004930(0x702,1,local_2c,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x7e);
  }
  iVar4 = FUN_000069cc(param_1);
  if (iVar4 != 0) {
    *(undefined2 *)(iVar6 + 0x78c) = 0xf0f;
    *(undefined *)(iVar6 + 0x796) = 0;
  }
  FUN_0000140c(4,0,s__exing__DctEnValue__0x_04x_0000a8cc,*(undefined2 *)(iVar6 + 0x78c));
  FUN_0000140c(4,0,s__exing__AutoCal__0x_04x_0000a8ec,*(undefined *)(iVar6 + 0x796));
  iVar4 = FUN_00004930(0x703,1,local_30,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x8d);
  }
  iVar4 = FUN_00004930(0x706,1,local_4c,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x91);
  }
  iVar4 = FUN_00004930(0x707,1,local_50,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x92);
  }
  iVar4 = FUN_00004930(0x708,1,puVar9,auStack_b0);
  if (iVar4 == 0) {
    FUN_000065c8(DAT_0000a8c8 + 0x99);
  }
  iVar4 = FUN_00004900(0x53,1,local_34,auStack_b0);
  if (iVar4 != 0) {
    FUN_0000140c(4,0,&DAT_0000a908,*(undefined *)(iVar6 + 0x74b));
  }
  iVar4 = FUN_00004900(0x57,1,local_38,auStack_b0);
  if (iVar4 != 0) {
    FUN_0000140c(4,0,s_Enable_EDC___d_0000a924,*(undefined *)(iVar6 + 0x792));
  }
  iVar4 = FUN_00004900(0x57,1,local_3c,auStack_b0);
  if (iVar4 != 0) {
    FUN_0000140c(4,0,s_Enable_EDC_Relpay___d_0000a938,*(undefined *)(iVar6 + 0x792));
  }
  iVar4 = FUN_00004900(0x68,1,local_4c,auStack_b0);
  if (iVar4 != 0) {
    FUN_0000140c(4,0,s_Enable_CABI___d_0000a954,*(undefined *)(iVar6 + 0x794));
  }
  iVar4 = FUN_00004900(0x69,1,local_50,auStack_b0);
  if (iVar4 != 0) {
    FUN_0000140c(4,0,s_Enable_DBI___d_0000a968,*(undefined *)(iVar6 + 0x795));
  }
  uVar8 = 0;
  do {
    uVar7 = 0;
    do {
      iVar4 = param_1 + uVar8 * 0x80 + uVar7 * 4;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined4 *)(iVar4 + 0x344) = 0;
      *(undefined4 *)(iVar4 + 900) = 0;
    } while (uVar7 < 0x10);
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 == 0);
  *(undefined4 *)(iVar6 + 0x18) = 2;
  uVar1 = 0x10;
  if ((iVar3 != 0) && (iVar3 << 0x18 < 0)) {
    uVar1 = 8;
  }
  *(undefined *)(iVar6 + 0x78a) = uVar1;
  *(undefined *)(iVar6 + 0x73d) = 0;
  *(undefined *)(iVar6 + 0x73e) = 0;
  *(undefined *)(iVar6 + 0x737) = 0;
  *(undefined *)(iVar6 + 0x760) = 0;
  *(undefined *)(*(int *)(param_1 + 0x28) + 0x739) = 0;
  *(undefined4 *)(iVar6 + 0x778) = 1;
  *(undefined *)(iVar6 + 0x77c) = 0;
  *(undefined4 *)(iVar6 + 0x780) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3cc) + 0x60) = 0;
  FUN_0000202c(0x1b,1,local_64,auStack_b0);
  FUN_0000140c(4,0,s__APCB__Bank_Group_Swap____d_0000a97c,*local_64);
  FUN_0000202c(0x1c,1,puVar9,auStack_b0);
  FUN_0000140c(4,0,s__APCB__Address_Hash_Bank____d_0000a99c,*puVar9);
  FUN_00002224(0x47,1,local_68,auStack_b0);
  FUN_0000140c(4,0,s__APCB__Power_Down_Enable____d_0000a9c0,*local_68);
  FUN_00002224(0x4f,1,local_54,auStack_b0);
  FUN_0000140c(4,0,s__APCB__PowerDown_Phy_Power_Save_D_0000a9e4,*local_54);
  FUN_00002224(0x4e,1,local_58,auStack_b0);
  FUN_0000140c(4,0,s__APCB__DRAM_Phy_Power_Saving_____0000aa14,*local_58);
  FUN_00002224(0x50,1,(undefined *)(iVar6 + 0x7a1),auStack_b0);
  FUN_0000140c(4,0,s__APCB__DRAM_All_Clocks_on____d_0000aa3c,*(undefined *)(iVar6 + 0x7a1));
  FUN_00002224(0x51,1,local_5c,auStack_b0);
  FUN_0000140c(4,0,s__APCB__DRAM_All_CKE_s_Enabled_on_0000aa60,*local_5c);
  FUN_00002224(0x52,1,local_60,auStack_b0);
  FUN_0000140c(4,0,s__APCB__DRAM_All_CS_s_Enabled_____0000aa8c,*local_60);
  return;
}



/* FUN_0000ae18 @ 0000ae18 */

void FUN_0000ae18(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0000ae28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x660))(param_1,0,param_2);
  return;
}



/* FUN_0000b090 @ 0000b090 */

void FUN_0000b090(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1[0xa9] = param_1 + 0x49;
  param_1[0xd] = param_1[0xe];
  FUN_0000b328(param_1);
  *(byte *)(param_1 + 0x12) = (byte)((uint)(param_1[0x10] << 0xc) >> 0x1b) - 0x18;
  *(undefined *)((int)param_1 + 0x49) = 0;
  *(undefined *)((int)param_1 + 0x4a) = 0;
  *(undefined *)((int)param_1 + 0x4b) = 0x10;
  *(undefined *)(param_1 + 0x13) = 1;
  *(undefined *)((int)param_1 + 0x4d) = 1;
  *(undefined *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 800;
  *(undefined *)((int)param_1 + 0x7a) = 4;
  *(undefined *)((int)param_1 + 0x2a9) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0x1c] = 0xfffffffe;
  param_1[0xae] = 0xf1;
  *(undefined *)((int)param_1 + 0x4f) = 1;
  *(undefined *)(param_1 + 199) = 5;
  *(undefined *)((int)param_1 + 0x31d) = 10;
  *(undefined *)((int)param_1 + 0x31e) = 0xc;
  *(undefined *)((int)param_1 + 799) = 0xc;
  *(undefined *)((int)param_1 + 0x4e) = 2;
  *(undefined *)(param_1 + 0x14) = 0;
  param_1[0x15] = 1;
  *(undefined2 *)(param_1 + 0x19) = 0x1ff;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0x1ff;
  *(undefined2 *)((int)param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0xf;
  FUN_0000140c(4,0,s_DataScrambleEn___d_0000b24c,1);
  param_1[0xc9] = 4;
  thunk_FUN_00006c7e(param_1 + 0x49,0,0x180,*param_1);
  FUN_0000b298(param_1);
  uVar3 = DAT_0000b280;
  *(undefined *)(param_1[0xb0] + 2) = 0;
  *(undefined *)(param_1[0xb0] + 3) = 0;
  *(undefined *)(param_1[0xb0] + 4) = 0x60;
  *(undefined *)(param_1[0xb0] + 10) = 0;
  *(undefined *)(param_1[0xb0] + 0xb) = 0x10;
  *(undefined *)(param_1[0xb0] + 0xc) = 0x10;
  *(undefined4 *)(param_1[0xb0] + 0x10) = *DAT_0000b264;
  *(undefined4 *)(param_1[0xb0] + 0x14) = 0;
  *(undefined4 *)(param_1[0xb0] + 0x18) = 0;
  *(undefined4 *)(param_1[0xb0] + 0x34) = 0;
  *(undefined *)(param_1[0xb0] + 0x27) = *(undefined *)(param_1[1] + 0x78a);
  uVar2 = DAT_0000b27c;
  *(undefined4 *)(param_1[0xb0] + 0x28) = 0;
  *(undefined4 *)(param_1[0xb0] + 0x30) = 0;
  param_1[0x198] = DAT_0000b268;
  param_1[0x18c] = DAT_0000b26c;
  param_1[0x18a] = DAT_0000b270;
  param_1[0x18b] = DAT_0000b274;
  uVar1 = DAT_0000b278;
  param_1[0x169] = DAT_0000b278;
  param_1[0x195] = uVar3;
  param_1[0x16a] = uVar1;
  param_1[0x15f] = uVar3;
  param_1[0x170] = uVar2;
  uVar2 = DAT_0000b284;
  param_1[0x16e] = uVar1;
  param_1[0x185] = uVar2;
  param_1[0x157] = uVar3;
  param_1[0x158] = uVar3;
  uVar2 = DAT_0000b288;
  param_1[0x17a] = uVar3;
  param_1[0x187] = uVar2;
  uVar2 = DAT_0000b28c;
  param_1[0x177] = DAT_0000b28c;
  param_1[0x178] = uVar2;
  param_1[0x14f] = uVar1;
  param_1[0x181] = DAT_0000b290;
  uVar1 = DAT_0000b294;
  *(undefined *)((int)param_1 + 0x343) = 1;
  param_1[0xef] = uVar1;
  for (uVar4 = 0; uVar4 < *(byte *)((int)param_1 + 0x4b); uVar4 = uVar4 + 1 & 0xff) {
    *(undefined4 *)(param_1[0xe] + uVar4 * 0x50 + 0x3c) = uVar3;
  }
  return;
}



/* FUN_0000b298 @ 0000b298 */

void FUN_0000b298(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined **)(param_1 + 0x2a4) = (undefined *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  uVar5 = 0;
  puVar3 = (undefined *)(param_1 + 0x124);
  do {
    uVar5 = uVar5 + 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (uVar5 < 0x180);
  iVar4 = 0;
  do {
    iVar6 = param_1 + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined *)(iVar6 + 0x332) = 0;
    uVar1 = DAT_0000b310;
  } while (iVar4 < 0x43);
  iVar4 = 0;
  do {
    iVar6 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar6 + 0x378) = uVar1;
    uVar2 = DAT_0000b314;
  } while (iVar4 < 0x66);
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(param_1 + 0x4b); iVar4 = iVar4 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar4 * 0x50 + 0x44) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x52c) = DAT_0000b318;
  *(undefined4 *)(param_1 + 0x530) = DAT_0000b31c;
  *(undefined4 *)(param_1 + 0x620) = DAT_0000b320;
  *(undefined4 *)(param_1 + 0x624) = DAT_0000b324;
  return;
}



/* FUN_0000b328 @ 0000b328 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b328(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined local_1f8;
  undefined4 *local_1f4;
  undefined4 local_1f0 [2];
  undefined4 local_1e8;
  
  local_1f0[0] = 0x1240000;
  iVar1 = FUN_00006474(local_1f0,*param_1);
  if (iVar1 == 0) {
    param_1[0x11] = local_1e8;
  }
  else {
    local_200 = 0x26c0;
    uStack_1fc = 0x1240000;
    local_1f8 = 4;
    iVar1 = FUN_00006338(&local_200,*param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
      param_1[0x11] = local_1f4;
      do {
        local_1f4[uVar2] = 0;
        uVar2 = uVar2 + 1 & 0xffff;
      } while (uVar2 < 0x652);
      local_1f4[0x684] = 0x8000000;
      local_1f4[0x27] = DAT_0000b758;
      local_1f4[0x37] = 0x684000;
      local_1f4[0x688] = DAT_0000b75c;
      local_1f4[0x2b] = DAT_0000b760;
      local_1f4[0x3b] = 0x688000;
      local_1f4[0x67b] = DAT_0000b75c + 0x10;
      *local_1f4 = DAT_0000b764;
      local_1f4[0x67d] = DAT_0000b75c + 0x18;
      local_1f4[2] = DAT_0000b768;
      local_1f4[0x672] = DAT_0000b75c + 0x20;
      local_1f4[0x148] = DAT_0000b76c;
      local_1f4[0x149] = DAT_0000b770;
      local_1f4[0x14b] = DAT_0000b774;
      local_1f4[0x14f] = DAT_0000b778;
      local_1f4[0x151] = DAT_0000b77c;
      local_1f4[0x14d] = DAT_0000b780;
      local_1f4[0x146] = DAT_0000b784;
      local_1f4[0x67f] = DAT_0000b788;
      local_1f4[0x1cc] = DAT_0000b78c;
      local_1f4[0x1ce] = DAT_0000b790;
      local_1f4[0x24] = DAT_0000b794;
      local_1f4[0x22] = DAT_0000b798;
      local_1f4[0x20] = DAT_0000b79c;
      local_1f4[0x1e] = DAT_0000b7a0;
      local_1f4[0x1c] = DAT_0000b7a4;
      local_1f4[0x699] = DAT_0000b7a8;
      local_1f4[0x77] = DAT_0000b7ac;
      local_1f4[0x75] = DAT_0000b7b0;
      local_1f4[0x73] = DAT_0000b7b4;
      local_1f4[0x71] = DAT_0000b7b8;
      local_1f4[0x6f] = DAT_0000b7bc;
      local_1f4[0x6d] = DAT_0000b7c0;
      local_1f4[0x6b] = DAT_0000b7c4;
      local_1f4[0x5d] = DAT_0000b7c8;
      local_1f4[0x697] = DAT_0000b7cc;
      local_1f4[0x69] = DAT_0000b7d0;
      local_1f4[0x67] = DAT_0000b7d4;
      local_1f4[0x65] = DAT_0000b7d8;
      local_1f4[99] = DAT_0000b7dc;
      local_1f4[0x61] = DAT_0000b7e0;
      local_1f4[0x5f] = DAT_0000b7e4;
      local_1f4[0x7c] = DAT_0000b7e8;
      local_1f4[0x79] = DAT_0000b7ec;
      local_1f4[0x7a] = DAT_0000b7f0;
      local_1f4[0x6ff] = DAT_0000b7f4;
      local_1f4[0x12a] = DAT_0000b7f8;
      local_1f4[0x126] = DAT_0000b7fc;
      local_1f4[0x1c7] = DAT_0000b800;
      local_1f4[0x1c3] = DAT_0000b804;
      local_1f4[0x1bf] = DAT_0000b808;
      local_1f4[0x62b] = DAT_0000b80c;
      local_1f4[0x701] = DAT_0000b810;
      local_1f4[300] = DAT_0000b814;
      local_1f4[0x128] = DAT_0000b818;
      local_1f4[0x1c9] = DAT_0000b81c;
      local_1f4[0x1c5] = DAT_0000b820;
      local_1f4[0x1c1] = DAT_0000b824;
      local_1f4[0x6b3] = DAT_0000b828;
      local_1f4[0x93] = DAT_0000b82c;
      local_1f4[0x169] = DAT_0000b830;
      local_1f4[0xe0] = DAT_0000b834;
      local_1f4[0xf4] = DAT_0000b838;
      local_1f4[0x265] = DAT_0000b83c;
      local_1f4[0x267] = DAT_0000b840;
      local_1f4[0x130] = DAT_0000b844;
      local_1f4[0x1a3] = DAT_0000b848;
      local_1f4[0x35] = DAT_0000b84c;
      local_1f4[0xf7] = DAT_0000b850;
      local_1f4[0x15c] = DAT_0000b854;
      local_1f4[0x159] = 0x6b3000;
      local_1f4[0x636] = DAT_0000b858;
      local_1f4[0x6a5] = DAT_0000b85c;
      local_1f4[0x98] = DAT_0000b860;
      local_1f4[0x97] = DAT_0000b864;
      local_1f4[0x96] = DAT_0000b868;
      local_1f4[0x95] = DAT_0000b86c;
      local_1f4[0x631] = DAT_0000b870;
      local_1f4[0x6a6] = DAT_0000b874;
      local_1f4[0xa0] = DAT_0000b878;
      local_1f4[0x9f] = DAT_0000b87c;
      local_1f4[0x9e] = DAT_0000b880;
      local_1f4[0x9d] = DAT_0000b884;
      local_1f4[0x9c] = DAT_0000b888;
      local_1f4[0x9b] = DAT_0000b88c;
      local_1f4[0x9a] = DAT_0000b890;
      local_1f4[0x99] = DAT_0000b894;
      local_1f4[0x632] = DAT_0000b898;
      local_1f4[0x6a7] = DAT_0000b89c;
      local_1f4[0xa8] = DAT_0000b8a0;
      local_1f4[0xa7] = DAT_0000b8a4;
      local_1f4[0xa6] = DAT_0000b8a8;
      local_1f4[0xa5] = DAT_0000b8ac;
      local_1f4[0xa4] = DAT_0000b8b0;
      local_1f4[0xa3] = DAT_0000b8b4;
      local_1f4[0xa2] = DAT_0000b8b8;
      local_1f4[0xa1] = DAT_0000b8bc;
      local_1f4[0x633] = DAT_0000b8c0;
      local_1f4[0x6a8] = DAT_0000b8c4;
      local_1f4[0xb0] = DAT_0000b8c8;
      local_1f4[0xaf] = DAT_0000b8cc;
      local_1f4[0xae] = DAT_0000b8d0;
      local_1f4[0xad] = DAT_0000b8d4;
      local_1f4[0xac] = DAT_0000b8d8;
      local_1f4[0xab] = DAT_0000b8dc;
      local_1f4[0xaa] = DAT_0000b8e0;
      local_1f4[0xa9] = DAT_0000b8e4;
      local_1f4[0x634] = DAT_0000b8e8;
      local_1f4[0x6a9] = DAT_0000b8ec;
      local_1f4[0xb8] = DAT_0000b8f0;
      local_1f4[0xb7] = DAT_0000b8f4;
      local_1f4[0xb6] = DAT_0000b8f8;
      local_1f4[0xb5] = DAT_0000b8fc;
      local_1f4[0xb4] = DAT_0000b900;
      local_1f4[0xb3] = DAT_0000b904;
      local_1f4[0xb2] = DAT_0000b908;
      local_1f4[0xb1] = DAT_0000b90c;
      local_1f4[0x635] = DAT_0000b910;
      local_1f4[0x674] = DAT_0000b914;
      local_1f4[0x1d0] = DAT_0000b918;
      local_1f4[0x7e] = DAT_0000b91c;
      local_1f4[0x270] = 0x674000;
      local_1f4[0x26b] = DAT_0000b920;
      local_1f4[0x675] = DAT_0000b924;
      local_1f4[0x1d1] = DAT_0000b928;
      local_1f4[0x7f] = DAT_0000b92c;
      local_1f4[0x271] = 0x675000;
      local_1f4[0x26c] = DAT_0000b930;
      local_1f4[0x676] = DAT_0000b934;
      local_1f4[0x1d2] = DAT_0000b938;
      local_1f4[0x80] = DAT_0000b93c;
      local_1f4[0x272] = 0x676000;
      local_1f4[0x26d] = DAT_0000b940;
      local_1f4[0x677] = DAT_0000b944;
      local_1f4[0x1d3] = DAT_0000b948;
      local_1f4[0x81] = DAT_0000b94c;
      local_1f4[0x273] = 0x677000;
      local_1f4[0x26e] = DAT_0000b950;
      local_1f4[0x678] = DAT_0000b954;
      local_1f4[0x1d4] = DAT_0000b958;
      local_1f4[0x82] = DAT_0000b95c;
      local_1f4[0x274] = 0x678000;
      local_1f4[0x26f] = DAT_0000b960;
      local_1f4[0x679] = DAT_0000b964;
      local_1f4[0x144] = DAT_0000b968;
      local_1f4[0x269] = 0x679000;
      local_1f4[0x694] = DAT_0000b96c;
      local_1f4[0x3f] = DAT_0000b970;
      local_1f4[0x70e] = DAT_0000b974;
      local_1f4[0xf9] = DAT_0000b978;
      local_1f4[0xdf] = DAT_0000b97c;
      local_1f4[0x30] = DAT_0000b980;
      local_1f4[0x31] = DAT_0000b984;
      local_1f4[0xcb] = DAT_0000b988;
      local_1f4[0x703] = DAT_0000b98c;
      local_1f4[0x1de] = DAT_0000b990;
      local_1f4[0xb9] = DAT_0000b994;
      local_1f4[0x51] = DAT_0000b998;
      local_1f4[0xfd] = DAT_0000b99c;
      local_1f4[0x1dc] = DAT_0000bda0;
      local_1f4[0x1db] = DAT_0000bda4;
      local_1f4[0xfe] = DAT_0000bda8;
      local_1f4[0x1e0] = DAT_0000bdac;
      local_1f4[0x1dd] = 0x703000;
      local_1f4[0x1df] = DAT_0000bdb0;
      local_1f4[0x6f5] = DAT_0000bdb4;
      local_1f4[0xff] = DAT_0000bdb8;
      local_1f4[0x1e8] = DAT_0000bdbc;
      local_1f4[0x115] = DAT_0000bdc0;
      local_1f4[0x1e7] = DAT_0000bdc4;
      local_1f4[0xe2] = 0x6f5000;
      local_1f4[0x642] = DAT_0000bdc8;
      local_1f4[0x681] = DAT_0000bdcc;
      local_1f4[0x215] = DAT_0000bdd0;
      local_1f4[0x212] = DAT_0000bdd4;
      local_1f4[0x213] = DAT_0000bdd8;
      local_1f4[0x214] = DAT_0000bddc;
      local_1f4[0x161] = DAT_0000bde0;
      local_1f4[0x1a6] = DAT_0000bde4;
      local_1f4[0xf] = DAT_0000bde8;
      local_1f4[0xe] = DAT_0000bdec;
      local_1f4[0xef] = DAT_0000bdf0;
      local_1f4[0xf2] = DAT_0000bdf4;
      local_1f4[0xf1] = DAT_0000bdf8;
      local_1f4[0xe3] = DAT_0000bdfc;
      local_1f4[0x108] = 0x681000;
      local_1f4[0x625] = DAT_0000be00;
      local_1f4[0x682] = DAT_0000be04;
      local_1f4[0x141] = DAT_0000be08;
      local_1f4[0x142] = DAT_0000be0c;
      local_1f4[0xed] = DAT_0000be10;
      local_1f4[0xee] = DAT_0000be14;
      local_1f4[0x114] = DAT_0000be18;
      local_1f4[0x255] = DAT_0000be1c;
      local_1f4[0xf3] = DAT_0000be20;
      local_1f4[0x13c] = DAT_0000be24;
      local_1f4[0x132] = DAT_0000be28;
      local_1f4[0x626] = DAT_0000be2c;
      local_1f4[0x683] = DAT_0000be30;
      local_1f4[0x13f] = DAT_0000be34;
      local_1f4[0x140] = DAT_0000be38;
      local_1f4[0x201] = DAT_0000be3c;
      local_1f4[0x200] = DAT_0000be40;
      local_1f4[0x627] = DAT_0000be44;
      local_1f4[0x70f] = DAT_0000be48;
      local_1f4[0x136] = DAT_0000be4c;
      local_1f4[0x58] = DAT_0000be50;
      local_1f4[0x5b] = DAT_0000be54;
      local_1f4[0x19d] = DAT_0000be58;
      local_1f4[0x59] = DAT_0000be5c;
      local_1f4[0x5a] = DAT_0000be60;
      local_1f4[0x5c] = 0x70f000;
      local_1f4[0x643] = DAT_0000be64;
      local_1f4[0x68c] = DAT_0000be68;
      local_1f4[0x88] = DAT_0000be6c;
      local_1f4[0xfa] = DAT_0000be70;
      local_1f4[0xde] = DAT_0000be74;
      local_1f4[0x54] = DAT_0000be78;
      local_1f4[0x4c] = DAT_0000be7c;
      local_1f4[0x4b] = DAT_0000be80;
      local_1f4[0x84] = DAT_0000be84;
      local_1f4[0x85] = DAT_0000be88;
      local_1f4[0x86] = DAT_0000be8c;
      local_1f4[0x87] = DAT_0000be90;
      local_1f4[0x62c] = DAT_0000be94;
      local_1f4[0x68d] = DAT_0000be98;
      local_1f4[0x24b] = DAT_0000be9c;
      local_1f4[0x24c] = DAT_0000bea0;
      local_1f4[0x24d] = DAT_0000bea4;
      local_1f4[0x24e] = DAT_0000bea8;
      local_1f4[0x24f] = DAT_0000beac;
      local_1f4[0x25b] = DAT_0000beb0;
      local_1f4[0x25a] = DAT_0000beb4;
      local_1f4[0x259] = 0x68d000;
      local_1f4[0x62d] = DAT_0000beb8;
      local_1f4[0x68e] = DAT_0000bebc;
      local_1f4[0xdc] = DAT_0000bec0;
      local_1f4[0x164] = DAT_0000bec4;
      local_1f4[0x165] = DAT_0000bec8;
      local_1f4[0xe6] = DAT_0000becc;
      local_1f4[0xe7] = DAT_0000bed0;
      local_1f4[0x153] = DAT_0000bed4;
      local_1f4[0xe8] = DAT_0000bed8;
      local_1f4[0x1ab] = DAT_0000bedc;
      local_1f4[199] = DAT_0000bee0;
      local_1f4[0x25c] = DAT_0000bee4;
      local_1f4[0xe5] = DAT_0000bee8;
      local_1f4[0x250] = DAT_0000beec;
      local_1f4[0xe9] = DAT_0000bef0;
      local_1f4[0xea] = DAT_0000bef4;
      local_1f4[0xf6] = DAT_0000bef8;
      local_1f4[0xba] = DAT_0000befc;
      local_1f4[6] = 0x68e000;
      local_1f4[0x62e] = DAT_0000bf00;
      local_1f4[0x704] = DAT_0000bf04;
      local_1f4[0x1b8] = DAT_0000bf08;
      local_1f4[9] = DAT_0000bf0c;
      local_1f4[0x1a2] = DAT_0000bf10;
      local_1f4[0x1a1] = DAT_0000bf14;
      local_1f4[0x10] = DAT_0000bf18;
      local_1f4[0x162] = DAT_0000bf1c;
      local_1f4[0x16d] = _DAT_0000bf20;
      local_1f4[7] = _DAT_0000bf24;
      local_1f4[0x1eb] = _DAT_0000bf28;
      local_1f4[0x254] = _DAT_0000bf2c;
      local_1f4[0x133] = _DAT_0000bf30;
      local_1f4[0x16e] = _DAT_0000bf34;
      local_1f4[0xe4] = 0x704000;
      local_1f4[0x641] = _DAT_0000bf38;
      local_1f4[0x706] = _DAT_0000bf3c;
      local_1f4[0xf0] = _DAT_0000bf40;
      local_1f4[0x156] = _DAT_0000bf44;
      local_1f4[0x158] = _DAT_0000bf48;
      local_1f4[0x157] = _DAT_0000bf4c;
      local_1f4[0x10f] = _DAT_0000bf50;
      local_1f4[0x155] = _DAT_0000bf54;
      local_1f4[0x1ed] = _DAT_0000bf58;
      local_1f4[0x154] = _DAT_0000bf5c;
      local_1f4[0x1ec] = _DAT_0000bf60;
      local_1f4[0x1cb] = _DAT_0000bf64;
      local_1f4[0x640] = _DAT_0000bf68;
      local_1f4[0x705] = _DAT_0000bf6c;
      local_1f4[0x1ee] = _DAT_0000bf70;
      local_1f4[0x1ef] = _DAT_0000bf74;
      local_1f4[0x1f0] = 0x705000;
      local_1f4[0x6e4] = _DAT_0000bf78;
      local_1f4[0x34] = _DAT_0000bf7c;
      local_1f4[0x33] = _DAT_0000bf80;
      local_1f4[0x10d] = _DAT_0000bf84;
      local_1f4[0x137] = _DAT_0000bf88;
      local_1f4[0x139] = _DAT_0000bf8c;
      local_1f4[0x138] = _DAT_0000bf90;
      local_1f4[0x63c] = _DAT_0000bf94;
      iVar1 = _DAT_0000bf98;
      local_1f4[0x710] = _DAT_0000bf98;
      local_1f4[0x264] = 0x710000;
      local_1f4[0x6aa] = iVar1 + 4;
      local_1f4[0x109] = _DAT_0000bf9c;
      local_1f4[0x10a] = _DAT_0000bfa0;
      local_1f4[0x10c] = _DAT_0000bfa4;
      local_1f4[5] = _DAT_0000bfa8;
      local_1f4[0xbf] = _DAT_0000bfac;
      local_1f4[0xbe] = _DAT_0000bfb0;
      local_1f4[0x10b] = _DAT_0000bfb4;
      local_1f4[0xc5] = 0x6aa000;
      local_1f4[0x64c] = _DAT_0000bfb8;
      local_1f4[0x6ab] = _DAT_0000bfbc;
      local_1f4[0xc6] = _DAT_0000bfc0;
      local_1f4[0x6f7] = _DAT_0000bfc4;
      local_1f4[0x4e] = _DAT_0000bfc8;
      local_1f4[0x4d] = _DAT_0000bfcc;
      local_1f4[0x4f] = _DAT_0000bfd0;
      local_1f4[0x13a] = _DAT_0000bfd4;
      local_1f4[0x13b] = _DAT_0000bfd8;
      local_1f4[0x1d6] = _DAT_0000bfdc;
      local_1f4[0x1d7] = _DAT_0000bfe0;
      local_1f4[0x1d5] = _DAT_0000bfe4;
      local_1f4[0x1d8] = _DAT_0000bfe8;
      local_1f4[0x1a7] = _DAT_0000bfec;
      local_1f4[0x32] = _DAT_0000bff0;
      local_1f4[0x1b5] = _DAT_0000bff4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_000065c8(DAT_0000b754);
  }
  return;
}




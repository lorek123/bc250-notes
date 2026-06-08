/* Decompiled from: d00_e11_ABL3~0x33_22.4.6.0 */

/* Reset @ 00000000 */

/* WARNING: Control flow encountered bad instruction data */

void Reset(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined unaff_r7;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  puVar1 = param_4;
  if (!in_CY) {
    puVar1 = param_4 + unaff_r11 * -0x8000000;
    *param_4 = unaff_r7;
  }
  if (!in_CY || in_ZR) {
    param_1 = coprocessor_movefromRt(0xe,4,6,in_cr9,in_cr1);
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0xff17e148(param_1,param_2,param_3,puVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* UndefinedInstruction @ 00000004 */

/* WARNING: Control flow encountered bad instruction data */

void UndefinedInstruction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined unaff_r7;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  puVar1 = param_4;
  if (!in_CY) {
    puVar1 = param_4 + unaff_r11 * -0x8000000;
    *param_4 = unaff_r7;
  }
  if (!in_CY || in_ZR) {
    param_1 = coprocessor_movefromRt(0xe,4,6,in_cr9,in_cr1);
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0xff17e148(param_1,param_2,param_3,puVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* SupervisorCall @ 00000008 */

/* WARNING: Control flow encountered bad instruction data */

void SupervisorCall(undefined4 param_1)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  if (!in_CY || in_ZR) {
    param_1 = coprocessor_movefromRt(0xe,4,6,in_cr9,in_cr1);
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0xff17e148(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* PrefetchAbort @ 0000000c */

/* WARNING: Control flow encountered bad instruction data */

void PrefetchAbort(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    func_0xff17e148();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* NotUsed @ 00000014 */

/* WARNING: Control flow encountered bad instruction data */

void NotUsed(uint param_1)

{
  byte unaff_r10;
  byte *unaff_r11;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    unaff_r10 = (byte)param_1 & (byte)(param_1 >> 1);
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



/* FUN_0000013c @ 0000013c */

undefined8 FUN_0000013c(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* FUN_000001a0 @ 000001a0 */

undefined4 * FUN_000001a0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((param_2 & 0x10) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar3 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar3 != 0) {
    puVar1 = puVar2;
    if ((int)uVar3 < 0) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = 0;
    }
    puVar2 = puVar1;
    if ((uVar3 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = 0;
    }
    return puVar2;
  }
  return puVar2;
}



/* FUN_0000036c @ 0000036c */

/* WARNING: Removing unreachable block (ram,0x0000034c) */
/* WARNING: Removing unreachable block (ram,0x00000358) */
/* WARNING: Removing unreachable block (ram,0x00000348) */

longlong FUN_0000036c(uint param_1,uint param_2)

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
        if (param_1 >> 8 < uVar1) goto LAB_000002e0;
        uVar1 = param_2 << 0xc;
        iVar3 = -0x100000;
        if (param_1 >> 8 < uVar1) goto LAB_000002e0;
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
LAB_000002e0:
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



/* FUN_000007dc @ 000007dc */

uint FUN_000007dc(void)

{
  undefined auStack_20 [12];
  uint local_14;
  uint local_10;
  
  FUN_0000948c(auStack_20);
  return local_10 & 0xff | (local_14 & 0xff) << 8;
}



/* FUN_000007f8 @ 000007f8 */

undefined4 FUN_000007f8(short *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)*DAT_00000848 == '\x01') {
    uVar2 = 0;
    do {
      iVar1 = *DAT_0000084c + uVar2 * 0x10;
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



/* FUN_00000850 @ 00000850 */

void FUN_00000850(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(char *)*DAT_00000884 == '\x01') {
    FUN_00001ce4(4,0,0x888);
    puVar3 = (undefined4 *)*DAT_000008a4;
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



/* FUN_000008a8 @ 000008a8 */

undefined4 FUN_000008a8(short *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)*DAT_000008f4 == '\x01') {
    uVar1 = 0;
    do {
      iVar2 = *DAT_000008f8 + uVar1 * 0x10;
      if (((*(short *)(iVar2 + 0x1a) == param_1[1]) &&
          (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 2))) &&
         (*(short *)(iVar2 + 0x18) == *param_1)) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*DAT_000008f8 + uVar1 * 0x10 + 0x20);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(iVar2 + 0x24);
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x20);
  }
  return 0;
}



/* FUN_000008fc @ 000008fc */

/* WARNING: Removing unreachable block (ram,0x00000934) */
/* WARNING: Removing unreachable block (ram,0x00000938) */

void FUN_000008fc(undefined2 *param_1,int param_2)

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
  
  piVar1 = DAT_000009dc;
  if (*(char *)*DAT_000009dc == '\x01') {
    FUN_00001ce4(4,0,0x9e0);
    iVar3 = FUN_000007f8(param_1);
    puVar2 = DAT_000009f8;
    if (iVar3 == 0) {
      uVar5 = *(uint *)*DAT_000009f8;
      if (0x1f < uVar5) {
        do {
        } while( true );
      }
      FUN_0000948c(auStack_34);
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
          FUN_00000a68(1);
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
          FUN_000017e8(0,auStack_78);
        }
      }
      else if ((*(char *)(*piVar1 + 0x10) == '\x01') &&
              (*(short *)((int)piVar4 + uVar5 * 0x10 + 0x1a) == 9)) {
        FUN_00000a68(1);
        do {
        } while( true );
      }
    }
  }
  return;
}



/* FUN_000009fc @ 000009fc */

void FUN_000009fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = 0xa045;
  if (*(char *)*DAT_00000a38 == '\x01') {
    uStack_14 = param_3;
    local_10 = param_4;
    FUN_00001ce4(4,0,0xa3c);
    iVar1 = FUN_00008edc(&local_18,param_1);
    if (iVar1 == 9) {
      FUN_00000a68(1);
      return;
    }
    *DAT_00000a64 = local_10;
  }
  return;
}



/* FUN_00000a68 @ 00000a68 */

void FUN_00000a68(int param_1)

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
  
  FUN_0000948c(auStack_44);
  piVar1 = DAT_00000bb0;
  if (*(char *)*DAT_00000bb0 == '\x01') {
    if ((local_40 < 2) || (local_30 != 0)) {
      FUN_00001ce4(4,0,0xbc8);
      puVar2 = (uint *)*DAT_00000be0;
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
        FUN_00001ce4(4,0,0xbe4);
        if (0x1f < *puVar2) {
          *puVar2 = 0x1f;
        }
        func_0x0000e760(uVar4,uVar3,DAT_00000c04,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c2c(uVar4,uVar3);
        func_0x0000e760(uVar4,uVar3,*puVar2,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c2c(uVar4,uVar3);
        for (uVar6 = 0; uVar6 < *puVar2; uVar6 = uVar6 + 1) {
          uVar5 = 0;
          do {
            func_0x0000e760(uVar4,uVar3,puVar7[uVar5 + uVar6 * 4],*(uint *)(*piVar1 + 0x18) & 0xff,
                            *(undefined4 *)(*piVar1 + 0x1c));
            FUN_00000c2c(uVar4,uVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < 4);
        }
        func_0x0000e760(uVar4,uVar3,DAT_00000c08,*(uint *)(*piVar1 + 0x18) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000c2c(uVar4,uVar3);
        FUN_00001ce4(4,0,0xc0c);
      } while (param_1 != 0);
      if (*puVar2 == 0x20) {
        FUN_00000850();
      }
    }
  }
  else {
    FUN_00001ce4(4,0,0xbb4);
  }
  return;
}



/* FUN_00000c2c @ 00000c2c */

void FUN_00000c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00000c80;
  if (*(char *)*DAT_00000c80 == '\x01') {
    FUN_00001ce4(4,0,0xc84,param_4,param_4);
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 3) == '\x01') {
      FUN_0000117c(param_1,param_2,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c));
    }
    else {
      software_interrupt(0x1b);
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x24) == '\x01') {
      func_0x0000e760(param_1,param_2,0,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c)
                     );
    }
  }
  return;
}



/* FUN_0000117c @ 0000117c */

void FUN_0000117c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_1c;
  
  local_1c = 0;
  FUN_00001ce4(4,0,s_Error_Reporting_waiting_for_ACK_000011b4,param_4,param_3);
  iVar1 = DAT_000011d8;
  while (local_1c != iVar1) {
    func_0x0000d7fc(param_1,param_2,&local_1c,param_3,param_4);
  }
  return;
}



/* FUN_000011dc @ 000011dc */

void FUN_000011dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_30 [4];
  uint local_2c;
  int local_1c;
  
  FUN_0000948c(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    FUN_000013cc(param_1,param_2,param_3);
  }
  else {
    FUN_00001554(param_1,param_2,param_3);
  }
  return;
}



/* FUN_00001210 @ 00001210 */

void FUN_00001210(undefined4 param_1,undefined4 param_2)

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
  
  iVar2 = DAT_00001320;
  local_38[0] = 0;
  FUN_000093f0(3,param_2,DAT_00001320,0,local_38,0);
  FUN_00001ce4(4,0,s_REG28__x_00001324,local_38[0]);
  FUN_00001ce4(4,0,s_REG28__x_00001324);
  FUN_0000943c(3,extraout_r1,iVar2,0,local_38,0);
  local_38[0] = 0;
  iVar2 = DAT_00001320 + 0x18;
  FUN_000093f0(1,extraout_r1_00,iVar2,0,local_38,0);
  FUN_00001ce4(4,0,s_REG40__x_00001330,local_38[0]);
  local_38[0] = local_38[0] & 0x7f;
  FUN_00001ce4(4,0,s_REG40__x_00001330);
  FUN_0000943c(1,extraout_r1_01,iVar2,0,local_38,0);
  FUN_0000948c(auStack_34);
  FUN_00009c08(3,DAT_00001340,DAT_0000133c,param_1);
  iVar2 = FUN_00004e98(2,1,local_38,auStack_18,0);
  if (iVar2 != 0) {
    bVar1 = local_38[0];
    if (local_38[0] != 1) {
      bVar1 = 0;
    }
    if (bVar1 != 0) {
      *DAT_00001344 = 1;
      iVar2 = FUN_00004ec8(s__exing_DF__FuseDisable_CS6_Compo_00001bcc + 0x36,1,local_38,auStack_18,
                           0);
      if (iVar2 == 0) {
        *DAT_00001348 = 0;
      }
      else {
        *DAT_00001348 = local_38[0];
      }
      if (*DAT_0000133c == DAT_0000134c) {
        return;
      }
      if ((1 < local_30) && (local_20 == 0)) {
        return;
      }
      func_0x0000db9c(param_1);
      return;
    }
  }
  *DAT_00001344 = 0;
  return;
}



/* FUN_00001350 @ 00001350 */

undefined4 FUN_00001350(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  uint local_24;
  int local_14;
  
  FUN_0000948c(auStack_28);
  if (local_24 < 2) {
    uVar1 = 0;
  }
  else if (local_14 == 0) {
    FUN_00001ce4(0,0x40000000,DAT_000013c8);
    uVar1 = 9;
  }
  else {
    FUN_00001ce4(4,0,s_Master__ABL__Broadcast_Data_to_S_00001394);
    uVar1 = FUN_00001534(param_1,0xb,param_2);
  }
  return uVar1;
}



/* FUN_000013cc @ 000013cc */

undefined4 FUN_000013cc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined auStack_178 [312];
  undefined auStack_40 [32];
  
  FUN_0000948c(auStack_40);
  uVar4 = 0;
  if (param_2 != 8) {
    iVar2 = FUN_00001534(param_1,param_2,auStack_178);
    iVar1 = DAT_0000148c;
    if (iVar2 == 0) {
      for (uVar3 = 0; *(int *)(DAT_0000148c + uVar3 * 8) != 0; uVar3 = uVar3 + 1 & 0xff) {
        if (*(int *)(DAT_0000148c + uVar3 * 8 + 4) == param_2) {
          iVar2 = (**(code **)(DAT_0000148c + uVar3 * 8))(param_3,param_1);
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
      FUN_00001ce4(0,0x40000000,s__ERROR___Master__ABL__Error__no_s_00001490);
      FUN_00009000(DAT_000014c8);
    }
    else {
      FUN_00001ce4(0,0x40000000,s__ERROR___Master__ABL__Error__thi_00001454);
      uVar4 = 9;
    }
  }
  return uVar4;
}



/* FUN_000014cc @ 000014cc */

undefined4 FUN_000014cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  uint local_24;
  int local_14;
  
  FUN_0000948c(auStack_28);
  if (local_24 < 2) {
    uVar1 = 0;
  }
  else if (local_14 == 0) {
    FUN_00001ce4(0,0x40000000,DAT_00001530);
    uVar1 = 9;
  }
  else {
    FUN_00001ce4(4,0,s_Master__Get_Data_from_Slaves_00001510);
    uVar1 = FUN_00001534(param_1,0xc,param_2);
  }
  return uVar1;
}



/* FUN_00001534 @ 00001534 */

undefined4 FUN_00001534(undefined4 param_1)

{
  undefined auStack_48 [32];
  undefined auStack_28 [32];
  
  thunk_FUN_000093ea(auStack_48,0,0x20,param_1);
  FUN_0000948c(auStack_28);
  return 0;
}



/* FUN_00001554 @ 00001554 */

undefined4 FUN_00001554(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [68];
  undefined auStack_3c [20];
  int local_28;
  
  local_90 = 0;
  local_8c = (char *)0x0;
  local_88 = 0;
  local_84 = 0;
  if (param_2 == 8) {
    local_90._0_2_ = 0;
    local_90._2_2_ = 9;
    local_8c = s__MEM_CONF__Override_Memory_Timin_00002ff0 + 0x14;
    uVar2 = FUN_000007dc();
    local_90 = CONCAT22(local_90._2_2_,uVar2);
    FUN_000008fc(&local_90,1);
    FUN_00009000(DAT_000015f8);
  }
  FUN_0000948c(auStack_3c);
  pcVar5 = DAT_000015fc;
  if (local_28 == 0) {
    iVar3 = FUN_000017c8(param_1,param_2,auStack_80);
    iVar1 = DAT_00001600;
    if (iVar3 == 0) {
      for (uVar6 = 0; *(int *)(DAT_00001600 + uVar6 * 8) != 0; uVar6 = uVar6 + 1 & 0xff) {
        if (*(int *)(DAT_00001600 + uVar6 * 8 + 4) == param_2) {
          uVar4 = (**(code **)(DAT_00001600 + uVar6 * 8))(param_3,param_1);
          if (*(int *)(iVar1 + uVar6 * 8) != 0) {
            return uVar4;
          }
          break;
        }
      }
      pcVar5 = s__ERROR___Slave__ABL__Error__No_s_00001604;
    }
    else {
      pcVar5 = DAT_000015fc + -0x54;
    }
  }
  FUN_00001ce4(0,0x40000000,pcVar5);
  return 9;
}



/* FUN_00001708 @ 00001708 */

undefined4
FUN_00001708(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
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
  
  FUN_0000948c(auStack_34);
  if (local_20 == 0) {
    FUN_00001ce4(4,0,s_Slave__ABL__Send_Data_to_Master_000017a4);
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
    uVar1 = FUN_000017c8(param_1,0xc,auStack_78);
  }
  else {
    FUN_00001ce4(0,0x40000000,s__ERROR___Slave__ABL__Error__inva_0000176c);
    uVar1 = 9;
  }
  return uVar1;
}



/* FUN_000017c8 @ 000017c8 */

undefined4 FUN_000017c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auStack_28 [28];
  
  FUN_0000948c(auStack_28);
  *(undefined *)(param_3 + 0x40) = 0;
  software_interrupt(6);
  return 0;
}



/* FUN_000017e8 @ 000017e8 */

undefined4 FUN_000017e8(void)

{
  undefined auStack_20 [32];
  
  FUN_0000948c(auStack_20);
  return 0;
}



/* FUN_000017f8 @ 000017f8 */

longlong FUN_000017f8(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  
  uVar2 = param_2;
  local_20 = param_4;
  FUN_00001ce4(0x40000000,0,s_AmdDfAfterTraining_Start_00001a44,param_4,param_2,param_3);
  iVar1 = FUN_00009138(param_1);
  if (iVar1 != 0) {
    FUN_00001ce4(4,0,DAT_00001a60);
    FUN_00009a28(param_1,3,0,0x8c,0,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,0,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS0_Compo_00001a64,local_20);
    FUN_00009a28(param_1,3,0,0x8c,1,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,1,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS1_Compo_00001aa0,local_20);
    FUN_00009a28(param_1,3,0,0x8c,2,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,2,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS2_Compo_00001adc,local_20);
    FUN_00009a28(param_1,3,0,0x8c,3,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,3,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS3_Compo_00001b18,local_20);
    FUN_00009a28(param_1,3,0,0x8c,4,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,4,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS4_Compo_00001b54,local_20);
    FUN_00009a28(param_1,3,0,0x8c,5,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,5,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS5_Compo_00001b90,local_20);
    FUN_00009a28(param_1,3,0,0x8c,6,&local_20);
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,6,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS6_Compo_00001bcc,local_20);
    FUN_00009a28(param_1,3,0,0x8c,7,&local_20);
    uVar2 = 7;
    local_20 = local_20 | 1;
    FUN_00009b10(param_1,3,0,0x8c,7,&local_20);
    FUN_00001ce4(4,0,s__exing_DF__FuseDisable_CS7_Compo_00001c08,local_20);
  }
  FUN_00001ce4(0x40000000,0,s_DfMbatInitialization_00001c44);
  FUN_000061be(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_DfPieInitialization_00001c5c);
  FUN_00008550(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_DfTcdxInitialization_00001c74);
  FUN_000086d4(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_DfCommonInitialization_00001c8c);
  FUN_00005774(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_DfAddressMapInitialization_00001ca8);
  FUN_000056c0(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_AmdDfAfterTraining_Exit_00001cc8);
  return (ulonglong)uVar2 << 0x20;
}



/* FUN_00001ce4 @ 00001ce4 */

void FUN_00001ce4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if ((param_1 == 0x20 && param_2 == 0) || (param_1 == 1 && param_2 == 0)) {
    param_1 = 4;
    param_2 = 0;
  }
  uStack_4 = param_4;
  FUN_00001d2c(param_1,param_2,param_3,&uStack_4);
  return;
}



/* FUN_00001d0a @ 00001d0a */

undefined4 FUN_00001d0a(int param_1)

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



/* FUN_00001d2c @ 00001d2c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d2c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar1 = DAT_00001df4;
  iVar2 = *DAT_00001df0;
  local_24 = iVar2;
  FUN_00008b14(DAT_00001df4);
  iVar3 = FUN_00001d0a(iVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00001e00(param_3,param_4,auStack_224,0x200,&local_234);
    if (iVar3 == 1) {
      FUN_000090b4(auStack_224,0x200);
      local_234 = 0x200;
    }
    local_228[0] = 0;
    for (uVar5 = 0; puVar4 = *(undefined4 **)(iVar1 + uVar5 * 4), puVar4 != (undefined4 *)0x0;
        uVar5 = uVar5 + 1 & 0xff) {
      iVar3 = (*(code *)*puVar4)();
      if (iVar3 != 0) {
        local_230 = DAT_00001df8;
        uStack_22c = DAT_00001dfc;
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



/* FUN_00001e00 @ 00001e00 */

undefined4 FUN_00001e00(byte *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

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
LAB_00001f28:
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        *(undefined *)(param_3 + iVar7) = 0;
        *param_5 = iVar7;
      }
      return uVar5;
    }
    if (local_20 == 0) goto LAB_00001f28;
    if (bVar1 == 0x25) {
      param_1 = (byte *)FUN_00008b64(param_1,&local_34,&local_30,&local_28);
      bVar1 = *param_1;
      if (bVar1 == 100) {
        uVar5 = *local_28;
        local_28 = local_28 + 1;
        iVar3 = func_0x0000e61c(param_3 + iVar7,uVar5,local_34,&local_20);
LAB_00001ebc:
        if (iVar3 == 0xffff) goto LAB_00001f28;
        iVar7 = iVar7 + iVar3;
      }
      else if (bVar1 < 0x65) {
        if (bVar1 == 0x25) {
LAB_00001e66:
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001f28;
          *(byte *)(param_3 + iVar7) = *param_1;
        }
        else {
          if (bVar1 == 0x53) goto LAB_00001ed6;
          if (bVar1 == 0x58) {
            local_34 = local_34 | 0x20;
            local_30 = 0x10;
LAB_00001e90:
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
            iVar3 = func_0x0000e560(param_3 + iVar7,local_34,uVar5,uVar6,local_34,local_30,&local_20
                                   );
            goto LAB_00001ebc;
          }
          if (bVar1 != 99) goto LAB_00001e58;
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001f28;
          uVar5 = *local_28;
          local_28 = local_28 + 1;
          *(char *)(param_3 + iVar7) = (char)uVar5;
        }
        iVar7 = iVar7 + 1;
      }
      else if (bVar1 == 0x73) {
LAB_00001ed6:
        puVar2 = local_28 + 1;
        for (pcVar4 = (char *)*local_28; local_28 = puVar2, *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00001f28;
          *(char *)(param_3 + iVar7) = *pcVar4;
          iVar7 = iVar7 + 1;
        }
      }
      else {
        if (bVar1 != 0x76) {
          if (bVar1 == 0x78) goto LAB_00001e90;
LAB_00001e58:
          local_20 = local_20 + -1;
          if (local_20 != 0) {
            *(undefined *)(param_3 + iVar7) = 0x25;
            iVar7 = iVar7 + 1;
            goto LAB_00001e66;
          }
          goto LAB_00001f28;
        }
        FUN_00009000(DAT_00001f2c);
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



/* FUN_00001f38 @ 00001f38 */

void FUN_00001f38(char *param_1,int param_2)

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
  
  FUN_0000948c(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    if (*DAT_00001fb8 == DAT_00001fbc) {
      local_14 = DAT_00001fc0;
      uVar2 = 3;
      pcVar3 = (char *)&local_14;
      while( true ) {
        FUN_00009304(uVar2,0x80,pcVar3,0);
        bVar5 = param_2 == 0;
        param_2 = param_2 + -1;
        if (bVar5) break;
        uVar2 = 1;
        pcVar3 = param_1;
        param_1 = param_1 + 1;
      }
      local_14 = DAT_00001fc4;
      FUN_00009304(3,0x80,&local_14,0);
    }
    else {
      iVar4 = 200;
      while (bVar5 = param_2 != 0, param_2 = param_2 + -1, bVar5) {
        do {
          if (*param_1 == '\n') {
            FUN_00001fc8(0xd);
          }
          iVar1 = FUN_00001fc8(*param_1);
          iVar4 = iVar4 + -1;
        } while ((iVar1 == 0) && (iVar4 != 0));
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



/* FUN_00001fc8 @ 00001fc8 */

undefined4 FUN_00001fc8(undefined4 param_1,undefined4 param_2)

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
  
  pcVar3 = DAT_00002084;
  iVar2 = DAT_00002080;
  iVar1 = DAT_0000207c;
  iVar4 = 200;
  local_28[0] = 0;
  uStack_24 = param_1;
  while( true ) {
    if (*pcVar3 == '\0') {
      FUN_0000932c(1,0x3fd,local_28,0);
      param_2 = extraout_r1;
    }
    if (*pcVar3 == '\x01') {
      FUN_000093f0(1,param_2,iVar1,0,local_28,0);
      param_2 = extraout_r1_00;
    }
    if (*pcVar3 == '\x02') {
      FUN_000093f0(1,param_2,iVar2,0,local_28,0);
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
    FUN_00009380(1,0x3f8,&uStack_24,0);
    param_2 = extraout_r1_02;
  }
  if (*pcVar3 == '\x01') {
    FUN_0000943c(1,param_2,DAT_0000207c + -0x14,0,&uStack_24,0);
    param_2 = extraout_r1_03;
  }
  if (*pcVar3 == '\x02') {
    FUN_0000943c(1,param_2,DAT_00002080 + -0x14,0,&uStack_24,0);
  }
  return 1;
}



/* FUN_00002094 @ 00002094 */

uint FUN_00002094(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 local_ac;
  undefined auStack_a8 [96];
  int local_48;
  int local_44;
  int iStack_40;
  undefined *local_3c;
  undefined local_38;
  undefined4 local_34 [2];
  int local_2c;
  
  if (param_1 == 0) {
    FUN_00009000(DAT_00002220);
  }
  FUN_00001ce4(4,0,DAT_00002224);
  FUN_00001ce4(4,0,s_Phase_3_Initialization___UMC_Fea_00002228);
  FUN_00001ce4(4,0,DAT_00002224);
  FUN_00008f60(0xe0d2,param_1);
  FUN_00001ce4(4,0,s_MEM_PARAMS__00002260);
  FUN_00001ce4(4,0,s_AGESA_BL_Heap_Size____04x_00002270,FUN_00009000);
  FUN_00001ce4(4,0,s_ChannelIntlv____d_0000228c,*(undefined *)(*(int *)(param_1 + 0x28) + 0x738));
  FUN_00001ce4(4,0,s_PowerDown____d_000022a0,*(undefined *)(*(int *)(param_1 + 0x28) + 0x73b));
  FUN_00001ce4(4,0,s_Parity____d_000022b4,*(undefined *)(*(int *)(param_1 + 0x28) + 0x748));
  FUN_00001ce4(4,0,s_BankSwizzle____d_000022c4,*(undefined *)(*(int *)(param_1 + 0x28) + 0x749));
  FUN_00001ce4(4,0,s_MemClr____d_000022d8,*(undefined *)(*(int *)(param_1 + 0x28) + 0x74a));
  software_interrupt(0x1c);
  if (&stack0x00000000 != (undefined *)0xac) {
    FUN_00009000(DAT_00002220 + 0x1f);
  }
  FUN_00001ce4(4,0,s_AgesaBootMode___d_000022e8,local_ac);
  local_3c = auStack_a8;
  local_38 = *(undefined *)(param_1 + 0x3c8);
  local_34[0] = 0xa00e;
  local_48 = param_1;
  iVar2 = FUN_00008edc(local_34,param_1);
  puVar1 = DAT_00002300;
  if (iVar2 != 0) {
    *DAT_00002300 = 9;
  }
  iVar2 = DAT_00002304;
  uVar6 = 0;
  iStack_40 = local_2c + 0x700;
  local_44 = local_2c;
  do {
    iVar4 = iVar2 + uVar6 * 0x1c;
    pcVar7 = *(code **)(iVar4 + 4);
    if (pcVar7 == Reset) {
LAB_000021c4:
      *puVar1 = 9;
      return 9;
    }
    iVar3 = (*pcVar7)(local_2c,param_1,*(undefined4 *)(iVar4 + 0xc),auStack_a8);
    iVar4 = DAT_00002308;
    if (iVar3 != 0) {
      if (*(int *)(iVar2 + uVar6 * 0x1c + 4) != 0) {
        uVar6 = 0;
        break;
      }
      goto LAB_000021c4;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
LAB_000021e2:
  pcVar7 = *(code **)(iVar4 + uVar6 * 4);
  if (pcVar7 == Reset) {
LAB_000021ea:
    if (*(char *)(local_2c + 0x330) == '\x01') {
      FUN_00001ce4(4,0,s_NumOfMemPstates___1__copy_data_t_0000230c);
      func_0x0000e940(local_48);
    }
    FUN_00008f60(0xe050,param_1);
    uVar6 = *(uint *)(*(int *)(local_2c + 8) + 8);
    if (uVar6 <= *puVar1) {
      return *puVar1;
    }
    *puVar1 = uVar6;
    return uVar6;
  }
  uVar5 = (*pcVar7)(&local_48);
  *puVar1 = uVar5;
  if (*(char *)(param_1 + 0x3d0) == '\x01') goto LAB_000021ea;
  uVar6 = uVar6 + 1 & 0xff;
  goto LAB_000021e2;
}



/* FUN_00002340 @ 00002340 */

undefined4 FUN_00002340(undefined4 param_1,undefined4 param_2)

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
  
  thunk_FUN_000093ea(&local_54,0,0x20,param_2);
  FUN_00001ce4(4,0,s_Synchronize_All_Slave_Dies_with_t_000024c0);
  FUN_0000948c(&local_34);
  FUN_00001ce4(4,0,s_MCM_Info_000024f0,local_34);
  FUN_00001ce4(4,0,s_SocketCount____d_000024fc,local_34);
  FUN_00001ce4(4,0,s_Socket_ID____d_00002510,local_28);
  FUN_00001ce4(4,0,s_Dies_per_Socket____d_00002524,local_2c);
  FUN_00001ce4(4,0,s_Die_Count____d_0000253c,local_30);
  FUN_00001ce4(4,0,s_Die_ID____d_00002550,local_24);
  if (local_1c == 0) {
    pcVar4 = s_FALSE_00002568;
  }
  else {
    pcVar4 = &DAT_00002560;
  }
  FUN_00001ce4(4,0,s_Local_Master___s_00002570,pcVar4);
  if (local_20 == 0) {
    pcVar4 = s_FALSE_00002568;
  }
  else {
    pcVar4 = &DAT_00002560;
  }
  FUN_00001ce4(4,0,s_System_Master___s_00002584,pcVar4);
  if (local_30 < 2) {
    pcVar4 = s_Sync_All_Dies_Disabled___Die_cou_00002680;
  }
  else {
    if (local_20 == 0) {
      local_54 = (undefined)local_28;
      local_53 = (undefined)local_24;
      local_52 = 1;
      iVar1 = FUN_00001708(param_2,0,&local_54,1,1);
      if (iVar1 != 9) {
        return 0;
      }
      FUN_00009000(DAT_0000267c);
      return 0;
    }
    FUN_00001ce4(4,0,s_Synchronize_All_Slave_Dies_with_t_000024c0);
    FUN_00001ce4(4,0,s_System_Master_waiting_on_callbac_0000259c);
    iVar1 = FUN_000014cc(param_2,auStack_18c);
    for (uVar5 = 1; uVar5 < local_30; uVar5 = uVar5 + 1 & 0xff) {
      FUN_00001ce4(4,0,s_Slave__d_000025d0,uVar5);
      uVar2 = 0;
      do {
        uVar3 = uVar2 + 1 & 0xff;
        local_50[uVar2] = auStack_174[uVar5 * 7 + uVar2];
        uVar2 = uVar3;
      } while (uVar3 < 7);
      if (iVar1 == 9) {
        FUN_00001ce4(4,0,s_Fatal_error__received_from_ABL_G_00002620);
      }
      else if (acStack_17c[uVar5] == '\x01') {
        FUN_00001ce4(4,0,s_Slave_ID____d_000025dc,0);
        FUN_00001ce4(4,0,s_Slave_Socket_ID____d_000025f0,local_54);
        FUN_00001ce4(4,0,s_Slave_Die_ID____d_00002608,local_53);
      }
    }
    pcVar4 = s_All_Slave_Dies_synchronized_with_0000264c;
  }
  FUN_00001ce4(4,0,pcVar4);
  return 0;
}



/* FUN_000026ac @ 000026ac */

int FUN_000026ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_00001ce4(0,0,DAT_00002730,param_1,param_2,param_2);
  iVar2 = FUN_00004e68(param_1,param_2,&local_20,param_4,param_5);
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



/* FUN_00002734 @ 00002734 */

undefined4
FUN_00002734(short *param_1,undefined4 param_2,undefined4 *param_3,char *param_4,int param_5,
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
    FUN_00009000(DAT_00002820);
  }
  while( true ) {
    if (param_1[uVar5 + 1] == 0) {
      FUN_00001ce4(0,0,s_Get_internal_APCB_parameter__Tok_00002868,param_1[uVar5],param_2);
      iVar3 = FUN_00004e98(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
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
    iVar3 = FUN_00004e98(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
    if (iVar3 == 0) break;
    if (((uint)local_28 & 0xff) != 1) {
      sVar2 = param_1[uVar5];
      pcVar4 = s_Parent_APCB_parameter_disabled__T_00002824;
      goto LAB_00002778;
    }
    uVar5 = uVar5 + 1 & 0xff;
  }
  sVar2 = param_1[uVar5];
  pcVar4 = DAT_00002864;
LAB_00002778:
  FUN_00001ce4(0,0,pcVar4,sVar2,param_2);
  return 0;
}



/* FUN_000028a4 @ 000028a4 */

int FUN_000028a4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_00001ce4(0,0,DAT_00002928,param_1,param_2,param_2);
  iVar2 = FUN_00004e98(param_1,param_2,&local_20,param_4,param_5);
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



/* FUN_0000292c @ 0000292c */

undefined8 FUN_0000292c(int *param_1,uint param_2,undefined4 param_3,uint param_4)

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
      FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Clock_00002cf8,
                   *(undefined4 *)(param_1[1] + 0x2c));
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_000026ac(7,param_2,&local_34,&uStack_30);
    if (iVar2 == 0) break;
    FUN_00001ce4(4,0,s_Override_Memory_clock__0x_x_00002d2c,local_34 & 0xff);
    switch(local_34 & 0xff) {
    case 2:
      uVar1 = 0x7d;
      break;
    default:
      FUN_00009000(DAT_00002d4c);
      goto LAB_00002a40;
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
LAB_00002a40:
    *(undefined4 *)(param_1[1] + 0x28) = 2;
    break;
  case 3:
    if (*(char *)((int)param_1 + 0x331) != '\0') {
      if (*(char *)(param_1 + 0x146) != -1) {
        func_0x0000c900(param_1,0x1f2);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002d50,*(undefined *)(param_1 + 0x146)
                    );
      }
      if (*(char *)((int)param_1 + 0x519) != -1) {
        func_0x0000c900(param_1,0x208);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002d84,
                     *(undefined *)((int)param_1 + 0x519));
      }
      if (*(char *)((int)param_1 + 0x51a) != -1) {
        func_0x0000c900(param_1,0x20b);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002db8,
                     *(undefined *)((int)param_1 + 0x51a));
      }
      if (*(char *)((int)param_1 + 0x51b) != -1) {
        func_0x0000c900(param_1,0x20c);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002dec,
                     *(undefined *)((int)param_1 + 0x51b));
      }
      if (*(char *)(param_1 + 0x147) != -1) {
        func_0x0000c900(param_1,0x209);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002e20,*(undefined *)(param_1 + 0x147)
                    );
      }
      if (*(char *)((int)param_1 + 0x51d) != -1) {
        func_0x0000c900(param_1,0x20a);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002e54,
                     *(undefined *)((int)param_1 + 0x51d));
      }
      if (*(char *)((int)param_1 + 0x51e) != -1) {
        func_0x0000c900(param_1,0x227);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002e88,
                     *(undefined *)((int)param_1 + 0x51e));
      }
      if (*(char *)((int)param_1 + 0x51f) != -1) {
        func_0x0000c900(param_1,0x228);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002ebc,
                     *(undefined *)((int)param_1 + 0x51f));
      }
      if (*(char *)(param_1 + 0x148) != -1) {
        func_0x0000c900(param_1,0x22b);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002ef0,*(undefined *)(param_1 + 0x148)
                    );
      }
      if (*(char *)((int)param_1 + 0x521) != -1) {
        func_0x0000c900(param_1,0x22a);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002f20,
                     *(undefined *)((int)param_1 + 0x521));
      }
      if (*(char *)((int)param_1 + 0x522) != -1) {
        func_0x0000c900(param_1,0x22c);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002f54,
                     *(undefined *)((int)param_1 + 0x522));
      }
      if (*(char *)((int)param_1 + 0x523) != -1) {
        func_0x0000c900(param_1,0x1f6);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002f88,
                     *(undefined *)((int)param_1 + 0x523));
      }
      if (*(short *)(param_1 + 0x149) != -1) {
        func_0x0000c900(param_1,0x220);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002fbc,
                     *(undefined2 *)(param_1 + 0x149));
      }
      if (*(short *)((int)param_1 + 0x526) != -1) {
        func_0x0000c900(param_1,0x189);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00002ff0,
                     *(undefined2 *)((int)param_1 + 0x526));
      }
      if (*(short *)(param_1 + 0x14a) != -1) {
        func_0x0000c900(param_1,0x18b);
        FUN_00001ce4(4,0,s__MEM_CONF__Override_Memory_Timin_00003024,
                     *(undefined2 *)(param_1 + 0x14a));
      }
    }
    iVar2 = FUN_000026ac(8,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TCL___d_00003058,local_34 & 0xff);
      func_0x0000c900(param_1,0x1f2,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_Trcdrd___d_0000306c,local_34 & 0xff);
      func_0x0000c900(param_1,0x20b,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0xb,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_Trcdwr___d_00003084,local_34 & 0xff);
      func_0x0000c900(param_1,0x20c,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(9,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_Tras___d_000032dc,local_34 & 0xff);
      func_0x0000c900(param_1,0x208,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0xc,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrpAb___d_000032f4,local_34 & 0xff);
      func_0x0000c900(param_1,0x227,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0xd,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrpPb___d_0000330c,local_34 & 0xff);
      func_0x0000c900(param_1,0x228,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0xe,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrcAb___d_00003324,local_34 & 0xff);
      func_0x0000c900(param_1,0x209,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0xf,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrcPb___d_0000333c,local_34 & 0xff);
      func_0x0000c900(param_1,0x20a,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0x10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrrdL___d_00003354,local_34 & 0xff);
      func_0x0000c900(param_1,0x22a,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0x11,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_TrrdS___d_0000336c,local_34 & 0xff);
      func_0x0000c900(param_1,0x22b,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0x12,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_Trtp___d_00003384,local_34 & 0xff);
      func_0x0000c900(param_1,0x22c,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0x13,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_00001ce4(4,0,s_Override_Tfaw___d_0000339c,local_34 & 0xff);
      func_0x0000c900(param_1,0x1f6,local_34 & 0xff);
    }
    iVar2 = FUN_000026ac(0x14,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_00004e68(0x15,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x0000c900(param_1,0x220,local_2c & 0xffff);
    }
    iVar2 = FUN_000026ac(0x18,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_00004e68(0x19,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x0000c900(param_1,0x18b,local_2c & 0xffff);
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_000026ac(0x16,param_2,&local_34,&uStack_30);
    bVar4 = iVar2 == 0;
    while ((!bVar4 && ((char)local_34 == '\x01'))) {
      piVar3 = (int *)*param_1;
      iVar2 = FUN_00004e68(0x17,param_2,&local_2c,&uStack_30);
      bVar4 = iVar2 == 0;
      if (!bVar4) {
        func_0x0000c900(param_1,0x189,local_2c & 0xffff);
        return CONCAT44(local_34,piVar3);
      }
    }
  }
  return CONCAT44(local_34,piVar3);
}



/* FUN_000033b4 @ 000033b4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000033b4(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_78;
  byte local_74 [4];
  undefined auStack_70 [4];
  undefined2 local_6c [2];
  undefined auStack_68 [40];
  int local_40;
  undefined2 local_3c;
  short local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  int local_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  
  iVar5 = *DAT_000037b8;
  local_30 = iVar5;
  puStack_2c = param_1;
  local_28 = param_2;
  switch(param_2) {
  case 2:
    local_3c = 0x20;
    local_3a = 0x21;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_UclkDiv1_M0___d_000037bc,local_74[0]);
    }
    local_3a = 0x22;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_UclkDiv1_M1___d_000037d8,local_74[0]);
    }
    local_3a = 0x23;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_UclkDiv1_M2___d_000037f4,local_74[0]);
    }
    local_3a = 0x24;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_UclkDiv1_M3___d_00003810,local_74[0]);
    }
    break;
  case 3:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    goto switchD_000033e2_caseD_3;
  case 4:
    local_3c = 0x20;
    local_3a = 0x27;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwtrL___d_0000382c,local_74[0]);
      func_0x0000c900(param_1,0x23f,local_74[0]);
    }
    local_3a = 0x28;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwtrS___d_00003844,local_74[0]);
      func_0x0000c900(param_1,0x240,local_74[0]);
    }
    local_3a = 0x2f;
    local_38 = 0x30;
    iVar4 = FUN_00002734(&local_3c,local_28,local_6c,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Tcksrx__0x_x_0000385c,local_6c[0]);
      func_0x0000c900(param_1,0x5cd,local_6c[0]);
    }
    local_3a = 0x31;
    local_38 = 0x32;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Tcksre__0x_x_00003878,local_74[0]);
      func_0x0000c900(param_1,0x5cc,local_74[0]);
    }
    local_3a = 0x33;
    local_38 = 0x34;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Tpd__0x_x_00003894,local_74[0]);
      func_0x0000c900(param_1,0x203,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x35,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_BFDisDynAdrTri___d_000038ac,local_74[0]);
      func_0x0000c900(param_1,0x5f7,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x39,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_CmdThrottleMode_Control_000038cc,local_74[0]);
      func_0x0000c900(param_1,0x155,local_74[0]);
    }
    local_3c = 0x39;
    local_3a = 0x3a;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_CmdThrottleMode__OdtsCm_00003908,local_74[0]);
      func_0x0000c900(param_1,0x154,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x3b,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Write_CRC_Enable__WrCrc_0000393c,local_74[0]);
      func_0x0000c900(param_1,0x259,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x3d,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_MEM_Hardware_Hisrory__E_00003968,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x3e,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Command_Parity_En__CmdP_000039a4,local_74[0]);
      func_0x0000c900(param_1,0x54,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x3f,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_RCD_Parity__RDimmParEn__000039d4,local_74[0]);
      func_0x0000c900(param_1,0x1a5,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x40,local_28,local_74,auStack_70,*param_1);
    if (iVar4 == 0) break;
    FUN_00001ce4(4,0,s_Override_DBI__WrDbiEn____d_000039fc,local_74[0]);
    uVar7 = (uint)local_74[0];
    uVar6 = 0x25c;
    goto LAB_000045fe;
  case 7:
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x80;
    do {
      local_3a = (short)uVar8 + 0x81;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0x89;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        uVar1 = func_0x0000c834(param_1);
        func_0x0000c900(param_1,uVar8 + 0x2b9,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    local_3a = 0x88;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = local_78;
    }
    local_3a = 0x90;
    iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
    uVar8 = local_78;
    if (iVar4 != 0) {
      uVar2 = func_0x0000c834(param_1,0x2c2);
      func_0x0000c900(param_1,0x2c2,uVar2 & ~uVar7 | uVar8);
    }
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x91;
    do {
      local_3a = (short)uVar8 + 0x92;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0xa2;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000c900(param_1,0x4a5,uVar8 * 4 + 0xfe00);
        uVar1 = func_0x0000c834(param_1,0x4a6);
        func_0x0000c900(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x10);
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0xb2;
    do {
      local_3a = (short)uVar8 + 0xb3;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 200;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000c900(param_1,0x4a5,uVar8 * 4 + 0xfe40);
        uVar1 = func_0x0000c834(param_1,0x4a6);
        func_0x0000c900(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x15);
    local_3c = 0xdd;
    local_3a = 0xde;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      if (local_74[0] == 0) {
        local_3a = 0xdf;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0xe7;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar8 = local_78;
        if (iVar4 != 0) {
          func_0x0000c900(param_1,0x4a5,0xfe4c);
          uVar2 = func_0x0000c834(param_1,0x4a6);
          uVar8 = uVar2 & ~uVar7 | uVar8;
LAB_00003c64:
          func_0x0000c900(param_1,0x4a6,uVar8);
        }
      }
      else if (local_74[0] == 1) {
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xdf;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xe7;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar8 = local_78;
        if (iVar4 != 0) {
          func_0x0000c900(param_1,0x4a5,0xfe4c);
          uVar2 = func_0x0000c834(param_1,0x4a6);
          uVar8 = uVar2 & ~uVar7 | uVar8;
          goto LAB_00003c64;
        }
      }
    }
    local_3c = 0xef;
    local_3a = 0xf0;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = 0;
      if (local_74[0] == 0) {
        local_3a = 0xf1;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0xf9;
      }
      else {
        if (local_74[0] != 1) goto LAB_00003d34;
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xf1;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xf9;
      }
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar8 = local_78;
      if (iVar4 != 0) {
        func_0x0000c900(param_1,0x4a5,0xfe50);
        uVar2 = func_0x0000c834(param_1,0x4a6);
        func_0x0000c900(param_1,0x4a6,uVar2 & ~uVar7 | uVar8);
      }
    }
LAB_00003d34:
    local_3c = 0x101;
    local_3a = 0x102;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = 0;
      if (local_74[0] == 0) {
        local_3a = 0x103;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0x10b;
      }
      else {
        if (local_74[0] != 1) goto LAB_00003e04;
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0x103;
        iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0x10b;
      }
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar8 = local_78;
      if (iVar4 != 0) {
        func_0x0000c900(param_1,0x4a5,0xfe78);
        uVar2 = func_0x0000c834(param_1,0x4a6);
        func_0x0000c900(param_1,0x4a6,uVar2 & ~uVar7 | uVar8);
      }
    }
LAB_00003e04:
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x113;
    do {
      local_3a = (short)uVar8 + 0x114;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0x11f;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000c900(param_1,0x4a5,uVar8 * 4 + 0xff84);
        uVar1 = func_0x0000c834(param_1,0x4a6);
        func_0x0000c900(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0xb);
    iVar4 = param_1[0xac];
    uVar7 = 0;
    if (iVar4 == 0) {
      local_3c = 0x13b;
      local_3a = 0x13c;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x13d;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2c7);
        func_0x0000c900(param_1,0x2c7,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x145;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x146;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2c6);
        func_0x0000c900(param_1,0x2c6,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x14e;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14f;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2c8);
        func_0x0000c900(param_1,0x2c8,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x157;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x158;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2c9;
LAB_000044d2:
        uVar8 = func_0x0000c834(param_1,uVar6);
        func_0x0000c900(param_1,uVar6,uVar8 & ~uVar7 | local_78);
      }
    }
    else if (iVar4 == 1) {
      local_3c = 0x13b;
      local_3a = 0x13e;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x13f;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2ce);
        func_0x0000c900(param_1,0x2ce,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x147;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x148;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2cd);
        func_0x0000c900(param_1,0x2cd,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x150;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x151;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2cf);
        func_0x0000c900(param_1,0x2cf,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x159;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15a;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2d0;
        goto LAB_000044d2;
      }
    }
    else if (iVar4 == 2) {
      local_3c = 0x13b;
      local_3a = 0x140;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x141;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2d5);
        func_0x0000c900(param_1,0x2d5,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x149;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14a;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2d4);
        func_0x0000c900(param_1,0x2d4,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x152;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x153;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2d6);
        func_0x0000c900(param_1,0x2d6,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x15b;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15c;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2d7;
        goto LAB_000044d2;
      }
    }
    else if (iVar4 == 3) {
      local_3c = 0x13b;
      local_3a = 0x142;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x143;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2dc);
        func_0x0000c900(param_1,0x2dc,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x14b;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14c;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2db);
        func_0x0000c900(param_1,0x2db,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x154;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x155;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000c834(param_1,0x2dd);
        func_0x0000c900(param_1,0x2dd,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x15d;
      local_38 = 0;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15e;
      iVar4 = FUN_00002734(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2de;
        goto LAB_000044d2;
      }
    }
    else {
      FUN_00009000(DAT_000042a0);
    }
    iVar4 = FUN_000028a4(0x76,local_28,local_74,auStack_70,*param_1);
    if ((iVar4 != 0) &&
       (FUN_00001ce4(4,0,s_Override_APCB_TOKEN_CBS_DBG_MEM__000042a4,local_74[0]), local_74[0] == 0)
       ) {
      iVar4 = FUN_000028a4(0x78,local_28,local_6c,auStack_70,*param_1);
      if (iVar4 != 0) {
        FUN_00001ce4(4,0,s_Override_APCB_TOKEN_CBS_DBG_MEM__000048dc,local_6c[0]);
        func_0x0000c900(param_1,0x651,local_6c[0]);
      }
      func_0x0000c900(param_1,0x123,1);
      func_0x0000c900(param_1,0x122,1);
      local_78 = func_0x0000c834(param_1,0x2b9);
      local_78 = local_78 | 1;
      func_0x0000c900(param_1,0x2b9);
      iVar4 = FUN_000028a4(0x77,local_28,local_74,auStack_70,*param_1);
      if (iVar4 == 0) break;
      if (local_74[0] == 0) {
        func_0x0000c900(param_1,0x650,1);
        local_78 = func_0x0000c834(param_1,0x2c9);
        local_78 = local_78 | 0x80;
        func_0x0000c900(param_1,0x2c9);
        local_78 = func_0x0000c834(param_1,0x2d0);
        local_78 = local_78 | 0x80;
        func_0x0000c900(param_1,0x2d0);
        local_78 = func_0x0000c834(param_1,0x2d7);
        local_78 = local_78 | 0x80;
        func_0x0000c900(param_1,0x2d7);
        local_78 = func_0x0000c834(param_1,0x2de);
        local_78 = local_78 | 0x80;
        func_0x0000c900(param_1,0x2de);
        iVar4 = func_0x0000c834(param_1,0x220);
        iVar3 = func_0x0000c834(param_1,0x189);
        uVar7 = (uint)(iVar4 - iVar3) >> 3;
      }
      else {
        if (local_74[0] != 1) break;
        func_0x0000c900(param_1,0x650,0);
        iVar4 = func_0x0000c834(param_1,0x220);
        iVar3 = func_0x0000c834(param_1,0x189);
        uVar7 = (uint)(iVar4 - iVar3) >> 4;
      }
      uVar6 = 0x624;
      local_78 = uVar7;
      goto LAB_000045fe;
    }
    goto switchD_000033e2_caseD_3;
  case 8:
    local_3c = 0x20;
    local_3a = 0x27;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwtrL___d_0000382c,local_74[0]);
      func_0x0000c900(param_1,0x23f,local_74[0]);
    }
    local_3a = 0x28;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwtrS___d_00003844,local_74[0]);
      func_0x0000c900(param_1,0x240,local_74[0]);
    }
    local_3a = 0x29;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwrwrSc___d_00004918,local_74[0]);
      func_0x0000c900(param_1,0x23b,local_74[0]);
    }
    local_3a = 0x2a;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwrwrSd___d_00004930,local_74[0]);
      func_0x0000c900(param_1,0x23e,local_74[0]);
    }
    local_3a = 0x2b;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TwrwrDd___d_00004948,local_74[0]);
    }
    local_3a = 0x2c;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TrdrdSc___d_00004960,local_74[0]);
      func_0x0000c900(param_1,0x219,local_74[0]);
    }
    local_3a = 0x2d;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TrdrdSd___d_00004978,local_74[0]);
      func_0x0000c900(param_1,0x21c,local_74[0]);
    }
    local_3a = 0x2e;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_TrdrdDd___d_00004990,local_74[0]);
      func_0x0000c900(param_1,0x218,local_74[0]);
    }
    local_3a = 0x25;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Trdwr___d_000049a8,local_74[0]);
      func_0x0000c900(param_1,0x21d,local_74[0]);
    }
    local_3a = 0x26;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Twrrd___d_000049c0,local_74[0]);
      func_0x0000c900(param_1,0x237,local_74[0]);
    }
    iVar4 = FUN_000028a4(0x47,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Power_Down_Enable___d_000049d8,local_74[0]);
      func_0x0000c900(param_1,0x1a1,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x48;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Power_Down_Mode___d_000049fc,local_74[0]);
      func_0x0000c900(param_1,0x1a2,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x49;
    local_38 = 0x4a;
    local_36 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Power_Down_Delay___d_00004c38,local_74[0]);
      func_0x0000c900(param_1,0x1a0,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x4b;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Aggressive_Power_Down_E_00004c5c,local_74[0]);
      func_0x0000c900(param_1,9,local_74[0]);
    }
    local_3c = 0x47;
    local_38 = 0x4c;
    local_3a = 0x4b;
    local_36 = 0x4d;
    local_34 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Override_Aggressive_Power_Down_D_00004c8c,local_74[0]);
      func_0x0000c900(param_1,8,local_74[0]);
    }
    local_3c = 0x7a;
    local_3a = 0x7b;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_00001ce4(4,0,s_Additional_CAS_CAS_Delay_Cycles__00004cb8,local_74[0]);
      iVar4 = func_0x0000c834(param_1,0x219);
      func_0x0000c900(param_1,0x219,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000c834(param_1,0x21b);
      func_0x0000c900(param_1,0x21b,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000c834(param_1,0x23a);
      func_0x0000c900(param_1,0x23a,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000c834(param_1,0x23b);
      func_0x0000c900(param_1,0x23b,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000c834(param_1,0x23d);
      func_0x0000c900(param_1,0x23d,iVar4 + (uint)local_74[0]);
    }
    local_3c = 0x7c;
    local_3a = 0x7d;
    local_38 = 0;
    iVar4 = FUN_00002734(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 == 0) break;
    FUN_00001ce4(4,0,s_Additional_Read_to_Write_Turnaro_00004ce0,local_74[0]);
    uVar6 = 0x21d;
    iVar4 = func_0x0000c834(param_1,0x21d);
    uVar7 = iVar4 + (uint)local_74[0];
    goto LAB_000045fe;
  case 9:
    iVar4 = FUN_000028a4(0x38,param_2,local_74,auStack_70,*param_1);
    if (iVar4 == 0) break;
    FUN_00001ce4(4,0,s_Override_OnDimmTemperatureSensor_00004d14,local_74[0]);
    uVar7 = (uint)local_74[0];
    uVar6 = 0x157;
LAB_000045fe:
    func_0x0000c900(param_1,uVar6,uVar7);
    break;
  case 0xe:
    local_3c = 0x71;
    local_3a = 0;
    iVar4 = FUN_00002734(&local_3c,param_2,local_74,auStack_70,0,auStack_68);
    if ((iVar4 != 0) && (local_74[0] == 1)) {
      FUN_00001ce4(4,0,DAT_00004d44);
      uVar6 = DAT_00004d48;
      do {
        FUN_00009c08(3,uVar6,&local_40,auStack_68);
      } while (local_40 != 0xf);
    }
  }
switchD_000033e2_caseD_d:
  if (local_30 == iVar5) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
switchD_000033e2_caseD_3:
  goto switchD_000033e2_caseD_d;
}



/* FUN_00004d4c @ 00004d4c */

void FUN_00004d4c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined auStack_14 [4];
  
  local_20[0] = 0xa042;
  iVar2 = FUN_00008edc(local_20,param_1);
  puVar1 = DAT_00004ddc;
  if (iVar2 == 0) {
    *DAT_00004ddc = local_18;
  }
  else {
    local_34 = 0x6c;
    uStack_30 = 0xa042;
    local_2c = 2;
    iVar2 = FUN_00008da0(&local_34,param_1);
    if (iVar2 == 0) {
      *puVar1 = local_28;
      FUN_000054e4(s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2c,0x52,0,auStack_14,&local_24);
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
      FUN_00009000(DAT_00004de0);
    }
  }
  return;
}



/* FUN_00004de4 @ 00004de4 */

void FUN_00004de4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined *local_18;
  undefined auStack_14 [4];
  
  local_24[0] = 0xa044;
  iVar2 = FUN_00008edc(local_24,param_1);
  puVar1 = DAT_00004e60;
  if (iVar2 == 0) {
    *DAT_00004e60 = local_1c;
  }
  else {
    local_34 = 0x20;
    uStack_30 = 0xa044;
    local_2c = 2;
    iVar2 = FUN_00008da0(&local_34,param_1);
    if (iVar2 == 0) {
      *puVar1 = local_28;
      FUN_000054e4(s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2c,0x53,0,auStack_14,&local_18);
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
      FUN_00009000(DAT_00004e64);
    }
  }
  return;
}



/* FUN_00004e68 @ 00004e68 */

undefined4
FUN_00004e68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x1e) {
    uVar1 = FUN_00005064(0xd,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_00009000(DAT_00004e94);
  return 0;
}



/* FUN_00004e98 @ 00004e98 */

undefined4
FUN_00004e98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x161) {
    uVar1 = FUN_00005064(0xf,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_00009000(DAT_00004ec4);
  return 0;
}



/* FUN_00004ec8 @ 00004ec8 */

int FUN_00004ec8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort local_38 [12];
  
  FUN_0000013c(local_38,DAT_00004fb0,0x14);
  uVar3 = 0;
  while ((local_38[uVar3 * 2] != param_1 ||
         (iVar1 = FUN_00004e68(local_38[uVar3 * 2 + 1],param_2,param_3,param_4,param_5), iVar1 == 0)
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
          FUN_00009000(DAT_00005060);
          return 0;
        }
        iVar1 = 0xc;
      }
      FUN_00001ce4(0,0,s_Get_config_parameter__token__04x_00004fec,param_1,param_2);
      iVar2 = FUN_00005064(iVar1,param_1,param_2,param_3,param_4,param_5);
      if (iVar2 == 0) {
        FUN_00001ce4(0,0,s_Get_config_parameter_from_defaul_00005020,param_1,param_2);
        iVar2 = FUN_00005064(iVar1 + -1,param_1,param_2,param_3,param_4,param_5);
      }
      return iVar2;
    }
  }
  FUN_00001ce4(0,0,s_APCB_Config_parameter__04x_mappe_00004fb4,local_38[uVar3 * 2],
               local_38[uVar3 * 2 + 1]);
  return 1;
}



/* FUN_00005064 @ 00005064 */

undefined4
FUN_00005064(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,undefined4 param_6)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *local_98;
  int local_94;
  uint local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined local_84;
  int local_80;
  undefined4 local_7c [2];
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
  
  local_68 = *DAT_00005464;
  local_3c = local_68;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_0000013c(auStack_60,DAT_00005468,0x24);
  uVar10 = local_34 - 1;
  if (0xe < uVar10) {
    FUN_00009000(DAT_0000546c);
  }
  if (0xf < local_2c) {
    FUN_00009000(DAT_0000546c + 0xb);
  }
  if (local_28 == 0) {
    FUN_00009000(DAT_0000546c + 0xd);
  }
  if (param_5 == (byte *)0x0) {
    FUN_00009000(DAT_0000546c + 0xe);
  }
  switch(local_34) {
  default:
    iVar6 = DAT_00005470 + -0xd1;
    goto LAB_00005280;
  case 1:
  case 2:
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x29;
    pcVar15 = (char *)0x3;
    pcVar14 = (char *)0x1;
    pcVar16 = (char *)0xff;
    uVar12 = 0xa03c;
    iVar6 = 1;
    uVar10 = uVar10 & 0xff;
    break;
  case 3:
  case 4:
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2a;
    iVar6 = 3;
    pcVar14 = (char *)0x101;
    pcVar15 = (char *)0x102;
    pcVar16 = (char *)0x2ff;
    uVar12 = 0xa03d;
    uVar10 = local_34 - 3 & 0xff;
    break;
  case 5:
  case 6:
    iVar6 = 5;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2b;
    pcVar14 = (char *)0x301;
    pcVar15 = (char *)0x309;
    pcVar16 = (char *)0x6ff;
    uVar12 = 0xa03e;
    uVar10 = local_34 - 5 & 0xff;
    break;
  case 7:
  case 8:
    iVar6 = 7;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2c;
    pcVar14 = (char *)0x701;
    pcVar15 = (char *)0x71c;
    pcVar16 = (char *)0x17ff;
    uVar12 = 0xa03f;
    uVar10 = local_34 - 7 & 0xff;
    break;
  case 9:
  case 10:
    iVar6 = 9;
    pcVar14 = (char *)0x1801;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2d;
    pcVar15 = (char *)0x1801;
    pcVar16 = s__exing_DF__FuseDisable_CS6_Compo_00001bcc + 0x33;
    uVar12 = 0xa040;
    uVar10 = local_34 - 9 & 0xff;
    break;
  case 0xb:
  case 0xc:
    iVar6 = 0xb;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2e;
    pcVar14 = s__exing_DF__FuseDisable_CS6_Compo_00001bcc + 0x35;
    pcVar15 = s__exing_DF__FuseDisable_CS6_Compo_00001bcc + 0x37;
    pcVar16 = (char *)0x1ffe;
    uVar12 = 0xa041;
    uVar10 = local_34 - 0xb & 0xff;
    break;
  case 0xd:
    pcVar15 = (char *)0x1f;
    uVar10 = 0;
    pcVar16 = (char *)0x1ffe;
    pcVar14 = (char *)0x1;
    uVar12 = 0xa04d;
    iVar6 = 0xd;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2f;
    break;
  case 0xf:
    pcVar15 = (char *)0x162;
    uVar10 = 0;
    pcVar16 = (char *)0x1ffe;
    pcVar14 = (char *)0x1;
    uVar12 = 0xa04e;
    iVar6 = 0xf;
    local_98 = s_Slave__ABL__Get_Broadcast_Data_f_000016d8 + 0x2f;
  }
  local_90 = 0;
  if (local_34 < 0x11) {
    local_90 = (uint)auStack_60[local_34];
  }
  local_7c[0] = uVar12;
  iVar4 = FUN_00008edc(local_7c,param_6);
  if (iVar4 == 0) {
    if (*(int *)(local_74 + uVar10 * 4) != 0) {
      iVar6 = local_74 + 8 + (local_30 - (int)pcVar14) * 6;
      uVar11 = (uint)*(byte *)(iVar6 + 1);
      if ((uVar11 == local_2c) || (uVar11 == 1)) {
        bVar2 = *(byte *)(local_74 + 8 + (local_30 - (int)pcVar14) * 6);
        if (((bVar2 & 3) >> uVar10 & 1) != 0) {
          if (bVar2 >> 5 == 0) {
            uVar11 = (((uint)bVar2 << 0x1b) >> 0x1d) + 1;
            *param_5 = (byte)uVar11;
            uVar1 = *(ushort *)(iVar6 + uVar10 * 2 + 2);
            if (uVar11 < 9) {
              iVar6 = *(int *)(local_74 + uVar10 * 4);
              for (uVar10 = 0; uVar10 < *param_5; uVar10 = uVar10 + 1 & 0xff) {
                *(undefined *)(local_28 + uVar10) = *(undefined *)(iVar6 + (uint)uVar1 + uVar10);
              }
              uVar12 = 1;
              goto LAB_000052c0;
            }
            iVar6 = DAT_00005470 + -0x21;
          }
          else {
            iVar6 = DAT_00005470 + -0x36;
          }
LAB_00005280:
          FUN_00009000(iVar6);
        }
      }
    }
    uVar12 = 0;
  }
  else {
    local_8c = ((int)pcVar15 - (int)pcVar14) * 6 + 8;
    local_84 = 4;
    uStack_88 = uVar12;
    iVar4 = FUN_00008da0(&local_8c,param_6);
    if (iVar4 != 0) {
      FUN_00009000(DAT_00005470);
    }
    local_70 = local_80;
    iVar4 = local_80 + 8;
    uVar10 = 0;
    do {
      local_6c = iVar6 + uVar10;
      iVar5 = FUN_000054e4(local_98,local_6c & 0xffff,0,auStack_64,&local_94);
      if (iVar5 != 0) {
        FUN_00001ce4(0,0,s_Initializing_APCB_parameters_for_00005474,local_6c);
        uVar11 = 0;
        iVar5 = DAT_00005470 + 0x20;
        while (pcVar7 = (char *)((uint)(*(int *)(local_94 + uVar11 * 4) << 0xb) >> 0x13),
              pcVar7 != (char *)0x1fff) {
          if ((pcVar7 < pcVar14) || (pcVar16 <= pcVar7)) {
            FUN_00009000(iVar5);
          }
          uVar11 = uVar11 + 1 & 0xff;
        }
        uVar13 = 0;
        *(uint *)(local_70 + uVar10 * 4) = local_94 + uVar11 * 4 + 4;
        uVar11 = 0;
        while( true ) {
          uVar9 = *(uint *)(local_94 + uVar13 * 4);
          pcVar7 = (char *)((uVar9 << 0xb) >> 0x13);
          if (pcVar7 == (char *)0x1fff) break;
          if (pcVar7 < pcVar15) {
            if (uVar9 >> 0x18 != 0) {
              iVar6 = DAT_00005470 + 0x41;
              goto LAB_00005280;
            }
            if (local_90 < ((uVar9 << 8) >> 0x1d) + 1) {
              iVar6 = DAT_00005470 + 0x62;
              goto LAB_00005280;
            }
            bVar2 = *(byte *)(iVar4 + ((int)pcVar7 - (int)pcVar14) * 6);
            bVar3 = ((byte)(1 << uVar10) | bVar2) & 3;
            *(byte *)(iVar4 + ((int)pcVar7 - (int)pcVar14) * 6) = bVar2 & 0xfc | bVar3;
            iVar5 = *(int *)(local_94 + uVar13 * 4);
            *(byte *)(iVar4 + (((uint)(iVar5 << 0xb) >> 0x13) - (int)pcVar14) * 6) =
                 bVar2 & 0xe0 | bVar3 | (byte)(((uint)(iVar5 << 8) >> 0x1d) << 2);
            iVar5 = *(int *)(local_94 + uVar13 * 4);
            *(char *)(iVar4 + (((uint)(iVar5 << 0xb) >> 0x13) - (int)pcVar14) * 6 + 1) = (char)iVar5
            ;
            *(short *)(iVar4 + (((uint)(*(int *)(local_94 + uVar13 * 4) << 0xb) >> 0x13) -
                               (int)pcVar14) * 6 + uVar10 * 2 + 2) = (short)uVar11;
            iVar5 = ((uint)(*(int *)(local_94 + uVar13 * 4) << 0xb) >> 0x13) - (int)pcVar14;
            *(byte *)(iVar4 + iVar5 * 6) = *(byte *)(iVar4 + iVar5 * 6) & 0x1f;
            uVar9 = (uint)(*(int *)(local_94 + uVar13 * 4) << 0xb) >> 0x13;
            FUN_00001ce4(0,0,s_Type__d___Token_0x_x____000054a8,local_6c,uVar9);
            for (uVar8 = (uint)(*(int *)(local_94 + uVar13 * 4) << 8) >> 0x1d; uVar8 != 0xff;
                uVar8 = uVar8 - 1 & 0xff) {
              FUN_00001ce4(0,0,&DAT_000054c4,
                           *(undefined *)(*(int *)(local_70 + uVar10 * 4) + uVar11 + uVar8),uVar9);
            }
            iVar5 = ((uint)(*(int *)(local_94 + uVar13 * 4) << 0xb) >> 0x13) - (int)pcVar14;
            *(byte *)(iVar4 + iVar5 * 6) = *(byte *)(iVar4 + iVar5 * 6) | 1;
            FUN_00001ce4(0,0,&DAT_000054cc);
          }
          uVar9 = ((uint)(*(int *)(local_94 + uVar13 * 4) << 8) >> 0x1d) + uVar11 + 1 & 0xffff;
          if (uVar9 <= uVar11) {
            FUN_00009000(DAT_00005470 + 0xe9);
          }
          uVar13 = uVar13 + 1 & 0xff;
          uVar11 = uVar9;
        }
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 2);
    uVar12 = FUN_00005064(local_34,local_30,local_2c,local_28,param_5,param_6);
  }
LAB_000052c0:
  if (local_3c != local_68) {
    func_0x0000e858();
  }
  return uVar12;
}



/* FUN_000054e4 @ 000054e4 */

undefined4 FUN_000054e4(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  FUN_00001ce4(0,0,s_ToSearch__GroupId___0x_04X__Type_00005590,param_1,param_2);
  iVar2 = DAT_000055c4;
  FUN_000055fc(*(undefined4 *)(DAT_000055c4 + 8));
  iVar4 = iVar2 + 0x20;
  uVar5 = *(int *)(iVar2 + 8) + iVar2 + -1;
  FUN_00005618(*(undefined4 *)(iVar2 + 0x2c));
  uVar3 = iVar2 + 0x30;
  FUN_00005634(*(undefined2 *)(iVar2 + 0x34));
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
        FUN_00001ce4(0,0,s_Found_type_id_match__000055c8,(uint)uVar1,uVar6);
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



/* FUN_000055fc @ 000055fc */

undefined4 FUN_000055fc(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009000(DAT_00005614);
    return 0;
  }
  return 1;
}



/* FUN_00005618 @ 00005618 */

undefined4 FUN_00005618(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009000(DAT_00005630);
    return 0;
  }
  return 1;
}



/* FUN_00005634 @ 00005634 */

undefined4 FUN_00005634(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009000(DAT_0000564c);
    return 0;
  }
  return 1;
}



/* FUN_00005688 @ 00005688 */

void FUN_00005688(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  iVar2 = *(int *)(DAT_000056bc + 0xc);
  while( true ) {
    if (iVar2 == -1) {
      return;
    }
    iVar3 = DAT_000056bc + iVar2;
    if (iVar2 == param_2) break;
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  if (iVar1 != -1) {
    *(undefined4 *)(DAT_000056bc + iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    return;
  }
  *(undefined4 *)(DAT_000056bc + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  return;
}



/* FUN_000056c0 @ 000056c0 */

void FUN_000056c0(undefined4 param_1,undefined4 param_2)

{
  FUN_00001ce4(0x40000000,0,s_Begin_PCI_Address_Map_init_00005708);
  FUN_000083c4(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_PCI_Address_Map_complete_00005724);
  FUN_00001ce4(0x40000000,0,s_Begin_Memory_map_init_00005740);
  FUN_000061c0(param_1,param_2);
  FUN_00001ce4(0x40000000,0,s_Memory_map_init_complete_00005758);
  return;
}



/* FUN_00005774 @ 00005774 */

void FUN_00005774(undefined4 param_1,undefined4 param_2)

{
  FUN_00001ce4(0x40000000,0,s_Begin_DF_common_register_init_000057b4);
  func_0x0000dd38(param_1,param_2,DAT_000057d4);
  func_0x0000dd38(param_1,param_2,DAT_000057d8);
  func_0x0000dd38(param_1,param_2,DAT_000057dc);
  FUN_00001ce4(0x40000000,0,s_DF_common_register_init_complete_000057e0);
  return;
}



/* FUN_00005804 @ 00005804 */

void FUN_00005804(int *param_1)

{
  int iVar1;
  undefined auStack_20 [4];
  byte local_1c [4];
  undefined auStack_18 [4];
  
  *(undefined *)((int)param_1 + 0xe) = 0;
  FUN_00004ec8(0x711,1,(int)param_1 + 0xe,auStack_20,0);
  FUN_000026ac(5,1,(int)param_1 + 0xe,auStack_18,0);
  if (2 < *(byte *)((int)param_1 + 0xe)) {
    *(undefined *)((int)param_1 + 0xe) = 2;
  }
  *(undefined *)(param_1 + 8) = 0;
  *(undefined *)((int)param_1 + 0x21) = 0;
  *(undefined *)((int)param_1 + 0xf) = 0;
  iVar1 = FUN_00004ec8(0x715,1,local_1c,auStack_20,0);
  if ((iVar1 != 0) && (local_1c[0] != 0)) {
    *(undefined *)((int)param_1 + 0xf) = 1;
  }
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  FUN_00004ec8(0x308,1,(int)param_1 + 0x22,auStack_20,0);
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = FUN_000026ac(6,1,param_1 + 6,auStack_18,0);
  if (iVar1 == 0) {
    param_1[6] = 0x100;
    param_1[7] = 0;
    FUN_00004ec8(0x712,1,param_1 + 6,auStack_20,0);
  }
  else if (param_1[6] != -1 || param_1[7] != 0) {
    FUN_00001ce4(0x40000000,0,s_ApcbInfo_>UmaSize____lx_000059c0);
  }
  param_1[4] = 0xffffff;
  iVar1 = FUN_00004ec8(0x716,1,param_1 + 4,auStack_20,0);
  if (iVar1 != 0) {
    iVar1 = param_1[4];
    if (iVar1 != DAT_000059e0) {
      if (DAT_000059e0 < iVar1) {
        if ((iVar1 - DAT_000059e0 != 0x700) && (iVar1 - DAT_000059e0 != 0xeff)) goto LAB_0000590a;
      }
      else if ((iVar1 + DAT_000059e4 != 0) && (iVar1 + DAT_000059e4 != 0x1000)) {
LAB_0000590a:
        param_1[4] = 0xffffff;
      }
    }
  }
  *(undefined *)((int)param_1 + 0xb) = 0;
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = 0;
  iVar1 = FUN_00004ec8(0x303,1,local_1c,auStack_20,0);
  if (iVar1 != 0) {
    if (local_1c[0] == 0) {
      *(undefined *)(param_1 + 2) = 0;
    }
    else {
      if (local_1c[0] != 1) goto LAB_0000593a;
      *(undefined *)(param_1 + 2) = 1;
    }
    *(undefined *)((int)param_1 + 9) = 0;
    *(undefined *)((int)param_1 + 10) = 0;
  }
LAB_0000593a:
  *(undefined *)(param_1 + 3) = 0;
  iVar1 = FUN_00004ec8(0x305,1,local_1c,auStack_20,0);
  if ((iVar1 != 0) && (local_1c[0] == 1)) {
    *(undefined *)(param_1 + 3) = 1;
  }
  *param_1 = 0x8000;
  iVar1 = FUN_00004ec8(0x302,1,local_1c,auStack_20,0);
  if (iVar1 != 0) {
    *param_1 = (uint)local_1c[0] << 8;
  }
  *(undefined *)((int)param_1 + 0xd) = 0;
  FUN_00004ec8(0x304,1,(int)param_1 + 0xd,auStack_20,0);
  if (3 < *(byte *)((int)param_1 + 0xd)) {
    *(undefined *)((int)param_1 + 0xd) = 0;
  }
  param_1[1] = 0x10000000;
  FUN_00004ec8(0x306,1,param_1 + 1,auStack_20,0);
  if ((0xff00000 < param_1[1] - 0x100000U) || ((param_1[1] & 0xfffffU) != 0)) {
    param_1[1] = 0x10000000;
  }
  return;
}



/* FUN_00005a8c @ 00005a8c */

uint FUN_00005a8c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_00005adc;
  if (param_1 == 0) {
    *(int *)(DAT_00005adc + 8) = DAT_00005adc + 0xc;
    uVar4 = 9;
  }
  else if (param_1 == 1) {
    *(int *)(DAT_00005adc + 8) = DAT_00005adc + 4;
    uVar4 = 4;
  }
  else {
    iVar3 = DAT_00005ae0;
    if (param_1 != 2) goto LAB_00005ad2;
    uVar4 = 2;
    *(int *)(DAT_00005adc + 8) = DAT_00005adc;
  }
  for (uVar2 = 0; (uVar2 < uVar4 && (*(byte *)(*(int *)(iVar1 + 8) + uVar2) != param_2));
      uVar2 = uVar2 + 1) {
  }
  if (uVar2 < uVar4) {
    return uVar2;
  }
  iVar3 = DAT_00005ae0 + 0x10;
LAB_00005ad2:
  FUN_00009000(iVar3);
  return 0;
}



/* FUN_00005ae4 @ 00005ae4 */

undefined4 FUN_00005ae4(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_3c [2];
  int local_34;
  int iStack_30;
  uint local_2c;
  int local_28;
  
  local_3c[0] = 0xa039;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  iVar1 = FUN_00008edc(local_3c,0);
  iVar10 = DAT_00005c68;
  if (iVar1 == 0) {
    iVar10 = *(int *)(local_34 + 0xb8);
    if (*(char *)(iVar10 + 0x274) != '\0') {
      uVar2 = FUN_000094c8();
      uVar3 = FUN_00009970();
      if (1 < uVar3) {
        FUN_00009000(DAT_00005c68 + 0x13);
      }
      if (1 < uVar2) {
        FUN_00009000(DAT_00005c68 + 0x14);
      }
      uVar8 = 0;
      do {
        uVar7 = 0;
        do {
          uVar9 = 0;
          do {
            if (local_28 == 0x10) {
              if (((uVar8 < uVar3) && (uVar7 < uVar2)) && ((1 << (uVar9 & 0xff) & local_2c) != 0)) {
                uVar4 = *(undefined4 *)(iVar10 + uVar8 * 0x40 + uVar7 * 0x40 + uVar9 * 4 + 0x234);
              }
              else {
                uVar4 = 0;
              }
              *(undefined4 *)(param_1 + uVar8 * 0x40 + uVar7 * 0x40 + uVar9 * 4) = uVar4;
            }
            else {
              FUN_00001ce4(0x40000000,0,s_DctCount____MAX_CHANNELS_PER_DIE_00005c6c);
              if (((uVar8 < uVar3) && (uVar7 < uVar2)) && ((1 << (uVar9 & 0xff) & local_2c) != 0)) {
                iVar1 = *(int *)(iVar10 + uVar8 * 0x40 + uVar7 * 0x40 + uVar9 * 4 + 0x234);
              }
              else {
                iVar1 = 0;
              }
              FUN_00001ce4(0x40000000,0,s_k__x__CurrentChannelSize__x_00005c90,uVar9,iVar1);
              if (iVar1 != 0) {
                switch(uVar9) {
                case 0:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x20) = iVar1;
                  *(int *)(iVar6 + 0x24) = iVar1;
                  break;
                case 2:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x30) = iVar1;
                  *(int *)(iVar6 + 0x34) = iVar1;
                  break;
                case 4:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x10) = iVar1;
                  *(int *)(iVar6 + 0x14) = iVar1;
                  break;
                case 6:
                  piVar5 = (int *)(param_1 + uVar8 * 0x40 + uVar7 * 0x40);
                  *piVar5 = iVar1;
                  piVar5[1] = iVar1;
                  break;
                case 8:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x38) = iVar1;
                  *(int *)(iVar6 + 0x3c) = iVar1;
                  break;
                case 10:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x28) = iVar1;
                  *(int *)(iVar6 + 0x2c) = iVar1;
                  break;
                case 0xc:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 8) = iVar1;
                  *(int *)(iVar6 + 0xc) = iVar1;
                  break;
                case 0xe:
                  iVar6 = param_1 + uVar8 * 0x40 + uVar7 * 0x40;
                  *(int *)(iVar6 + 0x18) = iVar1;
                  *(int *)(iVar6 + 0x1c) = iVar1;
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x10);
          uVar7 = uVar7 + 1;
        } while (uVar7 == 0);
        uVar8 = uVar8 + 1;
      } while (uVar8 == 0);
      return 1;
    }
    iVar10 = DAT_00005c68 + 6;
  }
  FUN_00009000(iVar10);
  return 0;
}



/* FUN_00005cb0 @ 00005cb0 */

uint FUN_00005cb0(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  
  local_18 = 0xa039;
  uStack_14 = param_3;
  local_10 = param_4;
  iVar1 = FUN_00008edc(&local_18,0);
  iVar2 = DAT_00005d10;
  if (iVar1 == 0) {
    if (*(char *)(*(int *)(local_10 + 0xb8) + 0x274) != '\0') {
      uVar3 = 0;
      do {
        if ((*(int *)(*(int *)(local_10 + 0xb8) + uVar3 * 4 + 0x234) != 0) &&
           ((1 << (uVar3 & 0xff) & 0xffffU & param_2) != 0)) {
          param_1 = param_1 + 1 & 0xff;
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < 0x10);
      return param_1;
    }
    iVar2 = DAT_00005d10 + 0xc;
  }
  FUN_00009000(iVar2);
  return 0;
}



/* FUN_00005fb0 @ 00005fb0 */

int FUN_00005fb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00008ccc();
  if (iVar1 != 1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_00005fbe @ 00005fbe */

uint FUN_00005fbe(void)

{
  uint uVar1;
  
  uVar1 = FUN_000096d8();
  return uVar1 & 1;
}



/* FUN_00005fca @ 00005fca */

uint FUN_00005fca(void)

{
  int iVar1;
  
  iVar1 = FUN_000096d8();
  return (uint)(iVar1 << 0x1e) >> 0x1f;
}



/* FUN_00006088 @ 00006088 */

uint FUN_00006088(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  if (0xf < *(byte *)(param_1 + 1)) {
    FUN_00009000(DAT_000060bc);
  }
  FUN_00009c08(3,(uint)(*(byte *)(param_1 + 1) >> 1) << 0x14 | (*(byte *)(param_1 + 1) & 1) << 0xd |
                 DAT_000060c0,&local_10,0);
  return (uint)(local_10 << 0x14) >> 0x1f;
}



/* FUN_00006120 @ 00006120 */

undefined4 FUN_00006120(void)

{
  return 1;
}



/* FUN_000061be @ 000061be */

void FUN_000061be(void)

{
  return;
}



/* FUN_000061c0 @ 000061c0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_000061c0(uint param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint *local_6ac;
  uint local_6a8;
  uint local_6a4;
  undefined auStack_6a0 [120];
  undefined auStack_628 [996];
  uint auStack_244 [17];
  uint local_200 [2];
  byte local_1f8;
  char local_1f7;
  char local_1f6;
  char local_1f5;
  byte local_1f3;
  char local_1f2;
  char local_1f1;
  int local_1f0;
  uint local_1e8;
  int iStack_1e4;
  char local_1e0;
  char local_1df;
  undefined2 local_1de;
  uint local_1d8 [16];
  uint local_198 [16];
  uint local_158 [34];
  undefined auStack_d0 [24];
  uint local_b8;
  uint *puStack_b4;
  uint local_b0 [4];
  undefined local_a0;
  uint *local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint *local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64 [5];
  uint local_50;
  uint local_4c [5];
  int local_38;
  uint local_34;
  undefined auStack_30 [4];
  uint local_2c;
  undefined4 uStack_28;
  
  local_4c[1] = 0;
  local_38 = 0;
  local_2c = param_1;
  uStack_28 = param_2;
  FUN_000001a0(local_1d8,0x40);
  FUN_000001a0(auStack_244 + 1,0x40);
  local_b0[0] = 0;
  local_b0[1] = 0;
  FUN_000001a0(local_158 + 0x11,0x40);
  FUN_000001a0(local_158,0x44);
  FUN_000001a0(&local_6a8,0x80);
  FUN_000001a0(local_198,0x40);
  local_64[0] = 0;
  local_64[1] = 0;
  FUN_00001ce4(0x40000000,0,s_New_DfMemoryMapInitialization_0000655c);
  local_64[2] = 0xa00e;
  iVar2 = FUN_00008edc(local_64 + 2,auStack_628);
  if (iVar2 != 0) {
    FUN_00009000(DAT_0000657c);
  }
  FUN_00005804(local_200);
  if ((*(char *)(local_64[4] + 0x331) != '\0') &&
     (uVar3 = func_0x0000d758(0x72,0xaa), uVar3 - 0x100 < 0x3700)) {
    local_1e8 = uVar3 & 0xfffffff0;
    iStack_1e4 = (int)uVar3 >> 0x1f;
    FUN_00001ce4(4,0,s__MEM_CONF__Override_Apcb_UmaSize_00006580);
  }
  *(short *)(local_64[4] + 0x52a) = (short)local_1e8;
  func_0x0000e6c8(0x72,0xaa);
  FUN_00001ce4(4,0,s__MEM_CONF__Save_Memory_Timing_UM_000065ac,*(undefined2 *)(local_64[4] + 0x52a))
  ;
  uVar4 = func_0x0000d77c(0x72,0x90);
  *(undefined4 *)(local_64[4] + 0x510) = uVar4;
  FUN_00001ce4(4,0,s__MEM_CONF__Get_Memory_Timing_Sig_000065e0,uVar4);
  iVar2 = *(int *)(local_64[4] + 0x510);
  if (iVar2 == s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._0_4_) {
    *(undefined4 *)(local_64[4] + 0x510) = s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._4_4_;
  }
  else if ((((iVar2 != s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._8_4_) &&
            (iVar2 != s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._12_4_)) &&
           (iVar2 != s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._16_4_)) &&
          ((iVar2 != s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._20_4_ &&
           (iVar2 != s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._4_4_)))) {
    *(undefined4 *)(local_64[4] + 0x510) = s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614._20_4_;
  }
  func_0x0000e6e6(0x72,0x90,*(undefined4 *)(local_64[4] + 0x510));
  FUN_00001ce4(4,0,s_APCB_ABLCMSBWDTFCHKESIGE__MEM_CO_00006614 + 0x18,*(int *)(local_64[4] + 0x510))
  ;
  uVar4 = FUN_00008b4c(local_64[4] + 0x516,0x16);
  *(short *)(local_64[4] + 0x514) = (short)uVar4;
  func_0x0000e6c8(0x72,0x94,uVar4);
  FUN_00001ce4(4,0,s__MEM_CONF__Save_Memory_Timing_Ch_00006660,*(undefined2 *)(local_64[4] + 0x514))
  ;
  bVar1 = FUN_00005cb0(0,local_1de);
  local_98 = (uint)bVar1;
  FUN_00001ce4(0x40000000,0,s_Enabled_DCTCount___d_00006694,local_98);
  iVar2 = FUN_00005ae4(local_1d8,local_1de,local_98);
  if (iVar2 == 0) {
    return;
  }
  FUN_00001ce4(0x40000000,0,s_APCB_Params__BottomOfIO__DramHol_000066ac,local_200[0]);
  if (local_1f8 == 0) {
    pcVar12 = s_not_000066ec;
  }
  else {
    pcVar12 = &DAT_000066e8;
  }
  FUN_00001ce4(0x40000000,0,s_ChanIntlv_srequested_000066f4,pcVar12);
  if (local_1f7 == '\0') {
    pcVar12 = s_not_000066ec;
  }
  else {
    pcVar12 = &DAT_000066e8;
  }
  FUN_00001ce4(0x40000000,0,s_DieIntlv_srequested_00006710,pcVar12);
  if (local_1f6 == '\0') {
    pcVar12 = s_not_000066ec;
  }
  else {
    pcVar12 = &DAT_000066e8;
  }
  FUN_00001ce4(0x40000000,0,s_SockIntlv_srequested_0000672c,pcVar12);
  if (local_1f5 == '\0') {
    pcVar12 = s_not_000066ec;
  }
  else {
    pcVar12 = &DAT_000066e8;
  }
  FUN_00001ce4(0x40000000,0,s_C6AreaDistribution_srequested_00006748,pcVar12);
  if (local_1f3 == 0) {
    pcVar12 = s_256_bytes_00006790;
  }
  else if (local_1f3 == 1) {
    pcVar12 = s_512_bytes_0000679c;
  }
  else if (local_1f3 == 2) {
    pcVar12 = &DAT_000067a8;
  }
  else if (local_1f3 == 3) {
    pcVar12 = &DAT_000067ac;
  }
  else {
    pcVar12 = s_Unknown_0000676c;
  }
  FUN_00001ce4(0x40000000,0,s_IntlvSz_requested___s_00006774,pcVar12);
  if (local_1f1 == '\0') {
    pcVar12 = &DAT_000067b0;
  }
  else {
    pcVar12 = s_DieIntlv_srequested_00006710 + 0x18;
  }
  FUN_00001ce4(0x40000000,0,s_UMA_is_s_above_4G_000067b8,pcVar12);
  if (local_1f2 == '\x01') {
    uVar10 = iStack_1e4 << 0x14 | local_1e8 >> 0xc;
    uVar3 = local_1e8 << 0x14;
  }
  else {
    uVar3 = 0;
    uVar10 = 0;
  }
  if (local_1f2 == '\x02') {
    pcVar12 = &DAT_00006808;
  }
  else if (local_1f2 == '\0') {
    pcVar12 = &DAT_00006810;
  }
  else {
    pcVar12 = s_specified_000067d0;
  }
  FUN_00001ce4(0x40000000,0,s_UMA_size_is__s__requested_0x_lx__000067dc,pcVar12,uVar3,uVar10);
  if (local_1f0 == 0xffffff) {
    pcVar12 = &DAT_00006804;
  }
  else if (local_1f0 == DAT_00006818) {
    pcVar12 = &DAT_0000681c;
  }
  else if (local_1f0 == DAT_00006824) {
    pcVar12 = s_128MB_00006828;
  }
  else if (local_1f0 == DAT_00006830) {
    pcVar12 = s_256MB_00006834;
  }
  else if (local_1f0 == DAT_0000683c) {
    pcVar12 = s_512MB_00006840;
  }
  else {
    pcVar12 = s_unknown_00006848;
  }
  FUN_00001ce4(0x40000000,0,s_UMA_alignment__s_requested_00006850,pcVar12,uVar3,uVar10);
  if (local_1e0 == '\0') {
    pcVar12 = s_Legacy_000068b0;
  }
  else if (local_1e0 == '\x01') {
    pcVar12 = s_Non_Legacy_000068b8;
  }
  else if (local_1e0 == '\x02') {
    pcVar12 = s_Hybrid_Secure_000068c4;
  }
  else {
    pcVar12 = s_Unknown_0000676c;
  }
  FUN_00001ce4(0x40000000,0,s_UMA_Version_is__s_00006870,pcVar12,uVar3,uVar10);
  if (local_1df == '\0') {
    pcVar12 = s_1920x1080_and_below_000068d4;
  }
  else if (local_1df == '\x01') {
    pcVar12 = s_2560x1600_000068e8;
  }
  else if (local_1df == '\x02') {
    pcVar12 = s_3840x2160_000068f4;
  }
  else {
    pcVar12 = s_Unknown_0000676c;
  }
  FUN_00001ce4(0x40000000,0,s_UMA_Display_Resolution_is__s_00006888,pcVar12,uVar3,uVar10);
  uVar5 = local_200[0];
  if ((local_200[0] & 0xfff) != 0) {
    FUN_00001ce4(0x40000000,0,DAT_000068ac);
    local_200[0] = local_200[0] & 0xf000;
    if (local_200[0] == 0) {
      FUN_00001ce4(0x40000000,0,DAT_000068ac + 0x58);
      local_200[0] = 0x1000;
    }
    FUN_00001ce4(0x40000000,0,s_Modified_bottom_of_IO_to_be_used_00006900,local_200[0]);
    uVar3 = local_2c;
    func_0x0000d614(5,DAT_00006930,uVar5 << 0x10,local_200[0] << 0x10,local_2c);
  }
  uVar5 = FUN_00009970();
  uVar6 = FUN_000094c8();
  if ((uVar5 != 1) || (uVar6 != 1)) {
    FUN_00009000(DAT_00006d1c + 0x8d);
  }
  local_6c = FUN_000098c0();
  local_78 = (uint *)FUN_000098f8();
  if (local_78 != (uint *)0x0 || local_6c != 0) {
    FUN_00009000(DAT_00006d1c + 0x91);
  }
  local_158[1] = 1;
  local_158[2] = 2;
  local_158[0] = 0;
  local_158[3] = 3;
  local_158[4] = 4;
  local_158[5] = 5;
  local_158[0x10] = 0x29;
  local_158[0x11] = 0;
  local_158[0x12] = 1;
  local_158[0xf] = 0xf;
  local_158[0x13] = 2;
  local_158[0x14] = 3;
  local_158[6] = 6;
  local_158[7] = 7;
  local_158[8] = 8;
  local_158[9] = 9;
  local_158[10] = 10;
  local_158[0xb] = 0xb;
  local_158[0xc] = 0xc;
  local_158[0xd] = 0xd;
  local_158[0xe] = 0xe;
  local_158[0x20] = 0xf;
  local_158[0x15] = 4;
  local_158[0x16] = 5;
  uVar18 = 0;
  local_158[0x17] = 6;
  local_158[0x18] = 7;
  local_158[0x19] = 8;
  local_158[0x1a] = 9;
  local_158[0x1b] = 10;
  local_158[0x1c] = 0xb;
  local_158[0x1d] = 0xc;
  local_158[0x1e] = 0xd;
  local_158[0x1f] = 0xe;
  do {
    if (local_1d8[uVar18] != 0) break;
    uVar18 = uVar18 + 1 & 0xffff;
  } while (uVar18 < 0x10);
  local_94 = 0;
  uVar14 = 0;
  uVar17 = 0;
  uVar20 = 0;
  local_80 = 0;
  for (uVar13 = 0; uVar13 < uVar5; uVar13 = uVar13 + 1) {
    local_4c[uVar13 + 1] = 0;
    for (uVar19 = 0; uVar19 < uVar6; uVar19 = uVar19 + 1) {
      uVar16 = 0;
      (&local_38)[uVar13 + uVar19] = 0;
      local_6ac = local_1d8 + uVar13 * 0x10 + uVar19 * 0x10;
      do {
        uVar7 = local_6ac[uVar16];
        uVar20 = uVar20 + uVar7;
        local_4c[uVar13 + 1] = local_4c[uVar13 + 1] + uVar7;
        (&local_38)[uVar13 + uVar19] = (&local_38)[uVar13 + uVar19] + uVar7;
        uVar3 = uVar19;
        uVar10 = uVar16;
        FUN_00001ce4(0x40000000,0,s_RawChannelSize__Socket__d_Die__d_00006d20,uVar13,uVar19,uVar16,
                     uVar7);
        uVar16 = uVar16 + 1;
      } while (uVar16 < 0x10);
    }
  }
  FUN_00001ce4(0x40000000,0,s_SystemTotalSize_0x_08x_0000_00006d5c,uVar20,uVar3,uVar10);
  if (local_200[0] < uVar20) {
    local_94 = CONCAT13((char)(local_200[0] >> 8),(int3)local_94) | 1;
    FUN_00009cd4(3,DAT_00006d7c,&local_94,local_2c,1);
  }
  local_68 = 0;
  local_6ac = (uint *)0x0;
  bVar21 = local_1f8 == 0;
LAB_00006aea:
  if (!bVar21) goto code_r0x00006aec;
  uVar10 = 0;
  FUN_00001ce4(0x40000000,0,s_Channel_interleaving_disabled_on_00006e94,0,0);
  for (uVar3 = 0; uVar3 < local_98; uVar3 = uVar3 + 1) {
    uVar5 = local_1d8[(int)local_6ac * 0x10 + uVar3];
    if (uVar5 != 0) {
      if ((local_6ac == local_78) && (local_6c == 0)) {
        local_b0[uVar17] = uVar14;
        uVar17 = uVar17 + 1;
      }
      uVar10 = 0;
      iVar2 = uVar14 * 2;
      uVar14 = uVar14 + 1;
      local_68 = FUN_000085ac(&local_6a8 + iVar2,local_68,uVar5,local_200[0],0,0,0,
                              (int)local_6ac << 7 | local_158[uVar3 + 0x11],local_1f3);
      if (local_200[0] == local_68) {
        local_68 = 0x10000;
      }
    }
  }
  goto LAB_00006d08;
code_r0x00006aec:
  bVar21 = local_1d8[uVar18] == 0;
  if ((bVar21) || (bVar21 = local_1d8[uVar18 + 1] == 0, bVar21)) goto LAB_00006aea;
  FUN_00001ce4(0x40000000,0,s_Channel_interleaving_enabled_on_s_00006d80,0,0);
  uVar10 = local_1d8[uVar18];
  uVar3 = local_1d8[uVar18 + 1];
  if (uVar3 < uVar10) {
    iVar2 = uVar10 - uVar3;
    local_68 = 0;
  }
  else {
    local_68 = 1;
    iVar2 = uVar3 - uVar10;
    FUN_00001ce4(0x40000000,0,s_interleaving_value_0x_x__LeftOve_00006db4,uVar10,iVar2,1);
    uVar3 = uVar10;
  }
  uVar3 = local_98 * uVar3;
  uVar4 = 0;
  FUN_00001ce4(0x40000000,0,s_Channel_interleaving_total_size_0_00006df0,uVar3,local_6ac,0);
  if ((local_78 == (uint *)0x0) && (local_6c == 0)) {
    FUN_00001ce4(0x40000000,0,s_ValidCsPairs__d_ValidMasterPairs_00006e2c,0,0,uVar4);
    local_b0[0] = 0;
    uVar17 = 1;
  }
  uVar14 = 1;
  uVar10 = local_98;
  uVar5 = FUN_000085ac(&local_6a8,0,uVar3,local_200[0],local_98,0,0,local_158[uVar18 + 0x11],
                       local_1f3);
  if (local_200[0] == uVar5) {
    uVar5 = 0x10000;
  }
  if (iVar2 != 0) {
    FUN_00001ce4(0x40000000,0,s_Channel_interleaving_left_over_s_00006e54,iVar2,local_6ac,0);
    local_64[local_80 * 2] = 1;
    local_64[local_80 * 2 + 1] = uVar3 >> 1;
    local_80 = local_80 + 1;
    if ((local_78 == (uint *)0x0) && (local_6c == 0)) {
      local_b0[uVar17] = 1;
      uVar17 = uVar17 + 1;
      local_34 = (uVar3 >> 0xd) << 0xc | 1;
      FUN_00009cd4(3,DAT_00006d7c + 0xb0,&local_34,local_2c,1);
    }
    uVar10 = 0;
    uVar14 = 2;
    FUN_000085ac(auStack_6a0,uVar5,iVar2,local_200[0],0,0,0,local_158[local_68 + 0x11],local_1f3);
  }
LAB_00006d08:
  FUN_00001ce4(0x40000000,0,s_ValidMasterPairs02_0x_x_00006ec8,uVar14,uVar10);
  for (uVar3 = 0; uVar3 < uVar14; uVar3 = uVar3 + 1) {
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit_Value_0x_x_000072c8,uVar3,
                 *(undefined4 *)(auStack_6a0 + uVar3 * 8 + -4));
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_Value_0x_x_000072ec,uVar3,
                 (&local_6a8)[uVar3 * 2]);
    FUN_00009cd4(3,DAT_0000730c,auStack_6a0 + uVar3 * 8 + -4,local_2c,1);
    FUN_00009cd4(3,DAT_0000730c + -4,&local_6a8 + uVar3 * 2,local_2c,1);
  }
  uVar3 = 0;
  do {
    for (uVar10 = 0; uVar10 < uVar17; uVar10 = uVar10 + 1) {
      uVar5 = local_158[uVar3];
      if (((uVar5 == 0x29) || (((&local_6a8)[local_b0[uVar10] * 2] & 0x3c) != 0)) ||
         ((*(uint *)(auStack_6a0 + local_b0[uVar10] * 8 + -4) & 0x3ff) == uVar5)) {
        FUN_00009b10(local_2c,3,0,0x114,uVar5,auStack_6a0 + local_b0[uVar10] * 8 + -4);
        FUN_00009b10(local_2c,3,0,0x110,local_158[uVar3],&local_6a8 + local_b0[uVar10] * 2);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x11);
  for (uVar3 = 0; uVar3 < uVar14; uVar3 = uVar3 + 1) {
    auStack_244[uVar3 + 1] = 0;
  }
  local_70 = 0;
  local_78 = (uint *)0x3;
  local_7c = 0;
  local_74 = 0;
  local_158[0x21] = 0;
  local_198[0] = 0x80;
  local_198[1] = 2;
  local_198[2] = 1;
  local_198[4] = 0x40;
  local_198[6] = 2;
  local_198[5] = 3;
  local_198[9] = 0;
  local_198[10] = 0;
  uVar3 = 0;
  local_198[0xb] = 0;
  local_198[7] = 0;
  local_198[8] = 0x10;
  local_198[3] = 0;
  do {
    uVar5 = uVar14 - 1;
    uVar10 = 0;
    if (uVar5 != 0) {
      do {
        uVar10 = uVar5;
        if (local_198[uVar3 * 4 + 3] ==
            ((uint)(*(int *)(auStack_6a0 + uVar5 * 8 + -4) << 0x18) >> 0x1d) * 0x20) break;
        uVar5 = uVar5 - 1;
        uVar10 = 0;
      } while (uVar5 != 0);
    }
    puVar11 = &local_6a8 + uVar10 * 2;
    uVar13 = (*(uint *)(auStack_6a0 + uVar10 * 8 + -4) | 0xfff) - auStack_244[uVar10 + 1];
    iVar2 = uVar13 + 1;
    FUN_00001ce4(0x40000000,0,s_RegionTop___d___0x_08x_00007310,uVar3,iVar2);
    uVar6 = local_158[0x21];
    puVar9 = local_198 + uVar3 * 4;
    uVar18 = iVar2 - *puVar9;
    uVar5 = uVar18 & 0xfffffffc;
    local_74 = local_74 & 3 | uVar5;
    local_70 = local_70 & 3 | uVar13 & 0xfffffffc;
    local_158[0x21] = local_158[0x21] | 1;
    for (uVar13 = 0; (uVar13 < local_80 && (local_64[uVar13 * 2] != uVar10)); uVar13 = uVar13 + 1) {
    }
    if (uVar13 < local_80) {
      uVar13 = local_64[uVar13 * 2 + 1];
    }
    else {
      uVar13 = 0;
    }
    uVar17 = (&local_6a8)[uVar10 * 2];
    local_158[0x21] = (uVar6 & 0xff | 1 | (uVar5 - (uVar17 & 0xfffff000)) * 0x100) + uVar13 * 0x100;
    if (((int)(uVar17 << 0x1e) < 0) && (0xf < uVar18 >> 2)) {
      iVar2 = 0x10000 - local_200[0];
    }
    else {
      iVar2 = 0;
    }
    uVar19 = (uVar17 << 0x1a) >> 0x1c;
    uVar6 = local_158[0x21] + iVar2 * -0x100;
    uVar5 = -((int)(uVar17 << 0x17) >> 0x1f);
    uVar18 = (uVar17 << 0x18) >> 0x1e;
    iVar2 = FUN_0000036c(uVar6 >> 8,
                         (*(byte *)(DAT_00007328 + 0xc + uVar19) & 0x7f) *
                         (int)(short)(ushort)*(byte *)(DAT_00007328 + uVar5) *
                         (int)(short)(ushort)*(byte *)(DAT_00007328 + 4 + uVar18));
    uVar13 = (uVar17 << 0x14) >> 0x1d;
    local_158[0x21] = uVar6 & 0xff | iVar2 << 8;
    uVar6 = local_7c & 0x80020001 | 1 | uVar19 << 7;
    uVar5 = uVar6 | uVar13 << 0xe | (uVar18 & 3) << 0xb | (uVar5 & 1) << 0xd;
    local_7c = uVar5 | (local_198[uVar3 * 4 + 1] & 7) << 0x12 | (puVar11[1] & 0x3ff) << 0x15;
    if ((((uVar6 << 0x15) >> 0x1c == 8) && (uVar13 != 0)) && ((uVar5 << 0xf) >> 0x1d != 1)) {
      FUN_00009000(DAT_0000732c);
    }
    FUN_00001ce4(0x40000000,0,s_MagicInfo__d__Size__0x_08x_0000_00007330,uVar3,*puVar9);
    FUN_00001ce4(0x40000000,0,s_MagicInfo__d__ID___d_00007358,uVar3,local_198[uVar3 * 4 + 1]);
    FUN_00001ce4(0x40000000,0,s_MagicInfo__d__MagicIndex___d_00007378,uVar3,local_198[uVar3 * 4 + 2]
                );
    FUN_00001ce4(0x40000000,0,s_MagicInfo__d__TargetDie___d_00007398,uVar3,local_198[uVar3 * 4 + 3])
    ;
    FUN_00001ce4(0x40000000,0,s_MagicBaseAddr__d__BaseAddr__0x_0_000073b8,uVar3,local_74 >> 2,
                 puVar11,(local_74 >> 2) << 0x12,local_74 >> 0x10);
    FUN_00001ce4(0x40000000,0,s_MagicLimitAddr__d__LimitAddr__0x_000073f0,uVar3,local_70 >> 2,
                 puVar11,DAT_000073ec | (local_70 >> 2) << 0x12,local_70 >> 0x10);
    FUN_00001ce4(0x40000000,0,s_MagicOffset__d__HiAddrOffsetEn____00007424,uVar3,local_158[0x21] & 1
                );
    FUN_00001ce4(0x40000000,0,s_MagicOffset__d__HiAddrOffset__0x_0000744c,uVar3,local_158[0x21] >> 8
                 ,puVar11,(local_158[0x21] >> 8) << 8,0);
    FUN_00001ce4(0x40000000,0,s_MagicAddrCfg__d__AddrRngId___d_00007480,uVar3,
                 (local_7c << 0xb) >> 0x1d);
    FUN_00001ce4(0x40000000,0,s_MagicAddrCfg__d__DstFabricID___d_000074a8,uVar3,
                 (local_7c << 1) >> 0x16);
    FUN_00009cd4(3,DAT_000074d0 + local_198[uVar3 * 4 + 2] * 0x10,&local_74,local_2c,1);
    FUN_00009cd4(3,DAT_000078bc + local_198[uVar3 * 4 + 2] * 0x10,&local_70,local_2c,1);
    FUN_00009cd4(3,DAT_000078bc + 4 + local_198[uVar3 * 4 + 2] * 0x10,local_158 + 0x21,local_2c,1);
    FUN_00009cd4(3,DAT_000078bc + -8 + local_198[uVar3 * 4 + 2] * 0x10,&local_7c,local_2c,1);
    uVar3 = uVar3 + 1;
    auStack_244[uVar10 + 1] = auStack_244[uVar10 + 1] + *puVar9;
  } while (uVar3 < local_78);
  uVar3 = uVar10;
  FUN_00001ce4(0x40000000,0,s_MagicRegions___d_MagicMapIndex____000078c0,local_78,uVar10);
  iVar2 = FUN_00005fb0(auStack_30);
  if (iVar2 == 0) {
    FUN_00001ce4(0x40000000,0,s_FrameBufferSize_set_to_0__Non_AP_00007900);
    uVar5 = 0xffff;
    local_b8 = 0;
    puStack_b4 = (uint *)0x0;
  }
  else {
    local_50 = (local_1f3 & 7) << 9 | 1;
    uVar3 = (uint)local_1f8;
    if (uVar3 != 0) {
      uVar3 = FUN_00005a8c(0,local_98);
    }
    local_50 = local_50 & 0xffffffc3 | (uVar3 & 0xf) << 2;
    FUN_00009cd4(3,DAT_000078e4,&local_50,local_2c,1);
    local_4c[0] = ((uint)((int)(&local_6ac)[uVar14 * 2] << 4) >> 0x10) << 0xc;
    iVar2 = FUN_00006120(auStack_30);
    if (iVar2 != 0) {
      local_4c[0] = (local_4c[0] & 0xfffffc00) + 0x10;
    }
    FUN_00009cd4(3,DAT_000078e4 + 4,local_4c,local_2c,1);
    func_0x0000e2ac(local_200,0,uVar20 << 0x10,uVar20 >> 0x10,&local_b8);
    puVar11 = puStack_b4;
    uVar3 = local_b8;
    if (local_b8 == 0 && puStack_b4 == (uint *)0x0) {
      uVar5 = 0xffff;
      uVar6 = uVar10;
    }
    else {
      local_200[uVar10 - 0xf] = auStack_244[uVar10 + 1];
      auStack_244[uVar10 + 1] = uVar3 >> 0x10 | (int)puVar11 << 0x10;
      uVar6 = uVar10 + 1;
      uVar5 = uVar10;
    }
    FUN_00001ce4(0x40000000,0,s_FrameBufferSize__0x_lx_000078e8);
    uVar10 = uVar6;
  }
  FUN_00001ce4(0x40000000,0,s_ValidMasterPairs___d_00007924,uVar14,uVar3,puVar11);
  for (uVar6 = 0; uVar6 < uVar14; uVar6 = uVar6 + 1) {
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_AddrRngVal____00007940,uVar6,
                 (&local_6a8)[uVar6 * 2] & 1,puVar11);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_LgcyMmioHole_0000796c,uVar6,
                 ((&local_6a8)[uVar6 * 2] << 0x1e) >> 0x1f);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_IntLvNumChan_00007998,uVar6,
                 ((&local_6a8)[uVar6 * 2] << 0x1a) >> 0x1c);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_IntLvAddrSel_000079c4,uVar6,
                 ((&local_6a8)[uVar6 * 2] << 0x14) >> 0x1d);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase_DramBaseAddr_000079f0,uVar6,
                 (&local_6a8)[uVar6 * 2] >> 0xc);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapBase__0x_08x_00007a28,uVar6,(&local_6a8)[uVar6 * 2]);
    iVar2 = uVar6 * 8;
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit_DstFabricID_00007a48,uVar6,
                 *(uint *)(auStack_6a0 + iVar2 + -4) & 0x3ff);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit_IntLvNumSoc_00007a74,uVar6,
                 ((&local_6a8)[uVar6 * 2] << 0x17) >> 0x1f);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit_IntLvNumDie_00007aa0,uVar6,
                 ((&local_6a8)[uVar6 * 2] << 0x18) >> 0x1e);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit_DramLimitAd_00007acc,uVar6,
                 *(uint *)(auStack_6a0 + iVar2 + -4) >> 0xc);
    uVar3 = *(uint *)(auStack_6a0 + iVar2 + -4);
    FUN_00001ce4(0x40000000,0,s_DramMap__d__MapLimit__0x_08x_00007b04,uVar6,uVar3);
  }
  iVar2 = 0;
  for (uVar6 = 0; uVar6 < uVar14; uVar6 = uVar6 + 1) {
    iVar8 = auStack_244[uVar6 + 1];
    if (iVar8 != 0) {
      iVar8 = 1;
    }
    iVar2 = iVar2 + iVar8;
  }
  iVar2 = (uint)(local_b8 != 0 || puStack_b4 != (uint *)0x0) +
          (iVar2 - ((int)(local_94 << 0x1f) >> 0x1f));
  uVar18 = iVar2 + 1;
  auStack_244[uVar18] = 0x100;
  for (uVar6 = 0; uVar6 < uVar18; uVar6 = uVar6 + 1) {
    uVar3 = auStack_244[uVar6 + 1];
    FUN_00001ce4(0x40000000,0,s_DramMapHoles__d___0x_08x_0000_00007b24,uVar6,uVar3);
  }
  FUN_00001ce4(0x40000000,0,s_SystemHoleCount___d_00007b44,uVar18,uVar3);
  if (uVar18 < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 * 0x18;
  }
  iVar2 = iVar2 + 0x28;
  local_b0[2] = iVar2;
  FUN_00001ce4(0x40000000,0,s_AMD_MEM_MAP_HANDLE__RequestBuffe_00007b5c,iVar2,iVar2);
  local_b0[3] = 0xa03a;
  local_a0 = 2;
  iVar8 = FUN_00008da0(local_b0 + 2,local_2c);
  if (iVar8 == 0) {
    FUN_00001ce4(0x40000000,0,s_ValidMasterPairs___d_00007924,uVar14,iVar2);
    uVar3 = ((uint)(&local_6ac)[uVar14 * 2] >> 0xc) << 0x1c | 0xfffffff;
    uVar6 = uVar3 + 1;
    uVar3 = ((uint)(&local_6ac)[uVar14 * 2] >> 0x10) + (uint)(0xfffffffe < uVar3);
    *local_9c = uVar6;
    local_9c[1] = uVar3;
    local_9c[2] = uVar18;
    FUN_00001ce4(0x40000000,0,s_SystemMap__TopOfSystemMemory_0x__00007b90);
    FUN_00001ce4(0x40000000,0,s_SystemMap__NumberOfHoles__d_00007bb4,local_9c[2],uVar6,uVar3);
    bVar21 = (local_94 & 1) != 0;
    if (bVar21) {
      local_9c[8] = 1;
      local_9c[4] = local_94 & 0xff000000;
      local_9c[5] = 0;
      uVar6 = 0x100 - (local_94 >> 0x18);
      local_9c[6] = (local_94 >> 0x18) * -0x1000000;
      local_9c[7] = ((int)uVar6 >> 0x1f) << 0x18 | uVar6 >> 8;
      FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,0,&DAT_00007bd4,uVar3);
      FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,0,local_9c[4],
                   local_9c[5]);
      uVar3 = local_9c[7];
      FUN_00001ce4(0x40000000,0,0x8000,0,local_9c[6],uVar3);
    }
    uVar6 = (uint)bVar21;
    for (uVar13 = 0; uVar13 < uVar18; uVar13 = uVar13 + 1) {
      if ((auStack_244[uVar13 + 1] != 0) || (uVar5 == 0xffff)) {
        puVar11 = (uint *)(uVar5 - 0xffff);
        if (puVar11 == (uint *)0x0) {
          bVar21 = auStack_244[uVar13 + 1] == 0x100;
          puVar11 = auStack_244 + 1;
LAB_00007c3c:
          if (bVar21) {
            local_6ac = &local_88;
            puVar9 = local_78;
            if (local_78 != (uint *)0x0) {
              puVar9 = (uint *)(puVar11[uVar10] << 0x10);
            }
            func_0x0000e0a0(local_200,local_200[0] << 0x10,*local_9c,local_9c[1],
                            local_200[0] << 0x10,puVar9,local_b8,puStack_b4,&local_90);
            local_9c[uVar6 * 6 + 8] = 3;
            local_9c[uVar6 * 6 + 4] = local_88;
            local_9c[uVar6 * 6 + 5] = uStack_84;
            local_9c[uVar6 * 6 + 6] = 0x1000000;
            local_9c[uVar6 * 6 + 7] = 0;
            FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6,
                         s_MP3MemReserved_00008028);
            FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6,
                         local_9c[uVar6 * 6 + 4],local_9c[uVar6 * 6 + 5]);
            uVar3 = local_9c[uVar6 * 6 + 7];
            FUN_00001ce4(0x40000000,0,0x8000,uVar6,local_9c[uVar6 * 6 + 6],uVar3);
            uVar14 = local_9c[uVar6 * 6 + 4];
            FUN_00001ce4(0x40000000,0,s_MP3BaseAddrHi__0x_08x_00008038,local_9c[uVar6 * 6 + 5]);
            pcVar12 = s_MP3BaseAddrLo__0x_08x_00008050;
            uVar17 = uVar14;
            goto LAB_0000826a;
          }
        }
        else {
          bVar21 = uVar13 == uVar5;
          if (!bVar21) goto LAB_00007c3c;
          local_9c[uVar6 * 6 + 8] = 0;
          local_6ac = &local_88;
          puVar11 = local_78;
          if (local_78 != (uint *)0x0) {
            puVar11 = (uint *)(auStack_244[uVar10 + 1] << 0x10);
          }
          func_0x0000e0a0(local_200,local_200[0] << 0x10,*local_9c,local_9c[1],local_200[0] << 0x10,
                          puVar11,local_b8,puStack_b4,&local_90);
          local_9c[uVar6 * 6 + 6] = local_b8;
          local_9c[uVar6 * 6 + 7] = (uint)puStack_b4;
          local_9c[uVar6 * 6 + 4] = local_90;
          local_9c[uVar6 * 6 + 5] = uStack_8c;
          FUN_00001ce4(0x40000000,0,s_FrameBufferBase__0x_lx_00008068);
          uVar14 = local_9c[uVar6 * 6 + 5];
          FUN_00001ce4(0x40000000,0,s_UMA_Size_Calc___SystemMap_>HoleI_00008080);
          uVar3 = local_9c[uVar6 * 6 + 8];
          if (uVar3 == 0) {
            pcVar12 = &DAT_000083c0;
          }
          else if (uVar3 == 1) {
            pcVar12 = &DAT_00007bd4;
          }
          else if (uVar3 == 2) {
            pcVar12 = s_PrivilegedDRAM_000083b0;
          }
          else if (uVar3 == 3) {
            pcVar12 = s_MP3MemReserved_00008028;
          }
          else {
            pcVar12 = s_Unknown_MemoryHoleTypes_000080c0;
          }
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6,pcVar12,uVar14
                      );
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6,
                       local_9c[uVar6 * 6 + 4],local_9c[uVar6 * 6 + 5]);
          FUN_00001ce4(0x40000000,0,0x8000,uVar6,local_9c[uVar6 * 6 + 6],local_9c[uVar6 * 6 + 7]);
          local_4c[4] = local_9c[uVar6 * 6 + 6] >> 0x14 | local_9c[uVar6 * 6 + 7] << 0xc;
          local_4c[3] = local_9c[uVar6 * 6 + 4] >> 0x18 | local_9c[uVar6 * 6 + 5] << 8;
          local_4c[2] = 0xf400;
          FUN_00009cd4(3,0x378c,local_4c + 4,local_2c,1);
          FUN_00001ce4(0x400,0,s_RCC_CONFIG_MEMSIZE_is__x_000080d8,local_4c[4]);
          FUN_00009cd4(3,DAT_000080f4,local_4c + 3,local_2c,1);
          FUN_00001ce4(0x400,0,s_MMMC_VM_FB_OFFSET_is__x_000080f8,local_4c[3]);
          FUN_00009cd4(3,DAT_000080f4 + 0x54,local_4c + 2,local_2c,1);
          FUN_00001ce4(0x400,0,s_MMMC_VM_FB_LOCATION_BASE_is__x_00008114,local_4c[2]);
          uVar14 = uVar6 + 1;
          local_9c[uVar14 * 6 + 8] = 3;
          local_9c[uVar14 * 6 + 4] = local_88;
          local_9c[uVar14 * 6 + 5] = uStack_84;
          local_9c[uVar14 * 6 + 6] = 0x1000000;
          local_9c[uVar14 * 6 + 7] = 0;
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar14,
                       s_MP3MemReserved_00008028);
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar14,
                       local_9c[uVar14 * 6 + 4],local_9c[uVar14 * 6 + 5]);
          uVar3 = local_9c[uVar14 * 6 + 7];
          FUN_00001ce4(0x40000000,0,0x8000,uVar14,local_9c[uVar14 * 6 + 6],uVar3);
          uVar17 = local_9c[uVar14 * 6 + 4];
          FUN_00001ce4(0x40000000,0,s_MP3BaseAddrHi__0x_08x_00008038,local_9c[uVar14 * 6 + 5]);
          FUN_00001ce4(0x40000000,0,s_MP3BaseAddrLo__0x_08x_00008050,uVar17);
          bVar21 = local_9c[uVar14 * 6 + 5] != 0;
          do {
            if (bVar21) goto LAB_00008274;
            bVar21 = uVar20 <= local_200[0];
          } while (bVar21);
          FUN_00001ce4(0x40000000,0,s_Swap_UMA_and_MMIO_entries_00008134);
          puVar15 = local_9c + uVar6 * 6;
          puVar11 = puVar15 + 4;
          FUN_0000013c(auStack_d0,puVar11,0x18);
          puVar9 = puVar15 + -2;
          FUN_0000013c(puVar11,puVar9,0x18);
          FUN_0000013c(puVar9,auStack_d0,0x18);
          uVar3 = puVar15[2];
          if (uVar3 == 0) {
            pcVar12 = &DAT_000083c0;
          }
          else if (uVar3 == 1) {
            pcVar12 = &DAT_00007bd4;
          }
          else if (uVar3 == 2) {
            pcVar12 = s_PrivilegedDRAM_000083b0;
          }
          else if (uVar3 == 3) {
            pcVar12 = s_MP3MemReserved_00008028;
          }
          else {
            pcVar12 = s_Unknown_MemoryHoleTypes_000080c0;
          }
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6 - 1,pcVar12);
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6 - 1,
                       puVar15[-2],puVar15[-1]);
          uVar17 = puVar15[1];
          FUN_00001ce4(0x40000000,0,0x8000,uVar6 - 1,*puVar15,uVar17);
          uVar3 = puVar15[8];
          if (uVar3 == 0) {
            pcVar12 = &DAT_000083c0;
          }
          else if (uVar3 == 1) {
            pcVar12 = &DAT_00007bd4;
          }
          else if (uVar3 == 2) {
            pcVar12 = s_PrivilegedDRAM_000083b0;
          }
          else if (uVar3 == 3) {
            pcVar12 = s_MP3MemReserved_00008028;
          }
          else {
            pcVar12 = s_Unknown_MemoryHoleTypes_000080c0;
          }
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6,pcVar12,uVar17
                      );
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6,puVar15[4],
                       puVar15[5]);
          FUN_00001ce4(0x40000000,0,0x8000,uVar6,puVar15[6],puVar15[7]);
          FUN_00001ce4(0x40000000,0,s_Swap_MP3_and_MMIO_entries_00008394);
          puVar15 = local_9c + uVar14 * 6;
          puVar11 = puVar15 + 4;
          FUN_0000013c(auStack_d0,puVar11,0x18);
          puVar9 = puVar15 + -2;
          FUN_0000013c(puVar11,puVar9,0x18);
          FUN_0000013c(puVar9,auStack_d0,0x18);
          uVar3 = puVar15[2];
          if (uVar3 == 0) {
            pcVar12 = &DAT_000083c0;
          }
          else if (uVar3 == 1) {
            pcVar12 = &DAT_00007bd4;
          }
          else if (uVar3 == 2) {
            pcVar12 = s_PrivilegedDRAM_000083b0;
          }
          else if (uVar3 == 3) {
            pcVar12 = s_MP3MemReserved_00008028;
          }
          else {
            pcVar12 = s_Unknown_MemoryHoleTypes_000080c0;
          }
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6,pcVar12);
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6,puVar15[-2],
                       puVar15[-1]);
          uVar17 = puVar15[1];
          FUN_00001ce4(0x40000000,0,0x8000,uVar6,*puVar15,uVar17);
          uVar3 = puVar15[8];
          if (uVar3 == 0) {
            pcVar12 = &DAT_000083c0;
          }
          else if (uVar3 == 1) {
            pcVar12 = &DAT_00007bd4;
          }
          else if (uVar3 == 2) {
            pcVar12 = s_PrivilegedDRAM_000083b0;
          }
          else if (uVar3 == 3) {
            pcVar12 = s_MP3MemReserved_00008028;
          }
          else {
            pcVar12 = s_Unknown_MemoryHoleTypes_000080c0;
          }
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar14,pcVar12,
                       uVar17);
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar14,puVar15[4],
                       puVar15[5]);
          uVar17 = puVar15[6];
          uVar3 = puVar15[7];
          pcVar12 = (char *)0x8000;
          uVar6 = uVar14;
LAB_0000826a:
          FUN_00001ce4(0x40000000,0,pcVar12,uVar14,uVar17,uVar3);
          uVar14 = uVar6;
LAB_00008274:
          uVar6 = uVar14 + 1;
        }
        if (uVar13 == uVar10) {
          puVar11 = local_9c + uVar6 * 6;
          puVar11[8] = 2;
          uVar14 = auStack_244[uVar13 + 1];
          uVar19 = *local_9c;
          uVar17 = local_9c[1];
          puVar11[4] = uVar19 + uVar14 * -0x10000;
          puVar11[5] = (uVar17 - (uVar14 >> 0x10)) - (uint)(uVar19 < uVar14 * 0x10000);
          uVar14 = auStack_244[uVar13 + 1];
          puVar11[6] = uVar14 << 0x10;
          puVar11[7] = uVar14 >> 0x10;
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Type____00007fb4,uVar6,
                       s_PrivilegedDRAM_000083b0,uVar3);
          FUN_00001ce4(0x40000000,0,s_SystemMap__HoleInfo__d___Base__0_00007fd8,uVar6,puVar11[4],
                       puVar11[5]);
          uVar3 = puVar11[7];
          FUN_00001ce4(0x40000000,0,0x8000,uVar6,puVar11[6]);
          uVar6 = uVar6 + 1;
        }
      }
    }
  }
  return;
}



/* FUN_000083c4 @ 000083c4 */

void FUN_000083c4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_94 [4];
  undefined local_84;
  undefined local_80;
  undefined local_7c;
  undefined local_78;
  undefined4 local_74;
  undefined auStack_70 [4];
  uint local_6c;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  uVar3 = FUN_000094c8();
  local_40 = FUN_00009970();
  uVar4 = FUN_00009934();
  if (local_40 * uVar3 - uVar4 != 0) {
    FUN_00009000(DAT_00008544);
  }
  if (uVar4 == 0) {
    FUN_00009000(0xdf000000);
  }
  FUN_00005804(auStack_70);
  uVar5 = FUN_0000036c(local_6c >> 0x14,uVar4);
  if ((uVar5 == 0) || (0x100 < uVar5)) {
    FUN_00009000(DAT_00008548);
  }
  local_38 = FUN_000098c0();
  local_34 = FUN_000098f8();
  iVar6 = 0;
  do {
    local_94[iVar6] = 0x29;
    if (iVar6 != 0) {
      local_94[iVar6] = 0x28;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 == 0);
  iVar6 = 0;
  local_74 = 3;
  for (uVar8 = 0; uVar8 < local_40; uVar8 = uVar8 + 1) {
    for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
      cVar1 = (char)iVar6 * (char)uVar5;
      if (uVar4 == iVar6 + 1U) {
        cVar2 = -1;
      }
      else {
        cVar2 = cVar1 + (char)uVar5 + -1;
      }
      local_74 = CONCAT13(cVar2,CONCAT12(cVar1,(undefined2)local_74));
      local_74 = local_74 & 0xffffc00f | ((uVar8 << 9 | uVar7 << 8) & 0x3ff | 0x28) << 4;
      FUN_00009cd4(3,DAT_0000854c + iVar6 * 4,&local_74,local_2c,1);
      local_94[iVar6] = uVar8 << 7 | uVar7 << 6 | 0x29;
      iVar6 = iVar6 + 1;
      if ((uVar8 == local_34) && (uVar7 == local_38)) {
        local_3c = (local_74 << 8) >> 0x18;
        FUN_00009cd4(3,DAT_0000854c + -0x1c,&local_3c,local_2c,1);
      }
    }
  }
  if (1 < uVar4) {
    local_48 = (undefined)local_94[0];
    local_47 = (undefined)local_94[1];
    local_46 = (undefined)local_94[2];
    local_45 = (undefined)local_94[3];
    FUN_00009cd4(3,DAT_0000854c + -8,&local_48,local_2c,1);
    if (4 < uVar4) {
      local_44 = local_84;
      local_43 = local_80;
      local_42 = local_7c;
      local_41 = local_78;
      FUN_00009cd4(3,DAT_0000854c + -4,&local_44,local_2c,1);
    }
  }
  return;
}



/* FUN_00008550 @ 00008550 */

void FUN_00008550(undefined4 param_1,undefined4 param_2)

{
  FUN_00001ce4(0x40000000,0,s_Begin_DF_Pie_init_0000857c);
  func_0x0000dd38(param_1,param_2,DAT_00008590);
  FUN_00001ce4(0x40000000,0,s_DF_Pie_init_complete_00008594);
  return;
}



/* FUN_000085ac @ 000085ac */

uint FUN_000085ac(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = param_3;
  uVar4 = param_4;
  iVar5 = param_5;
  uVar6 = param_8;
  uVar7 = param_9;
  FUN_00001ce4(0x40000000,0,DAT_00008698,param_2,param_3,param_4,param_5,param_8,param_9);
  *param_1 = param_2 & 0xfffff000 | 1;
  uVar2 = param_3 + param_2;
  if ((param_2 < param_4) && (param_4 < uVar2)) {
    *param_1 = param_2 & 0xfffff000 | 3;
    uVar2 = uVar2 + (0x10000 - param_4);
  }
  if (param_5 != 0) {
    uVar1 = FUN_00005a8c(0,param_5);
    *param_1 = *param_1 & 0xffffffc3 | (uVar1 & 0xf) << 2;
  }
  if ((param_5 != 0 || param_6 != 0) || param_7 != 0) {
    *param_1 = *param_1 & 0xfffff1ff | (param_9 & 7) << 9;
  }
  param_1[1] = param_8 & 0x3ff | uVar2 - 1 & 0xfffff000;
  if (param_7 != 0) {
    uVar1 = FUN_00005a8c(2,param_7);
    *param_1 = *param_1 & 0xfffffeff | (uVar1 & 1) << 8;
  }
  if (param_6 != 0) {
    uVar1 = FUN_00005a8c(1,param_6);
    *param_1 = *param_1 & 0xffffff3f | (uVar1 & 3) << 6;
  }
  FUN_00001ce4(0x40000000,0,s_MapBaseValue_0x_x_0000869c,*param_1 >> 0xc,iVar3,uVar4,iVar5,uVar6,
               uVar7);
  FUN_00001ce4(0x40000000,0,s_DramLimitAddr_0x_x_000086b0,param_1[1] >> 0xc);
  FUN_00001ce4(0x40000000,0,s_RawLimit_0x_x_000086c4,uVar2);
  return uVar2;
}



/* FUN_000086d4 @ 000086d4 */

void FUN_000086d4(undefined4 param_1,undefined4 param_2)

{
  FUN_00001ce4(0x40000000,0,s_Begin_DF_TCDX_init_00008700);
  func_0x0000dd38(param_1,param_2,DAT_00008714);
  FUN_00001ce4(0x40000000,0,s_DF_TCDX_init_complete_00008718);
  return;
}



/* FUN_00008730 @ 00008730 */

void FUN_00008730(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00008748;
  *DAT_00008748 = DAT_00008744;
  puVar1[1] = DAT_0000874c;
  puVar1[2] = DAT_00008750;
  puVar1[3] = DAT_00008754;
  return;
}



/* FUN_00008b14 @ 00008b14 */

void FUN_00008b14(undefined4 *param_1)

{
  FUN_00008730();
  *param_1 = DAT_00008b28;
  param_1[1] = 0;
  return;
}



/* FUN_00008b4c @ 00008b4c */

short FUN_00008b4c(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    sVar1 = sVar1 + (ushort)*(byte *)(param_1 + uVar2);
  }
  return sVar1;
}



/* FUN_00008b64 @ 00008b64 */

void FUN_00008b64(byte *param_1,uint *param_2,int *param_3,int *param_4)

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
LAB_00008bfc:
      iVar5 = 0;
      pbVar2 = param_1;
      do {
        param_1 = pbVar2;
        iVar5 = iVar5 * 10 + -0x30 + (uint)*param_1;
        pbVar2 = param_1 + 1;
      } while (param_1[1] - 0x30 < 10);
LAB_00008c1a:
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
          goto LAB_00008bde;
        }
      }
      goto LAB_00008bfc;
    }
    if (bVar1 != 0x2d) {
      if (0x2d < bVar1) {
        if (bVar1 != 0x30) {
          if ((bVar1 != 0x31) && (bVar1 != 0x32)) {
            return;
          }
          goto LAB_00008bfc;
        }
        uVar3 = *param_2 | 0x20;
        goto LAB_00008bde;
      }
      if (bVar1 == 0x20) {
        uVar3 = *param_2 | 4;
        goto LAB_00008bde;
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
        goto LAB_00008bde;
      }
      piVar4 = (int *)*param_4;
      *param_4 = (int)(piVar4 + 1);
      iVar5 = *piVar4;
      goto LAB_00008c1a;
    }
    uVar3 = *param_2 | 1;
LAB_00008bde:
    *param_2 = uVar3;
  } while( true );
}



/* FUN_00008ccc @ 00008ccc */

uint FUN_00008ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_c;
  
  local_c = param_4;
  FUN_00009c08(3,0x1c600,&local_c,0,param_3);
  FUN_00001ce4(0x40000000,0,s_DieType___d_SysConfig_0x_0x_00008cf8,(uint)(local_c << 7) >> 0x1e,
               local_c);
  return (uint)(local_c << 7) >> 0x1e;
}



/* FUN_00008d18 @ 00008d18 */

undefined4 FUN_00008d18(undefined2 *param_1)

{
  *param_1 = 2;
  param_1[1] = 1;
  return 1;
}



/* FUN_00008d24 @ 00008d24 */

undefined8 FUN_00008d24(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ~(param_3 - 1U);
  uVar1 = ~(param_4 + -1 + (uint)(param_3 != 0));
  if (param_1 != DAT_00008d7c) {
    if ((int)DAT_00008d7c < (int)param_1) {
      if (param_1 - DAT_00008d7c != 0x700) {
        if (param_1 - DAT_00008d7c == 0xeff) {
          uVar2 = 0xffffffff;
          uVar1 = 0xff;
        }
        goto LAB_00008d66;
      }
    }
    else if ((param_1 + DAT_00008d80 != 0) && (param_1 + DAT_00008d80 != 0x1000)) goto LAB_00008d66;
  }
  uVar2 = param_1 << 0x10;
  uVar1 = param_1 >> 0x10;
LAB_00008d66:
  FUN_00001ce4(0x40000000,0,s_GetUmaAlignmentMask__0x_lx_00008d84,param_4,uVar2,uVar1);
  return CONCAT44(uVar1,uVar2);
}



/* FUN_00008da0 @ 00008da0 */

undefined4 FUN_00008da0(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
  
  piVar1 = DAT_00008ec8;
  param_1[3] = 0;
  iVar2 = DAT_00008ecc;
  iVar12 = 4 - (*param_1 & 3);
  *param_1 = *param_1 + iVar12;
  if (*piVar1 == iVar2) {
    uVar5 = piVar1[2];
    puVar10 = (uint *)(piVar1 + 4);
    uVar4 = param_4;
    if (uVar5 == 0xffffffff) {
LAB_00008e08:
      uVar5 = piVar1[3];
      while (puVar9 = (uint *)((int)piVar1 + uVar5), uVar5 != 0xffffffff) {
        uVar11 = -(int)puVar9 & 0xf;
        uVar6 = *param_1 + uVar11;
        *param_1 = uVar6;
        if (uVar6 <= puVar9[1]) {
          if (uVar5 != 0xffffffff) {
            FUN_00005688(param_2,uVar5,param_3,uVar4,param_4);
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
              FUN_0000907c(param_2);
            }
            *puVar9 = param_1[1];
            cVar3 = *(char *)(param_1 + 2);
            if ((cVar3 != '\x03') && (cVar3 != '\x04')) {
              cVar3 = '\x02';
            }
            *(char *)(puVar9 + 2) = cVar3;
            puVar9[3] = 0xffffffff;
            *(char *)((int)puVar9 + 9) = (char)uVar11;
            thunk_FUN_000093ea(puVar9 + 4,0,puVar9[1],param_2);
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
      uVar8 = DAT_00008ed8;
    }
    else {
      param_3 = param_1[1];
      do {
        puVar10 = (uint *)(uVar5 + (int)piVar1);
        uVar5 = puVar10[3];
        uVar8 = DAT_00008ed4;
        if (uVar5 == 0xffffffff) {
          uVar4 = 0;
          if (*puVar10 != param_3) goto LAB_00008e08;
          break;
        }
      } while (*puVar10 != param_3);
    }
    func_0x0000d614(2,uVar8,param_3,0,param_2);
    uVar4 = 2;
  }
  else {
    FUN_00009000(DAT_00008ed0);
    uVar4 = 7;
  }
  return uVar4;
}



/* FUN_00008edc @ 00008edc */

undefined4 FUN_00008edc(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = DAT_00008f54;
  piVar2 = DAT_00008f50;
  if (*DAT_00008f50 != DAT_00008f54) {
    FUN_00009000(DAT_00008f58);
    return 7;
  }
  iVar5 = DAT_00008f50[2];
  if (iVar5 != -1) {
    do {
      piVar4 = (int *)((int)DAT_00008f50 + iVar5);
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
    FUN_00009000(DAT_00008f58 + 0x4d);
  }
  else {
    func_0x0000d614(2,DAT_00008f5c,*param_1,0,param_2);
  }
  return 2;
}



/* FUN_00008f60 @ 00008f60 */

void FUN_00008f60(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined auStack_2c [4];
  uint local_28;
  int local_18;
  uint local_10;
  
  local_10 = param_1 | 0xea000000;
  if ((param_1 != 0xe0e0) && (param_1 != 0xe0e1)) {
    FUN_00001ce4(0,0x10000000,s__TP__04x__00008fe4,param_1 & 0xffff);
  }
  FUN_0000948c(auStack_2c);
  puVar1 = DAT_00008ff0;
  if ((1 < local_28) && (local_18 == 0)) {
    uVar2 = *DAT_00008ff0;
    if (uVar2 < 0x181) {
      DAT_00008ff0[uVar2 + 2] = local_10;
      *puVar1 = uVar2 + 1;
    }
    else if (uVar2 == 0x181) {
      *DAT_00008ff0 = 0;
    }
    else {
      FUN_00009000(DAT_00008ff4);
    }
  }
  software_interrupt(10);
  FUN_00009cd4(3,DAT_00008ffc,&local_10,param_2,0);
  return;
}



/* FUN_00009000 @ 00009000 */

undefined4 FUN_00009000(uint param_1)

{
  undefined2 uVar1;
  undefined4 local_24;
  char *local_20;
  uint local_1c;
  uint local_18;
  
  local_24 = 0;
  local_20 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_00001ce4(0,0x40000000,s_ASSERT_on_File__x__Line__x__00009050,param_1 >> 0x10,param_1 & 0xffff)
  ;
  local_24._2_2_ = 9;
  local_20 = s__MEM_CONF__Override_Memory_Timin_00002ff0 + 0x19;
  local_1c = param_1 >> 0x10;
  local_18 = param_1 & 0xffff;
  uVar1 = FUN_000007dc();
  local_24 = CONCAT22(local_24._2_2_,uVar1);
  FUN_000008fc(&local_24,1);
  FUN_00009070(param_1);
  return 1;
}



/* FUN_00009070 @ 00009070 */

/* WARNING: Removing unreachable block (ram,0x00009078) */

void FUN_00009070(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



/* FUN_0000907c @ 0000907c */

void FUN_0000907c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_000090b0;
  iVar2 = *(int *)(DAT_000090b0 + 0xc);
  iVar4 = -1;
  while ((iVar3 = iVar2, iVar3 != -1 &&
         (*(uint *)(DAT_000090b0 + iVar3 + 4) < *(uint *)(DAT_000090b0 + param_2 + 4)))) {
    iVar4 = iVar3;
    iVar2 = *(int *)(DAT_000090b0 + iVar3 + 0xc);
  }
  *(int *)(DAT_000090b0 + param_2 + 0xc) = iVar3;
  if (iVar4 != -1) {
    *(int *)(iVar1 + iVar4 + 0xc) = param_2;
    return;
  }
  *(int *)(iVar1 + 0xc) = param_2;
  return;
}



/* FUN_000090b4 @ 000090b4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000090b4(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_58 [40];
  undefined auStack_30 [24];
  int local_18;
  
  iVar1 = *DAT_000090f0;
  local_18 = iVar1;
  FUN_0000013c(auStack_30,s__BUFFER_OVERFLOW__000090f4,0x18);
  thunk_FUN_000093de(param_1 + param_2 + -0x15,auStack_30,0x15,auStack_58);
  if (local_18 != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* FUN_0000910c @ 0000910c */

uint FUN_0000910c(undefined2 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_8 [2];
  
  local_8[0] = param_4 & 0xffffff00;
  FUN_0000932c(1,param_1,local_8,0);
  return local_8[0] & 0xff;
}



/* FUN_00009126 @ 00009126 */

undefined4 FUN_00009126(uint param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_00009380(1,param_1 & 0xffff,&uStack_c,0,param_1);
  return 0;
}



/* FUN_00009138 @ 00009138 */

undefined4 FUN_00009138(void)

{
  return 0;
}



/* FUN_0000913c @ 0000913c */

undefined4 FUN_0000913c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined local_10;
  undefined3 uStack_f;
  uint local_c;
  
  local_c = param_4 & 0xffffff00;
  uStack_f = (undefined3)((uint)param_3 >> 8);
  local_10 = 0x55;
  FUN_00009380(1,&LAB_0000164e,&local_10,0);
  local_10 = 0xd;
  FUN_00009380(1,&LAB_0000164e,&local_10,0);
  FUN_0000932c(1,&LAB_0000164e_1,&local_c,0);
  _local_10 = CONCAT31(uStack_f,0xaa);
  FUN_00009380(1,&LAB_0000164e,&local_10,0);
  if ((char)local_c != -0x7e) {
    return 0;
  }
  return 1;
}



/* FUN_0000919a @ 0000919a */

undefined4 FUN_0000919a(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_00009126(0x2e,0x87);
  FUN_00009126(0x2e,1);
  FUN_00009126(0x2e,0x55);
  FUN_00009126(0x2e,0x55);
  FUN_00009126(0x2e,0x20);
  iVar1 = FUN_0000910c(0x2f);
  FUN_00009126(0x2e,0x21);
  uVar2 = FUN_0000910c(0x2f);
  FUN_00009126(0x2e,2);
  FUN_00009126(0x2f,2);
  if ((iVar1 << 8 | uVar2) == 0x8772) {
    return 1;
  }
  return 0;
}



/* FUN_00009200 @ 00009200 */

undefined4 FUN_00009200(void)

{
  short sVar1;
  undefined uVar2;
  undefined4 in_r3;
  undefined local_10;
  undefined3 uStack_f;
  
  uStack_f = (undefined3)((uint)in_r3 >> 8);
  local_10 = 0x87;
  FUN_00009380(1,0x2e,&local_10,0);
  local_10 = 0x87;
  FUN_00009380(1,0x2e,&local_10,0);
  local_10 = 0x20;
  FUN_00009380(1,0x2e,&local_10,0);
  FUN_0000932c(1,0x2f,&local_10,0);
  uVar2 = local_10;
  local_10 = 0x21;
  FUN_00009380(1,0x2e,&local_10,0);
  FUN_0000932c(1,0x2f,&local_10,0);
  sVar1 = CONCAT11(uVar2,local_10);
  _local_10 = CONCAT31(uStack_f,0xaa);
  FUN_00009380(1,0x2e,&local_10,0);
  if (sVar1 == -0x2bbf) {
    return 1;
  }
  return 0;
}



/* FUN_0000928e @ 0000928e */

undefined * FUN_0000928e(void)

{
  undefined local_18 [24];
  
  software_interrupt(0x26);
  return local_18;
}



/* FUN_000092c8 @ 000092c8 */

undefined * FUN_000092c8(void)

{
  undefined local_18 [24];
  
  software_interrupt(0x27);
  return local_18;
}



/* FUN_00009304 @ 00009304 */

undefined8 FUN_00009304(int param_1,int param_2)

{
  if (param_2 == 0x80) {
    param_2 = 0xfffd;
    if (param_1 == 3) {
      software_interrupt(10);
      return CONCAT44(0xfffd,DAT_00009328);
    }
    software_interrupt(10);
    param_1 = DAT_00009328;
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_0000932c @ 0000932c */

undefined * FUN_0000932c(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009364;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009364;
    local_18[2] = param_3;
    FUN_00009000(DAT_0000937c);
  }
LAB_00009364:
  software_interrupt(0x26);
  return (undefined *)local_18;
}



/* FUN_00009380 @ 00009380 */

undefined * FUN_00009380(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_000093b8;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_000093b8;
    local_18[2] = param_3;
    FUN_00009000(DAT_000093d0);
  }
LAB_000093b8:
  software_interrupt(0x27);
  return (undefined *)local_18;
}



/* FUN_000093de @ 000093de */

void FUN_000093de(undefined *param_1,undefined *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* FUN_000093ea @ 000093ea */

void FUN_000093ea(undefined *param_1,undefined param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* FUN_000093f0 @ 000093f0 */

undefined *
FUN_000093f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009422;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009422;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00009000(DAT_00009438);
  }
LAB_00009422:
  software_interrupt(0x26);
  return (undefined *)&local_18;
}



/* FUN_0000943c @ 0000943c */

undefined *
FUN_0000943c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_0000946e;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_0000946e;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00009000(DAT_00009484);
  }
LAB_0000946e:
  software_interrupt(0x27);
  return (undefined *)&local_18;
}



/* FUN_0000948c @ 0000948c */

void FUN_0000948c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00009970();
  *param_1 = uVar1;
  uVar1 = FUN_00009934();
  param_1[1] = uVar1;
  uVar1 = FUN_000094c8();
  param_1[2] = uVar1;
  uVar1 = FUN_000098f8();
  param_1[3] = uVar1;
  iVar2 = FUN_000098c0();
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



/* FUN_000094c8 @ 000094c8 */

undefined4 FUN_000094c8(void)

{
  FUN_00001ce4(0,2,s_PspBootRomServices_DiesPerSocket_000094dc,1);
  return 1;
}



/* FUN_00009554 @ 00009554 */

bool FUN_00009554(uint param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (uint)*DAT_00009614;
  bVar1 = param_1 < uVar2;
  if (bVar1) {
    pcVar3 = &DAT_00009618;
  }
  else {
    pcVar3 = s_FALSE_00009620;
  }
  FUN_00001ce4(0,2,DAT_00009628,param_1,pcVar3,uVar2);
  if (bVar1) {
    for (uVar4 = 0; (uVar4 < DAT_0007fa1f && (*(byte *)(uVar4 + 0x7fa22) <= param_1));
        uVar4 = uVar4 + 1) {
      param_1 = param_1 - *(byte *)(uVar4 + 0x7fa22);
    }
    FUN_00001ce4(0,2,s_PspBootRomServices_PhysicalCoreC_0000962c,(uint)DAT_0007fa1f,pcVar3,uVar2);
    if (DAT_0007fa1f <= uVar4) {
      FUN_00009000(DAT_00009660);
    }
    FUN_00001ce4(0,2,s_PspBootRomServices_PhysicalCoreC_00009664,DAT_0007fa1e,pcVar3,uVar2);
    iVar5 = uVar4 * DAT_0007fa1e + param_1;
    uVar2 = (uint)*(byte *)(iVar5 * 2 + 0x7fa24);
    *param_2 = uVar2;
    FUN_00001ce4(0,2,s_PspBootRomServices_PhysComplex____00009690,iVar5,uVar2);
    uVar2 = (uint)*(byte *)(iVar5 * 2 + 0x7fa25);
    *param_3 = uVar2;
    FUN_00001ce4(0,2,s_PspBootRomServices_PhysCore___d_000096b4,iVar5,uVar2);
  }
  return bVar1;
}



/* FUN_000096d8 @ 000096d8 */

uint FUN_000096d8(void)

{
  uint in_r3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar1 = 0; uVar1 < DAT_0007fa1f; uVar1 = uVar1 + 1) {
    in_r3 = (uint)*(byte *)(uVar1 + 0x7fa22);
    FUN_00001ce4(0,2,s_PspBootRomServices_LogicalCoresP_0000972c,uVar1,in_r3);
    if (*(char *)(uVar1 + 0x7fa22) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1 << (uVar1 & 0xff);
    }
    uVar3 = uVar3 | uVar2;
  }
  FUN_00001ce4(0,2,s_PspBootRomServices_PhysCcxEnable_00009768,uVar3,in_r3);
  return uVar3;
}



/* FUN_00009794 @ 00009794 */

uint FUN_00009794(void)

{
  int iVar1;
  uint in_r3;
  uint uVar2;
  uint uVar3;
  
  FUN_00001ce4(0,2,s_PspBootRomServices_Logical2Physi_00009810,0,in_r3);
  uVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 2;
    if ((*(char *)(iVar1 + 0x7fa24) != -1) && (*(char *)(iVar1 + 0x7fa25) != -1)) {
      FUN_00001ce4(0,2,s_PspBootRomServices___d__CoreComp_00009840,uVar2,*(char *)(iVar1 + 0x7fa24))
      ;
      in_r3 = (uint)*(byte *)(iVar1 + 0x7fa25);
      FUN_00001ce4(0,2,s_PspBootRomServices___d__Core___d_0000986c,uVar2,in_r3);
      uVar3 = uVar3 | 1 << ((uint)*(byte *)(iVar1 + 0x7fa25) |
                           (*(byte *)(iVar1 + 0x7fa24) & 0x3f) << 2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_00001ce4(0,2,s_PspBootRomServices_PhysCoreEnabl_00009890,uVar3,in_r3);
  return uVar3;
}



/* FUN_000098c0 @ 000098c0 */

undefined4 FUN_000098c0(void)

{
  FUN_00001ce4(0,2,s_PspBootRomServices_PhysDieId___d_000098d4);
  return 0;
}



/* FUN_000098f8 @ 000098f8 */

undefined4 FUN_000098f8(void)

{
  FUN_00001ce4(0,2,s_PspBootRomServices_SocketId___d_0000990c);
  return 0;
}



/* FUN_00009934 @ 00009934 */

undefined4 FUN_00009934(void)

{
  FUN_00001ce4(0,2,s_PspBootRomServices_SystemDieCoun_00009948,1);
  return 1;
}



/* FUN_00009970 @ 00009970 */

undefined4 FUN_00009970(void)

{
  FUN_00001ce4(0,2,s_PspBootRomServices_SystemSocketC_00009984,1);
  return 1;
}



/* FUN_00009a28 @ 00009a28 */

void FUN_00009a28(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 int *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_20;
  
  uVar4 = param_5;
  local_20 = param_4;
  FUN_00001ce4(0,1,s__SMN_RI_F_xx_x_x__x__00009abc,param_3,param_4,param_5);
  uVar1 = (param_4 >> 2 & 0x1ff) << 2;
  uVar2 = (param_3 & 7) << 0xb;
  if (param_2 == 4) {
    uVar2 = local_20 & 0xffffc003 | 1 | uVar1 | uVar2 | 0x4000;
  }
  else {
    uVar2 = local_20 & 0xffff8003 | 1 | uVar1 | uVar2;
  }
  local_20._3_1_ = (undefined)(uVar2 >> 0x18);
  local_20._0_3_ = CONCAT12((char)param_5,(short)uVar2);
  uVar3 = 1;
  FUN_00009cd4(3,DAT_00009ad4,&local_20,param_1,1);
  FUN_00009c08(3,DAT_00009ad4 + 0x30,param_6,param_1);
  FUN_00001ce4(0,1,s__SMN_RI_Data32__0x_08x_00009ad8,*param_6,uVar3,uVar4);
  if (param_2 == 4) {
    FUN_00009c08(3,DAT_00009ad4 + 0x34,param_6 + 1,param_1);
    FUN_00001ce4(0,1,s__SMN_RI_Data32Hi__0x_08x_00009af4,*param_6 + 1);
  }
  return;
}



/* FUN_00009b10 @ 00009b10 */

undefined8
FUN_00009b10(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
            int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  iVar2 = *param_6;
  uVar5 = param_5;
  local_24 = param_4;
  FUN_00001ce4(0,1,s__SMN_WI_F_xx_x_x__x____0x_0x_00009bac,param_3,param_4,param_5,iVar2);
  FUN_00001ce4(0,1,s__SMN_WI_Data32__0x_08x_00009bcc,*param_6);
  uVar1 = (param_4 >> 2 & 0x1ff) << 2;
  uVar3 = (param_3 & 7) << 0xb;
  if (param_2 == 4) {
    uVar3 = local_24 & 0xffffc003 | 1 | uVar1 | uVar3 | 0x4000;
  }
  else {
    uVar3 = local_24 & 0xffff8003 | 1 | uVar1 | uVar3;
  }
  local_24._3_1_ = (undefined)(uVar3 >> 0x18);
  local_24._0_3_ = CONCAT12((char)param_5,(short)uVar3);
  FUN_00009cd4(3,DAT_00009be8,&local_24,param_1,1);
  uVar4 = 1;
  FUN_00009cd4(3,DAT_00009be8 + 0x30,param_6,param_1);
  if (param_2 == 4) {
    FUN_00001ce4(0,1,s__SMN_WI_Data32Hi__0x_08x_00009bec,*param_6 + 1,uVar4,uVar5,iVar2);
    uVar4 = 1;
    FUN_00009cd4(3,DAT_00009be8 + 0x34,param_6 + 1,param_1);
  }
  return CONCAT44(uVar5,uVar4);
}



/* FUN_00009c08 @ 00009c08 */

uint FUN_00009c08(int param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  
  FUN_00001ce4(0,1,s__SMN_R__0x_0x__00009c88,param_2);
  if (*DAT_00009c9c != '\0') {
    for (uVar2 = *(uint *)(DAT_00009c9c + 4); uVar2 < *(uint *)(DAT_00009c9c + 8); uVar2 = uVar2 + 1
        ) {
    }
  }
  uVar2 = param_2 & 0xfff;
  param_2 = param_2 & 0xfffff000;
  software_interrupt(4);
  if (param_1 == 0x81) {
LAB_00009c66:
    pcVar1 = s_0x_02x__8b__00009ca4;
    *(undefined *)param_3 = *(undefined *)(param_2 + uVar2);
  }
  else {
    if (param_1 < 0x82) {
      if (param_1 == 1) goto LAB_00009c66;
      if (param_1 == 2) goto LAB_00009c6e;
      if (param_1 != 3) goto LAB_00009c58;
    }
    else {
      if (param_1 == 0x82) {
LAB_00009c6e:
        pcVar1 = s_0x_04x__16b__00009cb4;
        *(undefined2 *)param_3 = *(undefined2 *)(param_2 + uVar2);
        goto LAB_00009c74;
      }
      if (param_1 != 0x83) {
LAB_00009c58:
        FUN_00009000(DAT_00009ca0);
        goto LAB_00009c5e;
      }
    }
    pcVar1 = s_0x_08x__32b__00009cc4;
    *param_3 = *(undefined4 *)(param_2 + uVar2);
  }
LAB_00009c74:
  FUN_00001ce4(0,1,pcVar1);
LAB_00009c5e:
  software_interrupt(5);
  return param_2;
}



/* FUN_00009cd4 @ 00009cd4 */

uint FUN_00009cd4(int param_1,uint param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_00009d50;
  if (*DAT_00009d50 != '\0') {
    FUN_00001ce4(0,1,s__SMN_BW__0x_0x____0x_0x_00009d54,param_2,*param_3);
    for (uVar2 = *(uint *)(pcVar1 + 4); uVar2 < *(uint *)(pcVar1 + 8); uVar2 = uVar2 + 1) {
    }
    return uVar2;
  }
  FUN_00001ce4(0,1,s__SMN_W__0x_0x____0x_0x_00009d70,param_2,*param_3);
  uVar2 = param_2 & 0xfff;
  param_2 = param_2 & 0xfffff000;
  software_interrupt(4);
  if (param_1 == 0x81) {
LAB_00009d3e:
    *(undefined *)(param_2 + uVar2) = *(undefined *)param_3;
  }
  else {
    if (param_1 < 0x82) {
      if (param_1 == 1) goto LAB_00009d3e;
      if (param_1 == 2) goto LAB_00009d44;
      if (param_1 != 3) goto LAB_00009d32;
    }
    else {
      if (param_1 == 0x82) {
LAB_00009d44:
        *(undefined2 *)(param_2 + uVar2) = *(undefined2 *)param_3;
        goto LAB_00009d38;
      }
      if (param_1 != 0x83) {
LAB_00009d32:
        FUN_00009000(DAT_00009d8c);
        goto LAB_00009d38;
      }
    }
    *(undefined4 *)(param_2 + uVar2) = *param_3;
  }
LAB_00009d38:
  software_interrupt(5);
  return param_2;
}



/* FUN_00009d90 @ 00009d90 */

undefined4 FUN_00009d90(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined auStack_428 [1000];
  undefined2 local_40;
  short sStack_3e;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  int local_28;
  undefined4 local_24 [2];
  
  piVar1 = DAT_00009f5c;
  local_40 = 0;
  sStack_3e = 0;
  local_3c = (char *)0x0;
  local_38 = 0;
  local_34 = 0;
  *DAT_00009f5c = param_1;
  software_interrupt(0xf3);
  if ((DAT_00009f60 & 0xff) != 0) {
    FUN_00009000(DAT_00009f64,local_24);
  }
  *DAT_00009f68 = local_24[0];
  software_interrupt(0x19);
  FUN_00001ce4(4,0,s_ABL3_Loaded_00009f6c);
  local_3c = s__MEM_CONF__Override_Memory_Timin_00002ff0 + 0x17;
  iVar3 = func_0x0000d8ec(auStack_428);
  if (iVar3 == 9) {
    iVar3 = 9;
  }
  else {
    local_30[0] = 0xa039;
    iVar3 = FUN_00008edc(local_30,auStack_428);
    piVar2 = DAT_00009f7c;
    if (iVar3 == 0) {
      FUN_00001210(auStack_428);
      FUN_00008f60(0xe0c0,auStack_428);
      FUN_00004d4c(auStack_428);
      FUN_000009fc(auStack_428);
      FUN_00004de4(auStack_428);
      iVar3 = *(int *)(*(int *)(s__MEM_CONF__Override_Memory_Timin_00002ebc + *piVar1 + 0x2c) + 0x60
                      );
      FUN_00001ce4(0,0x1000000,s_ABL_Version____x_00009f80,iVar3);
      FUN_00001ce4(4,0,s_ABL3___stack_chk_guard____08x_00009f94,local_24[0]);
      software_interrupt(0xf0);
      if (iVar3 != 0) {
        FUN_00009000(DAT_00009f64 + 0x6b,0);
      }
      *DAT_00009fb4 = 0;
      *DAT_00009fb8 = 0;
      FUN_00008f60(0xed81,auStack_428);
      *piVar2 = *(int *)(*(int *)(local_28 + 0xb8) + 0x3dc);
      iVar3 = FUN_00002094();
      *piVar2 = iVar3;
      *(int *)(*(int *)(local_28 + 0xb8) + 0x3dc) = iVar3;
      if ((iVar3 == 9) || (iVar3 == 7)) {
        FUN_00001ce4(0,0x40000000,DAT_00009fbc);
        sStack_3e = (short)*piVar2;
        local_3c = (char *)0x4000;
        local_40 = FUN_000007dc();
        local_38 = 0;
        local_34 = 0;
        FUN_000008fc(&local_40,0);
        FUN_0000a004(*piVar2);
      }
      FUN_00001ce4(4,0,s_Mem_Phase_3_End_00009fc0);
      FUN_000017f8(0);
      iVar3 = func_0x0000ea10(0);
    }
    if ((iVar3 != 9) && (iVar3 != 7)) {
      if (((*piVar2 == 9) || (*piVar2 == 7)) && (iVar4 = FUN_0000a004(), iVar4 != 0)) {
        FUN_00008f60(0xe0c6,auStack_428);
        FUN_00001ce4(0,0x40000000,DAT_00009fbc + 0x50);
        iVar3 = 9;
      }
      goto LAB_00009f42;
    }
  }
  FUN_00008f60(0xe0c5,auStack_428);
  FUN_00001ce4(0,0x40000000,s__ERROR___ABL_3___AGESA_FATAL_ERR_00009fd4);
  if (sStack_3e == 0) {
    sStack_3e = (short)iVar3;
  }
  if (local_3c == (char *)0x0) {
    local_3c = s__MEM_CONF__Override_Memory_Timin_00002ff0 + 0x17;
    local_38 = 0;
    local_34 = 0;
  }
  local_40 = FUN_000007dc();
  FUN_000008fc(&local_40,1);
LAB_00009f42:
  FUN_00008f60(0xe0d3,auStack_428);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  return uVar5;
}



/* FUN_0000a004 @ 0000a004 */

undefined4 FUN_0000a004(void)

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
  FUN_0000948c(&local_38);
  uVar2 = 0;
  if (1 < local_34) {
    if (local_24 == 0) {
      return 0;
    }
    for (uVar4 = 0; uVar4 < local_38; uVar4 = uVar4 + 1 & 0xff) {
      for (uVar3 = 0; uVar3 < local_34; uVar3 = uVar3 + 1 & 0xff) {
        local_44 = 0x4000;
        local_48 = CONCAT22(9,(ushort)uVar3 | (ushort)(uVar4 << 8));
        iVar1 = FUN_000008a8(&local_48);
        if (iVar1 == 0) {
          local_48 = CONCAT22(7,(undefined2)local_48);
          iVar1 = FUN_000008a8(&local_48);
          if (iVar1 != 0) goto LAB_0000a05e;
        }
        else {
LAB_0000a05e:
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



/* FUN_0000a120 @ 0000a120 */

undefined4 FUN_0000a120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  iVar3 = *piVar4;
  FUN_00008d18(*(int *)(iVar3 + 0x3c4) + 0x5e,iVar3);
  iVar1 = func_0x0000c8ec(*(int *)(iVar3 + 0x3c4) + 0x5e);
  if (iVar1 == 0) {
    uVar2 = 9;
    *(undefined *)(iVar3 + 0x3d0) = 0;
  }
  else {
    *(undefined *)(iVar3 + 0x3d0) = 1;
    FUN_00001ce4(4,0,s_CAR_GDDR6_DRAM_Initialization___P_0000a170);
    *(undefined4 *)(piVar4[2] + 8) = 0;
    uVar2 = func_0x0000a1a0(param_1);
    *DAT_0000a19c = uVar2;
  }
  return uVar2;
}




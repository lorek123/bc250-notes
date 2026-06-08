/* Decompiled from: d00_e07_DRIVER_ENTRIES~0x28_0.1C.0.3 */

/* Reset @ 00000000 */

/* WARNING: Control flow encountered bad instruction data */

void Reset(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (!in_ZR) {
    coprocessor_moveto(2,4,4,unaff_r11,in_cr15,in_cr12);
  }
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* NotUsed @ 00000014 */

/* WARNING: Control flow encountered bad instruction data */

void NotUsed(void)

{
  undefined4 in_r3;
  int unaff_r7;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r7 + 0x55a) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* IRQ @ 00000018 */

/* WARNING: Control flow encountered bad instruction data */

void IRQ(void)

{
  undefined4 in_r3;
  int unaff_r7;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r7 + 0x55a) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FIQ @ 0000001c */

/* WARNING: Control flow encountered bad instruction data */

void FIQ(void)

{
  undefined4 in_r3;
  int unaff_r7;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r7 + 0x55a) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00001000 @ 00001000 */

undefined4 FUN_00001000(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != 0x78) {
    return 0;
  }
  uVar1 = *param_3;
  if ((int)(*param_1 << 0x14) < 0) {
    iVar4 = DAT_00001410 + 0x13d2;
  }
  else {
    iVar4 = DAT_00001410 + 0x13e6;
  }
  iVar3 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 >> 4) {
    *(undefined *)((int)param_1 + iVar3 + 0x24) = *(undefined *)(iVar4 + (uVar1 & 0xf));
    iVar3 = iVar3 + 1;
  }
  iVar5 = 0;
  if (((int)(*param_1 << 0x1c) < 0) && (iVar3 != 0)) {
    iVar4 = iVar4 + 0x11;
    iVar5 = 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (iVar3 < (int)uVar1) {
    iVar7 = uVar1 - iVar3;
  }
  else {
    iVar7 = 0;
  }
  param_1[6] = param_1[6] - (iVar7 + iVar3 + iVar5);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_00001364(param_1);
  }
  for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    (*(code *)param_1[1])(*(undefined *)(iVar4 + iVar6),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_00001364(param_1);
  }
  while (0 < iVar7) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar7 = iVar7 + -1;
  }
  while (0 < iVar3) {
    (*(code *)param_1[1])(*(undefined *)((int)param_1 + iVar3 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar3 = iVar3 + -1;
  }
  FUN_00001392(param_1);
  if ((int)(*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_0000100c @ 0000100c */

ulonglong FUN_0000100c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  bVar11 = (int)param_4 < 0;
  bVar12 = param_4 == 0;
  uVar9 = param_4;
  if (bVar12) {
    uVar9 = param_3;
  }
  uVar10 = LZCOUNT(uVar9);
  uVar9 = uVar9 << uVar10 + 1;
  if (!bVar12) {
    uVar10 = 0x3f - uVar10;
    bVar11 = (int)uVar10 < 0;
    bVar12 = uVar10 == 0;
  }
  if (bVar12) {
    uVar10 = 0x1f - uVar10;
    bVar11 = (int)uVar10 < 0;
  }
  if (bVar11) {
    return 0;
  }
  bVar11 = param_2 == 0;
  if (bVar11) {
    uVar4 = LZCOUNT(param_1);
  }
  else {
    uVar4 = 0x3f - LZCOUNT(param_2);
    bVar11 = uVar4 == 0;
  }
  if (bVar11) {
    uVar4 = 0x1f - uVar4;
  }
  uVar6 = uVar4 - uVar10;
  bVar11 = (int)uVar6 < 0;
  if (bVar11) {
    return 0;
  }
  if (!bVar11) {
    bVar11 = (int)(4 - uVar6) < 0;
  }
  if (!bVar11) {
    uVar4 = 0;
    uVar10 = param_3 << (uVar6 & 0xff);
    uVar9 = param_4 << (uVar6 & 0xff) | param_3 >> (0x20 - uVar6 & 0xff);
    while( true ) {
      bVar12 = uVar10 <= param_1;
      bVar11 = param_2 - uVar9 < (uint)bVar12;
      uVar4 = uVar4 * 2 + (uint)(uVar9 < param_2 || bVar11);
      if (uVar9 < param_2 || bVar11) {
        param_1 = param_1 - uVar10;
        param_2 = param_2 - (uVar9 + !bVar12);
      }
      bVar11 = uVar6 == 0;
      uVar6 = uVar6 - 1;
      if (bVar11) break;
      bVar2 = (byte)uVar9;
      uVar9 = uVar9 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
    }
    return (ulonglong)uVar4;
  }
  uVar6 = uVar10 - 0x20;
  if ((int)uVar6 < 5) {
    uVar4 = param_3 >> (uVar6 & 0xff);
  }
  if (uVar6 == 4 || (int)(uVar10 - 0x24) < 0 != SBORROW4(uVar6,4)) {
    uVar9 = uVar9 | uVar4;
  }
  uVar4 = *(uint *)(&DAT_000012fc + (uVar9 >> 0x1c) * 4);
  uVar9 = uVar10;
  if (0x1f < uVar10) {
    uVar9 = uVar10 - 0x20;
  }
  uVar6 = 0x20 - uVar9;
  if (0x1f < uVar10) {
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar4 + ((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20);
    uVar3 = (uint)lVar1;
    uVar10 = -((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) | uVar3 >> (uVar9 & 0xff));
    if (uVar3 << (0x20 - uVar9 & 0xff) != 0) {
      uVar10 = uVar10 - 1;
    }
    uVar4 = uVar4 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20);
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar4 + ((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20);
    uVar6 = (uint)lVar1;
    uVar10 = -((int)((ulonglong)lVar1 >> 0x20) << (0x20 - uVar9 & 0xff) | uVar6 >> (uVar9 & 0xff));
    if (uVar6 << (0x20 - uVar9 & 0xff) != 0) {
      uVar10 = uVar10 - 1;
    }
    uVar3 = (uVar4 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20)) - 1;
    uVar10 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                    ((ulonglong)param_1 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
    uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar10);
    uVar4 = param_1 - uVar6;
    param_2 = param_2 - (uVar10 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar10 >> 0x20) +
                        (uint)(param_1 < uVar6));
    bVar11 = param_4 <= param_2;
    if (param_2 == param_4) {
      bVar11 = param_3 <= uVar4;
    }
    if (bVar11) {
      uVar9 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                     ((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
      uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar9);
      param_2 = param_2 - (uVar9 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar9 >> 0x20) +
                          (uint)(uVar4 < uVar6));
      bVar11 = param_4 <= param_2;
      if (param_2 == param_4) {
        bVar11 = param_3 <= uVar4 - uVar6;
      }
      if (bVar11) {
        return (ulonglong)(uVar10 + uVar9 + 1);
      }
      return (ulonglong)(uVar10 + uVar9);
    }
    return (ulonglong)uVar10;
  }
  uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar4);
  uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20) << (uVar6 & 0xff) |
            uVar3 >> (uVar9 & 0xff));
  if (uVar3 << (uVar6 & 0xff) != 0) {
    uVar10 = uVar10 - 1;
  }
  uVar4 = uVar4 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar4);
  uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20) << (uVar6 & 0xff) |
            uVar3 >> (uVar9 & 0xff));
  if (uVar3 << (uVar6 & 0xff) != 0) {
    uVar10 = uVar10 - 1;
  }
  uVar4 = uVar4 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20);
  if (param_2 != 0) {
    uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar4);
    uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar4 >> 0x20) << (uVar6 & 0xff) |
              uVar3 >> (uVar9 & 0xff));
    if (uVar3 << (uVar6 & 0xff) != 0) {
      uVar10 = uVar10 - 1;
    }
    uVar4 = uVar4 + (int)((ulonglong)uVar10 * (ulonglong)uVar4 >> 0x20);
  }
  lVar1 = (ulonglong)param_2 * (ulonglong)uVar4 + ((ulonglong)param_1 * (ulonglong)uVar4 >> 0x20);
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1 >> (uVar9 & 0xff) | uVar10 << (uVar6 & 0xff);
  uVar10 = uVar10 >> (uVar9 & 0xff);
  uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
  uVar6 = param_1 - uVar7;
  param_2 = param_2 - (uVar10 * param_3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) +
                      (uint)(param_1 < uVar7));
  if (param_2 != 0 || param_3 <= uVar6) {
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar4 + ((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x20);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar8 = (uint)lVar1 >> (uVar9 & 0xff) | uVar7 << (0x20 - uVar9 & 0xff);
    uVar4 = uVar3 + uVar8;
    iVar5 = uVar10 + (uVar7 >> (uVar9 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
    uVar6 = uVar6 - param_3 * uVar8;
    if (param_3 <= uVar6) {
      uVar6 = uVar6 - param_3;
      bVar11 = param_3 <= uVar6;
      if (bVar11) {
        uVar6 = uVar6 - param_3;
      }
      uVar9 = uVar4 + 1 + (uint)bVar11;
      return CONCAT44(iVar5 + (uint)(0xfffffffe < uVar4) + (uint)CARRY4(uVar4 + 1,(uint)bVar11) +
                      (uint)CARRY4(uVar9,(uint)(param_3 <= uVar6)),uVar9 + (param_3 <= uVar6));
    }
    return CONCAT44(iVar5,uVar4);
  }
  return CONCAT44(uVar10,uVar3);
}



/* FUN_0000133c @ 0000133c */

void FUN_0000133c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000019b6(param_2,&local_20,&uStack_8,DAT_00001360 + 0x1348);
  FUN_000019dc(0,&local_20);
  return;
}



/* FUN_00001364 @ 00001364 */

void FUN_00001364(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[6];
  if ((int)(*param_1 << 0x1b) < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}



/* FUN_00001392 @ 00001392 */

void FUN_00001392(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(0x20,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}



/* FUN_000013b8 @ 000013b8 */

undefined4 FUN_000013b8(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *param_3;
  if ((int)(*param_1 << 0x14) < 0) {
    iVar4 = DAT_00001410 + 0x13d2;
  }
  else {
    iVar4 = DAT_00001410 + 0x13e6;
  }
  iVar3 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 >> 4) {
    *(undefined *)((int)param_1 + iVar3 + 0x24) = *(undefined *)(iVar4 + (uVar1 & 0xf));
    iVar3 = iVar3 + 1;
  }
  iVar5 = 0;
  if ((((int)(*param_1 << 0x1c) < 0) && (param_2 != 0x70)) && (iVar3 != 0)) {
    iVar4 = iVar4 + 0x11;
    iVar5 = 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (iVar3 < (int)uVar1) {
    iVar7 = uVar1 - iVar3;
  }
  else {
    iVar7 = 0;
  }
  param_1[6] = param_1[6] - (iVar7 + iVar3 + iVar5);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_00001364(param_1);
  }
  for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    (*(code *)param_1[1])(*(undefined *)(iVar4 + iVar6),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_00001364(param_1);
  }
  while (0 < iVar7) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar7 = iVar7 + -1;
  }
  while (0 < iVar3) {
    (*(code *)param_1[1])(*(undefined *)((int)param_1 + iVar3 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar3 = iVar3 + -1;
  }
  FUN_00001392(param_1);
  if ((int)(*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_00001414 @ 00001414 */

uint FUN_00001414(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_0000154c;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x1408), uVar3 != 0))) {
        uVar5 = uVar5 | uVar3;
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        uVar5 = uVar5 & 0xfffffffb;
      }
      param_1[7] = 0;
      iVar6 = 0;
      param_1[6] = 0;
      puVar7 = param_2;
      do {
        if (uVar2 == 0x2a) {
          param_2 = puVar7 + 1;
          param_1[iVar6 + 6] = *puVar7;
          uVar2 = (*(code *)param_1[3])(param_1);
          if (iVar6 == 1) {
            if ((int)param_1[7] < 0) {
              uVar5 = uVar5 & 0xffffffdf;
            }
            break;
          }
        }
        else {
          iVar4 = FUN_000175e8(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_000175e8();
              if (iVar4 == 0) break;
              param_1[iVar6 + 6] = (uVar2 + param_1[iVar6 + 6] * 10) - 0x30;
            }
          }
          param_2 = puVar7;
          if (iVar6 == 1) break;
        }
        if (uVar2 != 0x2e) break;
        uVar2 = (*(code *)param_1[3])(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 | 0x20;
        puVar7 = param_2;
      } while (iVar6 < 2);
      if ((int)param_1[6] < 0) {
        uVar5 = uVar5 | 1;
        param_1[6] = -param_1[6];
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_00001000(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_00001438;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_00001438:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* FUN_00001550 @ 00001550 */

int FUN_00001550(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      if (uVar4 != uVar3) {
        if ((uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18) <=
            (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18)) {
          return -1;
        }
        return 1;
      }
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) goto LAB_00001588;
    param_3 = param_3 + 1;
    puVar1 = param_1;
    puVar2 = param_2;
    while( true ) {
      param_1 = (uint *)((int)puVar1 + 1);
      param_2 = (uint *)((int)puVar2 + 1);
      if ((uint)*(byte *)puVar1 - (uint)*(byte *)puVar2 != 0) {
        return (uint)*(byte *)puVar1 - (uint)*(byte *)puVar2;
      }
      param_3 = param_3 - 2;
      if (param_3 == 0) break;
LAB_00001588:
      puVar1 = (uint *)((int)param_1 + 1);
      puVar2 = (uint *)((int)param_2 + 1);
      if ((uint)*(byte *)param_1 - (uint)*(byte *)param_2 != 0) {
        return (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
      }
    }
    return 0;
  }
  return 0;
}



/* FUN_000015a8 @ 000015a8 */

int FUN_000015a8(uint *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int3 iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  
  puVar9 = param_1;
  while (((uint)puVar9 & 3) != 0) {
    puVar8 = (uint *)((int)puVar9 + 1);
    cVar1 = *(char *)puVar9;
    puVar9 = puVar8;
    if (cVar1 == '\0') {
      return (int)puVar8 - ((int)param_1 + 1);
    }
  }
  do {
    uVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    uVar2 = UnsignedSaturate(1 - (uVar11 & 0xff),8);
    uVar3 = UnsignedSaturate(1 - (uVar11 >> 8 & 0xff),8);
    uVar4 = UnsignedSaturate(1 - (uVar11 >> 0x10 & 0xff),8);
    uVar5 = UnsignedSaturate(1 - (uVar11 >> 0x18),8);
    sVar6 = CONCAT11((char)uVar3,(char)uVar2);
    iVar7 = CONCAT12((char)uVar4,sVar6);
  } while (CONCAT13((char)uVar5,iVar7) == 0);
  iVar10 = (int)puVar9 - (int)((int)param_1 + 1);
  if ((char)uVar2 == '\0') {
    if (sVar6 == 0) {
      if (iVar7 != 0) {
        return iVar10 + -1;
      }
    }
    else {
      iVar10 = iVar10 + -2;
    }
    return iVar10;
  }
  return iVar10 + -3;
}



/* FUN_000015e4 @ 000015e4 */

undefined8 FUN_000015e4(uint *param_1,uint *param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  byte in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  if (3 < param_3) {
    uVar7 = (uint)param_1 & 3;
    puVar3 = param_1;
    uVar8 = uVar7;
    if (uVar7 != 0) {
      bVar5 = *(byte *)param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar7 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar7 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = *(byte *)puVar3;
      }
      puVar1 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar8;
      }
      param_3 = (param_3 + uVar7) - 4;
      puVar3 = puVar1;
      if (uVar7 < 2) {
        puVar3 = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = bVar5;
      }
    }
    uVar7 = (uint)param_2 & 3;
    if (uVar7 == 0) {
      uVar8 = 0;
      while (uVar7 = param_3 - 0x20, 0x1f < param_3) {
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        *puVar3 = *param_2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        uVar8 = param_2[4];
        uVar9 = param_2[5];
        uVar10 = param_2[6];
        uVar11 = param_2[7];
        param_2 = param_2 + 8;
        puVar3[4] = uVar8;
        puVar3[5] = uVar9;
        puVar3[6] = uVar10;
        puVar3[7] = uVar11;
        puVar3 = puVar3 + 8;
        param_3 = uVar7;
      }
      if ((bool)((byte)(uVar7 >> 4) & 1)) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar3 = puVar3 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3 = puVar3 + 2;
      }
      puVar2 = puVar3;
      puVar1 = param_2;
      if ((bool)((byte)(uVar7 >> 2) & 1)) {
        puVar1 = param_2 + 1;
        uVar8 = *param_2;
        puVar2 = puVar3 + 1;
        *puVar3 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((uVar7 & 3) != 0) {
        bVar13 = (bool)((byte)(uVar7 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar12 = (int)param_3 < 0;
        puVar3 = puVar1;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar1 + 2);
          uVar6 = *(undefined2 *)puVar1;
        }
        puVar1 = puVar3;
        if (bVar12) {
          puVar1 = (uint *)((int)puVar3 + 1);
          param_3 = (uint)*(byte *)puVar3;
        }
        puVar3 = puVar2;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar2 + 2);
          *(undefined2 *)puVar2 = uVar6;
        }
        puVar2 = puVar3;
        if (bVar12) {
          puVar2 = (uint *)((int)puVar3 + 1);
          *(byte *)puVar3 = (byte)param_3;
        }
        return CONCAT44(puVar1,puVar2);
      }
      return CONCAT44(puVar1,puVar2);
    }
    while( true ) {
      in_r12 = (byte)uVar8;
      if (param_3 < 8) break;
      puVar1 = param_2 + 1;
      uVar7 = *param_2;
      param_2 = param_2 + 2;
      uVar8 = *puVar1;
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3 = puVar3 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar3;
    if (-1 < (int)param_3) {
      uVar7 = *param_2;
      param_1 = puVar3 + 1;
      *puVar3 = uVar7;
      param_2 = param_2 + 1;
    }
    param_4 = (byte)uVar7;
  }
  bVar13 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar12 = (int)param_3 < 0;
  if (bVar13) {
    pbVar4 = (byte *)((int)param_2 + 1);
    param_4 = *(byte *)param_2;
    param_2 = (uint *)((int)param_2 + 2);
    in_r12 = *pbVar4;
  }
  puVar3 = param_2;
  if (bVar12) {
    puVar3 = (uint *)((int)param_2 + 1);
    param_3 = (uint)*(byte *)param_2;
  }
  if (bVar13) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = param_4;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = in_r12;
  }
  puVar1 = param_1;
  if (bVar12) {
    puVar1 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar3,puVar1);
}



/* FUN_00001670 @ 00001670 */

undefined8 FUN_00001670(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* FUN_000016d4 @ 000016d4 */

undefined4 * FUN_000016d4(undefined4 *param_1,uint param_2,undefined param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar1,uVar1);
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar3 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = param_3;
    }
    puVar2 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    return puVar2;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar2 = param_1;
    if (iVar7 != 2) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    param_1 = puVar2;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    param_2 = param_2 - iVar7;
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((param_2 & 0x10) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar5 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar5 != 0) {
    puVar4 = puVar2;
    if ((int)uVar5 < 0) {
      puVar4 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    puVar2 = puVar4;
    if ((uVar5 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar4 + 1);
      *(undefined *)puVar4 = param_3;
    }
    return puVar2;
  }
  return puVar2;
}



/* FUN_000016e4 @ 000016e4 */

undefined4 * FUN_000016e4(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar2 = 0;
    }
    puVar1 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    return puVar1;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar1 = param_1;
    if (iVar5 != 2) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    param_1 = puVar1;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    param_2 = param_2 - iVar5;
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
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
  uVar4 = param_2 << 0x1e;
  puVar1 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar4 != 0) {
    puVar3 = puVar1;
    if ((int)uVar4 < 0) {
      puVar3 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    puVar1 = puVar3;
    if ((uVar4 & 0x40000000) != 0) {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined *)puVar3 = 0;
    }
    return puVar1;
  }
  return puVar1;
}



/* FUN_00001728 @ 00001728 */

undefined4 * FUN_00001728(undefined4 *param_1,uint param_2)

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



/* FUN_00001778 @ 00001778 */

longlong FUN_00001778(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar3 = param_2 & 0x80000000;
    if ((int)uVar3 < 0) {
      param_2 = -param_2;
    }
    uVar4 = uVar3 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    if (param_1 >> 4 < param_2) goto LAB_00001898;
    uVar1 = param_2;
    if (param_1 >> 8 < param_2) goto LAB_00001868;
LAB_00001828:
    param_2 = uVar1 << 6;
    uVar3 = 0xfc000000;
    if (param_1 >> 8 < param_2) goto LAB_00001868;
    param_2 = uVar1 << 0xc;
    uVar3 = 0xfff00000;
    if (param_1 >> 8 < param_2) goto LAB_00001868;
    param_2 = uVar1 << 0x12;
    uVar3 = 0xffffc000;
    if (param_2 <= param_1 >> 8) {
      param_2 = uVar1 << 0x18;
      uVar3 = 0xffffff00;
    }
    bVar5 = param_2 == 0;
    if (bVar5) {
      if ((int)uVar4 >> 0x1f < 0) {
        param_1 = -param_1;
      }
      return (ulonglong)param_1 << 0x20;
    }
    do {
      if (bVar5) {
        param_2 = param_2 >> 6;
      }
LAB_00001868:
      bVar5 = param_2 <= param_1 >> 7;
      if (bVar5) {
        param_1 = param_1 + param_2 * -0x80;
      }
      bVar6 = param_2 <= param_1 >> 6;
      if (bVar6) {
        param_1 = param_1 + param_2 * -0x40;
      }
      bVar7 = param_2 <= param_1 >> 5;
      if (bVar7) {
        param_1 = param_1 + param_2 * -0x20;
      }
      bVar8 = param_2 <= param_1 >> 4;
      if (bVar8) {
        param_1 = param_1 + param_2 * -0x10;
      }
      uVar3 = (((uVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8;
LAB_00001898:
      bVar5 = param_2 <= param_1 >> 3;
      if (bVar5) {
        param_1 = param_1 + param_2 * -8;
      }
      uVar3 = uVar3 * 2 + (uint)bVar5;
      bVar6 = param_2 <= param_1 >> 2;
      if (bVar6) {
        param_1 = param_1 + param_2 * -4;
      }
      bVar5 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar6);
      uVar3 = uVar3 * 2 + (uint)bVar6;
    } while (bVar5);
    bVar5 = param_2 <= param_1 >> 1;
    if (bVar5) {
      param_1 = param_1 + param_2 * -2;
    }
    uVar1 = param_1 - param_2;
    if (param_2 > param_1) {
      uVar1 = param_1;
    }
    iVar2 = (uVar3 * 2 + (uint)bVar5) * 2 + (uint)(param_2 <= param_1);
    if ((int)uVar4 >> 0x1f < 0) {
      iVar2 = -iVar2;
    }
    if ((bool)((byte)(uVar4 >> 0x1e) & 1)) {
      uVar1 = -uVar1;
    }
    return CONCAT44(uVar1,iVar2);
  }
  iVar2 = 0;
  if (param_2 <= param_1 >> 1) {
    if (param_2 <= param_1 >> 4) {
      if (param_2 <= param_1 >> 8) {
        uVar4 = 0;
        uVar1 = param_2;
        goto LAB_00001828;
      }
      bVar5 = param_2 <= param_1 >> 7;
      if (bVar5) {
        param_1 = param_1 + param_2 * -0x80;
      }
      bVar6 = param_2 <= param_1 >> 6;
      if (bVar6) {
        param_1 = param_1 + param_2 * -0x40;
      }
      bVar7 = param_2 <= param_1 >> 5;
      if (bVar7) {
        param_1 = param_1 + param_2 * -0x20;
      }
      bVar8 = param_2 <= param_1 >> 4;
      if (bVar8) {
        param_1 = param_1 + param_2 * -0x10;
      }
      iVar2 = (((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8;
    }
    bVar5 = param_2 <= param_1 >> 3;
    if (bVar5) {
      param_1 = param_1 + param_2 * -8;
    }
    bVar6 = param_2 <= param_1 >> 2;
    if (bVar6) {
      param_1 = param_1 + param_2 * -4;
    }
    bVar7 = param_2 <= param_1 >> 1;
    if (bVar7) {
      param_1 = param_1 + param_2 * -2;
    }
    iVar2 = ((iVar2 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
  }
  uVar3 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar3 = param_1;
  }
  return CONCAT44(uVar3,iVar2 * 2 + (uint)(param_2 <= param_1));
}



/* FUN_000019b6 @ 000019b6 */

void FUN_000019b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_000019d8 + 0x19c8;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_00001414(auStack_40,param_3);
  return;
}



/* FUN_000019dc @ 000019dc */

void FUN_000019dc(undefined param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* FUN_000019e8 @ 000019e8 */

/* WARNING: Removing unreachable block (ram,0x000018d4) */
/* WARNING: Removing unreachable block (ram,0x000018e0) */
/* WARNING: Removing unreachable block (ram,0x000018d0) */

longlong FUN_000019e8(uint param_1,uint param_2)

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
        if (param_1 >> 8 < uVar1) goto LAB_00001868;
        uVar1 = param_2 << 0xc;
        iVar3 = -0x100000;
        if (param_1 >> 8 < uVar1) goto LAB_00001868;
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
LAB_00001868:
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



/* FUN_00001a20 @ 00001a20 */

void FUN_00001a20(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  do {
    do {
    } while (!in_ZR && in_NG == in_OV);
    coprocessor_function(0xe,10,7,in_cr11,in_cr13,in_cr15);
  } while( true );
}



/* FUN_00001a38 @ 00001a38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a38(void)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  char local_60 [4];
  undefined auStack_5c [8];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined local_44 [16];
  undefined auStack_34 [16];
  int local_24;
  
  iVar4 = *DAT_00001b70;
  local_60[0] = -1;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_24 = iVar4;
  FUN_00001728(local_44,0x20);
  uVar3 = 0;
  do {
    software_interrupt(0x7b);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar3 = 0;
  do {
    iVar2 = -uVar3;
    uVar1 = local_44[uVar3];
    local_44[uVar3] = auStack_34[iVar2 + 0xf];
    uVar3 = uVar3 + 1;
    auStack_34[iVar2 + 0xf] = uVar1;
  } while (uVar3 < 0x10);
  software_interrupt(0x7b);
  software_interrupt(0x7b);
  iVar2 = FUN_000069c4(local_6c,local_68,0x100,local_60,&local_70,0,0,0xffff,0,0xffffffff);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_0000a1ac(local_70,auStack_5c,&uStack_50,&local_54,&uStack_48,&local_4c,6),
     iVar2 == 0)) {
    local_68 = local_68 + 0x100 + *(int *)(local_70 + 0x14) + *(int *)(local_70 + 0x70);
    software_interrupt(0x6c);
    local_60[0] = -1;
    iVar2 = FUN_000069c4(local_6c,local_68,0x100,local_60,&local_64,0,0,0xffff,0,0xffffffff);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00010804(local_44,0x20,uStack_48,local_4c,uStack_50,local_54,local_64),
       iVar2 == 0)) {
      software_interrupt(0x7c);
    }
  }
  if (local_60[0] != -1) {
    software_interrupt(0x6c);
  }
  software_interrupt(0x7c);
  if (local_24 != iVar4) {
    do {
      do {
      } while (iVar4 < local_24);
      coprocessor_function(0xe,10,7,in_cr11,in_cr13,in_cr15);
    } while( true );
  }
  return;
}



/* FUN_00001b78 @ 00001b78 */

undefined4 FUN_00001b78(void)

{
  return DAT_00001b7c;
}



/* FUN_00001b80 @ 00001b80 */

void FUN_00001b80(void)

{
  int iVar1;
  
  iVar1 = *DAT_00001ba4;
  *(undefined4 *)(iVar1 + 0x560) = 1;
  *(int *)(iVar1 + 0x564) = 0;
  do {
    if (*(int *)(iVar1 + 0x55c) == 0) {
      return;
    }
  } while (*(int *)(iVar1 + 0x564) == 0);
  return;
}



/* FUN_00001ba8 @ 00001ba8 */

void FUN_00001ba8(int param_1)

{
  int iVar1;
  
  if (param_1 != 1) {
    iVar1 = *DAT_00001bd0;
    *(undefined4 *)(iVar1 + 0x560) = 1;
    *(int *)(iVar1 + 0x564) = 0;
    do {
      if (*(int *)(iVar1 + 0x55c) == 0) {
        return;
      }
    } while (*(int *)(iVar1 + 0x564) == 0);
  }
  return;
}



/* FUN_00001bd4 @ 00001bd4 */

int FUN_00001bd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_00001bf4;
  software_interrupt(0x5e);
  if (iVar1 == 0) {
    FUN_00001ba8(param_1);
    FUN_00002118(0x226);
  }
  return iVar1;
}



/* FUN_00001bf8 @ 00001bf8 */

undefined4 FUN_00001bf8(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    return 0;
  }
  return 0x2c;
}



/* FUN_00001c04 @ 00001c04 */

undefined4 FUN_00001c04(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  software_interrupt(0x5e);
  uVar1 = 0;
  do {
    if (*(int *)(DAT_00001c54 + uVar1 * 0x44c + 4) == 0) {
      puVar2 = (uint *)(DAT_00001c54 + uVar1 * 0x44c);
      *puVar2 = uVar1;
      puVar2[1] = 1;
      puVar2[10] = 0;
      *param_1 = puVar2;
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  software_interrupt(0x5f);
  if (puVar2 != (uint *)0x0) {
    return 0;
  }
  return DAT_00001c58;
}



/* FUN_00001c5c @ 00001c5c */

undefined4 FUN_00001c5c(int *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_00001cac;
  software_interrupt(0x5e);
  uVar2 = 0;
  do {
    if (*(char *)(DAT_00001cac + uVar2 * 8) == '\0') {
      iVar3 = DAT_00001cac + uVar2 * 8;
      uVar4 = 0;
      *(undefined *)(iVar3 + 1) = param_3;
      *(undefined *)(iVar3 + 2) = param_2;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined *)(iVar1 + uVar2 * 8) = 1;
      *param_1 = uVar2 + 0x10;
      break;
    }
    uVar2 = uVar2 + 1;
    uVar4 = DAT_00001ca4;
  } while (uVar2 < 0x80);
  software_interrupt(0x5f);
  return uVar4;
}



/* FUN_00001cb0 @ 00001cb0 */

int FUN_00001cb0(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_30;
  int local_2c;
  
  puVar2 = DAT_00001ee0;
  iVar4 = DAT_00001edc;
  local_30 = param_3;
  iVar5 = *DAT_00001ea0;
  local_2c = iVar5;
  iVar11 = 0;
  iVar7 = param_1 - DAT_00001ea4;
  uVar6 = 0;
  if (param_1 == DAT_00001ea4) goto LAB_00001e04;
  if (param_1 != DAT_00001ea4 && DAT_00001ea4 <= param_1) {
    iVar3 = iVar7 - DAT_00001ec0;
    if (iVar7 == DAT_00001ec0) goto LAB_00001e36;
    if (iVar7 == DAT_00001ec0 || iVar7 < DAT_00001ec0) {
      iVar3 = iVar7 - DAT_00001ec4;
      if (iVar7 == DAT_00001ec4) goto LAB_00001e36;
      if (iVar7 <= DAT_00001ec4) {
        if (iVar7 == DAT_00001ec8) goto LAB_00001e36;
        if (iVar7 == DAT_00001ec8 || iVar7 < DAT_00001ec8) {
          if (iVar7 == 1) goto LAB_00001e04;
          if (iVar7 == 0x1000002b) goto LAB_00001e36;
        }
        else {
          iVar4 = (iVar7 - DAT_00001ec8) + DAT_00001ecc;
          if ((iVar4 == 0) || (iVar4 == 0x100000)) goto LAB_00001e36;
        }
        goto LAB_00001dfa;
      }
      if (((iVar3 == 0x100000) || (iVar3 == 0x200000)) || (iVar3 + DAT_00001ed0 == 0))
      goto LAB_00001e36;
      iVar3 = iVar3 + DAT_00001ed0 + -0x901;
    }
    else {
      iVar4 = -DAT_00001ecc;
      if (iVar3 == iVar4) goto LAB_00001e36;
      if (iVar3 == iVar4 || iVar3 + DAT_00001ecc < 0 != SBORROW4(iVar3,iVar4)) {
        if (iVar3 == 0x2000) goto LAB_00001e36;
        if (0x2000 < iVar3) {
          if ((iVar3 == 0x3000) || (iVar3 == 0x4000)) goto LAB_00001e36;
          goto LAB_00001dfa;
        }
        if (iVar3 == 0x1000) goto LAB_00001e36;
        iVar3 = iVar3 + -0x1812;
      }
      else {
        iVar3 = iVar3 + DAT_00001ecc + DAT_00001ed4;
        if (((iVar3 == 0) || (iVar3 = iVar3 + DAT_00001ed4, iVar3 == 0)) ||
           (iVar3 = iVar3 + DAT_00001ed4, iVar3 == 0)) goto LAB_00001e36;
        iVar3 = iVar3 + DAT_00001ed4;
      }
    }
LAB_00001df8:
    if (iVar3 == 0) goto LAB_00001e36;
LAB_00001dfa:
    iVar11 = DAT_00001ed8;
    goto LAB_00001e36;
  }
  iVar7 = param_1 - DAT_00001ea8;
  if (param_1 == DAT_00001ea8) {
LAB_00001e00:
    uVar8 = 1;
  }
  else {
    if (param_1 <= DAT_00001ea8) {
      iVar7 = param_1 - DAT_00001eac;
      if (param_1 != DAT_00001eac) {
        if (DAT_00001eac < param_1) {
          if (((iVar7 != 2) && (iVar7 != 0xff)) && ((iVar7 != 0x1ff && (iVar7 != 0x2ff))))
          goto LAB_00001dfa;
        }
        else {
          if (param_1 == DAT_00001eb0) goto LAB_00001e36;
          if (param_1 <= DAT_00001eb0) {
            if (param_1 + DAT_00001eb4 == 0) goto LAB_00001e36;
            iVar3 = param_1 + DAT_00001eb4 + 0x70000022;
            goto LAB_00001df8;
          }
          if (param_1 - DAT_00001eb0 == 2) goto LAB_00001e36;
          if (param_1 - DAT_00001eb0 != 0xff) goto LAB_00001dfa;
        }
      }
      goto LAB_00001e00;
    }
    if (iVar7 == DAT_00001eb8) goto LAB_00001e00;
    if (iVar7 != DAT_00001eb8 && DAT_00001eb8 <= iVar7) {
      if ((iVar7 - DAT_00001eb8 != 0x100) &&
         (iVar7 = (iVar7 - DAT_00001eb8) + DAT_00001ebc, iVar7 != 0)) {
joined_r0x00001d58:
        if ((iVar7 != 1) && (iVar7 != 2)) goto LAB_00001dfa;
      }
      goto LAB_00001e00;
    }
    if (iVar7 != 3) {
      if (iVar7 < 4) goto joined_r0x00001d58;
      if (iVar7 != 4) {
        if (iVar7 != 0x60e) goto LAB_00001dfa;
        goto LAB_00001e00;
      }
    }
LAB_00001e04:
    uVar8 = 2;
  }
  uVar10 = 0;
  iVar11 = DAT_00001ed8 + -10;
  do {
    uVar9 = (uint)*puVar2;
    if (*(char *)(iVar4 + uVar9) == '\0') {
      if (((uVar8 < 2) || (uVar6 != 0)) || (uVar9 + 0x46 >> 4 == (uVar9 + 0x46 + uVar8) - 1 >> 4)) {
        *(ushort *)((int)&local_30 + uVar6 * 2) = *puVar2;
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar8) {
          *(char *)(param_2 + 0x21) = (char)uVar8;
          for (uVar6 = 0; uVar6 < uVar8; uVar6 = uVar6 + 1) {
            uVar1 = *(ushort *)((int)&local_30 + uVar6 * 2);
            *(undefined *)(iVar4 + (uint)uVar1) = 1;
            *(char *)(param_2 + uVar6 + 0x23) = (char)uVar1 + 'F';
          }
          uVar1 = *puVar2;
          *puVar2 = uVar1 + 1;
          if (0x39 < (ushort)(uVar1 + 1)) {
            *puVar2 = 0;
          }
          iVar11 = 0;
          break;
        }
      }
    }
    else {
      uVar6 = 0;
    }
    *puVar2 = (ushort)(uVar9 + 1);
    if (0x39 < (uVar9 + 1 & 0xffff)) {
      uVar6 = 0;
      *puVar2 = 0;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x3a);
LAB_00001e36:
  if (local_2c != iVar5) {
    FUN_00001a20();
  }
  return iVar11;
}



/* FUN_00001ee4 @ 00001ee4 */

uint FUN_00001ee4(char param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  software_interrupt(0x5e);
  uVar2 = 0;
  do {
    pcVar1 = (char *)(DAT_00001f20 + uVar2 * 8);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[1] = param_1;
      uVar3 = uVar2;
      break;
    }
    uVar2 = uVar2 + 1;
    uVar3 = 0xffffffff;
  } while (uVar2 < 0x100);
  software_interrupt(0x5f);
  return uVar3;
}



/* FUN_00001f24 @ 00001f24 */

int FUN_00001f24(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  software_interrupt(0x5e);
  uVar1 = 0;
  do {
    pcVar2 = (char *)(DAT_00001f6c + uVar1 * 0x10);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      *(undefined4 *)(pcVar2 + 4) = param_2;
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      *(undefined4 *)(pcVar2 + 0xc) = param_1;
      iVar3 = uVar1 + 0x10;
      pcVar2[1] = param_3;
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  software_interrupt(0x5f);
  return iVar3;
}



/* FUN_00001f70 @ 00001f70 */

int FUN_00001f70(int *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = DAT_00001fd0;
  iVar5 = *(int *)(DAT_00001fc8 + 0x43c);
  iVar4 = *(int *)(DAT_00001fc8 + 0x440);
  if ((iVar5 == 0) && (iVar4 == 0)) {
    return DAT_00001fcc + -2;
  }
  iVar3 = (param_3 + 0xfffU & 0xfffff000) + 0x1000;
  uVar6 = *DAT_00001fd0;
  iVar2 = DAT_00001fcc;
  if (uVar6 + iVar3 == 0 && iVar3 == 0) {
    *param_1 = (iVar5 - 1U) + uVar6;
    *param_2 = iVar4 + (uint)(iVar5 != 0) + (uint)CARRY4(iVar5 - 1U,uVar6);
    *puVar1 = *puVar1 + iVar3;
    iVar2 = 0;
  }
  return iVar2;
}



/* FUN_00002004 @ 00002004 */

int FUN_00002004(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0000a120();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = DAT_00002068;
  if (*DAT_00002064 == '\x01') {
    iVar1 = FUN_0000fb3c(1000);
    if (iVar1 == 0) {
      iVar1 = FUN_00008ac0();
      if (iVar1 == 0x100) {
        iVar1 = DAT_00002068 + 3;
        goto LAB_0000204a;
      }
      iVar1 = FUN_00002288(0x211);
    }
    if ((iVar1 == DAT_0000206c) || (iVar1 == DAT_0000206c + 1)) goto LAB_00002052;
  }
LAB_0000204a:
  iVar2 = FUN_0000fb84(1000);
LAB_00002052:
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_00002070 @ 00002070 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002070(ushort *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined8 in_d0;
  undefined8 in_d17;
  undefined auStack_18 [8];
  
  if (!in_OV) {
    *unaff_r9 = in_lr;
    unaff_r9[-1] = unaff_r8;
    unaff_r9[-2] = unaff_r7;
    unaff_r9[-3] = unaff_r6;
    unaff_r9[-4] = unaff_r5;
    unaff_r9[-5] = unaff_r4;
  }
  if (in_CY) {
    param_2[-1] = auStack_18;
    param_2[-2] = unaff_r10;
  }
  if (in_NG) {
    *param_4 = 0x2084;
    param_4[-1] = in_lr;
    param_4[-2] = in_r12;
    param_4[-3] = param_2;
    param_4 = param_4 + -4;
  }
  if (in_CY && !in_ZR) {
    param_1 = (ushort *)((int)param_1 + 0x8d);
    in_lr = (uint)*param_1;
  }
  FloatVectorCompareEqual(in_d0,in_d17,2);
  if (in_NG) {
    coprocessor_store(7,in_cr1,param_2);
  }
  if (in_CY) {
    *param_2 = in_r12;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r10;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = unaff_r5;
    param_2[-6] = unaff_r4;
    param_2[-7] = param_3;
    param_2[-8] = param_2;
    *param_3 = 0x2098;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = param_4;
    param_3[-4] = param_2;
    *param_4 = 0x209c;
    param_4[-1] = in_lr;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r4;
    param_4[-4] = param_3;
    param_4[-5] = param_1;
  }
  if (!in_ZR) {
    software_interrupt(0x34d024);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00002118 @ 00002118 */

int FUN_00002118(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_10;
  
  iVar1 = DAT_00002190;
  if (*DAT_0000218c == '\x01') {
    local_10 = param_4;
    if (param_1 != 0x225) {
LAB_00002160:
      iVar1 = FUN_00008ac0();
      if (iVar1 == 0x100) {
        iVar1 = DAT_00002190 + 3;
        if (((param_1 != 0x225) && (param_1 != 0x227)) && (param_1 != 0x226)) {
          return DAT_00002190 + 1;
        }
      }
      else {
        iVar1 = FUN_00002288(param_1);
      }
      return iVar1;
    }
    local_10 = 0;
    uVar2 = FUN_00008cf0(0,0x14,3,0x68);
    iVar1 = FUN_0001730c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),&local_10,4);
    if (iVar1 == 0) {
      uVar2 = FUN_00008cf0(0,0x14,3,0x68);
      iVar1 = FUN_0000f8f8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),&local_10,4);
      if (iVar1 == 0) goto LAB_00002160;
    }
  }
  return iVar1;
}



/* FUN_00002194 @ 00002194 */

int FUN_00002194(void)

{
  int iVar1;
  
  iVar1 = DAT_000021d4;
  if (*DAT_000021d0 == '\x01') {
    iVar1 = FUN_00008ac0();
    if (iVar1 == 0x100) {
      iVar1 = DAT_000021d4 + 3;
    }
    else {
      iVar1 = FUN_00002288(0x215);
      if (iVar1 == 0) goto LAB_000021c0;
    }
  }
  FUN_000172e8(0x5b,DAT_000021d8);
LAB_000021c0:
  *DAT_000021dc = 1;
  return iVar1;
}



/* FUN_00002288 @ 00002288 */

int FUN_00002288(int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  int local_10;
  
  uVar2 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar1 = FUN_00011858(param_1,&local_10,&local_14);
  if (iVar1 == 0) {
    if ((param_1 != 0x203) && (param_1 != 0x217)) {
      iVar1 = 0;
      for (; uVar2 < local_14; uVar2 = uVar2 + 1) {
        iVar1 = *(int *)(local_10 + uVar2 * 8);
        software_interrupt(0x7c);
      }
      return iVar1;
    }
    for (; uVar2 < local_14; uVar2 = uVar2 + 1) {
      **(undefined4 **)(local_10 + uVar2 * 8) = *(undefined4 *)(local_10 + uVar2 * 8 + 4);
    }
  }
  return iVar1;
}



/* FUN_000022e4 @ 000022e4 */

undefined8 FUN_000022e4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar1 = 0;
  uVar5 = 0;
  uVar3 = param_2;
  for (uVar4 = 0; uVar4 < param_2; uVar4 = uVar4 + 1) {
    uVar2 = *(uint *)(param_1 + uVar4 * 8) & 0xfffff000;
    if (uVar2 != uVar5) {
      if (uVar1 != 0) {
        software_interrupt(0x7e);
      }
      uVar3 = 0x1000;
      software_interrupt(0x7d);
      uVar1 = uVar2;
      uVar5 = uVar2;
      uVar6 = DAT_00002340;
      if (uVar2 == 0) goto LAB_00002334;
    }
    uVar3 = *(uint *)(param_1 + uVar4 * 8 + 4);
    *(uint *)(uVar1 + (*(uint *)(param_1 + uVar4 * 8) & 0xfff)) = uVar3;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar3 = 0x1000;
    software_interrupt(0x7e);
  }
LAB_00002334:
  return CONCAT44(uVar3,uVar6);
}



/* FUN_00002344 @ 00002344 */

int FUN_00002344(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(DAT_0000236c + uVar1 * 0x58 + 0x54) == -1) {
      return uVar1 + 0x100;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return -1;
}



/* FUN_00002370 @ 00002370 */

undefined4 FUN_00002370(int *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_2[1] == param_3[1]) {
    puVar2 = param_3;
    puVar7 = param_2;
    if (*param_3 < *param_2) {
      puVar2 = param_2;
      puVar7 = param_3;
    }
    if (*puVar2 + 1 < 0x12d) {
      uVar5 = 0;
      for (uVar3 = 0; uVar3 < *puVar7; uVar3 = uVar3 + 1) {
        uVar6 = uVar5 + param_3[uVar3 + 3] + param_2[uVar3 + 3];
        uVar5 = uVar6 >> 0x1c;
        param_1[uVar3 + 3] = uVar6 & 0xfffffff;
      }
      for (uVar3 = *puVar7; uVar3 < *puVar2; uVar3 = uVar3 + 1) {
        uVar6 = uVar5 + puVar2[uVar3 + 3];
        uVar5 = uVar6 >> 0x1c;
        param_1[uVar3 + 3] = uVar6 & 0xfffffff;
      }
      param_1[uVar3 + 3] = uVar5;
      uVar3 = *puVar2;
      iVar4 = uVar3 + 1;
      *param_1 = iVar4;
      param_1[1] = param_2[1];
      if (param_1[uVar3 + 3] == 0) {
        while ((iVar4 != 0 && (param_1[iVar4 + 2] == 0))) {
          iVar4 = iVar4 + -1;
          *param_1 = iVar4;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0x8001;
    }
    return uVar1;
  }
  puVar2 = param_2;
  if (param_3[1] != 1) {
    puVar2 = param_3;
    param_3 = param_2;
  }
  uVar1 = FUN_00002d98(param_1,puVar2,param_3);
  return uVar1;
}



/* FUN_00002396 @ 00002396 */

undefined4 FUN_00002396(int *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = param_3;
  puVar7 = param_2;
  if (*param_3 < *param_2) {
    puVar6 = param_2;
    puVar7 = param_3;
  }
  if (*puVar6 + 1 < 0x12d) {
    uVar4 = 0;
    for (uVar2 = 0; uVar2 < *puVar7; uVar2 = uVar2 + 1) {
      uVar5 = uVar4 + param_3[uVar2 + 3] + param_2[uVar2 + 3];
      uVar4 = uVar5 >> 0x1c;
      param_1[uVar2 + 3] = uVar5 & 0xfffffff;
    }
    for (uVar2 = *puVar7; uVar2 < *puVar6; uVar2 = uVar2 + 1) {
      uVar5 = uVar4 + puVar6[uVar2 + 3];
      uVar4 = uVar5 >> 0x1c;
      param_1[uVar2 + 3] = uVar5 & 0xfffffff;
    }
    param_1[uVar2 + 3] = uVar4;
    uVar2 = *puVar6;
    iVar3 = uVar2 + 1;
    *param_1 = iVar3;
    param_1[1] = param_2[1];
    if (param_1[uVar2 + 3] == 0) {
      while ((iVar3 != 0 && (param_1[iVar3 + 2] == 0))) {
        iVar3 = iVar3 + -1;
        *param_1 = iVar3;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8001;
  }
  return uVar1;
}



/* FUN_0000243c @ 0000243c */

int FUN_0000243c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = (iVar2 + -1) * 0x1c;
    for (uVar3 = param_1[iVar2 + 2]; uVar3 != 0; uVar3 = uVar3 >> 1) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return 0;
}



/* FUN_00002460 @ 00002460 */

void FUN_00002460(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    uVar1 = 0;
    do {
      if ((param_1[uVar2 + 3] & 1 << (uVar1 & 0xff)) != 0) goto LAB_00002494;
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x1c);
  }
LAB_00002494:
  *param_2 = iVar3;
  return;
}



/* FUN_00002498 @ 00002498 */

undefined4 FUN_00002498(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  if (uVar4 < uVar3) {
    return 1;
  }
  if (uVar4 <= uVar3) {
    if (uVar4 == 0) {
      return 1;
    }
    do {
      if ((int)(uVar3 - 1) < 0) {
        return 3;
      }
      iVar1 = uVar3 + 2;
      iVar2 = uVar3 + 2;
      if (param_2[iVar2] < param_1[iVar1]) {
        return 1;
      }
      uVar3 = uVar3 - 1;
    } while (param_2[iVar2] <= param_1[iVar1]);
  }
  return 2;
}



/* FUN_000024d2 @ 000024d2 */

/* WARNING: Removing unreachable block (ram,0x000016c8) */
/* WARNING: Removing unreachable block (ram,0x000016c0) */
/* WARNING: Removing unreachable block (ram,0x000016bc) */
/* WARNING: Removing unreachable block (ram,0x000016c4) */
/* WARNING: Removing unreachable block (ram,0x000016cc) */
/* WARNING: Removing unreachable block (ram,0x000016d0) */

undefined8 FUN_000024d2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1 == param_2) {
    return CONCAT44(param_2,param_1);
  }
  uVar4 = 0x49c;
  do {
    uVar3 = uVar4;
    puVar1 = param_2;
    puVar2 = param_1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    uVar4 = uVar3 - 0x20;
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    uVar5 = puVar1[5];
    uVar6 = puVar1[6];
    uVar7 = puVar1[7];
    param_2 = puVar1 + 8;
    puVar2[4] = puVar1[4];
    puVar2[5] = uVar5;
    puVar2[6] = uVar6;
    puVar2[7] = uVar7;
    param_1 = puVar2 + 8;
  } while (0x1f < uVar3);
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    uVar5 = *param_2;
    uVar6 = puVar1[9];
    uVar7 = puVar1[10];
    uVar8 = puVar1[0xb];
    param_2 = puVar1 + 0xc;
    *param_1 = uVar5;
    puVar2[9] = uVar6;
    puVar2[10] = uVar7;
    puVar2[0xb] = uVar8;
    param_1 = puVar2 + 0xc;
  }
  if ((int)(uVar3 << 0x1c) < 0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar2 = param_2;
  if ((bool)((byte)(uVar4 >> 2) & 1)) {
    puVar2 = param_2 + 1;
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  return CONCAT44(puVar2,puVar1);
}



/* FUN_000024e0 @ 000024e0 */

int FUN_000024e0(uint *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_58;
  int local_54;
  
  if (*param_4 == 0) {
    iVar1 = 0x8002;
  }
  else {
    if (*param_3 == 0) {
      if (param_5 != (int *)0x0) {
        *param_5 = 0;
        param_5[1] = 0;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
    }
    else {
      iVar1 = FUN_00002498(param_3,param_4);
      if (iVar1 == 2) {
        if (param_5 != (int *)0x0) {
          FUN_000024d2(param_5,param_3);
        }
        if (param_2 != (int *)0x0) {
          *param_2 = 0;
          param_2[1] = 0;
        }
      }
      else {
        if (iVar1 != 3) {
          puVar2 = param_1 + 0x12f;
          puVar3 = param_1 + 0x25e;
          puVar4 = param_1 + 0x38d;
          puVar10 = param_1 + 0x4bc;
          puVar5 = param_1 + 0x5eb;
          *puVar3 = 0;
          param_1[0x25f] = 0;
          *puVar3 = *param_3 - *param_4;
          for (uVar6 = 0; uVar6 < *puVar3; uVar6 = uVar6 + 1) {
            param_1[uVar6 + 0x261] = 0;
          }
          uVar7 = FUN_0000243c(param_4);
          FUN_000019e8(uVar7,0x1c);
          if (extraout_r1 < 0x1b) {
            local_54 = 0x1b - extraout_r1;
            local_58 = FUN_000029ea(puVar2,param_4,local_54);
            bVar13 = local_58 == 0;
            do {
              if (!bVar13) goto LAB_000027c0;
              local_58 = FUN_000029ea(param_1,param_3,local_54);
              bVar13 = local_58 == 0;
            } while (!bVar13);
          }
          else {
            FUN_000024d2(param_1,param_3);
            FUN_000024d2(puVar2,param_4);
            local_54 = 0;
          }
          uVar6 = *param_1 - 1;
          uVar11 = *puVar2;
          iVar12 = uVar11 - 1;
          iVar1 = uVar6 - iVar12;
          local_58 = FUN_00002b1e(puVar4,puVar2,iVar1);
          if (local_58 == 0) {
            while (iVar8 = FUN_00002498(param_1,puVar4), iVar8 != 2) {
              param_1[iVar1 + 0x261] = param_1[iVar1 + 0x261] + 1;
              FUN_00002d82(param_1,param_1,puVar4);
            }
            for (; uVar11 <= uVar6; uVar6 = uVar6 - 1) {
              if (uVar6 <= *param_1) {
                uVar9 = param_1[uVar6 + 3];
                if (uVar9 == param_1[uVar11 + 0x131]) {
                  param_1[(uVar6 - iVar12) + 0x260] = 0xfffffff;
                }
                else {
                  uVar14 = FUN_0000100c(param_1[uVar6 + 2] + uVar9 * 0x10000000,
                                        (uVar9 >> 4) +
                                        (uint)CARRY4(param_1[uVar6 + 2],uVar9 * 0x10000000),
                                        param_1[uVar11 + 0x131],0);
                  uVar9 = (uint)uVar14;
                  if ((uint)(uVar9 < 0x10000000) <= (uint)-(int)((ulonglong)uVar14 >> 0x20)) {
                    uVar9 = 0xfffffff;
                  }
                  param_1[(uVar6 - iVar12) + 0x260] = uVar9;
                }
                iVar1 = uVar6 - iVar12;
                param_1[iVar1 + 0x260] = param_1[iVar1 + 0x260] + 1 & 0xfffffff;
                do {
                  param_1[iVar1 + 0x260] = param_1[iVar1 + 0x260] - 1 & 0xfffffff;
                  param_1[0x5ec] = 0;
                  *puVar5 = 1;
                  param_1[0x5ee] = param_1[iVar1 + 0x260];
                  *puVar10 = 2;
                  param_1[0x4bd] = 0;
                  if (iVar12 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = param_1[uVar11 + 0x130];
                  }
                  param_1[0x4bf] = uVar9;
                  param_1[0x4c0] = param_1[uVar11 + 0x131];
                  local_58 = FUN_000028e0(puVar4,puVar10,puVar5,0);
                  if (local_58 != 0) goto LAB_000027c0;
                  param_1[0x4bd] = 0;
                  *puVar10 = 3;
                  if (uVar6 < 2) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = param_1[uVar6 + 1];
                  }
                  param_1[0x4bf] = uVar9;
                  if (uVar6 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = param_1[uVar6 + 2];
                  }
                  param_1[0x4c0] = uVar9;
                  param_1[0x4c1] = param_1[uVar6 + 3];
                  iVar8 = FUN_00002498(puVar4,puVar10);
                } while (iVar8 == 1);
                local_58 = FUN_00002b1e(puVar4,puVar2,iVar1 + -1);
                if (((local_58 != 0) ||
                    (local_58 = FUN_000028e0(puVar10,puVar4,puVar5,0), local_58 != 0)) ||
                   (local_58 = FUN_00002d82(param_1,param_1,puVar10), local_58 != 0)) break;
                if (param_1[1] == 1) {
                  local_58 = FUN_00002370(param_1,param_1,puVar4);
                  if (local_58 != 0) break;
                  param_1[iVar1 + 0x260] = param_1[iVar1 + 0x260] - 1 & 0xfffffff;
                }
              }
            }
          }
LAB_000027c0:
          if ((param_2 != (int *)0x0) && (FUN_000024d2(param_2,puVar3), param_2[*param_2 + 2] == 0))
          {
            iVar1 = *param_2;
            while ((iVar1 != 0 && (param_2[iVar1 + 2] == 0))) {
              iVar1 = iVar1 + -1;
              *param_2 = iVar1;
            }
          }
          if (param_5 == (int *)0x0) {
            return local_58;
          }
          FUN_00002a84(param_5,param_1,local_54);
          if (param_5[*param_5 + 2] != 0) {
            return local_58;
          }
          iVar1 = *param_5;
          while( true ) {
            if (iVar1 == 0) {
              return local_58;
            }
            if (param_5[iVar1 + 2] != 0) break;
            iVar1 = iVar1 + -1;
            *param_5 = iVar1;
          }
          return local_58;
        }
        if (param_5 != (int *)0x0) {
          *param_5 = 0;
          param_5[1] = 0;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = 1;
          param_2[1] = 0;
          param_2[3] = 1;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_0000281e @ 0000281e */

void FUN_0000281e(void)

{
  FUN_00002e56();
  return;
}



/* FUN_0000282a @ 0000282a */

void FUN_0000282a(void)

{
  FUN_00002e56();
  return;
}



/* FUN_00002836 @ 00002836 */

undefined4 FUN_00002836(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = FUN_000019e8(param_3,7);
  if (((param_3 & 3) == 0) && (iVar1 * 2 + 2U < 0x12d)) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00001728(param_1 + 3,0x4b0);
    uVar4 = 0;
    iVar1 = 0;
    uVar5 = 0;
    do {
      while( true ) {
        iVar3 = iVar1;
        uVar6 = *param_2;
        param_1[iVar3 + 3] = uVar5 + (uVar6 << ((uVar4 & 0x3f) << 2)) & 0xfffffff;
        uVar5 = uVar6 >> (uVar4 * -4 + 0x1c & 0xff);
        iVar1 = iVar3 + 1;
        uVar4 = uVar4 + 1;
        if (uVar4 != 8) break;
        uVar4 = 0;
        uVar5 = uVar4;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
    } while (param_3 != 0);
    if (uVar5 != 0) {
      iVar1 = iVar3 + 2;
      param_1[iVar3 + 4] = uVar5 & 0xfffffff;
    }
    *param_1 = iVar1;
    if (param_1[iVar1 + 2] == 0) {
      iVar1 = *param_1;
      while ((iVar1 != 0 && (param_1[iVar1 + 2] == 0))) {
        iVar1 = iVar1 + -1;
        *param_1 = iVar1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8006;
  }
  return uVar2;
}



/* FUN_000028e0 @ 000028e0 */

undefined4 FUN_000028e0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  if ((param_1 == param_2) || (param_1 == param_3)) {
    uVar2 = 0x8002;
  }
  else {
    if ((*param_2 == 0) || (*param_3 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (param_4 == 0) {
        param_4 = *param_2 + *param_3;
      }
      if (300 < param_4) {
        return 0x8004;
      }
      if (param_2[1] == param_3[1]) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = 1;
      }
      *param_1 = param_4;
      puVar10 = param_2 + 3;
      uVar4 = *param_2;
      puVar8 = param_3 + 3;
      uVar5 = *param_3 - 1;
      param_2 = param_2 + 4;
      uVar1 = 0;
      for (uVar9 = 0; puVar3 = puVar10, puVar7 = puVar8, uVar9 < uVar5; uVar9 = uVar9 + 1) {
        for (; uVar6 = (uint)uVar1, puVar3 < param_2; puVar3 = puVar3 + 1) {
          uVar1 = (ulonglong)*puVar3 * (ulonglong)*puVar7 + uVar1;
          puVar7 = puVar7 + -1;
        }
        puVar8 = puVar8 + 1;
        if (uVar9 < uVar4 - 1) {
          param_2 = param_2 + 1;
        }
        uVar1 = uVar1 >> 0x1c;
        param_1[uVar9 + 3] = uVar6 & 0xfffffff;
      }
      for (; puVar3 = puVar10, puVar7 = puVar8, uVar5 < param_4; uVar5 = uVar5 + 1) {
        for (; puVar3 < param_2; puVar3 = puVar3 + 1) {
          uVar1 = (ulonglong)*puVar3 * (ulonglong)*puVar7 + uVar1;
          puVar7 = puVar7 + -1;
        }
        puVar10 = puVar10 + 1;
        if (uVar5 < uVar4 - 1) {
          param_2 = param_2 + 1;
        }
        param_1[uVar5 + 3] = (uint)uVar1 & 0xfffffff;
        uVar1 = uVar1 >> 0x1c;
      }
      if (param_1[*param_1 + 2] == 0) {
        uVar4 = *param_1;
        while ((uVar4 != 0 && (param_1[uVar4 + 2] == 0))) {
          uVar4 = uVar4 - 1;
          *param_1 = uVar4;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_000029ea @ 000029ea */

int FUN_000029ea(uint *param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_3 == 0) || (*param_2 == 0)) {
    if (param_2 != param_1) {
      FUN_000024d2(param_1);
    }
    iVar5 = 0;
  }
  else {
    if (0x1b < param_3) {
      uVar1 = FUN_000019e8(param_3,0x1c);
      iVar5 = FUN_00002b1e(param_1,param_2,uVar1);
      param_2 = param_1;
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_000019e8(param_3,0x1c);
    if ((extraout_r1 != 0) && (*param_2 != 0)) {
      uVar3 = 0;
      for (uVar2 = 0; uVar2 < *param_2; uVar2 = uVar2 + 1) {
        uVar4 = param_2[uVar2 + 3];
        param_1[uVar2 + 3] = uVar3 + (uVar4 << (extraout_r1 & 0xff) & 0xfffffff);
        uVar3 = uVar4 >> (0x1c - extraout_r1 & 0xff);
      }
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      if (uVar3 != 0) {
        param_1[uVar2 + 3] = uVar3;
        *param_1 = *param_1 + 1;
      }
    }
  }
  return iVar5;
}



/* FUN_00002a84 @ 00002a84 */

void FUN_00002a84(int *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  
  if ((param_3 == 0) || (*param_2 == 0)) {
    if (param_2 != param_1) {
      FUN_000024d2(param_1);
      return;
    }
  }
  else {
    if (0x1b < param_3) {
      uVar1 = FUN_000019e8(param_3,0x1c);
      FUN_00002b6e(param_1,param_2,uVar1);
      param_2 = param_1;
    }
    FUN_000019e8(param_3,0x1c);
    if ((extraout_r1 != 0) && (*param_2 != 0)) {
      iVar4 = 0;
      iVar2 = *param_2;
      while (-1 < iVar2 + -1) {
        uVar3 = param_2[iVar2 + 2];
        param_1[iVar2 + 2] = iVar4 + (uVar3 >> (extraout_r1 & 0xff));
        iVar4 = (uVar3 & (1 << (extraout_r1 & 0xff)) - 1U) << (0x1c - extraout_r1 & 0xff);
        iVar2 = iVar2 + -1;
      }
      iVar2 = *param_2;
      *param_1 = iVar2;
      param_1[1] = param_2[1];
      if (param_1[*param_2 + 2] == 0) {
        *param_1 = iVar2 + -1;
      }
    }
  }
  return;
}



/* FUN_00002b1e @ 00002b1e */

undefined4 FUN_00002b1e(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 == 0) || (*param_2 == 0)) {
    if (param_2 != param_1) {
      FUN_000024d2();
    }
  }
  else {
    uVar1 = *param_2 + param_3;
    if (300 < uVar1) {
      return 0x8001;
    }
    *param_1 = uVar1;
    param_1[1] = param_2[1];
    while (uVar2 = uVar1 - 1, param_3 <= uVar2) {
      param_1[uVar1 + 2] = param_2[(uVar2 - param_3) + 3];
      uVar1 = uVar2;
    }
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
      param_1[uVar1 + 3] = 0;
    }
  }
  return 0;
}



/* FUN_00002b6e @ 00002b6e */

void FUN_00002b6e(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    if (param_2 != param_1) {
      FUN_000024d2();
      return;
    }
  }
  else {
    uVar1 = param_3;
    if (param_3 < *param_2) {
      for (; uVar1 < *param_2; uVar1 = uVar1 + 1) {
        param_1[(uVar1 - param_3) + 3] = param_2[uVar1 + 3];
      }
      *param_1 = *param_2 - param_3;
      uVar1 = param_2[1];
    }
    else {
      uVar1 = 0;
      *param_1 = 0;
    }
    param_1[1] = uVar1;
  }
  return;
}



/* FUN_00002bb2 @ 00002bb2 */

undefined8 FUN_00002bb2(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *local_30;
  
  local_30 = param_2;
  if (param_1 == param_2) {
    uVar4 = 0x8002;
  }
  else {
    if (*param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar6 = *param_2 * 2;
      if (300 < uVar6) {
        uVar4 = 0x8004;
        goto LAB_00002bbe;
      }
      param_1[1] = 0;
      *param_1 = uVar6;
      local_30 = param_2 + 3;
      uVar3 = 0;
      uVar13 = *param_2 - 1;
      puVar5 = local_30;
      puVar12 = local_30;
      for (uVar9 = 0; puVar7 = local_30, uVar9 < uVar13; uVar9 = uVar9 + 1) {
        lVar2 = 0;
        puVar8 = puVar12;
        while( true ) {
          uVar10 = (uint)lVar2;
          if (puVar5 <= puVar7) break;
          uVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          lVar2 = (ulonglong)uVar10 * (ulonglong)*puVar8 + lVar2;
          puVar8 = puVar8 + -1;
        }
        lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar10,uVar10),
                         uVar10 * 2);
        uVar1 = uVar3 + lVar2;
        if ((uVar9 & 1) == 0) {
          puVar5 = puVar5 + 1;
          uVar1 = (ulonglong)local_30[uVar9 >> 1] * (ulonglong)local_30[uVar9 >> 1] + uVar3 + lVar2;
        }
        puVar12 = puVar12 + 1;
        uVar3 = uVar1 >> 0x1c;
        param_1[uVar9 + 3] = (uint)uVar1 & 0xfffffff;
      }
      for (; uVar13 < uVar6; uVar13 = uVar13 + 1) {
        lVar2 = 0;
        puVar8 = puVar7;
        puVar11 = puVar12;
        while( true ) {
          uVar9 = (uint)lVar2;
          if (puVar5 <= puVar8) break;
          uVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          lVar2 = (ulonglong)uVar9 * (ulonglong)*puVar11 + lVar2;
          puVar11 = puVar11 + -1;
        }
        lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar9,uVar9),uVar9 * 2);
        uVar1 = uVar3 + lVar2;
        if ((uVar13 & 1) == 0) {
          puVar5 = puVar5 + 1;
          uVar1 = (ulonglong)local_30[uVar13 >> 1] * (ulonglong)local_30[uVar13 >> 1] +
                  uVar3 + lVar2;
        }
        uVar3 = uVar1 >> 0x1c;
        param_1[uVar13 + 3] = (uint)uVar1 & 0xfffffff;
        puVar7 = puVar7 + 1;
      }
      if (param_1[*param_1 + 2] == 0) {
        uVar6 = *param_1;
        while ((uVar6 != 0 && (param_1[uVar6 + 2] == 0))) {
          uVar6 = uVar6 - 1;
          *param_1 = uVar6;
        }
      }
    }
    uVar4 = 0;
  }
LAB_00002bbe:
  return CONCAT44(local_30,uVar4);
}



/* FUN_00002cde @ 00002cde */

byte * FUN_00002cde(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) {
    return (byte *)0x8003;
  }
  if ((param_3 & 3) != 0) {
    return (byte *)0x8006;
  }
  if (*param_1 < 0x12d) {
    if (param_1[*param_1 + 2] == 0) {
      uVar2 = *param_1;
      while ((uVar2 != 0 && (param_1[uVar2 + 2] == 0))) {
        uVar2 = uVar2 - 1;
        *param_1 = uVar2;
      }
    }
    iVar3 = 0;
    uVar2 = 0;
    while( true ) {
      if (*param_1 - 1 <= uVar2) {
        return (byte *)0x0;
      }
      if (param_3 == 0) break;
      if (iVar3 == 7) {
        *param_2 = param_1[uVar2 + 4] + (param_1[uVar2 + 3] >> 0x1c);
        iVar3 = 0;
      }
      else {
        uVar4 = iVar3 * 4;
        iVar1 = iVar3 * -4;
        iVar3 = iVar3 + 1;
        param_3 = param_3 - 4;
        *param_2 = (param_1[uVar2 + 3] >> (uVar4 & 0xff)) +
                   (((1 << (uVar4 + 4 & 0xff)) - 1U & param_1[uVar2 + 4]) << (iVar1 + 0x1cU & 0xff))
        ;
        param_2 = param_2 + 1;
      }
      uVar2 = uVar2 + 1;
    }
    return &BYTE_00008b01;
  }
  return (byte *)0x8001;
}



/* FUN_00002d82 @ 00002d82 */

undefined4 FUN_00002d82(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  if (param_2[1] != param_3[1]) {
    uVar1 = FUN_00002396();
    return uVar1;
  }
  iVar2 = FUN_00002498(param_2,param_3);
  puVar9 = param_3 + 3;
  puVar10 = param_2 + 3;
  if (iVar2 == 2) {
    uVar7 = *param_3;
    uVar8 = *param_2;
    puVar6 = puVar9;
    if (param_2[1] == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    if (iVar2 != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar7 = *param_2;
    uVar8 = *param_3;
    uVar3 = param_2[1];
    puVar6 = puVar10;
    puVar10 = puVar9;
  }
  param_1[1] = uVar3;
  uVar3 = 0;
  for (uVar4 = 0; uVar4 < uVar8; uVar4 = uVar4 + 1) {
    uVar5 = puVar10[uVar4] + uVar3;
    uVar3 = (uint)(puVar6[uVar4] < uVar5);
    param_1[uVar4 + 3] = (puVar6[uVar4] + uVar3 * 0x10000000) - uVar5;
  }
  for (; uVar8 < uVar7; uVar8 = uVar8 + 1) {
    uVar4 = (uint)(puVar6[uVar8] < uVar3);
    param_1[uVar8 + 3] = (puVar6[uVar8] + uVar4 * 0x10000000) - uVar3;
    uVar3 = uVar4;
  }
  *param_1 = uVar7;
  if (param_1[uVar7 + 2] == 0) {
    while ((uVar7 != 0 && (param_1[uVar7 + 2] == 0))) {
      uVar7 = uVar7 - 1;
      *param_1 = uVar7;
    }
  }
  return 0;
}



/* FUN_00002d98 @ 00002d98 */

undefined4 FUN_00002d98(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  iVar1 = FUN_00002498(param_2,param_3);
  puVar8 = param_3 + 3;
  puVar9 = param_2 + 3;
  if (iVar1 == 2) {
    uVar6 = *param_3;
    uVar7 = *param_2;
    puVar5 = puVar8;
    if (param_2[1] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (iVar1 != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar6 = *param_2;
    uVar7 = *param_3;
    uVar2 = param_2[1];
    puVar5 = puVar9;
    puVar9 = puVar8;
  }
  param_1[1] = uVar2;
  uVar2 = 0;
  for (uVar3 = 0; uVar3 < uVar7; uVar3 = uVar3 + 1) {
    uVar4 = puVar9[uVar3] + uVar2;
    uVar2 = (uint)(puVar5[uVar3] < uVar4);
    param_1[uVar3 + 3] = (puVar5[uVar3] + uVar2 * 0x10000000) - uVar4;
  }
  for (; uVar7 < uVar6; uVar7 = uVar7 + 1) {
    uVar3 = (uint)(puVar5[uVar7] < uVar2);
    param_1[uVar7 + 3] = (puVar5[uVar7] + uVar3 * 0x10000000) - uVar2;
    uVar2 = uVar3;
  }
  *param_1 = uVar6;
  if (param_1[uVar6 + 2] == 0) {
    while ((uVar6 != 0 && (param_1[uVar6 + 2] == 0))) {
      uVar6 = uVar6 - 1;
      *param_1 = uVar6;
    }
  }
  return 0;
}



/* FUN_00002e56 @ 00002e56 */

undefined4 FUN_00002e56(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_38;
  
  local_38 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == 0)) || (param_4 == 0)) {
    local_38 = 0x8003;
  }
  else {
    piVar8 = param_1 + 0x4bc;
    piVar6 = param_1 + 0x25e;
    piVar5 = param_1 + 0x38d;
    piVar7 = param_1 + 0x5eb;
    iVar1 = *(int *)(param_4 + 0xc);
    FUN_000024d2(param_1,param_4);
    FUN_000024d2(param_2,param_3);
    while (((param_1[3] & 1U) == 0 && ((param_2[3] & 1U) == 0))) {
      FUN_00002a84(param_1,param_1,1);
      FUN_00002a84(param_2,param_2,1);
    }
    *piVar5 = 0;
    param_1[0x38e] = 0;
    *piVar8 = 0;
    param_1[0x4bd] = 0;
    *piVar6 = 1;
    param_1[0x25f] = 0;
    param_1[0x261] = 1;
    FUN_000024d2(piVar7,piVar6);
    do {
      if (iVar1 << 0x1f < 0) {
        while ((*param_1 != 0 && ((param_1[3] & 1U) == 0))) {
          FUN_00002a84(param_1,param_1,1);
          if ((param_1[0x390] & 1U) != 0) {
            FUN_00002d82(piVar5,piVar5,param_4);
          }
          FUN_00002a84(piVar5,piVar5,1);
        }
        while ((*param_2 != 0 && ((param_2[3] & 1U) == 0))) {
          FUN_00002a84(param_2,param_2,1);
          if ((param_1[0x5ee] & 1U) != 0) {
            FUN_00002d82(piVar7,piVar7,param_4);
          }
          FUN_00002a84(piVar7,piVar7,1);
        }
        iVar2 = FUN_00002498(param_1,param_2);
        piVar4 = param_2;
        piVar3 = param_1;
        if (iVar2 == 2) goto LAB_0000303c;
LAB_0000302c:
        FUN_00002d82(piVar3,piVar3,piVar4);
        piVar4 = piVar5;
        piVar3 = piVar7;
      }
      else {
        while ((*param_1 != 0 && ((param_1[3] & 1U) == 0))) {
          FUN_00002a84(param_1,param_1,1);
          if (((param_1[0x261] & 1U) != 0) || ((param_1[0x390] & 1U) != 0)) {
            FUN_00002370(piVar6,piVar6,param_3);
            FUN_00002d82(piVar5,piVar5,param_4);
          }
          FUN_00002a84(piVar6,piVar6,1);
          FUN_00002a84(piVar5,piVar5,1);
        }
        while ((*param_2 != 0 && ((param_2[3] & 1U) == 0))) {
          FUN_00002a84(param_2,param_2,1);
          if (((param_1[0x4bf] & 1U) != 0) || ((param_1[0x5ee] & 1U) != 0)) {
            FUN_00002370(piVar8,piVar8,param_3);
            FUN_00002d82(piVar7,piVar7,param_4);
          }
          FUN_00002a84(piVar8,piVar8,1);
          FUN_00002a84(piVar7,piVar7,1);
        }
        iVar2 = FUN_00002498(param_1,param_2);
        if (iVar2 != 2) {
          FUN_00002d82(param_1,param_1,param_2);
          piVar3 = piVar6;
          piVar4 = piVar8;
          goto LAB_0000302c;
        }
        FUN_00002d82(param_2,param_2,param_1);
        piVar4 = piVar8;
        piVar3 = piVar6;
LAB_0000303c:
        FUN_00002d82(piVar4,piVar4,piVar3);
        piVar4 = piVar7;
        piVar3 = piVar5;
      }
      FUN_00002d82(piVar4,piVar4,piVar3);
    } while (*param_1 != 0);
    if (param_5 == 1) {
      if ((*param_2 == 1) && (param_2[3] == 1)) {
        FUN_000024d2(param_2,piVar7);
        while (param_2[1] == 1) {
          FUN_00002370(param_2,param_2,param_4);
        }
      }
      else {
        local_38 = 0x8005;
      }
    }
  }
  return local_38;
}



/* FUN_0000308c @ 0000308c */

undefined4 FUN_0000308c(ushort *param_1,uint param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  ushort *puVar3;
  
  uVar1 = DAT_000030c4;
  if (((param_2 | (uint)param_1) & 3) == 0) {
    puVar3 = (ushort *)((int)param_1 + (param_2 - 4));
    iVar2 = *(int *)puVar3;
    do {
      FUN_000019e8(iVar2,param_3);
      puVar3 = puVar3 + -1;
      iVar2 = (uint)*puVar3 + extraout_r1 * 0x10000;
    } while (param_1 <= puVar3);
    *param_4 = extraout_r1;
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_000030c8 @ 000030c8 */

void FUN_000030c8(undefined4 param_1)

{
  FUN_000031d0(param_1);
  return;
}



/* FUN_000030f4 @ 000030f4 */

undefined4
FUN_000030f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  *param_1 = param_6;
  param_1[1] = param_4;
  param_1[2] = param_3;
  iVar1 = *(int *)(DAT_00003114 + 8) << 0x10;
  param_1[3] = iVar1;
  param_1[4] = param_2;
  param_1[5] = iVar1;
  param_1[6] = param_5;
  return 0;
}



/* FUN_00003118 @ 00003118 */

void FUN_00003118(undefined4 param_1)

{
  FUN_000031d0(param_1);
  return;
}



/* FUN_00003144 @ 00003144 */

void FUN_00003144(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00003860(param_6,0,param_7,0,param_8,param_4);
  FUN_000030f4(param_1,param_2,param_3,param_4,param_5,uVar1);
  *(int *)(param_1 + 0x1c) = *(int *)(DAT_00003180 + 8) << 0x10;
  return;
}



/* FUN_00003184 @ 00003184 */

void FUN_00003184(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  
  local_28 = param_4;
  iVar1 = FUN_00008824(1,&local_28,param_3,param_8,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_00003860(param_6,0,param_7,0,param_8);
    FUN_000030f4(param_1,param_2,param_3,param_4,param_5 << 5,uVar2);
    *(int *)(param_1 + 0x1c) = local_28 << 0x10;
  }
  return;
}



/* FUN_000031d0 @ 000031d0 */

void FUN_000031d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  
  if (param_8 != 3) {
    if (param_8 == 4) {
      param_9 = 0x7f;
    }
    else {
      param_9 = 0;
    }
  }
  uVar1 = FUN_00003860(param_7,param_8,param_10,param_9,param_11,param_3,param_4);
  FUN_00003224(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
  *(int *)(param_1 + 0x1c) = *(int *)(DAT_00003220 + 8) << 0x10;
  return;
}



/* FUN_00003224 @ 00003224 */

undefined4
FUN_00003224(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  
  *param_1 = param_7;
  param_1[1] = param_4;
  param_1[2] = param_3;
  iVar1 = *(int *)(DAT_0000324c + 8);
  param_1[3] = param_6 << 0x12 | iVar1 << 0x10;
  param_1[4] = param_2;
  param_1[5] = iVar1 << 0x10;
  param_1[6] = param_5;
  return 0;
}



/* FUN_00003250 @ 00003250 */

undefined4
FUN_00003250(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00008eae(param_7);
  param_1[2] = param_2;
  iVar2 = DAT_000032a0;
  *param_1 = (param_5 << 0xd | 0x580U) << 5 | uVar1 | 0x2000008;
  param_1[1] = param_3;
  iVar2 = *(int *)(iVar2 + 8);
  param_1[3] = param_6 << 0x12 | iVar2 << 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  param_1[7] = iVar2 << 0x10;
  return 0;
}



/* FUN_000032a4 @ 000032a4 */

void FUN_000032a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_000046d4(0,param_5);
  param_1[2] = param_3;
  *param_1 = uVar1;
  param_1[1] = param_4;
  iVar2 = *(int *)(DAT_000032d4 + 8) << 0x10;
  param_1[3] = iVar2;
  param_1[4] = param_2;
  param_1[5] = iVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* FUN_000032d8 @ 000032d8 */

int FUN_000032d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,uint param_10,undefined4 param_11,int param_12)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = param_3;
  local_2c = param_4;
  iVar1 = FUN_00008824(param_5,&local_30);
  if ((iVar1 == 0) && (iVar1 = FUN_00008824(param_9,&local_2c), iVar1 == 0)) {
    uVar4 = FUN_000051a0(param_3,param_4,param_5);
    uVar5 = FUN_000051a0(param_7,param_8,param_9);
    if (param_12 << 0x1e < 0) {
      uVar2 = 2;
    }
    else if (param_12 << 0x1d < 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    uVar6 = FUN_000046d4(uVar2,param_12);
    *param_1 = (int)uVar6;
    param_1[1] = param_11;
    param_1[2] = (int)uVar5;
    uVar3 = FUN_00011fc8(local_2c,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                         (int)((ulonglong)uVar5 >> 0x20));
    param_1[3] = uVar3 | param_10;
    param_1[4] = (int)uVar4;
    uVar3 = FUN_00011fc8(local_30,param_10,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    param_1[5] = uVar3 | param_6;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return iVar1;
}



/* FUN_00003370 @ 00003370 */

void FUN_00003370(void)

{
  FUN_00003380();
  return;
}



/* FUN_00003380 @ 00003380 */

undefined4
FUN_00003380(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  
  local_20 = param_4;
  iVar1 = FUN_00008824(1,&local_20);
  if (iVar1 == 0) {
    uVar2 = FUN_000046d4(param_4,param_6);
    *param_1 = uVar2;
    param_1[1] = param_5;
    param_1[2] = param_3 << 5;
    param_1[3] = local_20 << 0x10;
    param_1[4] = param_2;
    param_1[5] = *(int *)(DAT_000033c4 + 8) << 0x10;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return 0;
}



/* FUN_000033c8 @ 000033c8 */

void FUN_000033c8(void)

{
  FUN_000033d8();
  return;
}



/* FUN_000033d8 @ 000033d8 */

int FUN_000033d8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  
  local_20 = param_4;
  iVar1 = FUN_00008824(1,&local_20);
  if (iVar1 == 0) {
    uVar2 = FUN_000046d4(param_4,param_6);
    param_1[2] = param_3;
    *param_1 = uVar2;
    param_1[1] = param_5;
    param_1[3] = *(int *)(DAT_00003420 + 8) << 0x10;
    param_1[4] = param_2 << 5;
    param_1[5] = local_20 << 0x10;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return iVar1;
}



/* FUN_00003424 @ 00003424 */

void FUN_00003424(uint *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_5);
  param_1[2] = param_3;
  *param_1 = uVar1 | 0x600018;
  param_1[1] = param_4;
  uVar1 = *(int *)(DAT_0000345c + 8) << 0x10;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* FUN_00003460 @ 00003460 */

void FUN_00003460(uint *param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6
                 )

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_6);
  *param_1 = (param_2 << 0xc | param_5 << 3) << 5 | 0x700000U | uVar1 | 0x2000010;
  param_1[1] = 0x240;
  param_1[2] = param_4;
  uVar1 = *(int *)(DAT_000034a8 + 8) << 0x10;
  param_1[3] = uVar1;
  param_1[4] = param_3;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* FUN_000034ac @ 000034ac */

undefined4
FUN_000034ac(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
            undefined4 param_7)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_7);
  *param_1 = uVar1 | 0x18 | param_5 << 8 | 0x400000;
  param_1[1] = param_4 + param_5;
  param_1[2] = param_3;
  uVar1 = *(int *)(DAT_000034f0 + 8) << 0x10;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  param_1[5] = uVar1;
  param_1[6] = param_6;
  param_1[7] = uVar1;
  return 0;
}



/* FUN_000034f4 @ 000034f4 */

int FUN_000034f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = FUN_00008824(param_5,&local_20);
  if (iVar1 == 0) {
    *param_1 = param_8;
    param_1[1] = param_6;
    param_1[2] = param_3;
    uVar2 = FUN_00004748(param_7,local_20,param_3);
    param_1[3] = uVar2;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return iVar1;
}



/* FUN_00003530 @ 00003530 */

void FUN_00003530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  *param_1 = param_5;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = param_4 << 0x12 | *(int *)(DAT_00003550 + 8) << 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* FUN_00003554 @ 00003554 */

void FUN_00003554(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_7);
  FUN_00003530(param_1,param_2,param_3,param_5,uVar1 | 0x18 | param_6 << 0xf | 0x300000);
  *(int *)(param_1 + 0x10) = param_4 << 3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* FUN_00003592 @ 00003592 */

void FUN_00003592(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9,
                 undefined4 param_10)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00008eae(param_10);
  uVar3 = FUN_000051a0(param_3,param_4,param_5);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_000034f4(param_1,uVar2,(int)uVar3,uVar2,param_5,param_6,param_8,
               uVar1 | 0x18 | param_9 << 0xf | 0x300000);
  *(int *)(param_1 + 0x10) = param_7 << 3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* FUN_000035e4 @ 000035e4 */

void FUN_000035e4(void)

{
  FUN_000033c8();
  return;
}



/* FUN_000035fe @ 000035fe */

void FUN_000035fe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_6);
  FUN_00003530(param_1,param_2,param_3,param_4,uVar1 | 8 | param_5 << 0xf | 0x300000);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* FUN_00003638 @ 00003638 */

int FUN_00003638(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 local_124;
  undefined auStack_120 [256];
  int local_20;
  
  pcVar1 = DAT_000036c4;
  iVar3 = *DAT_000036bc;
  iVar2 = DAT_000036c0;
  local_20 = iVar3;
  if (0x13f < param_3) {
    if (*DAT_000036c4 == '\0') {
      local_124 = 0;
      FUN_000016e4(auStack_120,0xe0);
      iVar2 = FUN_000060f8(param_1,DAT_000036cc,&local_124,4,DAT_000036c8,0x20,auStack_120);
      if (iVar2 != 0) goto LAB_000036a8;
      *pcVar1 = '\x01';
    }
    FUN_000016e4(param_2,param_3);
    FUN_000015e4(param_2 + 0x100,DAT_000036c8,0x20);
    *(undefined4 *)(param_2 + 0x14) = 0x40;
    iVar2 = 0;
  }
LAB_000036a8:
  if (local_20 != iVar3) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_000036d0 @ 000036d0 */

void FUN_000036d0(int param_1,uint param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  for (uVar2 = 0; uVar2 < param_2 >> 1; uVar2 = uVar2 + 1) {
    uVar1 = *(undefined *)(param_1 + iVar3);
    *(undefined *)(param_1 + iVar3) = *(undefined *)(param_1 + uVar2);
    *(undefined *)(param_1 + uVar2) = uVar1;
    iVar3 = iVar3 + -1;
  }
  return;
}



/* FUN_000036ec @ 000036ec */

int FUN_000036ec(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 >> 1;
  uVar1 = 0xffff;
  uVar2 = 0xffff;
  while (param_2 != 0) {
    uVar4 = 0x168;
    if (param_2 < 0x169) {
      uVar4 = param_2;
    }
    param_2 = param_2 - uVar4;
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar1 = uVar1 + *param_1;
      uVar2 = uVar2 + uVar1;
      param_1 = param_1 + 1;
    }
    uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10);
    uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
  }
  return (uVar1 & 0xffff) + (uVar1 >> 0x10) + (uVar2 + (uVar2 >> 0x10)) * 0x10000;
}



/* FUN_00003738 @ 00003738 */

char FUN_00003738(uint param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1) {
    cVar1 = cVar1 + *param_2;
    param_2 = param_2 + 1;
  }
  return cVar1;
}



/* FUN_00003754 @ 00003754 */

int FUN_00003754(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar8 = *(int *)(iVar6 + 0x40) + param_3;
  while( true ) {
    piVar1 = DAT_00003858;
    if (uVar8 < 0x10) {
      if (uVar8 != 0) {
        FUN_000015e4(*(int *)(iVar6 + 0x40) + iVar6 + 0x30,param_2,uVar8 - *(int *)(iVar6 + 0x40));
        *(uint *)(iVar6 + 0x40) = uVar8;
      }
      return 0;
    }
    software_interrupt(0x5e);
    uVar7 = 0x400;
    if (uVar8 < 0x401) {
      uVar7 = uVar8 & 0xfffffff0;
    }
    if (*(int *)(iVar6 + 0x40) == 0) {
      FUN_000015e4(*DAT_00003858 + 0x280,param_2,uVar7);
      uVar3 = uVar7;
    }
    else {
      FUN_000015e4(*DAT_00003858 + 0x280,iVar6 + 0x30);
      FUN_000015e4(*(int *)(iVar6 + 0x40) + *piVar1 + 0x280,param_2,uVar7 - *(int *)(iVar6 + 0x40));
      iVar2 = *(int *)(iVar6 + 0x40);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      uVar3 = uVar7 - iVar2;
    }
    param_2 = param_2 + uVar3;
    uVar5 = *(uint *)(param_1 + 0x14) >> 3;
    iVar2 = *DAT_00003858;
    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      *(undefined *)(iVar2 + uVar3 + 0x200) = *(undefined *)((uVar5 - uVar3) + iVar6 + -1);
    }
    iVar4 = FUN_00001bf8(param_1 + 0x28,uVar7);
    iVar2 = DAT_0000385c;
    if ((iVar4 != 0) || (iVar2 = FUN_00014198(param_1 + 0x28,1), iVar2 != 0)) break;
    FUN_000015e4(param_4,*DAT_00003858 + 0x280,uVar7);
    uVar8 = uVar8 - uVar7;
    param_4 = param_4 + uVar7;
    software_interrupt(0x5f);
  }
  software_interrupt(0x5f);
  return iVar2;
}



/* FUN_00003860 @ 00003860 */

uint FUN_00003860(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_5);
  return (param_1 << 0xd | param_2 << 8 | param_3 << 7 | param_4) << 5 | uVar1 | 0x2000018;
}



/* FUN_00003888 @ 00003888 */

int FUN_00003888(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = DAT_0000390c;
  iVar5 = *(int *)(param_1 + 0x4c);
  software_interrupt(0x5e);
  FUN_000015e4(*DAT_0000390c + 0x280,iVar5 + 0x30,0x10);
  iVar3 = *piVar1;
  uVar2 = *(uint *)(param_1 + 0x14) >> 3;
  for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    *(undefined *)(iVar3 + uVar4 + 0x200) = *(undefined *)((uVar2 - uVar4) + iVar5 + -1);
  }
  iVar5 = FUN_00001bf8(param_1 + 0x28,0x10);
  iVar3 = DAT_00003910;
  if ((iVar5 == 0) && (iVar3 = FUN_00014198(param_1 + 0x28,1), iVar3 == 0)) {
    FUN_000015e4(param_2,*piVar1 + 0x280,param_3);
  }
  software_interrupt(0x5f);
  return iVar3;
}



/* FUN_00003914 @ 00003914 */

undefined4
FUN_00003914(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = DAT_000039d8;
  if (param_3 == 0x80) {
    uVar3 = 0;
  }
  else if (param_3 == 0xc0) {
    uVar3 = 1;
  }
  else {
    if (param_3 != 0x100) {
      return DAT_000039d8;
    }
    uVar3 = 2;
  }
  bVar1 = param_4 == 0;
  if (DAT_000039dc <= param_5) {
    return 0;
  }
  iVar4 = *DAT_000039e0 + 0x200;
  if (param_5 == 0x10000010) {
    if (param_2 == 0) {
      iVar4 = FUN_00003144(param_1,param_7,param_6,0,iVar4,uVar3,bVar1,1);
    }
    else {
      iVar4 = FUN_00003184(param_1,param_7,param_6,0,*(undefined4 *)(*DAT_000039e4 + 0x200),uVar3,
                           bVar1,1);
    }
  }
  else if (param_5 == 0x10000110) {
    iVar4 = FUN_000030c8(param_1,param_7,param_6,0,iVar4,param_8,uVar3,bVar1,1);
  }
  else {
    if (param_5 != 0x10000210) {
      return 0;
    }
    iVar4 = FUN_00003118(param_1,param_7,param_6,0,iVar4,param_8,uVar3,1);
  }
  if (iVar4 != 0) {
    return uVar2;
  }
  return 0;
}



/* FUN_000039e8 @ 000039e8 */

int FUN_000039e8(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined auStack_30 [36];
  
  iVar1 = DAT_00003a44;
  if (((param_3 & 3) == 0) &&
     ((iVar2 = DAT_00003a44 * 0x40000000, param_2 == iVar2 || (param_2 == 0)))) {
    *(undefined4 *)(*DAT_00003a48 + 0x11f8) = 0;
    iVar1 = FUN_000032d8(auStack_30,param_2,param_1,0,2,param_2,*DAT_00003a4c + 0x11f8,0,2,iVar2,
                         param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00014198(auStack_30,1);
    }
    else {
      iVar1 = DAT_00003a44 + -6;
    }
  }
  return iVar1;
}



/* FUN_00003a50 @ 00003a50 */

undefined4 FUN_00003a50(uint param_1)

{
  if (2 < param_1) {
    return 0x30;
  }
  *(undefined4 *)(*(int *)(DAT_00003a68 + param_1 * 4) + 0x10) = 1;
  return 0;
}



/* FUN_00003a6c @ 00003a6c */

int FUN_00003a6c(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined auStack_50 [36];
  int iStack_2c;
  undefined4 local_28;
  
  iVar2 = DAT_00003b9c;
  iVar9 = *(int *)(param_1 + 0x4c);
  uVar10 = *(uint *)(param_1 + 0x14) >> 3;
  iVar11 = *(int *)(iVar9 + 0x50);
  software_interrupt(0x5e);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar6 = iVar2;
  if (iVar4 == 0x80) {
    uVar5 = 0;
  }
  else if (iVar4 == 0xc0) {
    uVar5 = 1;
  }
  else {
    if (iVar4 != 0x100) goto LAB_00003b8a;
    uVar5 = 2;
  }
  iStack_2c = param_1;
  local_28 = param_2;
  if (iVar11 == 0x10) {
    iVar4 = iVar9 + 0x20;
  }
  else {
    FUN_000016e4(iVar11 + iVar9 + 0x40,0x10 - iVar11);
    *(undefined *)(iVar11 + iVar9 + 0x40) = 0x80;
    iVar4 = iVar9 + 0x30;
  }
  iVar11 = FUN_00003370(auStack_50,*DAT_00003ba0 + 0xae0,*(undefined *)(param_1 + 0x23),0x20,1);
  if ((iVar11 == 0) && (iVar6 = FUN_00014198(auStack_50,1), piVar3 = DAT_00003ba4, iVar6 == 0)) {
    FUN_000036d0(*DAT_00003ba4 + 0xae0,0x10);
    iVar6 = *piVar3;
    uVar7 = 0;
    do {
      iVar11 = iVar9 + uVar7;
      pbVar1 = (byte *)(iVar4 + uVar7);
      iVar8 = iVar6 + uVar7;
      uVar7 = uVar7 + 1;
      *(byte *)(iVar8 + 0xae0) = *(byte *)(iVar11 + 0x40) ^ *pbVar1 ^ *(byte *)(iVar8 + 0xae0);
    } while (uVar7 < 0x10);
    for (uVar7 = 0; uVar7 < uVar10; uVar7 = uVar7 + 1) {
      *(undefined *)(iVar6 + uVar7 + 0xac0) = *(undefined *)((uVar10 - uVar7) + iVar9 + -1);
    }
    iVar6 = *DAT_00003ba0;
    iVar4 = FUN_00003144(auStack_50,iVar6 + 0xb00,iVar6 + 0xae0,0x10,iVar6 + 0xac0,uVar5,1,1);
    iVar6 = iVar2;
    if ((iVar4 == 0) && (iVar6 = FUN_00014198(auStack_50,1), iVar6 == 0)) {
      FUN_000015e4(local_28,*piVar3 + 0xb00,0x10);
      *(undefined4 *)(iVar9 + 0x50) = 0;
    }
  }
LAB_00003b8a:
  software_interrupt(0x5f);
  return iVar6;
}



/* FUN_00003ba8 @ 00003ba8 */

int FUN_00003ba8(int param_1,int param_2)

{
  undefined uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined auStack_88 [32];
  undefined auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar7 = DAT_00003d40;
  iVar4 = *DAT_00003d38;
  software_interrupt(0x5e);
  uVar5 = *(uint *)(param_1 + 0x14);
  local_28 = iVar4;
  if (uVar5 == 0x80) {
    uVar9 = 0;
  }
  else if (uVar5 == 0xc0) {
    uVar9 = 1;
  }
  else {
    if (uVar5 != 0x100) goto LAB_00003d1c;
    uVar9 = 2;
  }
  iVar8 = *DAT_00003d44;
  for (uVar6 = 0; uVar6 < uVar5 >> 3; uVar6 = uVar6 + 1 & 0xff) {
    *(undefined *)(iVar8 + uVar6 + 0xac0) = *(undefined *)(((uVar5 >> 3) - uVar6) + param_2 + -1);
  }
  FUN_000016e4(iVar8 + 0xae0,0x30);
  piVar2 = DAT_00003d48;
  iVar8 = *DAT_00003d48 + 0xae0;
  iVar8 = FUN_00003144(auStack_88,iVar8,iVar8,0x10,*DAT_00003d48 + 0xac0,uVar9,1,0);
  if (((iVar8 == 0) &&
      (iVar8 = FUN_000033c8(auStack_68,*(undefined *)(param_1 + 0x23),*piVar2 + 0xaf0,0x20,1),
      iVar8 == 0)) && (iVar7 = FUN_00014198(auStack_88,2), iVar7 == 0)) {
    FUN_000015e4(&local_48,*DAT_00003d44 + 0xae0,0x10);
    cVar3 = (char)local_48;
    uVar5 = 0;
    do {
      *(byte *)((int)&local_48 + uVar5) =
           *(char *)((int)&local_48 + uVar5) << 1 | *(byte *)((int)&local_48 + uVar5 + 1) >> 7;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 0xf);
    uVar1 = (undefined)(((uStack_3c >> 0x18) << 0x19) >> 0x18);
    uStack_3c = CONCAT13(uVar1,(undefined3)uStack_3c);
    if (cVar3 < '\0') {
      uStack_3c = CONCAT13(uVar1,(undefined3)uStack_3c) ^ 0x87000000;
    }
    uVar5 = 0;
    do {
      *(byte *)((int)&local_38 + uVar5) =
           *(char *)((int)&local_48 + uVar5) << 1 | *(byte *)((int)&local_48 + uVar5 + 1) >> 7;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 0xf);
    uVar1 = (undefined)(((uStack_3c >> 0x18) << 0x19) >> 0x18);
    uStack_2c = CONCAT13(uVar1,(undefined3)uStack_2c);
    if ((char)local_48 < '\0') {
      uStack_2c = CONCAT13(uVar1,(undefined3)uStack_2c) ^ 0x87000000;
    }
    *(undefined4 *)(param_2 + 0x20) = local_48;
    *(undefined4 *)(param_2 + 0x24) = uStack_44;
    *(undefined4 *)(param_2 + 0x28) = uStack_40;
    *(uint *)(param_2 + 0x2c) = uStack_3c;
    *(undefined4 *)(param_2 + 0x30) = local_38;
    *(undefined4 *)(param_2 + 0x34) = uStack_34;
    *(undefined4 *)(param_2 + 0x38) = uStack_30;
    *(uint *)(param_2 + 0x3c) = uStack_2c;
    iVar8 = *piVar2;
    iVar8 = FUN_00003250(param_1 + 0x28,iVar8 + 0xae0,0,iVar8 + 0xac0,uVar9,
                         *(undefined *)(param_1 + 0x23),1);
    if (iVar8 != 0) {
      iVar7 = DAT_00003d40;
    }
  }
LAB_00003d1c:
  software_interrupt(0x5f);
  if (local_28 != iVar4) {
    FUN_00001a20(*DAT_00003d3c);
  }
  return iVar7;
}



/* FUN_00003d4c @ 00003d4c */

int FUN_00003d4c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = DAT_00003e3c;
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar7 = *(int *)(iVar6 + 0x50) + param_3;
  while( true ) {
    if (uVar7 < 0x11) {
      if (uVar7 != 0) {
        FUN_000015e4(*(int *)(iVar6 + 0x50) + iVar6 + 0x40,param_2,uVar7 - *(int *)(iVar6 + 0x50));
        *(uint *)(iVar6 + 0x50) = uVar7;
      }
      return 0;
    }
    software_interrupt(0x5e);
    uVar8 = 0x400;
    if (uVar7 < 0x401) {
      uVar8 = uVar7 - 1 & 0xfffffff0;
    }
    if (*(int *)(iVar6 + 0x50) == 0) {
      FUN_000015e4(*piVar1 + 0xae0,param_2,uVar8);
      uVar3 = uVar8;
    }
    else {
      FUN_000015e4(*piVar1 + 0xae0,iVar6 + 0x40);
      FUN_000015e4(*(int *)(iVar6 + 0x50) + *piVar1 + 0xae0,param_2,uVar8 - *(int *)(iVar6 + 0x50));
      iVar2 = *(int *)(iVar6 + 0x50);
      *(undefined4 *)(iVar6 + 0x50) = 0;
      uVar3 = uVar8 - iVar2;
    }
    param_2 = param_2 + uVar3;
    iVar2 = *piVar1;
    uVar5 = *(uint *)(param_1 + 0x14) >> 3;
    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      *(undefined *)(iVar2 + uVar3 + 0xac0) = *(undefined *)((uVar5 - uVar3) + iVar6 + -1);
    }
    iVar4 = FUN_0000512c(param_1 + 0x28,uVar8);
    iVar2 = DAT_00003e44;
    if ((iVar4 != 0) || (iVar2 = FUN_00014198(param_1 + 0x28,1), iVar2 != 0)) break;
    uVar7 = uVar7 - uVar8;
    software_interrupt(0x5f);
  }
  software_interrupt(0x5f);
  return iVar2;
}



/* FUN_00003e48 @ 00003e48 */

undefined4 FUN_00003e48(void)

{
  undefined4 uVar1;
  uint in_r3;
  
  uVar1 = DAT_00003ee0;
  software_interrupt(0x78);
  if ((DAT_00003edc == (undefined4 *)0x0) && (0x11fb < in_r3)) {
    software_interrupt(0x5d);
    *DAT_00003ee4 = in_r3;
    if (in_r3 + 1 != 0) {
      software_interrupt(0x5d);
      *DAT_00003ee8 = in_r3 + 1;
      if (in_r3 + 2 != 0) {
        software_interrupt(0x5d);
        *DAT_00003eec = in_r3 + 2;
        if (in_r3 + 3 != 0) {
          software_interrupt(0x5d);
          *DAT_00003ef0 = in_r3 + 3;
          if (in_r3 + 4 != 0) {
            software_interrupt(0x5d);
            *DAT_00003ef4 = in_r3 + 4;
            if (in_r3 + 5 != 0) {
              software_interrupt(0x5d);
              *DAT_00003ef8 = in_r3 + 5;
              if (in_r3 + 6 != 0) {
                software_interrupt(0x5d);
                *DAT_00003efc = in_r3 + 6;
                if (in_r3 != 0xfffffff9) {
                  software_interrupt(0x79);
                  *DAT_00003f00 = *DAT_00003edc;
                  software_interrupt(0x79);
                  *DAT_00003f08 = DAT_00003f04;
                  software_interrupt(0x79);
                  *DAT_00003f10 = DAT_00003f0c;
                  software_interrupt(0x59);
                  *DAT_00003f14 = 0x81;
                  uVar1 = FUN_00009b34();
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}



/* FUN_00003f18 @ 00003f18 */

undefined4 FUN_00003f18(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_34 [32];
  
  piVar1 = DAT_00003f7c;
  software_interrupt(0x5e);
  FUN_000016e4(*DAT_00003f7c + 0x250,0x10);
  iVar4 = *piVar1;
  uVar2 = 0;
  do {
    iVar5 = 0xf - uVar2;
    iVar6 = iVar4 + uVar2;
    uVar2 = uVar2 + 1;
    *(undefined *)(iVar6 + 0x240) = *(undefined *)(param_2 + iVar5);
    uVar3 = DAT_00003f80;
  } while (uVar2 < 0x10);
  iVar4 = FUN_000033c8(auStack_34,param_1,*DAT_00003f84 + 0x240,0x20,1);
  if (iVar4 == 0) {
    uVar3 = FUN_00014198(auStack_34,1);
  }
  software_interrupt(0x5f);
  return uVar3;
}



/* FUN_00003f88 @ 00003f88 */

int FUN_00003f88(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined auStack_6c [32];
  undefined auStack_4c [32];
  int local_2c;
  
  uVar7 = param_2[0x22] + param_4;
  uVar8 = 0;
  local_2c = param_1 + 0x28;
  do {
    piVar2 = DAT_000040d8;
    software_interrupt(0x5e);
    uVar5 = 0x400;
    if (uVar7 < 0x401) {
      uVar5 = uVar7;
    }
    if (param_2[0x22] == 0) {
      FUN_000015e4(*DAT_000040d8 + 0x6c0,param_3,uVar5);
      uVar3 = uVar5;
    }
    else {
      FUN_000015e4(*DAT_000040d8 + 0x6c0,param_2 + 2);
      puVar1 = param_2 + 0x22;
      FUN_000015e4(*puVar1 + *piVar2 + 0x6c0,param_3,uVar5 - *puVar1);
      uVar3 = *puVar1;
      *puVar1 = 0;
      uVar3 = uVar5 - uVar3;
    }
    param_3 = param_3 + uVar3;
    uVar3 = *param_2;
    uVar7 = uVar7 - uVar5;
    *param_2 = uVar3 + uVar5;
    param_2[1] = param_2[1] + (uint)CARRY4(uVar3,uVar5);
    piVar2 = DAT_000040dc;
    if (uVar7 == 0) {
      if (*(char *)(param_2 + 0x24) != '\0') {
        uVar8 = 0x10;
      }
      iVar4 = FUN_00003554(auStack_6c,*DAT_000040dc + 0x6c0,uVar5,*param_2,
                           *(undefined *)(param_1 + 0x23),param_2[0x23],uVar8);
      iVar6 = DAT_000040e0;
      if (((iVar4 != 0) ||
          (iVar4 = FUN_00003370(auStack_4c,*piVar2 + 0x6c0,*(undefined *)(param_1 + 0x23),
                                *(undefined4 *)(param_1 + 0xc),1), iVar6 = DAT_000040e0, iVar4 != 0)
          ) || (iVar6 = FUN_00014198(auStack_6c,2), piVar2 = DAT_000040d8, iVar6 != 0))
      goto LAB_000040c6;
      for (uVar5 = 0; uVar5 < *(uint *)(param_1 + 0xc); uVar5 = uVar5 + 1) {
        *(undefined *)(param_5 + uVar5) =
             *(undefined *)((*(uint *)(param_1 + 0xc) - uVar5) + *piVar2 + 0x6bf);
      }
      *param_2 = 0;
      param_2[1] = 0;
      param_2[0x22] = 0;
      *(undefined *)(param_2 + 0x24) = 1;
    }
    else {
      iVar4 = FUN_00012398(local_2c,uVar5);
      iVar6 = DAT_000040e0;
      if ((iVar4 != 0) || (iVar6 = FUN_00014198(local_2c,1), iVar6 != 0)) goto LAB_000040c6;
    }
    software_interrupt(0x5f);
  } while (uVar7 != 0);
  if (iVar6 != 0) {
LAB_000040c6:
    software_interrupt(0x5f);
  }
  return iVar6;
}



/* FUN_000040e4 @ 000040e4 */

int FUN_000040e4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined auStack_40 [32];
  
  software_interrupt(0x5e);
  *(undefined4 *)(param_2 + 0x8c) = 1;
  iVar3 = DAT_000041f8;
  piVar1 = DAT_000041f0;
  iVar4 = *param_1;
  iVar2 = iVar4 - DAT_000041ec;
  if (iVar4 == DAT_000041ec) {
switchD_00004114_caseD_e0000000:
    uVar5 = 0x20;
    goto LAB_00004144;
  }
  iVar6 = DAT_000041f4;
  if (iVar4 == DAT_000041ec || iVar4 < DAT_000041ec) {
    switch(iVar2) {
    case -0x20000000:
      goto switchD_00004114_caseD_e0000000;
    case -0x1fffffff:
      goto switchD_00004114_caseD_e0000001;
    case -0x1ffffffe:
switchD_00004114_caseD_e0000002:
      uVar5 = 0x20;
      *(undefined4 *)(param_2 + 0x8c) = 3;
      iVar3 = iVar3 + 0x40;
      break;
    case -0x1ffffffd:
switchD_00004114_caseD_e0000003:
      uVar5 = 0x40;
      *(undefined4 *)(param_2 + 0x8c) = 4;
      iVar3 = iVar3 + 0x60;
      break;
    case -0x1ffffffc:
switchD_00004114_caseD_e0000004:
      uVar5 = 0x40;
      *(undefined4 *)(param_2 + 0x8c) = 5;
      iVar3 = iVar3 + 0xa0;
      break;
    default:
      goto switchD_00004114_caseD_5;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        if (iVar2 != 3) {
          if (iVar2 != 4) goto switchD_00004114_caseD_5;
          goto switchD_00004114_caseD_e0000004;
        }
        goto switchD_00004114_caseD_e0000003;
      }
      goto switchD_00004114_caseD_e0000002;
    }
switchD_00004114_caseD_e0000001:
    uVar5 = 0x20;
    *(undefined4 *)(param_2 + 0x8c) = 2;
    iVar3 = iVar3 + 0x20;
  }
LAB_00004144:
  FUN_000015e4(*piVar1 + 0x680,iVar3,uVar5);
  piVar1 = DAT_000041fc;
  iVar2 = DAT_000041f4 + -10;
  iVar3 = FUN_000035e4(auStack_40,*(undefined *)((int)param_1 + 0x23),*DAT_000041fc + 0x680,
                       *(undefined4 *)(param_2 + 0x8c),1);
  iVar6 = iVar2;
  if (((iVar3 == 0) && (iVar3 = FUN_00014198(auStack_40,1), iVar6 = iVar3, iVar3 == 0)) &&
     (iVar4 = FUN_000035fe(param_1 + 10,*piVar1 + 0x6c0,0,*(undefined *)((int)param_1 + 0x23),
                           *(undefined4 *)(param_2 + 0x8c),0x11), iVar6 = iVar2, iVar4 == 0)) {
    *(undefined *)(param_2 + 0x90) = 1;
    iVar6 = iVar3;
  }
switchD_00004114_caseD_5:
  software_interrupt(0x5f);
  return iVar6;
}



/* FUN_00004200 @ 00004200 */

int FUN_00004200(int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  piVar2 = DAT_000042d4;
  uVar7 = param_2[0x22] + param_4;
  while( true ) {
    if (uVar7 < 0x80) {
      if (uVar7 != 0) {
        uVar6 = param_2[0x22];
        FUN_000015e4(uVar6 + (int)(param_2 + 2),param_3,uVar7 - uVar6);
        param_2[0x22] = uVar7;
      }
      return 0;
    }
    software_interrupt(0x5e);
    uVar6 = 0x400;
    if (uVar7 < 0x401) {
      uVar6 = uVar7 & 0xffffff80;
    }
    if (param_2[0x22] == 0) {
      FUN_000015e4(*piVar2 + 0x6c0,param_3,uVar6);
      uVar3 = uVar6;
    }
    else {
      FUN_000015e4(*piVar2 + 0x6c0,param_2 + 2);
      puVar1 = param_2 + 0x22;
      FUN_000015e4(*puVar1 + *piVar2 + 0x6c0,param_3,uVar6 - *puVar1);
      uVar3 = *puVar1;
      *puVar1 = 0;
      uVar3 = uVar6 - uVar3;
    }
    param_3 = param_3 + uVar3;
    uVar3 = *param_2;
    uVar7 = uVar7 - uVar6;
    *param_2 = uVar3 + uVar6;
    param_2[1] = param_2[1] + (uint)CARRY4(uVar3,uVar6);
    iVar4 = FUN_00012398(param_1 + 0x28,uVar6);
    iVar5 = DAT_000042dc;
    if ((iVar4 != 0) || (iVar5 = FUN_00014198(param_1 + 0x28,1), iVar5 != 0)) break;
    software_interrupt(0x5f);
  }
  software_interrupt(0x5f);
  return iVar5;
}



/* FUN_000042e0 @ 000042e0 */

undefined4
FUN_000042e0(uint param_1,int *param_2,int param_3,uint param_4,int *param_5,int *param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    return 0x2c;
  }
  iVar3 = DAT_00004398 + param_1 * 0x1c;
  if (((2 < param_1) || (*(uint *)(iVar3 + 0x10) < param_4)) || (param_4 == 0)) {
    return 0x30;
  }
  iVar1 = *(int *)(iVar3 + 0x14) + param_4;
  *(int *)(iVar3 + 0x14) = iVar1;
  *param_2 = iVar1 + -1;
  uVar4 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc) * 0x20;
  if (uVar4 < param_4) {
    FUN_000015e4(iVar1,param_3,uVar4 * 0x20);
    iVar5 = (param_4 - uVar4) * 0x20;
    FUN_000015e4(*(undefined4 *)(iVar3 + 8),param_3 + uVar4 * 0x20,iVar5);
    if (param_6 == (int *)0x0) goto LAB_0000436c;
    iVar5 = *(int *)(iVar3 + 8) + iVar5;
  }
  else {
    FUN_000015e4(iVar1,param_3,param_4 * 0x20);
    if (param_6 == (int *)0x0) goto LAB_0000436c;
    iVar5 = iVar1 + param_4 * 0x20;
  }
  *param_6 = iVar5;
LAB_0000436c:
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  iVar1 = DAT_00004398;
  *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + param_4 & *(int *)(iVar3 + 0x10) - 1U;
  puVar2 = *(uint **)(iVar1 + 0x54 + param_1 * 4);
  *puVar2 = *puVar2 | 1;
  return 0;
}



/* FUN_0000439c @ 0000439c */

void FUN_0000439c(void)

{
  FUN_000042e0();
  return;
}



/* FUN_000043aa @ 000043aa */

int FUN_000043aa(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = FUN_0000439c();
  if (iVar1 == 0) {
    iVar2 = *param_2;
    iVar4 = 0;
    iVar1 = FUN_00009e4a();
    if (iVar1 == 0) {
      iVar4 = 0x31;
    }
    else {
      puVar3 = *(uint **)(DAT_0000472c + param_1 * 4);
      iVar1 = DAT_0000472c + -0x54 + param_1 * 0x1c;
      puVar3[1] = *(int *)(iVar1 + 4) + (iVar2 + 1U & *(int *)(iVar1 + 0x10) - 1U) * 0x20;
      *puVar3 = *puVar3 | 1;
    }
    return iVar4;
  }
  return iVar1;
}



/* FUN_000043c8 @ 000043c8 */

undefined4 FUN_000043c8(undefined *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_18;
  
  uVar1 = DAT_00004414;
  local_18 = param_4;
  for (; 3 < param_2; param_2 = param_2 - 4) {
    iVar2 = FUN_00008e28(&local_18);
    if (iVar2 != 0) {
      return uVar1;
    }
    *param_1 = (char)(local_18 >> 0x18);
    param_1[1] = (char)(local_18 >> 0x10);
    param_1[2] = (char)(local_18 >> 8);
    param_1[3] = (char)local_18;
    param_1 = param_1 + 4;
  }
  iVar2 = FUN_00008e28(&local_18);
  if (iVar2 != 0) {
    return uVar1;
  }
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
    param_1[uVar3] = (char)(local_18 >> ((uVar3 & 0x1f) << 3));
  }
  return 0;
}



/* FUN_00004418 @ 00004418 */

undefined4 FUN_00004418(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  if (2 < param_1) {
    return 0x30;
  }
  uVar2 = FUN_00008620(*(undefined4 *)(DAT_00004450 + param_1 * 4),param_1);
  iVar1 = DAT_00004450;
  *param_3 = uVar2;
  *param_2 = *(undefined4 *)(iVar1 + param_1 * 0x1c + -0x3c);
  return 0;
}



/* FUN_00004454 @ 00004454 */

void FUN_00004454(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00004474;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)(DAT_00004474 + 4) + 0x602c);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x6028);
  }
  return;
}



/* FUN_00004478 @ 00004478 */

undefined4 FUN_00004478(undefined4 param_1)

{
  *(undefined4 *)(DAT_00004488 + 4) = param_1;
  FUN_00004530(1);
  return 0;
}



/* FUN_0000448c @ 0000448c */

undefined4 FUN_0000448c(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar6 = FUN_00009e4a();
  if (iVar6 == 0) {
    uVar7 = 0x31;
  }
  else if ((param_4 < 4) || ((param_4 & param_4 - 1) != 0)) {
    uVar7 = 0x32;
  }
  else {
    bVar2 = (byte)param_4;
    bVar3 = (byte)(param_4 >> 8);
    bVar4 = (byte)(param_4 >> 0x10);
    bVar1 = (byte)(param_4 >> 0x18);
    iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    bVar2 = (byte)param_3;
    bVar3 = (byte)(param_3 >> 8);
    bVar4 = (byte)(param_3 >> 0x10);
    bVar1 = (byte)(param_3 >> 0x18);
    if ((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) <
        iVar6 + 5U) {
      uVar7 = 0x2e;
    }
    else if (param_1 < 3) {
      iVar8 = DAT_00004528 + param_1 * 0x1c;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(uint *)(iVar8 + 0x10) = param_4;
      *(undefined4 *)(iVar8 + 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x18) = 0;
      iVar5 = DAT_0000452c;
      *(uint *)(iVar8 + 4) = param_3;
      *(undefined4 *)(iVar8 + 8) = param_2;
      if (*(int *)(iVar5 + 0x10) != 1) {
        *(int *)(*(int *)(iVar5 + 4) + 4) = 6 << (param_1 * 3 & 0xff);
      }
      puVar9 = *(uint **)(DAT_00004528 + 0x54 + param_1 * 4);
      *puVar9 = *puVar9 & 0xfffffffe;
      puVar9[2] = param_3;
      puVar9[1] = param_3;
      *puVar9 = iVar6 * 8 - 8U | *(int *)(iVar5 + 0xc) << 2;
      puVar9[3] = 3;
      uVar7 = 0;
    }
    else {
      uVar7 = 0x30;
    }
  }
  return uVar7;
}



/* FUN_00004530 @ 00004530 */

void FUN_00004530(byte param_1)

{
  *DAT_0000453c = param_1 | *DAT_0000453c;
  return;
}



/* FUN_00004540 @ 00004540 */

int FUN_00004540(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = FUN_00009e4a();
  iVar4 = DAT_000045b8;
  if (iVar1 == 0) {
    iVar1 = 0x31;
  }
  else {
    puVar3 = *(undefined4 **)(DAT_000045b8 + 4);
    *puVar3 = 0x1c;
    puVar3[1] = 0xffffffff;
    puVar3[2] = 0x4924;
    puVar3[0xc] = 0;
    puVar3[0xd] = 1;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0x1c;
    puVar3[0x1a] = 0x1c;
    puVar3[0x1b] = 0x1c;
    puVar3[0x1c] = 0x1c;
    puVar3[0x1d] = 0x1c;
    FUN_00009b6c();
    iVar1 = DAT_000045bc;
    uVar2 = 0;
    do {
      *(undefined4 **)(iVar1 + uVar2 * 4) = puVar3 + uVar2 * 0x400 + 0x400;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    puVar3[0x1800] = 1;
    iVar1 = FUN_00008824(2,DAT_000045b8 + 8);
    if (iVar1 == 0) {
      *(undefined4 *)(iVar4 + 0xc) = 1;
      *(undefined4 *)(iVar4 + 0x10) = 2;
    }
  }
  return iVar1;
}



/* FUN_000045c0 @ 000045c0 */

int FUN_000045c0(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined auStack_54 [32];
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  if ((param_2 < 0x20) || (uVar3 = param_2, (param_2 & 0x1f) != 0)) {
    uVar3 = param_2 + 0x1f & 0xffffffe0;
  }
  iVar2 = DAT_000046b8;
  if ((((param_6 <= param_2) && (param_4 <= param_2)) && (iVar2 = DAT_000046bc, uVar3 < 0x201)) &&
     (param_4 < 0x201)) {
    software_interrupt(0x5e);
    iVar4 = uVar3 << 1;
    local_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    uStack_28 = param_4;
    FUN_000016e4(DAT_000046c4,iVar4);
    FUN_000016e4(DAT_000046c8,iVar4);
    FUN_000015e4(DAT_000046c4,local_34,param_2);
    FUN_000015e4(DAT_000046c8,local_2c,param_4);
    iVar2 = DAT_000046c4 + uVar3;
    for (uVar1 = 0; uVar1 < param_6; uVar1 = uVar1 + 1) {
      *(undefined *)(iVar2 + uVar1) = *(undefined *)((param_6 - uVar1) + param_5 + -1);
    }
    iVar2 = FUN_000034ac(auStack_54,*DAT_000046cc + uVar3,*DAT_000046d0,uVar3,uVar3,*DAT_000046cc,1)
    ;
    if (iVar2 == 0) {
      software_interrupt(0x68);
      software_interrupt(0x68);
      iVar2 = FUN_00014198(auStack_54,1,DAT_000046c8,iVar4);
      if (iVar2 == 0) {
        iVar4 = DAT_000046c8 + uVar3;
        for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1) {
          *(undefined *)(param_7 + uVar3) = *(undefined *)((param_2 - uVar3) + iVar4 + -1);
        }
      }
    }
    else {
      iVar2 = DAT_000046b8 + -6;
    }
    software_interrupt(0x5f);
  }
  return iVar2;
}



/* FUN_000046d4 @ 000046d4 */

uint FUN_000046d4(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00008eae(param_2);
  return uVar1 | 0x18 | param_1 << 5 | 0x500000;
}



/* FUN_00004730 @ 00004730 */

void FUN_00004730(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00004744;
  *(undefined4 *)(*(int *)(DAT_00004744 + 4) + 0x6024) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x6020) = param_1;
  return;
}



/* FUN_00004748 @ 00004748 */

uint FUN_00004748(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00011fc8(param_2);
  return uVar1 | param_1 << 0x12;
}



/* FUN_00004758 @ 00004758 */

undefined4 FUN_00004758(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  while( true ) {
    if (*DAT_00004818 <= uVar2) {
      return 0;
    }
    if (((((DAT_00004818[uVar2 * 0xc + 2] == 0) || (DAT_00004818[uVar2 * 0xc + 2] == *param_1)) &&
         (param_1[1] == DAT_00004818[uVar2 * 0xc + 3])) &&
        ((param_1[4] == DAT_00004818[uVar2 * 0xc + 4] &&
         (DAT_00004818[uVar2 * 0xc + 5] <= param_1[2])))) &&
       ((param_1[2] <= DAT_00004818[uVar2 * 0xc + 6] &&
        ((DAT_00004818[uVar2 * 0xc + 7] <= param_1[3] &&
         (param_1[3] <= DAT_00004818[uVar2 * 0xc + 8])))))) break;
    uVar2 = uVar2 + 1;
  }
  if (DAT_00004818[uVar2 * 0xc + 9] != 0) {
    if (DAT_00004818[uVar2 * 0xc + 9] == 1) {
      if (param_1[2] < 3) {
        return 0;
      }
      bVar1 = param_1[10];
      uVar3 = (uint)param_1[8] << 0x10 | (uint)param_1[9] << 8;
    }
    else {
      if (param_1[2] < 4) {
        return 0;
      }
      uVar3 = *(uint *)(param_1 + 8);
      bVar1 = param_1[0xb];
      uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8;
    }
    uVar4 = (uVar3 | bVar1) & ~(*(int *)(DAT_00004818 + uVar2 * 0xc + 10) - 1U);
    uVar3 = 0;
    while( true ) {
      if (DAT_00004818[1] <= uVar3) {
        return 0;
      }
      if (((*(uint *)(DAT_00004818 + uVar3 * 8 + 0x182) & 0x7fffffff) <= uVar4) &&
         (*(int *)(DAT_00004818 + uVar2 * 0xc + 10) + (uVar4 - 1) <=
          *(uint *)(DAT_00004818 + uVar3 * 8 + 0x186))) break;
      uVar3 = uVar3 + 1;
    }
  }
  return 1;
}



/* FUN_0000481c @ 0000481c */

int FUN_0000481c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = *param_1;
  iVar4 = iVar2 - DAT_0000499c;
  if (iVar2 != DAT_0000499c) {
    if (iVar2 <= DAT_0000499c) {
      if (iVar4 != -0x2c) {
        if (iVar4 != -0x2c && iVar4 + 0x2c < 0 == SCARRY4(iVar4,0x2c)) {
          if ((iVar4 != -0x2b) && (iVar4 != -0x2a)) {
            if (iVar4 != -0x20) {
              return DAT_000049a0;
            }
            iVar2 = param_1[1];
            if (((iVar2 != 0x80) && (iVar2 != 0xc0)) && (iVar2 != 0x100)) {
              return DAT_000049a0;
            }
            iVar2 = 0x90;
            goto LAB_00004992;
          }
        }
        else {
          if (iVar4 == -0x30) {
            uVar3 = param_1[1];
            if (0x1000 < uVar3) {
              return DAT_000049a0;
            }
            if ((uVar3 & 7) != 0) {
              return DAT_000049a0;
            }
            iVar2 = (uVar3 >> 3) + 0x70;
            goto LAB_00004992;
          }
          if ((iVar4 != -0x2e) && (iVar4 != -0x2d)) {
            return DAT_000049a0;
          }
        }
      }
      uVar3 = param_1[1];
      if ((uVar3 & 7) != 0) {
        return DAT_000049a0;
      }
      if (0x400 < uVar3) {
        return DAT_000049a0;
      }
      switch(iVar2 + DAT_000049ac) {
      case 0:
        if (0x1b0 < uVar3 - 0x50) {
LAB_00004968:
          iVar1 = DAT_000049a0;
        }
        break;
      case 1:
        if (400 < uVar3 - 0x70) goto LAB_00004968;
        break;
      case 2:
        if (0x340 < uVar3 - 0xc0) goto LAB_00004968;
        break;
      case 3:
      case 4:
        if (0x300 < uVar3 - 0x100) goto LAB_00004968;
      }
      iVar2 = 0xf0;
      if (iVar1 != 0) {
        return iVar1;
      }
      goto LAB_00004992;
    }
    iVar4 = iVar2 - DAT_000049a4;
    if (iVar2 != DAT_000049a4) {
      if (DAT_000049a4 < iVar2) {
        iVar2 = iVar2 + DAT_000049a8;
        if (iVar2 == 0) {
          if (0x700 < param_1[1] - 0x100U) {
            return DAT_000049a0;
          }
          iVar2 = 0x47c;
          goto LAB_00004992;
        }
        if ((iVar2 != 0xf) && (iVar2 != 0x10)) {
          return DAT_000049a0;
        }
      }
      else {
        if (iVar4 == -0xffffff) {
          if (param_1[1] != 0x400) {
            return DAT_000049a0;
          }
          iVar2 = 0x284;
          goto LAB_00004992;
        }
        if ((iVar4 != -0xffffef) && (iVar4 != -0xffffee)) {
          return DAT_000049a0;
        }
      }
      iVar2 = param_1[1];
      if ((((iVar2 != 0xc0) && (iVar2 != 0xe0)) && (iVar2 != 0x100)) &&
         ((iVar2 != 0x180 && (iVar2 != 0x209)))) {
        return DAT_000049a0;
      }
      iVar2 = 0x140;
      goto LAB_00004992;
    }
  }
  uVar3 = param_1[1];
  if (((uVar3 != 0x100) && (uVar3 != 0x200)) &&
     ((uVar3 != 0x300 &&
      ((((uVar3 != 0x400 && (uVar3 != 0x600)) && (uVar3 != 0x800)) &&
       ((uVar3 != 0xc00 && (uVar3 != 0x1000)))))))) {
    return DAT_000049a0;
  }
  if (iVar2 == DAT_0000499c) {
    iVar2 = (uVar3 >> 3) + 0x80;
  }
  else {
    iVar2 = (uVar3 * 0x900 >> 0xc) + 0x80;
  }
LAB_00004992:
  *param_2 = iVar2;
  return iVar1;
}



/* FUN_00004a68 @ 00004a68 */

int FUN_00004a68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 - DAT_00004ad4;
  if (param_1 == DAT_00004ad4) {
LAB_00004acc:
    if (param_2 == 8) {
      return 0;
    }
  }
  else {
    if (DAT_00004ad4 < param_1) {
      if (iVar1 != 0x2fd) {
        if (iVar1 < 0x2fe) {
          if ((iVar1 != 0xfd) && (iVar1 + -0x2fd != -0x100)) {
LAB_00004abe:
            return DAT_00004ad8 + 4;
          }
        }
        else {
          iVar1 = iVar1 + -0x2fd + DAT_00004ae0;
          if ((iVar1 != 0) && (iVar1 != 0x100)) goto LAB_00004abe;
        }
      }
    }
    else {
      iVar1 = param_1 - DAT_00004adc;
      if (param_1 == DAT_00004adc) {
        return 0;
      }
      if (param_1 <= DAT_00004adc) {
        if (iVar1 == -3) {
          return 0;
        }
        if (iVar1 == -2) {
          return 0;
        }
        goto LAB_00004abe;
      }
      if (iVar1 != 0xfd) {
        if (iVar1 != 0xfe) goto LAB_00004abe;
        goto LAB_00004acc;
      }
    }
    if (param_2 == 0x10) {
      return 0;
    }
  }
  return DAT_00004ad8;
}



/* FUN_00004ae4 @ 00004ae4 */

int FUN_00004ae4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  
  iVar1 = 0;
  uVar5 = 0;
  uVar10 = 0;
  iVar7 = *(int *)(param_1 + 4);
  uVar11 = 0;
  uVar9 = 0;
  iVar2 = iVar7 - DAT_00004e80;
  iVar6 = iVar1;
  if (iVar7 == DAT_00004e80) {
LAB_00004cac:
    if (*(int *)(param_1 + 8) != 5) {
      return DAT_00004e84;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      return DAT_00004e84;
    }
    iVar6 = DAT_00004e84;
    switch(iVar7) {
    case 0x50000002:
      uVar11 = 0x14;
      iVar6 = iVar1;
      break;
    case 0x50000003:
      uVar11 = 0x1c;
      iVar6 = iVar1;
      break;
    case 0x50000004:
      uVar11 = 0x20;
      iVar6 = iVar1;
      break;
    case 0x50000005:
      uVar11 = 0x30;
      iVar6 = iVar1;
      break;
    case 0x50000006:
      uVar11 = 0x40;
      iVar6 = iVar1;
    }
    uVar10 = 5;
    uVar3 = 0x98;
    uVar9 = 0x60000;
LAB_00004daa:
    param_2[0x12] = uVar3;
    if (iVar6 != 0) {
      return iVar6;
    }
    goto LAB_00004dfa;
  }
  if (iVar7 <= DAT_00004e80) {
    iVar2 = iVar7 - DAT_00004e88;
    if (iVar7 == DAT_00004e88) {
LAB_00004cf8:
      if (iVar7 == DAT_00004ecc) {
        if (0x80 < *(uint *)(param_1 + 0xc) - 0x80) {
          return DAT_00004e84;
        }
      }
      else if (0x400 < *(uint *)(param_1 + 0xc)) {
        return DAT_00004e84;
      }
      if (*(int *)(param_1 + 8) != 4) {
        return DAT_00004e84;
      }
      iVar6 = DAT_00004e88 + 3;
      iVar2 = iVar7 - iVar6;
      if (iVar7 == iVar6) {
        iVar6 = DAT_00004e84;
        if (*(int *)(param_1 + 0xc) - 0x100U < 0x301) {
          uVar11 = 0x30;
          iVar6 = iVar1;
        }
      }
      else if (iVar7 == iVar6 || iVar7 < iVar6) {
        if (iVar2 == -3) {
          iVar6 = DAT_00004e84;
          if (*(int *)(param_1 + 0xc) - 0x50U < 0x1b1) {
            uVar11 = 0x14;
            iVar6 = iVar1;
          }
        }
        else if (iVar2 == -2) {
          iVar6 = DAT_00004e84;
          if (*(int *)(param_1 + 0xc) - 0x70U < 0x191) {
            uVar11 = 0x1c;
            iVar6 = iVar1;
          }
        }
        else {
          iVar6 = DAT_00004e84;
          if ((iVar2 == -1) && (*(int *)(param_1 + 0xc) - 0xc0U < 0x341)) {
            uVar11 = 0x20;
            iVar6 = iVar1;
          }
        }
      }
      else if (iVar2 == 1) {
        iVar6 = DAT_00004e84;
        if (*(int *)(param_1 + 0xc) - 0x100U < 0x301) {
          uVar11 = 0x40;
          iVar6 = iVar1;
        }
      }
      else {
        iVar6 = DAT_00004e84;
        if (iVar2 == 0x60b) {
          uVar11 = 0x10;
          iVar6 = iVar1;
        }
      }
      uVar10 = 3;
      uVar5 = 8;
      if (iVar7 == DAT_00004ecc) {
        uVar3 = 0x54;
      }
      else {
        uVar3 = 0x1e8;
      }
      goto LAB_00004daa;
    }
    if (iVar7 == DAT_00004e88 || iVar7 < DAT_00004e88) {
      iVar1 = iVar7 - DAT_00004e8c;
      if (iVar7 != DAT_00004e8c) {
        if (DAT_00004e8c < iVar7) {
          if (iVar1 != 0x1ff) {
            if (iVar1 < 0x200) goto LAB_00004b50;
            if (iVar1 != 0x2ff) {
              return DAT_00004e84;
            }
          }
        }
        else {
          iVar1 = iVar7 - DAT_00004e90;
          if (iVar7 == DAT_00004e90) goto LAB_00004c86;
          if (iVar7 == DAT_00004e90 || iVar7 < DAT_00004e90) {
            if (iVar7 + DAT_00004e94 == 0) {
              if (0x700 < *(int *)(param_1 + 0xc) - 0x100U) {
                return DAT_00004e84;
              }
              if (*(int *)(param_1 + 8) != 6) {
                return DAT_00004e84;
              }
              uVar10 = 8;
              iVar1 = 0x40c;
              goto LAB_00004df8;
            }
            bVar12 = iVar7 + DAT_00004e94 == -0x70000022;
          }
          else {
LAB_00004b50:
            if (iVar1 == 2) {
              if (0x38 < *(int *)(param_1 + 0xc) - 0x70U) {
                return DAT_00004e84;
              }
              goto LAB_00004c9c;
            }
            bVar12 = iVar1 == 0xff;
            if (bVar12) goto LAB_00004c46;
          }
          if (!bVar12) {
            return DAT_00004e84;
          }
        }
        goto LAB_00004c46;
      }
LAB_00004c86:
      if (*(int *)(param_1 + 0xc) != 0x38) {
        return DAT_00004e84;
      }
LAB_00004c9c:
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 2;
      }
      else {
        if (*(int *)(param_1 + 8) != 1) {
          return DAT_00004e84;
        }
        uVar5 = 4;
      }
    }
    else {
      if (iVar2 != DAT_00004e9c) {
        if (iVar2 <= DAT_00004e9c) {
          if (iVar2 != 3) {
            if (iVar2 < 4) {
              if ((iVar2 != 1) && (iVar2 != 2)) {
                return DAT_00004e84;
              }
            }
            else if ((iVar2 != 4) && (iVar2 != 0x60e)) {
              return DAT_00004e84;
            }
          }
          goto LAB_00004cf8;
        }
        if (iVar2 - DAT_00004e9c != 0x100) {
          iVar2 = (iVar2 - DAT_00004e9c) + DAT_00004ea0;
          if (iVar2 == 0) {
            return DAT_00004e84;
          }
LAB_00004bca:
          if ((iVar2 != 1) && (iVar2 != 2)) {
            return DAT_00004e84;
          }
          goto LAB_00004cac;
        }
      }
LAB_00004c46:
      if (0x80 < *(int *)(param_1 + 0xc) - 0x80U) {
        return DAT_00004e84;
      }
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 2;
      }
      else {
        if (*(int *)(param_1 + 8) != 1) {
          return DAT_00004e84;
        }
        uVar5 = 4;
      }
      if (iVar7 == DAT_00004ec0) {
        uVar5 = 0;
        uVar9 = 0x80000;
      }
      if ((iVar7 == DAT_00004ec4) || (iVar7 == DAT_00004ec8)) {
        uVar10 = 4;
      }
      else {
        uVar10 = 1;
      }
    }
    param_2[0x12] = 0x44;
    goto LAB_00004dfa;
  }
  iVar8 = iVar2 - DAT_00004ea4;
  if (iVar2 == DAT_00004ea4) {
LAB_00004dd0:
    uVar4 = *(uint *)(param_1 + 0xc);
    if (0xc00 < uVar4 - 0x400) {
      return DAT_00004e84;
    }
    if (*(int *)(param_1 + 8) == 2) {
      uVar5 = 0x10;
    }
    else {
      if (*(int *)(param_1 + 8) != 3) {
        return DAT_00004e84;
      }
      uVar5 = 0x20;
    }
    uVar10 = 7;
LAB_00004df0:
    iVar1 = (uVar4 >> 4) * 9 + 0x10;
  }
  else {
    if (iVar2 != DAT_00004ea4 && DAT_00004ea4 <= iVar2) {
      if (iVar8 != DAT_00004eb8) {
        if (DAT_00004eb8 < iVar8) {
          iVar1 = (iVar8 - DAT_00004eb8) + DAT_00004ebc;
          if ((((iVar1 != 0) && (iVar1 = iVar1 + DAT_00004ebc, iVar1 != 0)) &&
              (iVar1 = iVar1 + DAT_00004ebc, iVar1 != 0)) && (iVar1 + DAT_00004ebc != 0)) {
            return DAT_00004e84;
          }
        }
        else if (iVar8 != 0x2000) {
          if (iVar8 < 0x2001) {
            if (iVar8 != 0x1000) {
              if (iVar8 != 0x1812) {
                return DAT_00004e84;
              }
              if (0x180 < *(uint *)(param_1 + 0xc)) {
                return DAT_00004e84;
              }
              iVar1 = 0xd0;
              uVar10 = 7;
              goto LAB_00004df8;
            }
          }
          else if ((iVar8 != 0x3000) && (iVar8 != 0x4000)) {
            return DAT_00004e84;
          }
        }
      }
      goto LAB_00004dd0;
    }
    iVar8 = iVar2 - DAT_00004ea8;
    if (iVar2 == DAT_00004ea8) {
LAB_00004e1a:
      uVar4 = *(uint *)(param_1 + 0xc);
      if (0xc00 < uVar4 - 0x400) {
        return DAT_00004e84;
      }
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 2;
      }
      else {
        if (*(int *)(param_1 + 8) != 1) {
          return DAT_00004e84;
        }
        uVar5 = 4;
      }
LAB_00004e34:
      uVar10 = 6;
      goto LAB_00004df0;
    }
    if (iVar2 <= DAT_00004ea8) {
      if (iVar2 != DAT_00004eac) {
        if (iVar2 <= DAT_00004eac) goto LAB_00004bca;
        if ((iVar2 - DAT_00004eac != 0x100) && ((iVar2 - DAT_00004eac) + DAT_00004eb0 != 0)) {
          return DAT_00004e84;
        }
        goto LAB_00004e1a;
      }
      uVar4 = *(uint *)(param_1 + 0xc);
      if (0xf00 < uVar4 - 0x100) {
        return DAT_00004e84;
      }
      if (*(int *)(param_1 + 8) == 0) {
        uVar5 = 0x22;
      }
      else {
        if (*(int *)(param_1 + 8) != 1) {
          return DAT_00004e84;
        }
        uVar5 = 0x14;
      }
      goto LAB_00004e34;
    }
    if (((iVar8 == 0x100000) || (iVar8 == 0x200000)) || (iVar8 == 0x300000)) goto LAB_00004e1a;
    if (iVar8 + DAT_00004eb4 != 0) {
      return DAT_00004e84;
    }
    if (*(int *)(param_1 + 0xc) != 0x400) {
      return DAT_00004e84;
    }
    if (*(int *)(param_1 + 8) != 3) {
      return DAT_00004e84;
    }
    uVar10 = 7;
    iVar1 = 0x214;
  }
LAB_00004df8:
  param_2[0x12] = iVar1;
LAB_00004dfa:
  param_2[6] = uVar5;
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar10;
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[4] = *(undefined4 *)(param_1 + 0xc);
  param_2[5] = 0;
  param_2[3] = uVar11;
  param_2[7] = uVar9;
  param_2[0x14] = 0;
  return iVar6;
}



/* FUN_00004ed0 @ 00004ed0 */

undefined4 FUN_00004ed0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00004ee4;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x6c) & 0x30000) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_00004ee8 @ 00004ee8 */

undefined4 FUN_00004ee8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1 | param_2;
  uVar1 = DAT_00004f28;
  if ((((-1 < (int)(uVar2 << 0x1d)) &&
       (((uVar2 & 1) == 0 || (((int)(param_1 << 0x1b) < 0 && ((int)(param_2 << 0x1b) < 0)))))) &&
      ((-1 < (int)(uVar2 << 0x1e) || (((int)(param_1 << 0x1a) < 0 && ((int)(param_2 << 0x1a) < 0))))
      )) && ((param_1 * -0x80000000 + param_2 * -0x80000000 == 0 && ((param_1 & 2) == (param_2 & 2))
             ))) {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_00004f2c @ 00004f2c */

undefined4 FUN_00004f2c(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((param_1 < *(uint *)(DAT_00004f7c + uVar2 * 0xc) ||
         (*(uint *)(DAT_00004f7c + uVar2 * 0xc + 4) < param_1))) {
    uVar2 = uVar2 + 1;
    if (10 < uVar2) {
      software_interrupt(0x76);
      return 0;
    }
  }
  iVar1 = *(int *)(DAT_00004f7c + uVar2 * 0xc + 8);
  software_interrupt(0x76);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    return 0;
  }
  return DAT_00004f78;
}



/* FUN_00004f80 @ 00004f80 */

undefined4 FUN_00004f80(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + param_3;
  uVar2 = param_2 + CARRY4(param_1,param_3);
  if ((param_2 < uVar2 || uVar2 - param_2 < (uint)(param_1 <= uVar1)) &&
     ((((uVar2 < 0xfffd || 0xfffd - uVar2 < (uint)(uVar1 <= DAT_00004fd0) &&
        (0xfffd < param_2 || param_2 - 0xfffd < (uint)(0xfbffffff < param_1))) ||
       (uVar2 < 0xfffd || 0xfffd - uVar2 < (uint)(uVar1 == 0))) || (0xffff < param_2)))) {
    return 0;
  }
  return DAT_00004fcc;
}



/* FUN_00004fd4 @ 00004fd4 */

int FUN_00004fd4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_r3;
  uint uVar5;
  uint local_1c;
  
  uVar2 = DAT_00005024;
  iVar1 = DAT_00005020;
  uVar5 = 0;
  local_1c = in_r3;
  while( true ) {
    iVar3 = FUN_00011a10(*(undefined *)(iVar1 + 0x20),0,0,&local_1c,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar4 = local_1c & 0xff;
    if (*(char *)(iVar1 + 0xc) != '\x01') {
      uVar4 = ~uVar4;
    }
    if ((*(byte *)(iVar1 + 0xb) & uVar4) != 0) break;
    uVar5 = uVar5 + 1;
    if (uVar2 < uVar5) {
      return DAT_00005028;
    }
    FUN_0001647e(1);
  }
  return 0;
}



/* FUN_0000502c @ 0000502c */

void FUN_0000502c(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_00005070;
  uVar3 = 0;
  do {
    iVar2 = iVar1 + uVar3 * 0x54;
    if ((*(byte *)(iVar2 + 0x22) == param_1) && (*(char *)(iVar2 + 0x20) == '\x01')) {
      FUN_00007d44(iVar2);
      *(undefined *)(iVar2 + 0x22) = 0;
      *(undefined *)(iVar2 + 0x20) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  return;
}



/* FUN_00005074 @ 00005074 */

void FUN_00005074(uint param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar1 = DAT_000050c0;
  uVar4 = 0;
  do {
    pcVar3 = (char *)(iVar1 + uVar4 * 8);
    if (((byte)pcVar3[1] == param_1) && (*pcVar3 == '\x01')) {
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[1] = '\0';
      *pcVar3 = '\0';
    }
    iVar2 = DAT_000050c4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  uVar4 = 0;
  do {
    pcVar3 = (char *)(iVar2 + uVar4 * 0x10);
    if (((byte)pcVar3[1] == param_1) && (*pcVar3 == '\x01')) {
      FUN_000050f0(uVar4 + 0x10,param_1);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  return;
}



/* FUN_000050c8 @ 000050c8 */

void FUN_000050c8(void)

{
  int iVar1;
  
  iVar1 = FUN_00009e8c(0);
  if (iVar1 != 0) {
    FUN_000050ec();
  }
  iVar1 = FUN_00009e8c(1);
  if (iVar1 != 0) {
    return;
  }
  return;
}



/* FUN_000050ec @ 000050ec */

void FUN_000050ec(void)

{
  return;
}



/* FUN_000050f0 @ 000050f0 */

void FUN_000050f0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000088ac();
  if (((int)uVar2 != -1) &&
     (puVar1 = (undefined *)(DAT_00005114 + (int)uVar2 * 0x10),
     (uint)(byte)puVar1[1] == (uint)((ulonglong)uVar2 >> 0x20))) {
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}



/* FUN_0000512c @ 0000512c */

undefined4 FUN_0000512c(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    return 0;
  }
  return 0x2c;
}



/* FUN_00005138 @ 00005138 */

undefined4 FUN_00005138(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  int local_14;
  
  pbVar2 = (byte *)&local_14;
  if (param_2 < 0x20) {
    local_14 = (1 << (param_2 & 0xff)) + -1;
  }
  else {
    local_14 = 0xffffffff;
  }
  uVar1 = 0;
  do {
    if (*pbVar2 < *param_1) {
      return DAT_00005170;
    }
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}



/* FUN_00005174 @ 00005174 */

uint FUN_00005174(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 ^ (uint)*param_1 << 8;
    iVar2 = 8;
    do {
      if ((int)(uVar1 << 0x10) < 0) {
        uVar1 = uVar1 ^ 0x8380;
      }
      uVar1 = uVar1 << 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_1 = param_1 + 1;
  }
  return (uVar1 << 0x10) >> 0x18;
}



/* FUN_000051a0 @ 000051a0 */

undefined8 FUN_000051a0(uint param_1,uint param_2,int param_3)

{
  if (param_3 == 1) {
    param_2 = param_2 << 5 | param_1 >> 0x1b;
    param_1 = param_1 << 5;
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_000051b0 @ 000051b0 */

undefined8 FUN_000051b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  software_interrupt(0x7c);
  software_interrupt(0x7c);
  software_interrupt(0x7c);
  iVar2 = DAT_000051f4 + -4 + param_1 * 0x1000;
  uVar1 = FUN_00008c8c(param_1,0,4,iVar2);
  software_interrupt(0x7c);
  return CONCAT44(uVar1,iVar2);
}



/* FUN_000051fc @ 000051fc */

void FUN_000051fc(int param_1,int param_2,int param_3)

{
  FUN_000015e4(param_1,param_2,*(undefined4 *)(param_2 + 0x44));
  FUN_000016e4(*(int *)(param_2 + 0x44) + param_1,param_3 - *(int *)(param_2 + 0x44));
  return;
}



/* FUN_00005218 @ 00005218 */

void FUN_00005218(int param_1,int param_2,undefined4 param_3)

{
  FUN_000051fc();
  FUN_000051fc(param_1 + 0x48,param_2 + 0x48,param_3);
  return;
}



/* FUN_00005238 @ 00005238 */

undefined4
FUN_00005238(int param_1,uint param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_00005278;
  iVar1 = FUN_00007b0e(param_5,param_6,param_3,param_7);
  if ((iVar1 != 0) && (uVar3 = *(uint *)(iVar1 + 8), uVar3 <= param_2)) {
    iVar1 = *(int *)(iVar1 + 4);
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined *)(param_1 + uVar2) = *(undefined *)((uVar3 - uVar2) + iVar1 + -1);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_0000527c @ 0000527c */

undefined8 FUN_0000527c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_000052e0;
  if (((param_1 | param_2) & 0xfff) == 0) {
    software_interrupt(0x73);
    for (uVar2 = 0; iVar1 = 0, uVar2 < param_2 >> 0xc; uVar2 = uVar2 + 1) {
      iVar1 = param_1 + uVar2 * 0x1000;
      software_interrupt(0x88);
      if (iVar1 == 0) {
        iVar1 = DAT_000052e0 + -6;
        break;
      }
      FUN_000015e4(param_3 + uVar2 * 0x1000,iVar1,0x1000);
      software_interrupt(99);
    }
  }
  software_interrupt(0x68);
  return CONCAT44(1,iVar1);
}



/* FUN_000052e4 @ 000052e4 */

undefined4 FUN_000052e4(int param_1,uint *param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  
  if (param_4 <= *param_2) {
    if (param_5 == 0) {
      FUN_000015e4(param_1,param_3,param_4);
    }
    else {
      for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
        *(undefined *)(param_1 + uVar1) = *(undefined *)((param_4 - uVar1) + param_3 + -1);
      }
    }
    *param_2 = param_4;
    return 0;
  }
  return DAT_00005320;
}



/* FUN_00005324 @ 00005324 */

undefined4 FUN_00005324(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = FUN_000067fa(param_3,param_2,&local_18);
  if (iVar1 != 0) {
    FUN_000015e4(param_1,iVar1,param_2);
    software_interrupt(0x68);
    software_interrupt(99);
    return 0;
  }
  return DAT_0000535c;
}



/* FUN_00005360 @ 00005360 */

undefined4 FUN_00005360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = FUN_000067fa(param_3,param_2,&local_18);
  if (iVar1 != 0) {
    FUN_000015e4(param_1,iVar1,param_2);
    software_interrupt(0x68);
    software_interrupt(99);
    return 0;
  }
  return DAT_00005394;
}



/* FUN_00005398 @ 00005398 */

undefined4 FUN_00005398(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_30 [32];
  
  iVar1 = FUN_000032d8(auStack_30,0,param_1,0,2,param_3,param_4,0,2,0,param_2,1);
  uVar2 = DAT_000053d0;
  if (iVar1 == 0) {
    uVar2 = FUN_00014198(auStack_30,1);
  }
  return uVar2;
}



/* FUN_000053d4 @ 000053d4 */

void FUN_000053d4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar4 = *(uint *)(param_2 + 0x1c) >> ((uVar5 & 0x3f) << 2) & 0xf;
    if ((uVar4 == 6) || (uVar4 == 7)) {
      uVar4 = *(uint *)(param_1 + uVar5 * 8);
      if ((*DAT_0000543c <= uVar4) &&
         (uVar4 < (uint)(*DAT_00005440 - *(int *)(param_1 + uVar5 * 8 + 4)))) {
        FUN_000015e4(uVar4,*(int *)(param_2 + uVar5 * 8 + 0x2c) + param_2 + 0x4c);
      }
    }
    else if ((uVar4 == 2) || (uVar4 == 3)) {
      iVar2 = param_2 + uVar5 * 8;
      puVar1 = (undefined4 *)(param_1 + uVar5 * 8);
      uVar3 = *(undefined4 *)(iVar2 + 0x30);
      *puVar1 = *(undefined4 *)(iVar2 + 0x2c);
      puVar1[1] = uVar3;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}



/* FUN_00005444 @ 00005444 */

undefined4 FUN_00005444(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = DAT_000054f8;
  iVar5 = 0;
  uVar8 = 0x400;
  uVar6 = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0x1c) >> ((uVar6 & 0x3f) << 2) & 0xf;
    uVar9 = uVar1;
    if (((uVar2 == 5) || (uVar2 == 6)) || (uVar2 == 7)) {
      iVar4 = param_1 + uVar6 * 8;
      uVar3 = *(uint *)(iVar4 + 0x2c);
      uVar7 = *(uint *)(iVar4 + 0x30);
      if ((uVar3 < *DAT_000054fc) || (*DAT_00005500 - uVar8 <= uVar3)) {
        if ((((uVar3 < *DAT_00005504) || (*DAT_00005508 <= uVar3)) || (uVar3 + uVar7 < uVar3)) ||
           (*DAT_00005508 < uVar3 + uVar7)) break;
      }
      else {
        if (uVar8 < uVar7) break;
        if ((uVar2 == 5) || (uVar2 == 7)) {
          FUN_000015e4(param_1 + iVar5 + 0x4c,uVar3,uVar7);
        }
        else {
          FUN_000016e4(param_1 + iVar5 + 0x4c,uVar7);
        }
        uVar8 = uVar8 - uVar7;
        *(int *)(iVar4 + 0x2c) = iVar5;
        iVar5 = iVar5 + uVar7;
      }
    }
    else if (((uVar2 != 0) && (uVar2 != 2)) && ((uVar2 != 1 && (uVar2 != 3)))) break;
    uVar6 = uVar6 + 1;
    uVar9 = 0;
  } while (uVar6 < 4);
  *(int *)(param_1 + 0x28) = iVar5;
  return uVar9;
}



/* FUN_0000550c @ 0000550c */

int FUN_0000550c(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_118 [264];
  
  iVar2 = DAT_0000557c + 0x684;
  iVar1 = DAT_00005584;
  if (*(int *)(DAT_0000557c + 0x684) == DAT_00005580) {
    iVar1 = FUN_00013c5c(0x14,auStack_118,0x108);
    if (iVar1 == 0) {
      iVar2 = FUN_00001550(auStack_118,iVar2,0x108);
      iVar1 = 0;
      if (iVar2 != 0) {
        return DAT_00005584 + 4;
      }
    }
    else {
      if (iVar1 != DAT_00005588) {
        return iVar1;
      }
      iVar1 = FUN_00013e98(0x14,iVar2,0x108);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    *(undefined4 *)(DAT_0000558c + 0x3c) = *(undefined4 *)(DAT_0000557c + 0x688);
    FUN_00001670(DAT_0000558c + 0x40,DAT_00005590,0x100);
  }
  return iVar1;
}



/* FUN_00005594 @ 00005594 */

int FUN_00005594(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000055e0;
  if (*param_3 == -1) {
    iVar1 = FUN_00001ee4(param_5);
    if (iVar1 == -1) {
      return iVar2;
    }
    *param_3 = iVar1;
  }
  else {
    iVar2 = DAT_000055e4 + *param_3 * 8;
    if (-1 < param_4 << 0x15) {
      return DAT_000055e0 + -9;
    }
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00001728(iVar1,*(int *)(iVar1 + 4) + 0x70 + *(int *)(iVar1 + 0x68));
    FUN_00006b64(*(undefined4 *)(iVar2 + 4),param_5);
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return 0;
}



/* FUN_000055e8 @ 000055e8 */

int FUN_000055e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_20 [4];
  int local_1c [2];
  
  iVar1 = DAT_00005664;
  local_20[0] = -1;
  iVar3 = 0;
  iVar2 = FUN_000069c4(*(undefined4 *)(DAT_00005660 + 0x664),*(undefined4 *)(DAT_00005660 + 0x660),
                       *(undefined4 *)(DAT_00005664 + 0x18),local_20,local_1c,0,0,0xffff,
                       *(undefined4 *)(DAT_00005664 + 0x1c),0xfffffff7);
  if (iVar2 == 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    software_interrupt(0x7d);
    iVar2 = DAT_00005668;
    if (iVar3 != 0) {
      iVar2 = FUN_0000df3c(iVar3,local_1c[0] + *(int *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14))
      ;
    }
  }
  if (local_20[0] != -1) {
    software_interrupt(0x6c);
  }
  if (iVar3 != 0) {
    software_interrupt(0x7e);
  }
  return iVar2;
}



/* FUN_0000566c @ 0000566c */

undefined4 FUN_0000566c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte local_40 [4];
  byte local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined auStack_28 [4];
  
  puVar1 = DAT_000057bc;
  local_30 = 0;
  local_40[0] = 0xff;
  local_3c[0] = 0xff;
  local_38 = 0;
  software_interrupt(0x54);
  software_interrupt(0x9d);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  local_34 = param_1[2];
  uVar6 = param_1[3];
  *DAT_000057bc = 1;
  *(int *)(puVar1 + 8) = *(int *)(puVar1 + 8) + 1;
  uVar3 = FUN_000069c4(uVar2,uVar4,local_34,local_40,auStack_28,0,1,0xffff,uVar6,0xfffffff7);
  if (uVar3 == 0) {
    software_interrupt(0x6d);
    uVar3 = (uint)local_40[0];
    if (local_40[0] == 0) {
      iVar7 = *(int *)(DAT_000057c0 + 0x660);
      iVar8 = *(int *)(DAT_000057c0 + 0x664);
      uVar3 = DAT_000057c4;
      if ((iVar7 != 0 || iVar8 != 0) &&
         (uVar3 = FUN_000069c4(iVar8,iVar7,local_34,local_3c,&local_2c,0,0,0xffff,uVar6,0xfffffff7),
         uVar3 == 0)) {
        software_interrupt(0x6d);
        uVar3 = (uint)local_3c[0];
        if ((local_3c[0] == 0) &&
           (uVar3 = FUN_000057d0(local_38,0x10000000,local_30,local_34), uVar3 == 0)) {
          *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(local_2c + 0x8c);
          iVar5 = *(int *)(local_2c + 0x84);
          *(int *)(puVar1 + 0x10) = iVar5;
          *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(local_2c + 0x88);
          *(undefined4 *)(puVar1 + 0x18) = local_34;
          *(undefined4 *)(puVar1 + 0x1c) = uVar6;
          local_2c = local_2c + iVar5;
          *(undefined4 *)(local_2c + 0xa000) = 0;
          *(undefined4 *)(local_2c + 0xa004) = 0;
          *(undefined4 *)(local_2c + 0xa00c) = 2;
          iVar5 = DAT_000057c8;
          *(undefined4 *)(local_2c + 0xa020) = 0x10000000;
          *(int *)(local_2c + 0xa010) = iVar5;
          *(int *)(local_2c + 0xa018) = iVar7;
          *(int *)(local_2c + 0xa01c) = iVar8;
          *(int *)(local_2c + 0xa030) = iVar7;
          *(int *)(local_2c + 0xa034) = iVar8;
          *(undefined4 *)(local_2c + 0xa024) = 0;
          *(int *)(local_2c + 41000) = iVar5 << 8;
          *(undefined4 *)(local_2c + 0xa038) = 0x10000000;
          *(undefined4 *)(local_2c + 0xa03c) = 0;
        }
      }
    }
  }
  if (local_40[0] != 0xff) {
    software_interrupt(0x6c);
  }
  if (local_3c[0] != 0xff) {
    software_interrupt(0x6c);
  }
  *(uint *)(puVar1 + 4) = uVar3;
  *puVar1 = 0;
  software_interrupt(0x53);
  return 0xff;
}



/* FUN_000057cc @ 000057cc */

undefined4 FUN_000057cc(void)

{
  return 0;
}



/* FUN_000057d0 @ 000057d0 */

/* WARNING: Type propagation algorithm not settling */

int FUN_000057d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_1d8 [32];
  undefined *local_1b8;
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int local_188 [10];
  undefined auStack_160 [260];
  undefined auStack_5c [48];
  int local_2c;
  
  local_1a0 = *DAT_0000597c;
  local_188[1] = 0;
  local_1b8 = auStack_160;
  local_18c = param_1;
  local_2c = local_1a0;
  iVar2 = FUN_00005360(local_1b8,0x100);
  puVar1 = local_1b8;
  if (iVar2 == 0) {
    software_interrupt(0x79);
    uVar3 = FUN_00008ad8(0x40);
    iVar2 = FUN_0000a1ac(local_1b8,&local_1ac,&uStack_198,&local_19c,&local_194,&local_1a4,uVar3);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_0000b5f4(local_1b8,param_2,param_4,local_1ac,0x40,local_188 + 1,&local_1b4,
                             &local_1b0,local_188,&local_1a8), iVar2 == 0)) {
      local_188[2] = local_1b0;
      local_190 = param_3 + local_188[0];
      if (local_1a4 == 0x100) {
        uVar3 = 3;
      }
      else {
        iVar2 = DAT_00005980;
        if (local_1a4 != 0x200) goto LAB_00005968;
        uVar3 = 4;
      }
      iVar2 = FUN_000065f4();
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00006690(puVar1 + local_1ac * 0x100,local_1a8,uVar3,1), iVar2 == 0)) {
        param_3 = param_3 + local_1a8 + local_1ac * 0x100;
        iVar6 = local_1a8;
        for (; local_1b4 != 0; local_1b4 = local_1b4 - uVar5) {
          uVar5 = local_1b4;
          if (0x8000 < local_1b4) {
            uVar5 = 0x8000;
          }
          uVar4 = local_1b0;
          if (uVar5 < local_1b0) {
            uVar4 = uVar5;
          }
          iVar6 = iVar6 + uVar5;
          iVar2 = FUN_000032d8(auStack_1d8,2,param_1,0,2,0,param_3,0,2,0,uVar5 + 0xf & 0xfffffff0,1)
          ;
          if (iVar2 != 0) {
            iVar2 = DAT_00005980 + -10;
            goto LAB_00005968;
          }
          iVar2 = FUN_00014198(auStack_1d8,1);
          if (iVar2 != 0) goto LAB_00005968;
          if (local_1b4 < 0x8001) {
            iVar2 = FUN_000064e8(param_1,uVar5,iVar6,auStack_5c,uVar3);
          }
          else {
            iVar2 = FUN_00006690(param_1,uVar5,uVar3,0);
          }
          if (iVar2 != 0) goto LAB_00005968;
          param_3 = param_3 + uVar5;
          param_1 = param_1 + uVar4;
          local_1b0 = local_1b0 - uVar4;
        }
        iVar2 = FUN_00009d60(local_190,uStack_198,local_19c,local_194,local_1a4,auStack_5c,uVar3);
        if (iVar2 == 0) {
          *(undefined4 *)(DAT_00005984 + 0x100) = *(undefined4 *)(local_1b8 + 0x60);
          *(undefined4 *)(DAT_00005988 + 0x100) = *(undefined4 *)(local_1b8 + 0x4c);
        }
        else {
          FUN_000039e8(local_18c,0,local_188[2]);
        }
      }
    }
  }
LAB_00005968:
  if (local_2c != local_1a0) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_0000598c @ 0000598c */

void FUN_0000598c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = DAT_00005a5c;
  FUN_00001728(DAT_00005a5c,0xa0,param_3,param_4,param_1,param_2,param_3,param_4);
  iVar1 = DAT_00005a5c + -0x20;
  FUN_00001728(iVar1,0x20);
  iVar2 = DAT_00005a5c + 0xa0;
  FUN_00001728(iVar2,0xa0);
  iVar9 = DAT_00005a60;
  FUN_00001728(DAT_00005a60,0xa0);
  iVar3 = DAT_00005a60 + 0xa0;
  FUN_00001728(iVar3,0xa0);
  iVar4 = FUN_00002cde(param_4,iVar7,0xa0);
  if (((iVar4 == 0) && (iVar4 = FUN_00002cde(param_3,iVar1,0x20), iVar4 == 0)) &&
     (iVar5 = FUN_00002cde(param_2,iVar3,0xa0), iVar4 = DAT_00005a64, iVar5 == 0)) {
    uVar6 = 0;
    do {
      iVar5 = iVar4 - uVar6;
      iVar8 = iVar4 + uVar6;
      uVar6 = uVar6 + 1;
      *(code *)(iVar8 + 0x55f8) = FUN_000057d0[iVar5 + 7];
    } while (uVar6 < 0xa0);
    iVar7 = FUN_000045c0(iVar7,0xa0,iVar1,0x20,iVar2,0xa0,iVar9);
    if (iVar7 == 0) {
      uVar6 = 0;
      do {
        iVar7 = iVar4 - uVar6;
        iVar9 = iVar4 + uVar6;
        uVar6 = uVar6 + 1;
        *(undefined *)(iVar9 + 0x5738) = *(undefined *)(iVar7 + 0x5737);
      } while (uVar6 < 0xa0);
      FUN_00002836(param_1,iVar3);
      return;
    }
  }
  return;
}



/* FUN_00005a68 @ 00005a68 */

int FUN_00005a68(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  undefined auStack_50 [20];
  int local_3c;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  
  piVar2 = DAT_00005c78;
  piVar1 = DAT_00005c74;
  iVar3 = *DAT_00005c6c;
  iVar15 = iVar3;
  iVar12 = DAT_00005c70;
  local_3c = iVar3;
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_3 == 0x14) {
    software_interrupt(0x5e);
    piVar17 = DAT_00005c78 + 0x12f;
    piVar4 = DAT_00005c78 + 0x25e;
    piVar5 = DAT_00005c78 + 0x38d;
    piVar6 = DAT_00005c78 + 0x4bc;
    piVar7 = DAT_00005c78 + 0x5eb;
    piVar8 = DAT_00005c78 + 0x71a;
    piVar9 = DAT_00005c78 + 0x849;
    piVar16 = DAT_00005c78 + 0x978;
    piVar18 = DAT_00005c78 + 0xaa7;
    piVar10 = DAT_00005c78 + 0xbd6;
    piVar11 = DAT_00005c78 + 0xd05;
    iVar12 = FUN_00002836(piVar5,param_1,0x80);
    bVar19 = iVar12 == 0;
    do {
      do {
        do {
          do {
            if (!bVar19) goto LAB_00005c54;
            iVar12 = FUN_00002836(piVar6,param_1 + 0x80,0x14);
            bVar19 = iVar12 == 0;
          } while (!bVar19);
          iVar12 = FUN_00002836(piVar4,param_1 + 0x94,0x80);
          bVar19 = iVar12 == 0;
        } while (!bVar19);
        iVar12 = FUN_00002836(piVar7,param_1 + 0x114,0x80);
        bVar19 = iVar12 == 0;
      } while (!bVar19);
      FUN_000015e4(auStack_50,local_28,0x14);
      FUN_000036d0(auStack_50,0x14);
      iVar12 = FUN_00002836(piVar2,auStack_50,0x14);
      bVar19 = iVar12 == 0;
    } while (!bVar19);
    FUN_000015e4(auStack_50,local_28 + 0x14,0x14);
    FUN_000036d0(auStack_50,0x14);
    iVar12 = FUN_00002836(piVar17,auStack_50,0x14);
    if (iVar12 == 0) {
      FUN_000015e4(auStack_50,local_30,0x14);
      FUN_000036d0(auStack_50,0x14);
      iVar12 = FUN_00002836(piVar8,auStack_50,0x14);
      iVar15 = DAT_00005c7c;
      if ((((iVar12 == 0) && (iVar12 = iVar15, *piVar2 != 0)) && (*piVar17 != 0)) &&
         ((iVar13 = FUN_00002498(piVar2,piVar6), iVar13 == 2 &&
          (iVar13 = FUN_00002498(piVar17,piVar6), iVar13 == 2)))) {
        piVar14 = piVar2 + 0xe34;
        iVar12 = FUN_0000282a(piVar14,piVar9,piVar17,piVar6);
        if ((((iVar12 == 0) &&
             ((iVar12 = FUN_000028e0(piVar10,piVar8,piVar9,0), iVar12 == 0 &&
              (iVar12 = FUN_000024e0(piVar14,0,piVar10,piVar6,piVar16), iVar12 == 0)))) &&
            ((iVar12 = FUN_000028e0(piVar10,piVar2,piVar9,0), iVar12 == 0 &&
             ((((iVar12 = FUN_000024e0(piVar14,0,piVar10,piVar6,piVar18), iVar12 == 0 &&
                (iVar12 = FUN_0000598c(piVar10,piVar4,piVar16,piVar5), iVar12 == 0)) &&
               (iVar12 = FUN_0000598c(piVar11,piVar7,piVar18,piVar5), iVar12 == 0)) &&
              ((iVar12 = FUN_000028e0(piVar16,piVar10,piVar11,0), iVar12 == 0 &&
               (iVar12 = FUN_000024e0(piVar14,0,piVar16,piVar5,piVar16), iVar12 == 0)))))))) &&
           ((iVar12 = FUN_000024e0(piVar14,0,piVar16,piVar6,piVar16), iVar12 == 0 &&
            (iVar13 = FUN_00002498(piVar2,piVar16), iVar13 != 3)))) {
          iVar12 = iVar15;
        }
      }
    }
LAB_00005c54:
    software_interrupt(0x5f);
    iVar15 = *piVar1;
  }
  if (local_3c != iVar3) {
    FUN_00001a20(iVar15);
  }
  return iVar12;
}



/* FUN_00005dec @ 00005dec */

int FUN_00005dec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  uint local_78;
  int iStack_74;
  int iStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined auStack_60 [64];
  int local_20;
  
  iVar4 = *DAT_00005e8c;
  local_20 = iVar4;
  FUN_00001728(auStack_60,0x40);
  local_64 = 0;
  iVar3 = param_2 << 0x1b;
  iVar2 = DAT_00005e90;
  if (iVar3 == 0) {
    uVar5 = FUN_000067fa(param_2 + 0x100,0x1000,&local_64);
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    iVar2 = DAT_00005e94;
    if (iVar1 != 0) {
      FUN_000015e4(auStack_60,param_1 + 0x80,0x10);
      iVar2 = FUN_00016b00(auStack_60);
      if (iVar2 == 0) {
        local_80 = 0x80;
        uStack_84 = 0;
        iStack_70 = param_1 + 0x20;
        local_78 = *(int *)(param_1 + 0x14) + 0x1fU & 0xffffffe0;
        local_6c = 1;
        local_68 = DAT_00005e98;
        local_88 = auStack_60;
        iStack_7c = iVar1;
        iStack_74 = iVar1;
        iVar2 = FUN_0000c98c(&local_88,&local_6c);
      }
      software_interrupt(99);
      iVar3 = local_64;
    }
  }
  if (local_20 != iVar4) {
    FUN_00001a20(local_20,iVar3);
  }
  return iVar2;
}



/* FUN_00005e9c @ 00005e9c */

undefined4 FUN_00005e9c(int param_1)

{
  int iVar1;
  
  if (0xff < param_1 - 0x100U) {
    return DAT_00005ed8;
  }
  iVar1 = DAT_00005edc + (param_1 - 0x100U) * 0x58;
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  *(undefined *)(iVar1 + 0x50) = 0;
  FUN_00001728(iVar1,0x40);
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  return 0;
}



/* FUN_00005ee0 @ 00005ee0 */

int FUN_00005ee0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00005f30;
  if (param_2 != 0) {
    software_interrupt(0x5e);
    iVar1 = FUN_00008960(param_1,param_2,param_3);
    if (iVar1 == -1) {
      iVar2 = DAT_00005f30 + 2;
    }
    else {
      iVar2 = FUN_00013ba0(iVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_00005e9c(iVar1);
      }
    }
    software_interrupt(0x5f);
  }
  return iVar2;
}



/* FUN_00005f34 @ 00005f34 */

undefined4 FUN_00005f34(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_124;
  undefined auStack_120 [256];
  int iStack_20;
  
  uVar1 = DAT_00005f44;
  uVar2 = DAT_00005f40;
  iVar3 = *DAT_00006068;
  uStack_124 = 0;
  iStack_20 = iVar3;
  FUN_000016e4(auStack_120,0xe0);
  uVar2 = FUN_000060f8(param_1,uVar2,&uStack_124,4,uVar1,0x20,auStack_120);
  if (iStack_20 != iVar3) {
    FUN_00001a20();
  }
  return uVar2;
}



/* FUN_00005f48 @ 00005f48 */

int FUN_00005f48(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined *puStack_c4;
  undefined4 uStack_c0;
  undefined *local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined *puStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined auStack_80 [44];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined auStack_44 [32];
  int local_24;
  
  iVar1 = *DAT_00005ff0;
  local_4c = DAT_00005ffc;
  uStack_48 = DAT_00006000;
  local_54 = DAT_00005ff4;
  uStack_50 = DAT_00005ff8;
  iVar2 = DAT_00006004;
  local_24 = iVar1;
  if ((param_2 & 0xf) == 0) {
    local_ac = 1;
    local_a8 = 1;
    local_a4 = 0x20;
    local_9c = 0x20;
    uStack_98 = DAT_00006008;
    puStack_a0 = auStack_44;
    iVar2 = FUN_0000eb08(&local_ac);
    if (iVar2 == 0) {
      FUN_000015e4(auStack_80,&local_54,0x10);
      uVar3 = 0;
      local_cc = 0;
      uStack_c8 = 0x100;
      uStack_c0 = 0x20;
      uStack_b8 = 0;
      local_b4 = 0;
      local_b0 = DAT_0000600c;
      local_d0 = auStack_44;
      puStack_c4 = auStack_80;
      local_bc = auStack_80;
      while ((uVar3 < param_2 >> 4 && (iVar2 = FUN_0000c98c(&local_d0), iVar2 == 0))) {
        FUN_000015e4(param_1 + uVar3 * 0x10,auStack_80,0x10);
        uVar3 = uVar3 + 1;
      }
    }
  }
  if (local_24 != iVar1) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_00006010 @ 00006010 */

undefined4 FUN_00006010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_124;
  undefined auStack_120 [256];
  int local_20;
  
  uVar1 = DAT_00006018;
  iVar2 = *DAT_00006068;
  local_124 = 0;
  local_20 = iVar2;
  FUN_000016e4(auStack_120,0xe0);
  uVar1 = FUN_000060f8(param_1,uVar1,&local_124,4,param_2,param_3,auStack_120);
  if (local_20 != iVar2) {
    FUN_00001a20();
  }
  return uVar1;
}



/* FUN_0000606c @ 0000606c */

int FUN_0000606c(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined *local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  uint *puStack_94;
  undefined4 local_90;
  uint *local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined auStack_60 [32];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_1c;
  
  iVar2 = *DAT_000060f0;
  local_1c = iVar2;
  iVar1 = FUN_0000925c(param_1,auStack_60);
  if ((iVar1 == 0) && (iVar1 = FUN_0000925c(param_2,&local_40), iVar1 == 0)) {
    local_9c = 0;
    uStack_98 = 0x80;
    local_90 = 0x20;
    uStack_88 = 0;
    local_84 = 1;
    local_80 = DAT_000060f4;
    local_a0 = auStack_60;
    puStack_94 = &local_40;
    local_8c = param_3;
    iVar1 = FUN_0000c98c(&local_a0,0x20,&local_90);
    if (iVar1 == 0) {
      *param_3 = *param_3 ^ local_40;
      param_3[1] = param_3[1] ^ local_3c;
      param_3[2] = param_3[2] ^ local_38;
      param_3[3] = param_3[3] ^ local_34;
    }
  }
  if (local_1c != iVar2) {
    FUN_00001a20();
  }
  return iVar1;
}



/* FUN_000060f8 @ 000060f8 */

int FUN_000060f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = DAT_00006170;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_7 != 0)) {
    local_34 = param_1;
    uStack_30 = param_2;
    iStack_2c = param_3;
    iStack_28 = param_4;
    FUN_000015e4(param_7,DAT_00006168,0x20);
    local_50 = 0x100;
    iStack_4c = param_7;
    local_48 = 0x20;
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_3c = 0;
    uStack_38 = DAT_0000616c;
    local_44 = param_7 + 0x20;
    iVar1 = FUN_0000c98c(&local_58);
    if (iVar1 == 0) {
      iVar1 = FUN_00006174(local_34,param_7 + 0x20,0x20,param_2,param_3,param_4,param_5,param_6,1,
                           param_7);
    }
  }
  return iVar1;
}



/* FUN_00006174 @ 00006174 */

int FUN_00006174(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                uint param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 4;
  if ((((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) ||
     (((param_6 == 0 || (param_7 == 0)) || (param_8 == 0)))) {
    iVar1 = DAT_00006258 + 1;
  }
  else {
    iVar1 = DAT_00006258;
    if ((param_7 & 3) == 0) {
      if (param_4 != 0) {
        iVar2 = FUN_000015a8(param_4);
        if (0x80 < iVar2 + 5U) {
          return DAT_00006258 + -1;
        }
        FUN_000015e4(param_10 + 0x44,param_4,iVar2 + 1);
        iVar2 = iVar2 + 5;
      }
      FUN_000015e4(param_10 + iVar2 + 0x40,param_5,param_6);
      iVar2 = iVar2 + param_6;
      if (param_9 != 0) {
        iVar1 = param_10 + iVar2;
        iVar2 = iVar2 + 4;
        *(uint *)(iVar1 + 0x40) = param_8 << 3;
      }
      software_interrupt(0x68);
      uVar3 = 1;
      do {
        *(uint *)(param_10 + 0x40) =
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18;
        software_interrupt(0x68);
        iVar1 = FUN_00009198(param_1,DAT_0000625c,param_2,param_3,(uint *)(param_10 + 0x40),iVar2,
                             param_10 + 0xc0,0x20);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar4 = 0x20;
        if (param_8 < 0x21) {
          uVar4 = param_8;
        }
        FUN_000015e4(param_7,param_10 + 0xc0,uVar4);
        param_8 = param_8 - uVar4;
        param_7 = param_7 + uVar4;
        iVar1 = 0;
        uVar3 = uVar3 + 1;
      } while (param_8 != 0);
    }
  }
  return iVar1;
}



/* FUN_00006260 @ 00006260 */

int FUN_00006260(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined *puStack_ec;
  undefined4 uStack_e8;
  undefined *local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *puStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined auStack_a0 [36];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined auStack_4c [32];
  int local_2c;
  
  iVar1 = *DAT_0000634c;
  local_74 = DAT_00006358;
  uStack_70 = DAT_0000635c;
  local_7c = DAT_00006350;
  uStack_78 = DAT_00006354;
  local_64 = DAT_00006368;
  uStack_60 = DAT_0000636c;
  local_6c = DAT_00006360;
  uStack_68 = DAT_00006364;
  local_54 = DAT_00006378;
  uStack_50 = DAT_0000637c;
  local_5c = DAT_00006370;
  uStack_58 = DAT_00006374;
  iVar2 = DAT_00006380;
  local_2c = iVar1;
  if (param_3 == 1) {
    puVar3 = &local_7c;
  }
  else if (param_3 == 2) {
    puVar3 = &local_6c;
  }
  else {
    if (param_3 != 3) goto LAB_0000633a;
    puVar3 = &local_5c;
  }
  if ((((param_2 & 0xf) == 0) && (puVar3 != (undefined4 *)0x0)) && (param_1 != 0)) {
    local_d4 = 1;
    local_d0 = 1;
    local_cc = 0x20;
    local_c4 = 0x20;
    uStack_c0 = DAT_00006384;
    puStack_c8 = auStack_4c;
    iVar2 = FUN_0000eb08(&local_d4);
    if (iVar2 == 0) {
      FUN_000015e4(auStack_a0,puVar3,0x10);
      uVar4 = 0;
      local_f4 = 0;
      uStack_f0 = 0x100;
      uStack_e8 = 0x20;
      uStack_e0 = 0;
      local_dc = 0;
      local_d8 = DAT_00006388;
      local_f8 = auStack_4c;
      puStack_ec = auStack_a0;
      local_e4 = auStack_a0;
      while ((uVar4 < param_2 >> 4 && (iVar2 = FUN_0000c98c(&local_f8), iVar2 == 0))) {
        FUN_000015e4(param_1 + uVar4 * 0x10,auStack_a0,0x10);
        uVar4 = uVar4 + 1;
      }
    }
  }
LAB_0000633a:
  if (local_2c != iVar1) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_0000638c @ 0000638c */

undefined4 FUN_0000638c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_124;
  undefined auStack_120 [256];
  int local_20;
  
  iVar2 = *DAT_000063d8;
  local_124 = 0;
  local_20 = iVar2;
  FUN_000016e4(auStack_120,0xe0);
  uVar1 = FUN_000060f8(param_1,param_4,&local_124,4,param_2,param_3,auStack_120);
  if (local_20 != iVar2) {
    FUN_00001a20();
  }
  return uVar1;
}



/* FUN_000063dc @ 000063dc */

/* WARNING: Removing unreachable block (ram,0x00006408) */

void FUN_000063dc(undefined4 *param_1)

{
  software_interrupt(0x7b);
  if (DAT_00006410 == 0) {
    *param_1 = 0;
  }
  return;
}



/* FUN_00006414 @ 00006414 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00006414(void)

{
  uint *puVar1;
  uint uVar2;
  
  software_interrupt(0x7d);
  uVar2 = 0;
  puVar1 = (uint *)&DAT_0001c760;
  do {
    *puVar1 = *puVar1 | 0xff000000;
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  _DAT_0001c780 = 0;
  _DAT_0001c784 = 0;
  _DAT_0001c788 = 0xff;
  _DAT_0001c7f8 = _DAT_0001c7f8 & 0x1b;
  software_interrupt(0x7e);
  return 0x4000001c400;
}



/* FUN_00006458 @ 00006458 */

int FUN_00006458(undefined4 param_1,int param_2,int param_3,undefined *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined auStack_54 [32];
  undefined auStack_34 [32];
  
  uVar4 = 1;
  if (param_5 == 3) {
    uVar5 = 0x20;
  }
  else {
    if (param_5 != 4) {
      return DAT_000064dc;
    }
    uVar5 = 0x30;
  }
  if (param_2 == param_3) {
    uVar4 = 0x11;
  }
  iVar2 = FUN_00003554(auStack_54,param_1,param_2,param_3,0x41,param_5,uVar4);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_00003370(auStack_34,*DAT_000064e0 + 0x6c0,0x41,uVar5,1), iVar2 == 0)) &&
     (iVar2 = FUN_00014198(auStack_54,2), piVar1 = DAT_000064e4, iVar2 == 0)) {
    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      *param_4 = *(undefined *)((uVar5 - uVar3) + *piVar1 + 0x6bf);
      param_4 = param_4 + 1;
    }
  }
  return iVar2;
}



/* FUN_000064e8 @ 000064e8 */

int FUN_000064e8(undefined4 param_1,int param_2,int param_3,undefined *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined auStack_64 [32];
  undefined auStack_44 [32];
  
  uVar5 = 1;
  if (param_5 == 3) {
    uVar4 = 0x20;
  }
  else {
    if (param_5 != 4) {
      return DAT_00006584;
    }
    uVar4 = 0x30;
  }
  software_interrupt(0x5e);
  if (param_2 == param_3) {
    uVar5 = 0x11;
  }
  iVar2 = FUN_00003554(auStack_64,param_1,param_2,param_3,0x44,param_5,uVar5);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_00003370(auStack_44,*DAT_0000658c + 0x6c0,0x44,uVar4,1), iVar2 == 0)) &&
     (iVar2 = FUN_00014198(auStack_64,2), piVar1 = DAT_00006590, iVar2 == 0)) {
    for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
      *param_4 = *(undefined *)((uVar4 - uVar3) + *piVar1 + 0x6bf);
      param_4 = param_4 + 1;
    }
  }
  software_interrupt(0x5f);
  return iVar2;
}



/* FUN_00006594 @ 00006594 */

int FUN_00006594(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_2c [36];
  
  if (param_1 == 3) {
    uVar2 = 0x20;
    iVar1 = DAT_000065ec;
  }
  else {
    if (param_1 != 4) {
      return DAT_000065e8;
    }
    uVar2 = 0x40;
    iVar1 = DAT_000065ec + 0x20;
  }
  FUN_000015e4(*DAT_000065e4 + 0x680,iVar1,uVar2);
  iVar1 = FUN_000035e4(auStack_2c,0x41,*DAT_000065f0 + 0x680,param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00014198(auStack_2c,1);
  }
  return iVar1;
}



/* FUN_000065f4 @ 000065f4 */

int FUN_000065f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_2c [32];
  
  if (param_1 == 3) {
    uVar2 = 0x20;
    iVar1 = DAT_0000664c;
  }
  else {
    if (param_1 != 4) {
      return DAT_00006648;
    }
    uVar2 = 0x40;
    iVar1 = DAT_0000664c + 0x20;
  }
  FUN_000015e4(*DAT_00006644 + 0x11b8,iVar1,uVar2);
  iVar1 = FUN_000035e4(auStack_2c,0x44,*DAT_00006650 + 0x11b8,param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00014198(auStack_2c,1);
  }
  return iVar1;
}



/* FUN_00006654 @ 00006654 */

int FUN_00006654(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_28 [32];
  
  uVar2 = 1;
  if ((param_3 == 3) || (iVar1 = DAT_0000668c, param_3 == 4)) {
    if (param_4 != 0) {
      uVar2 = 0x11;
    }
    iVar1 = FUN_000035fe(auStack_28,param_1,param_2,0x41,param_3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00014198(auStack_28,1);
    }
  }
  return iVar1;
}



/* FUN_00006690 @ 00006690 */

int FUN_00006690(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_28 [32];
  
  uVar2 = 1;
  if ((param_3 == 3) || (iVar1 = DAT_000066c8, param_3 == 4)) {
    if (param_4 != 0) {
      uVar2 = 0x11;
    }
    iVar1 = FUN_000035fe(auStack_28,param_1,param_2,0x44,param_3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00014198(auStack_28,1);
    }
  }
  return iVar1;
}



/* FUN_000066cc @ 000066cc */

void FUN_000066cc(void)

{
  return;
}



/* FUN_000066ce @ 000066ce */

void FUN_000066ce(void)

{
  return;
}



/* FUN_000066d0 @ 000066d0 */

undefined8 FUN_000066d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  software_interrupt(0x7b);
  if (-1 < param_4 << 0xe) {
    software_interrupt(0x7c);
    iVar2 = DAT_0000675c;
    do {
      software_interrupt(0x7b);
      iVar2 = iVar2 + -1;
      if (param_4 == DAT_00006764) break;
    } while (iVar2 != 0);
  }
  if (param_1 == 0) {
    software_interrupt(0xa6);
    software_interrupt(0xa6);
    software_interrupt(0xa6);
    software_interrupt(0xa6);
    uVar1 = 0;
    iVar2 = DAT_00006758;
  }
  else {
    uVar1 = 0x10000;
    iVar2 = DAT_00006758 + -0xa0;
  }
  software_interrupt(0xa6);
  return CONCAT44(uVar1,iVar2);
}



/* FUN_0000676c @ 0000676c */

/* WARNING: Removing unreachable block (ram,0x00006792) */

int FUN_0000676c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  software_interrupt(0xa6);
  software_interrupt(0x7b);
  FUN_00011108(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),4);
  *(undefined4 *)(*DAT_000067e8 + 0x1d4) = *(undefined4 *)(param_1 + 0x1c);
  software_interrupt(0xa6);
  uVar2 = *(uint *)(*DAT_000067f0 + 0x58) | 0x80000000;
  *(uint *)(*DAT_000067f0 + 0x58) = uVar2;
  *(undefined *)(param_1 + 0x21) = 1;
  iVar1 = FUN_00006414(1,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00010104();
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0xc000000;
  }
  else {
    uVar3 = 0xd000000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return iVar1;
}



/* FUN_000067f4 @ 000067f4 */

undefined4 FUN_000067f4(void)

{
  return 0xffff;
}



/* FUN_000067fa @ 000067fa */

undefined8 FUN_000067fa(uint param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0xfffff000;
  iVar2 = param_1 - uVar1;
  software_interrupt(0x88);
  if (uVar1 != 0) {
    uVar1 = uVar1 + iVar2;
    *param_3 = param_2 + iVar2 + 0xfffU >> 0xc;
  }
  software_interrupt(0x68);
  return CONCAT44(1,uVar1);
}



/* FUN_00006834 @ 00006834 */

undefined8 FUN_00006834(uint param_1,uint param_2,uint param_3,code *param_4,int *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined local_30 [20];
  code *local_1c;
  
  local_1c = Reset;
  uVar3 = param_1 + CARRY4(param_2,param_3) + (uint)(0xfffff000 < param_2 + param_3);
  pcVar2 = (code *)(param_2 & 0xfffff000);
  puVar1 = DAT_000068b4;
  if (param_1 < uVar3 ||
      uVar3 - param_1 < (uint)(pcVar2 <= (code *)(param_2 + param_3 + 0xfff & 0xfffff000))) {
    iVar4 = param_2 - (int)pcVar2;
    software_interrupt(0x6b);
    puVar1 = local_30;
    pcVar2 = param_4;
    if (&param_5 == (int **)0x30) {
      pcVar2 = NotUsed;
      puVar1 = (undefined *)(uint)(byte)*param_4;
      software_interrupt(0x6d);
      if (puVar1 == (undefined *)0x0) {
        *param_5 = iVar4;
        pcVar2 = local_1c;
      }
    }
  }
  return CONCAT44(pcVar2,puVar1);
}



/* FUN_000068b8 @ 000068b8 */

undefined8 FUN_000068b8(uint param_1,uint param_2,uint param_3,code *param_4,int *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined local_30 [20];
  code *local_1c;
  
  local_1c = Reset;
  uVar3 = param_1 + CARRY4(param_2,param_3) + (uint)(0xfffff000 < param_2 + param_3);
  pcVar2 = (code *)(param_2 & 0xfffff000);
  puVar1 = DAT_00006938;
  if (param_1 < uVar3 ||
      uVar3 - param_1 < (uint)(pcVar2 <= (code *)(param_2 + param_3 + 0xfff & 0xfffff000))) {
    iVar4 = param_2 - (int)pcVar2;
    software_interrupt(0x98);
    puVar1 = local_30;
    pcVar2 = param_4;
    if (&param_5 == (int **)0x30) {
      pcVar2 = NotUsed;
      puVar1 = (undefined *)(uint)(byte)*param_4;
      software_interrupt(0x6d);
      if (puVar1 == (undefined *)0x0) {
        *param_5 = iVar4;
        pcVar2 = local_1c;
      }
    }
  }
  return CONCAT44(pcVar2,puVar1);
}



/* FUN_0000693c @ 0000693c */

undefined8 FUN_0000693c(uint param_1,uint param_2,uint param_3,code *param_4,int *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined local_34 [20];
  code *local_20;
  
  local_20 = Reset;
  uVar4 = param_1 + CARRY4(param_2,param_3) + (uint)(0xfffff000 < param_2 + param_3);
  pcVar2 = (code *)(param_2 & 0xfffff000);
  puVar1 = DAT_000069c0;
  if (param_1 < uVar4 ||
      uVar4 - param_1 < (uint)(pcVar2 <= (code *)(param_2 + param_3 + 0xfff & 0xfffff000))) {
    iVar3 = param_2 - (int)pcVar2;
    software_interrupt(0xab);
    puVar1 = local_34;
    pcVar2 = param_4;
    if (&param_5 == (int **)0x34) {
      pcVar2 = NotUsed;
      puVar1 = (undefined *)(uint)(byte)*param_4;
      software_interrupt(0x6d);
      if (puVar1 == (undefined *)0x0) {
        *param_5 = iVar3;
        pcVar2 = local_20;
      }
    }
  }
  return CONCAT44(pcVar2,puVar1);
}



/* FUN_000069c4 @ 000069c4 */

undefined8
FUN_000069c4(uint param_1,uint param_2,uint param_3,code *param_4,int *param_5,undefined4 param_6,
            int param_7)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined local_3c [20];
  code *local_28;
  
  local_28 = Reset;
  uVar3 = param_1 + CARRY4(param_2,param_3) + (uint)(0xfffff000 < param_2 + param_3);
  pcVar2 = (code *)(param_2 + param_3 + 0xfff & 0xfffff000);
  puVar1 = DAT_00006a54;
  if (param_1 < uVar3 || uVar3 - param_1 < (uint)((code *)(param_2 & 0xfffff000) <= pcVar2)) {
    if (param_7 == 0) {
      software_interrupt(0x6b);
    }
    else {
      software_interrupt(0x8b);
    }
    puVar1 = local_3c;
    pcVar2 = param_4;
    if (&param_5 == (int **)0x3c) {
      puVar1 = (undefined *)(uint)(byte)*param_4;
      pcVar2 = NotUsed;
      software_interrupt(0x6d);
      if (puVar1 == (undefined *)0x0) {
        *param_5 = param_2 - (int)(param_2 & 0xfffff000);
        pcVar2 = local_28;
      }
    }
  }
  return CONCAT44(pcVar2,puVar1);
}



/* FUN_00006a58 @ 00006a58 */

undefined4 FUN_00006a58(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  software_interrupt(0x7d);
  *param_3 = param_1;
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = DAT_00006a6c;
  }
  return uVar1;
}



/* FUN_00006a70 @ 00006a70 */

undefined4 FUN_00006a70(void)

{
  return 0;
}



/* FUN_00006a74 @ 00006a74 */

int FUN_00006a74(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_90 [30];
  
  uVar1 = DAT_00006adc;
  uVar3 = *param_1;
  if (uVar3 != 0x1000) {
    if (*(int *)(DAT_00006ae0 + 0xc) != 1) {
      return DAT_00006adc + 7;
    }
    if (DAT_00006adc <= uVar3) {
      FUN_00001728(local_90,0x78);
      goto LAB_00006ab2;
    }
  }
  FUN_00001670(local_90,param_1,0x78);
LAB_00006ab2:
  local_90[0] = uVar3;
  if (uVar3 < 0x1000) {
    iVar2 = FUN_00015410();
  }
  else {
    iVar2 = FUN_0000bc5c(local_90,param_2);
    if (uVar1 <= uVar3) {
      return iVar2;
    }
  }
  FUN_00001670(param_1,local_90,0x78);
  return iVar2;
}



/* FUN_00006ae4 @ 00006ae4 */

undefined4 FUN_00006ae4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x1fU & 0xfffffff0);
  param_1[3] = piVar1;
  *piVar1 = (int)param_1;
  piVar1[1] = 0;
  piVar1[2] = 0;
  *(undefined *)(piVar1 + 4) = 1;
  *(undefined *)((int)piVar1 + 0x11) = 0x56;
  piVar1[3] = (param_2 - (param_1[3] - (int)param_1)) + -0x20;
  *param_1 = piVar1;
  param_1[1] = piVar1;
  param_1[2] = piVar1[3];
  return 0;
}



/* FUN_00006b14 @ 00006b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00006b14(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  
  iVar2 = 0;
  software_interrupt(0x72);
  if (param_3 == 0) {
    software_interrupt(0x5e);
    local_1c = param_4;
    if ((_UndefinedInstruction != 0) || (iVar1 = FUN_00006ae4(0,param_4,&local_1c), iVar1 == 0)) {
      iVar2 = FUN_0000ade8(param_1,0,param_2);
      software_interrupt(0x5f);
      if ((iVar2 != 0) && (param_2 == 0)) {
        FUN_000016e4(iVar2,param_1);
      }
    }
  }
  return iVar2;
}



/* FUN_00006b64 @ 00006b64 */

int FUN_00006b64(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00006b9c;
  if (param_1 != 0) {
    if ((*(char *)(param_1 + -0xf) != 'V') || (*(char *)(param_1 + -0x10) != '\0')) {
      iVar2 = FUN_0000b5b0(DAT_00006b98);
      return iVar2;
    }
    software_interrupt(0x5e);
    FUN_0000ae8e(param_1);
    param_1 = *piVar1;
    software_interrupt(0x5f);
  }
  return param_1;
}



/* FUN_00006ba0 @ 00006ba0 */

int FUN_00006ba0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    param_1 = FUN_00006b14(param_2,0);
  }
  else if ((*(char *)(param_1 + -0xf) == 'V') && (*(char *)(param_1 + -0x10) != '\x01')) {
    uVar2 = *(uint *)(param_1 + -8);
    if (param_2 < *(uint *)(param_1 + -8)) {
      uVar2 = param_2;
    }
    iVar1 = FUN_00006b14(param_2,*(undefined4 *)(param_1 + -0xc),param_3);
    if (iVar1 == 0) {
      param_1 = 0;
    }
    else {
      FUN_000015e4(iVar1,param_1,uVar2);
      FUN_00006b64(param_1,param_3);
      param_1 = iVar1;
    }
  }
  else {
    FUN_0000b5b0(DAT_00006c04);
  }
  return param_1;
}



/* FUN_00006c08 @ 00006c08 */

int FUN_00006c08(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_1c4;
  int local_1c0;
  int local_1bc;
  undefined auStack_1b8 [384];
  int local_38;
  int local_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  iVar3 = DAT_00006e1c;
  iVar2 = DAT_00006e14;
  iVar1 = DAT_00006e10;
  iVar4 = *DAT_00006e08;
  local_1c4 = 0x60;
  software_interrupt(0x5e);
  iVar7 = DAT_00006e14 + 0x168;
  iVar11 = DAT_00006e10 + 0x4bc;
  iVar5 = DAT_00006e14 + 0x2b8;
  local_1c0 = DAT_00006e14 + -0x1c68;
  iVar9 = DAT_00006e14 + 0x48;
  iVar8 = DAT_00006e14 + 0x90;
  iVar10 = DAT_00006e14 + 0xd8;
  iVar6 = DAT_00006e18;
  local_38 = iVar4;
  local_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (param_1 == 4) {
    if (((param_3 < 0x30) || (param_5 < 0x30)) || (param_7 < 0x30)) {
      iVar6 = DAT_00006e18 + 6;
    }
    else {
      iVar6 = FUN_000043c8(auStack_1b8,0x30);
      if (iVar6 == 0) {
        local_1bc = iVar3 + 0x90;
        iVar6 = FUN_00001550(auStack_1b8,local_1bc,0x30);
        if (0 < iVar6) {
          FUN_000036d0(auStack_1b8,0x30);
          iVar6 = FUN_00002836(iVar11,auStack_1b8,0x30);
          if (((iVar6 != 0) ||
              (iVar6 = FUN_000052e4(iVar5,&local_1c4,local_1bc,*(undefined4 *)(iVar3 + 0x120),1),
              iVar6 != 0)) ||
             ((iVar6 = FUN_00002836(iVar1,iVar5,*(undefined4 *)(iVar3 + 0x120)), iVar6 != 0 ||
              ((iVar6 = FUN_000024e0(local_1c0,0,iVar11,iVar1,iVar11), iVar6 != 0 ||
               (iVar6 = FUN_00002cde(iVar11,auStack_1b8,0x30), iVar6 != 0)))))) goto LAB_00006dec;
          FUN_000036d0(auStack_1b8,0x30);
        }
        FUN_000015e4(local_30,auStack_1b8,0x30);
        *(undefined4 *)(iVar2 + 0x44) = 0x30;
        iVar6 = FUN_000052e4(iVar2,iVar2 + 0x44,auStack_1b8,0x30,1);
        if (iVar6 == 0) {
          *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(iVar3 + 0x120);
          iVar6 = FUN_000052e4(iVar9,iVar2 + 0x8c,iVar3,*(undefined4 *)(iVar3 + 0x120),1);
          if (iVar6 == 0) {
            *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar3 + 0x120);
            iVar6 = FUN_000052e4(iVar8,iVar2 + 0xd4,iVar3 + 0x30,*(undefined4 *)(iVar3 + 0x120),1);
            if (iVar6 == 0) {
              *(undefined4 *)(iVar2 + 0x1ac) = *(undefined4 *)(iVar3 + 0x120);
              iVar6 = FUN_000052e4(iVar7,iVar2 + 0x1ac,iVar3 + 0xc0,*(undefined4 *)(iVar3 + 0x120),1
                                  );
              if (iVar6 == 0) {
                *(undefined4 *)(iVar2 + 500) = *(undefined4 *)(iVar3 + 0x120);
                iVar6 = FUN_000052e4(iVar2 + 0x1b0,iVar2 + 500,iVar3 + 0xf0,
                                     *(undefined4 *)(iVar3 + 0x120),1);
                if ((((iVar6 == 0) &&
                     (iVar6 = FUN_00009c8c(iVar9,iVar8,iVar2,iVar7,iVar10), iVar6 == 0)) &&
                    (iVar6 = FUN_00009f8c(local_34,iVar10), iVar6 == 0)) &&
                   (iVar6 = FUN_000052e4(local_28,&param_5,iVar10,0x30,1), iVar6 == 0)) {
                  iVar6 = FUN_000052e4(param_6,&param_7,iVar2 + 0x120,0x30,1);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00006dec:
  software_interrupt(0x5f);
  if (local_38 != iVar4) {
    FUN_00001a20(*DAT_00006e0c);
  }
  return iVar6;
}



/* FUN_00006e20 @ 00006e20 */

int FUN_00006e20(undefined4 param_1,uint param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 local_74 [2];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_34;
  uint local_30;
  int *piStack_2c;
  int local_28;
  
  iVar2 = DAT_000070f4;
  iVar7 = DAT_000070ec;
  iVar1 = DAT_000070e8;
  local_74[0] = 0x30;
  software_interrupt(0x5e);
  local_64 = DAT_000070e8;
  local_68 = DAT_000070e8 + 0x4bc;
  piVar8 = (int *)(DAT_000070e8 + 0x978);
  local_58 = DAT_000070e8 + 0xe34;
  piVar9 = (int *)(DAT_000070e8 + 0x12f0);
  iVar3 = DAT_000070e8 + 0x17ac;
  local_4c = DAT_000070ec;
  iVar11 = DAT_000070ec + 0x48;
  iVar10 = DAT_000070ec + 0x90;
  local_60 = DAT_000070ec + 0xd8;
  iVar6 = DAT_000070ec + 0x168;
  local_6c = DAT_000070ec + 0x2b8;
  local_44 = DAT_000070ec + 0x288;
  iVar4 = DAT_000070f0;
  if (*param_3 == 4) {
    uVar5 = *(uint *)(DAT_000070f4 + 0x120);
    if ((param_5 < uVar5 << 1) ||
       (local_5c = piVar8, local_40 = local_58, local_3c = local_58, local_34 = param_1,
       local_30 = param_2, piStack_2c = param_3, local_28 = param_4, FUN_000016e4(local_44,0x30),
       0x30 < uVar5)) {
      iVar4 = DAT_000070f0 + 6;
    }
    else {
      iVar4 = local_44;
      if (local_30 < uVar5) {
        iVar4 = local_44 + (uVar5 - local_30);
        uVar5 = local_30;
      }
      FUN_000015e4(iVar4,local_34,uVar5);
      FUN_000036d0(local_44,*(undefined4 *)(iVar2 + 0x120));
      iVar4 = FUN_000043c8(local_4c,*(undefined4 *)(iVar2 + 0x120));
      if (iVar4 == 0) {
        *(undefined4 *)(local_4c + 0x44) = *(undefined4 *)(iVar2 + 0x120);
        iVar4 = FUN_00002836(iVar1,local_4c);
        if (iVar4 == 0) {
          FUN_000016e4(local_6c,0x60);
          iVar4 = FUN_000052e4(local_6c,local_74,iVar2 + 0x90,*(undefined4 *)(iVar2 + 0x120),1);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_00002836(local_68,local_6c,*(undefined4 *)(iVar2 + 0x120)), iVar4 == 0))
             && ((iVar4 = FUN_00002498(iVar1,local_68), iVar4 == 2 ||
                 (iVar4 = FUN_000024e0(iVar3,0,iVar1,local_68,iVar1), iVar4 == 0)))) {
            *(undefined4 *)(iVar7 + 0x8c) = *(undefined4 *)(iVar2 + 0x120);
            iVar4 = FUN_000052e4(iVar11,iVar7 + 0x8c,iVar2,*(undefined4 *)(iVar2 + 0x120),1);
            if (iVar4 == 0) {
              *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(iVar2 + 0x120);
              iVar4 = FUN_000052e4(iVar10,iVar7 + 0xd4,iVar2 + 0x30,*(undefined4 *)(iVar2 + 0x120),1
                                  );
              if (iVar4 == 0) {
                *(undefined4 *)(iVar7 + 0x1ac) = *(undefined4 *)(iVar2 + 0x120);
                iVar4 = FUN_000052e4(iVar6,iVar7 + 0x1ac,iVar2 + 0xc0,*(undefined4 *)(iVar2 + 0x120)
                                     ,1);
                if (iVar4 == 0) {
                  *(undefined4 *)(iVar7 + 500) = *(undefined4 *)(iVar2 + 0x120);
                  iVar4 = FUN_000052e4(iVar7 + 0x1b0,iVar7 + 500,iVar2 + 0xf0,
                                       *(undefined4 *)(iVar2 + 0x120),1);
                  if (((((((iVar4 == 0) &&
                          (iVar4 = FUN_00009c8c(iVar11,iVar10,local_4c,iVar6,local_60), iVar4 == 0))
                         && (iVar4 = FUN_00002836(local_5c,local_60,*(undefined4 *)(local_60 + 0x44)
                                                 ), iVar4 == 0)) &&
                        ((iVar4 = FUN_000024e0(iVar3,0,local_5c,local_68,piVar8), iVar4 == 0 &&
                         (iVar7 = DAT_000070f0 + -10, iVar4 = iVar7, *piVar8 != 0)))) &&
                       ((iVar4 = FUN_00002836(local_58,param_3 + 2,(uint)param_3[1] >> 3),
                        iVar4 == 0 &&
                        ((iVar4 = FUN_000028e0(piVar9,piVar8,local_58,0), iVar4 == 0 &&
                         (iVar4 = FUN_00002836(local_40,local_44,*(undefined4 *)(iVar2 + 0x120)),
                         iVar4 == 0)))))) &&
                      ((iVar4 = FUN_00002370(local_3c,local_40,piVar9), iVar4 == 0 &&
                       ((((iVar4 = FUN_000024e0(iVar3,0,local_3c,local_68,local_3c), iVar4 == 0 &&
                          (iVar4 = FUN_0000282a(iVar3,piVar9,iVar1,local_68), iVar4 == 0)) &&
                         (iVar4 = FUN_000028e0(local_64,local_3c,piVar9,0), iVar4 == 0)) &&
                        ((iVar4 = FUN_000024e0(iVar3,0,local_64,local_68,piVar9), iVar4 == 0 &&
                         (iVar4 = iVar7, *piVar9 != 0)))))))) &&
                     ((*piVar8 == *piVar9 &&
                      (iVar4 = FUN_00002cde(piVar8,local_28,*(undefined4 *)(iVar2 + 0x120)),
                      iVar4 == 0)))) {
                    FUN_000036d0(local_28,*(undefined4 *)(iVar2 + 0x120));
                    iVar4 = FUN_00002cde(piVar9,*(int *)(iVar2 + 0x120) + local_28);
                    if (iVar4 == 0) {
                      FUN_000036d0(local_28 + *(int *)(iVar2 + 0x120));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  software_interrupt(0x5f);
  return iVar4;
}



/* FUN_000070f8 @ 000070f8 */

int FUN_000070f8(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  bool bVar21;
  
  iVar2 = DAT_000074a8;
  iVar15 = DAT_000074a0;
  piVar1 = DAT_0000749c;
  software_interrupt(0x5e);
  piVar3 = DAT_0000749c + 0x12f;
  piVar4 = DAT_0000749c + 0x25e;
  piVar18 = DAT_0000749c + 0x38d;
  piVar20 = DAT_0000749c + 0x4bc;
  piVar5 = DAT_0000749c + 0x5eb;
  iVar6 = DAT_000074a0 + 0x48;
  iVar7 = DAT_000074a0 + 0x90;
  iVar19 = DAT_000074a0 + 0xd8;
  iVar17 = DAT_000074a0 + 0x168;
  iVar8 = DAT_000074a0 + 0x1f8;
  iVar9 = DAT_000074a0 + 0x2b8;
  iVar10 = DAT_000074a0 + 0x288;
  iVar11 = DAT_000074a4;
  if (*param_5 == 4) {
    iVar16 = (int)param_5 + 0x4a;
    iVar11 = FUN_00002836(piVar18,iVar16,(uint)param_5[1] >> 3);
    if (iVar11 == 0) {
      iVar11 = FUN_00002836(piVar20,param_5 + 0x23,(uint)param_5[1] >> 3);
      if (iVar11 == 0) {
        bVar21 = *piVar18 == 0;
        do {
          if (bVar21) goto LAB_00007488;
          bVar21 = *piVar20 == 0;
        } while (bVar21);
        FUN_000015e4(iVar19,iVar16,(uint)param_5[1] >> 3);
        *(uint *)(iVar15 + 0x11c) = (uint)param_5[1] >> 3;
        FUN_00001670(iVar15 + 0x120,param_5 + 0x23,(uint)param_5[1] >> 3);
        *(uint *)(iVar15 + 0x164) = (uint)param_5[1] >> 3;
        iVar16 = FUN_00009f8c(*param_5,iVar19);
        bVar21 = iVar16 == 0;
LAB_000071c6:
        iVar11 = iVar16;
        if (bVar21) {
          *(undefined4 *)(iVar15 + 0x8c) = *(undefined4 *)(iVar2 + 0x120);
          iVar16 = FUN_000052e4(iVar6,iVar15 + 0x8c,iVar2,*(undefined4 *)(iVar2 + 0x120),1);
          bVar21 = iVar16 == 0;
          iVar13 = 1;
          while( true ) {
            iVar11 = iVar16;
            if (!bVar21) goto LAB_0000748a;
            *(undefined4 *)(iVar15 + 0xd4) = *(undefined4 *)(iVar2 + 0x120);
            iVar11 = FUN_000052e4(iVar7,iVar15 + 0xd4,iVar2 + 0x30,*(undefined4 *)(iVar2 + 0x120),
                                  iVar13);
            if (iVar11 != 0) goto LAB_0000748a;
            *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(iVar2 + 0x120);
            iVar11 = FUN_000052e4(iVar15,iVar15 + 0x44,iVar2 + 0x90,*(undefined4 *)(iVar2 + 0x120),1
                                 );
            if (iVar11 != 0) goto LAB_0000748a;
            iVar16 = FUN_00009c8c(iVar6,iVar7,iVar15,iVar17,iVar8);
            bVar21 = iVar16 == 0;
            do {
              iVar11 = iVar16;
              if (bVar21) goto LAB_0000748a;
              FUN_000016e4(iVar9,0x60);
              iVar11 = DAT_000074a4 + 6;
              if (0x60 < param_4) goto LAB_0000748a;
              FUN_000015e4(iVar9,param_3,param_4);
              uVar12 = param_4 >> 1;
              FUN_000036d0(iVar9,uVar12);
              iVar13 = iVar9 + (param_4 >> 1);
              FUN_000036d0(iVar13,uVar12);
              iVar16 = FUN_00002836(piVar1,iVar9,uVar12);
              bVar21 = iVar16 == 0;
              if (!bVar21) goto LAB_000071c6;
              iVar16 = FUN_00002836(piVar3,iVar13,uVar12);
              bVar21 = iVar16 == 0;
              if (!bVar21) goto LAB_000071c6;
              bVar21 = *piVar1 == 0;
            } while ((bVar21) || (bVar21 = *piVar3 == 0, bVar21));
            iVar16 = FUN_00002836(piVar4,iVar15,*(undefined4 *)(iVar2 + 0x120));
            bVar21 = iVar16 == 0;
            if (!bVar21) break;
            iVar13 = FUN_00002498(piVar1,piVar4);
            bVar21 = iVar13 == 2;
            iVar13 = iVar11;
            if (bVar21) {
              iVar14 = FUN_00002498(piVar3,piVar4);
              bVar21 = iVar14 == 2;
              if (bVar21) {
                FUN_000016e4(iVar10,0x30);
                uVar12 = *(uint *)(iVar2 + 0x120);
                if (0x30 < uVar12) goto LAB_0000748a;
                iVar11 = iVar10;
                if (param_2 < uVar12) {
                  iVar11 = iVar10 + (uVar12 - param_2);
                  uVar12 = param_2;
                }
                FUN_000015e4(iVar11,param_1,uVar12);
                FUN_000036d0(iVar10,*(undefined4 *)(iVar2 + 0x120));
                iVar11 = FUN_00002836(piVar18,iVar10,*(undefined4 *)(iVar2 + 0x120));
                if ((((iVar11 != 0) ||
                     (iVar11 = FUN_0000282a(piVar5,piVar20,piVar3,piVar4), iVar11 != 0)) ||
                    (iVar11 = FUN_000024e0(piVar5,0,piVar18,piVar4,piVar18), iVar11 != 0)) ||
                   (((iVar11 = FUN_000028e0(piVar3,piVar18,piVar20,0), iVar11 != 0 ||
                     (iVar11 = FUN_000024e0(piVar5,0,piVar3,piVar4,piVar18), iVar11 != 0)) ||
                    ((iVar11 = FUN_000024e0(piVar5,0,piVar1,piVar4,piVar1), iVar11 != 0 ||
                     ((iVar11 = FUN_000028e0(piVar3,piVar1,piVar20,0), iVar11 != 0 ||
                      (iVar11 = FUN_000024e0(piVar5,0,piVar3,piVar4,piVar20), iVar11 != 0))))))))
                goto LAB_0000748a;
                FUN_00002cde(piVar18,iVar15,*(undefined4 *)(iVar2 + 0x120));
                *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(iVar2 + 0x120);
                *(undefined4 *)(iVar15 + 0x1ac) = *(undefined4 *)(iVar2 + 0x120);
                iVar11 = FUN_000052e4(iVar17,iVar15 + 0x1ac,iVar2 + 0xc0,
                                      *(undefined4 *)(iVar2 + 0x120),1);
                if (iVar11 != 0) goto LAB_0000748a;
                *(undefined4 *)(iVar15 + 500) = *(undefined4 *)(iVar2 + 0x120);
                iVar11 = FUN_000052e4(iVar15 + 0x1b0,iVar15 + 500,iVar2 + 0xf0,
                                      *(undefined4 *)(iVar2 + 0x120),1);
                if ((iVar11 != 0) ||
                   (iVar11 = FUN_00009c8c(iVar6,iVar7,iVar15,iVar17,iVar8), iVar11 != 0))
                goto LAB_0000748a;
                FUN_00002cde(piVar20,iVar15,*(undefined4 *)(iVar2 + 0x120));
                *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(iVar2 + 0x120);
                iVar11 = FUN_00009c8c(iVar6,iVar7,iVar15,iVar19,iVar17);
                if (((iVar11 != 0) ||
                    (((iVar11 = FUN_00009bc0(iVar7,iVar8,iVar17,iVar19), iVar11 != 0 ||
                      (iVar11 = FUN_00002836(piVar18,iVar19,*(undefined4 *)(iVar15 + 0x11c)),
                      iVar11 != 0)) ||
                     (iVar11 = FUN_00002836(piVar20,iVar15 + 0x120,*(undefined4 *)(iVar15 + 0x164)),
                     iVar11 != 0)))) ||
                   (((*piVar18 != 0 && (*piVar20 != 0)) &&
                    ((iVar11 = FUN_000024e0(piVar5,0,piVar18,piVar4,piVar3), iVar11 != 0 ||
                     (iVar15 = FUN_00002498(piVar1,piVar3), iVar15 == 3)))))) goto LAB_0000748a;
                goto LAB_00007488;
              }
            }
          }
          goto LAB_000071c6;
        }
      }
    }
  }
LAB_0000748a:
  software_interrupt(0x5f);
  return iVar11;
LAB_00007488:
  iVar11 = DAT_000074ac;
  goto LAB_0000748a;
}



/* FUN_000074b0 @ 000074b0 */

void FUN_000074b0(void)

{
  FUN_000074c0();
  return;
}



/* FUN_000074c0 @ 000074c0 */

undefined4
FUN_000074c0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  
  if (((param_3 < 0x49) && (param_5 <= param_3)) && (param_7 <= param_3)) {
    FUN_00007ac0();
    FUN_00007ac0(param_1 + 0x48,param_4,param_5);
    FUN_00007ac0(param_1 + 0x90,param_6,param_7);
    FUN_000016e4(param_1 + 0xd8,0x168);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x30;
  }
  return uVar1;
}



/* FUN_0000750c @ 0000750c */

void FUN_0000750c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00007ac0();
  FUN_00007ad8(param_1 + 0x48,param_4,param_3);
  FUN_000016e4(param_1 + 0xd8,0x48);
  FUN_000016e4(param_1 + 0x1b0,0x48);
  return;
}



/* FUN_0000753c @ 0000753c */

void FUN_0000753c(void)

{
  FUN_00007546();
  return;
}



/* FUN_00007546 @ 00007546 */

undefined4 FUN_00007546(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  if ((param_3 < 0x49) && (param_5 <= param_3)) {
    FUN_00007ac0();
    FUN_00007ac0(param_1 + 0x48,param_4,param_5);
    FUN_000016e4(param_1 + 0x90,0x1b0);
    return 0;
  }
  return 0x30;
}



/* FUN_0000757a @ 0000757a */

undefined4
FUN_0000757a(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  if (0x48 < param_3) {
    return 0x30;
  }
  FUN_0000750c();
  FUN_00007ad8(param_1 + 0x120,param_5,param_3);
  return 0;
}



/* FUN_0000759e @ 0000759e */

undefined4 FUN_0000759e(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  if ((param_3 < 0x49) && (param_5 <= param_3)) {
    FUN_0000750c();
    FUN_00007ac0(param_1 + 0x120,param_4,param_5);
    FUN_000016e4(param_1 + 0x168,0x48);
    return 0;
  }
  return 0x30;
}



/* FUN_000075d2 @ 000075d2 */

void FUN_000075d2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00007ac0();
  FUN_000016e4(param_1 + 0xd8,0x48);
  FUN_00007ac0(param_1 + 0x120,param_4,param_5);
  FUN_00007ac0(param_1 + 0x168,param_6,param_7);
  FUN_000016e4(param_1 + 0x1b0,0x90);
  return;
}



/* FUN_00007614 @ 00007614 */

undefined8
FUN_00007614(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,undefined4 param_10,
            uint param_11)

{
  undefined4 uVar1;
  undefined4 local_28;
  
  if ((((param_3 < 0x49) && (param_5 <= param_3)) && (param_7 <= param_3)) &&
     ((param_9 <= param_3 && (param_11 <= param_3)))) {
    local_28 = param_5;
    FUN_000075d2(param_1);
    FUN_00007ac0(param_1 + 0x48,param_8,param_9);
    FUN_00007ac0(param_1 + 0x90,param_10,param_11);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x30;
    local_28 = param_2;
  }
  return CONCAT44(local_28,uVar1);
}



/* FUN_0000766c @ 0000766c */

int FUN_0000766c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_40 [36];
  
  piVar1 = DAT_000076f8;
  FUN_000016e4(*DAT_000076f8 + 0x1120,0x98);
  iVar3 = FUN_000074b0(*piVar1 + 0xee0,param_4,*(undefined4 *)(param_4 + 0x44),param_2,param_3);
  iVar2 = DAT_000076fc;
  iVar5 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_40,param_1,*DAT_00007700 + 0x1120,*DAT_00007700 + 0xee0,
                             *(undefined4 *)(param_4 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_40,1), iVar5 = iVar3, iVar3 == 0)) &&
     (iVar4 = *piVar1, iVar5 = iVar2, (*(byte *)(iVar4 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_5,iVar4 + 0x1120,*(undefined4 *)(param_4 + 0x44));
    *(undefined4 *)(param_5 + 0x44) = *(undefined4 *)(param_4 + 0x44);
    iVar5 = iVar3;
  }
  return iVar5;
}



/* FUN_00007704 @ 00007704 */

int FUN_00007704(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_38 [32];
  
  piVar1 = DAT_00007788;
  FUN_000016e4(*DAT_00007788 + 0x1120,0x98);
  iVar3 = FUN_0000753c(*piVar1 + 0xee0,param_2,*(undefined4 *)(param_2 + 0x44),param_1);
  iVar2 = DAT_0000778c;
  iVar5 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_38,2,*DAT_00007790 + 0x1120,*DAT_00007790 + 0xee0,
                             *(undefined4 *)(param_2 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_38,1), iVar5 = iVar3, iVar3 == 0)) &&
     (iVar4 = *piVar1, iVar5 = iVar2, (*(byte *)(iVar4 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_3,iVar4 + 0x1120,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    iVar5 = iVar3;
  }
  return iVar5;
}



/* FUN_00007794 @ 00007794 */

int FUN_00007794(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_160 [144];
  undefined auStack_d0 [144];
  undefined auStack_40 [36];
  
  piVar1 = DAT_00007854;
  FUN_000016e4(*DAT_00007854 + 0x1120,0x98);
  FUN_00005218(auStack_160,param_2,*(undefined4 *)(param_1 + 0x44));
  FUN_00005218(auStack_d0,param_3,*(undefined4 *)(param_1 + 0x44));
  iVar3 = FUN_0000757a(*piVar1 + 0xee0,param_1,*(undefined4 *)(param_1 + 0x44),auStack_160,
                       auStack_d0);
  iVar2 = DAT_00007858;
  iVar4 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_40,3,*DAT_0000785c + 0x1120,*DAT_0000785c + 0xee0,
                             *(undefined4 *)(param_1 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_40,1), iVar4 = iVar3, iVar3 == 0)) &&
     (iVar4 = iVar2, (*(byte *)(*piVar1 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_4,*piVar1 + 0x1120,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    FUN_000015e4(param_4 + 0x48,*piVar1 + 0x116c,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_4 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* FUN_00007860 @ 00007860 */

int FUN_00007860(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_d0 [144];
  undefined auStack_40 [36];
  
  piVar1 = DAT_0000791c;
  FUN_000016e4(*DAT_0000791c + 0x1120,0x98);
  FUN_00005218(auStack_d0,param_3,*(undefined4 *)(param_2 + 0x44));
  iVar3 = FUN_0000759e(*piVar1 + 0xee0,param_2,*(undefined4 *)(param_2 + 0x44),param_1,
                       *(undefined4 *)(param_1 + 0x44),auStack_d0);
  iVar2 = DAT_00007920;
  iVar4 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_40,5,*DAT_00007924 + 0x1120,*DAT_00007924 + 0xee0,
                             *(undefined4 *)(param_2 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_40,1), iVar4 = iVar3, iVar3 == 0)) &&
     (iVar4 = iVar2, (*(byte *)(*piVar1 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_4,*piVar1 + 0x1120,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    FUN_000015e4(param_4 + 0x48,*piVar1 + 0x116c,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_4 + 0x8c) = *(undefined4 *)(param_2 + 0x44);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* FUN_00007928 @ 00007928 */

int FUN_00007928(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_3c [32];
  
  piVar1 = DAT_000079f0;
  FUN_000016e4(*DAT_000079f0 + 0x1120,0x98);
  iVar3 = FUN_00007614(*piVar1 + 0xee0,param_2,*(undefined4 *)(param_2 + 0x44),param_1,
                       *(undefined4 *)(param_1 + 0x44),param_3,*(undefined4 *)(param_3 + 0x44),
                       param_4,*(undefined4 *)(param_4 + 0x44),param_4 + 0x48,
                       *(undefined4 *)(param_4 + 0x8c));
  iVar2 = DAT_000079f4;
  iVar4 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_3c,4,*DAT_000079f8 + 0x1120,*DAT_000079f8 + 0xee0,
                             *(undefined4 *)(param_2 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_3c,1), iVar4 = iVar3, iVar3 == 0)) &&
     (iVar4 = iVar2, (*(byte *)(*piVar1 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_5,*piVar1 + 0x1120,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_5 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    FUN_000015e4(param_5 + 0x48,*piVar1 + 0x116c,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_5 + 0x8c) = *(undefined4 *)(param_2 + 0x44);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* FUN_000079fc @ 000079fc */

undefined8 FUN_000079fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  software_interrupt(0x7c);
  iVar1 = DAT_00007a18;
  uVar2 = DAT_00007a1c;
  if (DAT_00007a18 == 0) {
    iVar1 = 4;
    software_interrupt(0x7c);
    uVar2 = DAT_00007a20;
  }
  return CONCAT44(uVar2,iVar1);
}



/* FUN_00007a24 @ 00007a24 */

undefined8 FUN_00007a24(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*DAT_00007a4c;
  if ((uVar1 != 0) && (uVar1 = *(uint *)(DAT_00007a50 + 0x41c), uVar1 != 2)) {
    software_interrupt(0xa6);
    param_2 = 0;
    uVar1 = 0xc6e0;
    software_interrupt(0x7c);
  }
  return CONCAT44(param_2,uVar1);
}



/* FUN_00007a58 @ 00007a58 */

void FUN_00007a58(void)

{
  return;
}



/* FUN_00007a5c @ 00007a5c */

void FUN_00007a5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  software_interrupt(0x7b);
  if (DAT_00007aa0 == 0) {
    uVar2 = param_4;
    if (-1 < (int)(param_4 << 0x1e)) {
      uVar2 = param_4 | 2;
      software_interrupt(0x7c);
    }
    iVar1 = FUN_0000b96c(0xffffffc2,0xffffffc3,4,param_4,uVar2);
    if (iVar1 == 0) {
      FUN_0000b96c(param_1,param_2);
    }
  }
  return;
}



/* FUN_00007aa4 @ 00007aa4 */

char FUN_00007aa4(void)

{
  char cVar1;
  
  software_interrupt(0x57);
  if (*DAT_00007abc == '\0') {
    cVar1 = DAT_00007abc[2];
    if (cVar1 != '\0') {
      return '\x01';
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



/* FUN_00007ac0 @ 00007ac0 */

void FUN_00007ac0(int param_1,undefined4 param_2,int param_3)

{
  FUN_000015e4();
  FUN_000016e4(param_1 + param_3,0x48 - param_3);
  return;
}



/* FUN_00007ad8 @ 00007ad8 */

void FUN_00007ad8(int param_1,int param_2,undefined4 param_3)

{
  FUN_00007ac0();
  FUN_00007ac0(param_1 + 0x48,param_2 + 0x48,param_3);
  return;
}



/* FUN_00007af6 @ 00007af6 */

int * FUN_00007af6(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (param_2 <= uVar1) {
      return (int *)0x0;
    }
    if (*param_1 == param_3) break;
    param_1 = param_1 + 3;
    uVar1 = uVar1 + 1;
  }
  return param_1;
}



/* FUN_00007b0e @ 00007b0e */

int * FUN_00007b0e(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  while( true ) {
    if (param_2 <= uVar1) {
      return (int *)0x0;
    }
    if (*param_1 == param_3) break;
    param_1 = param_1 + 3;
    uVar1 = uVar1 + 1;
  }
  piVar2 = (int *)FUN_0000a14c(param_1[1],param_1[2],param_4);
  if (piVar2 != (int *)0x0) {
    piVar2 = param_1;
  }
  return piVar2;
}



/* FUN_00007b40 @ 00007b40 */

uint FUN_00007b40(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_00007b90;
  uVar4 = 0;
  while ((((pcVar2 = (char *)(iVar1 + uVar4 * 8), (byte)pcVar2[1] != param_3 || (*pcVar2 != '\x01'))
          || (iVar3 = *(int *)(pcVar2 + 4), -1 < *(int *)(iVar3 + 0x6c) << 0xf)) ||
         ((*(byte *)(iVar3 + 1) != param_2 ||
          (iVar3 = FUN_00001550(iVar3 + 8,param_1,param_2), iVar3 != 0))))) {
    uVar4 = uVar4 + 1;
    if (0xff < uVar4) {
      return 0xffffffff;
    }
  }
  return uVar4;
}



/* FUN_00007b94 @ 00007b94 */

int FUN_00007b94(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x101d;
  iVar3 = 0;
  piVar1 = (int *)(DAT_00007c20 + 0x100);
  if ((((param_1 == 0) || (param_1 == 2)) || (param_1 == 4)) ||
     (((param_1 == 7 || (param_1 == 8)) || ((param_1 == 10 || (param_1 == 0xc)))))) {
    if (*(char *)(DAT_00007c20 + 0x5a) == '\0') {
      iVar4 = 1;
    }
  }
  else if ((((param_1 == 1) || (param_1 == 3)) ||
           ((param_1 == 5 || (((param_1 == 6 || (param_1 == 9)) || (param_1 == 0xb)))))) ||
          (param_1 == 0xd)) {
    if (*(char *)(DAT_00007c20 + 0x5a) == '\0') {
      iVar4 = 2;
    }
    else {
      iVar4 = 0x101e;
    }
  }
  else if (param_1 != 0x12) {
    return DAT_00007c24;
  }
  piVar2 = (int *)(*(int *)(DAT_00007c20 + 0x14) + (int)piVar1);
  while( true ) {
    if (piVar2 <= piVar1) {
      return DAT_00007c24 + 2;
    }
    if (*piVar1 == iVar4) break;
    piVar1 = piVar1 + 2;
  }
  if ((uint)piVar1[1] < 0x8000) {
    iVar3 = piVar1[1] + DAT_00007c20;
  }
  *param_2 = iVar3;
  return 0;
}



/* FUN_00007c28 @ 00007c28 */

int FUN_00007c28(uint *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_00007c9c;
  iVar5 = DAT_00007c9c + -2;
  iVar2 = iVar5;
  if (param_3 == 1) {
    for (uVar4 = 0; iVar1 = DAT_00007ca0, uVar4 < *param_1; uVar4 = uVar4 + 1) {
      if (((*(char *)((int)param_1 + uVar4 * 0x20 + 0x95) == '\x01') &&
          (*(char *)(param_1 + uVar4 * 8 + 0x25) == '\0')) &&
         (iVar2 = FUN_00001550(param_1 + uVar4 * 8 + 0x21,param_2,0x10), iVar2 == 0)) {
        *param_4 = param_1[uVar4 * 8 + 0x20];
        return 0;
      }
    }
    iVar2 = iVar3;
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        iVar3 = FUN_00001550(iVar1 + uVar4 * 0x10,param_2,0x10);
        if (iVar3 == 0) {
          return iVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
  }
  return iVar2;
}



/* FUN_00007ca4 @ 00007ca4 */

int FUN_00007ca4(int param_1,undefined4 param_2,uint param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar1 = DAT_00007d40;
  if (param_3 < 0x81) {
    pbVar7 = (byte *)(param_1 + 0xf00);
    iVar8 = *(int *)(param_1 + 0x704);
    pbVar6 = (byte *)(param_1 + 0x710);
    while( true ) {
      if (iVar8 == 0) {
        return iVar1;
      }
      if (pbVar7 <= pbVar6) {
        return iVar1;
      }
      uVar2 = (uint)*pbVar6;
      if (uVar2 == 0) {
        return iVar1;
      }
      uVar4 = (uint)pbVar6[2];
      if (uVar4 == 0) {
        return iVar1;
      }
      if (0x80 < uVar4) {
        return iVar1;
      }
      uVar5 = (uint)pbVar6[3];
      if (uVar5 == 0) {
        return iVar1;
      }
      if (0x80 < uVar5) {
        return iVar1;
      }
      if (uVar4 + uVar5 + 4 != uVar2) {
        return iVar1;
      }
      if (pbVar7 <= pbVar6 + param_3 + 4) {
        return iVar1;
      }
      if (pbVar7 <= pbVar6 + uVar2) {
        return iVar1;
      }
      iVar3 = FUN_0000ae74(param_2,pbVar6 + 4,param_3);
      if (iVar3 == 0) break;
      iVar8 = iVar8 + -1;
      pbVar6 = pbVar6 + *pbVar6;
    }
    if ((pbVar6 + pbVar6[2] + 4 < pbVar7) && (pbVar6 + pbVar6[2] + 4 + pbVar6[3] < pbVar7)) {
      FUN_000015e4(param_4 + 4);
      iVar1 = 0;
      *param_4 = pbVar6[1];
      param_4[1] = pbVar6[3];
    }
    else {
      iVar1 = DAT_00007d40 + -3;
    }
  }
  else {
    iVar1 = DAT_00007d40 + -2;
  }
  return iVar1;
}



/* FUN_00007d44 @ 00007d44 */

void FUN_00007d44(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00007d64;
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 0x21); uVar2 = uVar2 + 1) {
    *(undefined *)(iVar1 + (*(byte *)(param_1 + uVar2 + 0x23) - 0x46)) = 0;
  }
  return;
}



/* FUN_00007d68 @ 00007d68 */

undefined4 FUN_00007d68(undefined4 param_1)

{
  FUN_00005074();
  FUN_0000502c(param_1);
  FUN_0001389c(param_1);
  return 0;
}



/* FUN_00007d84 @ 00007d84 */

void FUN_00007d84(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x10;
  if ((uVar1 < 0x80) && (*(byte *)(DAT_00007da0 + uVar1 * 8 + 1) == param_2)) {
    *(undefined *)(DAT_00007da0 + uVar1 * 8) = 0;
  }
  return;
}



/* FUN_00007da4 @ 00007da4 */

int FUN_00007da4(code *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_98 [6];
  undefined local_80 [4];
  byte local_7c [36];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  code *pcStack_30;
  int iStack_2c;
  int local_28;
  
  iVar2 = *DAT_00008120;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  iVar3 = *(int *)(param_2 + 4);
  local_80[0] = 0;
  local_34 = iVar2;
  pcStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  FUN_00001728(local_7c,0x24);
  iVar4 = FUN_000081c6(local_98 + 3);
  iVar8 = DAT_00008124;
  bVar12 = iVar4 == 0;
  do {
    iVar4 = iVar8;
    if ((!bVar12) || (iVar4 = iVar8 + 1, local_98[3] != 0)) goto LAB_0000810e;
    if (param_1 != (code *)0x1) {
      if (param_1 == Reset) {
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca(*(uint *)(param_2 + 4) & 1,1,0x11f3,3,0x10,local_98);
        uVar7 = 0x8f;
        goto LAB_00007fc4;
      }
      if (param_1 == Reset) {
        iVar4 = FUN_00008148(local_80);
        if (iVar4 != 0) goto LAB_0000810e;
        uVar11 = 0;
        goto LAB_00007fdc;
      }
      if (param_1 != UndefinedInstruction) goto LAB_0000810a;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      uVar6 = FUN_00011eca(*(uint *)(param_2 + 4) & 0xf,4,0x1140,3,4,local_98);
      uVar7 = 0x8a;
      goto LAB_00007fc4;
    }
    iVar5 = FUN_000081ea(local_98 + 4,local_98 + 5);
    bVar12 = iVar5 == 0;
    param_1 = (code *)local_98;
  } while (!bVar12);
  if (((local_98[4] == 0) || ((uint)(iVar3 << 0x11) >> 0x1c == 0)) &&
     (((uint)(iVar3 << 0x15) >> 0x18 == 0 || (local_98[5] == 0)))) {
    uVar7 = 0x10;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    uVar6 = FUN_00011eca(*(uint *)(param_2 + 4) & 1,1,0x11f0,3,0x10,local_98);
    iVar4 = FUN_0000906c(0x8f,uVar6,local_98);
    bVar12 = iVar4 == 0;
LAB_00007e5a:
    if (bVar12) {
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      uVar6 = FUN_00011eca((uint)(*(int *)(param_2 + 4) << 0x1e) >> 0x1f,1,0x11f1,3,uVar7,local_98);
      iVar4 = FUN_0000906c(0x8f,uVar6,local_98);
      bVar12 = iVar4 == 0;
      while (bVar12) {
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca((uint)(*(int *)(param_2 + 4) << 0x1d) >> 0x1f,1,0x11f2,3,uVar7,local_98
                            );
        iVar4 = FUN_0000906c(0x8f,uVar6,local_98);
        bVar12 = iVar4 == 0;
        if (!bVar12) break;
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca((uint)(*(int *)(param_2 + 4) << 0x15) >> 0x18,8,0x11c8,3,uVar7,local_98
                            );
        iVar4 = FUN_0000906c(0x8e,uVar6,local_98);
        bVar12 = iVar4 == 0;
        if (!bVar12) break;
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca((uint)(*(int *)(param_2 + 4) << 0x11) >> 0x1c,4,0x11c4,3,uVar7,local_98
                            );
        iVar4 = FUN_0000906c(0x8e,uVar6,local_98);
        bVar12 = iVar4 == 0;
        if (!bVar12) break;
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca((uint)(*(int *)(param_2 + 4) << 0xd) >> 0x1c,4,0x11c0,3,uVar7,local_98)
        ;
        iVar4 = FUN_0000906c(0x8e,uVar6,local_98);
        bVar12 = iVar4 == 0;
        if (!bVar12) break;
        if (local_28 == 0) goto LAB_0000810a;
        uVar7 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 1;
        local_98[0] = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        uVar6 = FUN_00011eca(1,1,0xce0,3,1,local_98);
        iVar4 = FUN_0000906c(0x67,uVar6,local_98);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(undefined4 *)(param_2 + 4) = uVar7;
          goto LAB_0000810a;
        }
      }
      goto LAB_00007e5a;
    }
  }
  goto LAB_0000810e;
LAB_00007fdc:
  do {
    iVar3 = param_2 + uVar11;
    local_58 = DAT_00008128;
    uStack_54 = DAT_0000812c;
    bVar1 = FUN_000175cc(*(undefined *)(iVar3 + 8),&local_58,5);
    local_7c[uVar11] = bVar1;
    local_50 = DAT_00008130;
    uStack_4c = DAT_00008134;
    iVar8 = FUN_000175cc(*(undefined *)(iVar3 + 8),&local_50,5);
    local_7c[uVar11] = local_7c[uVar11] | (byte)(iVar8 << 1);
    local_40 = DAT_00008138;
    iVar8 = FUN_000175cc(*(undefined *)(iVar3 + 8),&local_40,4);
    local_7c[uVar11] = local_7c[uVar11] | (byte)(iVar8 << 2);
    local_3c = DAT_0000813c;
    iVar8 = FUN_000175cc(*(undefined *)(iVar3 + 8),&local_3c,4);
    local_7c[uVar11] = local_7c[uVar11] | (byte)(iVar8 << 3);
    local_48 = DAT_00008140;
    uStack_44 = DAT_00008144;
    uVar9 = FUN_000175cc(*(undefined *)(iVar3 + 8),&local_48,8);
    local_38 = DAT_00008140;
    uVar10 = FUN_000175cc(local_7c[uVar11],&local_38,4);
    local_7c[uVar11] = local_7c[uVar11] | (byte)((uVar10 ^ uVar9) << 4);
    if ((uVar11 & 3) == 0) {
      local_98[0] = *(uint *)(iVar3 + 8) & 0xffffff | (uint)*(byte *)(iVar3 + 0xb) << 0x18;
      iVar4 = FUN_00008ed4(((int)(uVar11 + ((uint)((int)uVar11 >> 0x1f) >> 0x1e)) >> 2) + 0x69,
                           local_98[0]);
      if (iVar4 != 0) goto LAB_0000810e;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x20);
  iVar8 = 0;
  do {
    uVar11 = (uint)local_7c[iVar8] | (uint)local_7c[iVar8 + 1] << 5 |
             (uint)local_7c[iVar8 + 2] << 10 | (uint)local_7c[iVar8 + 3] << 0xf |
             (uint)local_7c[iVar8 + 4] << 0x14 | (uint)local_7c[iVar8 + 5] << 0x19;
    local_98[0] = uVar11;
    iVar3 = FUN_00001778(iVar8,6);
    iVar4 = FUN_00008ed4(iVar3 + 0x11,uVar11);
    if (iVar4 != 0) goto LAB_0000810e;
    iVar8 = iVar8 + 6;
  } while (iVar8 < 0x24);
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  uVar6 = FUN_00011eca(*(uint *)(param_2 + 4) & 1,1,0xce0,3,1,local_98);
  uVar7 = 0x67;
LAB_00007fc4:
  iVar4 = FUN_0000906c(uVar7,uVar6,local_98);
  if (iVar4 == 0) {
LAB_0000810a:
    iVar4 = 0;
  }
LAB_0000810e:
  if (local_34 != iVar2) {
    FUN_00001a20();
  }
  return iVar4;
}



/* FUN_00008148 @ 00008148 */

int FUN_00008148(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_30 [8];
  
  iVar1 = FUN_0000f858(local_30,0xd20,0x100);
  iVar3 = DAT_0000819c;
  if (iVar1 == 0) {
    uVar4 = 0;
    iVar1 = DAT_0000819c + 1;
    do {
      if (local_30[uVar4] != 0) {
        return iVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    iVar2 = FUN_0000f858(local_30,0x220,0xc0);
    if (iVar2 == 0) {
      uVar4 = 0;
      do {
        if (local_30[uVar4] != 0) {
          return iVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* FUN_000081a0 @ 000081a0 */

void FUN_000081a0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  uint uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_0000f858(&local_10,0x11c0,0x40);
  if (iVar1 == 0) {
    *param_1 = (uStack_c | local_10 >> 0x10 | local_10) & 0xf;
  }
  return;
}



/* FUN_000081c6 @ 000081c6 */

void FUN_000081c6(int *param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = FUN_0000f858(&local_10,0xce0,0x20);
  if (iVar1 == 0) {
    local_10 = local_10 << 0x1d;
    if (local_10 != 0) {
      local_10 = 1;
    }
    *param_1 = local_10;
  }
  return;
}



/* FUN_000081ea @ 000081ea */

void FUN_000081ea(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_0000f858(&local_18,0x11c0,0x40);
  if (iVar1 == 0) {
    local_18 = local_14 & 0xff | local_18 >> 0x10 | local_18;
    *param_2 = (local_18 << 0x10) >> 0x18;
    *param_1 = (local_18 << 0x18) >> 0x1c;
  }
  return;
}



/* FUN_0000821c @ 0000821c */

int FUN_0000821c(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = FUN_0000f858(&local_10,0x12e0,0x20);
  if (iVar1 == 0) {
    uVar2 = 0;
    do {
      if ((local_10 >> ((uVar2 & 0x3f) << 2) & 0xf) == 0) {
        *param_1 = uVar2;
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  return iVar1;
}



/* FUN_0000824e @ 0000824e */

void FUN_0000824e(uint *param_1)

{
  int iVar1;
  uint local_10;
  
  local_10 = 0;
  iVar1 = FUN_0000f858(&local_10,0x1140,0x20);
  if (iVar1 == 0) {
    *param_1 = (local_10 | local_10 >> 4 | local_10 >> 8) & 0xf;
  }
  return;
}



/* FUN_0000827a @ 0000827a */

int FUN_0000827a(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint *local_20;
  uint *puStack_1c;
  
  local_20 = param_3;
  puStack_1c = param_4;
  iVar1 = FUN_0000f858(&local_20,0x11e0,0x40);
  if (iVar1 == 0) {
    uVar2 = (uint)puStack_1c | ((uint)local_20 | (uint)puStack_1c) >> 0x10;
    *param_1 = uVar2 & 1;
    *param_2 = (uVar2 << 0x1e) >> 0x1f;
    *param_3 = (uVar2 << 0x1d) >> 0x1f;
    *param_4 = (uVar2 << 0x1c) >> 0x1f;
  }
  return iVar1;
}



/* FUN_000082c0 @ 000082c0 */

int FUN_000082c0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_18 [4];
  
  uVar2 = *DAT_00008318;
  local_18[0] = param_1;
  local_18[1] = param_2;
  local_18[2] = param_3;
  local_18[3] = param_4;
  if ((*(int *)(DAT_0000831c + 0x668) == 0) && (param_1 != 0)) {
    if (uVar2 < param_1) {
      return DAT_00008314;
    }
    iVar1 = FUN_0000f598(local_18,0x10);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = 0;
    do {
      if (local_18[uVar2] != 0) {
        return DAT_00008320;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    iVar1 = FUN_00005138(local_18,param_1);
    uVar2 = param_1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = FUN_0000d9ec(uVar2);
  return iVar1;
}



/* FUN_00008324 @ 00008324 */

void FUN_00008324(void)

{
  int iVar1;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8 [2];
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8[0] = 0;
  iVar1 = FUN_000081ea(&local_28,&local_24);
  if ((((iVar1 == 0) && (iVar1 = FUN_000081c6(&local_20), iVar1 == 0)) &&
      (iVar1 = FUN_0000827a(&local_1c,&local_18,&local_14,&local_10), iVar1 == 0)) &&
     (iVar1 = FUN_000081a0(&local_c), iVar1 == 0)) {
    FUN_0000824e(local_8);
  }
  if (local_1c != 0) {
    local_1c = 0x1000000;
  }
  if (local_14 != 0) {
    local_14 = 0x2000000;
  }
  if (local_18 != 0) {
    local_18 = 0x4000000;
  }
  if (local_10 != 0) {
    local_10 = 0x8000000;
  }
  if (local_20 != 0) {
    local_20 = 0x10000000;
  }
  *(uint *)(*DAT_000083bc + 0x994) =
       local_20 |
       local_10 |
       local_18 |
       local_14 | local_1c | local_24 | local_28 << 8 | local_c << 0xc | local_8[0] << 0x10;
  return;
}



/* FUN_000083c0 @ 000083c0 */

undefined4 FUN_000083c0(void)

{
  return 0;
}



/* FUN_000083c8 @ 000083c8 */

/* WARNING: Removing unreachable block (ram,0x00008488) */
/* WARNING: Removing unreachable block (ram,0x000084ae) */
/* WARNING: Removing unreachable block (ram,0x000084c4) */
/* WARNING: Removing unreachable block (ram,0x000084e2) */
/* WARNING: Removing unreachable block (ram,0x000084e8) */
/* WARNING: Removing unreachable block (ram,0x0000850c) */
/* WARNING: Removing unreachable block (ram,0x00008528) */
/* WARNING: Removing unreachable block (ram,0x00008506) */
/* WARNING: Removing unreachable block (ram,0x000084a8) */

int FUN_000083c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  iVar4 = param_2[1];
  *param_3 = param_1[1];
  param_3[1] = uVar3;
  param_3[2] = *param_2;
  param_3[3] = 0x1000000;
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  *param_4 = *(undefined4 *)(iVar4 + 0xc);
  param_4[1] = uVar3;
  param_4[3] = *(undefined4 *)(iVar4 + 0x14);
  uVar3 = *(undefined4 *)(iVar4 + 0x1c);
  param_4[4] = *(undefined4 *)(iVar4 + 0x18);
  param_4[5] = uVar3;
  iVar1 = *(int *)(iVar4 + 0x10);
  uVar3 = *(undefined4 *)(iVar4 + 0xc);
  software_interrupt(0x69);
  iVar2 = DAT_00008594;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + 0x1c);
    software_interrupt(0x69);
    if (iVar1 == 0) {
      param_4[7] = *(undefined4 *)(iVar4 + 0x20);
      uVar3 = *(undefined4 *)(iVar4 + 0x28);
      param_4[8] = *(undefined4 *)(iVar4 + 0x24);
      param_4[9] = uVar3;
      iVar1 = *(int *)(iVar4 + 0x28);
      software_interrupt(0x69);
      if (iVar1 == 0) {
        param_4[0xb] = *(undefined4 *)(iVar4 + 0x2c);
        param_3[0xe] = DAT_00008598;
        param_3[0xf] = 0xfffd;
        software_interrupt(0x84);
        iVar1 = 0xfffd;
        iVar2 = DAT_00008594 + 3;
        uVar3 = DAT_00008598;
      }
      else {
        iVar2 = DAT_00008594 + 2;
        uVar3 = *(undefined4 *)(iVar4 + 0x24);
      }
    }
    else {
      iVar2 = DAT_00008594 + 1;
      uVar3 = *(undefined4 *)(iVar4 + 0x18);
    }
  }
  FUN_0000a5f0(iVar2,uVar3);
  FUN_000167bc(param_3,param_4);
  FUN_000167ac(0,0,*(undefined4 *)(iVar4 + 8));
  param_3[0x15] = *(undefined4 *)(iVar4 + 0xbc);
  uVar3 = *(undefined4 *)(iVar4 + 0xc4);
  param_3[0x16] = *(undefined4 *)(iVar4 + 0xc0);
  param_3[0x17] = uVar3;
  uVar3 = *(undefined4 *)(iVar4 + 0xcc);
  param_3[0x18] = *(undefined4 *)(iVar4 + 200);
  param_3[0x19] = uVar3;
  uVar3 = *(undefined4 *)(iVar4 + 0xd4);
  param_3[0x1a] = *(undefined4 *)(iVar4 + 0xd0);
  param_3[0x1b] = uVar3;
  uVar3 = *(undefined4 *)(iVar4 + 0xdc);
  param_3[0x1c] = *(undefined4 *)(iVar4 + 0xd8);
  param_3[0x1d] = uVar3;
  FUN_000015e4(param_4 + 0xd,iVar4 + 0x40,0x24);
  param_3[0x12] = param_5;
  param_4[0xc] = *(undefined4 *)(iVar4 + 0x3c);
  param_3[0x13] = *(undefined4 *)(*DAT_000085a0 + 0x48);
  FUN_000015e4(param_4 + 0x16,iVar4 + 100,0x40);
  param_3[0x14] = *(undefined4 *)(iVar4 + 0xb8);
  return iVar1;
}



/* FUN_000085a4 @ 000085a4 */

undefined4 FUN_000085a4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000043c8(param_2,8);
  iVar2 = FUN_000111bc(param_2,8,param_2 + 8);
  uVar1 = DAT_000085d0;
  uVar3 = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0x20000000;
    uVar3 = uVar1;
  }
  return uVar3;
}



/* FUN_000085d4 @ 000085d4 */

undefined4 FUN_000085d4(void)

{
  return DAT_000085d8;
}



/* FUN_00008620 @ 00008620 */

uint FUN_00008620(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  iVar2 = DAT_00008654 + param_2 * 0x1c;
  uVar4 = *(uint *)(iVar2 + 0xc);
  uVar3 = (uint)(*(int *)(param_1 + 8) - *(int *)(iVar2 + 4)) >> 5;
  if (uVar4 < uVar3) {
    uVar4 = uVar4 + *(int *)(iVar2 + 0x10);
  }
  *(uint *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x14) - (uVar4 - uVar3);
  return uVar1 & 0x3f;
}



/* FUN_00008658 @ 00008658 */

longlong FUN_00008658(uint param_1,uint param_2)

{
  return (ulonglong)param_1 * 1000 + (ulonglong)param_2;
}



/* FUN_0000866c @ 0000866c */

int FUN_0000866c(uint param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  software_interrupt(0x66);
  if (0x1f < param_2) {
    return DAT_000086fc;
  }
  uVar5 = param_3 + param_2 * 0x1000;
  if (uVar5 < param_2 << 0xc) {
    return DAT_000086fc;
  }
  if (param_1 == 1) {
    iVar1 = 0x22;
  }
  else if ((param_1 & 0xff) == *DAT_00008700) {
    if (param_1 != 0) {
      return DAT_000086fc;
    }
    iVar1 = 4;
  }
  else {
    if ((param_1 & 0xff) != *DAT_00008704) {
      return DAT_000086fc;
    }
    if (param_1 != 5) {
      return DAT_000086fc;
    }
    iVar1 = 0x54;
  }
  uVar3 = 0;
  do {
    iVar2 = DAT_000086fc;
    if (*(uint *)(DAT_00008708 + 0x3c) <= uVar3) {
      iVar1 = DAT_000086fc;
      if (DAT_000086fc == 0) {
LAB_000086e2:
        if (CARRY4(uVar5,uVar4) == false) {
          *param_4 = uVar4 + param_2 * 0x1000 + param_3;
          iVar2 = iVar1;
        }
      }
      return iVar2;
    }
    if (*(int *)(DAT_00008708 + uVar3 * 0x10 + 0x40) == iVar1) {
      iVar1 = 0;
      uVar4 = *(uint *)(DAT_00008708 + uVar3 * 0x10 + 0x44);
      goto LAB_000086e2;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



/* FUN_0000870c @ 0000870c */

undefined4 FUN_0000870c(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  
  iVar3 = *DAT_000087e8;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = DAT_000087ec;
  uStack_34 = DAT_000087f0;
  local_30 = DAT_000087f4;
  uStack_2c = DAT_000087f8;
  local_28 = DAT_000087fc;
  uStack_24 = DAT_00008800;
  local_20 = DAT_00008804;
  uStack_1c = DAT_00008808;
  uVar2 = DAT_0000880c;
  local_18 = iVar3;
  if (5 < *param_2) {
    software_interrupt(0x66);
    uVar4 = *param_2 & 0xff;
    FUN_00008a48(uVar4,&local_38,&local_48,&local_40);
    FUN_00008a48(uVar4,&local_28,&local_44,&local_3c);
    *param_1 = 1;
    param_1[1] = *(undefined4 *)(DAT_00008810 + 0x424);
    uVar2 = *(undefined4 *)(DAT_00008810 + 0x428);
    param_1[8] = 2;
    iVar1 = DAT_00008810;
    param_1[2] = uVar2;
    param_1[9] = *(undefined4 *)(iVar1 + 0x42c);
    param_1[10] = *(undefined4 *)(DAT_00008810 + 0x430);
    param_1[0x10] = 3;
    param_1[0x11] = *(undefined4 *)(DAT_00008810 + 0x434);
    param_1[0x18] = 4;
    uVar2 = DAT_00008814;
    iVar1 = DAT_00008810;
    param_1[0x12] = DAT_00008814;
    param_1[0x19] = *(undefined4 *)(iVar1 + 0x438);
    param_1[0x1a] = uVar2;
    param_1[0x20] = 5;
    param_1[0x21] = local_48;
    param_1[0x22] = local_40;
    param_1[0x28] = 6;
    param_1[0x29] = local_44;
    param_1[0x2a] = local_3c;
    *param_2 = 6;
    uVar2 = 0;
  }
  if (local_18 != iVar3) {
    FUN_00001a20();
  }
  return uVar2;
}



/* FUN_00008818 @ 00008818 */

undefined4 FUN_00008818(void)

{
  return *DAT_00008820;
}



/* FUN_00008824 @ 00008824 */

undefined4 FUN_00008824(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x2c;
  }
  if (param_1 == 0) {
    param_1 = 3;
  }
  else if ((param_1 != 1) && (param_1 != 2)) {
    *param_2 = 0xffff;
    return 0xc;
  }
  *param_2 = param_1;
  return 0;
}



/* FUN_00008848 @ 00008848 */

undefined4 FUN_00008848(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < 0x44c) {
    return DAT_00008898;
  }
  uVar1 = 0;
  do {
    if (*(int *)(DAT_0000889c + uVar1 * 0x44c + 4) == 2) {
      iVar2 = DAT_0000889c + uVar1 * 0x44c;
      FUN_00001670(param_1,iVar2,*(int *)(iVar2 + 0x28) + 0x4c);
      *(undefined4 *)(iVar2 + 4) = 3;
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return DAT_00008894;
}



/* FUN_000088a0 @ 000088a0 */

undefined4 FUN_000088a0(undefined4 param_1)

{
  *DAT_000088a8 = param_1;
  return 0;
}



/* FUN_000088ac @ 000088ac */

uint FUN_000088ac(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x10;
  if (0xff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* FUN_000088b8 @ 000088b8 */

int FUN_000088b8(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_000088ac();
  uVar1 = DAT_00008900;
  if (iVar2 == -1) {
    FUN_0000b5dc(DAT_00008900);
  }
  pcVar3 = (char *)(DAT_00008904 + iVar2 * 0x10);
  if (((*pcVar3 == '\0') || ((byte)pcVar3[1] != param_3)) || (0xff < *(uint *)(pcVar3 + 0xc))) {
    FUN_0000b5dc(uVar1);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pcVar3;
  }
  return DAT_00008908 + *(int *)(pcVar3 + 0xc) * 8;
}



/* FUN_0000890c @ 0000890c */

int FUN_0000890c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00008948;
  if (0x1f < param_1 - 0x10U) {
    FUN_0000b5dc(DAT_00008948);
  }
  iVar2 = DAT_0000894c + (param_1 - 0x10U) * 0x54;
  if ((*(char *)(iVar2 + 0x20) == '\0') || (*(byte *)(iVar2 + 0x22) != param_2)) {
    FUN_0000b5dc(uVar1);
  }
  return iVar2;
}



/* FUN_00008950 @ 00008950 */

undefined8 FUN_00008950(uint param_1)

{
  return CONCAT44(0xfffe,param_1 & DAT_0000895c);
}



/* FUN_00008960 @ 00008960 */

undefined4 FUN_00008960(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_000089c4;
  uVar3 = 0;
  while ((((iVar4 = iVar1 + uVar3 * 0x58, *(int *)(iVar4 + 0x54) == -1 ||
           (iVar2 = FUN_00001550(iVar4 + 0x40,param_3,0x10), iVar2 != 0)) ||
          (*(byte *)(iVar4 + 0x50) != param_2)) ||
         (iVar4 = FUN_00001550(iVar4,param_1,param_2), iVar4 != 0))) {
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar1 + uVar3 * 0x58 + 0x54);
}



/* FUN_000089c8 @ 000089c8 */

int FUN_000089c8(undefined *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined auStack_1060 [4096];
  int local_60;
  
  puVar1 = auStack_1060;
  iVar3 = *DAT_00008a3c;
  local_60 = iVar3;
  if (param_3 == -1) {
    iVar2 = DAT_00008a40 + 3;
    if (param_2 == 0) {
      software_interrupt(0x81);
      puVar1 = param_1;
      if (param_1 == (undefined *)0x0) goto LAB_000089ee;
    }
    else {
      software_interrupt(0xa4);
      if (param_2 != 0) goto LAB_000089ee;
    }
    puVar1 = puVar1 + 0x100;
  }
  else {
    puVar1 = DAT_00008a44;
    iVar2 = DAT_00008a40;
    if (param_3 != -3) goto LAB_000089ee;
  }
  iVar2 = FUN_00007ca4(puVar1,param_4,param_5,param_6);
LAB_000089ee:
  if (local_60 != iVar3) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_00008a48 @ 00008a48 */

void FUN_00008a48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_000015a8(s_amd_fw_SecPatchLevel_00008a94);
  iVar2 = FUN_00015f34(param_1,0xffffffff,param_2,s_amd_fw_SecPatchLevel_00008a94,uVar1,param_3);
  if ((iVar2 == 0) || (iVar2 == DAT_00008aac)) {
    uVar1 = FUN_000015a8(s_amd_ta_version_00008ab0);
    FUN_00015f34(param_1,0xffffffff,param_2,s_amd_ta_version_00008ab0,uVar1,param_4);
  }
  return;
}



/* FUN_00008ac0 @ 00008ac0 */

undefined4 FUN_00008ac0(void)

{
  return *(undefined4 *)(DAT_00008ac8 + 8);
}



/* FUN_00008ad8 @ 00008ad8 */

undefined4 FUN_00008ad8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x21:
  case 0x22:
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x41:
  case 0x42:
    uVar1 = 10;
    break;
  case 0xb:
  case 0xc:
    return 0xf;
  case 0xd:
  case 0x13:
  case 0x3a:
    return 6;
  case 0x10:
    return 0x12;
  case 0x3c:
    return 0x2d;
  case 0x40:
    return 0x35;
  }
  return uVar1;
}



/* FUN_00008b44 @ 00008b44 */

int FUN_00008b44(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  int local_554 [256];
  int local_154;
  undefined4 local_150;
  byte local_14c [256];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  int local_3c;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  local_150 = *DAT_00008c80;
  iVar2 = DAT_00008c84;
  local_3c = local_150;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_4 < 0x101) {
    if (param_1 == 0) {
      iVar2 = FUN_000043c8(local_14c,param_4);
      if (iVar2 != 0) goto LAB_00008c64;
    }
    else {
      FUN_000015e4(local_14c,param_1,param_4);
    }
    local_14c[0] = local_14c[0] | 3;
    local_14c[param_4 - 1] = local_14c[param_4 - 1] | 0xc0;
    iVar2 = FUN_00002836(local_2c,local_14c,param_4);
    iVar1 = DAT_00008c88;
    if (iVar2 == 0) {
      uVar4 = 0;
      uVar3 = 0;
      local_154 = 0;
      do {
        iVar2 = FUN_0000308c(local_14c,param_4,*(undefined2 *)(iVar1 + uVar3 * 2),local_554 + uVar3)
        ;
        if (iVar2 != 0) goto LAB_00008c64;
        if (local_554[uVar3] == 0) {
          local_154 = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x100);
      while( true ) {
        while (local_154 != 0) {
          uVar4 = uVar4 + 4;
          local_154 = 0;
          uVar3 = 0;
          do {
            FUN_000019e8(local_554[uVar3] + 4,*(undefined2 *)(iVar1 + uVar3 * 2));
            local_554[uVar3] = extraout_r1;
            if (extraout_r1 == 0) {
              local_154 = 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x100);
        }
        if (0xfffffff < uVar4) break;
        local_4c = 1;
        uStack_48 = 0;
        local_44 = 0;
        uStack_40 = uVar4;
        iVar2 = FUN_00002370(local_2c,&local_4c);
        if (iVar2 != 0) goto LAB_00008c64;
        uVar4 = 0;
        iVar2 = FUN_0000af10(local_30,local_2c,param_4,0x10,&local_154);
        if ((iVar2 != 0) || (local_154 == 0)) goto LAB_00008c64;
      }
      iVar2 = DAT_00008c84 + -6;
    }
  }
LAB_00008c64:
  if (local_3c != local_150) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_00008c8c @ 00008c8c */

undefined4 FUN_00008c8c(void)

{
  return 0x8000;
}



/* FUN_00008c94 @ 00008c94 */

undefined4 FUN_00008c94(int param_1,undefined4 *param_2,undefined *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00008cb8;
  if ((param_1 - 0x10U < 0x80) &&
     (iVar2 = DAT_00008cbc + (param_1 - 0x10U) * 8, *(byte *)(iVar2 + 1) == param_4)) {
    *param_2 = *(undefined4 *)(iVar2 + 4);
    *param_3 = *(undefined *)(iVar2 + 2);
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_00008cc0 @ 00008cc0 */

undefined4 FUN_00008cc0(void)

{
  return *DAT_00008cc8;
}



/* FUN_00008ccc @ 00008ccc */

int FUN_00008ccc(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  FUN_00015ff0(&local_10);
  iVar1 = FUN_00008658(local_10,local_c);
  return iVar1 - *(int *)(DAT_00008cec + 0x10);
}



/* FUN_00008cf0 @ 00008cf0 */

undefined8 FUN_00008cf0(int param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT44(0xfffe,(uint)(param_1 << 0x18) >> 4 | (param_2 & 0x1f) << 0xf |
                         (param_3 & 7) << 0xc | param_4 & 0xfff);
}



/* FUN_00008d12 @ 00008d12 */

void FUN_00008d12(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00008df4();
  *param_1 = (int)((ulonglong)uVar1 >> 0x20);
  param_1[1] = (int)uVar1;
  return;
}



/* FUN_00008d20 @ 00008d20 */

undefined4 FUN_00008d20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_00008da8;
  uVar3 = 0;
  while (iVar1 = FUN_00001550(param_1,iVar2 + uVar3 * 0x18,0x10), iVar1 != 0) {
    uVar3 = uVar3 + 1;
    if (9 < uVar3) {
      return 0;
    }
  }
  iVar2 = iVar2 + uVar3 * 0x18;
  *param_2 = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(iVar2 + 0x10) == 1) {
    if ((*(int *)(DAT_00008dac + 0x238) != 3) &&
       (software_interrupt(0x87), *(int *)(DAT_00008dac + 0x238) != 0)) {
      return DAT_00008db0;
    }
    uVar3 = 0;
    iVar2 = DAT_00008da8 + -0x18;
    do {
      if ((*(int *)(DAT_00008dac + 0x370) == *(int *)(iVar2 + uVar3 * 0xc + 4)) &&
         (*(int *)(DAT_00008dac + 0x374) == *(int *)(iVar2 + uVar3 * 0xc))) {
        *param_2 = *(undefined4 *)(iVar2 + uVar3 * 0xc + 8);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
  }
  return 0;
}



/* FUN_00008db4 @ 00008db4 */

int FUN_00008db4(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (0x1f < param_3) {
    return DAT_00008de8;
  }
  iVar1 = DAT_00008dec + param_3 * 0x42;
  if (*(char *)(iVar1 + 0x40) != '\0') {
    if (param_2 < 0x10) {
      return DAT_00008df0;
    }
    FUN_000015e4(param_1,iVar1,0x10);
    return 0;
  }
  return DAT_00008de8 + 1;
}



/* FUN_00008df4 @ 00008df4 */

undefined8 FUN_00008df4(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (ulonglong)*(uint *)(*DAT_00008e24 + 0x1f0) * 0xa4;
  uVar2 = *(int *)(*DAT_00008e24 + 500) * 0xa4 + (int)((ulonglong)lVar1 >> 0x20);
  return CONCAT44(uVar2 >> 0xc,(uint)lVar1 >> 0xc | uVar2 * 0x100000);
}



/* FUN_00008e28 @ 00008e28 */

undefined4 FUN_00008e28(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x2c;
  }
  iVar2 = FUN_00009e4a();
  iVar1 = DAT_00008e5c;
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(DAT_00008e5c + 4) + 0xc);
    *param_1 = iVar2;
    if ((-1 < *(int *)((int)&DAT_00006008 + *(int *)(iVar1 + 4)) << 2) && (iVar2 != 0)) {
      return 0;
    }
    return 0x35;
  }
  return 0x31;
}



/* FUN_00008e60 @ 00008e60 */

undefined4 FUN_00008e60(void)

{
  return *(undefined4 *)(*(int *)(DAT_00008e68 + 4) + 0xc);
}



/* FUN_00008e6c @ 00008e6c */

undefined4 FUN_00008e6c(void)

{
  return *(undefined4 *)(DAT_00008e74 + 8);
}



/* FUN_00008e78 @ 00008e78 */

undefined4 FUN_00008e78(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00008e9c;
  if (((param_1 == 0) || (uVar1 = DAT_00008ea0, param_1 == 1)) ||
     (uVar1 = DAT_00008ea4, uVar2 = DAT_00008e98, param_1 == 0x12)) {
    *param_2 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_00008ea8 @ 00008ea8 */

undefined4 FUN_00008ea8(void)

{
  return 0x100000;
}



/* FUN_00008eae @ 00008eae */

uint FUN_00008eae(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 2;
  }
  if ((int)(param_1 << 0x1c) < 0) {
    uVar1 = uVar1 | 0x2000000;
  }
  if ((int)(param_1 << 0x1b) < 0) {
    uVar1 = uVar1 | 8;
  }
  if ((int)(param_1 << 0x1a) < 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}



/* FUN_00008ed4 @ 00008ed4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00008ed4(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_38;
  uint local_34;
  
  puVar8 = (uint *)0x0;
  local_38 = 0xffffffff;
  local_34 = 0;
  puVar5 = (uint *)0x0;
  puVar4 = (undefined4 *)0x0;
  puVar7 = (uint *)0x0;
  iVar3 = DAT_00009068;
  if (param_1 < 0x400) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      puVar2 = (uint *)(param_1 * 4 + 0x5d000);
      software_interrupt(0x7d);
      if (puVar2 == (uint *)0x0) {
        puVar6 = (undefined *)0x0;
        iVar3 = DAT_00009068 + -4;
      }
      else {
        software_interrupt(0x7d);
        puVar6 = &DAT_0005e000;
        puVar5 = (uint *)0x5e004;
        puVar4 = (undefined4 *)0x5e008;
        puVar7 = (uint *)0x5e010;
        puVar8 = (uint *)0x5e018;
        iVar3 = 0;
        if (((*puVar2 & param_2) == 0) || (param_2 = param_2 & ~*puVar2, param_2 != 0)) {
          local_38 = uRam0005e010 & 3;
          uRam0005e010 = uRam0005e010 & 0xfffffffc;
          FUN_000175f6(1000,0x18);
          if ((_DAT_0005e000 & 1) == 0) {
            iVar3 = DAT_00009068 + -3;
          }
          else {
            *puVar2 = param_2;
            uVar1 = uRam0005e018;
            DataSynchronizationBarrier(0xf);
            local_34 = uRam0005e018;
            uRam0005e018 = uRam0005e018 | 0x7c0000;
            FUN_000175f6(1);
            uRam0005e008 = uRam0005e008 & 0xfffff003 | 1 | (param_1 & 0x3ff) << 2;
            uRam0005e004 = uRam0005e004 | 2;
            DataSynchronizationBarrier(0xf);
            FUN_000175f6(1000);
            if ((int)(_DAT_0005e000 << 0x1d) < 0) {
              if ((int)(_DAT_0005e000 << 0x17) < 0) {
                iVar3 = DAT_00009068 + 1;
              }
              else {
                uRam0005e004 = uRam0005e004 & 0xfffffffd;
                uRam0005e008 = 0;
                uRam0005e018 = uVar1;
                FUN_000175f6(1000);
                uRam0005e008 = uRam0005e008 & 0xfffff003 | 2 | (param_1 & 0x3ff) << 2;
                uRam0005e004 = uRam0005e004 | 0x800;
                DataSynchronizationBarrier(0xf);
                FUN_000175f6(1000);
                if ((_DAT_0005e000 & 1) == 0) {
                  iVar3 = DAT_00009068 + -1;
                }
              }
            }
            else {
              iVar3 = DAT_00009068 + -2;
            }
          }
        }
      }
      if (local_38 != 0xffffffff) {
        *puVar8 = local_34;
        *puVar5 = *puVar5 & 0xffff7ffd;
        *puVar4 = 0;
        *puVar7 = *puVar7 | local_38;
        DataSynchronizationBarrier(0xf);
        FUN_000175f6(1000);
      }
      if (puVar2 != (uint *)0x0) {
        software_interrupt(0x7e);
      }
      if (puVar6 != (undefined *)0x0) {
        software_interrupt(0x7e);
      }
    }
  }
  return iVar3;
}



/* FUN_0000906c @ 0000906c */

void FUN_0000906c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < param_2 &&
         (iVar1 = FUN_00008ed4(param_1 + uVar2,*(undefined4 *)(param_3 + uVar2 * 4)), iVar1 == 0)))
  {
    uVar2 = uVar2 + 1;
  }
  return;
}



/* FUN_00009094 @ 00009094 */

int FUN_00009094(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined auStack_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined auStack_100 [32];
  int local_e0;
  undefined auStack_a0 [56];
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_28 [2];
  
  local_5c = 0;
  uStack_60 = 5;
  local_64 = param_2;
  iVar1 = FUN_00014538(auStack_a0,param_1);
  if (iVar1 == 0) {
    local_e0 = local_68;
    uStack_108 = param_5;
    uStack_104 = param_6;
    local_110 = param_3;
    uStack_10c = param_4;
    iVar1 = FUN_00014bac(auStack_118,&local_110,param_1,auStack_100);
    if (local_68 != 0) {
      local_28[0] = local_68;
      FUN_00014c2c(local_28,param_1);
    }
  }
  return iVar1;
}



/* FUN_000090e4 @ 000090e4 */

undefined4 FUN_000090e4(int param_1)

{
  uint uVar1;
  uint extraout_r1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [9];
  int local_1c;
  
  iVar3 = *DAT_00009184;
  uVar2 = *(undefined4 *)(DAT_00009188 + 8);
  uVar1 = *(uint *)(DAT_00009188 + 0x10);
  local_40[0] = 0;
  local_1c = iVar3;
  lVar4 = (ulonglong)uVar1 << 0x20;
  if (*DAT_00009188 == '\x01') {
    local_5c = 0xffff;
    local_64 = 0;
    uStack_60 = 1;
    software_interrupt(0x89);
    local_70 = *(undefined4 *)(DAT_00009188 + 0x14);
    uStack_6c = uVar1;
    local_68 = uVar2;
    lVar4 = CONCAT44(local_40,&local_70);
    if (&stack0x00000000 == (undefined *)0x70) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_4c = 0x34;
      local_48 = 0x20;
      local_44 = DAT_0000918c;
      local_50 = uVar2;
      lVar4 = FUN_0000eb08(0x18,local_40,0xfffffff7);
      if ((int)lVar4 == 0) {
        if (param_1 == 0) {
          FUN_00001670(DAT_00009190,0x34,0x20);
          lVar4 = (ulonglong)extraout_r1 << 0x20;
        }
        else if (param_1 == 1) {
          uVar5 = FUN_00001550(0x34,DAT_00009190,0x20);
          uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
          lVar4 = (ulonglong)uVar1 << 0x20;
          if ((int)uVar5 != 0) {
            lVar4 = CONCAT44(uVar1,DAT_00009194);
          }
        }
      }
    }
    if (local_40[0] != 0) {
      software_interrupt(0x8a);
      lVar4 = CONCAT44(uVar2,(int)lVar4);
    }
  }
  if (local_1c != iVar3) {
    FUN_00001a20(local_1c,(int)((ulonglong)lVar4 >> 0x20));
  }
  return (int)lVar4;
}



/* FUN_00009198 @ 00009198 */

int FUN_00009198(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined auStack_238 [8];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_200;
  int iStack_1fc;
  undefined auStack_1c0 [8];
  undefined4 *local_1b8;
  undefined4 local_1b4;
  int local_188;
  undefined auStack_148 [8];
  int local_140;
  int local_13c;
  int local_110;
  undefined auStack_d0 [56];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int iStack_8c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 local_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_4c = DAT_00009258;
  iStack_48 = param_4 << 3;
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  iVar1 = FUN_000142e8(&local_4c,param_1);
  if (iVar1 == 0) {
    local_58 = 0xc0000000;
    local_1b8 = &local_58;
    local_188 = local_44;
    local_1b4 = 0xc;
    uStack_54 = param_3;
    local_50 = param_4;
    iVar1 = FUN_000161e4(auStack_1c0,&local_1b8,local_34,1);
    if (iVar1 == 0) {
      local_90 = 4;
      local_94 = param_2;
      iStack_8c = param_4 << 3;
      iVar1 = FUN_00014538(auStack_d0,local_34);
      if (iVar1 == 0) {
        local_40 = local_98;
        iStack_3c = local_44;
        iVar1 = FUN_00014eb4(&local_40,local_34);
        if (iVar1 == 0) {
          local_110 = local_98;
          local_140 = iVar1;
          local_13c = iVar1;
          FUN_00014d98(auStack_148,&local_140,local_34);
          iStack_1fc = local_98;
          local_228 = param_7;
          local_230 = param_5;
          uStack_22c = param_6;
          local_224 = param_8;
          local_200 = iVar1;
          iVar1 = FUN_00014c58(auStack_238,&local_230,local_34);
        }
        if (local_98 != 0) {
          local_38 = local_98;
          FUN_00014c2c(&local_38,local_34);
        }
      }
    }
    if (local_44 != 0) {
      FUN_000157cc(local_44,local_34);
    }
  }
  return iVar1;
}



/* FUN_0000925c @ 0000925c */

void FUN_0000925c(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_28 = 2;
  local_24 = 1;
  local_20 = 0x100;
  local_18 = 0x20;
  local_10 = 0;
  local_c = 0;
  local_8 = DAT_00009288;
  uStack_1c = param_1;
  uStack_14 = param_2;
  FUN_0000c98c(&local_28);
  return;
}



/* FUN_0000928c @ 0000928c */

int FUN_0000928c(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined local_148 [2];
  undefined2 local_146;
  undefined *local_144;
  undefined *local_140;
  undefined4 local_13c;
  undefined *puStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined *local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  undefined auStack_10c [44];
  undefined auStack_e0 [19];
  undefined auStack_cd [89];
  undefined auStack_74 [32];
  undefined auStack_54 [32];
  undefined local_34;
  undefined local_33;
  undefined local_2c;
  int local_28;
  
  local_114 = *DAT_000094dc;
  pcVar3 = (code *)auStack_cd;
  software_interrupt(0x87);
  if (pcVar3 != Reset) {
    pcVar3 = (code *)0x1;
  }
  *param_1 = 0;
  iVar1 = DAT_000094e0;
  if (pcVar3 == Reset) {
    iVar9 = 8;
  }
  else {
    iVar9 = 0;
  }
  software_interrupt(0x7d);
  local_28 = local_114;
  if (DAT_000094e0 == 0) {
    iVar4 = 1;
    goto LAB_000094aa;
  }
  iVar4 = FUN_0000a482(&local_110,DAT_000094e0);
  iVar6 = DAT_000094e4;
  iVar8 = 0;
  if (iVar4 == 0) {
    software_interrupt(0x7d);
    iVar8 = iVar6;
    if (DAT_000094e4 == 0) {
      iVar4 = 1;
    }
    else {
      FUN_0000f89c(DAT_000094e4 + 0x71,3,1);
      FUN_0000f89c(iVar6 + 0x72,3,1);
      iVar4 = FUN_0000a39c(iVar1);
      if (iVar4 == 0) {
        iVar4 = FUN_0000a4d8(iVar1,0x80,2,0x40,0x23);
        if (iVar4 == 0) {
          FUN_000015e4(auStack_10c,DAT_000094e8,0x20);
          iVar4 = FUN_00001550(auStack_10c,DAT_000094ec,0x20);
          if (iVar4 == 0) {
            uVar5 = 1;
            iVar4 = 0x10c;
          }
          else {
            iVar4 = FUN_00001550(auStack_10c,DAT_000094ec + 0x20,0x20);
            if (iVar4 == 0) {
              iVar4 = 0x88;
              uVar5 = 2;
            }
            else {
              iVar4 = FUN_00001550(auStack_10c,DAT_000094ec + 0x40,0x20);
              if (iVar4 != 0) {
                iVar4 = 5;
                goto LAB_0000947c;
              }
              iVar4 = 4;
              uVar5 = 3;
            }
          }
          *param_1 = uVar5;
          iVar6 = FUN_0000a4d8(iVar1,0,0,0,0x23);
          puVar2 = DAT_000094e8;
          if (iVar6 == 0) {
            local_34 = *DAT_000094e8;
            local_33 = DAT_000094e8[1];
            iVar6 = FUN_0000a4d8(iVar1,0,0,3,0x23);
            if (iVar6 == 0) {
              local_2c = *puVar2;
              iVar6 = FUN_000043c8(auStack_74,0x20);
              if (iVar6 == 0) {
                iVar6 = FUN_0000a4fc(iVar1,8,0,iVar9,auStack_74,0x20,0x23,0x23);
                if (iVar6 == 0) {
                  if (pcVar3 == Reset) {
                    local_140 = auStack_10c;
                  }
                  else {
                    iVar6 = DAT_000094f8;
                    if (*DAT_000094f0 != '\x14') {
                      iVar6 = DAT_000094f4;
                    }
                    iVar7 = FUN_00016a60(iVar6);
                    if (iVar7 != 0) {
                      iVar4 = 0xb;
                      goto LAB_0000947c;
                    }
                    local_140 = (undefined *)(iVar6 + iVar4 + iVar9 * 0x20 + 0x20);
                    *(uint *)(*DAT_000094fc + 0x54) = *(uint *)(*DAT_000094fc + 0x54) | 0x200000;
                  }
                  local_144 = auStack_74;
                  puStack_138 = &local_34;
                  local_148[0] = 0;
                  local_146 = (undefined2)iVar9;
                  local_13c = 0;
                  local_134 = 0;
                  local_130 = 0;
                  iVar4 = FUN_00017658(local_148,auStack_e0);
                  if (iVar4 == 0) {
                    software_interrupt(0x68);
                    software_interrupt(0x79);
                    uStack_128 = 0;
                    local_124 = 0x58;
                    local_120 = auStack_54;
                    local_11c = 0x20;
                    local_118 = DAT_00009500;
                    local_12c = auStack_e0;
                    iVar9 = FUN_0000eb08(&local_12c,1,auStack_e0,0x58);
                    if (iVar9 == 0) {
                      iVar9 = FUN_00001550(DAT_000094e8,auStack_54,0x20);
                      if (iVar9 != 0) {
                        iVar4 = 10;
                      }
                    }
                    else {
                      iVar4 = 0xc;
                    }
                  }
                }
                else {
                  iVar4 = 6;
                }
              }
              else {
                iVar4 = 7;
              }
              goto LAB_0000947c;
            }
          }
        }
        iVar4 = 3;
      }
      else {
        iVar4 = 2;
      }
    }
  }
LAB_0000947c:
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  software_interrupt(0x7e);
  if (iVar8 != 0) {
    FUN_0000f89c(iVar8 + 0x71,3,0);
    FUN_0000f89c(iVar8 + 0x72,3,0);
    software_interrupt(0x7e);
  }
LAB_000094aa:
  if ((-1 < local_110 << 0x1e) && (software_interrupt(0x7c), DAT_00009504 != 0)) {
    iVar4 = 1;
  }
  *(uint *)(*DAT_000094fc + 0x54) = *(uint *)(*DAT_000094fc + 0x54) | iVar4 << 0x1c;
  if (local_28 != local_114) {
    FUN_00001a20();
  }
  return iVar4;
}



/* FUN_00009508 @ 00009508 */

undefined8 FUN_00009508(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar5 = 0;
  for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
    if (uVar3 == param_3 - 1) {
      iVar5 = 1;
    }
    uVar6 = FUN_00008df4();
    while (7 < *(uint *)(param_1 + 0x74)) {
      uVar7 = FUN_00008df4();
      uVar2 = (int)((ulonglong)uVar7 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20);
      uVar1 = (uint)((uint)uVar7 < (uint)uVar6);
      iVar4 = DAT_00009594;
      if (uVar2 != uVar1 || uVar2 - uVar1 < (uint)(4999 < (uint)uVar7 - (uint)uVar6))
      goto LAB_0000958c;
    }
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_2 + uVar3) | iVar5 << 9;
  }
  uVar6 = FUN_00008df4();
  iVar4 = DAT_00009594 + 5;
  do {
    if (-1 < *(int *)(param_1 + 0x70) << 0x1a) {
      iVar4 = 0;
      break;
    }
    uVar7 = FUN_00008df4();
    uVar3 = (int)((ulonglong)uVar7 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)((uint)uVar7 < (uint)uVar6);
  } while (uVar3 == uVar2 && (uint)(24999 < (uint)uVar7 - (uint)uVar6) <= uVar3 - uVar2);
LAB_0000958c:
  return CONCAT44(param_1,iVar4);
}



/* FUN_00009598 @ 00009598 */

undefined4 FUN_00009598(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  if (((*(uint *)(param_1 + 0x6c) & 1) == 0) && ((*(uint *)(param_1 + 0x9c) & 1) == 1)) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 2;
    uVar4 = FUN_00008df4();
    do {
      if ((*(uint *)(param_1 + 0x5c) & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_00008df4();
      uVar1 = (int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20);
      uVar2 = (uint)((uint)uVar5 < (uint)uVar4);
      uVar3 = DAT_000095ec;
    } while (uVar1 == uVar2 && (uint)(4999 < (uint)uVar5 - (uint)uVar4) <= uVar1 - uVar2);
  }
  return uVar3;
}



/* FUN_000095f0 @ 000095f0 */

undefined4 FUN_000095f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar4 = FUN_00008df4();
  uVar3 = DAT_0000962c;
  do {
    if ((*(uint *)(param_1 + 0x9c) & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_00008df4();
    uVar1 = (int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = (uint)((uint)uVar5 < (uint)uVar4);
  } while (uVar1 == uVar2 && (uint)(999 < (uint)uVar5 - (uint)uVar4) <= uVar1 - uVar2);
  return uVar3;
}



/* FUN_00009630 @ 00009630 */

int FUN_00009630(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar1 = DAT_00009858;
  iVar5 = DAT_0000985c;
  if (*(int *)(DAT_00009858 + 0xc) == 0) {
    puVar7 = (undefined4 *)(DAT_00009858 + 0x80);
    *(undefined4 *)(DAT_00009858 + 0x98) = DAT_00009860;
    *(undefined4 *)(puVar1 + 0x9c) = 0x3200000;
    software_interrupt(0x8d);
    puVar1[7] = 0;
    software_interrupt(0x87);
    puVar1[8] = 1;
    FUN_00001728(DAT_00009864,0xa80);
    FUN_00001728(DAT_00009868,0x800);
    FUN_00001728(DAT_0000986c,0x1000);
    FUN_00001728(DAT_00009870,0x3a);
    FUN_00001728(DAT_00009864 + -0x80,0x80);
    FUN_000016d4(DAT_00009874,0xb8,0xff);
    FUN_000016e4(DAT_00009878,0x17);
    FUN_00001728(DAT_0000987c,0x44);
    *(undefined2 *)(puVar1 + 10) = 0;
    *(undefined4 *)(puVar1 + 0x7c) = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 0x88) = 0;
    *puVar7 = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x84) = 0;
    *(undefined4 *)(puVar1 + 0x90) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar2 = DAT_00009880;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 0x94) = 0;
    *puVar2 = 0;
    *DAT_00009884 = 0;
    iVar5 = DAT_00009888;
    uVar6 = param_1[4];
    *(undefined4 *)(puVar1 + 0xa0) = uVar6;
    FUN_000015e4(iVar5,uVar6,0x1000);
    software_interrupt(0x59);
    *(undefined4 *)(puVar1 + 0x78) = 0x59;
    iVar3 = FUN_00009954();
    iVar5 = DAT_0000988c;
    software_interrupt(0x5d);
    *(int *)(puVar1 + 0x28) = iVar3;
    bVar8 = iVar3 + 1 == 0;
    iVar3 = iVar3 + 1;
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  iVar4 = iVar3;
                  if (bVar8) {
                    return iVar5;
                  }
                  software_interrupt(0x5d);
                  *(int *)(puVar1 + 0x2c) = iVar4;
                  iVar3 = iVar4 + 1;
                  bVar8 = iVar3 == 0;
                } while (bVar8);
                software_interrupt(0x5d);
                *(int *)(puVar1 + 0x30) = iVar3;
                iVar3 = iVar4 + 2;
                bVar8 = iVar3 == 0;
              } while (bVar8);
              software_interrupt(0x5d);
              *(int *)(puVar1 + 0x34) = iVar3;
              iVar3 = iVar4 + 3;
              bVar8 = iVar3 == 0;
            } while (bVar8);
            software_interrupt(0x5d);
            *(int *)(puVar1 + 0x38) = iVar3;
            iVar3 = iVar4 + 4;
            bVar8 = iVar3 == 0;
          } while (bVar8);
          software_interrupt(0x5d);
          *(int *)(puVar1 + 0x3c) = iVar3;
          iVar3 = iVar4 + 5;
          bVar8 = iVar3 == 0;
        } while (bVar8);
        software_interrupt(0x5d);
        *(int *)(puVar1 + 0x40) = iVar3;
        iVar3 = iVar4 + 6;
        bVar8 = iVar3 == 0;
      } while (bVar8);
      software_interrupt(0x5d);
      *(int *)(puVar1 + 0x44) = iVar3;
      iVar3 = iVar4 + 7;
      bVar8 = iVar3 == 0;
    } while (bVar8);
    software_interrupt(0x5d);
    *(int *)(puVar1 + 0x48) = iVar3;
    if (iVar4 + 8 != 0) {
      software_interrupt(0x5d);
      *(int *)(puVar1 + 0x4c) = iVar4 + 8;
      if (iVar4 + 9 != 0) {
        software_interrupt(0x5d);
        *(int *)(puVar1 + 0x50) = iVar4 + 9;
        if (iVar4 + 10 != 0) {
          software_interrupt(0x5d);
          *(int *)(puVar1 + 0x54) = iVar4 + 10;
          if (iVar4 + 0xb != 0) {
            software_interrupt(0x5d);
            *(int *)(puVar1 + 0x58) = iVar4 + 0xb;
            if (iVar4 + 0xc != 0) {
              software_interrupt(0x5d);
              *(int *)(puVar1 + 0x5c) = iVar4 + 0xc;
              if (iVar4 + 0xd != 0) {
                software_interrupt(0x5d);
                *(int *)(puVar1 + 100) = iVar4 + 0xd;
                if (iVar4 + 0xe != 0) {
                  software_interrupt(0x5d);
                  *(int *)(puVar1 + 0x60) = iVar4 + 0xe;
                  if (iVar4 + 0xf != 0) {
                    software_interrupt(0x5d);
                    *(int *)(puVar1 + 0x68) = iVar4 + 0xf;
                    if (iVar4 + 0x10 != 0) {
                      software_interrupt(0x5d);
                      *(int *)(puVar1 + 0x6c) = iVar4 + 0x10;
                      if (iVar4 + 0x11 != 0) {
                        software_interrupt(0x5d);
                        *(int *)(puVar1 + 0x70) = iVar4 + 0x11;
                        if (iVar4 + 0x12 != 0) {
                          software_interrupt(0x5d);
                          *(int *)(puVar1 + 0x74) = iVar4 + 0x12;
                          if (iVar4 != -0x13) {
                            software_interrupt(0x58);
                            *(undefined4 *)(puVar1 + 0x8c) = 2;
                            software_interrupt(0x58);
                            puVar1[1] = 2;
                            iVar5 = FUN_00003e48();
                            if (((((iVar5 == 0) && (iVar5 = FUN_00009a20(param_2), iVar5 == 0)) &&
                                 ((*(int *)(DAT_00009888 + 0x4b8) == 0 ||
                                  (iVar5 = FUN_00009970(0), iVar5 == 0)))) &&
                                ((((iVar5 = FUN_0000a6a4(), iVar5 == 0 &&
                                   (iVar5 = FUN_00009ab8(), iVar5 == 0)) &&
                                  (iVar5 = FUN_000098ac(), iVar5 == 0)) &&
                                 ((iVar5 = FUN_00013d60(), iVar5 == 0 &&
                                  (iVar5 = FUN_0001280c(), iVar5 == 0)))))) &&
                               (iVar5 = FUN_0000b8f0(), iVar5 == 0)) {
                              *(undefined4 *)(puVar1 + 0x18) = *param_1;
                              *(undefined4 *)(puVar1 + 0x1c) = param_1[1];
                              *(undefined4 *)(puVar1 + 0x20) = param_1[2];
                              *(undefined4 *)(puVar1 + 0x24) = param_1[3];
                              *(undefined4 *)(puVar1 + 0x10) = 0x10001;
                              *(undefined4 *)(puVar1 + 0x14) = 0x10001;
                              software_interrupt(0x51);
                              software_interrupt(0x51);
                              software_interrupt(0x51);
                              software_interrupt(0x51);
                              iVar5 = FUN_00016b48(DAT_000098a8,DAT_00009888,1,0);
                              if (iVar5 == 0) {
                                *(undefined4 *)(puVar1 + 0xc) = 1;
                                iVar5 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}



/* FUN_000098ac @ 000098ac */

int FUN_000098ac(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  
  local_28 = 0;
  software_interrupt(0x73);
  param_1 = param_1 + DAT_00009940;
  iVar2 = FUN_000067fa(param_1,0x1000,&local_28);
  iVar1 = DAT_00009944;
  iVar5 = DAT_00009944;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x108) == DAT_00009948) {
      uVar3 = *(int *)(iVar2 + 0x100) + 0x100;
      iVar5 = DAT_0000994c;
      if ((uVar3 < 0x8001) && (iVar5 = 0, iVar6 = DAT_00009950, uVar3 != 0)) {
        while( true ) {
          uVar4 = uVar3;
          if (0x1000 < uVar3) {
            uVar4 = 0x1000;
          }
          FUN_000015e4(iVar6,iVar2,uVar4);
          uVar3 = uVar3 - uVar4;
          param_1 = param_1 + uVar4;
          if (uVar3 == 0) break;
          software_interrupt(99);
          iVar2 = FUN_000067fa(param_1,0x1000,&local_28);
          iVar6 = iVar6 + uVar4;
          if (iVar2 == 0) {
            return iVar1;
          }
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    else {
      iVar5 = DAT_00009944 + -4;
    }
    software_interrupt(99);
  }
  return iVar5;
}



/* FUN_00009954 @ 00009954 */

void FUN_00009954(void)

{
  FUN_00001728(DAT_00009968,0x2000);
  *(undefined4 *)(DAT_0000996c + 8) = 0;
  return;
}



/* FUN_00009970 @ 00009970 */

undefined4 FUN_00009970(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_28;
  
  iVar8 = DAT_00009a10;
  local_28 = 0;
  uVar7 = DAT_00009a0c;
  if (param_1 == 0) {
    software_interrupt(0x73);
    iVar2 = 0x7f8000;
    uVar3 = FUN_000067fa(0x7f8000,0x1000,&local_28);
    uVar1 = DAT_00009a14;
    uVar7 = DAT_00009a14;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(uVar3 + 0x14);
      uVar7 = DAT_00009a18;
      if (uVar4 < 0x881) {
        iVar5 = 0x100;
        *DAT_00009a1c = *(undefined4 *)(uVar3 + 0x4c);
        uVar7 = 0;
        uVar6 = uVar4;
        while (uVar6 != 0) {
          uVar6 = uVar4;
          if (0x1000 < uVar4) {
            uVar6 = 0x1000;
          }
          FUN_000015e4(iVar8,uVar3 + iVar5,uVar6);
          uVar4 = uVar4 - uVar6;
          iVar8 = iVar8 + uVar6;
          iVar2 = iVar2 + uVar6;
          uVar7 = 0;
          if (uVar4 == 0) break;
          software_interrupt(99);
          iVar5 = 0;
          uVar3 = FUN_000067fa(iVar2,0x1000,&local_28);
          uVar7 = uVar1;
          uVar6 = uVar3;
        }
        DAT_00009a1c[1] = 1;
        if (uVar3 == 0) {
          return uVar7;
        }
      }
      software_interrupt(99);
    }
  }
  return uVar7;
}



/* FUN_00009a20 @ 00009a20 */

void FUN_00009a20(undefined4 param_1)

{
  int iVar1;
  
  FUN_000016d4(DAT_00009a64,0xc00,0x11);
  FUN_00001728(DAT_00009a68,0x840);
  iVar1 = FUN_0000638c(param_1,DAT_00009a64 + -0x40,0x20,DAT_00009a6c);
  if (iVar1 == 0) {
    FUN_0000638c(param_1,DAT_00009a64 + -0x20,0x20,DAT_00009a6c + 0x1a);
    return;
  }
  return;
}



/* FUN_00009a70 @ 00009a70 */

undefined4 FUN_00009a70(int param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_00009aa4;
  software_interrupt(0x54);
  *DAT_00009aa4 = (char)param_1;
  software_interrupt(0x5d);
  *(int *)(puVar1 + 4) = param_1;
  if (param_1 != -1) {
    FUN_00001728(DAT_00009aa8,0x1130);
    FUN_00001728(DAT_00009aac,0x400);
    *DAT_00009ab0 = 1;
    return 0;
  }
  return DAT_00009ab4;
}



/* FUN_00009ab8 @ 00009ab8 */

void FUN_00009ab8(void)

{
  int *piVar1;
  int iVar2;
  undefined uVar3;
  
  piVar1 = DAT_00009ae4;
  iVar2 = FUN_0000527c(DAT_00009ae8,0x4000,DAT_00009ae4);
  if ((iVar2 == 0) && ((*piVar1 == DAT_00009af0 || (*piVar1 == -1)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *DAT_00009aec = uVar3;
  return;
}



/* FUN_00009af4 @ 00009af4 */

void FUN_00009af4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00009598();
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
    param_1[1] = 0x32;
    *param_1 = 0x165;
    param_1[7] = param_2;
    param_1[8] = param_3;
    param_1[0x28] = 1;
    param_1[0xc] = 0x8ff;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x1f] = 0x1f;
    param_1[0x1b] = 1;
  }
  return;
}



/* FUN_00009b34 @ 00009b34 */

undefined4 FUN_00009b34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00009b60;
  software_interrupt(0xac);
  if ((((param_1 != 0) && (iVar1 = FUN_00004478(), iVar1 == 0)) &&
      (iVar1 = FUN_00004540(), iVar1 == 0)) &&
     (iVar1 = FUN_0000448c(0,*DAT_00009b68,*DAT_00009b64,0x10), iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_00009b6c @ 00009b6c */

void FUN_00009b6c(void)

{
  *(undefined4 *)((int)&DAT_00006008 + *(int *)(DAT_00009b7c + 4)) = DAT_00009b80;
  return;
}



/* FUN_00009b84 @ 00009b84 */

void FUN_00009b84(int param_1,int param_2,int param_3)

{
  FUN_000015e4(param_1,param_2,*(undefined4 *)(param_2 + 0x44));
  FUN_000016e4(*(int *)(param_2 + 0x44) + param_1,param_3 - *(int *)(param_2 + 0x44));
  return;
}



/* FUN_00009ba0 @ 00009ba0 */

void FUN_00009ba0(int param_1,int param_2,undefined4 param_3)

{
  FUN_00009b84();
  FUN_00009b84(param_1 + 0x48,param_2 + 0x48,param_3);
  return;
}



/* FUN_00009bc0 @ 00009bc0 */

int FUN_00009bc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_160 [144];
  undefined auStack_d0 [144];
  undefined auStack_40 [36];
  
  piVar1 = DAT_00009c80;
  FUN_000016e4(*DAT_00009c80 + 0x1120,0x98);
  FUN_00009ba0(auStack_160,param_2,*(undefined4 *)(param_1 + 0x44));
  FUN_00009ba0(auStack_d0,param_3,*(undefined4 *)(param_1 + 0x44));
  iVar3 = FUN_0000757a(*piVar1 + 0xee0,param_1,*(undefined4 *)(param_1 + 0x44),auStack_160,
                       auStack_d0);
  iVar2 = DAT_00009c84;
  iVar4 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_40,3,*DAT_00009c88 + 0x1120,*DAT_00009c88 + 0xee0,
                             *(undefined4 *)(param_1 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_40,1), iVar4 = iVar3, iVar3 == 0)) &&
     (iVar4 = iVar2, (*(byte *)(*piVar1 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_4,*piVar1 + 0x1120,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    FUN_000015e4(param_4 + 0x48,*piVar1 + 0x116c,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_4 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* FUN_00009c8c @ 00009c8c */

int FUN_00009c8c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_3c [32];
  
  piVar1 = DAT_00009d54;
  FUN_000016e4(*DAT_00009d54 + 0x1120,0x98);
  iVar3 = FUN_00007614(*piVar1 + 0xee0,param_2,*(undefined4 *)(param_2 + 0x44),param_1,
                       *(undefined4 *)(param_1 + 0x44),param_3,*(undefined4 *)(param_3 + 0x44),
                       param_4,*(undefined4 *)(param_4 + 0x44),param_4 + 0x48,
                       *(undefined4 *)(param_4 + 0x8c));
  iVar2 = DAT_00009d58;
  iVar4 = iVar2;
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_00003460(auStack_3c,4,*DAT_00009d5c + 0x1120,*DAT_00009d5c + 0xee0,
                             *(undefined4 *)(param_2 + 0x44),1), iVar3 == 0)) &&
      (iVar3 = FUN_00014198(auStack_3c,1), iVar4 = iVar3, iVar3 == 0)) &&
     (iVar4 = iVar2, (*(byte *)(*piVar1 + 0x1168) & 1) != 0)) {
    FUN_000015e4(param_5,*piVar1 + 0x1120,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_5 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    FUN_000015e4(param_5 + 0x48,*piVar1 + 0x116c,*(undefined4 *)(param_2 + 0x44));
    *(undefined4 *)(param_5 + 0x8c) = *(undefined4 *)(param_2 + 0x44);
    iVar4 = iVar3;
  }
  return iVar4;
}



/* FUN_00009d60 @ 00009d60 */

int FUN_00009d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_22c;
  undefined auStack_228 [512];
  int local_28;
  
  iVar2 = *DAT_00009de0;
  local_22c = 0;
  local_28 = iVar2;
  if (param_7 == 3) {
    uVar3 = 0x20;
  }
  else {
    iVar1 = DAT_00009de4;
    if (param_7 != 4) goto LAB_00009dc6;
    uVar3 = 0x30;
  }
  uVar4 = FUN_000067fa(param_1,0x200,&local_22c);
  param_7 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    iVar1 = DAT_00009de4 + 2;
  }
  else {
    FUN_000015e4(auStack_228,(int)uVar4,param_5);
    iVar1 = FUN_00010804(param_6,uVar3,param_4,param_5,param_2,param_3,auStack_228);
    software_interrupt(99);
    param_7 = local_22c;
  }
LAB_00009dc6:
  if (local_28 != iVar2) {
    FUN_00001a20(local_28,param_7);
  }
  return iVar1;
}



/* FUN_00009de8 @ 00009de8 */

undefined4 FUN_00009de8(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar2 = DAT_00009e30;
  puVar1 = DAT_00009e2c;
  uVar3 = 0;
  if ((DAT_00009e28 == *(uint *)(DAT_00009e24 + 0x4b4) >> 8) &&
     (((uVar4 = *(uint *)(DAT_00009e24 + 0x4b4) & 0xff, uVar4 == 2 || (uVar4 == 3)) ||
      (uVar4 == 0xff)))) {
    uVar3 = 1;
    *DAT_00009e2c = 1;
    puVar1[1] = 1;
    *(uint *)(*piVar2 + 0x54) = *(uint *)(*piVar2 + 0x54) | uVar4;
    puVar1[4] = 1;
  }
  puVar1[3] = 1;
  return uVar3;
}



/* FUN_00009e34 @ 00009e34 */

undefined4 FUN_00009e34(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (param_2 <= uVar1) {
      return 1;
    }
    if (*(char *)(param_1 + uVar1) != '\0') break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}



/* FUN_00009e4a @ 00009e4a */

void FUN_00009e4a(void)

{
  FUN_00004530(0);
  return;
}



/* FUN_00009e50 @ 00009e50 */

undefined4 FUN_00009e50(int param_1)

{
  if (-1 < *(int *)(*(int *)(DAT_00009e64 + param_1 * 4) + 0x10) << 0x1e) {
    return 0;
  }
  return 1;
}



/* FUN_00009e68 @ 00009e68 */

uint FUN_00009e68(void)

{
  uint uVar1;
  
  uVar1 = FUN_00009edc();
  return uVar1 ^ 1;
}



/* FUN_00009e74 @ 00009e74 */

undefined4 FUN_00009e74(void)

{
  if (*(int *)(DAT_00009e88 + 0x238) != 3) {
    return 0;
  }
  return 1;
}



/* FUN_00009e8c @ 00009e8c */

undefined4 FUN_00009e8c(uint param_1)

{
  if ((*(uint *)(DAT_00009ea4 + 0x514) & 1 << (param_1 & 0xff)) != 0) {
    return 1;
  }
  return 0;
}



/* FUN_00009ea8 @ 00009ea8 */

bool FUN_00009ea8(uint param_1)

{
  return param_1 < 0x44;
}



/* FUN_00009eb4 @ 00009eb4 */

uint FUN_00009eb4(uint param_1,int param_2)

{
  if (param_2 == 0xc) {
    return (param_1 << 0x1b) >> 0x1f;
  }
  if ((param_2 != 0xf) && (param_2 != 0x10)) {
    if (param_2 != 0x22) {
      return 0;
    }
    return (param_1 << 0x1d) >> 0x1f;
  }
  return param_1 & 1;
}



/* FUN_00009edc @ 00009edc */

undefined4 FUN_00009edc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_00009f2c + -0x54 + param_1 * 0x1c;
  uVar2 = param_2 & *(uint *)(iVar3 + 0x10) - 1;
  uVar4 = *(uint *)(iVar3 + 0xc);
  uVar1 = (uint)(*(int *)(*(int *)(DAT_00009f2c + param_1 * 4) + 8) - *(int *)(iVar3 + 4)) >> 5;
  if ((((*(int *)(iVar3 + 0x14) - param_2 < *(uint *)(iVar3 + 0x10)) && (uVar1 != uVar4)) &&
      ((uVar4 <= uVar1 || ((uVar1 <= uVar2 && (uVar2 < uVar4)))))) &&
     ((uVar1 <= uVar4 || ((uVar2 < uVar4 || (uVar1 <= uVar2)))))) {
    return 1;
  }
  return 0;
}



/* FUN_00009f30 @ 00009f30 */

undefined4 FUN_00009f30(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_10;
  
  uVar3 = 0;
  local_10 = 0;
  iVar2 = FUN_0000928c(&local_10);
  puVar1 = DAT_00009f84;
  if (iVar2 == 0) {
    if ((local_10 == 1) || (local_10 == 2)) {
      *DAT_00009f84 = 0;
      puVar1[1] = 0;
    }
    else {
      if (local_10 != 3) {
        *DAT_00009f84 = 0;
        puVar1[1] = 0;
        puVar1[5] = 0;
        return 0;
      }
      *DAT_00009f84 = 1;
      puVar1[1] = 1;
    }
    uVar3 = 1;
    puVar1[5] = 1;
    iVar2 = *DAT_00009f88;
    *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xfff00000;
    *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) | local_10 | 0xb0000;
  }
  return uVar3;
}



/* FUN_00009f8c @ 00009f8c */

int FUN_00009f8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  iVar1 = DAT_0000a11c;
  iVar5 = DAT_0000a114;
  local_30 = 0x30;
  piVar6 = (int *)(DAT_0000a114 + 0xe34);
  local_2c = DAT_0000a114;
  iVar7 = DAT_0000a114 + 0x4bc;
  iVar9 = DAT_0000a114 + 0x978;
  local_28 = DAT_0000a114 + 0x17ac;
  iVar10 = DAT_0000a114 + 0x12f0;
  iVar2 = (int)&DAT_000036cc + DAT_0000a114;
  iVar3 = DAT_0000a118;
  if (((param_1 == 4) &&
      (iVar3 = FUN_00002836(DAT_0000a114,param_2,*(undefined4 *)(param_2 + 0x44)), iVar3 == 0)) &&
     (iVar3 = FUN_00002836(iVar7,param_2 + 0x48,*(undefined4 *)(param_2 + 0x8c)), iVar3 == 0)) {
    FUN_000016e4(iVar2,0x60);
    iVar3 = FUN_000052e4(iVar2,&local_30,iVar1,*(undefined4 *)(iVar1 + 0x120),1);
    if (((iVar3 == 0) &&
        (iVar3 = FUN_00002836(iVar9,iVar2,*(undefined4 *)(iVar1 + 0x120)), iVar3 == 0)) &&
       ((iVar8 = DAT_0000a118 + -10, iVar3 = iVar8, *(int *)(iVar5 + 4) != 1 &&
        (*(int *)(iVar5 + 0x4c0) != 1)))) {
      FUN_000016e4(iVar2,0x60);
      iVar4 = FUN_000052e4(iVar2,&local_30,iVar1 + 0x30,*(undefined4 *)(iVar1 + 0x120),1);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_00002836(iVar10,iVar2,*(undefined4 *)(iVar1 + 0x120));
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_00002498(iVar5,iVar10);
      if ((iVar4 == 2) && (iVar4 = FUN_00002498(iVar7,iVar10), iVar4 == 2)) {
        iVar3 = FUN_00002bb2(piVar6,iVar5);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_00002370(piVar6,piVar6,iVar9);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar5 = FUN_000028e0(iVar9,iVar5,piVar6,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        FUN_000016e4(iVar2,0x60);
        iVar5 = FUN_000052e4(iVar2,&local_30,iVar1 + 0x60,*(undefined4 *)(iVar1 + 0x120),1);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar3 = FUN_00002836(piVar6,iVar2,*(undefined4 *)(iVar1 + 0x120));
        if (((((iVar3 == 0) && (iVar3 = FUN_00002370(iVar9,iVar9,piVar6), iVar3 == 0)) &&
             (iVar3 = FUN_00002bb2(piVar6,iVar7), iVar3 == 0)) &&
            ((iVar3 = FUN_00002d82(local_2c,iVar9,piVar6), iVar3 == 0 &&
             (iVar3 = FUN_000024e0(local_28,0,local_2c,iVar10,piVar6), iVar3 == 0)))) &&
           (iVar3 = iVar8, *piVar6 == 0)) {
          return 0;
        }
      }
    }
  }
  return iVar3;
}



/* FUN_0000a120 @ 0000a120 */

undefined4 FUN_0000a120(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0000a144;
  if (*DAT_0000a144 != '\0') {
    iVar2 = FUN_00009e74();
    if (iVar2 == 0) {
      return 1;
    }
    if (*pcVar1 != '\0') {
      return 0;
    }
  }
  if (*(int *)(DAT_0000a148 + 0x3e0) != 0) {
    return 1;
  }
  return 0;
}



/* FUN_0000a14c @ 0000a14c */

undefined4 FUN_0000a14c(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 == 1) {
    return 1;
  }
  if ((param_2 < 0x10000001) && (param_1 < 0x40000001)) {
    param_2 = param_2 + param_1;
    if (((((0x3fffff < param_1) && (param_2 < 0xc00001)) ||
         ((0x1fffff < param_1 && (param_2 < 0x300001)))) ||
        ((0xcfffff < param_1 && (param_2 < 0xe00001)))) ||
       ((*DAT_0000a1a4 <= param_1 && (param_2 <= *DAT_0000a1a8)))) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



/* FUN_0000a1ac @ 0000a1ac */

void FUN_0000a1ac(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0000a1f0(param_1 + 0x38,param_3,param_4,param_5,param_6,param_7);
    if (((iVar1 == 0) || (*(char *)(param_1 + 0x7f) == '\0')) || (*(int *)(param_1 + 0x18) != 0))
    break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x100;
  } while (iVar2 == 0);
  *param_2 = iVar2;
  return;
}



/* FUN_0000a1f0 @ 0000a1f0 */

/* WARNING: Removing unreachable block (ram,0x0000a232) */
/* WARNING: Removing unreachable block (ram,0x0000a236) */
/* WARNING: Removing unreachable block (ram,0x0000a23c) */
/* WARNING: Removing unreachable block (ram,0x0000a240) */
/* WARNING: Removing unreachable block (ram,0x0000a266) */

undefined4
FUN_0000a1f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = DAT_0000a26c;
  piVar4 = (int *)(DAT_0000a270 + 0x100);
  piVar3 = (int *)(DAT_0000a270 + 0x150);
  while( true ) {
    if ((int *)(*piVar4 + (int)piVar4) <= piVar3) {
      return uVar1;
    }
    iVar2 = FUN_00001550(piVar3 + 4,param_1,0x10);
    if (iVar2 == 0) break;
    piVar3 = (int *)((int)piVar3 + *piVar3);
  }
  software_interrupt(0x87);
  *param_2 = piVar3 + 3;
  *param_3 = 4;
  *param_4 = piVar3 + 0x14;
  *param_5 = (uint)piVar3[8] >> 3;
  return 0;
}



/* FUN_0000a290 @ 0000a290 */

void FUN_0000a290(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0 || param_2 != 0) {
    lVar3 = FUN_00008df4();
    lVar4 = lVar3;
    do {
      lVar4 = FUN_00008df4((int)lVar4,(int)((ulonglong)lVar4 >> 0x20));
      uVar1 = (uint)(lVar4 - lVar3);
      uVar2 = (uint)((ulonglong)(lVar4 - lVar3) >> 0x20);
      lVar4 = CONCAT44((uVar2 - param_2) - (uint)(param_1 > uVar1),uVar1 - param_1);
    } while (uVar2 <= param_2 && (uint)(param_1 <= uVar1) <= uVar2 - param_2);
  }
  return;
}



/* FUN_0000a2b8 @ 0000a2b8 */

undefined8 FUN_0000a2b8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int local_28 [4];
  
  iVar1 = DAT_0000a334;
  uVar5 = 0;
  local_28[2] = *(undefined4 *)(DAT_0000a330 + 0x68);
  local_28[3] = *(undefined4 *)(DAT_0000a330 + 0x6c);
  local_28[0] = *(int *)(DAT_0000a330 + 0x60);
  local_28[1] = *(undefined4 *)(DAT_0000a330 + 100);
  uVar3 = 0x100;
  software_interrupt(0x7d);
  if (DAT_0000a334 == 0) {
    uVar5 = 1;
  }
  else {
    puVar4 = (uint *)(DAT_0000a334 + 0xa0);
    uVar2 = *puVar4;
    *param_1 = uVar2;
    if (-1 < (int)(uVar2 << 0x1e)) {
      *puVar4 = uVar2 | 2;
    }
    uVar2 = 0;
    do {
      FUN_0000f89c(local_28[uVar2 * 2] + iVar1,3,8);
      do {
      } while ((~*(byte *)(local_28[uVar2 * 2 + 1] + iVar1) & 7) != 0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 0x100;
      software_interrupt(0x7e);
    }
  }
  return CONCAT44(uVar3,uVar5);
}



/* FUN_0000a39c @ 0000a39c */

undefined4 FUN_0000a39c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x700;
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_0000a57c(param_1,4);
  if (iVar1 == 5) {
    FUN_0000a5a8(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0x300;
    iVar1 = FUN_0000a57c(param_1,4);
    if (iVar1 == 5) {
      FUN_0000a290(DAT_0000a42c,0);
      *(undefined4 *)(param_1 + 0x10) = 0x300;
      iVar1 = FUN_0000a57c(param_1,4);
    }
  }
  if ((iVar1 == 0) && (iVar1 = FUN_0000a57c(param_1,0x10), iVar1 == 0)) {
    local_18 = CONCAT31(local_18._1_3_,2);
    iVar1 = FUN_0000a430(param_1,100,1,&local_18);
    if (iVar1 == 0) {
      local_14 = CONCAT31(local_14._1_3_,1);
      iVar1 = FUN_0000a430(param_1,100,1,&local_14);
      if (iVar1 == 5) {
        FUN_0000a5a8(param_1);
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* FUN_0000a430 @ 0000a430 */

int FUN_0000a430(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar1 = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 4) = 100;
    *(undefined4 *)(param_1 + 0x6c) = 1;
    iVar3 = 0;
    for (uVar2 = 0; iVar1 = 0, uVar2 < param_3; uVar2 = uVar2 + 1) {
      if (uVar2 == param_3 - 1) {
        iVar3 = 1;
      }
      *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_4 + uVar2) | iVar3 << 9;
      iVar1 = FUN_0000a57c(param_1,0x10);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  return iVar1;
}



/* FUN_0000a482 @ 0000a482 */

undefined8 FUN_0000a482(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = FUN_0000a2b8();
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0x8ff;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x7c) = 0x30;
    iVar2 = 0x18;
    FUN_0000a4c4(param_2,0x23c,0x2f8,0x14,0x18,100,0x163);
    *(undefined4 *)(param_2 + 0x6c) = 1;
  }
  return CONCAT44(iVar2,iVar1);
}



/* FUN_0000a4c4 @ 0000a4c4 */

void FUN_0000a4c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  param_1[1] = param_6;
  *param_1 = param_7;
  *(undefined4 *)((int)param_1 + param_4) = param_2;
  *(undefined4 *)((int)param_1 + param_5) = param_3;
  return;
}



/* FUN_0000a4d8 @ 0000a4d8 */

void FUN_0000a4d8(undefined4 param_1,byte param_2,byte param_3,undefined2 param_4,undefined4 param_5
                 )

{
  FUN_0000a4fc(param_1,2,param_2 | param_3,param_4,0,0,param_5,4);
  return;
}



/* FUN_0000a4fc @ 0000a4fc */

int FUN_0000a4fc(int param_1,undefined param_2,undefined param_3,undefined4 param_4,int param_5,
                int param_6,uint param_7,int param_8)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = DAT_0000a578;
  if ((param_5 == 0) && (param_6 != 0)) {
    iVar2 = 7;
  }
  else {
    uVar3 = param_6 + 7U & 0xff;
    *DAT_0000a578 = 3;
    puVar1[1] = (char)(param_6 + 7U);
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = (char)param_4;
    puVar1[5] = (char)((uint)param_4 >> 8);
    FUN_000015e4(puVar1 + 6);
    puVar1[uVar3 - 1] = 0;
    puVar1[uVar3] = 0;
    FUN_0001761a(uVar3 - 2 & 0xff);
    iVar2 = FUN_0000a430(param_1,100,uVar3 + 1,puVar1);
    if (iVar2 == 0) {
      FUN_0000a290(param_8 * 1000,0);
      if (puVar1 + 0x40 == (undefined *)0x0) {
        iVar2 = 7;
      }
      else {
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 4) = 100;
        *(undefined4 *)(param_1 + 0x6c) = 1;
        iVar4 = 0;
        for (uVar3 = 0; iVar2 = 0, uVar3 < param_7; uVar3 = uVar3 + 1) {
          if (uVar3 == param_7 - 1) {
            iVar4 = 1;
          }
          *(uint *)(param_1 + 0x10) = iVar4 << 9 | 0x100;
          iVar2 = FUN_0000a57c(param_1,4);
          if (iVar2 != 0) {
            return iVar2;
          }
          (puVar1 + 0x40)[uVar3] = (char)*(undefined4 *)(param_1 + 0x10);
          iVar2 = FUN_0000a57c(param_1,0x10);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
      return iVar2;
    }
  }
  return iVar2;
}



/* FUN_0000a57c @ 0000a57c */

undefined4 FUN_0000a57c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  do {
  } while (((param_2 | 0x40) & *(uint *)(param_1 + 0x34)) == 0);
  if ((int)(*(uint *)(param_1 + 0x34) << 0x19) < 0) {
    if ((*(uint *)(param_1 + 0x80) & 1) == 0) {
      if ((int)(*(uint *)(param_1 + 0x80) << 0x1b) < 0) {
        uVar1 = 8;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  return uVar1;
}



/* FUN_0000a5a8 @ 0000a5a8 */

void FUN_0000a5a8(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_0000a4c4(param_1,0x23c,0x2f8,0x14,0x18,0x864,0x163);
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0000a290(3000,0);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 4) = 100;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  return;
}



/* FUN_0000a5f0 @ 0000a5f0 */

void FUN_0000a5f0(undefined4 param_1)

{
  if ((undefined4 *)*DAT_0000a5fc != (undefined4 *)0x0) {
    *(undefined4 *)*DAT_0000a5fc = param_1;
  }
  return;
}



/* FUN_0000a608 @ 0000a608 */

undefined8 FUN_0000a608(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  pcVar2 = DAT_0000a654;
  uVar3 = DAT_0000a658;
  if (*DAT_0000a654 == '\0') {
    iVar4 = *(int *)(DAT_0000a654 + 8);
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    software_interrupt(0x51);
    uVar5 = 0;
    do {
      uVar3 = 0;
      param_2 = DAT_0000a660;
      if (iVar4 != *(int *)(pcVar2 + 8)) break;
      software_interrupt(0x56);
      bVar1 = uVar5 < 0x65;
      uVar3 = DAT_0000a664;
      uVar5 = uVar5 + 1;
    } while (bVar1);
  }
  return CONCAT44(param_2,uVar3);
}



/* FUN_0000a668 @ 0000a668 */

undefined4 FUN_0000a668(int param_1)

{
  if (param_1 == 0x21) {
switchD_0000a672_caseD_1:
    return 1;
  }
  if (param_1 < 0x22) {
    switch(param_1) {
    default:
switchD_0000a672_caseD_0:
      return 0;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 0xd:
      goto switchD_0000a672_caseD_1;
    }
  }
  switch(param_1) {
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3e:
    goto switchD_0000a672_caseD_1;
  default:
    goto switchD_0000a672_caseD_0;
  }
}



/* FUN_0000a6a4 @ 0000a6a4 */

int FUN_0000a6a4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*(int *)(DAT_0000a714 + 0x41c) != 1) && (*(int *)(DAT_0000a714 + 0x41c) != 2)) &&
     (*DAT_0000a718 == '\x01')) {
    iVar1 = FUN_00008ac0();
    if (iVar1 == 0x100) {
      FUN_00001728(DAT_0000a71c + -0x14,0x28);
    }
    else {
      iVar2 = FUN_00011858(0x206,DAT_0000a71c + -0x14);
      if ((iVar2 == 0) && (iVar2 = FUN_00011858(0x210,DAT_0000a71c + -8), iVar2 == 0)) {
        iVar2 = FUN_00011858(0x208,DAT_0000a71c + -0x10);
      }
    }
  }
  return iVar2;
}



/* FUN_0000a720 @ 0000a720 */

longlong FUN_0000a720(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 8) {
    uVar1 = *(uint *)(param_1 + 4);
    param_1 = param_1 + 8;
    software_interrupt(0x7c);
  }
  return (ulonglong)uVar1 << 0x20;
}



/* FUN_0000a742 @ 0000a742 */

void FUN_0000a742(ushort *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 2) {
    *param_2 = (uint)*param_1;
    if (param_4 != 0x12) {
      param_2 = param_2 + 1;
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* FUN_0000a75c @ 0000a75c */

undefined8 FUN_0000a75c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_0000a7d0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xfff00000;
    software_interrupt(0x7d);
    if (uVar1 == 0) {
      iVar5 = DAT_0000a7d0 + -6;
      param_2 = 0x100000;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar3 = *(uint *)(param_1 + 0x14);
      uVar4 = *(uint *)(param_1 + 0x10);
      for (uVar6 = 0; uVar6 < param_3 >> 3; uVar6 = uVar6 + 1) {
        iVar5 = *(int *)(param_2 + uVar6 * 8);
        *(undefined4 *)((uVar3 & 0xfffff) + uVar1) = *(undefined4 *)(param_2 + uVar6 * 8 + 4);
        *(int *)((uVar2 & 0xfffff) + uVar1) = iVar5 * 0x10000 + 1;
      }
      *(undefined4 *)((uVar4 & 0xfffff) + uVar1) = DAT_0000a7d4;
      software_interrupt(0x7e);
      DataSynchronizationBarrier(0xf);
      iVar5 = 0;
      param_2 = 0x100000;
    }
  }
  return CONCAT44(param_2,iVar5);
}



/* FUN_0000a7d8 @ 0000a7d8 */

undefined4 FUN_0000a7d8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_0000a83c;
  if (((param_5 < 0x20) && (param_2 == 0x20)) && (param_4 == 0x10)) {
    iVar3 = DAT_0000a840 + param_5 * 0x42;
    FUN_000015e4(iVar3 + 0x10,param_1,0x20);
    FUN_000015e4(iVar3 + 0x30,param_3,0x10);
    uVar2 = 0;
    do {
      *(byte *)(iVar3 + uVar2) = *(byte *)(iVar3 + uVar2 + 0x30) ^ *(byte *)(iVar3 + uVar2 + 0x10);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
    *(undefined *)(iVar3 + 0x40) = 1;
    *(undefined *)(iVar3 + 0x41) = 0;
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_0000a844 @ 0000a844 */

int FUN_0000a844(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_68 [32];
  undefined auStack_48 [32];
  int local_28;
  
  iVar2 = *DAT_0000a950;
  iVar3 = DAT_0000a954;
  local_28 = iVar2;
  if (param_1 < 0x20) {
    iVar4 = DAT_0000a958 + param_1 * 0x42;
    if (*(char *)(iVar4 + 0x40) == '\0') {
      iVar3 = DAT_0000a954 + 5;
    }
    else {
      iVar3 = 0;
      if (*(char *)(iVar4 + 0x41) == '\0') {
        iVar5 = DAT_0000a95c + param_1 * 0x60;
        iVar3 = FUN_00009198(param_1,DAT_0000a960,DAT_0000a95c + -0x40,0x20,iVar4 + 0x10,0x20,
                             auStack_68,0x20);
        if (iVar3 == 0) {
          FUN_000015e4(iVar5 + 0x30,auStack_68,0x10);
          iVar3 = FUN_00009198(param_1,DAT_0000a960,auStack_68,0x20,iVar4 + 0x30,0x10,auStack_48,
                               0x20);
          if (iVar3 == 0) {
            FUN_000015e4(iVar5,auStack_48,0x10);
            uVar1 = DAT_0000a960;
            iVar3 = FUN_00009198(param_1,DAT_0000a960,DAT_0000a95c + -0x20,0x20,iVar4 + 0x10,0x20,
                                 auStack_68,0x20);
            if (iVar3 == 0) {
              FUN_000015e4(iVar5 + 0x40,auStack_68,0x20);
              iVar3 = FUN_00009198(param_1,uVar1,auStack_68,0x20,iVar4 + 0x30,0x10,auStack_48,0x20);
              if (iVar3 == 0) {
                FUN_000015e4(iVar5 + 0x10,auStack_48,0x20);
                *(undefined *)(iVar4 + 0x41) = 1;
              }
            }
          }
        }
      }
    }
  }
  if (local_28 != iVar2) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_0000a964 @ 0000a964 */

undefined * FUN_0000a964(undefined4 param_1,uint param_2,uint param_3,int param_4,byte *param_5)

{
  undefined local_24 [20];
  
  if ((param_4 != 0) && (param_5 != (byte *)0x0)) {
    if ((param_2 & 0x3ffffff) == 0) {
      if ((param_3 == 0) || (0x1000000 < param_3)) {
        return (undefined *)0x5;
      }
      software_interrupt(0x6b);
      if (&param_5 != (byte **)0x24) {
        return local_24;
      }
      software_interrupt(0x6d);
      if ((undefined *)(uint)*param_5 == (undefined *)0x0) {
        return (undefined *)0x0;
      }
      software_interrupt(0x6c);
      return (undefined *)(uint)*param_5;
    }
    FUN_0000a5f0(DAT_0000a9bc);
  }
  return (undefined *)0xa;
}



/* FUN_0000a9c0 @ 0000a9c0 */

int FUN_0000a9c0(uint param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 *param_6,int *param_7,int *param_8,
                undefined4 *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int local_40;
  
  local_40 = 0;
  uVar2 = *(uint *)(DAT_0000ad80 + 4);
  if (param_1 == 0x12) {
    *param_3 = 0;
    *param_5 = 0x40000;
    *param_6 = 0x40000;
    software_interrupt(0x7d);
    *param_8 = 0x3c00000;
    *param_7 = 0x3c00000;
    iVar1 = FUN_0000b9dc(0x12,0x40000,&stack0x00000014);
    return iVar1;
  }
  if ((int)param_1 < 0x13) {
    bVar4 = 0xd < param_1;
switchD_0000aa2c_caseD_6:
    if (!bVar4) {
                    /* WARNING: Could not recover jumptable at 0x0000a9ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)(&DAT_0000a9f2 + (uint)(byte)(&DAT_0000a9f2)[param_1] * 2))();
      return iVar1;
    }
    goto LAB_0000ad7a;
  }
  if (param_1 == 0x36) {
switchD_0000aa2c_caseD_37:
    if (param_1 == 9) {
      iVar1 = DAT_0000ad9c + -0x80;
LAB_0000ab4a:
      uVar2 = iVar1 - 4;
      iVar3 = iVar1;
    }
    else {
      iVar1 = DAT_0000ad9c;
      iVar3 = 0;
      if (param_1 == 10) goto LAB_0000ab4a;
    }
    local_40 = FUN_0000b9dc(param_1,uVar2,&stack0x00000014);
    *param_3 = 0;
    *param_5 = 0x8100;
    *param_6 = 4;
    software_interrupt(0x7d);
    *param_8 = iVar3;
    *param_7 = iVar3;
LAB_0000aae4:
    software_interrupt(0x7c);
    *param_9 = 0x80000000;
    return local_40;
  }
  if ((int)param_1 < 0x37) {
    if (param_1 == 0x16) {
      iVar1 = FUN_0000b9dc(0x16,uVar2,&stack0x00000014);
      *param_3 = 0;
      *param_5 = 0x80;
      *param_6 = 0;
      *param_8 = 0;
      software_interrupt(0x79);
      *param_7 = DAT_0000ada8;
      return iVar1;
    }
    if ((int)param_1 < 0x17) {
      if (param_1 == 0x13) {
        local_40 = FUN_0000b9dc(0x13,uVar2,&stack0x00000014);
        *param_3 = 0;
        *param_5 = 0x4000;
        iVar1 = DAT_0000ad90;
        *param_6 = 4;
        software_interrupt(0x7d);
        *param_8 = iVar1;
        *param_7 = iVar1;
        goto LAB_0000aae4;
      }
      if (param_1 == 0x14) {
        *param_3 = 0;
        *param_5 = 0x800;
        iVar1 = DAT_0000ada4;
        *param_6 = 4;
        software_interrupt(0x7d);
        *param_8 = iVar1 + 0x50;
        *param_7 = iVar1 + 0x50;
        goto LAB_0000aae4;
      }
      bVar4 = param_1 == 0x15;
    }
    else if ((param_1 == 0x34) || (bVar4 = param_1 == 0x35, bVar4)) goto switchD_0000aa2c_caseD_37;
    if (bVar4) {
      *param_3 = 0;
      *param_5 = 0x6000;
      iVar1 = DAT_0000ada4;
      *param_6 = 4;
      software_interrupt(0x7d);
      *param_8 = iVar1 + 0x48;
      *param_7 = iVar1 + 0x48;
      goto LAB_0000aae4;
    }
LAB_0000ad7a:
    local_40 = DAT_0000ad8c + -4;
  }
  else {
    uVar2 = param_1 - 0x37;
    bVar4 = 5 < uVar2;
    switch(param_1) {
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_0000aa2c_caseD_37;
    case 0x3a:
      local_40 = DAT_0000ad8c;
      break;
    case 0x3b:
      goto LAB_0000ad7a;
    case 0x3c:
      break;
    default:
      goto switchD_0000aa2c_caseD_6;
    }
  }
  return local_40;
}



/* FUN_0000adac @ 0000adac */

undefined4 FUN_0000adac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  software_interrupt(0x8f);
  if (param_1 != 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}



/* FUN_0000adc0 @ 0000adc0 */

undefined8 FUN_0000adc0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  
  software_interrupt(0x8f);
  if (param_1 == 0) {
    software_interrupt(0x88);
    param_4[1] = *param_4;
    uVar1 = 0;
    param_2 = 1;
    if (*param_4 == 0) {
      software_interrupt(0x6a);
      uVar1 = 2;
      param_2 = param_3;
    }
  }
  else {
    uVar1 = 0x20;
  }
  return CONCAT44(param_2,uVar1);
}



/* FUN_0000ade8 @ 0000ade8 */

int FUN_0000ade8(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = 0;
  uVar4 = param_1 + 0xfU & 0xfffffff0;
  if (uVar4 == 0) {
    return 0;
  }
  iVar5 = param_2[1];
  iVar1 = iVar5;
  do {
    if ((*(char *)(iVar1 + 0x10) != '\0') && (uVar4 <= *(uint *)(iVar1 + 0xc))) {
      if (*(uint *)(iVar1 + 0xc) < uVar4 + 0x20) {
        *(undefined *)(iVar1 + 0x10) = 0;
      }
      else {
        iVar2 = iVar1 + uVar4;
        puVar3 = (undefined4 *)(iVar2 + 0x20);
        *puVar3 = param_2;
        *(int *)(iVar2 + 0x24) = iVar1;
        *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 8);
        *(undefined *)(iVar2 + 0x30) = 1;
        *(uint *)(iVar2 + 0x2c) = (*(int *)(iVar1 + 0xc) - uVar4) + -0x20;
        *(undefined *)(iVar2 + 0x31) = 0x56;
        *(undefined *)(iVar1 + 0x10) = 0;
        *(int *)(iVar1 + 0x18) = param_1;
        *(undefined4 **)(iVar1 + 8) = puVar3;
        *(uint *)(iVar1 + 0xc) = uVar4;
        if (*(int *)(iVar2 + 0x28) == 0) {
          *param_2 = (int)puVar3;
        }
        else {
          *(undefined4 **)(*(int *)(iVar2 + 0x28) + 4) = puVar3;
        }
      }
      *(undefined4 *)(iVar1 + 0x14) = param_3;
      param_2[2] = (param_2[2] - *(int *)(iVar1 + 0xc)) + -0x20;
      iVar2 = iVar1 + 0x20;
      break;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
  } while (iVar1 != iVar5);
  iVar1 = *(int *)(iVar5 + 8);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
  }
  param_2[1] = iVar1;
  return iVar2;
}



/* FUN_0000ae74 @ 0000ae74 */

byte FUN_0000ae74(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
    bVar1 = bVar1 | *(byte *)(param_1 + uVar2) ^ *(byte *)(param_2 + uVar2);
  }
  return bVar1;
}



/* FUN_0000ae8e @ 0000ae8e */

void FUN_0000ae8e(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + -0x20);
    piVar2 = (int *)*puVar1;
    piVar2[2] = piVar2[2] + *(int *)(param_1 + -0x14) + 0x20;
    *(undefined *)(param_1 + -0x10) = 1;
    if ((undefined4 *)piVar2[1] == puVar1) {
      iVar3 = ((undefined4 *)piVar2[1])[2];
      if (iVar3 == 0) {
        iVar3 = piVar2[3];
      }
      piVar2[1] = iVar3;
    }
    puVar4 = *(undefined4 **)(param_1 + -0x1c);
    if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 4) != '\0')) {
      puVar4[3] = puVar4[3] + *(int *)(param_1 + -0x14) + 0x20;
      iVar3 = *(int *)(param_1 + -0x18);
      puVar4[2] = iVar3;
      if (iVar3 == 0) {
        *piVar2 = (int)puVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 4) = puVar4;
      }
      *(undefined *)(param_1 + -0xf) = 0;
      puVar1 = puVar4;
    }
    iVar3 = puVar1[2];
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x10) != '\0')) {
      if (piVar2[1] == iVar3) {
        iVar5 = *(int *)(piVar2[1] + 8);
        if (iVar5 == 0) {
          iVar5 = piVar2[3];
        }
        piVar2[1] = iVar5;
      }
      puVar1[3] = puVar1[3] + *(int *)(iVar3 + 0xc) + 0x20;
      iVar5 = *(int *)(iVar3 + 8);
      puVar1[2] = iVar5;
      if (iVar5 == 0) {
        *piVar2 = (int)puVar1;
      }
      else {
        *(undefined4 **)(iVar5 + 4) = puVar1;
      }
      *(undefined *)(iVar3 + 0x11) = 0;
    }
  }
  return;
}



/* FUN_0000af10 @ 0000af10 */

int FUN_0000af10(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  short local_50 [2];
  undefined local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  local_54 = *DAT_0000b088;
  local_4c[0] = 2;
  local_5c = param_1 + 0x12f0;
  iVar8 = 0;
  piVar5 = (int *)(param_1 + 0x978);
  iVar7 = param_1 + 0xe34;
  local_58 = param_1 + 0x17ac;
  local_48 = 1;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 1;
  local_60 = param_1;
  local_38 = local_54;
  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar2 = FUN_00002d82(param_1,param_2,&local_48);
  if (iVar2 == 0) {
    FUN_00002460(local_60,&local_64);
    FUN_00002a84(param_1 + 0x4bc,local_60,local_64);
    FUN_00002cde(param_2,local_5c,0x4bc);
    FUN_00002cde(param_1 + 0x4bc,local_58,0x4bc);
    for (uVar3 = 0; uVar3 < local_28; uVar3 = uVar3 + 1) {
      uVar1 = *(ushort *)(DAT_0000b08c + uVar3 * 2);
      local_50[0] = uVar1 * 0x100 + (uVar1 >> 8);
      iVar2 = FUN_000045c0(local_5c,param_3,local_58,param_3,local_50,2,iVar7);
      if (iVar2 != 0) break;
      FUN_000036d0(iVar7,param_3);
      iVar2 = FUN_00002836(piVar5,iVar7,param_3);
      if (iVar2 != 0) break;
      iVar4 = FUN_00002498(piVar5,local_60);
      if (((*piVar5 != 1) || (*(int *)(param_1 + 0x984) != 1)) && (iVar4 != 3)) {
        uVar6 = 1;
LAB_0000b040:
        if (local_64 <= uVar6) {
LAB_0000b052:
          iVar8 = 1;
          break;
        }
        iVar2 = FUN_000045c0(local_5c,param_3,local_4c,1,iVar7,param_3,iVar7);
        if (iVar2 == 0) {
          FUN_000036d0(iVar7,param_3);
          iVar2 = FUN_00002836(piVar5,iVar7,param_3);
          if (iVar2 != 0) goto LAB_0000b04e;
          if ((*piVar5 == 1) && (*(int *)(param_1 + 0x984) == 1)) {
            iVar8 = 1;
            goto LAB_0000b04e;
          }
          iVar4 = FUN_00002498(piVar5,local_60);
          if (iVar4 == 3) goto LAB_0000b058;
          uVar6 = uVar6 + 1;
          goto LAB_0000b040;
        }
LAB_0000b04e:
        if (iVar4 != 3) goto LAB_0000b052;
LAB_0000b058:
        if (iVar8 != 0) break;
      }
    }
  }
  *param_5 = iVar8;
  if (local_38 != local_54) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_0000b0c4 @ 0000b0c4 */

undefined4 FUN_0000b0c4(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x44c) {
    return DAT_0000b10c;
  }
  if ((*param_1 < 4) &&
     (iVar1 = DAT_0000b110 + *param_1 * 0x44c, param_1[3] == *(uint *)(iVar1 + 0xc))) {
    FUN_00001670(iVar1,param_1,*(int *)(iVar1 + 0x28) + 0x4c);
    *(undefined4 *)(iVar1 + 4) = 4;
    software_interrupt(0x57);
    return 0;
  }
  return DAT_0000b114;
}



/* FUN_0000b118 @ 0000b118 */

int FUN_0000b118(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_15c [48];
  undefined auStack_12c [256];
  int local_2c;
  
  iVar2 = *DAT_0000b23c;
  local_2c = iVar2;
  FUN_00001728(auStack_12c,0x100);
  iVar3 = DAT_0000b240;
  iVar6 = *(int *)(param_1 + 4);
  if ((param_4 < 5) && (FUN_00001670(auStack_15c,param_3,param_4 * 0xc), 1 < param_4)) {
    iVar3 = FUN_00005238(iVar6 + 0x70,0x100,DAT_0000b244,iVar6 + 0x470,auStack_15c,param_4,2);
    if (iVar3 == 0) {
      iVar3 = FUN_00005238(iVar6 + 0x170,0x100,DAT_0000b248,(int *)(iVar6 + 0x474),auStack_15c,
                           param_4,2);
      uVar1 = DAT_0000b24c;
      if (iVar3 == 0) {
        uVar4 = *(uint *)(iVar6 + 0x474);
        if ((uVar4 < 0x20) || (*(uint *)(*(int *)(param_1 + 4) + 0x60) >> 3 < uVar4)) {
          iVar3 = DAT_0000b240 + 6;
        }
        else {
          *(uint *)(iVar6 + 0x478) = uVar4;
          iVar3 = FUN_00007af6(auStack_15c,param_4,uVar1);
          if (iVar3 != 0) {
            *(uint *)(iVar6 + 0x478) = *(uint *)(iVar3 + 4) >> 3;
          }
          iVar3 = FUN_000043c8(iVar6 + 0x270,*(undefined4 *)(iVar6 + 0x478));
          if (iVar3 == 0) {
            for (uVar4 = 0; uVar5 = *(uint *)(iVar6 + 0x470), uVar4 < uVar5; uVar4 = uVar4 + 1) {
              auStack_12c[uVar4] = *(undefined *)((uVar5 - uVar4) + iVar6 + 0x70 + -1);
            }
            iVar3 = FUN_000045c0(iVar6 + 0x170,*(undefined4 *)(iVar6 + 0x474),iVar6 + 0x270,
                                 *(undefined4 *)(iVar6 + 0x478),auStack_12c,uVar5,iVar6 + 0x370);
            if (iVar3 == 0) {
              FUN_000036d0(iVar6 + 0x370,*(undefined4 *)(iVar6 + 0x474));
              *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x40c;
              *(int *)(*(int *)(param_1 + 4) + 0x5c) = *(int *)(iVar6 + 0x474) << 3;
            }
          }
        }
      }
    }
  }
  if (local_2c != iVar2) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_0000b250 @ 0000b250 */

int FUN_0000b250(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_4dc [12];
  undefined4 local_4d0;
  undefined *puStack_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined *puStack_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined *puStack_4b4;
  undefined4 local_4b0;
  undefined auStack_4ac [384];
  undefined auStack_32c [384];
  undefined auStack_1ac [384];
  int local_2c;
  
  iVar3 = DAT_0000b364;
  iVar1 = *DAT_0000b360;
  iVar4 = *(int *)(param_1 + 4);
  local_2c = iVar1;
  if (((param_4 < 5) && (FUN_00001670(auStack_4dc,param_3,param_4 * 0xc), param_4 != 0)) &&
     (iVar2 = FUN_00007af6(auStack_4dc,param_4,DAT_0000b368), iVar2 != 0)) {
    if (*(int *)(iVar2 + 4) == 4) {
      if (param_2 == 0x180) {
        *(undefined4 *)(iVar4 + 0x74) = 0x180;
        iVar3 = FUN_00006c08(4,auStack_4ac,0x30,auStack_32c,0x30,auStack_1ac,0x30);
        if (iVar3 == 0) {
          puStack_4cc = auStack_4ac;
          local_4d0 = DAT_0000b36c;
          local_4c8 = 0x30;
          iVar3 = FUN_00005238(iVar4 + 0x78,0x42,DAT_0000b36c,0,auStack_4dc,4,2);
          if (iVar3 == 0) {
            puStack_4c0 = auStack_32c;
            local_4bc = 0x30;
            local_4c4 = DAT_0000b370;
            iVar3 = FUN_00005238(iVar4 + 0xba,0x42,DAT_0000b370,0,auStack_4dc,4,2);
            if (iVar3 == 0) {
              puStack_4b4 = auStack_1ac;
              local_4b0 = 0x30;
              local_4b8 = DAT_0000b374;
              iVar3 = FUN_00005238(iVar4 + 0xfc,0x42,DAT_0000b374,0,auStack_4dc,4,2);
              if (iVar3 == 0) {
                *(undefined4 *)(iVar4 + 0x70) = 4;
                *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0xd0;
                *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = *(undefined4 *)(iVar4 + 0x74);
              }
            }
          }
        }
      }
    }
    else {
      iVar3 = DAT_0000b364 + 10;
    }
  }
  if (local_2c != iVar1) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_0000b378 @ 0000b378 */

void FUN_0000b378(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_000043c8(*(int *)(param_1 + 4) + 0x70,param_2 >> 3);
  if (iVar1 == 0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x5c) = param_2;
    *(uint *)(*(int *)(param_1 + 4) + 4) = param_2 >> 3;
  }
  return;
}



/* FUN_0000b398 @ 0000b398 */

int FUN_0000b398(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined auStack_248 [32];
  undefined auStack_228 [512];
  int local_28;
  
  iVar4 = DAT_0000b46c;
  iVar1 = *DAT_0000b468;
  iVar2 = *(int *)(param_1 + 4);
  puVar5 = (undefined *)0x0;
  local_28 = iVar1;
  if (0x1000 < param_2) goto LAB_0000b454;
  if ((*(int *)(iVar2 + 0x58) == DAT_0000b470) && (param_2 <= *(uint *)(iVar2 + 0x60))) {
    *(undefined4 *)(iVar2 + 0x78) = 0x10001;
    *(uint *)(iVar2 + 0x74) = param_2;
    *(undefined4 *)(iVar2 + 0x7c) = 4;
    iVar3 = FUN_0000b694((undefined4 *)(iVar2 + 0x70),auStack_248);
    if (iVar3 != 0) goto LAB_0000b444;
    if (param_4 != 1) {
      if (param_4 == 2) {
        iVar4 = FUN_00006260(auStack_228,0x20,1);
        if (iVar4 != 0) goto LAB_0000b454;
        goto LAB_0000b412;
      }
LAB_0000b416:
      iVar4 = FUN_0000f5d0(param_2,puVar5,auStack_248);
      if (iVar4 == 0) {
        *(uint *)(*(int *)(param_1 + 4) + 4) = (param_2 >> 4) * 5 + (param_2 >> 3) * 2 + 0x10;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = *(undefined4 *)(iVar2 + 0x74);
        *(undefined4 *)(iVar2 + 0x70) = 1;
      }
      goto LAB_0000b444;
    }
    iVar4 = FUN_00005f48(auStack_228,param_2 >> 3);
    if (iVar4 == 0) {
LAB_0000b412:
      puVar5 = auStack_228;
      goto LAB_0000b416;
    }
  }
  else {
LAB_0000b444:
    if (param_4 != 1) goto LAB_0000b454;
  }
  FUN_00001728(auStack_228,0x200);
LAB_0000b454:
  if (local_28 != iVar1) {
    FUN_00001a20();
  }
  return iVar4;
}



/* FUN_0000b474 @ 0000b474 */

int FUN_0000b474(int param_1,undefined4 param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_1 != -1) {
    uVar1 = 0;
    do {
      pcVar3 = (char *)(DAT_0000b4cc + uVar1 * 0x10);
      if ((((byte)pcVar3[1] == param_4) && (*pcVar3 == '\x01')) &&
         (*(int *)(pcVar3 + 0xc) == param_1)) {
        iVar4 = FUN_00004ee8(*(undefined4 *)(pcVar3 + 4),param_2);
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x100);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  iVar2 = FUN_00001f24(param_1,param_2,param_4);
  iVar5 = DAT_0000b4d0;
  if (iVar2 != 0) {
    *param_3 = iVar2;
    iVar5 = iVar4;
  }
  return iVar5;
}



/* FUN_0000b4d4 @ 0000b4d4 */

int FUN_0000b4d4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5,
                uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_278 [512];
  undefined auStack_78 [64];
  int local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar2 = DAT_0000b5a8;
  iVar1 = *DAT_0000b5a4;
  iVar5 = 0;
  local_38 = iVar1;
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (param_4 + 4U < 0x201) {
    iVar4 = 0;
    FUN_000015e4(auStack_278,param_3,param_4);
    iVar3 = DAT_0000b5ac;
    if (param_2 != 0x14) {
      if (param_2 == 0x1c) {
        iVar3 = DAT_0000b5ac + 1;
      }
      else if (param_2 == 0x20) {
        iVar3 = DAT_0000b5ac + 2;
      }
      else if (param_2 == 0x30) {
        iVar3 = DAT_0000b5ac + 3;
      }
      else {
        if (param_2 != 0x40) goto LAB_0000b584;
        iVar3 = DAT_0000b5ac + 4;
      }
    }
    for (; iVar2 = iVar5, param_6 != 0; param_6 = param_6 - param_2) {
      auStack_278[param_4] = (char)((uint)iVar4 >> 0x18);
      auStack_278[param_4 + 1] = (char)((uint)iVar4 >> 0x10);
      auStack_278[param_4 + 2] = (char)((uint)iVar4 >> 8);
      auStack_278[param_4 + 3] = (char)iVar4;
      iVar4 = iVar4 + 1;
      iVar2 = FUN_00009094(local_34,iVar3,auStack_278,param_4 + 4,auStack_78,0x40);
      if (iVar2 != 0) break;
      if (param_6 <= param_2) {
        FUN_000015e4(param_5,auStack_78,param_6);
        break;
      }
      FUN_000015e4(param_5,auStack_78,param_2);
      param_5 = param_5 + param_2;
      iVar5 = iVar2;
    }
  }
LAB_0000b584:
  if (local_38 != iVar1) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_0000b5b0 @ 0000b5b0 */

/* WARNING: Removing unreachable block (ram,0x0000b5c0) */

void FUN_0000b5b0(void)

{
  software_interrupt(0x76);
  return;
}



/* FUN_0000b5dc @ 0000b5dc */

void FUN_0000b5dc(undefined4 param_1)

{
  *(undefined4 *)(*DAT_0000b5f0 + 0xa5c) = param_1;
  FUN_00001728(0xffffff00,0x40);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* FUN_0000b5f4 @ 0000b5f4 */

int FUN_0000b5f4(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
                undefined4 *param_6,uint *param_7,uint *param_8,uint *param_9,int *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = 0;
  iVar2 = param_4;
  while ((iVar2 == 0 && (iVar3 = iVar3 + 0x100, *(char *)(param_1 + 0x7f) != '\0'))) {
    iVar2 = 1;
  }
  iVar1 = DAT_0000b690;
  if (iVar2 != 1) {
    iVar2 = param_1 + param_4 * 0x100;
    iVar5 = *(int *)(iVar2 + 0x14);
    uVar7 = *(int *)(iVar2 + 0x70) + param_4 * 0x100 + 0x100 + iVar5;
    iVar1 = DAT_0000b68c;
    if (uVar7 <= param_3) {
      uVar4 = (iVar5 - iVar3) + 0x100;
      uVar6 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x70);
      if ((uVar6 <= param_2) && (uVar4 <= param_3)) {
        iVar2 = FUN_00009ea8(param_5,*(undefined2 *)(param_1 + 0x58));
        if (iVar2 == 0) {
          iVar1 = DAT_0000b690 + -3;
        }
        else {
          *param_9 = uVar7;
          *param_6 = 0;
          *param_10 = iVar3;
          *param_7 = uVar4;
          *param_8 = uVar6;
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}



/* FUN_0000b694 @ 0000b694 */

undefined4 FUN_0000b694(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *param_2 = param_1 + 8;
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = param_1 + 0x10;
  iVar5 = param_1 + 0x90;
  if (iVar2 == 0x100) {
    param_2[1] = iVar1;
    param_2[2] = param_1 + 0x30;
    param_2[3] = param_1 + 0x50;
    param_2[6] = param_1 + 0x80;
    param_2[7] = iVar5;
    param_2[4] = param_1 + 0x60;
    param_2[5] = param_1 + 0x70;
  }
  else {
    iVar4 = param_1 + 0xd0;
    iVar7 = param_1 + 0x110;
    if (iVar2 == 0x200) {
      param_2[1] = iVar1;
      param_2[2] = param_1 + 0x50;
      param_2[3] = iVar5;
      param_2[7] = iVar7;
      param_2[4] = param_1 + 0xb0;
      param_2[5] = iVar4;
      param_2[6] = param_1 + 0xf0;
    }
    else {
      iVar3 = param_1 + 400;
      if (iVar2 == 0x300) {
        param_2[1] = iVar1;
        param_2[2] = param_1 + 0x70;
        iVar1 = param_1 + 0x160;
        param_2[3] = iVar4;
        param_2[4] = param_1 + 0x100;
        iVar2 = param_1 + 0x130;
        param_2[7] = iVar3;
      }
      else {
        iVar6 = param_1 + 0x210;
        if (iVar2 == 0x400) {
          param_2[1] = iVar1;
          param_2[2] = iVar5;
          param_2[3] = iVar7;
          param_2[7] = iVar6;
          param_2[4] = param_1 + 0x150;
          param_2[5] = iVar3;
          param_2[6] = param_1 + 0x1d0;
          return 0;
        }
        iVar5 = param_1 + 0x310;
        if (iVar2 == 0x600) {
          param_2[1] = iVar1;
          param_2[2] = iVar4;
          iVar1 = param_1 + 0x2b0;
          param_2[3] = iVar3;
          param_2[4] = param_1 + 0x1f0;
          iVar2 = param_1 + 0x250;
          param_2[7] = iVar5;
        }
        else {
          if (iVar2 == 0x800) {
            param_2[3] = iVar6;
            param_2[1] = iVar1;
            param_2[2] = iVar7;
            param_2[6] = param_1 + 0x390;
            param_2[7] = param_1 + 0x410;
            param_2[4] = param_1 + 0x290;
            param_2[5] = iVar5;
            return 0;
          }
          if (iVar2 != 0xc00) {
            if (iVar2 != 0x1000) {
              return DAT_0000b7c8;
            }
            param_2[1] = iVar1;
            param_2[2] = iVar6;
            param_2[5] = param_1 + 0x610;
            param_2[3] = param_1 + 0x410;
            param_2[4] = param_1 + 0x510;
            param_2[6] = param_1 + 0x710;
            param_2[7] = param_1 + 0x810;
            return 0;
          }
          param_2[1] = iVar1;
          param_2[2] = iVar3;
          param_2[3] = iVar5;
          param_2[4] = param_1 + 0x3d0;
          iVar2 = param_1 + 0x490;
          param_2[7] = param_1 + 0x610;
          iVar1 = param_1 + 0x550;
        }
      }
      param_2[5] = iVar2;
      param_2[6] = iVar1;
    }
  }
  return 0;
}



/* FUN_0000b7cc @ 0000b7cc */

int FUN_0000b7cc(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_228 [129];
  
  puVar1 = DAT_0000b8e0;
  uVar4 = 0xffffffff;
  if (param_1 == 0x31) {
    if (0x200 < param_3) {
      return DAT_0000b8e4;
    }
    if ((param_3 & 7) == 0) {
      if (*DAT_0000b8e0 == 0) {
        return DAT_0000b8ec;
      }
      FUN_000015e4(local_228,param_2,param_3);
      uVar6 = puVar1[1] + *DAT_0000b8e8;
      uVar5 = DAT_0000b8e8[1] + (uint)CARRY4(puVar1[1],*DAT_0000b8e8);
      uVar7 = *puVar1 + 0x1fff & 0xfffff000;
      for (uVar3 = 0; uVar3 < param_3 >> 3; uVar3 = uVar3 + 1) {
        iVar2 = local_228[uVar3 * 2] * 4;
        if (iVar2 == 0x14b0) {
          local_228[uVar3 * 2 + 1] = uVar6 + uVar7;
        }
        else if (iVar2 < 0x14b1) {
          if (iVar2 == 0x708) {
LAB_0000b872:
            local_228[uVar3 * 2 + 1] = 0;
          }
          else if (iVar2 == 0x70c) {
            local_228[uVar3 * 2 + 1] = *puVar1;
          }
          else {
            if (iVar2 == 0x710) goto LAB_0000b872;
            if (iVar2 == 0x714) {
              uVar4 = local_228[uVar3 * 2 + 1];
            }
          }
        }
        else if (iVar2 == 0x14b4) {
          local_228[uVar3 * 2 + 1] = uVar5 + CARRY4(uVar6,uVar7);
        }
        else if (iVar2 == 0x1678) {
          local_228[uVar3 * 2 + 1] = uVar5;
        }
        else if (iVar2 == 0x167c) {
          local_228[uVar3 * 2 + 1] = uVar6;
        }
      }
      if (((uVar7 < 0x100001) && (uVar4 < 0x100001)) && (uVar7 + uVar4 < 0x100001)) {
        iVar2 = FUN_0000a75c(puVar1,local_228,param_3);
        return iVar2;
      }
    }
  }
  return DAT_0000b8ec + -1;
}



/* FUN_0000b8f0 @ 0000b8f0 */

int FUN_0000b8f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_28;
  
  local_28 = 0;
  FUN_00013dd8(&local_28);
  iVar2 = DAT_0000b968;
  iVar1 = DAT_0000b964;
  if (local_28 == 1) {
    uVar4 = 0;
    iVar5 = DAT_0000b964 + 0x48;
    iVar6 = DAT_0000b964 + 8;
    do {
      iVar3 = FUN_00013c5c(uVar4 + 0x100,DAT_0000b964,0x2000);
      if (iVar3 == 0) {
        iVar3 = FUN_00011fd0(iVar6,*(undefined *)(DAT_0000b964 + 1),iVar5,uVar4 + 0x100);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else {
        if (iVar3 != iVar2) {
          return iVar3;
        }
        *(undefined4 *)(iVar1 + uVar4 * 0x58 + -0x57ac) = 0xffffffff;
        iVar3 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



/* FUN_0000b96c @ 0000b96c */

undefined8 FUN_0000b96c(int param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_18;
  
  software_interrupt(0x7b);
  puVar1 = &local_18;
  if (param_1 == 0) {
    software_interrupt(0x7c);
    software_interrupt(0x7c);
    local_18 = 0;
    lVar2 = FUN_00008df4(0,8,1);
    do {
      software_interrupt(0x7b);
      puVar1 = &local_18;
      param_1 = param_2;
      if ((param_2 != 0) || ((~local_18 & 7) != 0)) break;
      lVar3 = FUN_00008df4(0,&local_18,1);
      puVar1 = (uint *)((ulonglong)(lVar3 - lVar2) >> 0x20);
    } while (puVar1 == (uint *)0x0 && (uint *)(uint)(2999 < (uint)(lVar3 - lVar2)) <= puVar1);
  }
  return CONCAT44(puVar1,param_1);
}



/* FUN_0000b9dc @ 0000b9dc */

/* WARNING: Removing unreachable block (ram,0x0000baba) */
/* WARNING: Removing unreachable block (ram,0x0000babc) */
/* WARNING: Removing unreachable block (ram,0x0000bb0a) */
/* WARNING: Removing unreachable block (ram,0x0000bb0c) */
/* WARNING: Removing unreachable block (ram,0x0000bb26) */
/* WARNING: Removing unreachable block (ram,0x0000bb16) */
/* WARNING: Removing unreachable block (ram,0x0000bb2a) */
/* WARNING: Removing unreachable block (ram,0x0000bade) */
/* WARNING: Removing unreachable block (ram,0x0000bacc) */
/* WARNING: Removing unreachable block (ram,0x0000bb32) */
/* WARNING: Removing unreachable block (ram,0x0000bae2) */

undefined4 FUN_0000b9dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return 0;
  }
  if (param_1 < 0x11) {
    iVar2 = 0xfa000;
    switch(param_1) {
    default:
switchD_0000b9f8_caseD_5:
      return DAT_0000bba8;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
    case 6:
    case 0xc:
    case 0xd:
      goto switchD_0000b9f8_caseD_5;
    case 7:
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      do {
        software_interrupt(0x7b);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return DAT_0000bba8;
    case 8:
      software_interrupt(0xa6);
      software_interrupt(0xa6);
      do {
        software_interrupt(0x7b);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return DAT_0000bba8;
    case 9:
    case 10:
      goto switchD_0000b9f8_caseD_9;
    case 0xb:
      software_interrupt(0x7b);
      software_interrupt(0xa6);
      software_interrupt(0xa6);
      software_interrupt(0xa6);
      software_interrupt(0x7b);
      return 0;
    }
  }
  else {
    if (param_1 != 0x34) {
      if (0x34 < param_1) {
        switch(param_1) {
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_0000b9f8_caseD_9;
        case 0x3a:
          return 0;
        default:
          goto switchD_0000b9f8_caseD_5;
        }
      }
      if (param_1 == 0x15) {
LAB_0000ba80:
        software_interrupt(0x7c);
        return 0;
      }
      if (0x15 < param_1) {
        if (param_1 != 0x16) {
          if (param_1 == 0x33) {
            FUN_000066d0(0,param_2,param_3,DAT_0000bbac);
            return 0;
          }
          return DAT_0000bba8;
        }
        goto LAB_0000ba80;
      }
      if (param_1 != 0x12) {
        if (param_1 == 0x13) {
          return 0;
        }
        if (param_1 == 0x14) {
          return 0;
        }
        return DAT_0000bba8;
      }
      goto LAB_0000ba7a;
    }
switchD_0000b9f8_caseD_9:
    iVar2 = 0;
    iVar1 = 0;
    if (param_1 == 9) {
      iVar2 = 0x4a28;
      iVar1 = 0x49ec;
    }
    else if (param_1 == 10) {
      iVar2 = 0x6228;
      iVar1 = 0x61ec;
    }
    if (iVar2 == 0 && iVar1 == 0) {
      return 0;
    }
    software_interrupt(0x7c);
  }
LAB_0000ba7a:
  software_interrupt(0xa6);
switchD_0000b9f8_caseD_5:
  return 0;
}



/* FUN_0000bbb8 @ 0000bbb8 */

int FUN_0000bbb8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_000083c8(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_2 + 4) + 0x100);
    FUN_00012330(piVar2);
    piVar2 = piVar2 + *piVar2;
    FUN_00012318(piVar2,param_3);
    piVar2 = piVar2 + *piVar2;
    piVar2[1] = DAT_0000bc00;
    *piVar2 = 0x20;
    piVar2[0x21] = 0;
    piVar2[0x20] = 0;
  }
  return iVar1;
}



/* FUN_0000bc04 @ 0000bc04 */

/* WARNING: Removing unreachable block (ram,0x0000bc2c) */
/* WARNING: Removing unreachable block (ram,0x0000bc48) */
/* WARNING: Removing unreachable block (ram,0x0000bc36) */

undefined8 FUN_0000bc04(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_0000bc54 + 0x25c) == 0) {
    param_2 = 0xfc000000;
    software_interrupt(0x84);
    uVar1 = 0x20;
  }
  return CONCAT44(param_2,uVar1);
}



/* FUN_0000bc5c @ 0000bc5c */

uint FUN_0000bc5c(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  
  uVar14 = 2;
  uVar2 = FUN_00004f2c(*param_1);
  pcVar1 = DAT_0000bee8;
  if (uVar2 != 0) {
    return uVar2;
  }
  if ((*param_1 - 0x4000U < 0x10) && (*DAT_0000bee8 == '\0')) {
    FUN_000050c8();
    *pcVar1 = '\x01';
  }
  uVar2 = DAT_0000beec;
  uVar7 = 0;
  piVar6 = param_1 + 2;
  piVar15 = piVar6;
  do {
    if (((piVar6[uVar7 * 2] != 0) && (((*param_1 != 0x1002 || (param_1[0xf] != 1)) || (uVar7 != 0)))
        ) && (iVar3 = FUN_0000a14c(piVar6[uVar7 * 2],piVar6[uVar7 * 2 + 1],uVar14), iVar3 == 0)) {
      return uVar2;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  iVar3 = *param_1;
  piVar9 = param_1 + 0x10;
  uVar2 = iVar3 - 0x106e;
  piVar11 = param_1 + 0xf;
  piVar8 = param_1 + 0xe;
  if (iVar3 == 0x106e) {
    uVar2 = FUN_0000d694(piVar8);
    return uVar2;
  }
  uVar7 = 0;
  if (0x106e < iVar3) {
    uVar7 = iVar3 - 0x310b;
    if (uVar2 == 0x209d) {
      uVar2 = FUN_000102f4(param_1[0xf],param_1[0xe],param_1[0x10]);
      return uVar2;
    }
    if (0x209d < (int)uVar2) {
      bVar12 = 0x22 < uVar7;
      if (uVar7 == 0x23) {
        uVar2 = FUN_00011fc0(param_1[0xe]);
        return uVar2;
      }
      if (0x23 < (int)uVar7) {
        uVar2 = iVar3 - 0x6001;
        if (uVar7 == 0x2ef6) {
          uVar2 = FUN_000085d4(*piVar6,param_1[3]);
          return uVar2;
        }
        if ((int)uVar7 < 0x2ef7) {
          uVar2 = iVar3 - 0x4002;
          if (uVar7 == 0xef7) {
            return DAT_0000beec - 5;
          }
          if ((int)uVar7 < 0xef8) {
            if (uVar7 != 0x27) {
              if ((int)uVar7 < 0x28) {
                if (uVar7 == 0x24) {
                  FUN_00013646(param_1[0xe],param_1[0xf],param_1[0x10]);
                  return 0;
                }
                if (uVar7 == 0x25) {
                  uVar2 = FUN_0000dde4(piVar8);
                  return uVar2;
                }
                bVar12 = uVar7 == 0x26;
              }
              else {
                if (uVar7 == 0x28) {
                  *(int *)(DAT_0000c980 + 4) = param_1[0xe];
                  return 0;
                }
                bVar12 = uVar7 == 0xef6;
                if (bVar12) {
                  return DAT_0000beec - 5;
                }
              }
              goto LAB_0000c02c;
            }
            iVar3 = FUN_00008cc0();
            goto LAB_0000c596;
          }
          bVar12 = 5 < uVar2;
        }
        else {
          if (uVar2 == 0x1003) {
            return 0;
          }
          if ((int)uVar2 < 0x1004) {
            if (uVar2 == 0x1000) {
              uVar14 = 1;
LAB_0000c8e6:
              uVar2 = FUN_0000f7bc(uVar14,piVar8);
              return uVar2;
            }
            if ((int)uVar2 < 0x1001) {
              if (uVar2 == 1) {
                uVar2 = FUN_000172e0(*piVar6,param_1[3]);
                return uVar2;
              }
              bVar12 = uVar2 == 2;
              if (bVar12) {
                uVar2 = FUN_00001b78(piVar8);
                return uVar2;
              }
            }
            else {
              if (uVar7 == 0x3ef7) {
                uVar14 = 0;
                goto LAB_0000c8e6;
              }
              bVar12 = uVar2 == 0x1002;
              if (bVar12) {
                return 0;
              }
            }
LAB_0000c02c:
            if (!bVar12) {
              return DAT_0000c984;
            }
            *DAT_0000c97c = param_1[0xe];
            return 0;
          }
          bVar12 = 4 < iVar3 - 0x8001U;
          if (!bVar12) {
            switch(&switchD_0000c0a0::switchdataD_0000c0a4 + (uint)*(byte *)(iVar3 + 0x40a3) * 2) {
            case (byte *)0xc27e:
              uVar2 = FUN_0000e39c(*piVar6,param_1[3],param_1[0xe],param_1[0xf],uVar14,piVar15);
              return uVar2;
            case (byte *)0xc280:
              uVar2 = FUN_0000dec4(piVar8);
              return uVar2;
            case (byte *)0xc282:
              uVar2 = FUN_0000e394(piVar8);
              return uVar2;
            case (byte *)0xc284:
              uVar2 = FUN_0000e550();
              return uVar2;
            case (byte *)0xc286:
              uVar2 = FUN_0000d8a4(piVar8);
              return uVar2;
            }
          }
        }
        if (bVar12) {
          return DAT_0000c984;
        }
                    /* WARNING: Could not recover jumptable at 0x0000c042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((uint)*(byte *)(uVar2 + 0xc046) * 2 + 0xc046))();
        return uVar2;
      }
      switch(iVar3) {
      case 0x310b:
      case 0x3110:
      case 0x3118:
      case 0x311c:
      case 0x3120:
      case 0x3121:
      case 0x3122:
      case 0x3123:
      case 0x3128:
      case 0x312c:
        goto LAB_0000c96e;
      case 0x310c:
        uVar2 = FUN_0001364c(param_1[0xe],param_1[0xf],*piVar6);
        return uVar2;
      case 0x310d:
        FUN_00016618();
        return 0;
      case 0x310e:
        uVar2 = FUN_0000cc3c(param_1[0xe],param_1[0xf],param_1[0x10]);
        return uVar2;
      case 0x310f:
        uVar2 = FUN_0000cc68();
        return uVar2;
      case 0x3111:
        uVar2 = FUN_0000e7ec(piVar8);
        return uVar2;
      case 0x3112:
        uVar2 = FUN_000123a4(param_2,*piVar6,param_1[3],param_1[4],param_1[5],
                             *(undefined *)(param_1 + 0xe));
        return uVar2;
      case 0x3113:
        uVar2 = FUN_0000e864(piVar8);
        return uVar2;
      case 0x3114:
        uVar2 = FUN_0000e3ac(param_1[0xe]);
        return uVar2;
      case 0x3115:
        uVar2 = FUN_0000d04c(param_1[0xe],param_1[0xf],param_1[0x10],*piVar6,param_1[3]);
        return uVar2;
      case 0x3116:
        uVar2 = FUN_0000d860(piVar8,piVar11,piVar9);
        return uVar2;
      case 0x3117:
        uVar2 = FUN_0000e71c();
        return uVar2;
      case 0x3119:
        uVar2 = FUN_0000e558();
        return uVar2;
      case 0x311a:
        uVar2 = FUN_00013634(param_1[0xe]);
        return uVar2;
      case 0x311b:
        uVar2 = FUN_00017080();
        return uVar2;
      case 0x311d:
        uVar2 = FUN_00010218(piVar8,*(undefined *)(param_1 + 0xf));
        return uVar2;
      case 0x311e:
        uVar2 = FUN_00010178(param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                             param_1[0x13] & 0xff);
        return uVar2;
      case 0x311f:
        uVar2 = FUN_0000f598(param_1[2],param_1[3]);
        return uVar2;
      case 0x3124:
        uVar2 = FUN_000088a0(param_1[0xe]);
        return uVar2;
      case 0x3125:
        iVar3 = FUN_00008818();
        goto LAB_0000c596;
      case 0x3126:
        uVar2 = FUN_0000e57c(param_1[0xe]);
        return uVar2;
      case 0x3127:
        uVar2 = FUN_0000f594(piVar11,piVar8);
        return uVar2;
      case 0x3129:
        uVar2 = FUN_0000e3a4(piVar8);
        return uVar2;
      case 0x312a:
        uVar2 = FUN_0000d044(piVar8);
        return uVar2;
      case 0x312b:
        uVar2 = FUN_0000ed5c();
        return uVar2;
      case 0x312d:
        uVar2 = FUN_00016b44(param_1[0xe],param_1[0xf]);
        return uVar2;
      }
switchD_0000bed4_caseD_5:
      if (!bVar12) {
                    /* WARNING: Could not recover jumptable at 0x0000be2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((uint)(byte)FUN_0000adc0[iVar3 + 4] * 2 + 0xbe32))();
        return uVar2;
      }
      goto switchD_0000bd72_caseD_c;
    }
    uVar7 = iVar3 - 0x3001;
    piVar15 = param_1 + 0x15;
    piVar10 = param_1 + 0x14;
    if (uVar2 == 0x1f93) {
      uVar2 = FUN_0000d878(piVar8);
      return uVar2;
    }
    if (0x1f93 < (int)uVar2) {
      bVar12 = 0xc < uVar7;
      if (uVar7 == 0xd) {
        uVar2 = FUN_0000d834(piVar8);
        return uVar2;
      }
      if ((int)uVar7 < 0xe) {
        switch(iVar3) {
        case 0x3001:
          goto switchD_0000be8a_caseD_3001;
        case 0x3002:
          uVar2 = FUN_0000e338(piVar8);
          return uVar2;
        case 0x3003:
          iVar3 = 2;
          goto LAB_0000c596;
        case 0x3004:
          uVar2 = FUN_00006834(param_1[0xe],param_1[0xf],param_1[0x10],piVar10,piVar15);
          return uVar2;
        case 0x3005:
          uVar2 = FUN_0000d870();
          return uVar2;
        case 0x3006:
          uVar2 = FUN_0000debc(param_1[0xe],param_1[0xf]);
          return uVar2;
        case 0x3007:
          uVar2 = FUN_0000e330(piVar8,piVar11,piVar9);
          return uVar2;
        case 0x3008:
          uVar2 = FUN_0000e734(piVar8);
          return uVar2;
        case 0x3009:
          uVar2 = FUN_0000d5f0(piVar8);
          return uVar2;
        case 0x300a:
          uVar2 = FUN_0000cd20(param_1[0xe],piVar11);
          return uVar2;
        case 0x300b:
          uVar2 = FUN_0000e30c();
          return uVar2;
        case 0x300c:
          uVar2 = FUN_0000cc34(param_1[0xe]);
          return uVar2;
        case 0x300d:
          uVar2 = FUN_0000d6d0(*piVar6,param_1[3],param_1 + 3);
          return uVar2;
        default:
          goto switchD_0000be8a_caseD_d;
        }
      }
      if (uVar7 == 0x104) {
        uVar2 = FUN_0000a7d8(*piVar6,param_1[3],param_1[4],param_1[5],param_1[0x12] & 0xff);
        return uVar2;
      }
      if ((int)uVar7 < 0x105) {
        if (uVar7 == 0x101) {
          uVar2 = FUN_00008848(*piVar6,param_1[3]);
          return uVar2;
        }
        if ((int)uVar7 < 0x102) {
          if (uVar7 == 0xe) {
            uVar2 = FUN_0000cd28();
            return uVar2;
          }
          if (uVar7 == 0xf) {
            uVar2 = FUN_0000cd30();
            return uVar2;
          }
          bVar12 = uVar7 == 0x100;
          if (bVar12) {
            uVar2 = FUN_00009a70();
            return uVar2;
          }
        }
        else {
          if (iVar3 == 0x3103) {
            uVar2 = FUN_0000b0c4(*piVar6,param_1[3]);
            return uVar2;
          }
          bVar12 = iVar3 == 0x3104;
          if (bVar12) {
            uVar2 = FUN_0000ccbc(param_1[0xe],param_1[0xf],param_1[0x10]);
            return uVar2;
          }
        }
        goto LAB_0000be62;
      }
      bVar12 = 4 < iVar3 - 0x3106U;
      switch(iVar3) {
      case 0x3106:
        uVar2 = FUN_0001363c(param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11]);
        return uVar2;
      case 0x3107:
        uVar2 = FUN_00016e38(piVar8,param_1[0x12],*(undefined *)(param_1 + 0x13));
        return uVar2;
      case 0x3108:
        uVar2 = FUN_000082c0(param_1[0xe]);
        return uVar2;
      case 0x3109:
        uVar2 = FUN_0001029c(param_1[0xf],param_1[0xe],param_1[0x10],param_1[0x11]);
        return uVar2;
      case 0x310a:
        uVar2 = FUN_0001037c();
        return uVar2;
      }
      goto switchD_0000bed4_caseD_5;
    }
    bVar12 = 0xd < uVar2;
    if (uVar2 == 0xe) {
      uVar2 = FUN_00011898(piVar8);
      return uVar2;
    }
    if ((int)uVar2 < 0xf) goto switchD_0000bed4_caseD_5;
    if (uVar2 == 0xf94) {
      iVar3 = param_1[0x12];
      iVar5 = param_1[0x13];
      uVar14 = 0xffff;
      uVar16 = 0xfffffffb;
      goto LAB_0000c0f4;
    }
    if (0xf94 < (int)uVar2) {
      bVar12 = 5 < iVar3 - 0x2002U;
      switch(iVar3) {
      case 0x2003:
        break;
      case 0x2004:
        software_interrupt(0x6c);
        return param_1[0xe] & 0xff;
      case 0x2005:
        uVar2 = FUN_000068b8(param_1[0xe],param_1[0xf],param_1[0x10],piVar10,piVar15);
        return uVar2;
      case 0x2006:
        uVar2 = FUN_00006a58(param_1[0xe],param_1[0xf],piVar9);
        return uVar2;
      case 0x2007:
        software_interrupt(0x7e);
        return param_1[0xe];
      default:
        goto switchD_0000be78_caseD_5;
      }
LAB_0000c0d4:
      uVar14 = FUN_000067f4();
      iVar3 = param_1[0x12];
      iVar5 = param_1[0x13];
      uVar16 = 0xffffffff;
LAB_0000c0f4:
      uVar2 = FUN_000069c4(param_1[0xe],param_1[0xf],param_1[0x10],piVar10,piVar15,param_1[0x11],
                           iVar3,uVar14,iVar5,uVar16);
      return uVar2;
    }
    if (uVar2 == 0x92) {
      uVar2 = FUN_0000e5ac(*piVar6,param_1[3],piVar9);
      return uVar2;
    }
    if ((int)uVar2 < 0x93) {
      if (uVar2 == 0xf) {
        uVar2 = FUN_000063dc(piVar8);
        return uVar2;
      }
      if (uVar2 == 0x13) {
        uVar2 = FUN_0000cd38(*piVar6,param_1[3],param_1[4],param_1[5],piVar8);
        return uVar2;
      }
      bVar12 = uVar2 == 0x14;
    }
    else {
      if (uVar2 == 0x93) {
        uVar2 = FUN_0000ec30(param_1[0xe]);
        return uVar2;
      }
      bVar12 = iVar3 == 0x2001;
      if (bVar12) goto LAB_0000c0d4;
    }
LAB_0000be62:
    if (bVar12) {
      iVar3 = *(int *)(DAT_0000c980 + 4);
LAB_0000c596:
      param_1[0xe] = iVar3;
      return 0;
    }
switchD_0000be8a_caseD_3001:
LAB_0000c96e:
    return DAT_0000c984;
  }
  uVar2 = iVar3 - 0x1030;
  if (iVar3 == 0x1030) {
    uVar2 = FUN_0000e760(piVar8);
    return uVar2;
  }
  if (0x1030 < iVar3) {
    bVar12 = 0x3c < uVar2;
switchD_0000be8a_caseD_d:
    if (!bVar12) {
                    /* WARNING: Could not recover jumptable at 0x0000bdbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((uint)*(byte *)(uVar2 + 0xbdc2) * 2 + 0xbdc2))();
      return uVar2;
    }
    goto switchD_0000bd72_caseD_c;
  }
  uVar2 = iVar3 - 0x1014;
  if (iVar3 == 0x1014) {
    param_1[0xe] = *piVar6;
    param_1[0xf] = param_1[4];
    param_1[0x13] = param_1[6];
LAB_0000c2e6:
    param_1[0x16] = param_1[8];
    goto LAB_0000c2c8;
  }
  if (0x1014 < iVar3) {
    bVar12 = 0x1b < uVar2;
switchD_0000be78_caseD_5:
    if (!bVar12) {
                    /* WARNING: Could not recover jumptable at 0x0000bd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((uint)*(byte *)(uVar2 + 0xbd8c) * 2 + 0xbd8c))();
      return uVar2;
    }
switchD_0000bd72_caseD_c:
    if (!bVar12) {
                    /* WARNING: Could not recover jumptable at 0x0000bd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((uint)*(byte *)(uVar2 + 0xbd68) * 2 + 0xbd68))();
      return uVar2;
    }
    goto switchD_0000be8a_caseD_3001;
  }
  uVar2 = iVar3 - 0x1007;
  if (iVar3 == 0x1007) {
    param_1[0xe] = *piVar6;
    param_1[0xf] = param_1[4];
    uVar2 = FUN_0000da94(piVar8);
    return uVar2;
  }
  if (iVar3 < 0x1008) {
    uVar2 = iVar3 - 0x1001;
    if (iVar3 == 0x1001) {
      uVar2 = FUN_00007d68(param_1[0xe] & 0xff);
      return uVar2;
    }
    if (iVar3 < 0x1002) {
      iVar4 = DAT_0000beec - 0xb;
      bVar13 = SBORROW4(iVar3,iVar4);
      iVar5 = iVar3 - iVar4;
      bVar12 = iVar3 == iVar4;
      iVar4 = iVar3 - iVar4;
      do {
        if (bVar12) {
          uVar2 = FUN_00014230(iVar3,param_2);
          return uVar2;
        }
        if (!bVar12 && iVar5 < 0 == bVar13) {
          iVar4 = iVar3 + 0xfffb;
          bVar12 = iVar4 == 0;
          if (bVar12) goto LAB_0000bd38;
          bVar12 = iVar4 + DAT_0000bef0 == 0;
          if (bVar12) {
            uVar2 = FUN_00009630(piVar8,param_2);
            return uVar2;
          }
          goto LAB_0000bd44;
        }
        bVar13 = SCARRY4(iVar4,4);
        iVar5 = iVar4 + 4;
        bVar12 = iVar4 == -4;
      } while (bVar12);
      bVar12 = iVar4 == -3;
LAB_0000bd38:
      if (bVar12) {
        uVar2 = FUN_0000ffd8();
        return uVar2;
      }
      bVar12 = iVar4 == -2;
LAB_0000bd44:
      if (bVar12) {
        return 0;
      }
      goto switchD_0000be8a_caseD_3001;
    }
    bVar12 = 5 < uVar2;
    goto switchD_0000bd72_caseD_c;
  }
  bVar12 = 0xc < uVar2;
  switch(iVar3) {
  case 0x1008:
    param_1[0xe] = *piVar6;
    param_1[0x10] = param_1[3] << 3;
    param_1[0x11] = param_1[4];
    param_1[0x12] = param_1[5];
    param_1[0x13] = param_1[6];
    param_1[0x14] = param_1[8];
    uVar7 = FUN_0000cb2c(piVar8);
    break;
  case 0x1009:
    uVar7 = FUN_00007ca4(*piVar6,param_1[4],param_1[5],param_1[6]);
    break;
  case 0x100a:
    uVar7 = FUN_00003638(param_2,*piVar6,param_1[3]);
    break;
  case 0x100b:
    param_1[0xe] = *piVar6;
    param_1[0xf] = param_1[4];
    uVar7 = FUN_00013654(piVar8);
    break;
  case 0x100c:
    FUN_0001386c(param_1[0xe]);
    break;
  case 0x100d:
    uVar7 = FUN_00006010(param_2,*piVar6,param_1[3]);
    break;
  case 0x100e:
    uVar7 = FUN_0000df3c(*piVar6,param_1[4],param_1[3]);
    break;
  case 0x100f:
    uVar7 = FUN_0000dfd4(*piVar6,param_1[4],param_1[3],param_1[0xe]);
    break;
  case 0x1010:
  case 0x1011:
    param_1[0xf] = *piVar6;
    param_1[0x10] = param_1[4];
    param_1[0x11] = param_1[6];
    iVar5 = param_1[8];
    goto LAB_0000c2c6;
  case 0x1012:
    param_1[0xf] = *piVar6;
    param_1[0x10] = param_1[4];
    iVar5 = param_1[6];
LAB_0000c2c6:
    param_1[0x15] = iVar5;
LAB_0000c2c8:
    uVar7 = FUN_0000cfc0(piVar8,iVar3);
    break;
  case 0x1013:
    param_1[0xf] = *piVar6;
    param_1[0x13] = param_1[4];
    param_1[0x14] = param_1[6];
    goto LAB_0000c2e6;
  default:
    goto switchD_0000bd72_caseD_c;
  }
  return uVar7;
}



/* FUN_0000c98c @ 0000c98c */

int FUN_0000c98c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_38 [32];
  
  iVar5 = DAT_0000ca50;
  if ((((param_1[4] & 0x1fU) == 0) && ((param_1[3] & 0x1fU) == 0)) && ((param_1[5] & 0x1fU) == 0)) {
    software_interrupt(0x5e);
    iVar1 = param_1[3];
    software_interrupt(0x79);
    iVar2 = param_1[5];
    software_interrupt(0x79);
    uVar3 = param_1[2];
    if (param_1[1] == 0) {
      iVar5 = *DAT_0000ca58;
      for (uVar4 = 0; uVar4 < uVar3 >> 3; uVar4 = uVar4 + 1) {
        *(undefined *)(iVar5 + uVar4 + 0x200) =
             *(undefined *)(*param_1 + ((uVar3 >> 3) - uVar4) + -1);
      }
    }
    else {
      *(int *)(*DAT_0000ca58 + 0x200) = *param_1;
    }
    if (((param_1[8] == 0x10000010) || (iVar5 = FUN_00003f18(0x40,param_1[6]), iVar5 == 0)) &&
       (iVar5 = FUN_00003914(auStack_38,param_1[1],param_1[2],param_1[7],param_1[8],iVar1,iVar2,0x40
                            ), iVar5 == 0)) {
      iVar5 = FUN_00001bf8(auStack_38,param_1[4]);
      if (iVar5 == 0) {
        software_interrupt(0x68);
        iVar5 = FUN_00014198(auStack_38,1,0,0xffffffff);
      }
      else {
        iVar5 = DAT_0000ca50 + -6;
      }
    }
    software_interrupt(0x5f);
  }
  return iVar5;
}



/* FUN_0000ca5c @ 0000ca5c */

int FUN_0000ca5c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined auStack_238 [8];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  int local_200;
  undefined auStack_1c0 [8];
  undefined4 *local_1b8;
  undefined4 local_1b4;
  int local_188;
  undefined auStack_148 [8];
  undefined4 local_140;
  undefined4 local_13c;
  int local_110;
  undefined auStack_d0 [56];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_4c = DAT_0000cb28;
  local_48 = param_3 << 3;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = FUN_000142e8(&local_4c,param_1);
  if (iVar1 == 0) {
    local_58 = 0xc0000000;
    local_1b8 = &local_58;
    local_188 = local_44;
    local_1b4 = 0xc;
    uStack_54 = param_2;
    local_50 = param_3;
    iVar1 = FUN_000161e4(auStack_1c0,&local_1b8,local_34,1);
    iVar2 = 0;
    if (iVar1 == 0) {
      local_94 = param_6;
      local_90 = param_10;
      local_8c = param_3 << 3;
      iVar1 = FUN_00014538(auStack_d0,local_34);
      if (iVar1 == 0) {
        local_40 = local_98;
        iStack_3c = local_44;
        iVar1 = FUN_00014eb4(&local_40,local_34);
        iVar2 = local_98;
        if (iVar1 == 0) {
          local_110 = local_98;
          local_13c = param_5;
          local_140 = param_4;
          FUN_000149ec(auStack_148,&local_140,local_34);
          local_200 = local_98;
          local_230 = param_7;
          uStack_22c = param_8;
          local_228 = param_9;
          uStack_224 = param_8;
          iVar1 = FUN_00014abc(auStack_238,&local_230,local_34,1);
        }
      }
    }
    if (local_44 != 0) {
      FUN_000157cc(local_44,local_34);
    }
    if (iVar2 != 0) {
      local_38 = iVar2;
      FUN_00014c2c(&local_38,local_34);
    }
  }
  return iVar1;
}



/* FUN_0000cb2c @ 0000cb2c */

int FUN_0000cb2c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined auStack_68 [32];
  undefined auStack_48 [32];
  undefined auStack_28 [4];
  
  piVar1 = DAT_0000cc28;
  iVar2 = DAT_0000cc20;
  if (((param_1[4] & 0xfU) == 0) && (param_1[8] == DAT_0000cc24)) {
    iVar2 = param_1[2];
    if (iVar2 == 0x80) {
      uVar9 = 0;
    }
    else if (iVar2 == 0xc0) {
      uVar9 = 1;
    }
    else {
      if (iVar2 != 0x100) {
        return DAT_0000cc20;
      }
      uVar9 = 2;
    }
    iVar3 = param_1[3];
    software_interrupt(0x79);
    iVar4 = param_1[5];
    software_interrupt(0x79);
    uVar5 = param_1[2];
    iVar2 = *DAT_0000cc28;
    for (uVar6 = 0; uVar6 < uVar5 >> 3; uVar6 = uVar6 + 1) {
      *(undefined *)(iVar2 + uVar6 + 0x220) = *(undefined *)(*param_1 + ((uVar5 >> 3) - uVar6) + -1)
      ;
    }
    FUN_000016e4(iVar2 + 0x270,0x10);
    iVar2 = *piVar1;
    uVar5 = 0;
    do {
      iVar7 = 0xf - uVar5;
      iVar8 = iVar2 + uVar5;
      uVar5 = uVar5 + 1;
      *(undefined *)(iVar8 + 0x260) = *(undefined *)(param_1[6] + iVar7);
      piVar1 = DAT_0000cc2c;
    } while (uVar5 < 0x10);
    iVar7 = FUN_000033c8(auStack_68,0x43,*DAT_0000cc2c + 0x260,0x20,0);
    iVar2 = DAT_0000cc20 + -6;
    if ((iVar7 == 0) &&
       (iVar3 = FUN_00003118(auStack_48,iVar4,iVar3,param_1[4],*piVar1 + 0x220,0x43,uVar9,0),
       iVar3 == 0)) {
      software_interrupt(0x5e);
      iVar4 = FUN_000043aa(0,auStack_28,auStack_68,2);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = iVar2;
      }
      iVar2 = iVar3;
      software_interrupt(0x5f);
    }
  }
  return iVar2;
}



/* FUN_0000cc34 @ 0000cc34 */

undefined4 FUN_0000cc34(void)

{
  return DAT_0000cc38;
}



/* FUN_0000cc3c @ 0000cc3c */

int FUN_0000cc3c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000f0d4();
  if ((iVar1 != 0) || (iVar1 = FUN_00002004(), iVar1 != 0)) {
    FUN_000172e8(0x5b,DAT_0000cc60);
  }
  *DAT_0000cc64 = 1;
  return iVar1;
}



/* FUN_0000cc68 @ 0000cc68 */

int FUN_0000cc68(void)

{
  int iVar1;
  
  iVar1 = FUN_0000a120();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = DAT_0000ccb0;
  if (*DAT_0000ccac == '\x01') {
    iVar1 = FUN_00008ac0();
    if (iVar1 == 0x100) {
      iVar1 = DAT_0000ccb0 + 3;
    }
    else {
      iVar1 = FUN_00002288(0x214);
      if (iVar1 == 0) goto LAB_0000cc9c;
    }
  }
  FUN_000172e8(0x5b,DAT_0000ccb4);
LAB_0000cc9c:
  *DAT_0000ccb8 = 1;
  return iVar1;
}



/* FUN_0000ccbc @ 0000ccbc */

int FUN_0000ccbc(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined auStack_34 [36];
  
  iVar1 = DAT_0000cd1c;
  if ((((param_1 + 0x1f & 0xffffffe0) == param_1) && ((param_2 + 0x1f & 0xffffffe0) == param_2)) &&
     ((param_3 + 0xf & 0xfffffff0) == param_3)) {
    software_interrupt(0x68);
    iVar1 = FUN_000032a4(auStack_34,param_1,param_2,param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00014198(auStack_34,1);
    }
    else {
      iVar1 = DAT_0000cd1c + -6;
    }
  }
  return iVar1;
}



/* FUN_0000cd20 @ 0000cd20 */

undefined4 FUN_0000cd20(void)

{
  return DAT_0000cd24;
}



/* FUN_0000cd28 @ 0000cd28 */

undefined4 FUN_0000cd28(void)

{
  return DAT_0000cd2c;
}



/* FUN_0000cd30 @ 0000cd30 */

undefined4 FUN_0000cd30(void)

{
  return DAT_0000cd34;
}



/* FUN_0000cd38 @ 0000cd38 */

int FUN_0000cd38(uint param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined auStack_4c [32];
  undefined4 local_2c [2];
  
  software_interrupt(0x5e);
  iVar1 = DAT_0000cdf8;
  if (((((param_1 + 0x1f & 0xffffffe0) == param_1) && ((param_3 + 0x1f & 0xffffffe0) == param_3)) &&
      ((param_4 + 0x1f & 0xffffffe0) == param_4)) &&
     ((software_interrupt(0x79), param_3 != 0xffffffff &&
      (software_interrupt(0x79), param_1 != 0xffffffff)))) {
    iVar1 = FUN_00003424(auStack_4c,param_3,param_1,param_2,9);
    if (iVar1 == 0) {
      FUN_00004730(param_4,0);
      software_interrupt(0x68);
      iVar1 = FUN_00014198(auStack_4c,1,param_1,param_2);
      if (iVar1 == 0) {
        FUN_00004454(local_2c,0);
        software_interrupt(0x68);
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_2c[0];
        }
      }
    }
    else {
      iVar1 = DAT_0000cdf8 + -6;
    }
  }
  software_interrupt(0x5f);
  return iVar1;
}



/* FUN_0000cee4 @ 0000cee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000cee4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0000a120();
  if (iVar1 != 0) {
    software_interrupt(0x7d);
    _DAT_0001c780 = DAT_0000cf68;
    _DAT_0001c784 = DAT_0000cf6c;
    _DAT_0001c788 = 5;
    _DAT_0001c764 = DAT_0000cf70;
    _DAT_0001c768 = DAT_0000cf74;
    _DAT_0001c76c = DAT_0000cf78;
    _DAT_0001c770 = 0x400000;
    _DAT_0001c880 = 8;
    _DAT_0001c884 = (~param_3 + (param_1 << 0xf | param_2 >> 0x11)) * 2 | 0x407;
    _DAT_0001c7f8 = _DAT_0001c7f8 | 0x14;
    software_interrupt(0x7e);
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_0000cfc0 @ 0000cfc0 */

undefined4
FUN_0000cfc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  software_interrupt(0x5e);
  switch(param_2) {
  case 0x1010:
    uVar3 = param_1[7];
    uVar1 = 1;
    uVar2 = param_1[1];
    goto LAB_0000cff4;
  case 0x1011:
    uVar3 = param_1[7];
    uVar1 = 0;
    uVar2 = param_1[1];
LAB_0000cff4:
    uVar3 = FUN_0000766c(uVar1,param_1[2],param_1[3],uVar2,uVar3);
    break;
  case 0x1012:
    uVar3 = FUN_00007704(param_1[2],param_1[1],param_1[7]);
    break;
  case 0x1013:
    uVar3 = FUN_00007794(param_1[1],param_1[5],param_1[6],param_1[8]);
    break;
  case 0x1014:
    uVar3 = FUN_00007860(*param_1,param_1[1],param_1[5],param_1[8],param_4);
    break;
  case 0x1015:
    uVar3 = FUN_00007928(*param_1,param_1[1],param_1[4],param_1[5],param_1[8]);
  }
  software_interrupt(0x5f);
  return uVar3;
}



/* FUN_0000d044 @ 0000d044 */

undefined4 FUN_0000d044(void)

{
  return DAT_0000d048;
}



/* FUN_0000d04c @ 0000d04c */

undefined4 FUN_0000d04c(void)

{
  return DAT_0000d050;
}



/* FUN_0000d054 @ 0000d054 */

uint FUN_0000d054(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined auStack_b8 [32];
  uint local_98;
  uint local_94;
  int local_90;
  byte local_8c [4];
  byte local_88 [4];
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  undefined auStack_68 [32];
  undefined auStack_48 [32];
  int local_28;
  
  local_6c = *DAT_0000d398;
  local_8c[0] = 0xff;
  local_88[0] = 0xff;
  local_70 = 0;
  piVar8 = (int *)0x0;
  local_80 = 0;
  uVar10 = 0;
  local_78 = 0;
  local_98 = 0;
  local_90 = 0;
  local_94 = 0;
  piVar9 = (int *)*param_1;
  local_7c = param_1[1];
  iVar1 = piVar9[2];
  iVar2 = piVar9[1];
  uVar5 = piVar9[4];
  uVar6 = piVar9[3] & 0xfffffff0;
  software_interrupt(0x66);
  local_84 = piVar9[3] & 0xff;
  uVar3 = DAT_0000d39c;
  local_28 = local_6c;
  if ((uVar5 < 0x44) &&
     (uVar3 = FUN_00006010(local_84,auStack_48,0x20), uVar4 = DAT_0000d3a0, uVar3 == 0)) {
    uVar3 = uVar4;
    if (uVar5 == 0xd) {
      local_78 = *DAT_0000d3a4 + 0xfffU & 0xfffff000;
      uVar10 = FUN_00008ea8(0xd);
    }
    else if (uVar5 != 0x3a) goto LAB_0000d36e;
    if (uVar6 <= uVar10) {
      iVar12 = *DAT_0000d3a8 + local_70;
      iVar11 = DAT_0000d3a8[1] + (uint)CARRY4(*DAT_0000d3a8,local_70);
      uVar3 = FUN_000069c4(iVar1,iVar2,uVar6,local_8c,&local_80,0,1,0xffff,0,0xffffffff);
      bVar13 = uVar3 == 0;
      do {
        if ((!bVar13) ||
           (uVar3 = FUN_000069c4(iVar11,iVar12,uVar10,local_88,&local_90,uVar3,1,0xffff,uVar3,
                                 0xfffffff7), uVar3 != 0)) goto LAB_0000d36e;
        local_74 = local_80 + uVar6 + -0x1000;
        software_interrupt(0x6d);
        uVar3 = (uint)local_8c[0];
        if (local_8c[0] != 0) goto LAB_0000d36e;
        software_interrupt(0x6d);
        uVar3 = (uint)local_88[0];
        if (local_88[0] != 0) goto LAB_0000d36e;
        if ((uVar5 == 0xd) || (uVar5 == 0x3a)) {
          piVar8 = (int *)(local_90 + uVar6 + -0x1008);
        }
        uVar10 = DAT_0000d3a0 - 6;
        if (*piVar9 == 0) {
          uVar3 = FUN_000122d0(uVar5,local_70,0x100000,0);
          if (uVar3 != 0) goto LAB_0000d36e;
          local_78 = uVar6 - 0x1000;
          iVar1 = FUN_000032d8(auStack_b8,0,local_94,0,2,0,local_98,0,2,0,local_78,1);
          uVar3 = uVar10;
          if ((((iVar1 != 0) || (uVar3 = FUN_00014198(auStack_b8,1), uVar3 != 0)) ||
              (uVar4 = FUN_00009198(local_84,DAT_0000d3b0,auStack_48,0x20,local_90,local_78,
                                    auStack_68,0x20), uVar3 = uVar4, uVar4 != 0)) ||
             (iVar1 = FUN_0000ae74(local_74,auStack_68,0x20), uVar3 = uVar10, iVar1 != 0))
          goto LAB_0000d36e;
          if ((uVar5 == 0xd) || (uVar5 == 0x3a)) {
            uVar3 = *piVar8 + 0xfffU & 0xfffff000;
            iVar1 = (CARRY4(local_98,uVar6) - 1) + (uint)CARRY4(local_98 + uVar6,DAT_0000d3b4);
            iVar1 = FUN_000032d8(auStack_b8,iVar1,local_94 + uVar3,CARRY4(local_94,uVar3),2,0,
                                 local_98 + uVar6 + DAT_0000d3b4,iVar1,2,0,0xfe0,1);
            bVar13 = iVar1 == 0;
            if (!bVar13) goto LAB_0000d256;
            uVar4 = FUN_00014198(auStack_b8,1);
            uVar3 = uVar4;
            if (uVar4 != 0) goto LAB_0000d36e;
            if (uVar5 == 0xd) {
              software_interrupt(0x7c);
              uVar4 = FUN_000171a4(DAT_0000d3bc,1,4);
              uVar3 = uVar4;
              if (uVar4 != 0) goto LAB_0000d36e;
              *DAT_0000d3a4 = *piVar8;
              *(int *)(DAT_0000d3ac + 0x34) = piVar8[1];
            }
          }
          *(undefined *)(DAT_0000d3b8 + uVar5) = 1;
          goto LAB_0000d362;
        }
        if (uVar5 == 0xd) {
          *piVar8 = *DAT_0000d3a4;
          iVar1 = *(int *)(DAT_0000d3ac + 0x34);
LAB_0000d1a8:
          piVar8[1] = iVar1;
        }
        else if (uVar5 == 0x3a) {
          *piVar8 = DAT_0000d3a4[7];
          iVar1 = *(int *)(DAT_0000d3ac + 0xe8);
          goto LAB_0000d1a8;
        }
        software_interrupt(0x68);
        piVar9 = (int *)(uVar6 - 0x1000);
        uVar3 = FUN_00009198(local_84,DAT_0000d3b0,auStack_48,0x20,local_90,piVar9,auStack_68,0x20);
        bVar13 = uVar3 == 0;
      } while (!bVar13);
      piVar8 = (int *)0x0;
      uVar7 = 0;
      iVar1 = FUN_000032d8(auStack_b8,2,local_98,0,2,0,local_94,0,2,0,piVar9,1);
      uVar3 = uVar10;
      if ((iVar1 == 0) && (uVar4 = FUN_00014198(auStack_b8,1), uVar3 = uVar4, uVar4 == 0)) {
        FUN_000015e4(local_74,auStack_68,0x20);
        if ((uVar5 == 0xd) || (uVar5 == 0x3a)) {
          uVar3 = local_98 + uVar6;
          iVar1 = FUN_000032d8(auStack_b8,uVar3,uVar3 + DAT_0000d3b4,
                               (CARRY4(local_98,uVar6) - 1) + (uint)CARRY4(uVar3,DAT_0000d3b4),2,0,
                               local_94 + local_78,CARRY4(local_94,local_78),2,0,0xfe0,1);
          bVar13 = iVar1 == 0;
LAB_0000d256:
          uVar7 = SUB41(piVar8,0);
          uVar3 = uVar10;
          if ((!bVar13) || (uVar4 = FUN_00014198(auStack_b8,1), uVar3 = uVar4, uVar4 != 0))
          goto LAB_0000d36e;
        }
        *(undefined *)(DAT_0000d3b8 + uVar5) = uVar7;
LAB_0000d362:
        *(int *)(local_7c + 8) = iVar12;
        *(int *)(local_7c + 0xc) = iVar11;
        uVar3 = uVar4;
      }
    }
  }
LAB_0000d36e:
  if (local_8c[0] != 0xff) {
    software_interrupt(0x6c);
  }
  if (local_88[0] != 0xff) {
    software_interrupt(0x6c);
  }
  if (local_28 != local_6c) {
    FUN_00001a20();
  }
  return uVar3;
}



/* FUN_0000d3c0 @ 0000d3c0 */

uint FUN_0000d3c0(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  uint local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  int local_398;
  int local_390 [3];
  undefined *local_384;
  undefined4 uStack_380;
  int iStack_37c;
  undefined auStack_378 [512];
  undefined auStack_178 [24];
  uint local_160;
  int local_148;
  undefined auStack_140 [64];
  uint local_100;
  undefined auStack_78 [64];
  int local_38;
  int *piStack_30;
  int local_2c;
  undefined4 local_28;
  
  local_398 = *DAT_0000d5bc;
  iVar7 = 0x100;
  local_3a4 = 0;
  local_3a0 = 0;
  puVar5 = auStack_178;
  local_39c = 0;
  local_3b4 = 0x100;
  local_3b0 = 0;
  local_3ac = 0;
  local_3a8 = 0;
  local_38 = local_398;
  piStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  uVar1 = FUN_00005360(puVar5,0x100,*param_1);
  uVar3 = uVar1;
  if (uVar1 != 0) goto LAB_0000d5a6;
  software_interrupt(0x87);
  if (local_148 == 0) {
    if ((uint)param_1[3] < 0x21) {
      uVar3 = FUN_000016e4(param_1[2]);
    }
    else {
      uVar3 = 0;
      uVar1 = DAT_0000d5c4;
    }
    goto LAB_0000d5a6;
  }
  if ((local_2c != 0) && (uVar3 = local_160, uVar1 = DAT_0000d5c0, local_160 != 1))
  goto LAB_0000d5a6;
  if ((local_100 & 5) == 0) {
    uVar1 = FUN_0000a1ac(puVar5,&local_3a8,&local_3a0,&local_3a4,&local_39c,&local_3b4,0xffffffff);
    uVar3 = uVar1;
    if (uVar1 != 0) goto LAB_0000d5a6;
    puVar5 = puVar5 + local_3a8 * 0x100;
    uVar1 = FUN_00008d20(auStack_140 + local_3a8 * 0x100,&local_3b0);
    uVar3 = uVar1;
    if (uVar1 != 0) goto LAB_0000d5a6;
  }
  if (*(int *)(puVar5 + 0x34) == 0) {
    uVar2 = 0x20;
    iVar9 = DAT_0000d5c8 + -1;
  }
  else {
    uVar2 = 0x30;
    iVar7 = 0x200;
    iVar9 = DAT_0000d5c8;
  }
  if (*(int *)(puVar5 + 0x48) == 0) {
    uVar3 = *(uint *)(puVar5 + 0x14);
  }
  else {
    uVar3 = *(int *)(puVar5 + 0x54) + 0xfU & 0xfffffff0;
  }
  uVar1 = DAT_0000d5cc;
  if (((uint)param_1[1] < uVar3) || ((uint)param_1[1] < uVar3 + iVar7 + 0x100)) goto LAB_0000d5a6;
  iVar8 = uVar3 + 0x100;
  iVar6 = *param_1 + local_3a8 * 0x100 + iVar8;
  uVar4 = FUN_000067fa(iVar6,0x2000,&local_3ac);
  if (uVar4 == 0) {
    uVar3 = uVar4;
    uVar1 = DAT_0000d5c4 + 6;
    goto LAB_0000d5a6;
  }
  if (local_2c == 0) {
    if (((*(uint *)(puVar5 + 0x78) & 5) == 0) ||
       (uVar1 = FUN_00016cc8(iVar6 + iVar7,uVar4 + iVar7,&local_3a0,&local_3a4,&local_39c,&local_3b4
                             ,&local_3b0), uVar1 == 0)) goto LAB_0000d4fa;
  }
  else {
    iVar6 = FUN_00001550(puVar5 + 0x38,DAT_0000d5d0,0x10);
    if (iVar6 == 0) {
LAB_0000d4fa:
      local_390[0] = *param_1 + local_3a8 * 0x100;
      local_390[1] = 0;
      local_384 = auStack_78;
      local_390[2] = iVar8;
      uStack_380 = uVar2;
      iStack_37c = iVar9;
      uVar1 = FUN_0000eb08(local_390,auStack_378);
      if (uVar1 == 0) {
        FUN_000015e4(auStack_378,uVar4,iVar7);
        uVar1 = FUN_00010804(auStack_78,uVar2,local_39c,local_3b4,local_3a0,local_3a4,auStack_378);
        if ((uVar1 == 0) &&
           (uVar1 = FUN_00009094(local_28,DAT_0000d5c8 + -1,local_39c,local_3b4,param_1[2],
                                 param_1[3]), uVar1 == 0)) {
          *(undefined4 *)param_1[4] = local_3b0;
          param_1[1] = iVar8;
          for (; (local_3a8 == 0 && (puVar5[0x7f] != '\0')); puVar5 = puVar5 + 0x100) {
            local_3a8 = 1;
          }
          uVar3 = local_3a8;
          if (local_3a8 == 1) {
            uVar1 = DAT_0000d5c0 - 5;
          }
          else if (*(int *)(puVar5 + 0x18) == 1) {
            uVar1 = FUN_00005dec(puVar5,*param_1 + local_3a8 * 0x100);
            uVar3 = uVar1;
          }
          if (uVar4 == 0) goto LAB_0000d5a6;
        }
      }
    }
    else {
      uVar1 = DAT_0000d5c0 - 8;
    }
  }
  software_interrupt(99);
  uVar3 = uVar4;
LAB_0000d5a6:
  if (local_38 != local_398) {
    FUN_00001a20(uVar3);
  }
  return uVar1;
}



/* FUN_0000d5f0 @ 0000d5f0 */

undefined4 FUN_0000d5f0(void)

{
  return DAT_0000d5f4;
}



/* FUN_0000d5f8 @ 0000d5f8 */

undefined4 FUN_0000d5f8(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  switch(*param_1) {
  case 0:
    puVar1 = DAT_0000d668;
    break;
  case 1:
    puVar1 = DAT_0000d66c;
    break;
  case 2:
    puVar1 = DAT_0000d670;
    break;
  case 3:
    puVar1 = DAT_0000d674;
    break;
  case 4:
    uVar2 = *(uint *)(DAT_0000d678 + 0x238);
    goto LAB_0000d61e;
  default:
    return DAT_0000d690;
  case 6:
    FUN_00013dd8(param_1 + 1);
    return 0;
  case 7:
    puVar1 = DAT_0000d67c;
    break;
  case 8:
    puVar1 = DAT_0000d680;
    break;
  case 9:
    puVar1 = DAT_0000d684;
    break;
  case 10:
    puVar1 = DAT_0000d688;
    break;
  case 0xb:
    FUN_00013de4(param_1 + 1);
    return 0;
  case 0xc:
    uVar2 = *(uint *)(DAT_0000d678 + 0x808);
    goto LAB_0000d61e;
  case 0xe:
    uVar2 = (uint)*DAT_0000d68c;
    goto LAB_0000d61e;
  }
  uVar2 = *puVar1;
LAB_0000d61e:
  param_1[1] = uVar2;
  return 0;
}



/* FUN_0000d694 @ 0000d694 */

undefined4 FUN_0000d694(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0000d6bc;
  uVar2 = 0;
  *param_1 = 0;
  do {
    if ((uint)*(byte *)(DAT_0000d6b8 + uVar2 * 8) == *puVar1) {
      *param_1 = 1;
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return 0;
}



/* FUN_0000d6d0 @ 0000d6d0 */

undefined4 FUN_0000d6d0(void)

{
  return DAT_0000d6d4;
}



/* FUN_0000d788 @ 0000d788 */

int FUN_0000d788(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char local_20 [4];
  undefined4 *local_1c;
  
  local_20[0] = -1;
  iVar1 = DAT_0000d814;
  if (*DAT_0000d80c != 0) {
    uVar3 = DAT_0000d80c[1] + *DAT_0000d810;
    uVar2 = *DAT_0000d80c + 0x3fU & 0xffffffc0;
    iVar1 = FUN_000069c4(DAT_0000d810[1] + (uint)CARRY4(DAT_0000d80c[1],*DAT_0000d810) +
                         (uint)CARRY4(uVar3,uVar2),uVar3 + uVar2,0x1000,local_20,&local_1c,0,1,
                         0xffff,0,0xfffffff7);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        *local_1c = 0;
        local_1c[0x10] = 0;
      }
      else {
        *param_1 = *local_1c;
        *param_2 = local_1c[0x10];
      }
    }
    if (local_20[0] != -1) {
      software_interrupt(0x6c);
    }
  }
  return iVar1;
}



/* FUN_0000d834 @ 0000d834 */

undefined4 FUN_0000d834(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(DAT_0000d854 + 2) != '\0') {
    uVar2 = *(undefined4 *)(DAT_0000d858 + 0x38);
    uVar1 = *(undefined4 *)(DAT_0000d858 + 0x3c);
    *param_1 = *(undefined4 *)(DAT_0000d858 + 0x34);
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    return 0;
  }
  return DAT_0000d85c;
}



/* FUN_0000d860 @ 0000d860 */

undefined4 FUN_0000d860(void)

{
  return DAT_0000d864;
}



/* FUN_0000d870 @ 0000d870 */

undefined4 FUN_0000d870(void)

{
  return DAT_0000d874;
}



/* FUN_0000d878 @ 0000d878 */

undefined4 FUN_0000d878(void)

{
  return DAT_0000d87c;
}



/* FUN_0000d8a4 @ 0000d8a4 */

undefined4 FUN_0000d8a4(undefined4 *param_1)

{
  undefined *puVar1;
  
  *(uint *)(*DAT_0000d8fc + 0x918) = *(uint *)(*DAT_0000d8fc + 0x918) | 0xc0000000;
  software_interrupt(0x59);
  *param_1 = 0x59;
  puVar1 = DAT_0000d904;
  param_1[1] = *(undefined4 *)(DAT_0000d900 + 0x7cc);
  param_1[2] = *(undefined4 *)(DAT_0000d900 + 0x7d4);
  param_1[3] = *(undefined4 *)(DAT_0000d900 + 0x7d8);
  param_1[4] = *(undefined4 *)(DAT_0000d900 + 2000);
  param_1[5] = *(undefined4 *)(DAT_0000d900 + 0x80c);
  param_1[6] = *(undefined4 *)(DAT_0000d900 + 0x810);
  *puVar1 = (char)param_1[7];
  return 0;
}



/* FUN_0000d908 @ 0000d908 */

undefined4 FUN_0000d908(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_11c [7];
  undefined auStack_100 [232];
  int local_18;
  
  iVar2 = *DAT_0000d950;
  local_18 = iVar2;
  FUN_000016e4(auStack_100,0xe0);
  local_11c[0] = *param_1;
  uVar1 = FUN_000060f8(param_2,param_1[1],local_11c,4,param_1[2],param_1[3],auStack_100);
  if (local_18 != iVar2) {
    FUN_00001a20();
  }
  return uVar1;
}



/* FUN_0000d954 @ 0000d954 */

int FUN_0000d954(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined auStack_50 [4];
  int local_4c;
  int local_28;
  int local_24 [2];
  
  uVar6 = 0;
  local_28 = 0;
  local_24[0] = 0;
  FUN_00001728(auStack_50,0x28);
  iVar1 = FUN_000081ea(&local_28,local_24);
  iVar2 = DAT_0000d9e8;
  if (iVar1 == 0) {
    if (local_28 == 0) {
      uVar4 = (param_1 << 0x10) >> 0x1c;
    }
    else {
      uVar4 = 0;
    }
    if (local_24[0] == 0) {
      uVar5 = param_1 & 0xff;
    }
    else {
      uVar5 = 0;
    }
    uVar3 = param_1 >> 0x10;
    if (-1 < (int)(uVar3 << 0x1e)) {
      uVar6 = (param_1 << 0x14) >> 0x1c;
    }
    if ((int)(uVar3 << 0x1d) < 0) {
      local_4c = 1;
      iVar2 = FUN_00007da4(2,auStack_50,0);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    local_4c = (uVar5 << 3 | uVar4 << 0xb | uVar6 << 0xf | ((int)(uVar3 << 0x1e) >> 0x1f) * -2 |
               (uVar3 & 1) << 2) + 1;
    iVar2 = FUN_00007da4(1,auStack_50);
    if (iVar2 == 0) {
      iVar2 = FUN_00008324();
    }
  }
  return iVar2;
}



/* FUN_0000d9ec @ 0000d9ec */

void FUN_0000d9ec(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  iVar1 = FUN_0000f858(&local_20,0x11e0,0x40);
  if (iVar1 == 0) {
    if (-1 < (int)((local_1c | (local_20 | local_1c) >> 0x10) << 0x1b)) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      uVar2 = FUN_00011eca(1,1,0x11f4,3,0x10,&local_20);
      iVar1 = FUN_0000906c(0x8f,uVar2,&local_20);
      if (iVar1 != 0) {
        return;
      }
    }
    if (param_1 < 0x20) {
      uVar3 = (1 << (param_1 & 0xff)) - 1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    iVar1 = FUN_0000f858(&local_20,0x1160,0x60);
    if ((iVar1 == 0) && ((local_20 | local_1c | local_18) < uVar3)) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      uVar2 = FUN_00011eca(uVar3,0x20,0x1160,3,0x20,&local_20);
      FUN_0000906c(0x8b,uVar2,&local_20);
    }
  }
  return;
}



/* FUN_0000da94 @ 0000da94 */

uint FUN_0000da94(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54 [4];
  undefined4 local_50;
  int local_4c;
  byte local_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  
  uVar4 = DAT_0000dd1c;
  bVar1 = false;
  local_4c = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_6c = 0;
  local_68 = 0;
  local_74 = 0;
  local_70 = 0;
  local_44[0] = 0xff;
  local_54[0] = '\x01';
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  puVar7 = (undefined4 *)*param_1;
  iVar2 = param_1[1];
  uVar9 = param_1[2];
  uVar8 = param_1[3];
  uVar6 = puVar7[3];
  if ((uVar6 == 5) || (uVar6 == 6)) {
    return 0;
  }
  if (0x43 < uVar6) {
    return DAT_0000dd18;
  }
  if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
    *(uint *)(*DAT_0000dd20 + 0x50) = *(uint *)(*DAT_0000dd20 + 0x50) | 0xdfce;
    return uVar4;
  }
  if (((uVar6 != 0x31) && (uVar6 != 0x32)) && ((uint)puVar7[2] < 0x100)) {
    return DAT_0000dd1c + 6;
  }
  if (uVar8 != 0xffff) {
    uVar10 = FUN_0000a668(uVar6);
    uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 == 0) goto LAB_0000dcba;
  }
  if (uVar6 == 0x40) {
    uVar4 = FUN_0000a608(puVar7,uVar9);
    goto LAB_0000dcba;
  }
  if ((uVar6 == 0x3c) && (iVar3 = FUN_00008e6c(), iVar3 != 1)) {
    uVar4 = FUN_0000693c(puVar7[1],*puVar7,puVar7[2],local_44);
  }
  else {
    uVar4 = FUN_000069c4(puVar7[1],*puVar7,puVar7[2],local_44);
  }
  if (uVar4 != 0) goto LAB_0000dcba;
  uVar4 = (uint)local_44[0];
  software_interrupt(0x6d);
  if (uVar4 != 0) goto LAB_0000dcba;
  if (uVar6 == 0x12) {
    bVar1 = true;
    goto LAB_0000dcba;
  }
  if ((uVar8 == 0xffff) && ((uVar6 == 0x31 || (uVar6 == 0x32)))) {
    uVar4 = FUN_0000b7cc(uVar6,local_50,puVar7[2],0);
    goto LAB_0000dcba;
  }
  uVar4 = FUN_0000a9c0(uVar6,uVar8,local_54,&local_80);
  if (uVar4 != 0) goto LAB_0000dcba;
  if (local_54[0] != '\0') {
    uVar4 = DAT_0000dd24;
    if (((uVar6 != 0x3c) && (*DAT_0000dd28 == 0 && DAT_0000dd28[1] == 0)) ||
       ((uVar8 != 0xffff &&
        (piVar5 = (int *)(DAT_0000dd2c + uVar8 * 8), *piVar5 == 0 && piVar5[1] == 0))))
    goto LAB_0000dcba;
    FUN_00001728(&local_40,0x18);
    local_40 = local_7c;
    uStack_3c = local_80;
    local_38 = local_70;
    uStack_34 = 0;
    local_30 = 0;
    software_interrupt(0x89);
    uStack_2c = uVar8;
    if (&stack0x00000000 != (undefined *)0x40) {
      uVar4 = DAT_0000dd1c - 10;
      goto LAB_0000dcba;
    }
    local_4c = local_78;
  }
  uVar4 = FUN_00016e74(uVar6,local_4c,local_70,local_5c);
  if ((uVar4 != 0) || (uVar4 = FUN_00013630(uVar6,uVar8,local_58), uVar4 != 0)) goto LAB_0000dcba;
  if (uVar6 == 0x3c) {
    uVar4 = FUN_00016c8c(local_4c,local_64);
LAB_0000dc86:
    if (uVar4 != 0) goto LAB_0000dcba;
  }
  else if (uVar6 == 0x16) {
    uVar4 = FUN_0000a720(DAT_0000dd30,local_64);
    goto LAB_0000dc86;
  }
  if (local_54[0] != '\0') {
    *(undefined4 *)(iVar2 + 8) = local_80;
    *(undefined4 *)(iVar2 + 0xc) = local_7c;
    FUN_00010dc8(local_80,local_7c,local_64,uVar6);
    FUN_00011660(uVar6,local_60,local_80,local_7c);
  }
LAB_0000dcba:
  if (local_74 != 0) {
    software_interrupt(0x7e);
  }
  if (local_78 != 0) {
    software_interrupt(0x8a);
  }
  if (local_44[0] != 0xff) {
    software_interrupt(0x6c);
  }
  if ((!bVar1) && (uVar4 == 0)) {
    FUN_0001364a(uVar6,uVar8,local_58);
    FUN_000083c0(local_58,uVar6,0,uVar8 & 0xffff);
    uVar4 = FUN_0000fbe8(uVar6,uVar8,local_64);
  }
  return uVar4;
}



/* FUN_0000dd34 @ 0000dd34 */

int FUN_0000dd34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined4 *local_24;
  
  local_28 = 0;
  iVar1 = DAT_0000dddc;
  if (*DAT_0000ddd4 != '\x18') {
    if (*DAT_0000ddd8 == '\0') {
      iVar1 = DAT_0000dddc + -3;
    }
    else {
      local_24 = param_4;
      iVar1 = FUN_00007b94(param_1,&local_28);
      if (iVar1 == 0) {
        iVar4 = local_28 + 0x100;
        iVar3 = *(int *)(local_28 + 0x14);
        if (DAT_0000dde0 < (uint)(iVar4 + iVar3)) {
          iVar1 = DAT_0000dddc + -6;
        }
        else {
          iVar1 = FUN_00008e78(param_1,&local_24);
          if (iVar1 == 0) {
            if (param_1 == 0x12) {
              software_interrupt(0x7d);
              if (local_24 == (undefined4 *)0x0) {
                return DAT_0000dddc + -7;
              }
              *local_24 = 0xc000;
              puVar2 = local_24 + 1;
            }
            else {
              software_interrupt(0x7d);
              puVar2 = local_24;
              if (local_24 == (undefined4 *)0x0) {
                return DAT_0000dddc + -7;
              }
            }
            FUN_0000a742(iVar4,puVar2,iVar3,param_1);
            software_interrupt(0x7e);
          }
        }
      }
    }
  }
  return iVar1;
}



/* FUN_0000dde4 @ 0000dde4 */

/* WARNING: Type propagation algorithm not settling */

int FUN_0000dde4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  int *local_60;
  char local_5c [4];
  char local_58 [4];
  int local_54;
  undefined4 local_50;
  int local_4c [2];
  undefined auStack_44 [32];
  int local_24;
  
  iVar2 = *DAT_0000deb4;
  local_5c[0] = -1;
  local_58[0] = -1;
  local_4c[1] = 0;
  software_interrupt(0x66);
  local_24 = iVar2;
  iVar1 = FUN_000069c4(*param_1,param_1[1],param_1[2],local_5c,&local_54,0,0,0xffff,0,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = FUN_000069c4(param_1[3],param_1[4],param_1[5],local_58,&local_50,0,0,0xffff,0,0xffffffff
                        );
    if (iVar1 == 0) {
      software_interrupt(0x79);
      local_70 = local_54;
      local_6c = param_1[2];
      local_68 = auStack_44;
      local_64 = 0x20;
      local_60 = local_4c + 1;
      iVar1 = FUN_0000d3c0(&local_70,0,0xff);
      if (iVar1 == 0) {
        iVar1 = FUN_0000cd38(local_54 + 0x100,*(undefined4 *)(local_54 + 0x54),local_50,param_1[5],
                             local_4c);
        if ((iVar1 == 0) && (*(int *)(local_54 + 0x50) != local_4c[0])) {
          iVar1 = DAT_0000deb8;
        }
      }
    }
  }
  if (local_5c[0] != -1) {
    software_interrupt(0x6c);
  }
  if (local_58[0] != -1) {
    software_interrupt(0x6c);
  }
  if (local_24 != iVar2) {
    FUN_00001a20();
  }
  return iVar1;
}



/* FUN_0000debc @ 0000debc */

undefined4 FUN_0000debc(void)

{
  return DAT_0000dec0;
}



/* FUN_0000dec4 @ 0000dec4 */

void FUN_0000dec4(uint *param_1)

{
  int iVar1;
  uint local_18;
  byte local_14 [8];
  
  iVar1 = FUN_000069c4(*(int *)(DAT_0000df14 + 0x7d8) +
                       (uint)(0xff9fffff < *(uint *)(DAT_0000df14 + 0x7d4)),
                       *(uint *)(DAT_0000df14 + 0x7d4) + 0x600000,0x200000,local_14,&local_18,0,0,
                       0xffff,0,0xffffffff);
  if (iVar1 == 0) {
    param_1[1] = local_18;
    *param_1 = (uint)local_14[0];
  }
  return;
}



/* FUN_0000df18 @ 0000df18 */

void FUN_0000df18(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_30 [40];
  
  FUN_000015e4(auStack_30,param_2,0x28);
  iVar1 = FUN_00007da4(param_1,auStack_30,0);
  if (iVar1 == 0) {
    FUN_00008324();
  }
  return;
}



/* FUN_0000df3c @ 0000df3c */

int FUN_0000df3c(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined auStack_3c [32];
  
  software_interrupt(0x79);
  iVar1 = DAT_0000dfd0;
  if ((((param_1 != 0xffffffff) && (software_interrupt(0x79), param_2 != -1)) &&
      ((param_1 + 0xf & 0xfffffff0) == param_1)) && ((param_3 + 0xf & 0xfffffff0) == param_3)) {
    software_interrupt(0x68);
    iVar1 = FUN_000032a4(auStack_3c,param_1,param_2,param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_00014198(auStack_3c,1);
      if ((iVar1 == 0) && (param_3 < 0x2000)) {
        software_interrupt(0x68);
      }
    }
    else {
      iVar1 = DAT_0000dfd0 + -6;
    }
  }
  return iVar1;
}



/* FUN_0000dfd4 @ 0000dfd4 */

int FUN_0000dfd4(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_44 [32];
  undefined auStack_24 [8];
  
  software_interrupt(0x79);
  iVar3 = DAT_0000e06c;
  if ((((param_1 != 0xffffffff) && (software_interrupt(0x79), param_2 != -1)) &&
      ((param_1 + 0xf & 0xfffffff0) == param_1)) && ((param_3 + 0xf & 0xfffffff0) == param_3)) {
    iVar3 = DAT_0000e06c + -6;
    if (param_4 == 0) {
      iVar1 = FUN_000032a4(auStack_44,param_1,param_2,param_3,1);
      if (iVar1 == 0) {
        iVar3 = FUN_00014198(auStack_44,1);
      }
    }
    else {
      iVar1 = FUN_000032a4(auStack_44,param_1,param_2,param_3,0);
      if (iVar1 == 0) {
        software_interrupt(0x5e);
        iVar2 = FUN_000043aa(0,auStack_24,auStack_44,1);
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        software_interrupt(0x5f);
      }
    }
  }
  return iVar3;
}



/* FUN_0000e074 @ 0000e074 */

void FUN_0000e074(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  pcVar1 = DAT_0000e0f4;
  if (((byte)(DAT_0000e0f4[3] & ~DAT_0000e0f4[4]) != 0) ||
     ((DAT_0000e0f4[3] == 0 && (iVar2 = FUN_00009de8(), iVar2 == 0)))) {
    if ((pcVar1[2] == '\0') && (*(int *)(*DAT_0000e0f8 + 0x50) << 0x1d < 0)) {
      software_interrupt(0x7c);
      if (DAT_0000e0fc != 0) {
        *param_1 = 1;
        return;
      }
    }
    else {
      pcVar1[2] = '\x01';
    }
  }
  iVar2 = DAT_0000e100;
  if (*pcVar1 == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
  *param_1 = uVar3;
  uVar5 = 0;
  do {
    iVar4 = iVar2 + uVar5 * 0x100000;
    software_interrupt(0x7c);
    if (iVar4 != 0) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  if (iVar4 == 0) {
    uVar5 = 0;
    while (software_interrupt(0x7c), DAT_0000e100 + -4 + uVar5 * 0x100000 == 0) {
      uVar5 = uVar5 + 1;
      if (1 < uVar5) {
        return;
      }
    }
  }
  return;
}



/* FUN_0000e104 @ 0000e104 */

void FUN_0000e104(uint param_1,int *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_30;
  byte local_2c [8];
  
  puVar1 = DAT_0000e260;
  uVar7 = 0;
  local_30 = (uint *)0x0;
  *(undefined4 *)(*DAT_0000e260 + 0x54) = 0;
  puVar2 = DAT_0000e264;
  if ((DAT_0000e264[4] != '\0') ||
     ((DAT_0000e264[3] == '\0' && (iVar4 = FUN_00009de8(), iVar4 != 0)))) {
    *param_2 = 0x5e;
    *(uint *)(*puVar1 + 0x54) = *(uint *)(*puVar1 + 0x54) | 0xd0000;
    return;
  }
  if (puVar2[2] != '\0') {
    iVar4 = 0x52;
    goto LAB_0000e14c;
  }
  if (-1 < *(int *)(*DAT_0000e268 + 0x50) << 0x1d) {
    *puVar2 = 1;
    iVar4 = 0x52;
    puVar2[1] = 1;
    *(uint *)(*puVar1 + 0x54) = *(uint *)(*puVar1 + 0x54) | 0xc0000;
    goto LAB_0000e14c;
  }
  uVar9 = (param_1 >> 8) << 0x14 | ((param_1 << 0x18) >> 0x1b) << 0xf;
  uVar5 = FUN_000069c4(0xfffe,uVar9 | (param_1 & 7) << 0xc | 0x10000000,4,local_2c,&local_30,1,0,
                       0xffff,0,0xfffffffb);
  if (uVar5 == 0) {
    uVar8 = *local_30 >> 0x10;
    software_interrupt(0x6c);
    iVar4 = FUN_0000f0ac(uVar8);
    if (iVar4 == 0) {
      uVar5 = *puVar1;
      iVar4 = 0x4d;
      *(uint *)(uVar5 + 0x54) = *(uint *)(uVar5 + 0x54) | 0x4000000;
    }
    else {
      uVar3 = FUN_0000f08c(uVar8);
      *puVar2 = uVar3;
      uVar3 = FUN_0000f070(uVar8);
      puVar2[1] = uVar3;
      puVar2[5] = 0;
      uVar5 = FUN_000069c4(0xfffe,uVar9 | 0x10002000,0x100,local_2c,&local_30,1,0,0xffff,0,
                           0xfffffffb);
      if (uVar5 != 0) goto LAB_0000e19c;
      while (puVar2[2] == '\0') {
        if (99 < uVar7) {
          iVar4 = 0x50;
          goto LAB_0000e220;
        }
        uVar3 = FUN_0000eeec(local_30);
        uVar7 = uVar7 + 1;
        puVar2[2] = uVar3;
      }
      *(uint *)(*puVar1 + 0x54) = *(uint *)(*puVar1 + 0x54) | uVar8 | 0xa0000;
      iVar4 = 0x4f;
LAB_0000e220:
      uVar5 = (uint)local_2c[0];
      software_interrupt(0x6c);
      if (iVar4 == 0x4f) goto LAB_0000e14c;
    }
  }
  else {
LAB_0000e19c:
    iVar4 = 0x4e;
  }
  iVar6 = FUN_00009f30(uVar5);
  if (iVar6 != 0) {
    iVar4 = 0x4f;
    puVar2[2] = 1;
  }
LAB_0000e14c:
  *param_2 = iVar4;
  return;
}



/* FUN_0000e280 @ 0000e280 */

void FUN_0000e280(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_28;
  uint local_24;
  uint local_20;
  
  puVar1 = DAT_0000e308;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar2 = FUN_0000f8f8(*DAT_0000e308,DAT_0000e308[1],&local_28,1 << (DAT_0000e308[3] & 0xff));
  if (((iVar2 == 0) &&
      (iVar2 = FUN_0000f8f8(puVar1[-6],puVar1[-5],&local_24,1 << (puVar1[-3] & 0xff)), iVar2 == 0))
     && (iVar2 = FUN_0000f8f8(puVar1[6],puVar1[7],&local_20,1 << (puVar1[9] & 0xff)), iVar2 == 0)) {
    if ((((puVar1[-2] & local_24) == puVar1[-1]) && ((puVar1[4] & local_28) == puVar1[5])) &&
       ((puVar1[10] & local_20) == puVar1[0xb])) {
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
    }
  }
  return;
}



/* FUN_0000e30c @ 0000e30c */

undefined4 FUN_0000e30c(void)

{
  return DAT_0000e310;
}



/* FUN_0000e330 @ 0000e330 */

undefined4 FUN_0000e330(void)

{
  return DAT_0000e334;
}



/* FUN_0000e338 @ 0000e338 */

undefined4 FUN_0000e338(void)

{
  return DAT_0000e33c;
}



/* FUN_0000e394 @ 0000e394 */

undefined4 FUN_0000e394(void)

{
  return DAT_0000e398;
}



/* FUN_0000e39c @ 0000e39c */

undefined4 FUN_0000e39c(void)

{
  return DAT_0000e3a0;
}



/* FUN_0000e3a4 @ 0000e3a4 */

undefined4 FUN_0000e3a4(void)

{
  return DAT_0000e3a8;
}



/* FUN_0000e3ac @ 0000e3ac */

int FUN_0000e3ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0000e3dc;
  if ((((param_1 == 0x12) && (iVar1 = FUN_00008ac0(), iVar1 != 0x100)) &&
      (iVar2 = FUN_00002288(0x221), iVar2 == 0)) && (iVar2 = FUN_000055e8(), iVar2 == 0)) {
    iVar2 = FUN_000057cc();
  }
  return iVar2;
}



/* FUN_0000e3e0 @ 0000e3e0 */

undefined4 FUN_0000e3e0(int *param_1)

{
  if (*param_1 != 7) {
    return DAT_0000e3f8;
  }
  software_interrupt(0x59);
  param_1[1] = 0x27;
  return 0;
}



/* FUN_0000e3fc @ 0000e3fc */

int FUN_0000e3fc(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_2c;
  
  iVar1 = DAT_0000e53c;
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  local_50 = 0;
  local_4c = 0;
  local_2c = param_2 & 0xff;
  local_48 = 0;
  if (0x16 < param_1) {
    return DAT_0000e544;
  }
  if (*(int *)(DAT_0000e53c + param_1 * 8) == 0xff) {
    return DAT_0000e544;
  }
  if (param_3 != 0) {
    software_interrupt(0x5e);
    uVar7 = FUN_0000fb3c(1000);
    iVar4 = (int)uVar7;
    if (iVar4 != 0) goto LAB_0000e50c;
  }
  FUN_0000f904(param_1,8,&local_4c);
  uVar7 = CONCAT44(extraout_r1,iVar4);
  if ((local_4c & 1) != 0) {
    if (param_3 != 0) {
      software_interrupt(0x66);
      iVar3 = *(int *)(iVar1 + param_1 * 8);
      uVar7 = CONCAT44(iVar3,iVar4);
      if (iVar3 != 0) goto LAB_0000e50c;
    }
    iVar3 = DAT_0000e53c + param_1 * 8;
    if (local_2c != 0) {
      FUN_0000f904(param_1,0,&local_50);
      uVar2 = local_50;
      iVar4 = local_50 * 0x10000;
      local_2c = local_50 >> 0x10;
      FUN_0000f904(param_1,4,&local_50);
      iVar5 = (local_50 + 1) * 0x10000 + uVar2 * -0x10000;
      local_30 = 0xffff;
      local_38 = 0;
      uStack_34 = 1;
      local_44 = local_2c;
      uVar7 = CONCAT44(&local_48,&local_44);
      software_interrupt(0x89);
      iStack_40 = iVar4;
      iStack_3c = iVar5;
      if ((&local_44 != (uint *)0x0) || (uVar7 = FUN_000039e8(local_48,0,iVar5), (int)uVar7 != 0))
      goto LAB_0000e50c;
      uVar2 = *(uint *)(iVar3 + 4);
      iVar4 = 0;
      if (uVar2 < 0x44) {
        *(undefined *)(DAT_0000e548 + uVar2) = 0;
      }
    }
    FUN_00017338(param_1,8,0);
    FUN_00017338(param_1,0xc,0);
    FUN_00017338(param_1,4,0);
    FUN_00017338(param_1,0);
    uVar7 = CONCAT44(0xff,iVar4);
    *(undefined4 *)(iVar1 + param_1 * 8) = 0xff;
    *(undefined4 *)(iVar3 + 4) = 0;
  }
LAB_0000e50c:
  iVar1 = (int)uVar7;
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  if (local_48 != 0) {
    software_interrupt(0x8a);
    iVar4 = iVar5;
  }
  if (param_3 != 0) {
    if ((iVar1 != DAT_0000e54c) && (iVar1 != DAT_0000e54c + 1)) {
      iVar6 = FUN_0000fb84(1000,iVar4);
    }
    if (iVar1 == 0) {
      iVar1 = iVar6;
    }
    software_interrupt(0x5f);
  }
  return iVar1;
}



/* FUN_0000e550 @ 0000e550 */

undefined4 FUN_0000e550(void)

{
  return DAT_0000e554;
}



/* FUN_0000e558 @ 0000e558 */

undefined4 FUN_0000e558(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_0000e570 + 0xc) != 0) {
    uVar1 = FUN_0000a75c(DAT_0000e56c,DAT_0000e574);
    return uVar1;
  }
  return DAT_0000e578;
}



/* FUN_0000e57c @ 0000e57c */

int FUN_0000e57c(uint param_1)

{
  int iVar1;
  uint local_10;
  
  local_10 = 4;
  iVar1 = FUN_0000821c(&local_10);
  if ((iVar1 == 0) && (iVar1 = DAT_0000e5a8, local_10 < 4)) {
    iVar1 = FUN_00008ed4(0x97,(1 << (param_1 & 0xff)) << ((local_10 & 0x3f) << 2));
    return iVar1;
  }
  return iVar1;
}



/* FUN_0000e5ac @ 0000e5ac */

/* WARNING: Removing unreachable block (ram,0x0000e61c) */
/* WARNING: Removing unreachable block (ram,0x0000e628) */
/* WARNING: Removing unreachable block (ram,0x0000e6c8) */

int FUN_0000e5ac(undefined4 param_1,uint param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined local_c4;
  undefined auStack_c3 [67];
  undefined auStack_80 [68];
  int local_3c;
  int local_38;
  undefined4 local_30;
  uint uStack_2c;
  int *local_28;
  
  iVar2 = DAT_0000e710;
  pcVar1 = DAT_0000e704;
  iVar5 = *DAT_0000e6fc;
  iVar7 = 0;
  iVar6 = DAT_0000e700;
  local_3c = iVar5;
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if (0x40 < param_2) goto LAB_0000e6e8;
  if (DAT_0000e704[1] == '\x01') {
    if (*DAT_0000e704 == '\0') {
      iVar6 = FUN_000079fc();
      if (iVar6 != 0) goto LAB_0000e6ba;
      *pcVar1 = '\x01';
    }
    software_interrupt(0x7d);
    iVar7 = iVar2;
    iVar6 = DAT_0000e718;
    if ((iVar2 != 0) && (iVar6 = FUN_00009af4(iVar2,0x278,0x334), uVar3 = local_30, iVar6 == 0)) {
      iVar6 = *DAT_0000e6fc;
      local_38 = iVar6;
      FUN_00001728(&local_c4,0x44);
      local_c4 = 100;
      FUN_000015e4(auStack_c3,uVar3,param_2);
      uVar4 = FUN_00005174(&local_c4,param_2 + 1);
      FUN_000015e4(auStack_80,uVar3,param_2);
      auStack_80[param_2] = uVar4;
      if (local_38 != iVar6) {
        FUN_00001a20();
      }
      iVar6 = FUN_00009508(iVar2,auStack_80,param_2 + 1);
      if (iVar6 == 0) {
        iVar6 = FUN_000095f0(iVar2);
      }
    }
  }
  else {
    iVar6 = FUN_00007a5c(DAT_0000e70c + -1);
    if ((iVar6 == 0) && (software_interrupt(0x7b), iVar6 = DAT_0000e714, DAT_0000e714 == 0)) {
      iVar6 = 1;
      software_interrupt(0x7b);
    }
  }
LAB_0000e6ba:
  if (iVar7 != 0) {
    software_interrupt(0x7e);
  }
  *local_28 = iVar6;
LAB_0000e6e8:
  if (local_3c != iVar5) {
    FUN_00001a20();
  }
  return iVar6;
}



/* FUN_0000e71c @ 0000e71c */

undefined4 FUN_0000e71c(void)

{
  return DAT_0000e720;
}



/* FUN_0000e734 @ 0000e734 */

undefined4 FUN_0000e734(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = DAT_0000e754;
  if (*DAT_0000e754 != '\0') {
    return DAT_0000e758;
  }
  FUN_00001670(DAT_0000e75c,param_1,0x34);
  *pcVar1 = '\x01';
  return 0;
}



/* FUN_0000e760 @ 0000e760 */

undefined4 FUN_0000e760(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(*param_1) {
  case 0:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7c0;
    break;
  case 1:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7c4;
    break;
  case 2:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7c8;
    break;
  case 3:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7cc;
    break;
  default:
    return DAT_0000e7e8;
  case 5:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7d0;
    break;
  case 7:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7d8;
    break;
  case 8:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7dc;
    break;
  case 9:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7e0;
    break;
  case 10:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7e4;
    break;
  case 0xd:
    uVar1 = param_1[1];
    puVar2 = DAT_0000e7d4;
  }
  *puVar2 = uVar1;
  return 0;
}



/* FUN_0000e7ec @ 0000e7ec */

int FUN_0000e7ec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  
  iVar1 = DAT_0000e854;
  local_18 = 0xff;
  iVar2 = DAT_0000e858;
  if (((*(char *)(DAT_0000e854 + 1) == '\0') && (iVar2 = DAT_0000e85c, (uint)param_1[2] < 0x801)) &&
     (iVar2 = FUN_000069c4(param_1[1],*param_1,param_1[2],&local_18,&local_14,0,0,0xffff,0,
                           0xffffffff), iVar2 == 0)) {
    FUN_000015e4(DAT_0000e860,local_14,param_1[2]);
    *(undefined4 *)(iVar1 + 4) = param_1[2];
    *(undefined *)(iVar1 + 1) = 1;
    if (local_18 != 0xff) {
      software_interrupt(0x6c);
    }
  }
  return iVar2;
}



/* FUN_0000e864 @ 0000e864 */

undefined4 FUN_0000e864(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0000e87c;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)(DAT_0000e87c + 0x34) = *param_1;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined *)(DAT_0000e880 + 2) = 1;
  return 0;
}



/* FUN_0000e884 @ 0000e884 */

int FUN_0000e884(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  puVar1 = DAT_0000e964;
  puVar7 = (uint *)*param_1;
  if (*(uint *)(DAT_0000e964 + 0x18) == 0 && *(uint *)(DAT_0000e964 + 0x1c) == 0) {
    if ((((*puVar7 & 0xfffff) == 0) && (uVar5 = puVar7[2], (uVar5 & 0xfffff) == 0)) &&
       (*(uint *)(DAT_0000e964 + 0xc) <= uVar5)) {
      *(uint *)(DAT_0000e964 + 8) = uVar5;
      uVar8 = *puVar7;
      uVar4 = puVar7[1];
      uVar6 = uVar4 + CARRY4(uVar8,uVar5);
      bVar9 = uVar8 <= uVar8 + uVar5;
      *(uint *)(puVar1 + 0x18) = uVar8;
      *(uint *)(puVar1 + 0x1c) = uVar4;
      iVar2 = 0;
      if (uVar6 <= uVar4 && (uint)bVar9 <= uVar6 - uVar4) {
        iVar2 = DAT_0000e96c;
      }
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00011e2c(uVar8,uVar4,DAT_0000e964 + 0x10,(uVar6 - uVar4) - (uint)!bVar9),
         iVar2 == 0)) {
        *(undefined4 *)(puVar1 + 4) = param_1[1];
        FUN_0001234c(*(undefined4 *)(puVar1 + 0x10),*(undefined4 *)(puVar1 + 0x14),
                     *(undefined4 *)(puVar1 + 8));
        *puVar1 = 1;
        iVar3 = FUN_00006a70();
        if (iVar3 == 0) {
          iVar2 = FUN_000122d0(4,0,0x200000);
        }
        software_interrupt(0xa6);
        software_interrupt(0xa6);
        *DAT_0000e974 = 3;
        if (iVar2 == 0) {
          software_interrupt(0xa1);
        }
        else {
          *(undefined4 *)(puVar1 + 0x10) = 0;
          *(undefined4 *)(puVar1 + 0x14) = 0;
          *(undefined4 *)(puVar1 + 0x18) = 0;
          *(undefined4 *)(puVar1 + 0x1c) = 0;
          *puVar1 = 0;
        }
      }
    }
    else {
      iVar2 = DAT_0000e968 + -1;
    }
  }
  else {
    iVar2 = DAT_0000e968;
    if (*(uint *)(DAT_0000e964 + 0x18) == *puVar7 && *(uint *)(DAT_0000e964 + 0x1c) == puVar7[1]) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* FUN_0000e978 @ 0000e978 */

uint FUN_0000e978(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  uint *puStack_2c;
  int local_28;
  
  uVar4 = 0;
  local_30 = 0xff;
  uVar2 = *param_1;
  uVar5 = param_1[1];
  uVar3 = param_1[2];
  uVar6 = param_1[3];
  if ((uVar5 & 0xffff0000) != 0) {
    return DAT_0000eae4;
  }
  if ((uVar6 & ~(DAT_0000eae4 >> 0x10)) != 0) {
    return DAT_0000eae4;
  }
  uVar7 = uVar5 + uVar6 + CARRY4(uVar2,uVar3);
  if ((uVar7 & 0xffff0000) != 0) {
    return DAT_0000eae4;
  }
  if ((param_2 == 0) && ((uint)(uVar3 <= *(uint *)(DAT_0000eae8 + 0xc)) <= -uVar6)) {
    return DAT_0000eae4;
  }
  if ((uVar2 & 0xffff) != 0) {
    return DAT_0000eae4;
  }
  if ((uVar3 & 0xffff) != 0) {
    return DAT_0000eae4;
  }
  software_interrupt(0x5e);
  puStack_2c = param_1;
  local_28 = param_2;
  uVar6 = FUN_0001173c(uVar2,uVar5,uVar3,uVar6,param_2,&local_30,param_1[4]);
  if (uVar6 != 0) goto LAB_0000eabe;
  FUN_00017338(local_30,0,uVar2 >> 0x10 | uVar5 * 0x10000);
  FUN_00017338(local_30,4,
               (uVar2 + uVar3) - 1 >> 0x10 | ((uVar7 - 1) + (uint)(uVar2 + uVar3 != 0)) * 0x10000);
  uVar2 = param_1[4];
  if (uVar2 == 0x33) {
    uVar2 = 0x32;
    uVar4 = 0x8022;
  }
  else if ((int)uVar2 < 0x34) {
    if (uVar2 == 0xd) {
      software_interrupt(0x7c);
      uVar2 = 0x32;
      uVar4 = 0xc22;
    }
    else {
      if ((int)uVar2 < 0xe) {
        if ((uVar2 != 4) && (uVar2 != 8)) goto LAB_0000ea6e;
      }
      else if (uVar2 != 0x21) {
        if (uVar2 != 0x22) goto LAB_0000ea6e;
        uVar2 = 0x802;
        goto LAB_0000eaa8;
      }
      uVar2 = 0x800;
    }
  }
  else if (uVar2 == 0x65) {
LAB_0000ea74:
    uVar2 = 0x402;
  }
  else if ((int)uVar2 < 0x66) {
    if ((uVar2 != 0x3c) && (uVar2 != 0x3d)) {
LAB_0000ea6e:
      uVar6 = DAT_0000eae4 + 3;
      goto LAB_0000eabe;
    }
    uVar2 = 0x10;
    uVar4 = 0x22;
  }
  else {
    if (uVar2 != 0x66) {
      if (uVar2 == 0x67) goto LAB_0000ea74;
      goto LAB_0000ea6e;
    }
    uVar2 = 0xf2;
    uVar4 = DAT_0000eaf0;
  }
LAB_0000eaa8:
  FUN_00017338(local_30,8,uVar2 | 5);
  FUN_00017338(local_30,0xc,uVar4);
LAB_0000eabe:
  iVar1 = DAT_0000eafc;
  software_interrupt(0x5f);
  if (uVar6 == 0) {
    param_1[5] = local_30;
  }
  else if (local_30 != 0xff) {
    *(undefined4 *)(DAT_0000eafc + local_30 * 8) = 0xff;
    *(undefined4 *)(iVar1 + local_30 * 8 + 4) = 0;
  }
  return uVar6;
}



/* FUN_0000eb08 @ 0000eb08 */

int FUN_0000eb08(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined auStack_80 [32];
  undefined auStack_60 [32];
  undefined auStack_40 [32];
  
  piVar1 = DAT_0000ec20;
  uVar6 = 1;
  software_interrupt(0x5e);
  switch(param_1[5]) {
  case 0x50000002:
    uVar5 = 0x20;
    iVar7 = DAT_0000ec24;
    break;
  case 0x50000003:
    uVar6 = 2;
    uVar5 = 0x20;
    iVar7 = DAT_0000ec24 + 0x20;
    break;
  case 0x50000004:
    uVar6 = 3;
    uVar5 = 0x20;
    iVar7 = DAT_0000ec24 + 0x40;
    break;
  case 0x50000005:
    uVar6 = 4;
    uVar5 = 0x40;
    iVar7 = DAT_0000ec24 + 0x60;
    break;
  case 0x50000006:
    uVar6 = 5;
    uVar5 = 0x40;
    iVar7 = DAT_0000ec24 + 0xa0;
    break;
  default:
    iVar7 = DAT_0000ec28 + 10;
    goto LAB_0000ec0c;
  }
  FUN_000015e4(*DAT_0000ec20 + 0x680,iVar7,uVar5);
  piVar2 = DAT_0000ec2c;
  iVar7 = DAT_0000ec28;
  iVar3 = FUN_000035e4(auStack_80,0x41,*DAT_0000ec2c + 0x680,uVar6,1);
  if (iVar3 == 0) {
    if (param_1[1] == 0) {
      iVar3 = FUN_00003554(auStack_60,*param_1,param_1[2],param_1[2],0x41,uVar6,0x10);
    }
    else {
      uVar5 = param_1[2];
      iVar3 = FUN_00003592(auStack_60,uVar5,*param_1,0,1,uVar5,uVar5,0x41,uVar6,0x10);
    }
    if (((iVar3 == 0) &&
        (iVar3 = FUN_00003370(auStack_40,*piVar2 + 0x6c0,0x41,param_1[4],1), iVar3 == 0)) &&
       (iVar7 = FUN_00014198(auStack_80,3), iVar7 == 0)) {
      for (uVar4 = 0; uVar4 < (uint)param_1[4]; uVar4 = uVar4 + 1) {
        *(undefined *)(param_1[3] + uVar4) = *(undefined *)((param_1[4] - uVar4) + *piVar1 + 0x6bf);
      }
    }
  }
LAB_0000ec0c:
  software_interrupt(0x5f);
  return iVar7;
}



/* FUN_0000ec30 @ 0000ec30 */

undefined4 FUN_0000ec30(undefined param_1)

{
  *(undefined *)(DAT_0000ec38 + 1) = param_1;
  return 0;
}



/* FUN_0000ec3c @ 0000ec3c */

int FUN_0000ec3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70 [2];
  undefined *local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50 [2];
  byte local_48 [4];
  undefined auStack_44 [32];
  int local_24;
  
  iVar4 = *DAT_0000ed2c;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_24 = iVar4;
  FUN_0000bc04(local_50);
  iVar1 = FUN_0000a964(param_1,param_2,param_3,&local_78,local_48);
  iVar2 = DAT_0000ed30;
  if (iVar1 == 0) {
    local_70[0] = local_78 + 0x500000;
    local_70[1] = 0x180000;
    local_64 = 0x20;
    local_68 = auStack_44;
    local_60 = &local_7c;
    iVar1 = FUN_0000d3c0(local_70,1,param_4);
    if (iVar1 != 0) {
      if (iVar1 == DAT_0000ed34) {
        iVar2 = DAT_0000ed30 + 0xb;
      }
      else {
        iVar2 = DAT_0000ed30 + 1;
      }
      goto LAB_0000eca8;
    }
    FUN_0000a5f0(DAT_0000ed38);
    iVar2 = local_74;
    iVar5 = local_74 + 300;
    iVar1 = local_74 + 0x1ac;
    FUN_000016e4(iVar5,0x78);
    FUN_000016e4(iVar1,0x98);
    local_5c = param_1;
    uStack_58 = param_2;
    uStack_54 = param_3;
    iVar1 = FUN_0000bbb8(&local_5c,&local_78,iVar5,iVar1,local_50[0]);
    if (iVar1 == 0) {
      FUN_0000a5f0(DAT_0000ed38 + 1);
      FUN_00011c14(3);
      FUN_000137cc(*(undefined4 *)(iVar2 + 0x134));
      software_interrupt(0x51);
      uVar3 = DAT_0000ed3c;
      goto LAB_0000ecfa;
    }
  }
  else {
LAB_0000eca8:
    FUN_0000a5f0(iVar2);
  }
  uVar3 = local_78;
  if (local_78 != 0) {
    uVar3 = (uint)local_48[0];
    software_interrupt(0x6c);
  }
LAB_0000ecfa:
  if (local_24 != iVar4) {
    FUN_00001a20(uVar3);
  }
  return iVar1;
}



/* FUN_0000ed5c @ 0000ed5c */

/* WARNING: Removing unreachable block (ram,0x000100fa) */
/* WARNING: Removing unreachable block (ram,0x00010100) */
/* WARNING: Removing unreachable block (ram,0x000100e8) */
/* WARNING: Removing unreachable block (ram,0x000100f8) */
/* WARNING: Removing unreachable block (ram,0x000100c2) */
/* WARNING: Removing unreachable block (ram,0x000100b2) */

int FUN_0000ed5c(void)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  int local_10 [2];
  
  iVar1 = DAT_0000eda0;
  if (*DAT_0000ed9c == '\x01') {
    iVar1 = FUN_00008ac0();
    if (iVar1 == 0x100) {
      return DAT_0000eda0 + 3;
    }
    iVar1 = FUN_00002288(0x222);
    if ((iVar1 == 0) && (*(int *)(DAT_0000eda4 + 0x238) == 3)) {
      uVar2 = 0;
      local_14 = 0;
      local_10[0] = 0;
      iVar1 = FUN_00011858(0x284,local_10,&local_14);
      if (iVar1 == 0) {
        while( true ) {
          if (local_14 <= uVar2) {
            return 0;
          }
          iVar1 = *(int *)(local_10[0] + uVar2 * 8);
          software_interrupt(0x7c);
          if (iVar1 != 0) break;
          uVar2 = uVar2 + 1;
        }
      }
      return iVar1;
    }
  }
  return iVar1;
}



/* FUN_0000eda8 @ 0000eda8 */

undefined8 FUN_0000eda8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = DAT_0000eee8;
  if ((*(byte *)(param_1 + 0x20) < 0x10) &&
     (param_2 = (uint)*(byte *)(param_1 + 0x3d), param_2 < 0x12)) {
    if ((*(int *)(param_1 + 0x18) != 0) || (param_2 = 0, *(int *)(param_1 + 0x1c) != 0)) {
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      param_2 = *(uint *)(param_1 + 0x30);
      software_interrupt(0x7c);
    }
    if (*(char *)(param_1 + 0x3e) == '\0') {
LAB_0000eeb4:
      uVar2 = 0;
    }
    else {
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      uVar1 = *(uint *)(param_1 + 0x34);
      lVar3 = FUN_00008df4(uVar1,*(uint *)(param_1 + 0x34),4);
      uVar2 = DAT_0000eee4;
      do {
        software_interrupt(0x7b);
        param_2 = 0;
        if ((uVar1 & 0xffff) == 0) goto LAB_0000eeb4;
        lVar4 = FUN_00008df4(0,0,4);
        param_2 = (uint)((ulonglong)(lVar4 - lVar3) >> 0x20);
      } while (param_2 == 0 && (999 < (uint)(lVar4 - lVar3)) <= param_2);
    }
  }
  return CONCAT44(param_2,uVar2);
}



/* FUN_0000eeec @ 0000eeec */

undefined4 FUN_0000eeec(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  undefined4 local_b8;
  undefined *local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4 [4];
  int local_94;
  int local_90;
  undefined4 local_80 [8];
  undefined auStack_60 [52];
  int local_2c;
  
  piVar1 = DAT_0000f05c;
  local_90 = *DAT_0000f058;
  uVar6 = 3;
  uVar9 = 0;
  local_94 = DAT_0000f064;
  if (*DAT_0000f060 == '\x14') {
    local_94 = DAT_0000f064 + -0x60;
  }
  piVar8 = (int *)(local_94 + 0x20);
  if ((DAT_0000f068 & ~*(uint *)(*DAT_0000f05c + 0x1c0)) == 0) {
    uVar6 = 0;
  }
  local_2c = local_90;
  if ((int)((uint)*(byte *)(param_1 + 0xdd) << 0x1e) < 0) goto LAB_0000f03c;
  *(byte *)(param_1 + 0xdc) = (byte)uVar6;
  uVar7 = 0;
  do {
    uVar2 = FUN_00008e60();
    local_80[uVar7] = uVar2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  *(undefined *)(param_1 + 0xdd) = 1;
  uVar7 = 0;
  do {
    *(undefined4 *)(param_1 + uVar7 * 4 + 0xe0) = local_80[uVar7];
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  do {
    do {
      *(byte *)(param_1 + 0xdc) = (byte)uVar6 | 0x10;
    } while ((int)((uint)*(byte *)(param_1 + 0xdd) << 0x1e) < 0);
  } while ((*(byte *)(param_1 + 0xdd) & 1) == 0);
  *(undefined *)(param_1 + 0xdd) = 1;
  uVar7 = 0;
  do {
    local_a4[uVar7] = *(undefined4 *)(param_1 + uVar7 * 4 + 0xf0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  FUN_000036d0(local_80,0x10);
  FUN_000036d0(local_a4,0x10);
  iVar5 = DAT_0000f064;
  if (*(int *)(DAT_0000f064 + -0x78) == 0) {
    if (uVar6 == 3) {
LAB_0000efe4:
      *(undefined4 *)(iVar5 + -0x78) = 1;
      goto LAB_0000efe6;
    }
    iVar3 = FUN_00016a60(local_94);
    iVar4 = *piVar1;
    if (iVar3 == 0) {
      *(uint *)(iVar4 + 0x54) = *(uint *)(iVar4 + 0x54) | 0x100000;
      if (*piVar8 != 10) goto LAB_0000f03c;
      goto LAB_0000efe4;
    }
    uVar6 = *(uint *)(iVar4 + 0x54) | 0x1000000;
  }
  else {
LAB_0000efe6:
    if (uVar6 < 3) {
      local_c8 = piVar8 + uVar6 * 4 + 1;
    }
    else {
      local_c8 = (int *)(DAT_0000f064 + 0x60);
    }
    local_c4 = 0;
    uStack_c0 = 0x80;
    local_b8 = 0x20;
    uStack_b0 = 0;
    local_ac = 0;
    local_a8 = DAT_0000f06c;
    puStack_bc = local_80;
    local_b4 = auStack_60;
    iVar5 = FUN_0000c98c(&local_c8,0x20,&local_b8);
    if (iVar5 == 0) {
      iVar5 = FUN_00001550(local_a4,auStack_60,0x10);
      if (iVar5 == 0) {
        uVar9 = 1;
        goto LAB_0000f03c;
      }
      iVar4 = *piVar1;
      uVar6 = *(uint *)(iVar4 + 0x54) | 0x3000000;
    }
    else {
      iVar4 = *piVar1;
      uVar6 = *(uint *)(iVar4 + 0x54) | 0x2000000;
    }
  }
  *(uint *)(iVar4 + 0x54) = uVar6;
LAB_0000f03c:
  if (local_2c != local_90) {
    FUN_00001a20();
  }
  return uVar9;
}



/* FUN_0000f070 @ 0000f070 */

undefined4 FUN_0000f070(int param_1)

{
  if ((((param_1 != 0x43ee) && (param_1 != 0x43ef)) && (param_1 != 0x43d1)) && (param_1 != 0x43d0))
  {
    return 0;
  }
  return 1;
}



/* FUN_0000f08c @ 0000f08c */

undefined4 FUN_0000f08c(int param_1)

{
  if ((((param_1 != 0x43ee) && (param_1 != 0x43ed)) && (param_1 != 0x43d1)) &&
     ((param_1 != 0x43d5 && (param_1 != 0x43d0)))) {
    return 0;
  }
  return 1;
}



/* FUN_0000f0ac @ 0000f0ac */

undefined4 FUN_0000f0ac(int param_1)

{
  if ((((param_1 != 0x43ec) && (param_1 != 0x43ee)) && (param_1 != 0x43ed)) &&
     (((param_1 != 0x43ef && (param_1 != 0x43d1)) && ((param_1 != 0x43d5 && (param_1 != 0x43d0))))))
  {
    return 0;
  }
  return 1;
}



/* FUN_0000f0d4 @ 0000f0d4 */

int FUN_0000f0d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((*DAT_0000f128 == '\0') || (iVar2 = FUN_00009e74(), iVar1 = DAT_0000f12c, iVar2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0000f130;
    if (*(int *)(DAT_0000f12c + 4) == 0xff) {
      local_20 = 0x67;
      uStack_24 = 0;
      local_30 = param_2;
      uStack_2c = param_1;
      local_28 = param_3;
      iVar2 = FUN_0000e978(&local_30,1);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 4) = local_1c;
      }
      software_interrupt(0xa6);
    }
  }
  return iVar2;
}



/* FUN_0000f138 @ 0000f138 */

uint FUN_0000f138(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_3c;
  int local_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  
  iVar5 = 0;
  local_38 = (int)DAT_0000f20c >> 0x1f;
  uVar6 = 0;
  uVar4 = DAT_0000f20c >> 0x13;
  uVar2 = DAT_0000f20c;
  if (((((param_2 + 0xfff & (int)DAT_0000f20c >> 0x13) == param_2) &&
       ((param_3 + 0xfff & (int)DAT_0000f20c >> 0x13) == param_3)) && (param_3 != 0)) &&
     (uStack_34 = param_1, uStack_30 = param_2, uStack_2c = param_3, local_28 = param_4,
     uVar2 = FUN_00016dec(param_2,param_3), uVar2 == 0)) {
    for (; uVar6 < param_3 >> 0xc; uVar6 = uVar6 + 1) {
      uVar7 = param_2 + uVar6 * 0x1000;
      uVar2 = FUN_00001bd4(param_1);
      if (uVar2 == 0) {
        uVar2 = FUN_00012278();
        if (uVar2 == 0) {
          uVar2 = param_2 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8;
          local_3c = uVar2 | uVar7 >> 0x18;
          if (*(char *)(DAT_0000f210 + 0xf) == '\x03') {
            local_3c = uVar2 >> 8;
          }
          uVar2 = FUN_00011a10(*(undefined *)(DAT_0000f210 + 0x2c),&local_3c,
                               *(char *)(DAT_0000f210 + 0xf),0,0);
          if (uVar2 == 0) {
            uVar2 = FUN_00004fd4();
          }
        }
        FUN_0000fac4(param_1);
      }
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = 0;
      if (local_28 != 0) {
        uVar2 = FUN_0000f31c(param_1,param_2,DAT_0000f214,0x1000);
        iVar1 = DAT_0000f214;
        for (; uVar4 != 0; uVar4 = uVar4 - 4) {
          iVar3 = FUN_00001550(iVar1 + iVar5,&local_38,4);
          if (iVar3 != 0) {
            uVar2 = DAT_0000f20c + 0xc;
            break;
          }
          iVar5 = iVar5 + 4;
        }
      }
    }
  }
  return uVar2;
}



/* FUN_0000f218 @ 0000f218 */

int FUN_0000f218(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  int local_74;
  undefined auStack_70 [32];
  undefined local_50 [2];
  char local_4e;
  int local_1c [2];
  
  FUN_00001728(&local_78,0x28);
  FUN_00001728(local_50,0x34);
  local_78 = (undefined)*(undefined4 *)(DAT_0000f2c0 + 0x3f8);
  local_77 = 2;
  local_76 = (undefined)*(undefined4 *)(DAT_0000f2c0 + 0x3f0);
  local_74 = param_2;
  FUN_000036d0(&local_74,4);
  iVar1 = FUN_00009198(param_1,DAT_0000f2c8,DAT_0000f2c4,0x20,&local_78,8,auStack_70,0x20);
  if ((iVar1 == 0) && (iVar1 = FUN_00013550(local_78,&local_77,0x27), iVar1 == 0)) {
    local_50[0] = 0x96;
    iVar2 = FUN_0001358c(local_50);
    iVar1 = iVar2;
    if (((iVar2 == 0) &&
        (((iVar1 = DAT_0000f2cc, local_4e == -0x80 && (iVar1 = iVar2, param_3 != 0)) &&
         (iVar1 = FUN_0000f3bc(param_1,local_1c), iVar1 == 0)))) && (local_1c[0] != param_2 + 1)) {
      iVar1 = DAT_0000f2cc + 1;
    }
  }
  return iVar1;
}



/* FUN_0000f31c @ 0000f31c */

int FUN_0000f31c(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint local_2c;
  
  bVar2 = 0;
  iVar3 = DAT_0000f3b4;
  if (((param_3 != 0) && (param_4 < 0x1001)) && (local_2c = param_4, param_4 != 0)) {
    do {
      uVar4 = param_4;
      if (0x40 < param_4) {
        uVar4 = 0x40;
      }
      iVar3 = FUN_00001bd4(param_1);
      if (iVar3 == 0) {
        iVar3 = FUN_00004fd4();
        if (iVar3 == 0) {
          uVar1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8;
          local_2c = uVar1 | param_2 >> 0x18;
          if (*(char *)(DAT_0000f3b8 + 0xf) == '\x03') {
            local_2c = uVar1 >> 8;
          }
          iVar3 = FUN_00011a10(*(undefined *)(DAT_0000f3b8 + 0x30),&local_2c,
                               *(char *)(DAT_0000f3b8 + 0xf),param_3,uVar4 & 0xff);
          if (iVar3 == 0) {
            iVar3 = FUN_00004fd4();
          }
        }
        FUN_0000fac4(param_1);
      }
      if (iVar3 == 0) {
        param_4 = param_4 - uVar4;
        param_2 = param_2 + uVar4;
        param_3 = param_3 + uVar4;
      }
      else {
        bVar2 = bVar2 + 1;
        if (10 < bVar2) {
          return iVar3;
        }
        software_interrupt(0x56);
      }
    } while (param_4 != 0);
  }
  return iVar3;
}



/* FUN_0000f3bc @ 0000f3bc */

int FUN_0000f3bc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined local_b0 [2];
  char local_ae;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined auStack_9d [33];
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined auStack_6c [32];
  undefined4 local_4c;
  undefined auStack_48 [32];
  int local_28;
  
  iVar4 = *DAT_0000f4bc;
  local_28 = iVar4;
  FUN_00001728(&local_7c,0x30);
  FUN_00001728(local_b0,0x34);
  local_7c = (undefined)*(undefined4 *)(DAT_0000f4c0 + 0x3f8);
  local_7b = 3;
  local_7a = (undefined)*(undefined4 *)(DAT_0000f4c0 + 0x3f0);
  iVar2 = FUN_000043c8(&local_78,0xc);
  uVar1 = DAT_0000f4c8;
  if (iVar2 == 0) {
    local_4c = DAT_0000f4c4;
    iVar2 = FUN_00009198(param_1,DAT_0000f4c8,DAT_0000f4c4,0x20,&local_7c,0x10,auStack_6c,0x20);
    if ((iVar2 == 0) && (iVar2 = FUN_00013550(local_7c,&local_7b,0x2f), iVar2 == 0)) {
      local_b0[0] = 0x96;
      iVar2 = FUN_0001358c(local_b0);
      if ((iVar2 == 0) && (iVar2 = DAT_0000f4cc, local_ae == -0x80)) {
        local_ad = local_78;
        local_a9 = local_74;
        local_a5 = local_70;
        iVar2 = FUN_00009198(param_1,uVar1,local_4c,0x20,&local_ad,0x10,auStack_48,0x20);
        if (iVar2 == 0) {
          iVar3 = FUN_00001550(auStack_48,auStack_9d,0x20);
          if (iVar3 == 0) {
            FUN_000036d0(&local_a1,4);
            *param_2 = local_a1;
          }
          else {
            iVar2 = DAT_0000f4cc + 2;
          }
        }
      }
    }
  }
  if (local_28 != iVar4) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_0000f4d0 @ 0000f4d0 */

int FUN_0000f4d0(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  bVar1 = 0;
  iVar2 = DAT_0000f588;
  if (((param_3 != 0) && (param_4 != 0)) &&
     (iVar2 = FUN_00016dec(param_2,param_4), iVar4 = DAT_0000f58c, uVar7 = param_2, uVar8 = param_4,
     iVar9 = param_3, iVar2 == 0)) {
    do {
      uVar3 = (uVar7 - 1) + *(int *)(iVar4 + 0x1c) & ~(*(int *)(iVar4 + 0x1c) - 1U);
      uVar6 = uVar8;
      if (0x40 < uVar8) {
        uVar6 = 0x40;
      }
      uVar5 = uVar3 - uVar7;
      if ((uVar5 < uVar6) && (uVar3 != uVar7)) {
        uVar6 = uVar5;
      }
      iVar2 = FUN_00013488(param_1,uVar7,iVar9,uVar6 & 0xff);
      if (iVar2 == 0) {
        uVar8 = uVar8 - uVar6;
        uVar7 = uVar7 + uVar6;
        iVar9 = iVar9 + uVar6;
      }
      else {
        bVar1 = bVar1 + 1;
        if (10 < bVar1) break;
        software_interrupt(0x56);
      }
    } while (uVar8 != 0);
    if ((param_5 != 0) && (iVar2 == 0)) {
      if (0x1000 < param_4) {
        param_4 = 0x1000;
      }
      iVar2 = FUN_0000f31c(param_1,param_2,DAT_0000f590,param_4);
      if ((iVar2 == 0) && (iVar4 = FUN_00001550(DAT_0000f590,param_3,param_4), iVar4 != 0)) {
        iVar2 = DAT_0000f588 + 0xc;
      }
    }
  }
  return iVar2;
}



/* FUN_0000f594 @ 0000f594 */

undefined4 FUN_0000f594(void)

{
  return 0;
}



/* FUN_0000f598 @ 0000f598 */

undefined4 FUN_0000f598(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined auStack_38 [56];
  
  uVar1 = DAT_0000f5bc;
  if (0x1f < (uint)(param_2 << 3)) {
    FUN_00001728(param_1);
    uVar1 = FUN_0000f858(auStack_38,0x1160,0x60);
  }
  return uVar1;
}



/* FUN_0000f5d0 @ 0000f5d0 */

int FUN_0000f5d0(uint param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  bool bVar17;
  int local_54;
  
  iVar1 = DAT_0000f7b0;
  local_54 = 0;
  iVar2 = DAT_0000f7b0 + 0x4bc;
  iVar3 = DAT_0000f7b0 + 0x978;
  iVar4 = DAT_0000f7b0 + 0xe34;
  puVar14 = (undefined4 *)(DAT_0000f7b0 + 0x12f0);
  piVar13 = (int *)(DAT_0000f7b0 + 0x17ac);
  puVar15 = (undefined4 *)(DAT_0000f7b0 + 0x1c68);
  iVar5 = DAT_0000f7b0 + 0x2124;
  iVar6 = DAT_0000f7b0 + 0x25e0;
  iVar7 = DAT_0000f7b0 + 0x2a9c;
  iVar8 = DAT_0000f7b0 + 0x2f58;
  iVar9 = DAT_0000f7b0 + 0x3414;
  iVar10 = DAT_0000f7b0 + 0x38d0;
  software_interrupt(0x5e);
  *puVar14 = 1;
  *(undefined4 *)(iVar1 + 0x12f4) = 0;
  *(undefined4 *)(iVar1 + 0x12f8) = 0;
  uVar16 = param_1 >> 4;
  *(undefined4 *)(&DAT_000012fc + iVar1) = *(undefined4 *)*param_3;
  *puVar15 = 1;
  *(undefined4 *)(iVar1 + 0x1c6c) = 0;
  *(undefined4 *)(iVar1 + 0x1c70) = 0;
  *(undefined4 *)(iVar1 + 0x1c74) = 1;
  iVar12 = 0;
  if (param_2 != 0) {
    local_54 = param_2 + uVar16;
    iVar12 = param_2;
  }
  do {
    iVar11 = FUN_00008b44(iVar12,iVar10,iVar1,uVar16);
    bVar17 = iVar11 == 0;
    do {
      if (!bVar17) goto LAB_0000f796;
      iVar11 = FUN_00002d82(iVar3,iVar1,puVar15);
      bVar17 = iVar11 == 0;
    } while (!bVar17);
    iVar11 = FUN_0000281e(iVar10,piVar13,iVar3,puVar14);
    if (iVar11 != 0) goto LAB_0000f796;
  } while ((*piVar13 != 1) || (*(int *)(iVar1 + 0x17b8) != 1));
  do {
    iVar11 = FUN_00008b44(local_54,iVar10,iVar2,uVar16);
    if ((iVar11 != 0) ||
       ((iVar11 = FUN_00002d82(iVar4,iVar2,puVar15), iVar11 != 0 ||
        (iVar11 = FUN_0000281e(iVar10,piVar13,iVar4,puVar14), iVar11 != 0)))) goto LAB_0000f796;
  } while ((*piVar13 != 1) || (*(int *)(iVar1 + 0x17b8) != 1));
  iVar12 = FUN_000028e0(piVar13,iVar3,iVar4,0);
  if (((((iVar12 == 0) && (iVar12 = FUN_0000282a(iVar10,iVar5,puVar14,piVar13), iVar12 == 0)) &&
       (iVar12 = FUN_000028e0(iVar9,iVar1,iVar2,0), iVar12 == 0)) &&
      ((((iVar11 = FUN_000024e0(iVar10,0,iVar5,iVar3,iVar6), iVar11 == 0 &&
         (iVar11 = FUN_000024e0(iVar10,0,iVar5,iVar4,iVar7), iVar11 == 0)) &&
        ((iVar12 = FUN_0000282a(iVar10,iVar8,iVar2,iVar1), iVar12 == 0 &&
         ((iVar11 = FUN_00002cde(iVar9,param_3[1],param_1 >> 3), iVar11 == 0 &&
          (iVar11 = FUN_00002cde(iVar5,param_3[2],param_1 >> 3), iVar11 == 0)))))) &&
       (iVar11 = FUN_00002cde(iVar1,param_3[3],uVar16), iVar11 == 0)))) &&
     (((iVar11 = FUN_00002cde(iVar2,param_3[4],uVar16), iVar11 == 0 &&
       (iVar11 = FUN_00002cde(iVar6,param_3[5],uVar16), iVar11 == 0)) &&
      (iVar11 = FUN_00002cde(iVar7,param_3[6],uVar16), iVar11 == 0)))) {
    iVar11 = FUN_00002cde(iVar8,param_3[7],uVar16);
  }
LAB_0000f796:
  FUN_00001728(DAT_0000f7b0,0x5538);
  software_interrupt(0x5f);
  return iVar11;
}



/* FUN_0000f7b8 @ 0000f7b8 */

void FUN_0000f7b8(void)

{
  return;
}



/* FUN_0000f7bc @ 0000f7bc */

undefined4 FUN_0000f7bc(void)

{
  return DAT_0000f7c0;
}



/* FUN_0000f7c4 @ 0000f7c4 */

int FUN_0000f7c4(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = DAT_0000f854;
  iVar1 = DAT_0000f850;
  iVar4 = DAT_0000f84c;
  if (*DAT_0000f844 == '\0') {
    iVar4 = DAT_0000f850 + 2;
  }
  else {
    piVar6 = DAT_0000f848 + 0xff0;
    piVar5 = DAT_0000f848;
    while (piVar5[3] == iVar2) {
      iVar3 = FUN_00001550(piVar5 + 4,param_1,0x10);
      if (iVar3 == 0) {
        if (*param_3 < (uint)*(ushort *)((int)piVar5 + 10)) {
          return DAT_0000f84c + -4;
        }
        iVar4 = FUN_000036ec(piVar5 + 8);
        if (iVar4 != *piVar5) {
          return iVar1;
        }
        FUN_000015e4(param_2,piVar5 + 8,*(undefined2 *)((int)piVar5 + 10));
        *param_3 = (uint)*(ushort *)((int)piVar5 + 10);
        return 0;
      }
      piVar5 = (int *)((int)piVar5 + (uint)*(ushort *)(piVar5 + 2));
      if (piVar6 < piVar5) {
        return iVar1;
      }
    }
  }
  return iVar4;
}



/* FUN_0000f858 @ 0000f858 */

undefined8 FUN_0000f858(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0000f898;
  if (((param_2 & 0x1f) == 0) && (param_3 != 0)) {
    uVar1 = param_2 >> 3;
    param_2 = ((param_3 - 1U >> 5) + 1) * 4;
    software_interrupt(0x7d);
    FUN_00001670(param_1,uVar1 + 0x5d000,param_2);
    software_interrupt(0x7e);
    uVar2 = 0;
  }
  return CONCAT44(param_2,uVar2);
}



/* FUN_0000f89c @ 0000f89c */

void FUN_0000f89c(byte *param_1,byte param_2,byte param_3)

{
  *param_1 = *param_1 & ~param_2 | param_3;
  return;
}



/* FUN_0000f8a8 @ 0000f8a8 */

int FUN_0000f8a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  software_interrupt(0x7b);
  software_interrupt(0x7b);
  *param_4 = 0;
  software_interrupt(0x7b);
  software_interrupt(0x7c);
  return DAT_0000f8f4 + 0xc + param_1 * 0x1000;
}



/* FUN_0000f8f8 @ 0000f8f8 */

undefined8 FUN_0000f8f8(undefined4 param_1,undefined4 param_2)

{
  software_interrupt(0x94);
  return CONCAT44(param_1,param_2);
}



/* FUN_0000f904 @ 0000f904 */

undefined8 FUN_0000f904(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1 * 0x10;
  iVar1 = DAT_0000f92c;
  if ((uVar2 < 0x170) && (software_interrupt(0x7c), iVar1 = DAT_0000f930, DAT_0000f930 == 0)) {
    software_interrupt(0x7b);
    return CONCAT44(param_3,4);
  }
  return CONCAT44(uVar2,iVar1);
}



/* FUN_0000f934 @ 0000f934 */

undefined4 FUN_0000f934(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00006ba0(*(int *)(param_1 + 4),*(int *)(*(int *)(param_1 + 4) + 4) + 0x70 + param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(iVar1 + 0x68) = param_2;
    return 0;
  }
  return DAT_0000f954;
}



/* FUN_0000f958 @ 0000f958 */

int FUN_0000f958(int param_1,undefined *param_2,uint param_3,short *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_48 [4];
  int local_44;
  undefined4 local_40;
  int local_3c;
  int iStack_34;
  undefined *puStack_30;
  uint uStack_2c;
  short *local_28;
  
  local_44 = *DAT_0000fa58;
  local_40 = 0;
  local_48[0] = '\0';
  local_3c = local_44;
  iStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (((param_2 != (undefined *)0x0) && (param_3 != 0)) && (param_4 != (short *)0x0)) {
    FUN_000137f0();
    uVar2 = DAT_0000fa60;
    iVar1 = DAT_0000fa5c;
    while (iVar3 = FUN_0001116c(3), iVar3 == 0) {
      uVar5 = FUN_00008ccc();
      if (uVar2 < uVar5) goto LAB_0000f9ba;
      software_interrupt(0x56);
    }
    *(uint *)(*DAT_0000fa64 + 0x70) = *(uint *)(*DAT_0000fa64 + 0x70) & 0xffffff00 | 0x80000000;
    FUN_000137f0();
    while (iVar3 = FUN_00011374(&local_40,local_48), iVar3 == 0) {
      uVar5 = FUN_00008ccc();
      if (uVar2 < uVar5) goto LAB_0000f9ba;
      software_interrupt(0x56);
    }
    uVar5 = 2;
    *local_28 = (ushort)local_40._1_1_ + (ushort)(byte)local_40 * 0x100;
    *param_2 = local_40._2_1_;
    param_2[1] = local_40._3_1_;
    FUN_000137f0();
    do {
      iVar3 = FUN_00011374(param_2 + uVar5,local_48);
      if (iVar3 == 0) {
        uVar4 = FUN_00008ccc();
        if (uVar2 < uVar4) goto LAB_0000f9ba;
      }
      else {
        uVar5 = uVar5 + 4 & 0xffff;
        iVar3 = 0;
        if (local_48[0] != '\0') goto LAB_0000fa2e;
        if (param_3 <= uVar5) {
          *(undefined4 *)(param_1 + 0xc) = 0x2000000;
          iVar3 = iVar1;
          goto LAB_0000fa2e;
        }
        FUN_000137f0();
      }
      software_interrupt(0x56);
    } while( true );
  }
  iVar3 = DAT_0000fa5c + 6;
LAB_0000fa2e:
  if (local_3c != local_44) {
    FUN_00001a20();
  }
  return iVar3;
LAB_0000f9ba:
  *(undefined4 *)(param_1 + 0xc) = 0x4000000;
  iVar3 = iVar1;
  goto LAB_0000fa2e;
}



/* FUN_0000fa68 @ 0000fa68 */

void FUN_0000fa68(void)

{
  *(undefined4 *)(*DAT_0000fa74 + 0x560) = 0;
  return;
}



/* FUN_0000fa78 @ 0000fa78 */

void FUN_0000fa78(int param_1)

{
  if (param_1 != 1) {
    *(undefined4 *)(*DAT_0000fa88 + 0x560) = 0;
  }
  return;
}



/* FUN_0000fa8c @ 0000fa8c */

void FUN_0000fa8c(uint param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_1 < 0x100) &&
     (puVar2 = (undefined *)(DAT_0000fac0 + param_1 * 8), (byte)puVar2[1] == param_2)) {
    iVar1 = *(int *)(puVar2 + 4);
    if (iVar1 != 0) {
      FUN_00001728(iVar1 + 0x70,*(undefined4 *)(iVar1 + 4));
      FUN_00006b64(*(undefined4 *)(puVar2 + 4),param_2);
    }
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  return;
}



/* FUN_0000fac4 @ 0000fac4 */

int FUN_0000fac4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014298();
  if (iVar1 == 0) {
    FUN_00002118(0x227);
    FUN_0000fa78(param_1);
    iVar1 = *DAT_0000fae8;
    software_interrupt(0x5f);
  }
  return iVar1;
}



/* FUN_0000fb3c @ 0000fb3c */

undefined4 FUN_0000fb3c(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar2 = DAT_0000fb7c;
  uVar3 = 0;
  software_interrupt(0x5e);
  if (*DAT_0000fb7c == '\0') {
    uVar3 = FUN_000118e8(0x10,1,0,param_1);
  }
  cVar1 = *pcVar2;
  uVar4 = DAT_0000fb80;
  if (cVar1 != -1) {
    *pcVar2 = cVar1 + '\x01';
    uVar4 = uVar3;
  }
  software_interrupt(0x5f);
  return uVar4;
}



/* FUN_0000fb84 @ 0000fb84 */

undefined4 FUN_0000fb84(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  software_interrupt(0x5e);
  cVar1 = *DAT_0000fbbc;
  if ((cVar1 == '\0') || (*DAT_0000fbbc = cVar1 + -1, cVar1 == '\x01')) {
    uVar2 = FUN_000118e8(0x10,0,0,param_1);
  }
  software_interrupt(0x5f);
  return uVar2;
}



/* FUN_0000fbc0 @ 0000fbc0 */

void FUN_0000fbc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x4c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[0x22] = 0;
  iVar1 = FUN_000040e4();
  if (iVar1 != 0) {
    FUN_0000b5b0(DAT_0000fbe4);
    return;
  }
  return;
}



/* FUN_0000fbe8 @ 0000fbe8 */

/* WARNING: Removing unreachable block (ram,0x0000fc78) */
/* WARNING: Removing unreachable block (ram,0x0000fc98) */
/* WARNING: Removing unreachable block (ram,0x0000fca2) */
/* WARNING: Removing unreachable block (ram,0x0000fca6) */

int FUN_0000fbe8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  int iStack_30;
  int local_2c;
  undefined4 local_28;
  
  iVar1 = DAT_0000fe30;
  iVar5 = 0;
  uVar3 = *DAT_0000fe24;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  switch(param_1) {
  default:
    iVar5 = DAT_0000fe58;
    goto LAB_0000fe12;
  case 1:
    software_interrupt(0x7c);
    goto LAB_0000fd1c;
  case 2:
    software_interrupt(0x7c);
    goto LAB_0000fd1c;
  case 3:
    software_interrupt(0x7c);
    goto LAB_0000fd1c;
  case 4:
  case 5:
    software_interrupt(0x7c);
    goto LAB_0000fd1c;
  case 6:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x21:
  case 0x22:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x3c:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
    goto switchD_0000fc18_caseD_6;
  case 7:
    goto LAB_0000fd1c;
  case 8:
    if (*DAT_0000fe34 == 0) {
      software_interrupt(0xa6);
      *DAT_0000fe34 = 1;
    }
    break;
  case 9:
  case 10:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar4 = 0;
    iVar2 = 0;
    if (param_1 == 9) {
      iVar4 = 0x4a28;
      iVar2 = 0x49ec;
    }
    else if (param_1 == 10) {
      iVar4 = 0x6228;
      iVar2 = 0x61ec;
    }
    if (iVar4 != 0 || iVar2 != 0) {
      software_interrupt(0xa6);
      goto LAB_0000fd1c;
    }
    break;
  case 0xb:
    software_interrupt(0x7c);
    goto LAB_0000fd1c;
  case 0xc:
    software_interrupt(0x7c);
    software_interrupt(0xa6);
    break;
  case 0xd:
    iVar5 = param_2 + -0xffff;
    if (iVar5 == 0) {
      iVar5 = 1;
      uVar3 = 4;
      software_interrupt(0x7c);
      param_2 = DAT_0000fe4c;
    }
    iVar5 = FUN_000171a4(param_2,iVar5,uVar3);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = FUN_0000d788(auStack_38,auStack_34,0);
    if (*(char *)(iVar1 + 0x13) == '\0') goto switchD_0000fc18_caseD_6;
    iVar5 = 0;
    break;
  case 0x12:
    software_interrupt(0xa6);
    do {
      software_interrupt(0x7b);
    } while( true );
  case 0x16:
LAB_0000fd1c:
    software_interrupt(0x7c);
    break;
  case 0x33:
    FUN_000066ce(0,param_3);
    break;
  case 0x3a:
    break;
  case 0x3e:
    iVar5 = FUN_0001362c(param_2,*DAT_0000fe28,uVar3);
switchD_0000fc18_caseD_6:
    if (iVar5 == -0x10000) goto LAB_0000fe12;
  }
  *(undefined *)(iVar1 + param_1) = 1;
LAB_0000fe12:
  FUN_00013644(iVar5,local_2c,param_1);
  return iVar5;
}



/* FUN_0000fe5c @ 0000fe5c */

void FUN_0000fe5c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x13];
  if (*param_1 == DAT_0000fe8c) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    return;
  }
  FUN_00001728(iVar1,0xc0);
  FUN_00001728(iVar1 + 0x150,0x98);
  return;
}



/* FUN_0000fe90 @ 0000fe90 */

void FUN_0000fe90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x14) == 0) {
    if (iVar1 != 5) {
      FUN_0000b5b0(DAT_0000fed0);
      return;
    }
  }
  else if (iVar1 != 5) {
    if (iVar1 == 3) {
      FUN_0000fe5c(param_1);
    }
    goto LAB_0000fec2;
  }
  FUN_0000fbc0(param_1);
LAB_0000fec2:
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffdffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* FUN_0000fed4 @ 0000fed4 */

int FUN_0000fed4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_40 [32];
  
  uVar1 = DAT_0000ff94;
  if (param_1 == 9) {
    iVar4 = *(int *)(DAT_0000ff88 + 4);
    iVar5 = DAT_0000ff90 + 4;
    iVar3 = DAT_0000ff90;
  }
  else {
    if (param_1 != 10) {
      return DAT_0000ff8c;
    }
    iVar4 = *(int *)(DAT_0000ff88 + 8);
    iVar5 = DAT_0000ff90 + 0x84;
    iVar3 = DAT_0000ff90 + 0x80;
  }
  iVar2 = 0;
  if (iVar4 != 0) {
    software_interrupt(0x79);
    iVar2 = FUN_0000b9dc(param_1);
    if ((iVar2 == 0) && (software_interrupt(0x7c), iVar2 = DAT_0000ff98, iVar3 == 0)) {
      software_interrupt(0x7d);
      if (iVar5 == 0) {
        iVar2 = DAT_0000ff8c + 6;
      }
      else {
        iVar3 = FUN_000032d8(auStack_40,2,iVar5,0,2,0x80000000,uVar1,0,2,0,iVar4,1);
        if (iVar3 == 0) {
          iVar2 = FUN_00014170(auStack_40,1);
          if (iVar2 == 0) {
            iVar2 = FUN_0000fbe8(param_1,0xffff,0);
          }
        }
        else {
          iVar2 = DAT_0000ff8c + -6;
        }
        software_interrupt(0x7e);
      }
    }
  }
  return iVar2;
}



/* FUN_0000ff9c @ 0000ff9c */

void FUN_0000ff9c(void)

{
  uint uVar1;
  
  software_interrupt(0x7c);
  software_interrupt(0x7c);
  uVar1 = 0;
  do {
    software_interrupt(0x7c);
    if (*(int *)(DAT_0000ffd4 + uVar1 * 8) != 0) {
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return;
}



/* FUN_0000ffd8 @ 0000ffd8 */

int FUN_0000ffd8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_000110e4();
  FUN_00010dcc();
  iVar2 = *(int *)(DAT_0001006c + 0x20);
  *(undefined4 *)(DAT_00010070 + 0x238) = *(undefined4 *)(iVar2 + 0x238);
  FUN_00001670(DAT_00010074,iVar2 + 0x388,0x50);
  iVar1 = FUN_00009b34();
  iVar2 = DAT_0001006c;
  if (iVar1 == 0) {
    if (param_1 == DAT_00010078) {
      iVar1 = FUN_000090e4(1);
      if ((((iVar1 != 0) || (iVar1 = FUN_0000ff9c(), iVar1 != 0)) ||
          (iVar1 = FUN_0000fed4(9), iVar1 != 0)) ||
         ((iVar1 = FUN_0000fed4(10), iVar1 != 0 ||
          ((*(char *)(iVar2 + -0x7c) != '\0' && (iVar1 = FUN_0000cc68(), iVar1 != 0))))))
      goto LAB_00010062;
      if (*DAT_0001007c != '\0') {
        FUN_00002118(0x225);
        iVar1 = FUN_00014298();
        if (iVar1 != 0) goto LAB_00010062;
      }
    }
    if (*(char *)(iVar2 + -0x7b) != '\0') {
      FUN_00002194();
    }
  }
LAB_00010062:
  software_interrupt(0x5f);
  return iVar1;
}



/* FUN_00010104 @ 00010104 */

undefined4 FUN_00010104(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = DAT_0001016c;
  uVar3 = *(undefined4 *)(*DAT_00010168 + 0x10);
  uVar2 = 0;
  do {
    uVar4 = FUN_000124a0(*(undefined2 *)(iVar1 + uVar2 * 2),param_2);
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (((int)uVar4 == 0) &&
       (uVar4 = FUN_00009eb4(uVar3,*(undefined2 *)(iVar1 + uVar2 * 2)),
       param_2 = (undefined4)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 0)) {
      software_interrupt(0x7c);
      software_interrupt(0x7c);
      param_2 = 0;
      software_interrupt(0x7c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x32);
  return 0;
}



/* FUN_00010178 @ 00010178 */

int FUN_00010178(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  char local_1c [4];
  
  iVar2 = DAT_00010214;
  local_1c[0] = -1;
  local_20 = 0;
  if (param_5 < 0x1001) {
    if (((param_3 == 1) || (param_3 == 2)) &&
       (iVar1 = FUN_000069c4(param_1,param_2,param_5,local_1c,&local_20,0,0,0xffff,0,0xfffffffe),
       iVar1 != 0)) {
      iVar2 = DAT_00010214 + -1;
    }
    else if (param_3 == 1) {
      iVar2 = FUN_0000f31c(1,param_4,local_20,param_5);
    }
    else if (param_3 == 2) {
      iVar2 = FUN_0000f4d0(1,param_4,local_20,param_5,param_6);
    }
    else if (param_3 == 3) {
      iVar2 = FUN_0000f138(1,param_4,param_5,param_6);
    }
    if (local_1c[0] != -1) {
      software_interrupt(0x6c);
    }
  }
  return iVar2;
}



/* FUN_00010218 @ 00010218 */

int FUN_00010218(int *param_1,undefined param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  piVar1 = DAT_0001028c;
  iVar3 = DAT_00010294;
  if (*DAT_0001028c == DAT_00010290) {
    FUN_00002118(0x225);
    if (*(char *)((int)piVar1 + 0xf) == '\x03') {
      iVar3 = 0;
    }
    else {
      FUN_00002118(0x226);
      iVar3 = FUN_00011a8c(*(undefined *)(piVar1 + 0xe));
      if (iVar3 == 0) {
        FUN_00002118(0x227);
        *(undefined *)((int)piVar1 + 0xf) = 4;
      }
    }
    if (((iVar3 == 0) && (iVar3 = FUN_00014298(), iVar3 == 0)) &&
       (iVar3 = FUN_0000550c(), iVar3 == 0)) {
      *param_1 = piVar1[4];
      puVar2 = DAT_00010298;
      *DAT_00010298 = param_2;
      puVar2[1] = 1;
      puVar2[2] = 1;
    }
  }
  return iVar3;
}



/* FUN_0001029c @ 0001029c */

int FUN_0001029c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = DAT_000102ec;
  if ((0x143 < param_3) && ((param_4 == 1 || (param_4 == 2)))) {
    iVar1 = FUN_000069c4();
    if (iVar1 == 0) {
      *(char *)(DAT_000102f0 + -3) = (char)param_4;
      iVar1 = FUN_00002194();
      return iVar1;
    }
    iVar1 = DAT_000102ec + 1;
  }
  return iVar1;
}



/* FUN_000102f4 @ 000102f4 */

int FUN_000102f4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  char local_1c [8];
  
  iVar2 = DAT_00010370;
  local_20 = 0;
  local_1c[0] = -1;
  if (0x202 < param_3) {
    return DAT_00010370;
  }
  iVar1 = FUN_000069c4(param_1,param_2,param_3,local_1c,&local_20,0,0,0xffff,0,0xfffffffe);
  if (iVar1 == 0) {
    FUN_000015e4(DAT_00010374,local_20,0x202);
    iVar1 = DAT_00010378;
    if (*DAT_00010374 == 0xff) {
      *(undefined *)(DAT_00010378 + 3) = 1;
    }
    else if ((0x20 < *DAT_00010374) || (0x10 < DAT_00010374[1])) goto LAB_00010362;
    *(undefined *)(iVar1 + 2) = 1;
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_00010370 + 1;
  }
LAB_00010362:
  if (local_1c[0] != -1) {
    software_interrupt(0x6c);
  }
  return iVar2;
}



/* FUN_0001037c @ 0001037c */

uint FUN_0001037c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  char local_160;
  byte local_15f;
  ushort local_15e;
  char local_15c [320];
  
  iVar3 = DAT_0001046c;
  uVar6 = 0;
  puVar7 = *(undefined **)(DAT_0001046c + 4);
  if (puVar7 == (undefined *)0x0) {
    uVar8 = DAT_00010470 - 1;
  }
  else {
    FUN_000015e4(&local_160,puVar7,0x144);
    uVar8 = DAT_00010470;
    if (((local_160 != '\0') && (local_15e == 0)) && (*puVar7 = 0, local_15f - 1 < 4)) {
      uVar9 = DAT_00010470 + 4;
      for (uVar8 = 0; uVar8 < local_15f; uVar8 = uVar8 + 1) {
        iVar1 = uVar8 * 0x50;
        iVar5 = *(int *)(iVar3 + 4);
        pcVar2 = local_15c + iVar1;
        uVar6 = uVar9;
        if (((*pcVar2 == *(char *)(iVar3 + 1)) && ((byte)local_15c[iVar1 + 1] < 6)) &&
           (((byte)local_15c[iVar1 + 2] < 0x49 &&
            (((byte)local_15c[iVar1 + 3] < 0x49 &&
             ((uint)(byte)local_15c[iVar1 + 2] + (uint)(byte)local_15c[iVar1 + 3] < 0x49)))))) {
          if (((*(byte *)(iVar3 + 2) & ~*(byte *)(iVar3 + 3)) == 0) ||
             (iVar4 = FUN_00004758(pcVar2), iVar4 != 0)) {
            uVar6 = FUN_00013244(pcVar2,(uint)(byte)local_15c[iVar1 + 2] +
                                        iVar5 + uVar8 * 0x50 + 0xc);
          }
          else {
            uVar6 = DAT_00010470 + 5;
          }
        }
        if (uVar6 != 0) {
          local_15e = (ushort)((uVar6 & 0xf) << ((uVar8 & 0x3f) << 2)) | local_15e;
          break;
        }
        local_15e = local_15e | (ushort)(1 << ((uVar8 & 0x3f) << 2));
      }
      *(ushort *)(*(int *)(iVar3 + 4) + 2) = local_15e;
      uVar8 = uVar6;
    }
  }
  return uVar8;
}



/* FUN_00010474 @ 00010474 */

int FUN_00010474(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack_53c [512];
  undefined local_33c [672];
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 auStack_88 [5];
  undefined4 auStack_74 [5];
  undefined4 auStack_60 [5];
  undefined4 auStack_4c [5];
  int local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_9c = *DAT_00010608;
  local_8c = DAT_00010618;
  local_98 = DAT_0001060c;
  uStack_94 = DAT_00010610;
  uStack_90 = DAT_00010614;
  local_38 = local_9c;
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  FUN_00001670(auStack_88,&DAT_0001061c,0x14);
  FUN_00001670(auStack_74,&DAT_00010630,0x14);
  FUN_00001670(auStack_60,&DAT_00010644,0x14);
  FUN_00001670(auStack_4c,&DAT_00010658,0x14);
  iVar2 = DAT_0001066c;
  if (param_3 == 0x14) {
    iVar3 = 0xf;
    puVar4 = &local_98;
  }
  else {
    if (param_3 == 0x1c) {
      puVar4 = auStack_88;
    }
    else if (param_3 == 0x20) {
      puVar4 = auStack_74;
    }
    else if (param_3 == 0x30) {
      puVar4 = auStack_60;
    }
    else {
      if (param_3 != 0x40) goto LAB_000105ee;
      puVar4 = auStack_4c;
    }
    iVar3 = 0x13;
  }
  if ((((param_5 == 0x80) || (param_5 == 0x100)) || (param_5 == 0x180)) || (param_5 == 0x200)) {
    if (param_5 < param_3 + iVar3 + 0xbU) {
      iVar2 = DAT_0001066c + -6;
    }
    else {
      FUN_000016e4(local_33c);
      FUN_000016e4(auStack_53c,0x200);
      iVar2 = param_5 - param_3;
      iVar5 = iVar2 - iVar3;
      puVar1 = local_33c + iVar5;
      FUN_000015e4(puVar1,puVar4,iVar3);
      FUN_000015e4(local_33c + iVar2,local_30,param_3);
      local_33c[0] = 0;
      local_33c[1] = 1;
      FUN_000016d4(local_33c + 2,iVar5 + -3,0xff);
      puVar1[-1] = 0;
      iVar2 = 0;
      if (local_34 == 0) {
        iVar3 = FUN_000045c0(local_28,param_5,param_6,param_7,local_33c,param_5,param_8);
        if (iVar3 != 0) {
          iVar2 = DAT_0001066c + -10;
        }
      }
      else {
        iVar5 = FUN_000045c0(local_28,param_5,param_6,param_7,param_8,param_5,auStack_53c);
        iVar3 = DAT_00010670;
        if ((iVar5 != 0) || (iVar5 = FUN_0000ae74(local_33c,auStack_53c,param_5), iVar5 != 0)) {
          iVar2 = iVar3;
        }
      }
    }
  }
LAB_000105ee:
  if (local_38 != local_9c) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_00010674 @ 00010674 */

uint FUN_00010674(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined auStack_6e4 [510];
  byte abStack_4e6 [514];
  byte abStack_2e4 [512];
  undefined auStack_e4 [8];
  undefined auStack_dc [152];
  uint local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined4 local_34;
  int iStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  if ((((param_4 != 0x80) && (param_4 != 0x100)) && (param_4 != 0x180)) && (param_4 != 0x200)) {
    return DAT_000107fc;
  }
  if (param_7 == 0) {
    param_7 = param_2;
  }
  local_38 = param_2 + param_7 + 8;
  local_44 = DAT_000107fc - 4;
  if (param_4 < param_7 + param_2 + 2U) {
    return local_44;
  }
  if (0x200 < param_4) {
    return local_44;
  }
  local_40 = param_4 - param_2;
  uVar4 = local_40 - 1;
  if (0x200 < uVar4) {
    return local_44;
  }
  software_interrupt(0x66);
  local_44 = local_44 & 0xff;
  puVar5 = auStack_6e4;
  pbVar1 = abStack_4e6 + 2;
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_000016e4(pbVar1,0x200);
  FUN_000016e4(abStack_2e4,0x200);
  FUN_000016e4(auStack_e4,0xa0);
  FUN_000015e4(auStack_dc,local_34,param_2);
  local_3c = auStack_dc + param_2;
  uVar2 = FUN_000043c8(local_3c,param_7);
  if (uVar2 != 0) {
    return uVar2;
  }
  iVar3 = DAT_00010800;
  if (param_2 != 0x14) {
    if (param_2 == 0x1c) {
      iVar3 = DAT_00010800 + 1;
    }
    else if (param_2 == 0x20) {
      iVar3 = DAT_00010800 + 2;
    }
    else if (param_2 == 0x30) {
      iVar3 = DAT_00010800 + 3;
    }
    else {
      if (param_2 != 0x40) goto LAB_000107f2;
      iVar3 = DAT_00010800 + 4;
    }
  }
  uVar2 = FUN_00009094(local_44,iVar3,auStack_e4,local_38,puVar5,param_2);
  if (uVar2 != 0) {
    return uVar2;
  }
  iVar3 = local_40 - param_7;
  abStack_4e6[iVar3] = 1;
  FUN_000015e4(abStack_4e6 + iVar3 + 1,local_3c,param_7);
  uVar2 = FUN_0000b4d4(local_44,param_2,puVar5,param_2,abStack_2e4,uVar4);
  if (uVar2 != 0) {
    return uVar2;
  }
  for (uVar2 = 0; uVar2 < uVar4; uVar2 = uVar2 + 1) {
    pbVar1[uVar2] = pbVar1[uVar2] ^ abStack_2e4[uVar2];
  }
  FUN_000015e4(abStack_4e6 + local_40 + 1,puVar5,param_2);
  abStack_4e6[param_4 + 1] = 0xbc;
  abStack_4e6[2] = abStack_4e6[2] & 0x7f;
  iVar3 = FUN_000045c0(local_2c,param_4,param_5,param_6,pbVar1,param_4,param_8);
  if (iVar3 == 0) {
    return 0;
  }
LAB_000107f2:
  return DAT_000107fc - 10;
}



/* FUN_00010804 @ 00010804 */

int FUN_00010804(uint param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined auStack_6dc [510];
  char acStack_4de [514];
  byte local_2dc [512];
  undefined auStack_dc [8];
  undefined auStack_d4 [152];
  undefined *local_3c;
  uint local_38;
  uint local_34;
  int iStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  if ((((param_4 != 0x80) && (param_4 != 0x100)) && (param_4 != 0x180)) && (param_4 != 0x200)) {
    return DAT_0001099c;
  }
  if (param_4 < 0x201) {
    iVar6 = param_4 - param_2;
    uVar7 = iVar6 - 1;
    if (uVar7 < 0x201) {
      software_interrupt(0x66);
      local_38 = param_1 & 0xff;
      local_3c = auStack_6dc;
      pcVar1 = acStack_4de + 2;
      local_34 = param_1;
      iStack_30 = param_2;
      local_2c = param_3;
      uStack_28 = param_4;
      FUN_000016e4(pcVar1,0x200);
      FUN_000016e4(local_2dc,0x200);
      FUN_000016e4(auStack_dc,0xa0);
      iVar3 = FUN_000045c0(local_2c,param_4,param_5,param_6,param_7,param_4,local_2dc);
      iVar2 = DAT_000109a0;
      if (((iVar3 == 0) &&
          (FUN_000015e4(pcVar1,local_2dc,param_4), -1 < (int)((uint)(byte)acStack_4de[2] << 0x18)))
         && (acStack_4de[param_4 + 1] == -0x44)) {
        pcVar5 = pcVar1 + iVar6;
        iVar3 = FUN_0000b4d4(local_38,param_2,acStack_4de + iVar6 + 1,param_2,local_2dc,uVar7);
        if (iVar3 == 0) {
          for (uVar4 = 0; uVar4 < uVar7; uVar4 = uVar4 + 1) {
            pcVar1[uVar4] = pcVar1[uVar4] ^ local_2dc[uVar4];
          }
          acStack_4de[2] = acStack_4de[2] & 0x7f;
          for (uVar7 = 0; (uVar7 < iVar6 - 2U && (pcVar1[uVar7] == '\0')); uVar7 = uVar7 + 1) {
          }
          iVar3 = (iVar6 - uVar7) + -2;
          uVar7 = param_2 + iVar3 + 8;
          if (0xa0 < uVar7) {
            return DAT_0001099c + -4;
          }
          if (acStack_4de[iVar6 - iVar3] == '\x01') {
            FUN_000015e4(auStack_d4,local_34,param_2);
            FUN_000015e4(auStack_d4 + param_2,acStack_4de + (iVar6 - iVar3) + 1,iVar3);
            iVar6 = DAT_000109a4;
            if (param_2 != 0x14) {
              if (param_2 == 0x1c) {
                iVar6 = DAT_000109a4 + 1;
              }
              else if (param_2 == 0x20) {
                iVar6 = DAT_000109a4 + 2;
              }
              else if (param_2 == 0x30) {
                iVar6 = DAT_000109a4 + 3;
              }
              else {
                if (param_2 != 0x40) {
                  return iVar2;
                }
                iVar6 = DAT_000109a4 + 4;
              }
            }
            iVar6 = FUN_00009094(local_38,iVar6,auStack_dc,uVar7,local_3c,param_2);
            if ((iVar6 == 0) && (iVar6 = FUN_0000ae74(local_3c,pcVar5 + -1,param_2), iVar6 == 0)) {
              return 0;
            }
          }
        }
      }
      return iVar2;
    }
  }
  return DAT_0001099c + -4;
}



/* FUN_000109a8 @ 000109a8 */

int FUN_000109a8(undefined4 param_1,uint param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte abStack_6dc [512];
  byte abStack_4dc [512];
  byte local_2dc [672];
  undefined4 local_3c;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  int *local_28;
  
  uVar6 = 0xffffffff;
  if (param_9 == DAT_00010b14) {
    uVar5 = 0x20;
    iVar1 = DAT_00010b18;
  }
  else if (param_9 == DAT_00010b1c) {
    uVar5 = 0x30;
    iVar1 = DAT_00010b18 + 0x20;
  }
  else {
    if (param_9 != DAT_00010b20) {
      return DAT_00010b24 + 4;
    }
    uVar5 = 0x40;
    iVar1 = DAT_00010b18 + 0x50;
  }
  iVar8 = DAT_00010b24;
  if ((param_6 == param_2) && (uVar5 * 2 + 2 <= param_6)) {
    software_interrupt(0x66);
    local_3c = 2;
    local_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    FUN_000016e4(abStack_4dc,0x200);
    FUN_000016e4(local_2dc,0x200);
    iVar2 = FUN_000045c0(param_5,param_6,param_7,param_8,local_34,param_2,local_2dc);
    iVar8 = DAT_00010b24 + -6;
    if (iVar2 == 0) {
      uVar7 = (param_6 - uVar5) - 1;
      uVar3 = (uint)local_2dc[0];
      FUN_000015e4(abStack_6dc,local_2dc + 1,uVar5);
      FUN_000015e4(abStack_4dc,local_2dc + uVar5 + 1,uVar7);
      iVar2 = FUN_0000b4d4(local_3c,uVar5,abStack_4dc,uVar7,local_2dc,uVar5);
      if (iVar2 == 0) {
        for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
          abStack_6dc[uVar4] = abStack_6dc[uVar4] ^ local_2dc[uVar4];
        }
        iVar2 = FUN_0000b4d4(local_3c,uVar5,abStack_6dc,uVar5,local_2dc,uVar7);
        if (iVar2 == 0) {
          for (uVar4 = 0; uVar4 < uVar7; uVar4 = uVar4 + 1) {
            abStack_4dc[uVar4] = abStack_4dc[uVar4] ^ local_2dc[uVar4];
          }
          iVar2 = FUN_0000ae74(iVar1,abStack_4dc,uVar5);
          iVar1 = 0;
          if (iVar2 != 0 || uVar3 != 0) {
            iVar1 = iVar8;
          }
          for (; uVar5 < uVar7; uVar5 = uVar5 + 1) {
            if ((abStack_4dc[uVar5] == 1) && (uVar6 == 0xffffffff)) {
              uVar6 = uVar5 + 1;
            }
          }
          if ((uVar6 < uVar7) && (iVar8 = iVar1, iVar1 == 0)) {
            FUN_000015e4(local_2c,abStack_4dc + uVar6,uVar7 - uVar6);
            *local_28 = uVar7 - uVar6;
          }
        }
      }
    }
  }
  return iVar8;
}



/* FUN_00010b28 @ 00010b28 */

int FUN_00010b28(undefined4 param_1,uint param_2,undefined4 param_3,uint *param_4,undefined4 param_5
                ,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte abStack_6d4 [510];
  byte abStack_4d6 [514];
  byte local_2d4 [672];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  uint *local_28;
  
  if (param_9 == DAT_00010c90) {
    uVar5 = 0x20;
    iVar3 = DAT_00010c94;
  }
  else if (param_9 == DAT_00010c98) {
    uVar5 = 0x30;
    iVar3 = DAT_00010c94 + 0x20;
  }
  else {
    if (param_9 != DAT_00010c9c) {
      return DAT_00010ca0 + 4;
    }
    uVar5 = 0x40;
    iVar3 = DAT_00010c94 + 0x50;
  }
  iVar9 = -uVar5;
  iVar7 = DAT_00010ca0;
  if ((param_2 <= (param_6 + uVar5 * -2) - 2) && (uVar2 = uVar5 * 2 + 2, uVar2 <= param_6)) {
    iVar8 = param_6 - uVar5;
    uVar6 = iVar8 - 1;
    if (uVar6 < 0x201) {
      software_interrupt(0x66);
      uVar2 = uVar2 & 0xff;
      pbVar1 = abStack_4d6 + 2;
      local_34 = param_1;
      local_30 = param_2;
      local_2c = param_3;
      local_28 = param_4;
      FUN_000016e4(pbVar1,0x200);
      FUN_000016e4(local_2d4,0x200);
      FUN_000015e4(pbVar1,iVar3,uVar5);
      iVar3 = ((uVar5 + param_6) - local_30) + iVar9 * 2;
      abStack_4d6[iVar3] = 1;
      FUN_000015e4(abStack_4d6 + iVar3 + 1,local_34,local_30,&local_2c);
      FUN_000043c8(abStack_6d4,uVar5);
      iVar3 = FUN_0000b4d4(uVar2,uVar5,abStack_6d4,uVar5,local_2d4,uVar6);
      iVar7 = DAT_00010ca0 + -6;
      if (iVar3 == 0) {
        for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + 1) {
          pbVar1[uVar4] = pbVar1[uVar4] ^ local_2d4[uVar4];
        }
        iVar3 = FUN_0000b4d4(uVar2,uVar5,pbVar1,iVar8 + -1,local_2d4,uVar5);
        if (iVar3 == 0) {
          for (uVar2 = 0; uVar2 < uVar5; uVar2 = uVar2 + 1) {
            abStack_6d4[uVar2] = abStack_6d4[uVar2] ^ local_2d4[uVar2];
          }
          local_2d4[0] = 0;
          FUN_000015e4(local_2d4 + 1,abStack_6d4,uVar5);
          FUN_000015e4(local_2d4 + uVar5 + 1,pbVar1,iVar8 + -1);
          iVar3 = FUN_000045c0(param_5,param_6,param_7,param_8,local_2d4,param_6,local_2c);
          if (iVar3 == 0) {
            *local_28 = param_6;
            iVar7 = 0;
          }
        }
      }
    }
  }
  return iVar7;
}



/* FUN_00010ca4 @ 00010ca4 */

int FUN_00010ca4(undefined4 param_1,uint param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                uint param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char local_4bc [1188];
  
  iVar4 = DAT_00010d1c;
  if (param_6 == param_2) {
    iVar2 = FUN_000045c0(param_5,param_6,param_7,param_8,param_1,param_2,local_4bc);
    iVar4 = DAT_00010d1c + -6;
    if (((iVar2 == 0) && (local_4bc[0] == '\0')) && (local_4bc[1] == '\x02')) {
      uVar3 = 2;
      do {
        if (param_6 <= uVar3) break;
        pcVar1 = local_4bc + uVar3;
        uVar3 = uVar3 + 1;
      } while (*pcVar1 != '\0');
      if ((10 < uVar3) && (uVar3 < param_6)) {
        FUN_000015e4(param_3,local_4bc + uVar3,param_6 - uVar3);
        *param_4 = param_6 - uVar3;
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}



/* FUN_00010d20 @ 00010d20 */

int FUN_00010d20(undefined4 param_1,uint param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  char acStack_4d5 [1185];
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  int *local_28;
  
  iVar1 = DAT_00010dc4;
  if (param_2 <= param_6 - 0xbU) {
    iVar1 = param_6 - param_2;
    acStack_4d5[1] = 0;
    acStack_4d5[2] = 2;
    local_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    FUN_000043c8(acStack_4d5 + 3,iVar1 - 3U);
    for (uVar2 = 0; uVar2 < iVar1 - 3U; uVar2 = uVar2 + 1) {
      while (acStack_4d5[uVar2 + 3] == '\0') {
        FUN_000043c8(acStack_4d5 + uVar2 + 3,1);
      }
    }
    acStack_4d5[iVar1] = '\0';
    FUN_000015e4(acStack_4d5 + iVar1 + 1,local_34,param_2);
    iVar1 = FUN_000045c0(param_5,param_6,param_7,param_8,acStack_4d5 + 1,param_6,local_2c);
    if (iVar1 == 0) {
      *local_28 = param_6;
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_00010dc4 + -6;
    }
  }
  return iVar1;
}



/* FUN_00010dc8 @ 00010dc8 */

void FUN_00010dc8(void)

{
  return;
}



/* FUN_00010dcc @ 00010dcc */

void FUN_00010dcc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_18;
  
  iVar1 = DAT_00010e18;
  local_18 = 0;
  uVar5 = *(undefined4 *)(*DAT_00010e14 + 0x10);
  uVar4 = 0;
  do {
    uVar3 = (uint)*(ushort *)(iVar1 + uVar4 * 2);
    iVar2 = FUN_000124a0(uVar3);
    if ((iVar2 == 0) && (iVar2 = FUN_00009eb4(uVar5,*(undefined2 *)(iVar1 + uVar4 * 2)), iVar2 == 0)
       ) {
      FUN_000051b0(uVar3);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x32);
  software_interrupt(0x7b);
  if ((local_18 & 1) == 0) {
    FUN_00007a58(0,&local_18,4);
  }
  return;
}



/* FUN_000110e4 @ 000110e4 */

void FUN_000110e4(void)

{
  int iVar1;
  
  iVar1 = *DAT_00011104;
  *(undefined4 *)(iVar1 + 0xa0c) = 0;
  *(undefined4 *)(iVar1 + 0xa10) = 0;
  *(undefined4 *)(iVar1 + 0xa14) = 4;
  *(undefined4 *)(iVar1 + 0xa14) = 2;
  return;
}



/* FUN_00011108 @ 00011108 */

int FUN_00011108(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar1 = DAT_00011164;
  uVar5 = *(undefined4 *)(*DAT_00011160 + 0x10);
  uVar4 = 0;
  uVar3 = param_2;
  do {
    uVar6 = FUN_000124a0(*(undefined2 *)(iVar1 + uVar4 * 2),uVar3);
    iVar2 = (int)uVar6;
    uVar3 = (int)((ulonglong)uVar6 >> 0x20);
    if ((iVar2 == 0) &&
       (uVar6 = FUN_00009eb4(uVar5,*(undefined2 *)(iVar1 + uVar4 * 2)), iVar2 = (int)uVar6,
       uVar3 = (int)((ulonglong)uVar6 >> 0x20), iVar2 == 0)) {
      software_interrupt(0x7c);
      iVar2 = DAT_00011168 + 4 + (uint)*(ushort *)(iVar1 + uVar4 * 2) * 0x1000;
      software_interrupt(0x7c);
      uVar3 = param_2;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x32);
  return iVar2;
}



/* FUN_0001116c @ 0001116c */

undefined4 FUN_0001116c(uint param_1)

{
  if ((*(uint *)(*DAT_00011180 + 0x70) & 0xff) == param_1) {
    return 1;
  }
  return 0;
}



/* FUN_000111bc @ 000111bc */

undefined4 FUN_000111bc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_868;
  undefined *local_864;
  undefined *local_860;
  undefined *local_85c;
  undefined *local_858;
  undefined *local_854;
  undefined *local_850;
  undefined *local_84c;
  undefined auStack_848 [256];
  undefined auStack_748 [256];
  undefined auStack_648 [256];
  undefined auStack_548 [256];
  undefined auStack_448 [256];
  undefined auStack_348 [256];
  undefined auStack_248 [256];
  undefined auStack_148 [256];
  undefined auStack_48 [32];
  undefined4 local_28;
  int local_24;
  
  iVar3 = *DAT_000112dc;
  local_24 = iVar3;
  FUN_00001728(auStack_848,0x100);
  FUN_00001728(&local_868,0x20);
  local_28 = 0;
  FUN_00001728(auStack_748,0x100);
  FUN_00001728(auStack_648,0x100);
  FUN_00001728(auStack_548,0x100);
  FUN_00001728(auStack_448,0x100);
  FUN_00001728(auStack_348,0x100);
  FUN_00001728(auStack_248,0x100);
  FUN_00001728(auStack_148,0x100);
  FUN_00001728(auStack_48,0x20);
  local_868 = &local_28;
  local_864 = auStack_748;
  local_860 = auStack_648;
  local_85c = auStack_548;
  local_858 = auStack_448;
  local_854 = auStack_348;
  local_850 = auStack_248;
  local_84c = auStack_148;
  if (((param_1 == 0) || (param_3 == 0)) || (param_2 == 0)) {
LAB_000112d8:
    uVar2 = 1;
  }
  else {
    local_28 = 0x10001;
    iVar1 = FUN_00005f48(auStack_848,0x100);
    if ((iVar1 == 0) && (iVar1 = FUN_0000f5d0(0x800,auStack_848,&local_868), iVar1 == 0)) {
      software_interrupt(0x66);
      iVar1 = FUN_00009094(0,DAT_000112e0,param_1,param_2,auStack_48,0x20);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_00010674(auStack_48,0x20,local_864,0x100,local_860,0x100,0x20,param_3),
         iVar1 == 0)) goto LAB_000112d8;
    }
    uVar2 = 0;
  }
  if (local_24 != iVar3) {
    FUN_00001a20();
  }
  return uVar2;
}



/* FUN_00011374 @ 00011374 */

undefined4 FUN_00011374(undefined *param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = DAT_000113b0;
  uVar3 = *(uint *)(*DAT_000113b0 + 0x70);
  if ((int)(uVar3 << 8) < 0) {
    uVar2 = *(undefined4 *)(*DAT_000113b0 + 0x74);
    param_1[3] = (char)uVar2;
    param_1[2] = (char)((uint)uVar2 >> 8);
    param_1[1] = (char)((uint)uVar2 >> 0x10);
    *param_1 = (char)((uint)uVar2 >> 0x18);
    *param_2 = (char)((int)(~uVar3 << 9) >> 0x1f) + '\x01';
    *(uint *)(*piVar1 + 0x70) = uVar3 & 0xff7fffff | 0x80000000;
    return 1;
  }
  return 0;
}



/* FUN_000113b4 @ 000113b4 */

undefined4 FUN_000113b4(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(ushort *)(param_1 + 2);
  bVar1 = param_1[1];
  bVar2 = *param_1;
  iVar4 = *DAT_000113f0;
  if ((int)(*(uint *)(iVar4 + 0x70) << 8) < 0) {
    *(uint *)(iVar4 + 0x70) = *(uint *)(iVar4 + 0x70) & 0xff7fffff;
    *(uint *)(iVar4 + 0x74) =
         (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8) | (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18;
    uVar5 = *(uint *)(iVar4 + 0x70) | 0x80000000;
    if (param_2 != 0) {
      uVar5 = *(uint *)(iVar4 + 0x70) | 0xc0000000;
    }
    *(uint *)(iVar4 + 0x70) = uVar5;
    return 1;
  }
  return 0;
}



/* FUN_000113f4 @ 000113f4 */

undefined4 FUN_000113f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined auStack_3c [32];
  int local_1c;
  
  iVar3 = *DAT_00011458;
  local_1c = iVar3;
  uVar1 = FUN_00001728(auStack_3c,0x20);
  software_interrupt(0x66);
  iVar2 = FUN_00009094(uVar1,DAT_0001145c,param_1,param_2,auStack_3c,0x20);
  if (iVar2 == 0) {
    iVar2 = FUN_00010804(auStack_3c,0x20,*(undefined4 *)(DAT_00011464 + 4),0x100,DAT_00011460,3,
                         param_3);
    if (iVar2 == 0) {
      uVar4 = 1;
      goto LAB_00011442;
    }
  }
  uVar4 = 0;
LAB_00011442:
  if (local_1c != iVar3) {
    FUN_00001a20();
  }
  return uVar4;
}



/* FUN_00011468 @ 00011468 */

int FUN_00011468(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_38 [20];
  int local_24;
  int local_20;
  int iStack_1c;
  
  iVar1 = DAT_000114c0;
  iVar3 = 0;
  software_interrupt(0x73);
  iVar2 = 0;
  do {
    FUN_00001670(auStack_38,iVar1 + iVar2 * 0x20,0x20);
    if (local_20 != 0) {
      software_interrupt(0x7d);
      if (iStack_1c == 0) {
        return DAT_000114c4;
      }
      iVar3 = FUN_0000ccbc(local_24 + param_1,iStack_1c,local_20);
      software_interrupt(0x7e);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar2 = iVar2 + 1;
    if (0 < iVar2) {
      return iVar3;
    }
  } while( true );
}



/* FUN_000114c8 @ 000114c8 */

int FUN_000114c8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_00011550;
  bVar1 = true;
  uVar4 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x68) + 0x70;
  if (0x1f9c < uVar4) {
    return DAT_00011550;
  }
  software_interrupt(0x5e);
  iVar2 = FUN_00008960(param_1 + 8,*(undefined *)(param_1 + 1));
  if (iVar2 == -1) {
    bVar1 = false;
    iVar2 = FUN_00002344();
    if (iVar2 == -1) goto LAB_00011544;
  }
  iVar3 = FUN_00013e98(iVar2,param_1,uVar4);
  if (((iVar3 == 0) && (!bVar1)) &&
     (iVar3 = FUN_00011fd0(param_1 + 8,*(undefined *)(param_1 + 1),param_1 + 0x48,iVar2), iVar3 != 0
     )) {
    FUN_00013ba0(iVar2);
  }
LAB_00011544:
  software_interrupt(0x5f);
  return iVar3;
}



/* FUN_00011558 @ 00011558 */

undefined4 FUN_00011558(void)

{
  return DAT_0001155c;
}



/* FUN_00011560 @ 00011560 */

int FUN_00011560(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_194;
  undefined4 local_190 [92];
  int local_20;
  
  puVar1 = DAT_00011600;
  iVar5 = *DAT_000115fc;
  local_194 = 0;
  software_interrupt(0x5e);
  uVar4 = 0;
  puVar3 = local_190;
  local_20 = iVar5;
  do {
    iVar2 = FUN_0000f904(uVar4,0,&local_194);
    if (iVar2 != 0) goto LAB_000115e2;
    *puVar3 = local_194;
    iVar2 = FUN_0000f904(uVar4,4,&local_194);
    if (iVar2 != 0) goto LAB_000115e2;
    puVar3[1] = local_194;
    iVar2 = FUN_0000f904(uVar4,8,&local_194);
    if (iVar2 != 0) goto LAB_000115e2;
    puVar3[2] = local_194;
    iVar2 = FUN_0000f904(uVar4,0xc,&local_194);
    if (iVar2 != 0) goto LAB_000115e2;
    uVar4 = uVar4 + 1;
    puVar3[3] = local_194;
    puVar3 = puVar3 + 4;
  } while (uVar4 < 0x17);
  iVar2 = FUN_00017368(param_1,2,local_190,0x170,1);
LAB_000115e2:
  software_interrupt(0x5f);
  if (local_20 != iVar5) {
    FUN_00001a20(*puVar1);
  }
  return iVar2;
}



/* FUN_0001163c @ 0001163c */

void FUN_0001163c(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    software_interrupt(0x7b);
    if (*(int *)(DAT_0001165c + uVar1 * 8) != 0) {
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return;
}



/* FUN_00011660 @ 00011660 */

int FUN_00011660(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                uint param_6,uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_58;
  undefined4 local_54;
  uint uStack_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [32];
  int local_20;
  
  iVar2 = *DAT_00011720;
  iVar1 = 0;
  local_20 = iVar2;
  if ((param_7 != 0xffff) && (iVar1 = DAT_00011724, param_7 < 0x1f)) {
    piVar3 = (int *)(DAT_00011728 + param_1 * 0x1f0 + param_7 * 0x10);
    uVar6 = *DAT_0001172c;
    uVar4 = DAT_0001172c[1];
    *piVar3 = param_3 - uVar6;
    piVar3[1] = (param_4 - uVar4) - (uint)(param_3 < uVar6);
    piVar3[2] = param_6;
    *(undefined *)(piVar3 + 3) = 3;
    if (param_8 != 0) {
      *(undefined *)(piVar3 + 3) = 0xf;
    }
    iVar1 = DAT_00011730;
    if (param_1 == 4) {
      local_58 = param_5;
      puVar5 = (uint *)(DAT_00011734 + param_7 * 0x38);
      local_54 = 0;
      uStack_50 = param_6;
      local_4c = auStack_40;
      local_48 = 0x20;
      local_44 = DAT_00011738;
      iVar1 = FUN_0000eb08(&local_58);
      if (iVar1 == 0) {
        FUN_00001670(puVar5 + 4,auStack_40,0x20);
        puVar5[2] = param_6;
        puVar5[3] = 0;
        *puVar5 = param_3;
        puVar5[1] = param_4;
        *(undefined *)(puVar5 + 0xc) = 1;
      }
    }
  }
  if (local_20 != iVar2) {
    FUN_00001a20();
  }
  return iVar1;
}



/* FUN_0001173c @ 0001173c */

/* WARNING: Removing unreachable block (ram,0x0001182a) */

int FUN_0001173c(uint param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
                int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  uVar7 = 0xff;
  local_3c = 0;
  software_interrupt(0x66);
  uVar6 = 1;
  uStack_38 = param_1;
  uStack_34 = param_2;
  local_30 = param_3;
  iStack_2c = param_4;
  do {
    iVar3 = FUN_0000f904(uVar6,8,&local_3c);
    if (iVar3 != 0) goto LAB_00011832;
    if ((local_3c & 1) == 0) {
      if (uVar7 == 0xff) {
        uVar7 = uVar6;
      }
    }
    else {
      iVar3 = FUN_0000f904(uVar6,0,&local_3c);
      uVar5 = local_3c;
      if (iVar3 != 0) goto LAB_00011832;
      uVar1 = local_3c >> 0x10;
      uVar9 = local_3c * 0x10000;
      iVar3 = FUN_0000f904(uVar6,4,&local_3c);
      if (iVar3 != 0) goto LAB_00011832;
      uVar10 = (local_3c + 1) * 0x10000;
      uVar2 = local_3c + 1 >> 0x10;
      if (param_5 == 0) {
        if ((uVar9 == param_1 && uVar1 == param_2) &&
           (uVar8 = uVar6,
           uVar10 + uVar5 * -0x10000 == local_30 &&
           (uVar2 - uVar1) - (uint)(uVar10 < uVar9) == iStack_2c)) break;
      }
      else if (((*(int *)(DAT_00011850 + uVar6 * 8) != 0) &&
               (((param_7 != 0x65 && (param_7 != 0x66)) ||
                (*(int *)(DAT_00011850 + uVar6 * 8 + 4) != 0x67)))) &&
              ((uVar5 = param_2 + iStack_2c + (uint)CARRY4(param_1,local_30),
               uVar1 <= uVar5 && (uint)(param_1 + local_30 <= uVar9) <= uVar1 - uVar5 &&
               (param_2 <= uVar2 && (uint)(uVar10 <= param_1) <= param_2 - uVar2))))
      goto LAB_00011832;
    }
    uVar6 = uVar6 + 1;
    uVar8 = uVar7;
  } while (uVar6 < 0x17);
  iVar3 = DAT_00011850;
  iVar4 = 0;
  if (uVar8 == 0xff) {
LAB_00011832:
    iVar4 = DAT_00011854 + 8;
  }
  else {
    *(undefined4 *)(DAT_00011850 + uVar8 * 8) = 0;
    *(int *)(iVar3 + uVar8 * 8 + 4) = param_7;
    *param_6 = uVar8;
  }
  return iVar4;
}



/* FUN_00011858 @ 00011858 */

undefined4 FUN_00011858(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  piVar2 = (int *)(DAT_00011894 + 0x140);
  while( true ) {
    if (*(uint *)(DAT_00011894 + 0x100) <= uVar1) {
      return DAT_00011890;
    }
    iVar3 = piVar2[1];
    if (*piVar2 == param_1) break;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2 + iVar3 * 2;
  }
  *param_2 = piVar2 + 2;
  *param_3 = iVar3;
  return 0;
}



/* FUN_00011898 @ 00011898 */

int FUN_00011898(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00006a70();
  if (iVar1 == 0) {
    return DAT_000118c4 + 9;
  }
  iVar1 = FUN_000067f4();
  if (iVar1 != 0xffff) {
    return DAT_000118c4;
  }
  *param_1 = *DAT_000118c8;
  return 0;
}



/* FUN_000118e8 @ 000118e8 */

undefined8 FUN_000118e8(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  piVar1 = DAT_00011998;
  iVar3 = 0;
  software_interrupt(0x5e);
  iVar2 = 0x20;
  software_interrupt(0x7d);
  iVar4 = DAT_000119a0;
  if (DAT_00011998 != (int *)0x0) {
    uVar6 = 0;
    puVar7 = (undefined4 *)(((uint)DAT_00011998 & 0xfff00000) + DAT_0001199c);
    iVar2 = DAT_0001199c + -0x14;
    piVar5 = (int *)(((uint)DAT_00011998 & 0xfff00000) + iVar2);
    do {
      if (*piVar5 != 0) {
        *piVar5 = 0;
        *piVar1 = param_2;
        *puVar7 = param_1;
        uVar6 = 0;
        goto LAB_00011960;
      }
      software_interrupt(0x56);
    } while ((param_4 == 0xffffffff) || (uVar6 = uVar6 + 1, iVar4 = DAT_000119a4, uVar6 <= param_4))
    ;
  }
  goto LAB_0001197e;
  while ((software_interrupt(0x56), param_4 == 0xffffffff ||
         (uVar6 = uVar6 + 1, iVar4 = DAT_000119a4, uVar6 <= param_4))) {
LAB_00011960:
    if (*piVar5 != 0) {
      if (*piVar5 != 1) {
        iVar3 = DAT_000119a4 + 1;
      }
      iVar4 = iVar3;
      if (param_3 != (int *)0x0) {
        iVar2 = *piVar1;
        *param_3 = iVar2;
      }
      break;
    }
  }
LAB_0001197e:
  software_interrupt(0x5f);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0x20;
    software_interrupt(0x7e);
  }
  return CONCAT44(iVar2,iVar4);
}



/* FUN_00011a10 @ 00011a10 */

int FUN_00011a10(undefined param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined auStack_60 [72];
  
  FUN_00001728(&local_68,0x50);
  iVar1 = DAT_00011a84;
  if ((uint)(param_3 + param_5) < 0x49) {
    local_65 = (undefined)param_5;
    local_66 = (undefined)param_3;
    local_68 = *(undefined *)(DAT_00011a88 + 5);
    local_67 = *(undefined *)(DAT_00011a88 + 6);
    local_64 = param_1;
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_000015e4(auStack_60,param_2,param_3);
    }
    iVar1 = FUN_0001333c(&local_68);
    if (((iVar1 == 0) && (param_4 != 0)) && (param_5 != 0)) {
      FUN_000015e4(param_4,auStack_60 + param_3,param_5);
    }
  }
  return iVar1;
}



/* FUN_00011a8c @ 00011a8c */

void FUN_00011a8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00004fd4();
  if (iVar1 == 0) {
    FUN_00011a10(param_1,0,0,0,0);
  }
  return;
}



/* FUN_00011aa8 @ 00011aa8 */

int FUN_00011aa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  
  uVar2 = 3;
  local_28 = 0;
  iVar1 = FUN_00001c04(&local_28);
  if (iVar1 == 0) {
    *(undefined4 *)(local_28 + 0x10) = param_2;
    software_interrupt(0x54);
    *(undefined4 *)(local_28 + 0x1c) = param_6;
    *(undefined4 *)(local_28 + 0x14) = param_3;
    *(undefined4 *)(local_28 + 0x24) = 3;
    *(undefined4 *)(local_28 + 8) = param_1;
    *(undefined4 *)(local_28 + 0xc) = 0;
    *(undefined4 *)(local_28 + 0x18) = *param_5;
    FUN_00001670(local_28 + 0x2c,param_7,0x20);
    iVar1 = FUN_00005444(local_28);
    if (iVar1 == 0) {
      *(undefined4 *)(local_28 + 4) = 2;
      software_interrupt(0x57);
      software_interrupt(0x56);
      iVar1 = DAT_00011b34;
      if (*(int *)(local_28 + 4) == 4) {
        FUN_000053d4(param_7);
        iVar1 = *(int *)(local_28 + 0x20);
        uVar2 = *(undefined4 *)(local_28 + 0x24);
        *param_5 = *(undefined4 *)(local_28 + 0x18);
      }
    }
  }
  if (local_28 != 0) {
    *(undefined4 *)(local_28 + 4) = 0;
  }
  *param_8 = uVar2;
  return iVar1;
}



/* FUN_00011b38 @ 00011b38 */

int FUN_00011b38(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined auStack_5c [48];
  int local_2c;
  
  iVar1 = DAT_00011c00;
  iVar2 = *(int *)(param_1 + 4);
  if ((param_3 < 5) && (FUN_00001670(auStack_5c,param_2,param_3 * 0xc), param_3 == 4)) {
    local_2c = iVar2 + 0x474;
    iVar1 = FUN_00005238(iVar2 + 0x170,0x100,DAT_00011c04,local_2c,auStack_5c,4,param_4);
    if ((iVar1 == 0) &&
       ((uVar3 = *(int *)(iVar2 + 0x474) * 8, 0xff < uVar3 &&
        (uVar3 <= *(uint *)(*(int *)(param_1 + 4) + 0x60))))) {
      iVar1 = FUN_00005238(iVar2 + 0x370,0x100,DAT_00011c08,local_2c,auStack_5c,4,param_4);
      if (iVar1 == 0) {
        iVar1 = FUN_00005238(iVar2 + 0x270,0x100,DAT_00011c0c,iVar2 + 0x478,auStack_5c,4,param_4);
        if (iVar1 == 0) {
          iVar1 = FUN_00005238(iVar2 + 0x70,0x100,DAT_00011c10,iVar2 + 0x470,auStack_5c,4,param_4);
          if (iVar1 == 0) {
            *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x40c;
            *(uint *)(*(int *)(param_1 + 4) + 0x5c) = uVar3;
          }
        }
      }
    }
  }
  return iVar1;
}



/* FUN_00011c14 @ 00011c14 */

void FUN_00011c14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_00011c34;
  *(uint *)(*DAT_00011c30 + 0x924) = *(uint *)(*DAT_00011c30 + 0x924) | 0x80;
  *(undefined4 *)(iVar1 + 0x70c) = param_1;
  return;
}



/* FUN_00011c38 @ 00011c38 */

int FUN_00011c38(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_5c [60];
  
  iVar1 = DAT_00011d1c;
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar2 + 0x58);
  if (((param_3 < 6) &&
      ((FUN_00001670(auStack_5c,param_2,param_3 * 0xc), iVar3 != DAT_00011d20 || (param_3 == 4))))
     && ((iVar3 != DAT_00011d24 || (param_3 == 5)))) {
    iVar1 = FUN_00005238(iVar2 + 0x70,0x80,DAT_00011d28,0,auStack_5c,param_3,param_4);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_00005238(iVar2 + 0xf0,0x14,DAT_00011d2c,0,auStack_5c,param_3,param_4),
         iVar1 == 0)) &&
        (iVar1 = FUN_00005238(iVar2 + 0x104,0x80,DAT_00011d30,0,auStack_5c,param_3,param_4),
        iVar1 == 0)) &&
       (iVar1 = FUN_00005238(iVar2 + 0x184,0x80,DAT_00011d34,0,auStack_5c,param_3,param_4),
       iVar1 == 0)) {
      if ((iVar3 == DAT_00011d24 + -1) &&
         (iVar1 = FUN_00005238(iVar2 + 0x204,0x80,DAT_00011d38,0,auStack_5c,param_3,param_4),
         iVar1 != 0)) {
        return iVar1;
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0x214;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = 0x400;
    }
  }
  return iVar1;
}



/* FUN_00011d3c @ 00011d3c */

int FUN_00011d3c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_54 [52];
  
  iVar2 = DAT_00011e10;
  iVar3 = *(int *)(param_1 + 4);
  if (param_3 < 5) {
    FUN_00001670(auStack_54,param_2,param_3 * 0xc);
    iVar1 = FUN_00007af6(auStack_54,param_3,DAT_00011e14);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 4)) {
      *(undefined4 *)(iVar3 + 0x74) = 0x180;
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x58);
      if ((iVar1 == DAT_00011e18) || (iVar1 == DAT_00011e18 + 1)) {
        if (param_3 != 4) {
          return iVar2;
        }
        iVar2 = FUN_00005238(iVar3 + 0x78,0x42,DAT_00011e1c,0,auStack_54,4,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        if ((iVar1 != DAT_00011e20) && (iVar1 != DAT_00011e20 + 1)) {
          return iVar2;
        }
        if (param_3 != 3) {
          return iVar2;
        }
      }
      iVar2 = FUN_00005238(iVar3 + 0xba,0x42,DAT_00011e24,0,auStack_54,param_3,param_4);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00005238(iVar3 + 0xfc,0x42,DAT_00011e28,0,auStack_54,param_3,param_4),
         iVar2 == 0)) {
        *(undefined4 *)(iVar3 + 0x70) = 4;
        *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0xd0;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = *(undefined4 *)(iVar3 + 0x74);
      }
    }
  }
  return iVar2;
}



/* FUN_00011e2c @ 00011e2c */

undefined4 FUN_00011e2c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  software_interrupt(0x7b);
  software_interrupt(0x7b);
  software_interrupt(0x7b);
  *param_3 = param_1;
  param_3[1] = param_2;
  return 0;
}



/* FUN_00011ea0 @ 00011ea0 */

int FUN_00011ea0(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  param_1 = param_1 & 0x1f;
  while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
    uVar2 = param_1 >> 5;
    uVar1 = param_1 & 0x1f;
    param_1 = param_1 + param_3;
    *(uint *)(param_4 + uVar2 * 4) = *(uint *)(param_4 + uVar2 * 4) | 1 << uVar1;
  }
  return uVar2 + 1;
}



/* FUN_00011eca @ 00011eca */

void FUN_00011eca(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    if ((param_1 & 1) != 0) {
      FUN_00011ea0(param_3 + uVar1,param_4,param_5,param_6);
    }
    param_1 = param_1 >> 1;
  }
  return;
}



/* FUN_00011efc @ 00011efc */

int FUN_00011efc(undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_68 [64];
  int local_28;
  
  iVar1 = *DAT_00011fa4;
  iVar5 = 0;
  iVar6 = DAT_00011fac;
  local_28 = iVar1;
  switch(param_3) {
  case 0x30000002:
    uVar3 = 0x40;
    uVar2 = 0x14;
    iVar4 = DAT_00011fa8;
    break;
  case 0x30000003:
    uVar3 = 0x40;
    uVar2 = 0x1c;
    iVar4 = DAT_00011fa8 + 1;
    break;
  case 0x30000004:
    uVar3 = 0x40;
    uVar2 = 0x20;
    iVar4 = DAT_00011fa8 + 2;
    break;
  case 0x30000005:
    uVar3 = 0x80;
    uVar2 = 0x30;
    iVar4 = DAT_00011fa8 + 3;
    break;
  case 0x30000006:
    uVar3 = 0x80;
    uVar2 = 0x40;
    iVar4 = DAT_00011fa8 + 4;
    break;
  default:
    goto switchD_00011f20_caseD_5;
  }
  if (uVar3 < param_5) {
    iVar5 = FUN_00009094(param_1,iVar4,param_4,param_5,auStack_68,uVar2);
    iVar6 = iVar5;
    if (iVar5 != 0) goto switchD_00011f20_caseD_5;
    param_4 = auStack_68;
    param_5 = uVar2;
  }
  FUN_000015e4(param_2 + 0xc4,param_4,param_5);
  *(uint *)(param_2 + 0xc0) = uVar3;
  *(uint *)(param_2 + 0x144) = param_5;
  *(int *)(param_2 + 0x148) = iVar4;
  iVar6 = iVar5;
switchD_00011f20_caseD_5:
  if (local_28 != iVar1) {
    FUN_00001a20();
  }
  return iVar6;
}



/* FUN_00011fb0 @ 00011fb0 */

void FUN_00011fb0(uint param_1)

{
  *DAT_00011fbc = *DAT_00011fbc | param_1;
  return;
}



/* FUN_00011fc0 @ 00011fc0 */

undefined4 FUN_00011fc0(void)

{
  return DAT_00011fc4;
}



/* FUN_00011fc8 @ 00011fc8 */

uint FUN_00011fc8(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  return (uint)param_4 | param_1 << 0x10;
}



/* FUN_00011fd0 @ 00011fd0 */

undefined4 FUN_00011fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (0xff < param_4 - 0x100U) {
    return DAT_00012010;
  }
  iVar1 = DAT_00012014 + (param_4 - 0x100U) * 0x58;
  *(int *)(iVar1 + 0x54) = param_4;
  *(char *)(iVar1 + 0x50) = (char)param_2;
  FUN_000015e4(iVar1,param_1,param_2);
  FUN_000015e4(iVar1 + 0x40,param_3,0x10);
  return 0;
}



/* FUN_0001202c @ 0001202c */

int FUN_0001202c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  undefined auStack_ac [96];
  undefined auStack_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  iVar4 = DAT_000121c4;
  local_28 = 0;
  iVar7 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(iVar7 + 0x58);
  if (((param_3 < 9) &&
      ((FUN_00001670(auStack_ac,param_2,param_3 * 0xc), iVar8 != DAT_000121c8 || (param_3 == 2))))
     && ((iVar8 != DAT_000121cc || ((param_3 == 3 || (param_3 == 8)))))) {
    iVar10 = 0x10;
    iVar2 = FUN_00007b0e(auStack_ac,param_3,DAT_000121d0,param_4);
    if ((iVar2 != 0) &&
       (uVar6 = *(uint *)(iVar2 + 8), uVar6 <= *(uint *)(*(int *)(param_1 + 4) + 0x60) >> 3)) {
      *(uint *)(iVar7 + 0x74) = uVar6 << 3;
      iVar3 = FUN_0000b694((undefined4 *)(iVar7 + 0x70),auStack_4c);
      if (iVar3 == 0) {
        iVar4 = *(int *)(iVar2 + 4);
        for (uVar5 = 0; uVar1 = DAT_000121d4, uVar5 < uVar6; uVar5 = uVar5 + 1) {
          *(undefined *)(local_48 + uVar5) = *(undefined *)((uVar6 - uVar5) + iVar4 + -1);
        }
        iVar10 = iVar10 + uVar6;
        *(undefined4 *)(iVar7 + 0x78) = 0;
        iVar4 = FUN_00005238(iVar7 + 0x78,4,uVar1,0,auStack_ac,param_3,param_4);
        if ((iVar4 == 0) && (iVar2 = FUN_00007af6(auStack_ac,param_3,DAT_000121d4), iVar2 != 0)) {
          bVar9 = iVar8 == DAT_000121cc;
          *(undefined4 *)(iVar7 + 0x7c) = *(undefined4 *)(iVar2 + 8);
          if (bVar9) {
            iVar4 = FUN_00005238(local_44,uVar6,DAT_000121d8,0,auStack_ac,param_3,param_4);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar10 = iVar10 + uVar6;
            iVar4 = 0;
            if (param_3 == 8) {
              local_2c = uVar6 >> 1;
              local_28 = 1;
              iVar10 = iVar10 + local_2c * 5;
              iVar4 = FUN_00005238(local_40,local_2c,DAT_000121dc,0,auStack_ac,8,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_00005238(local_3c,local_2c,DAT_000121e0,0,auStack_ac,8,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_00005238(local_38,local_2c,DAT_000121e4,0,auStack_ac,8,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_00005238(local_34,local_2c,DAT_000121e8,0,auStack_ac,8,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
              iVar4 = FUN_00005238(local_30,local_2c,DAT_000121ec,0,auStack_ac,8,param_4);
              if (iVar4 != 0) {
                return iVar4;
              }
            }
          }
          *(int *)(*(int *)(param_1 + 4) + 4) = iVar10;
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c) = *(undefined4 *)(iVar7 + 0x74);
          *(undefined4 *)(iVar7 + 0x70) = local_28;
        }
      }
    }
  }
  return iVar4;
}



/* FUN_000121f0 @ 000121f0 */

undefined4 FUN_000121f0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = DAT_00012254;
  iVar5 = *param_2;
  iVar1 = param_2[1];
  uVar3 = param_2[2];
  iVar2 = FUN_0000a14c(iVar1,uVar3,param_4);
  if ((((iVar2 != 0) && (param_3 == 1)) && (iVar5 == -0x40000000)) &&
     (uVar3 <= *(uint *)(*(int *)(param_1 + 4) + 0x60) >> 3)) {
    FUN_000015e4(*(int *)(param_1 + 4) + 0x70,iVar1,uVar3);
    iVar1 = DAT_00012258;
    *(uint *)(*(int *)(param_1 + 4) + 4) = uVar3;
    *(uint *)(*(int *)(param_1 + 4) + 0x5c) = uVar3 * 8;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x58);
    if ((iVar2 == iVar1) || (iVar2 == iVar1 + 2)) {
      *(uint *)(*(int *)(param_1 + 4) + 0x5c) = uVar3 * 8 - (uVar3 & 0x1fffffff);
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* FUN_0001225c @ 0001225c */

void FUN_0001225c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if ((param_1 - 0x10U < 0x80) &&
     (iVar1 = DAT_00012274 + (param_1 - 0x10U) * 8, *(byte *)(iVar1 + 1) == param_3)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  return;
}



/* FUN_00012278 @ 00012278 */

int FUN_00012278(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_r3;
  uint uVar4;
  uint local_14;
  
  iVar1 = DAT_000122c8;
  uVar4 = 0;
  local_14 = in_r3;
  while( true ) {
    iVar2 = FUN_00011a8c(*(undefined *)(iVar1 + 0x28));
    if ((iVar2 != 0) ||
       (iVar2 = FUN_00011a10(*(undefined *)(iVar1 + 0x24),0,0,&local_14,1), iVar2 != 0)) {
      return iVar2;
    }
    uVar3 = local_14 & 0xff;
    if (*(char *)(iVar1 + 10) != '\x01') {
      uVar3 = ~uVar3;
    }
    if ((*(byte *)(iVar1 + 9) & uVar3) == 0) break;
    uVar4 = uVar4 + 1;
    if (10 < uVar4) {
      return DAT_000122cc;
    }
    FUN_0001647e(1);
  }
  return 0;
}



/* FUN_000122d0 @ 000122d0 */

int FUN_000122d0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int local_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  int local_10;
  
  iVar1 = DAT_00012314;
  if (*DAT_0001230c != '\0') {
    local_24 = *(uint *)(DAT_0001230c + 0x10) + param_2;
    iStack_20 = *(int *)(DAT_0001230c + 0x14) + (uint)CARRY4(*(uint *)(DAT_0001230c + 0x10),param_2)
    ;
    uStack_18 = 0;
    local_1c = param_3;
    local_14 = param_1;
    iVar1 = FUN_0000e978(&local_24,0);
    if (iVar1 == 0) {
      *(undefined *)(DAT_00012310 + local_10) = 1;
    }
  }
  return iVar1;
}



/* FUN_00012318 @ 00012318 */

void FUN_00012318(undefined4 *param_1,int param_2)

{
  param_1[1] = DAT_0001232c;
  *param_1 = 4;
  param_1[3] = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0x1000000;
  return;
}



/* FUN_00012330 @ 00012330 */

void FUN_00012330(undefined4 *param_1)

{
  param_1[1] = DAT_00012348;
  *param_1 = 5;
  param_1[2] = 0;
  param_1[3] = 0x1000;
  param_1[4] = 0xff;
  return;
}



/* FUN_0001234c @ 0001234c */

void FUN_0001234c(uint param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 0x10 | param_2 << 0x10;
  FUN_00017338(0,0,uVar3);
  FUN_00017338(0,4,uVar3 + (param_3 >> 0x10) + -1);
  FUN_00017338(0,8,0x37);
  bVar2 = FUN_00017338(0,0xc,&BYTE_0000fc22);
  puVar1 = DAT_00012394;
  software_interrupt(0x66);
  *DAT_00012394 = (uint)bVar2;
  puVar1[1] = 0x68;
  return;
}



/* FUN_00012398 @ 00012398 */

undefined4 FUN_00012398(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    return 0;
  }
  return 0x2c;
}



/* FUN_000123a4 @ 000123a4 */

int FUN_000123a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_48 [32];
  int local_28;
  
  pcVar1 = DAT_00012438;
  iVar4 = *DAT_00012430;
  iVar2 = DAT_00012434;
  local_28 = iVar4;
  if (param_5 == 0x20) {
    if (*DAT_00012438 == '\0') {
      iVar2 = FUN_00005f34(param_1);
      if (iVar2 != 0) goto LAB_00012408;
      *pcVar1 = '\x01';
    }
    if (param_6 == 0) {
      iVar2 = FUN_00009198(param_1,DAT_0001243c,DAT_00012440,0x20,param_2,param_3,param_4,0x20);
    }
    else {
      iVar2 = FUN_00009198(param_1,DAT_0001243c,DAT_00012440,0x20,param_2,param_3,auStack_48,0x20);
      if ((iVar2 == 0) && (iVar3 = FUN_0000ae74(auStack_48,param_4,0x20), iVar3 != 0)) {
        iVar2 = DAT_00012444;
      }
    }
  }
LAB_00012408:
  if (local_28 != iVar4) {
    FUN_00001a20();
  }
  return iVar2;
}



/* FUN_00012448 @ 00012448 */

undefined4 FUN_00012448(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 3) {
    puVar2 = *(uint **)(DAT_0001249c + param_1 * 4);
    uVar3 = *puVar2;
    if (-1 < (int)(uVar3 << 0x1e)) {
      return 0x34;
    }
    iVar4 = DAT_0001249c + -0x54 + param_1 * 0x1c;
    iVar1 = FUN_00009edc(param_1,param_2);
    if (iVar1 != 0) {
      puVar2[2] = *(int *)(iVar4 + 4) + (param_2 + 1U & *(int *)(iVar4 + 0x10) - 1U) * 0x20;
      puVar2[4] = 2;
      *puVar2 = uVar3 | 1;
      return 0;
    }
  }
  return 0x30;
}



/* FUN_000124a0 @ 000124a0 */

undefined4 FUN_000124a0(int param_1)

{
  if (param_1 != 0x12) {
    if (param_1 < 0x13) {
      if (((param_1 != 0xc) && (param_1 != 0xe)) && ((param_1 != 0xf && (param_1 != 0x10)))) {
        return 0;
      }
    }
    else if ((((param_1 != 0x22) && (param_1 != 0x23)) && (param_1 != 0x28)) && (param_1 != 0x29)) {
      return 0;
    }
  }
  return 1;
}



/* FUN_000124d4 @ 000124d4 */

int FUN_000124d4(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint local_150;
  uint local_14c [63];
  uint local_50;
  undefined auStack_4c [32];
  int local_2c;
  
  piVar1 = DAT_00012604;
  iVar5 = *DAT_000125f8;
  uVar9 = 0;
  local_50 = 1;
  iVar3 = *DAT_000125fc;
  iVar6 = DAT_00012600;
  local_2c = iVar5;
  if (iVar3 != 1) goto LAB_000125e4;
  if (param_4 == 1) {
    iVar6 = DAT_00012600 + -1;
    goto LAB_000125e4;
  }
  software_interrupt(0x5e);
  software_interrupt(0xa7);
  if (param_2 == 0xffffffff) {
    iVar6 = FUN_00012680(auStack_4c,&local_150,&local_50);
    if (iVar6 == 0) {
      uVar9 = 1;
      param_2 = local_150;
      goto LAB_00012530;
    }
  }
  else {
LAB_00012530:
    piVar2 = DAT_00012608;
    iVar3 = DAT_00012600;
    if (param_2 < 0x40) {
      iVar6 = DAT_00012600 + 3;
      iVar4 = *DAT_00012608 + param_2 * 8;
      if ((*(char *)(iVar4 + 0x10) == '\x01') && ((uint)*(byte *)(iVar4 + 0x11) == (param_4 & 0xff))
         ) {
        uVar8 = (uint)*(ushort *)(iVar4 + 0x12);
        iVar6 = FUN_0000ae74(auStack_4c,DAT_00012608[2] + uVar8 * 0x10 + 0x10,0x10);
        if (iVar6 == 0) {
          for (uVar7 = 0; uVar7 < local_50; uVar7 = uVar7 + 1) {
            iVar6 = *piVar2 + param_2 * 8;
            *(undefined4 *)(iVar6 + 0x14) = 0;
            *(undefined *)(iVar6 + 0x10) = 0;
            FUN_000016e4(piVar2[2] + uVar8 * 0x10 + 0x10,0x10);
            if (uVar7 + 1 == local_50) break;
            param_2 = local_14c[uVar7];
            uVar8 = (uint)*(ushort *)(*piVar2 + param_2 * 8 + 0x12);
          }
          iVar6 = FUN_0001260c(auStack_4c,uVar9);
          if ((iVar6 == 0) &&
             (iVar6 = FUN_00013e98(0x12,(int *)*piVar2,*(int *)*piVar2 * 8 + 0x10), iVar6 == 0)) {
            iVar6 = FUN_00013e98(0x11,(int *)piVar2[2],*(int *)piVar2[2] * 0x10 + 0x10);
          }
        }
        else {
          iVar6 = iVar3 + 4;
        }
      }
    }
    else {
      iVar6 = DAT_00012600 + 2;
    }
  }
  iVar3 = *piVar1;
  software_interrupt(0x5f);
LAB_000125e4:
  if (local_2c != iVar5) {
    FUN_00001a20(iVar3);
  }
  return iVar6;
}



/* FUN_0001260c @ 0001260c */

undefined4 FUN_0001260c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_0001267c;
  uVar1 = DAT_00012678;
  uVar4 = 0;
  while ((iVar5 = iVar3 + uVar4 * 0x18, *(int *)(iVar5 + 4) != 1 ||
         (iVar2 = FUN_00001550(iVar5 + 0xc,param_1,0x10), iVar2 != 0))) {
    uVar4 = uVar4 + 1;
    if (0x3f < uVar4) {
      return uVar1;
    }
  }
  iVar3 = iVar3 + uVar4 * 0x18;
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + 8) + -1;
    *(int *)(iVar5 + 8) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 4) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
  }
  return 0;
}



/* FUN_00012680 @ 00012680 */

undefined4 FUN_00012680(undefined4 param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_000126f4;
  uVar5 = 0;
  *param_3 = 0;
  do {
    puVar4 = (uint *)piVar1[2];
    if (*puVar4 <= uVar5) {
      uVar6 = DAT_000126f8;
      if (*param_3 != 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
    iVar2 = FUN_00001550(puVar4 + uVar5 * 4 + 4,param_1,0x10);
    if (iVar2 == 0) {
      puVar4 = (uint *)*piVar1;
      for (uVar3 = 0; uVar3 < *puVar4; uVar3 = uVar3 + 1) {
        if (((uint)*(ushort *)((int)puVar4 + uVar3 * 8 + 0x12) == (uVar5 & 0xff)) &&
           (*(char *)(puVar4 + uVar3 * 2 + 4) == '\x01')) {
          *param_2 = uVar3;
          param_2 = param_2 + 1;
          *param_3 = *param_3 + 1;
          break;
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



/* FUN_000126fc @ 000126fc */

int FUN_000126fc(undefined4 param_1,uint param_2,undefined *param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uStack_60;
  int iStack_5c;
  undefined auStack_58 [32];
  int local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined *local_2c;
  int iStack_28;
  
  piVar8 = DAT_00012804;
  piVar1 = DAT_00012800;
  iVar2 = *DAT_000127f4;
  iVar3 = *DAT_000127f8;
  iVar6 = DAT_000127fc;
  local_38 = iVar2;
  local_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  if (iVar3 != 1) goto LAB_000127e0;
  software_interrupt(0x5e);
  iVar6 = DAT_000127fc + 2;
  if (param_2 < 0x40) {
    iVar3 = *DAT_00012804 + param_2 * 8;
    iVar6 = DAT_000127fc + 3;
    if (((*(char *)(iVar3 + 0x10) == '\x01') && ((uint)*(byte *)(iVar3 + 0x11) == (param_5 & 0xff)))
       && (iVar10 = DAT_000127fc + 4, iVar6 = iVar10, *(int *)(iVar3 + 0x14) == param_4)) {
      if (param_5 == 1) {
        uStack_60 = param_2;
        iStack_5c = param_4;
        iVar6 = FUN_00009198(param_1,DAT_00012808,
                             DAT_00012804[1] + (uint)*(ushort *)(iVar3 + 0x12) * 0x20 + 0x10,0x20,
                             &uStack_60,8,auStack_58,0x20);
        if (iVar6 == 0) {
          uVar9 = 0x20;
          puVar7 = auStack_58;
          puVar4 = local_2c;
          goto LAB_000127aa;
        }
        iVar6 = DAT_000127fc + 5;
      }
      else {
        iVar6 = DAT_000127fc + 2;
        if (param_5 == 2) {
          software_interrupt(0xa7);
          uVar9 = 0x10;
          puVar7 = (undefined *)(DAT_00012804[2] + (uint)*(ushort *)(iVar3 + 0x12) * 0x10 + 0x10);
          puVar4 = auStack_58;
LAB_000127aa:
          iVar3 = FUN_0000ae74(puVar4,puVar7,uVar9);
          iVar6 = iVar10;
          if (iVar3 == 0) {
            piVar8 = (int *)*piVar8;
            uVar5 = piVar8[param_2 * 2 + 5] + 1;
            if (uVar5 < (uint)piVar8[param_2 * 2 + 5]) {
              iVar6 = DAT_000127fc + 7;
            }
            else {
              piVar8[param_2 * 2 + 5] = uVar5;
              iVar6 = FUN_00013e98(0x12,piVar8,*piVar8 * 8 + 0x10);
            }
          }
        }
      }
    }
  }
  iVar3 = *piVar1;
  software_interrupt(0x5f);
LAB_000127e0:
  if (local_38 != iVar2) {
    FUN_00001a20(iVar3);
  }
  return iVar6;
}



/* FUN_0001280c @ 0001280c */

int FUN_0001280c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_20;
  
  local_20 = 0;
  FUN_00001728(DAT_000128bc,0x604);
  FUN_00001728(DAT_000128c0,0x210);
  FUN_00001728(DAT_000128c4,0x810);
  FUN_00001728(DAT_000128c8,0x410);
  FUN_00013dd8(&local_20);
  puVar1 = DAT_000128bc;
  if ((local_20 == 1) && (*(int *)(DAT_000128cc + 0x3ec) == 1)) {
    iVar3 = FUN_00013c5c(0x10,DAT_000128c4,0x810);
    puVar5 = DAT_000128d4;
    iVar2 = DAT_000128d0;
    if ((((iVar3 == 0) || (iVar3 == DAT_000128d0)) &&
        ((iVar3 = FUN_00013c5c(0x11,DAT_000128c8,0x410), iVar3 == 0 || (iVar3 == iVar2)))) &&
       (iVar3 = FUN_00013c5c(0x12,DAT_000128c0,0x210), iVar3 == 0)) {
      iVar3 = FUN_000128d8(puVar5[2]);
    }
    if (iVar3 == iVar2) {
      puVar4 = (undefined4 *)*puVar5;
      *(undefined *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4 = (undefined4 *)puVar5[1];
      *(undefined *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar5 = (undefined4 *)puVar5[2];
      *(undefined *)(puVar5 + 1) = 0;
      *puVar5 = 0;
      iVar3 = 0;
    }
    else if (iVar3 != 0) {
      return iVar3;
    }
    *puVar1 = 1;
  }
  else {
    iVar3 = 0;
    *DAT_000128bc = 0;
  }
  return iVar3;
}



/* FUN_000128d8 @ 000128d8 */

int FUN_000128d8(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = DAT_00012994;
  iVar1 = DAT_00012990;
  if (*param_1 < 0x41) {
    iVar3 = DAT_00012990;
    for (uVar9 = 0; uVar9 < *param_1; uVar9 = uVar9 + 1) {
      puVar4 = param_1 + uVar9 * 4 + 4;
      iVar3 = FUN_00009e34(puVar4,0x10);
      if (iVar3 == 0) {
        uVar6 = 0;
        uVar7 = 0xff;
        do {
          iVar3 = iVar2 + uVar6 * 0x18;
          if (*(int *)(iVar3 + 4) == 1) {
            iVar5 = FUN_00001550(iVar3 + 0xc,puVar4,0x10);
            uVar8 = uVar7;
            if (iVar5 == 0) {
              uVar6 = *(uint *)(iVar2 + uVar6 * 0x18 + 8);
              if (uVar6 < 0x21) {
                *(uint *)(iVar3 + 8) = uVar6 + 1;
                iVar3 = 0;
              }
              else {
                iVar3 = DAT_00012990 + 1;
              }
              break;
            }
          }
          else {
            uVar8 = uVar6;
            if (uVar7 != 0xff) {
              uVar8 = uVar7;
            }
          }
          uVar6 = uVar6 + 1;
          iVar3 = iVar1;
          uVar7 = uVar8;
        } while (uVar6 < 0x40);
        if ((uVar7 != 0xff) && (iVar3 == iVar1)) {
          iVar3 = iVar2 + uVar7 * 0x18;
          FUN_000015e4(iVar3 + 0xc,puVar4,0x10);
          *(undefined4 *)(iVar3 + 8) = 1;
          *(undefined4 *)(iVar3 + 4) = 1;
          goto LAB_0001290e;
        }
      }
      else {
LAB_0001290e:
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = DAT_00012990 + 1;
  }
  return iVar3;
}



/* FUN_00012998 @ 00012998 */

int FUN_00012998(undefined4 param_1,uint param_2,undefined *param_3,undefined4 *param_4,uint param_5
                )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_60;
  undefined auStack_5c [32];
  int local_3c;
  undefined4 local_34;
  uint uStack_30;
  undefined *local_2c;
  undefined4 *local_28;
  
  piVar2 = DAT_00012a90;
  piVar1 = DAT_00012a8c;
  iVar3 = *DAT_00012a80;
  iVar4 = *DAT_00012a84;
  iVar5 = DAT_00012a88;
  local_3c = iVar3;
  local_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (iVar4 != 1) goto LAB_00012a6c;
  software_interrupt(0x5e);
  iVar5 = DAT_00012a88 + 2;
  if (param_2 < 0x40) {
    iVar4 = *DAT_00012a90 + param_2 * 8;
    iVar5 = DAT_00012a88 + 3;
    if ((*(char *)(iVar4 + 0x10) == '\x01') && ((uint)*(byte *)(iVar4 + 0x11) == (param_5 & 0xff)))
    {
      iVar9 = DAT_00012a88 + 4;
      if (param_5 == 1) {
        local_60 = param_2;
        iVar5 = FUN_00009198(param_1,DAT_00012a94,
                             DAT_00012a90[1] + (uint)*(ushort *)(iVar4 + 0x12) * 0x20 + 0x10,0x20,
                             &local_60,4,auStack_5c,0x20);
        if (iVar5 == 0) {
          uVar8 = 0x20;
          puVar7 = auStack_5c;
          puVar6 = local_2c;
          goto LAB_00012a4e;
        }
        iVar5 = DAT_00012a88 + 5;
      }
      else {
        iVar5 = DAT_00012a88 + 2;
        if (param_5 == 2) {
          software_interrupt(0xa7);
          uVar8 = 0x10;
          puVar7 = (undefined *)(DAT_00012a90[2] + (uint)*(ushort *)(iVar4 + 0x12) * 0x10 + 0x10);
          puVar6 = auStack_5c;
LAB_00012a4e:
          iVar4 = FUN_0000ae74(puVar6,puVar7,uVar8);
          iVar5 = iVar9;
          if (iVar4 == 0) {
            *local_28 = *(undefined4 *)(*piVar2 + param_2 * 8 + 0x14);
            iVar5 = 0;
          }
        }
      }
    }
  }
  iVar4 = *piVar1;
  software_interrupt(0x5f);
LAB_00012a6c:
  if (local_3c != iVar3) {
    FUN_00001a20(iVar4);
  }
  return iVar5;
}



/* FUN_00012a98 @ 00012a98 */

int FUN_00012a98(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined auStack_48 [16];
  int local_38;
  undefined4 local_34;
  uint *local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  piVar6 = DAT_00012c10;
  iVar2 = *DAT_00012c00;
  bVar1 = false;
  uVar8 = 0;
  uVar7 = 0;
  local_38 = iVar2;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (*DAT_00012c08 != 1) {
    iVar10 = DAT_00012c04 + 1;
    goto LAB_00012bec;
  }
  software_interrupt(0x5e);
  iVar11 = DAT_00012c04 + 2;
  puVar4 = (uint *)*DAT_00012c10;
  uVar9 = *puVar4;
  if (uVar9 < 0x40) {
LAB_00012b08:
    iVar10 = DAT_00012c04;
    if (*(char *)(puVar4 + uVar9 * 2 + 4) == '\0') {
      if (param_4 == 1) {
        if (!bVar1) {
          uVar8 = *(uint *)DAT_00012c10[1];
        }
        iVar10 = iVar11;
        if (uVar8 < 0x40) {
          FUN_000015e4(DAT_00012c10[1] + uVar8 * 0x20 + 0x10,param_3,0x20);
          if (!bVar1) {
            *(int *)piVar6[1] = *(int *)piVar6[1] + 1;
          }
          piVar5 = (int *)piVar6[1];
          uVar3 = 0x10;
          iVar10 = *piVar5 << 5;
LAB_00012ba8:
          iVar10 = FUN_00013e98(uVar3,piVar5,iVar10 + 0x10);
          if (iVar10 == 0) {
            piVar6 = (int *)*piVar6;
            piVar6[uVar9 * 2 + 5] = 0;
            *(undefined *)(piVar6 + uVar9 * 2 + 4) = 1;
            *(char *)((int)piVar6 + uVar9 * 8 + 0x11) = (char)param_4;
            *(short *)((int)piVar6 + uVar9 * 8 + 0x12) = (short)uVar8;
            if (!bVar1) {
              *piVar6 = *piVar6 + 1;
            }
            iVar10 = FUN_00013e98(0x12,piVar6,*piVar6 * 8 + 0x10);
            if (iVar10 == 0) {
              *local_30 = uVar9;
            }
          }
        }
      }
      else if (param_4 == 2) {
        if (!bVar1) {
          uVar8 = *(uint *)DAT_00012c10[2];
        }
        iVar10 = iVar11;
        if (uVar8 < 0x40) {
          software_interrupt(0xa7);
          iVar10 = FUN_00012c14(auStack_48,auStack_48);
          if (iVar10 == 0) {
            FUN_000015e4(piVar6[2] + uVar8 * 0x10 + 0x10,auStack_48,0x10);
            if (!bVar1) {
              *(int *)piVar6[2] = *(int *)piVar6[2] + 1;
            }
            piVar5 = (int *)piVar6[2];
            uVar3 = 0x11;
            iVar10 = *piVar5 << 4;
            goto LAB_00012ba8;
          }
        }
      }
      else {
        iVar10 = DAT_00012c04 + 3;
      }
    }
  }
  else {
    for (; uVar7 < uVar9; uVar7 = uVar7 + 1) {
      if ((*(char *)(puVar4 + uVar7 * 2 + 4) == '\0') &&
         ((uint)*(byte *)((int)puVar4 + uVar7 * 8 + 0x11) == (param_4 & 0xff))) {
        bVar1 = true;
        uVar8 = (uint)*(ushort *)((int)puVar4 + uVar7 * 8 + 0x12);
        uVar9 = uVar7;
        goto LAB_00012b08;
      }
    }
    iVar10 = iVar11;
    if (DAT_00012c04 == 0) goto LAB_00012b08;
  }
  software_interrupt(0x5f);
LAB_00012bec:
  if (local_38 != iVar2) {
    FUN_00001a20();
  }
  return iVar10;
}



/* FUN_00012c14 @ 00012c14 */

int FUN_00012c14(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = DAT_00012ca0;
  iVar1 = DAT_00012c9c;
  uVar3 = 0;
  uVar5 = 0xff;
  do {
    iVar7 = iVar4 + uVar3 * 0x18;
    if (*(int *)(iVar7 + 4) == 1) {
      iVar2 = FUN_00001550(iVar7 + 0xc,param_1,0x10);
      uVar6 = uVar5;
      if (iVar2 == 0) {
        uVar3 = *(uint *)(iVar4 + uVar3 * 0x18 + 8);
        if (uVar3 < 0x20) {
          *(uint *)(iVar7 + 8) = uVar3 + 1;
          iVar7 = 0;
        }
        else {
          iVar7 = DAT_00012c9c + 7;
        }
        break;
      }
    }
    else {
      uVar6 = uVar3;
      if (uVar5 != 0xff) {
        uVar6 = uVar5;
      }
    }
    uVar3 = uVar3 + 1;
    uVar5 = uVar6;
    iVar7 = iVar1;
  } while (uVar3 < 0x40);
  if ((uVar5 != 0xff) && (iVar7 == iVar1)) {
    iVar4 = iVar4 + uVar5 * 0x18;
    FUN_000015e4(iVar4 + 0xc,param_1,0x10);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    *(undefined4 *)(iVar4 + 4) = 1;
    iVar7 = 0;
  }
  return iVar7;
}



/* FUN_00012ca4 @ 00012ca4 */

int FUN_00012ca4(int param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = DAT_00012de0;
  iVar3 = DAT_00012ddc;
  if (((param_1 != 0 || param_2 != 0) && (*param_4 != 0 || param_4[1] != 0)) &&
     (param_3 - 0x68U < 0x1f99)) {
    uVar4 = DAT_00012ddc >> 0x13;
    software_interrupt(0x6b);
    if (&param_5 == (undefined4 *)0x38) {
      software_interrupt(0x6d);
      *(int *)(DAT_00012de0 + 0x10) = param_3;
      *(int *)(iVar1 + 0x14) = param_3 + -8;
      *(uint *)(iVar1 + 0x18) = param_2 - (param_2 & uVar4);
      FUN_00001670(DAT_00012de4,param_4,0x18,0);
      FUN_00001670(DAT_00012de4 + 6,param_5 + 0x18,0x18);
      FUN_00001670(DAT_00012de4 + 0xc,param_5,0x18);
      FUN_00001670(DAT_00012de4 + 0x12,param_5 + 0x30,0x18);
      puVar2 = DAT_00012de4;
      if (DAT_00012de4[2] == 0) {
        uVar6 = *DAT_00012de4 + 0xfc000000;
        uVar4 = DAT_00012de4[1] + 0xfffd + (uint)(0x3ffffff < *DAT_00012de4);
      }
      else {
        if (DAT_00012de4[2] != 1) {
          return iVar3;
        }
        uVar6 = *DAT_00012de4;
        uVar4 = DAT_00012de4[1];
      }
      *(uint *)(iVar1 + 0x20) = uVar6;
      *(uint *)(iVar1 + 0x24) = uVar4;
      iVar5 = 1 << (puVar2[3] & 0xff);
      *(int *)(iVar1 + 0x1c) = iVar5;
      iVar5 = FUN_00004f80(uVar6,*(undefined4 *)(iVar1 + 0x24),iVar5);
      if (((iVar5 == 0) && (1 << (DAT_00012de4[0xf] & 0xff) == 4)) &&
         ((1 << (DAT_00012de4[9] & 0xff) == 4 &&
          ((1 << (DAT_00012de4[0x15] & 0xff) == 4 && (1 << (puVar2[3] & 0xff) == 1)))))) {
        *(undefined4 *)(iVar1 + 4) = 1;
        software_interrupt(0x5c);
        iVar3 = 0;
      }
    }
    else {
      iVar3 = DAT_00012ddc + 1;
    }
  }
  return iVar3;
}



/* FUN_00012dec @ 00012dec */

int FUN_00012dec(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar3 = DAT_00012e9c;
  iVar6 = 0;
  uVar7 = 0;
  iVar5 = DAT_00012ea4;
  if (((*(int *)(DAT_00012e9c + 0x18) != 0) && (*(int *)(DAT_00012e9c + 4) != 0)) &&
     (*DAT_00012ea0 != 0 || DAT_00012ea0[1] != 0)) {
    software_interrupt(0x5e);
    while (uVar7 < param_3) {
      uVar8 = FUN_00008df4();
      do {
        iVar5 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar5 + 8) = 0x20;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x10) = param_1;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(uint *)(iVar5 + 0x18) = param_2 + uVar7;
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        *(undefined4 *)(iVar5 + 0x20) = 1;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        iVar6 = FUN_000166dc(0x86,param_4);
        if (iVar6 != 0) goto LAB_00012e92;
        iVar4 = *(int *)(iVar5 + 0xc);
        if ((iVar4 != 0xb) && (iVar4 != 10)) {
          if (iVar4 == 0) goto LAB_00012e84;
          iVar6 = DAT_00012ea4 + 3;
          goto LAB_00012e92;
        }
        software_interrupt(0x56);
        iVar6 = *(int *)(iVar5 + 0xc);
        uVar9 = FUN_00008df4(0x1e);
        uVar1 = (int)((ulonglong)uVar9 >> 0x20) - (int)((ulonglong)uVar8 >> 0x20);
        uVar2 = (uint)((uint)uVar9 < (uint)uVar8);
      } while (uVar1 == uVar2 && (uint)(DAT_00012eac <= (uint)uVar9 - (uint)uVar8) <= uVar1 - uVar2)
      ;
      if (iVar6 != 0) break;
LAB_00012e84:
      uVar7 = uVar7 + 1 & 0xff;
      software_interrupt(0x56);
    }
LAB_00012e92:
    software_interrupt(0x5f);
    iVar5 = iVar6;
  }
  return iVar5;
}



/* FUN_00012eb0 @ 00012eb0 */

int FUN_00012eb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined4 *)0x0)) {
    iVar1 = DAT_00012f34 + -2;
  }
  else {
    iVar1 = DAT_00012f34;
    if (((*(int *)(DAT_00012f2c + 0x18) != 0) && (*(int *)(DAT_00012f2c + 4) != 0)) &&
       (*DAT_00012f30 != 0 || DAT_00012f30[1] != 0)) {
      software_interrupt(0x5e);
      iVar2 = *(int *)(DAT_00012f2c + 0x18);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 8) = 0x28;
      *(undefined4 *)(iVar2 + 0x18) = param_2;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x10) = param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      iVar1 = FUN_000166dc(0x83,param_5);
      if (iVar1 == 0) {
        if (*(int *)(iVar2 + 0xc) == 0) {
          *param_3 = *(undefined4 *)(iVar2 + 0x20);
          *param_4 = *(undefined4 *)(iVar2 + 0x28);
        }
        else {
          iVar1 = DAT_00012f34 + 3;
        }
      }
      software_interrupt(0x5f);
    }
  }
  return iVar1;
}



/* FUN_00012f3c @ 00012f3c */

int FUN_00012f3c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
                undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    iVar3 = DAT_00013028 + -2;
  }
  else {
    iVar3 = DAT_00013028;
    if (((*(int *)(DAT_00013020 + 0x18) != 0) && (*(int *)(DAT_00013020 + 4) != 0)) &&
       (*DAT_00013024 != 0 || DAT_00013024[1] != 0)) {
      software_interrupt(0x5e);
      uVar6 = *(int *)(DAT_00013020 + 0x14) - 0x38;
      do {
        uVar5 = param_4;
        if (uVar6 < param_4) {
          uVar5 = uVar6;
        }
        uVar7 = FUN_00008df4();
        while( true ) {
          iVar4 = *(int *)(DAT_00013020 + 0x18);
          *(undefined4 *)(iVar4 + 0xc) = 0;
          *(uint *)(iVar4 + 8) = uVar5 + 0x28;
          *(undefined4 *)(iVar4 + 0x10) = param_1;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x18) = param_2;
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(int *)(iVar4 + 0x20) = param_3;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          *(uint *)(iVar4 + 0x28) = uVar5;
          FUN_00001728(iVar4 + 0x30,uVar5);
          iVar3 = FUN_000166dc(0x84,param_6);
          if (iVar3 != 0) goto LAB_00013014;
          if (*(int *)(iVar4 + 0xc) != 0xb) break;
          software_interrupt(0x56);
          iVar3 = 0xb;
          uVar8 = FUN_00008df4(0x1e);
          uVar1 = (int)((ulonglong)uVar8 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20);
          uVar2 = (uint)((uint)uVar8 < (uint)uVar7);
          if (uVar1 != uVar2 || uVar1 - uVar2 < (uint)(DAT_00013030 <= (uint)uVar8 - (uint)uVar7))
          goto LAB_00013014;
        }
        if (*(int *)(iVar4 + 0xc) != 0) {
          iVar3 = DAT_00013028 + 3;
          break;
        }
        FUN_000015e4(param_5,iVar4 + 0x30,uVar5);
        param_4 = param_4 - uVar5;
        param_3 = param_3 + uVar5;
        param_5 = param_5 + uVar5;
      } while (param_4 != 0);
LAB_00013014:
      software_interrupt(0x5f);
    }
  }
  return iVar3;
}



/* FUN_00013158 @ 00013158 */

int FUN_00013158(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
                undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    iVar3 = DAT_00013238 + -2;
  }
  else {
    iVar3 = DAT_00013238;
    if (((*(int *)(DAT_00013230 + 0x18) != 0) && (*(int *)(DAT_00013230 + 4) != 0)) &&
       (*DAT_00013234 != 0 || DAT_00013234[1] != 0)) {
      software_interrupt(0x5e);
      uVar6 = *(int *)(DAT_00013230 + 0x14) - 0x38;
      do {
        uVar5 = param_4;
        if (uVar6 < param_4) {
          uVar5 = uVar6;
        }
        uVar7 = FUN_00008df4();
        while( true ) {
          iVar4 = *(int *)(DAT_00013230 + 0x18);
          *(undefined4 *)(iVar4 + 0xc) = 0;
          *(uint *)(iVar4 + 8) = uVar5 + 0x28;
          *(undefined4 *)(iVar4 + 0x10) = param_1;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x18) = param_2;
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(uint *)(iVar4 + 0x28) = uVar5;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(int *)(iVar4 + 0x20) = param_3;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          FUN_000015e4(iVar4 + 0x30,param_5,uVar5);
          iVar3 = FUN_000166dc(0x85,param_6);
          if (iVar3 != 0) goto LAB_00013224;
          if (*(int *)(iVar4 + 0xc) != 0xb) break;
          software_interrupt(0x56);
          iVar3 = 0xb;
          uVar8 = FUN_00008df4(0x1e);
          uVar1 = (int)((ulonglong)uVar8 >> 0x20) - (int)((ulonglong)uVar7 >> 0x20);
          uVar2 = (uint)((uint)uVar8 < (uint)uVar7);
          if (uVar1 != uVar2 || uVar1 - uVar2 < (uint)(DAT_00013240 <= (uint)uVar8 - (uint)uVar7))
          goto LAB_00013224;
        }
        if (*(int *)(iVar4 + 0xc) != 0) {
          iVar3 = DAT_00013238 + 3;
          break;
        }
        param_4 = param_4 - uVar5;
        param_3 = param_3 + uVar5;
        param_5 = param_5 + uVar5;
      } while (param_4 != 0);
LAB_00013224:
      software_interrupt(0x5f);
    }
  }
  return iVar3;
}



/* FUN_00013244 @ 00013244 */

/* WARNING: Removing unreachable block (ram,0x00013300) */

undefined8 FUN_00013244(char *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  
  puVar1 = DAT_00013334;
  uVar4 = 0;
  uVar3 = 0x100;
  software_interrupt(0x7d);
  if (DAT_00013334 == (uint *)0x0) {
    iVar2 = DAT_00013338 + -1;
LAB_0001327c:
    return CONCAT44(0x100,iVar2);
  }
  while ((int)puVar1[0x13] < 0) {
    FUN_0001647e(1,uVar3);
    uVar4 = uVar4 + 1;
    uVar3 = extraout_r1;
    iVar2 = DAT_00013338;
    if (5000 < uVar4) goto LAB_0001332a;
  }
  puVar1[8] = puVar1[8] & 0xf0ffffff | ((byte)param_1[1] & 0xf) << 0x18;
  *(byte *)((int)puVar1 + 0x1d) = *(byte *)((int)puVar1 + 0x1d) & 0xfc | *param_1 - 1U & 3;
  *puVar1 = *puVar1 & 0xffffff00 | (uint)(byte)param_1[4];
  *(char *)(puVar1 + 0x12) = param_1[2];
  *(char *)((int)puVar1 + 0x4b) = param_1[3];
  for (uVar4 = 0; uVar4 < (byte)param_1[2]; uVar4 = uVar4 + 1) {
    *(char *)((int)puVar1 + uVar4 + 0x80) = param_1[uVar4 + 8];
  }
  DataSynchronizationBarrier(0xf);
  *puVar1 = *puVar1 | 0x10000;
  FUN_0001647e(((uint)(byte)param_1[2] + (uint)(byte)param_1[3]) * 10);
  uVar4 = 0;
  do {
    if (-1 < (int)puVar1[0x13]) {
      for (uVar4 = 0; iVar2 = 0, uVar4 < (byte)param_1[3]; uVar4 = uVar4 + 1) {
        *(undefined *)(param_2 + uVar4) =
             *(undefined *)((int)puVar1 + uVar4 + 0x80 + (uint)(byte)param_1[2]);
      }
      goto LAB_0001332a;
    }
    FUN_0001647e(1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x1389);
  iVar2 = DAT_00013338 + 1;
LAB_0001332a:
  software_interrupt(0x7e);
  goto LAB_0001327c;
}



/* FUN_0001333c @ 0001333c */

undefined8 FUN_0001333c(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  
  iVar1 = DAT_00013410;
  uVar4 = 0;
  uVar3 = 0x100;
  software_interrupt(0x7d);
  if (DAT_00013410 == 0) {
    iVar2 = DAT_00013414 + -5;
LAB_00013372:
    return CONCAT44(0x100,iVar2);
  }
  while (*(int *)(iVar1 + 0x4c) < 0) {
    FUN_0001647e(1,uVar3);
    uVar4 = uVar4 + 1;
    uVar3 = extraout_r1;
    iVar2 = DAT_00013414;
    if (5000 < uVar4) goto LAB_00013404;
  }
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xf0ffffff | ((byte)param_1[1] & 0xf) << 0x18;
  *(byte *)(iVar1 + 0x1d) = *(byte *)(iVar1 + 0x1d) & 0xfc | *param_1 - 1U & 3;
  *(char *)(iVar1 + 0x45) = param_1[4];
  *(char *)(iVar1 + 0x48) = param_1[2];
  *(char *)(iVar1 + 0x4b) = param_1[3];
  for (uVar4 = 0; uVar4 < (byte)param_1[2]; uVar4 = uVar4 + 1) {
    *(char *)(iVar1 + uVar4 + 0x80) = param_1[uVar4 + 8];
  }
  DataSynchronizationBarrier(0xf);
  uVar4 = 0;
  *(undefined *)(iVar1 + 0x47) = 0x80;
  do {
    if (-1 < *(int *)(iVar1 + 0x4c)) {
      for (uVar4 = (uint)(byte)param_1[2]; iVar2 = 0,
          uVar4 < (uint)(byte)param_1[3] + (uint)(byte)param_1[2]; uVar4 = uVar4 + 1) {
        param_1[uVar4 + 8] = *(char *)(iVar1 + uVar4 + 0x80);
      }
      goto LAB_00013404;
    }
    FUN_0001647e(1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x1389);
  iVar2 = DAT_00013414 + 1;
LAB_00013404:
  software_interrupt(0x7e);
  goto LAB_00013372;
}



/* FUN_00013418 @ 00013418 */

void FUN_00013418(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  if (*DAT_00013448 != '\0') {
    iVar1 = FUN_0000866c(param_1,param_2,0,&local_10);
    if (iVar1 == 0) {
      FUN_0000f138(2,local_10,param_3 << 0xc,param_4);
    }
    return;
  }
  FUN_00012dec(param_1,param_2,param_3);
  return;
}



/* FUN_00013470 @ 00013470 */

int FUN_00013470(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined local_80;
  undefined local_7f;
  undefined local_7e;
  uint local_7c [9];
  undefined auStack_58 [32];
  int local_38;
  undefined4 local_34;
  uint *puStack_30;
  uint *puStack_2c;
  undefined4 local_28;
  
  if (*DAT_00013484 != '\0') {
    uVar8 = *param_3;
    iVar3 = 0;
    iVar4 = DAT_0000f318;
    if (uVar8 < 0x1f5) {
      uVar5 = *param_2;
      while ((uVar5 < *param_2 + uVar8 && (iVar3 = FUN_0000f218(param_1,uVar5,param_4), iVar3 == 0))
            ) {
        *param_3 = *param_3 - 1;
        uVar5 = uVar5 + 1;
      }
      *param_2 = *param_2 + (uVar8 - *param_3);
      iVar4 = iVar3;
    }
    return iVar4;
  }
  iVar3 = *DAT_00013138;
  uVar8 = *param_3;
  iVar7 = 0;
  iVar6 = *(int *)(DAT_0001313c + 0x18);
  iVar4 = DAT_00013140;
  local_38 = iVar3;
  local_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if (uVar8 < 0x1f5) {
    uVar5 = uVar8;
    if (((iVar6 == 0) || (uVar5 = *(uint *)(DAT_0001313c + 4), *(uint *)(DAT_0001313c + 4) == 0)) ||
       (uVar5 = DAT_00013144[1], *DAT_00013144 == 0 && DAT_00013144[1] == 0)) {
      uVar8 = uVar5;
      iVar4 = DAT_00013140 + 2;
    }
    else {
      software_interrupt(0x5e);
      FUN_00001728(&local_80,0x28);
      iVar2 = DAT_0001314c;
      local_80 = (undefined)*(undefined4 *)(DAT_0001314c + 0x3f8);
      local_7e = (undefined)*(undefined4 *)(DAT_0001314c + 0x3f0);
      local_7f = 2;
      for (uVar5 = *param_2; iVar4 = iVar7, uVar5 < *param_2 + uVar8; uVar5 = uVar5 + 1) {
        local_7c[0] = uVar5;
        FUN_000036d0(local_7c,4);
        iVar4 = FUN_00009198(local_34,DAT_00013154,DAT_00013150,0x20,&local_80,8,auStack_58,0x20);
        if (iVar4 != 0) break;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined4 *)(iVar6 + 8) = 0x30;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar2 + 0x3f0);
        *(uint *)(iVar6 + 0x14) = local_7c[0];
        FUN_00001670(iVar6 + 0x18,auStack_58,0x20);
        iVar7 = FUN_000166dc(0x88,local_28);
        iVar4 = iVar7;
        if ((iVar7 != 0) || (iVar4 = *(int *)(iVar6 + 0xc), iVar4 != 0)) break;
        *param_3 = *param_3 - 1;
      }
      puVar1 = DAT_00013148;
      *param_2 = *param_2 + (uVar8 - *param_3);
      uVar8 = *puVar1;
      software_interrupt(0x5f);
    }
  }
  if (local_38 != iVar3) {
    FUN_00001a20(uVar8);
  }
  return iVar4;
}



/* FUN_00013488 @ 00013488 */

int FUN_00013488(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_6c;
  undefined auStack_68 [72];
  int local_20;
  
  iVar4 = *DAT_00013510;
  local_20 = iVar4;
  iVar3 = FUN_00001bd4(param_1);
  if (iVar3 == 0) {
    iVar3 = FUN_00012278();
    iVar2 = DAT_00013514;
    if (iVar3 == 0) {
      uVar1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8;
      local_6c = uVar1 | param_2 >> 0x18;
      if (*(char *)(DAT_00013514 + 0xf) == '\x03') {
        local_6c = uVar1 >> 8;
      }
      FUN_00001670(auStack_68,&local_6c);
      FUN_000015e4(auStack_68 + *(byte *)(iVar2 + 0xf),param_3,param_4);
      iVar3 = FUN_00011a10(*(undefined *)(iVar2 + 0x34),auStack_68,
                           (uint)*(byte *)(iVar2 + 0xf) + param_4 & 0xff,0,0);
      if (iVar3 == 0) {
        iVar3 = FUN_00004fd4();
      }
    }
    FUN_0000fac4(param_1);
  }
  if (local_20 != iVar4) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_00013550 @ 00013550 */

int FUN_00013550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00001bd4(2);
  if (iVar1 == 0) {
    iVar1 = FUN_00004fd4();
    if (iVar1 == 0) {
      iVar1 = FUN_00011a10(param_1,param_2,param_3,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_00004fd4();
      }
    }
    FUN_0000fac4(2);
  }
  return iVar1;
}



/* FUN_0001358c @ 0001358c */

int FUN_0001358c(undefined *param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    uVar1 = *param_1;
    iVar2 = FUN_00001bd4(2);
    if (iVar2 == 0) {
      iVar2 = FUN_00004fd4();
      if ((iVar2 == 0) && (iVar2 = FUN_00011a10(uVar1,0,0,param_1 + 1,0x32), iVar2 == 0)) {
        iVar2 = FUN_00004fd4();
      }
      FUN_0000fac4(2);
    }
    if (((iVar2 != 0) || (param_1[2] == -0x80)) ||
       (uVar3 = uVar3 + 1, iVar2 = DAT_000135f0, 100 < uVar3)) break;
    FUN_0001647e(500);
  }
  return iVar2;
}



/* FUN_000135f4 @ 000135f4 */

void FUN_000135f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*DAT_00013628 != '\0') {
    iVar1 = FUN_0000866c();
    if (iVar1 == 0) {
      FUN_0000f4d0(2,param_4,param_5,param_4,param_6,param_3);
    }
    return;
  }
  FUN_00013158();
  return;
}



/* FUN_0001362c @ 0001362c */

undefined4 FUN_0001362c(void)

{
  return 0;
}



/* FUN_00013630 @ 00013630 */

undefined4 FUN_00013630(void)

{
  return 0;
}



/* FUN_00013634 @ 00013634 */

undefined4 FUN_00013634(void)

{
  return DAT_00013638;
}



/* FUN_0001363c @ 0001363c */

undefined4 FUN_0001363c(void)

{
  return DAT_00013640;
}



/* FUN_00013644 @ 00013644 */

void FUN_00013644(void)

{
  return;
}



/* FUN_00013646 @ 00013646 */

undefined4 FUN_00013646(void)

{
  return 0;
}



/* FUN_0001364a @ 0001364a */

void FUN_0001364a(void)

{
  return;
}



/* FUN_0001364c @ 0001364c */

undefined4 FUN_0001364c(void)

{
  return DAT_00013650;
}



/* FUN_00013654 @ 00013654 */

/* WARNING: Removing unreachable block (ram,0x000136d0) */
/* WARNING: Removing unreachable block (ram,0x00013716) */
/* WARNING: Removing unreachable block (ram,0x000136dc) */
/* WARNING: Removing unreachable block (ram,0x00013714) */
/* WARNING: Removing unreachable block (ram,0x00013740) */
/* WARNING: Removing unreachable block (ram,0x00013754) */
/* WARNING: Removing unreachable block (ram,0x00013756) */
/* WARNING: Removing unreachable block (ram,0x0001378e) */
/* WARNING: Removing unreachable block (ram,0x0001375c) */
/* WARNING: Removing unreachable block (ram,0x00013762) */
/* WARNING: Removing unreachable block (ram,0x000137ae) */
/* WARNING: Removing unreachable block (ram,0x00013764) */
/* WARNING: Removing unreachable block (ram,0x0001374e) */
/* WARNING: Removing unreachable block (ram,0x0001373c) */

undefined4 FUN_00013654(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_5c;
  char local_58 [4];
  int *local_54;
  undefined4 local_50;
  int local_2c;
  
  iVar1 = *DAT_000137b4;
  iVar2 = *param_1;
  local_58[0] = -1;
  local_54 = (int *)0x0;
  local_5c = 0;
  local_50 = 0;
  software_interrupt(0x5e);
  local_2c = iVar1;
  uVar3 = FUN_000069c4(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x10),
                       *(undefined4 *)(iVar2 + 0x18),local_58,&local_54,0,0,0xffff,0,0xffffffff);
  if ((((int)uVar3 == 0) && (uVar3 = CONCAT44(local_54[1],DAT_000137bc), local_54[1] == 0x7f)) &&
     (uVar3 = CONCAT44(*local_54,DAT_000137bc), *local_54 == 0x9000)) {
    software_interrupt(0x90);
    uVar3 = CONCAT44(&local_5c,0x1000);
  }
  if (local_58[0] != -1) {
    software_interrupt(0x6c);
  }
  if (local_5c != 0) {
    software_interrupt(0x91);
  }
  software_interrupt(0x5f);
  if (local_2c != iVar1) {
    FUN_00001a20(*DAT_000137b8,(int)((ulonglong)uVar3 >> 0x20));
  }
  return (int)uVar3;
}



/* FUN_000137cc @ 000137cc */

undefined8 FUN_000137cc(int param_1,undefined4 param_2)

{
  FUN_0000a5f0(DAT_000137e8,param_2,param_1);
  software_interrupt(0x83);
  return CONCAT44(0x11e0,DAT_000137ec + param_1);
}



/* FUN_000137f0 @ 000137f0 */

void FUN_000137f0(void)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  FUN_00015ff0(&local_10);
  uVar1 = FUN_00008658(local_10,local_c);
  *(undefined8 *)(DAT_00013810 + 0x10) = uVar1;
  return;
}



/* FUN_0001386c @ 0001386c */

undefined4 FUN_0001386c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00013894;
  software_interrupt(0x5e);
  if (param_1 - 0x10U < 0x10) {
    puVar2 = (undefined4 *)(DAT_00013898 + (param_1 - 0x10U) * 8);
    software_interrupt(0x6c);
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  software_interrupt(0x5f);
  return *puVar1;
}



/* FUN_0001389c @ 0001389c */

undefined4 FUN_0001389c(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_000138dc;
  puVar1 = DAT_000138d8;
  software_interrupt(0x5e);
  uVar3 = 0;
  do {
    if (*(byte *)(iVar2 + uVar3 * 8) == param_1) {
      puVar4 = (undefined4 *)(iVar2 + uVar3 * 8);
      software_interrupt(0x6c);
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  software_interrupt(0x5f);
  return *puVar1;
}



/* FUN_000138e0 @ 000138e0 */

int FUN_000138e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00013944;
  iVar4 = *(int *)(DAT_00013944 + 0x30);
  iVar3 = 0;
  if ((*(char *)(iVar4 + 5) == '\0') &&
     (uVar2 = *(uint *)(DAT_00013944 + 0x24) + 1, iVar3 = DAT_00013948,
     *(uint *)(DAT_00013944 + 0x24) <= uVar2)) {
    if (*(int *)(DAT_0001394c + 0x3ec) == 1) {
      *(uint *)(DAT_00013944 + 0x24) = uVar2;
      *(uint *)(iVar4 + 8) = uVar2 + *(int *)(iVar1 + 0x1c);
    }
    *(undefined *)(iVar4 + 5) = 1;
    *(short *)(iVar4 + 0x14) = *(short *)(iVar4 + 0x14) + 0x20;
    iVar3 = FUN_00009198(param_1,DAT_00013954,DAT_00013950,0x20,*(int *)(iVar1 + 0x34),
                         *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x34),*(int *)(iVar1 + 0x2c),0x20
                        );
    if (iVar3 == 0) {
      *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + 0x20;
    }
  }
  return iVar3;
}



/* FUN_00013958 @ 00013958 */

int FUN_00013958(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar1 = DAT_00013a70;
  iVar2 = DAT_00013a6c;
  if (param_3 < 0x1f9d) {
    if (*DAT_00013a70 < 0x200) {
      uVar6 = param_3 + 0xf & 0xfffffff0;
      iVar5 = uVar6 + 0x30;
      if ((DAT_00013a70[0xb] + uVar6 + 0x50 <= (int)&DAT_0000ffd0 + DAT_00013a70[0xd]) ||
         (iVar2 = FUN_00013ba8(), iVar2 == 0)) {
        puVar4 = (undefined4 *)puVar1[0xb];
        if ((int)&DAT_0000ffd0 + puVar1[0xd] < (int)puVar4 + uVar6 + 0x50) {
          iVar2 = DAT_00013a6c + 4;
        }
        else {
          FUN_00001728(puVar4,iVar5);
          puVar7 = puVar4 + 0xc;
          FUN_000015e4(puVar7,param_2,param_3);
          *puVar4 = DAT_00013a74;
          *(undefined *)(puVar4 + 1) = 1;
          puVar4[4] = param_1;
          *(short *)((int)puVar4 + 0x16) = (short)param_3;
          *(short *)(puVar4 + 5) = (short)iVar5;
          *(short *)(puVar4 + 6) = (short)uVar6;
          puVar4[3] = param_4;
          *(undefined *)((int)puVar4 + 5) = 0;
          software_interrupt(0x66);
          iVar3 = FUN_000043c8(puVar4 + 8,0x10);
          iVar2 = DAT_00013a6c + 6;
          if ((iVar3 == 0) &&
             (iVar3 = FUN_0000ca5c(param_4 & 0xff,DAT_00013a7c,0x20,puVar4 + 8,0x10,DAT_00013a78,
                                   puVar7,*(undefined2 *)(puVar4 + 6),puVar7,0), iVar3 == 0)) {
            *(undefined *)((int)puVar4 + 6) = 1;
            iVar2 = 0;
          }
          if (iVar2 == 0) {
            uVar6 = *puVar1;
            if (uVar6 <= param_5) {
              *puVar1 = uVar6 + 1;
              param_5 = uVar6;
            }
            puVar1[param_5 + 0xe] = (uint)puVar4;
            puVar1[0xc] = puVar1[0xb];
            puVar1[0xb] = puVar1[0xb] + iVar5;
          }
        }
      }
    }
    else {
      iVar2 = DAT_00013a6c + 1;
    }
  }
  return iVar2;
}



/* FUN_00013a80 @ 00013a80 */

int FUN_00013a80(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = DAT_00013b30;
  puVar1 = DAT_00013b2c;
  piVar5 = (int *)((int)&DAT_0000ffd0 + DAT_00013b2c[0xd]);
  piVar4 = (int *)(DAT_00013b2c[0xd] + 0x40);
  do {
    if (piVar5 <= piVar4) {
code_r0x00013b14:
      if (piVar4 <= piVar5) {
        puVar1[0xb] = (uint)piVar4;
        puVar1[3] = (int)piVar4 - puVar1[0xd];
        return 0;
      }
      uVar3 = 4;
LAB_00013b24:
      puVar1[6] = uVar3;
      return iVar2;
    }
    if (*piVar4 != DAT_00013b34) {
      if (*piVar4 != -1) {
        uVar3 = 3;
        goto LAB_00013b24;
      }
      goto code_r0x00013b14;
    }
    if ((0x1f9c < *(ushort *)(piVar4 + 6)) || (0x1f9c < *(ushort *)(piVar4 + 5) - 0x30)) {
      puVar1[6] = 2;
      return iVar2;
    }
    for (uVar3 = 0; uVar3 < *puVar1; uVar3 = uVar3 + 1) {
      if (piVar4[4] == *(int *)(puVar1[uVar3 + 0xe] + 0x10)) {
        puVar1[uVar3 + 0xe] = (uint)piVar4;
        break;
      }
    }
    if (*puVar1 == uVar3) {
      puVar1[uVar3 + 0xe] = (uint)piVar4;
      uVar3 = *puVar1;
      *puVar1 = uVar3 + 1;
      if (0x200 < uVar3 + 1) {
        return DAT_00013b30 + 1;
      }
    }
    puVar1[0xc] = (uint)piVar4;
    piVar4 = (int *)((int)piVar4 + (uint)*(ushort *)(piVar4 + 5));
  } while( true );
}



/* FUN_00013b38 @ 00013b38 */

int FUN_00013b38(uint param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  software_interrupt(0x66);
  if (*(char *)(param_2 + 6) == '\x01') {
    iVar3 = FUN_0000ca5c(param_1 & 0xff,DAT_00013b98,0x20,param_2 + 0x20,0x10,DAT_00013b94,
                         param_2 + 0x30,*(undefined2 *)(param_2 + 0x18),DAT_00013b90,0);
    if (iVar3 != 0) {
      iVar3 = DAT_00013b9c;
    }
    uVar1 = *(undefined2 *)(param_2 + 0x16);
    iVar2 = DAT_00013b90;
  }
  else {
    uVar1 = *(undefined2 *)(param_2 + 0x16);
    iVar2 = param_2 + 0x30;
  }
  FUN_000015e4(param_1,iVar2,uVar1);
  return iVar3;
}



/* FUN_00013ba0 @ 00013ba0 */

void FUN_00013ba0(undefined4 param_1)

{
  FUN_00013e98(param_1,0);
  return;
}



/* FUN_00013ba8 @ 00013ba8 */

undefined4 FUN_00013ba8(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar1 = DAT_00013c50;
  uVar5 = 0;
  puVar6 = (uint *)(DAT_00013c50 + -0x838);
  uVar7 = *(uint *)(*(int *)(DAT_00013c50 + -0x804) + 4);
  if (*(int *)(DAT_00013c50 + -0x804) == DAT_00013c50) {
    *(int *)(DAT_00013c50 + -0x804) = DAT_00013c50 + 0x10000;
    *(undefined4 *)(iVar1 + -0x830) = 0x10;
  }
  else {
    *(undefined4 *)(DAT_00013c50 + -0x830) = 0;
    *(int *)(iVar1 + -0x804) = iVar1;
  }
  FUN_000016d4(*(undefined4 *)(iVar1 + -0x804),0x10000,0xff);
  uVar4 = uVar7 + 1;
  uVar8 = DAT_00013c54;
  if (uVar7 <= uVar4) {
    puVar2 = *(undefined4 **)(iVar1 + -0x804);
    *puVar2 = DAT_00013c58;
    puVar2[1] = uVar4;
    *(undefined4 *)(iVar1 + -0x82c) = 0;
    *(undefined4 **)(iVar1 + -0x80c) = puVar2 + 0x10;
    uVar7 = 0;
    for (; uVar5 < *puVar6; uVar5 = uVar5 + 1) {
      uVar3 = puVar6[uVar5 + 0xe];
      uVar4 = uVar7;
      if (*(short *)(uVar3 + 0x16) != 0) {
        if (*(char *)(uVar3 + 5) == '\x01') {
          *(short *)(uVar3 + 0x14) = *(short *)(uVar3 + 0x14) + -0x20;
        }
        uVar3 = (uint)*(ushort *)(puVar6[uVar5 + 0xe] + 0x14);
        *(undefined *)(puVar6[uVar5 + 0xe] + 5) = 0;
        FUN_00001670(*(undefined4 *)(iVar1 + -0x80c),puVar6[uVar5 + 0xe],uVar3);
        uVar4 = uVar7 + 1;
        puVar6[uVar7 + 0xe] = *(uint *)(iVar1 + -0x80c);
        *(int *)(iVar1 + -0x808) = *(int *)(iVar1 + -0x80c);
        *(uint *)(iVar1 + -0x80c) = *(int *)(iVar1 + -0x80c) + uVar3;
      }
      uVar7 = uVar4;
    }
    *puVar6 = uVar7;
    *(undefined4 *)(iVar1 + -0x834) = 1;
    uVar8 = 0;
  }
  return uVar8;
}



/* FUN_00013c5c @ 00013c5c */

undefined8 FUN_00013c5c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (DAT_00013cdc[5] == 1) {
    iVar1 = DAT_00013cd8 + -7;
    if (param_2 != 0) {
      software_interrupt(0x5e);
      for (; iVar2 = DAT_00013cd8, uVar3 < *DAT_00013cdc; uVar3 = uVar3 + 1) {
        if (DAT_00013cdc[uVar3 + 0xe] == 0) goto LAB_00013cce;
        if (*(int *)(DAT_00013cdc[uVar3 + 0xe] + 0x10) == param_1) {
          uVar4 = DAT_00013cdc[uVar3 + 0xe];
          goto LAB_00013cb6;
        }
      }
      if (DAT_00013cd8 == 0) {
LAB_00013cb6:
        if ((*(ushort *)(uVar4 + 0x16) != 0) &&
           (iVar2 = iVar1, *(ushort *)(uVar4 + 0x16) <= param_3)) {
          iVar2 = FUN_00013b38(param_2,uVar4);
        }
      }
LAB_00013cce:
      iVar1 = iVar2;
      software_interrupt(0x5f);
    }
  }
  else {
    iVar1 = DAT_00013cd8 + -6;
  }
  return CONCAT44(param_1,iVar1);
}



/* FUN_00013ce4 @ 00013ce4 */

int FUN_00013ce4(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = DAT_00013d58;
  iVar2 = DAT_00013d54;
  uVar3 = 0;
  if (DAT_00013d58[5] == 1) {
    if (param_2 == (uint *)0x0) {
      iVar2 = DAT_00013d54 + -7;
    }
    else {
      software_interrupt(0x5e);
      *param_2 = 0;
      for (; uVar3 < *puVar1; uVar3 = uVar3 + 1) {
        if (puVar1[uVar3 + 0xe] == 0) {
          iVar2 = DAT_00013d54 + -8;
          break;
        }
        if (*(int *)(puVar1[uVar3 + 0xe] + 0x10) == param_1) {
          if (*(ushort *)(puVar1[uVar3 + 0xe] + 0x16) != 0) {
            iVar2 = 0;
            *param_2 = (uint)*(ushort *)(puVar1[uVar3 + 0xe] + 0x16);
          }
          break;
        }
      }
      software_interrupt(0x5f);
    }
  }
  else {
    iVar2 = DAT_00013d54 + -6;
  }
  return iVar2;
}



/* FUN_00013d60 @ 00013d60 */

int FUN_00013d60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00001728(DAT_00013dc4,0x838);
  iVar1 = DAT_00013dc4;
  if (*(int *)(DAT_00013dc8 + 0x674) == 1) {
    iVar3 = FUN_0000527c(DAT_00013dd0,0x20000,DAT_00013dcc);
    iVar2 = DAT_00013dc8;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(DAT_00013dc8 + 0x3f4);
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x3ec);
      iVar3 = FUN_00013df0();
      if ((iVar3 == 0) &&
         ((iVar3 = 0, *(int *)(iVar1 + 0x10) != 0 ||
          ((iVar3 = FUN_00013a80(), iVar3 == 0 && (iVar3 = FUN_00013f40(), iVar3 == 0)))))) {
        *(undefined4 *)(iVar1 + 0x14) = 1;
        return iVar3;
      }
    }
    if (iVar3 == DAT_00013dd4) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      return 0;
    }
  }
  else {
    iVar3 = 0;
    *(undefined4 *)(DAT_00013dc4 + 0x14) = 0;
  }
  return iVar3;
}



/* FUN_00013dd8 @ 00013dd8 */

void FUN_00013dd8(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(DAT_00013de0 + 0x14);
  return;
}



/* FUN_00013de4 @ 00013de4 */

void FUN_00013de4(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(DAT_00013dec + 0x28);
  return;
}



/* FUN_00013df0 @ 00013df0 */

undefined4 FUN_00013df0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = DAT_00013e94;
  iVar2 = DAT_00013e90;
  piVar1 = DAT_00013e8c;
  uVar6 = 0;
  uVar7 = 0;
  iVar4 = *DAT_00013e8c;
  iVar5 = DAT_00013e8c[0x4000];
  if (iVar4 == -1) {
    if (iVar5 == -1) {
      DAT_00013e8c[-0x20c] = 0;
      piVar1[-0x20a] = 1;
      piVar1[-0x201] = (int)piVar1;
      *piVar1 = iVar2;
      *(undefined4 *)(piVar1[-0x201] + 4) = 1;
      piVar1[-0x20b] = 0;
      piVar1[-0x203] = piVar1[-0x201] + 0x40;
      return 0;
    }
  }
  else if ((iVar4 != DAT_00013e90) && (iVar4 != -1)) goto LAB_00013e34;
  if ((iVar5 == DAT_00013e90) || (iVar5 == -1)) {
    if (iVar4 == DAT_00013e90) {
      uVar6 = DAT_00013e8c[1];
    }
    if (iVar5 == DAT_00013e90) {
      uVar7 = DAT_00013e8c[0x4001];
    }
    if (uVar7 < uVar6) {
      DAT_00013e8c[-0x20c] = 0;
      piVar1[-0x201] = (int)piVar1;
      return 0;
    }
    DAT_00013e8c[-0x201] = (int)(DAT_00013e8c + 0x4000);
    piVar1[-0x20c] = 0x10;
    return 0;
  }
LAB_00013e34:
  DAT_00013e8c[-0x208] = 1;
  return uVar3;
}



/* FUN_00013e98 @ 00013e98 */

int FUN_00013e98(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = DAT_00013f30;
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
  iVar3 = DAT_00013f34;
  if (DAT_00013f30[5] == 1) {
    if ((param_2 == 0) && (param_3 != 0)) {
      iVar3 = DAT_00013f34 + -1;
    }
    else {
      software_interrupt(0x5e);
      for (; uVar2 < *DAT_00013f30; uVar2 = uVar2 + 1) {
        if (*(int *)(DAT_00013f30[uVar2 + 0xe] + 0x10) == param_1) {
          uVar5 = DAT_00013f30[uVar2 + 0xe];
          uVar4 = *(uint *)(uVar5 + 0xc);
          break;
        }
      }
      if (uVar5 == 0 && param_3 == 0) {
        iVar3 = 0;
      }
      else if (uVar4 + 1 < uVar4) {
        iVar3 = DAT_00013f34 + -2;
      }
      else {
        iVar3 = FUN_00013958(param_1,param_2,param_3,uVar4 + 1,uVar2);
        if (iVar3 == 0) {
          puVar1[10] = 1;
          software_interrupt(0x5c);
        }
      }
      software_interrupt(0x5f);
    }
  }
  return iVar3;
}



/* FUN_00013f40 @ 00013f40 */

int FUN_00013f40(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined auStack_40 [32];
  uint local_20;
  
  iVar2 = DAT_00013fec;
  iVar1 = DAT_00013fe8;
  uVar3 = *DAT_00013fe4;
  software_interrupt(0x66);
  iVar7 = *(int *)(DAT_00013fe8 + 0x30);
  local_20 = uVar3;
  if (*(char *)(iVar7 + 5) == '\x01') {
    iVar6 = *(int *)(DAT_00013fe8 + 0x2c);
    uVar4 = FUN_00009198(uVar3 & 0xff,DAT_00013ff4,DAT_00013ff0,0x20,*(int *)(DAT_00013fe8 + 0x34),
                         (iVar6 - *(int *)(DAT_00013fe8 + 0x34)) + -0x20,auStack_40,0x20);
    if (uVar4 == 0) {
      iVar6 = FUN_0000ae74(auStack_40,iVar6 + -0x20,0x20);
      if (iVar6 == 0) {
        uVar4 = *(uint *)(iVar7 + 8);
        iVar7 = 0;
        if (*(int *)(iVar1 + 0x20) == 1) {
          uVar5 = *(uint *)(iVar1 + 0x1c);
          if ((uVar4 == uVar5) && (uVar4 != 0)) goto LAB_00013fb0;
          if (uVar5 < uVar4) {
            *(uint *)(iVar1 + 0x24) = uVar4 - uVar5;
            *(undefined4 *)(iVar1 + 0x28) = 1;
            uVar4 = (uint)*DAT_00013ff8;
            software_interrupt(0x5c);
            goto LAB_00013fb0;
          }
          uVar4 = 5;
        }
        else {
          if (uVar4 == 0) goto LAB_00013fb0;
          uVar4 = 8;
        }
      }
      else {
        uVar4 = 6;
      }
      *(uint *)(iVar1 + 0x18) = uVar4;
      iVar7 = iVar2;
    }
    else {
      iVar7 = DAT_00013fec + 4;
    }
  }
  else {
    uVar4 = 7;
    *(undefined4 *)(DAT_00013fe8 + 0x18) = 7;
    iVar7 = iVar2;
  }
LAB_00013fb0:
  if (local_20 != uVar3) {
    FUN_00001a20(uVar4);
  }
  return iVar7;
}



/* FUN_00013ffc @ 00013ffc */

int FUN_00013ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = DAT_000140c4;
  iVar5 = 0;
  software_interrupt(0x5e);
  if (*(int *)(DAT_000140c4 + 4) == 1) {
    iVar2 = FUN_00013418(5,*(int *)(DAT_000140c4 + 8) + 1,0xf,0,param_3,param_4);
    if ((iVar2 != 0) ||
       (iVar5 = FUN_00013418(5,*(undefined4 *)(iVar1 + 8),1,0), iVar2 = iVar5, iVar5 != 0))
    goto LAB_00014098;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x34);
  if (*(int *)(iVar1 + 0x2c) - iVar3 != iVar4) {
    iVar2 = FUN_000138e0(param_1);
    if (iVar2 != 0) goto LAB_00014098;
    uVar6 = (*(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x34)) - *(int *)(iVar1 + 0xc);
    iVar5 = FUN_000135f4(5,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc),uVar6,iVar3 + iVar4,0);
    iVar2 = iVar5;
    if ((iVar5 != 0) || (iVar2 = DAT_000140c8, CARRY4(*(uint *)(iVar1 + 0xc),uVar6) != false))
    goto LAB_00014098;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) + uVar6;
  }
  if ((*(int *)(iVar1 + 0x24) == 0) ||
     (iVar5 = FUN_00013470(param_1,DAT_000140c4 + 0x1c,DAT_000140c4 + 0x24,0), iVar2 = iVar5,
     iVar5 == 0)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar2 = iVar5;
  }
LAB_00014098:
  software_interrupt(0x5f);
  if ((((iVar2 == DAT_000140cc) || (iVar2 == 0xb)) || (iVar2 == 10)) || (iVar2 == DAT_000140cc + -5)
     ) {
    software_interrupt(0x5c);
    iVar2 = 0;
  }
  return iVar2;
}



/* FUN_00014170 @ 00014170 */

undefined4 FUN_00014170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  uVar2 = DAT_00014194;
  local_10 = param_4;
  iVar1 = FUN_000043aa(0,&local_10,param_1,param_2);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_00009e68(0,local_10);
    } while (iVar1 == 0);
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_00014198 @ 00014198 */

undefined8 FUN_00014198(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  int local_18;
  
  iVar2 = DAT_00014228;
  software_interrupt(0x5e);
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_000043aa(0,&local_1c,param_1,param_2);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  software_interrupt(0x5f);
  iVar1 = iVar2;
  do {
    if (iVar1 != 0) {
LAB_0001421e:
      return CONCAT44(local_20,iVar2);
    }
    software_interrupt(0x5a);
    FUN_00003a50(0,100);
    iVar1 = FUN_00009e50(0);
    if (iVar1 != 0) {
      software_interrupt(0x5e);
      FUN_00004418(0,&local_20,&local_18);
      if ((local_18 != 0) &&
         ((local_20 == local_1c || ((local_1c - param_2 < local_20 && (local_20 < local_1c)))))) {
        FUN_00012448(0,local_1c);
        software_interrupt(0x5f);
        iVar2 = local_18 + -0x80000000;
        goto LAB_0001421e;
      }
      software_interrupt(0x5f);
      software_interrupt(0x56);
    }
    iVar1 = FUN_00009e68(0,local_1c);
  } while( true );
}



/* FUN_00014230 @ 00014230 */

int FUN_00014230(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00014288 + 0x34);
  software_interrupt(0x5e);
  if (param_1 != -0x10000) {
    if ((((param_1 == DAT_0001428c) && (iVar1 = FUN_00011558(param_2), iVar1 == 0)) &&
        (iVar1 = FUN_000090e4(), iVar1 == 0)) &&
       (((iVar1 = FUN_00011560(param_2), iVar1 == 0 && (iVar1 = FUN_0001163c(), iVar1 == 0)) &&
        (iVar1 = FUN_00011468(), iVar1 == 0)))) {
      software_interrupt(0xa6);
      iVar1 = DAT_00014290;
    }
    return iVar1;
  }
  *DAT_00014294 = 0xff;
  return iVar1;
}



/* FUN_00014298 @ 00014298 */

undefined8 FUN_00014298(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000142e0;
  iVar1 = DAT_000142dc;
  software_interrupt(0x7d);
  if (DAT_000142dc != 0) {
    *(uint *)(DAT_000142dc + 0x20) =
         *(uint *)(DAT_000142dc + 0x20) & 0xf0ffffff | (*(byte *)(DAT_000142e0 + 8) & 0xf) << 0x18;
    *(byte *)(iVar1 + 0x1d) = *(byte *)(iVar1 + 0x1d) & 0xfc | *(char *)(iVar2 + 7) - 1U & 3;
    software_interrupt(0x7e);
    return 0x10000000000;
  }
  return CONCAT44(0x100,DAT_000142e4);
}



/* FUN_000142e8 @ 000142e8 */

int FUN_000142e8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  
  iVar5 = 0;
  local_28 = 0;
  iVar2 = FUN_0000481c(param_1,&local_28);
  iVar1 = DAT_0001436c;
  if (iVar2 == 0) {
    iVar2 = FUN_00001ee4(param_2);
    if ((iVar2 != -1) && (iVar5 = FUN_00001f24(iVar2,0,param_2), iVar5 != 0)) {
      iVar6 = DAT_00014370 + iVar2 * 8;
      puVar3 = (undefined *)FUN_00006b14(local_28,0,param_2);
      if (puVar3 != (undefined *)0x0) {
        *(undefined **)(iVar6 + 4) = puVar3;
        *puVar3 = 1;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(undefined4 *)(puVar3 + 0x58) = *param_1;
        uVar4 = param_1[1];
        *(undefined4 *)(puVar3 + 0x6c) = 0;
        *(undefined4 *)(puVar3 + 0x60) = uVar4;
        *(undefined4 *)(puVar3 + 100) = 0xffffffff;
        param_1[2] = iVar5;
        return 0;
      }
    }
    FUN_0000fa8c(iVar2,param_2);
    FUN_000050f0(iVar5,param_2);
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_00014374 @ 00014374 */

int FUN_00014374(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar2 = DAT_000143c4;
  local_18 = param_4;
  iVar1 = FUN_000088b8(param_1,&local_18,param_2);
  iVar1 = *(int *)(iVar1 + 4);
  if (((*(int *)(iVar1 + 0x6c) << 0xf < 0) && (*(int *)(local_18 + 4) << 0x1d < 0)) &&
     (iVar3 = *(int *)(local_18 + 0xc), iVar3 != -1)) {
    iVar2 = FUN_00005ee0(iVar1 + 8,*(undefined *)(iVar1 + 1),iVar1 + 0x48);
    FUN_0000fa8c(iVar3,param_2);
    FUN_000050f0(param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_0000b5dc(iVar2);
  return iVar2;
}



/* FUN_000143c8 @ 000143c8 */

void FUN_000143c8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_000088b8(param_1,0,param_2);
  if (-1 < *(int *)(*(int *)(iVar1 + 4) + 0x6c) << 0xf) {
    FUN_000157cc();
    return;
  }
  iVar1 = FUN_00016dc0(param_1,param_2);
  if (iVar1 != 0) {
    FUN_0000b5dc(DAT_00014408);
  }
  FUN_000050f0(param_1,param_2);
  return;
}



/* FUN_0001440c @ 0001440c */

int FUN_0001440c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_40 [32];
  undefined local_20 [4];
  undefined4 local_1c;
  undefined auStack_18 [4];
  
  local_20[0] = 0xff;
  local_1c = 0;
  iVar1 = DAT_00014470;
  if (((*DAT_0001446c != '\0') &&
      (iVar1 = FUN_00008c94(*param_1,auStack_18,local_20,param_2), iVar1 == 0)) &&
     (iVar1 = FUN_00011aa8(local_20[0],2,0,0xffffffff,auStack_18,0,auStack_40,&local_1c), iVar1 == 0
     )) {
    FUN_00007d84(*param_1,param_2);
  }
  return iVar1;
}



/* FUN_00014474 @ 00014474 */

void FUN_00014474(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined auStack_38 [36];
  
  iVar4 = DAT_00014534;
  piVar1 = (int *)FUN_0000890c(param_1[1]);
  piVar2 = (int *)FUN_0000890c(*param_1,param_2);
  if ((((*(char *)(piVar1 + 8) != '\0') && (*(char *)(piVar2 + 8) != '\0')) && (*piVar1 == *piVar2))
     && ((piVar1[2] == piVar2[2] && ((uint)piVar1[5] <= (uint)piVar2[4])))) {
    if (piVar2[0x13] != 0) {
      FUN_000016e4(piVar2[0x13],piVar2[0x12]);
    }
    if (((piVar1[5] != 0) || (piVar1[1] == 5)) && (piVar2[0x13] != 0)) {
      FUN_000015e4(piVar2[0x13],piVar1[0x13],piVar1[0x12]);
    }
    piVar2[5] = piVar1[5];
    piVar2[7] = piVar1[7];
    piVar2[0x14] = piVar1[0x14];
    if (*(char *)((int)piVar1 + 0x21) == '\0') {
      return;
    }
    FUN_00001728(auStack_38,0x20);
    iVar3 = FUN_000032d8(auStack_38,*(undefined *)((int)piVar1 + 0x23),
                         *(undefined *)((int)piVar2 + 0x23),0,1,0,*(undefined *)((int)piVar1 + 0x23)
                         ,0,1,0,(uint)*(byte *)((int)piVar1 + 0x21) << 5,1);
    if ((iVar3 == 0) && (iVar4 = FUN_00014198(auStack_38,1), iVar4 == 0)) {
      return;
    }
  }
  FUN_0000b5b0(iVar4);
  return;
}



/* FUN_00014538 @ 00014538 */

int FUN_00014538(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_000145f8;
  iVar6 = 0;
  iVar5 = 0;
  software_interrupt(0x5e);
  uVar2 = 0;
  do {
    if (*(char *)(DAT_00014600 + uVar2 * 0x54 + 0x20) == '\0') {
      iVar6 = uVar2 + 0x10;
      iVar5 = DAT_00014600 + uVar2 * 0x54;
      *(undefined *)(iVar5 + 0x20) = 1;
      *(char *)(iVar5 + 0x22) = (char)param_2;
      *(undefined4 *)(iVar5 + 0x48) = 0;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  iVar3 = iVar1;
  if (iVar6 != 0) {
    iVar3 = FUN_00001cb0(*(undefined4 *)(param_1 + 0x3c),iVar5);
  }
  software_interrupt(0x5f);
  if (iVar6 != 0) {
    if ((iVar3 == 0) && (iVar3 = FUN_00004ae4(param_1 + 0x38,iVar5), iVar3 == 0)) {
      iVar4 = FUN_00006b14(*(undefined4 *)(iVar5 + 0x48),0,param_2);
      *(int *)(iVar5 + 0x4c) = iVar4;
      iVar3 = iVar1;
      if (iVar4 != 0) {
        if (*(int *)(iVar5 + 4) == 5) {
          FUN_0000fbc0(iVar5);
        }
        *(int *)(param_1 + 0x38) = iVar6;
        return 0;
      }
    }
    FUN_00007d44(iVar5);
    *(undefined *)(iVar5 + 0x22) = 0;
    *(undefined *)(iVar5 + 0x20) = 0;
  }
  return iVar3;
}



/* FUN_00014604 @ 00014604 */

int FUN_00014604(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_2c;
  
  local_2c = *(undefined4 *)(param_2 + 8);
  puVar10 = (uint *)(param_2 + 0x14);
  uVar9 = *(uint *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  piVar3 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x3c),param_3);
  iVar1 = DAT_00014714;
  uVar8 = (uint)piVar3[5] >> 3;
  if (uVar8 < uVar9) {
    return DAT_00014714;
  }
  iVar4 = FUN_0000b694(piVar3[0x13],&local_4c);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    uVar6 = uVar8;
    if (iVar4 != 0) {
      local_44 = local_4c;
      uVar6 = 4;
    }
    iVar5 = *piVar3;
    iVar7 = iVar5 - DAT_00014718;
    if (iVar5 == DAT_00014718) {
LAB_000146b2:
      iVar4 = DAT_00014714 + 3;
      goto LAB_000146fe;
    }
    if (iVar5 == DAT_00014718 || iVar5 < DAT_00014718) {
      iVar5 = iVar5 + -0x60000030;
      if (iVar5 == 0) {
        if (uVar9 != uVar8) {
          return iVar1;
        }
        iVar4 = FUN_000045c0(local_48,uVar8,local_44,uVar6,local_2c,uVar9,uVar2);
        if (iVar4 == 0) {
          *puVar10 = uVar8;
          return 0;
        }
        goto LAB_000146f2;
      }
      if (iVar5 != 0x100) {
        if (iVar5 + DAT_0001471c != 0) goto LAB_00014686;
        goto LAB_000146b2;
      }
      if (iVar4 == 0) {
        iVar4 = FUN_00010ca4(local_2c,uVar9,uVar2,puVar10,local_48,uVar8,local_44,uVar6);
      }
      else {
        iVar4 = FUN_00010d20();
      }
    }
    else {
      if (((iVar7 != 0x100000) && (iVar7 != 0x200000)) && (iVar7 != 0x300000)) {
LAB_00014686:
        iVar4 = DAT_00014714 + -6;
        goto LAB_000146fe;
      }
      if (iVar4 == 0) {
        iVar4 = FUN_000109a8(local_2c,uVar9,uVar2,puVar10,local_48,uVar8,local_44,uVar6,iVar5);
      }
      else {
        iVar4 = FUN_00010b28();
      }
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
LAB_000146f2:
  if (iVar4 == DAT_00014714 + 10) {
    return iVar4;
  }
  if (iVar4 == iVar1) {
    return iVar4;
  }
LAB_000146fe:
  FUN_0000b5b0(iVar4);
  return iVar4;
}



/* FUN_00014720 @ 00014720 */

int FUN_00014720(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  int local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  iVar10 = DAT_000149b0;
  uVar14 = 0;
  uVar1 = *param_2;
  local_30 = param_1;
  puStack_2c = param_2;
  uStack_28 = param_3;
  uVar2 = FUN_000019e8(param_2[1],0xc);
  local_38 = param_2[2];
  iVar11 = param_2[3];
  uVar3 = param_2[4];
  uVar12 = param_2[5];
  piVar4 = (int *)FUN_0000890c(*(undefined4 *)(local_30 + 0x3c),param_3);
  uVar8 = (uint)piVar4[5] >> 3;
  if (*piVar4 == DAT_000149b4) {
    if (uVar12 == 0x28) goto LAB_00014820;
LAB_000147a0:
    iVar10 = DAT_000149b0 + 0x10;
  }
  else {
    if (*piVar4 == DAT_000149b8) {
      if (uVar12 != uVar8 * 2) goto LAB_000147a0;
      if ((((iVar11 == 0x14) || (iVar11 == 0x1c)) || (iVar11 == 0x20)) ||
         ((iVar11 == 0x30 || (iVar11 == 0x40)))) {
LAB_00014834:
        iVar10 = DAT_000149b0 + 0xf;
        iVar6 = *(int *)(local_30 + 0x38);
        if (iVar6 == 0) {
          if ((piVar4[1] == 7) && (uVar9 = uVar8, uVar13 = local_50, piVar4[2] == 2))
          goto LAB_00014866;
        }
        else if ((piVar4[1] == 7) && (piVar4[2] == 3)) {
          uVar9 = 4;
          uVar13 = local_58;
LAB_00014866:
          iVar5 = *piVar4;
          iVar7 = iVar5 - DAT_000149d4;
          if (iVar5 == DAT_000149d4) {
LAB_000148e4:
            iVar5 = FUN_00010474(iVar6,local_38,iVar11,local_54,uVar8,uVar13,uVar9,uVar3);
          }
          else if (iVar5 == DAT_000149d4 || iVar5 < DAT_000149d4) {
            iVar10 = iVar5 - DAT_000149c0;
            if (iVar5 == DAT_000149c0) goto LAB_000148e4;
            if (iVar5 == DAT_000149c0 || iVar5 < DAT_000149c0) {
              iVar10 = iVar5 + DAT_000149c4;
              iVar5 = DAT_000149d8;
              if (iVar10 != 0) {
                if (iVar10 != 0x901) goto joined_r0x000148aa;
                if (iVar6 != 0) {
                  iVar5 = FUN_00005a68(piVar4[0x13],local_38,iVar11,uVar3);
                }
              }
            }
            else if (iVar10 == 0x812) {
              if (iVar6 == 0) {
                iVar5 = FUN_00006e20(local_38,iVar11,piVar4[0x13],uVar3,uVar12);
              }
              else {
                iVar5 = FUN_000070f8(local_38,iVar11,uVar3,uVar12,piVar4[0x13]);
              }
            }
            else {
joined_r0x000148aa:
              iVar5 = DAT_000149b0;
              if (iVar10 == 0x1000) goto LAB_000148e4;
            }
          }
          else {
            if (iVar7 != DAT_000149dc) {
              if (DAT_000149dc < iVar7) {
                iVar7 = (iVar7 - DAT_000149dc) + DAT_000149d0;
              }
              else {
                if (iVar7 == 0x1000) goto LAB_000148e4;
                iVar7 = iVar7 + DAT_000149e0;
              }
              if ((iVar7 != 0) && (iVar5 = DAT_000149b0, iVar7 + DAT_000149d0 != 0))
              goto LAB_000148d8;
            }
            if (iVar6 == 0) {
              iVar5 = iVar10;
              if (uVar2 < 2) {
                iVar10 = FUN_00007af6(uVar1,uVar2,DAT_000149e4);
                if (iVar10 != 0) {
                  uVar14 = *(undefined4 *)(iVar10 + 4);
                }
                iVar5 = FUN_00010674(local_38,iVar11,local_54,uVar8,uVar13,uVar9,uVar14,uVar3);
              }
            }
            else {
              iVar5 = FUN_00010804(local_38,iVar11,local_54,uVar8,uVar13,uVar9,uVar3);
            }
          }
LAB_000148d8:
          if (*(int *)(local_30 + 0x38) == 0 && iVar5 == 0) {
            if (*piVar4 == DAT_000149b8) {
              param_2[5] = uVar8 << 1;
            }
            else {
              param_2[5] = uVar8;
            }
          }
          if (iVar5 == 0) {
            return 0;
          }
          goto LAB_00014992;
        }
      }
    }
    else {
      if (uVar12 < uVar8) goto LAB_000147a0;
      iVar5 = FUN_0000b694(piVar4[0x13],&local_58);
      if (iVar5 == 0) {
        iVar10 = *piVar4;
        iVar5 = iVar10 - DAT_000149bc;
        if (iVar10 == DAT_000149bc) {
LAB_00014830:
          iVar5 = 0x40;
        }
        else if (iVar10 == DAT_000149bc || iVar10 < DAT_000149bc) {
          if (iVar10 != DAT_000149c0) {
            if (DAT_000149c0 < iVar10) {
              if (iVar10 - DAT_000149c0 == 0x1000) goto LAB_00014828;
              if (iVar10 - DAT_000149c0 == 0x2000) goto LAB_0001482c;
            }
            else {
              if (iVar10 + DAT_000149c4 == 0) {
                iVar5 = 0x10;
                goto LAB_00014812;
              }
              if (iVar10 + DAT_000149c4 == 0x1000) goto LAB_00014820;
            }
            goto LAB_0001480e;
          }
LAB_00014824:
          iVar5 = 0x1c;
        }
        else if (iVar5 == DAT_000149c8) {
LAB_00014828:
          iVar5 = 0x20;
        }
        else if (iVar5 == DAT_000149c8 || iVar5 < DAT_000149c8) {
          if (iVar5 + DAT_000149cc == 0) {
LAB_00014820:
            iVar5 = 0x14;
          }
          else {
            if (iVar5 + DAT_000149cc + DAT_000149d0 == 0) goto LAB_00014824;
LAB_0001480e:
            iVar5 = -1;
          }
        }
        else {
          iVar10 = (iVar5 - DAT_000149c8) + DAT_000149d0;
          if (iVar10 != 0) {
            if (iVar10 + DAT_000149d0 == 0) goto LAB_00014830;
            goto LAB_0001480e;
          }
LAB_0001482c:
          iVar5 = 0x30;
        }
LAB_00014812:
        iVar10 = DAT_000149b0;
        if (iVar11 == iVar5) goto LAB_00014834;
        goto LAB_000149a0;
      }
LAB_00014992:
      if (iVar5 == DAT_000149d8 + 7) {
        return iVar5;
      }
      iVar10 = iVar5;
      if (iVar5 == DAT_000149e8) {
        return iVar5;
      }
    }
LAB_000149a0:
    FUN_0000b5b0(iVar10);
  }
  return iVar10;
}



/* FUN_000149ec @ 000149ec */

int FUN_000149ec(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_00014aac;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  piVar1 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3,param_3,param_4,param_1,
                               param_2,param_3,param_4);
  if (piVar1[5] == 0) goto LAB_00014a94;
  if (piVar1[7] << 0xe < 0) {
    FUN_0000fe90(piVar1);
  }
  piVar1[0x14] = 1;
  iVar2 = FUN_00004a68(*piVar1,uVar5);
  if (iVar2 != 0) goto LAB_00014a94;
  iVar2 = *piVar1;
  iVar3 = iVar2 - DAT_00014ab0;
  if (iVar2 == DAT_00014ab0) {
LAB_00014a54:
    iVar2 = FUN_00003f18(*(undefined *)((int)piVar1 + 0x23),uVar4);
    if (iVar2 != 0) goto LAB_00014a94;
  }
  else {
    if (iVar2 != DAT_00014ab0 && DAT_00014ab0 <= iVar2) {
      if (((iVar3 != DAT_00014ab0 >> 0x14) && (iVar3 != 0x200)) &&
         (iVar2 = iVar3 + DAT_00014ab4, iVar2 != 0)) goto LAB_00014a50;
      goto LAB_00014a54;
    }
    iVar2 = iVar2 + -0x10000010;
    if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 3)) {
LAB_00014a50:
      if (iVar2 != DAT_00014ab0 >> 0x14) {
        iVar2 = DAT_00014aac + 10;
        goto LAB_00014a94;
      }
      goto LAB_00014a54;
    }
  }
  iVar3 = *piVar1;
  iVar2 = FUN_00003914(piVar1 + 10,0,piVar1[5],piVar1[2],iVar3,*DAT_00014ab8 + 0x280,
                       *DAT_00014ab8 + 0x280,*(undefined *)((int)piVar1 + 0x23));
  if (iVar2 == 0) {
    piVar1[7] = piVar1[7] | 0x20000;
    return iVar3;
  }
LAB_00014a94:
  iVar2 = FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00014abc @ 00014abc */

int FUN_00014abc(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = DAT_00014ba0;
  uVar1 = *param_2;
  iVar8 = param_2[1];
  iVar9 = param_2[2];
  uVar2 = param_2[3];
  piVar3 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  if (((piVar3[5] == 0) || (-1 < piVar3[7] << 0xe)) || (piVar3[0x14] != 1)) goto LAB_00014b90;
  iVar7 = piVar3[0x13];
  uVar6 = *(int *)(iVar7 + 0x40) + iVar8;
  if (param_4 == 0) {
    uVar6 = uVar6 & 0xfffffff0;
  }
  if (uVar2 < uVar6) {
    return DAT_00014ba0 + 0x10;
  }
  iVar4 = *piVar3;
  iVar5 = DAT_00014ba4 >> 0x14;
  if (iVar4 != DAT_00014ba4) {
    if (DAT_00014ba4 < iVar4) {
      if (((iVar4 - DAT_00014ba4 != iVar5) &&
          (iVar4 = (iVar4 - DAT_00014ba4) + DAT_00014ba8, iVar4 != 0)) && (iVar4 != iVar5))
      goto LAB_00014b54;
    }
    else if (((iVar4 != 0x10000010) && (iVar4 + -0x10000010 != iVar5)) &&
            (iVar4 + -0x10000010 != 0x200)) {
LAB_00014b54:
      iVar4 = DAT_00014ba0 + 10;
      goto LAB_00014b90;
    }
  }
  iVar4 = FUN_00003754(piVar3,uVar1,iVar8,iVar9);
  if (iVar4 == 0) {
    iVar8 = 0;
    if (param_4 != 1) {
LAB_00014b9c:
      param_2[3] = uVar6;
      return iVar8;
    }
    if ((uVar6 & 0xf) != 0) {
      iVar4 = FUN_00003888(piVar3,(uVar6 & 0xfffffff0) + iVar9,uVar6 & 0xf);
    }
    *(undefined4 *)(iVar7 + 0x40) = 0;
    piVar3[7] = piVar3[7] & 0xfffdffff;
    piVar3[0x14] = 0;
    iVar8 = iVar4;
    if (iVar4 == 0) goto LAB_00014b9c;
  }
  if (iVar4 == DAT_00014ba0 + 0x10) {
    return iVar4;
  }
LAB_00014b90:
  FUN_0000b5b0(iVar4);
  return iVar4;
}



/* FUN_00014bac @ 00014bac */

int FUN_00014bac(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = *param_2;
  uVar6 = param_2[1];
  iVar2 = FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3,param_3,param_4,param_4);
  iVar1 = DAT_00014c00;
  iVar3 = DAT_00014c00;
  if (*(uint *)(iVar2 + 0xc) <= uVar5) {
    iVar3 = FUN_00003f88(iVar2,*(undefined4 *)(iVar2 + 0x4c),uVar7,uVar6,uVar4);
    if (iVar3 == 0) {
      param_2[3] = *(undefined4 *)(iVar2 + 0xc);
      FUN_0000fe90(iVar2);
    }
    else if (iVar3 != iVar1) {
      FUN_0000b5b0();
    }
  }
  return iVar3;
}



/* FUN_00014c04 @ 00014c04 */

int FUN_00014c04(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  iVar1 = FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  *(undefined4 *)(iVar1 + 0x50) = 1;
  iVar1 = FUN_00004200(iVar1,*(undefined4 *)(iVar1 + 0x4c),uVar2,uVar3);
  if (iVar1 != 0) {
    FUN_0000b5b0();
  }
  return iVar1;
}



/* FUN_00014c2c @ 00014c2c */

void FUN_00014c2c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0000890c(*param_1);
  FUN_00007d44();
  FUN_000016e4(*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x48));
  FUN_00006b64(*(undefined4 *)(iVar1 + 0x4c),param_2);
  *(undefined *)(iVar1 + 0x22) = 0;
  *(undefined *)(iVar1 + 0x20) = 0;
  return;
}



/* FUN_00014c58 @ 00014c58 */

int FUN_00014c58(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined auStack_78 [64];
  int local_38;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  
  iVar6 = DAT_00014d8c;
  iVar1 = *DAT_00014d88;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar11 = param_2[3];
  local_38 = iVar1;
  iStack_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  piVar5 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x3c),param_3);
  iVar10 = DAT_00014d90;
  if ((piVar5[7] << 0xe < 0) && (piVar5[0x14] == 1)) {
    if (*piVar5 == DAT_00014d94) {
      iVar6 = FUN_00003d4c(piVar5,uVar2,uVar3);
      if (iVar6 == 0) {
        iVar7 = FUN_00003a6c(piVar5,auStack_78);
LAB_00014d1c:
        iVar6 = iVar7;
        if (iVar7 == 0) {
          if (*(int *)(param_1 + 0x38) == 0) {
            if (uVar11 < (uint)piVar5[3]) {
              iVar6 = DAT_00014d8c + 0x10;
              goto LAB_00014d76;
            }
            FUN_000015e4(uVar4,auStack_78);
            param_2[3] = piVar5[3];
          }
          else {
            iVar9 = FUN_0000ae74(uVar4,auStack_78);
            iVar6 = iVar10;
            if (iVar9 != 0) goto LAB_00014d58;
          }
          piVar5[7] = piVar5[7] & 0xfffdffff;
          piVar5[0x14] = 0;
          iVar6 = iVar7;
        }
      }
    }
    else {
      iVar7 = piVar5[0x13];
      iVar6 = FUN_00003f88(piVar5,iVar7 + 0x150,uVar2,uVar3,*(int *)(iVar7 + 0xc0) + iVar7);
      if (iVar6 == 0) {
        FUN_000016d4(*(int *)(iVar7 + 0x144) + iVar7,
                     *(int *)(iVar7 + 0xc0) - *(int *)(iVar7 + 0x144),0x5c);
        for (uVar8 = 0; uVar8 < *(uint *)(iVar7 + 0x144); uVar8 = uVar8 + 1) {
          *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8 + 0xc4) ^ 0x5c;
        }
        iVar7 = FUN_00009094(local_28,*(undefined4 *)(iVar7 + 0x148),iVar7,
                             *(int *)(iVar7 + 0xc0) + piVar5[3],auStack_78,0x40);
        goto LAB_00014d1c;
      }
    }
  }
LAB_00014d58:
  if (*(int *)(param_1 + 0x38) == 0) {
    if (iVar6 == 0) goto LAB_00014d76;
    iVar10 = DAT_00014d8c + 0x10;
  }
  else if (iVar6 == 0) goto LAB_00014d76;
  if (iVar6 != iVar10) {
    FUN_0000b5b0(iVar6);
  }
LAB_00014d76:
  if (local_38 != iVar1) {
    FUN_00001a20();
  }
  return iVar6;
}



/* FUN_00014d98 @ 00014d98 */

void FUN_00014d98(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_00014e3c;
  piVar1 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  if (piVar1[7] << 0xe < 0) {
    FUN_0000fe90(piVar1);
  }
  piVar1[0x14] = 1;
  if ((piVar1[1] == 3) && (piVar1[5] != 0)) {
    if (*piVar1 == DAT_00014e40) {
      iVar2 = FUN_00003ba8(piVar1,piVar1[0x13]);
    }
    else {
      iVar4 = piVar1[0x13];
      iVar2 = FUN_000040e4(piVar1);
      if (iVar2 != 0) goto LAB_00014e24;
      FUN_000016d4(*(int *)(iVar4 + 0x144) + iVar4,*(int *)(iVar4 + 0xc0) - *(int *)(iVar4 + 0x144),
                   0x36);
      for (uVar3 = 0; uVar3 < *(uint *)(iVar4 + 0x144); uVar3 = uVar3 + 1) {
        *(byte *)(iVar4 + uVar3) = *(byte *)(iVar4 + uVar3 + 0xc4) ^ 0x36;
      }
      iVar2 = FUN_00004200(piVar1,iVar4 + 0x150,iVar4,*(undefined4 *)(iVar4 + 0xc0));
    }
    if (iVar2 == 0) {
      piVar1[7] = piVar1[7] | 0x20000;
      return;
    }
  }
LAB_00014e24:
  FUN_0000b5b0(iVar2);
  return;
}



/* FUN_00014e44 @ 00014e44 */

void FUN_00014e44(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00014e9c;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  piVar1 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  if ((piVar1[7] << 0xe < 0) && (piVar1[0x14] == 1)) {
    if (piVar1[1] == 3) {
      if (*piVar1 == DAT_00014ea0) {
        iVar2 = FUN_00003d4c(piVar1,uVar3,uVar4);
      }
      else {
        iVar2 = FUN_00004200(piVar1,piVar1[0x13] + 0x150,uVar3,uVar4);
      }
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      iVar2 = iVar2 + 6;
    }
  }
  FUN_0000b5b0(iVar2);
  return;
}



/* FUN_00014ea4 @ 00014ea4 */

void FUN_00014ea4(undefined4 *param_1)

{
  FUN_0000890c(*param_1);
  FUN_0000fe90();
  return;
}



/* FUN_00014eb4 @ 00014eb4 */

int FUN_00014eb4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = DAT_000150e0;
  piVar1 = (int *)FUN_0000890c(*param_1);
  if (param_1[1] == 0) {
    FUN_000016e4(piVar1[0x13],piVar1[0x12]);
    return 0;
  }
  iVar2 = FUN_000088b8(param_1[1],0,param_2);
  iVar5 = *(int *)(iVar2 + 4);
  if (((-1 < *(int *)(iVar5 + 0x6c) << 0xe) || (piVar1[0x14] != 0)) ||
     (uVar6 = *(uint *)(iVar5 + 4), (uint)piVar1[0x12] < uVar6)) goto LAB_00014ffc;
  iVar3 = *piVar1;
  iVar7 = iVar3 - DAT_000150e4;
  if (iVar3 == DAT_000150e4) goto LAB_00015032;
  if (iVar3 != DAT_000150e4 && DAT_000150e4 <= iVar3) {
    iVar3 = iVar7 - DAT_000150fc;
    if (iVar7 == DAT_000150fc) {
      iVar2 = piVar1[0x13];
      if (0xd0 < uVar6) goto LAB_00014ffc;
      FUN_00001670(iVar2,iVar5 + 0x70,uVar6,iVar7,param_4);
      iVar4 = *(int *)(iVar2 + 4);
      goto LAB_000150da;
    }
    if (iVar7 == DAT_000150fc || iVar7 < DAT_000150fc) {
      if (iVar7 != DAT_00015100) {
        if (DAT_00015100 < iVar7) {
          iVar3 = (iVar7 - DAT_00015100) + DAT_00015108;
          if (iVar3 != 0) {
            if (iVar3 == 0x901) {
              if (((*(int *)(iVar5 + 0x58) == DAT_00015118 + 0x21) && (piVar1[2] != 3)) ||
                 ((uint)piVar1[4] < *(uint *)(iVar5 + 0x5c))) goto LAB_00014ffc;
              FUN_000015e4(piVar1[0x13],iVar5 + 0x70);
              iVar4 = *(int *)(*(int *)(iVar2 + 4) + 0x5c);
              goto LAB_000150da;
            }
            if ((iVar3 != 0x1000) && (iVar3 != 0x2000)) goto LAB_00014ff8;
          }
        }
        else {
          iVar7 = iVar7 + DAT_00015104;
          if (((iVar7 != 0) && ((iVar7 != 0x100000 && (iVar7 != 0x200000)))) && (iVar7 != 0x300000))
          goto LAB_00014ff8;
        }
      }
    }
    else if (iVar3 != DAT_0001510c) {
      if (DAT_0001510c < iVar3) {
        iVar3 = (iVar3 - DAT_0001510c) + DAT_00015114;
        if ((iVar3 != 0) && (iVar3 = iVar3 + DAT_00015114, iVar7 = DAT_00015114, iVar3 != 0))
        goto LAB_00014ff4;
      }
      else {
        iVar3 = iVar3 + -0x7ee;
        if ((iVar3 != 0) && ((iVar3 != 0x1000 && (iVar7 = DAT_00015110, iVar3 != 0x2000)))) {
LAB_00014ff4:
          if (iVar3 + iVar7 != 0) goto LAB_00014ff8;
        }
      }
    }
LAB_00015032:
    if ((((*(int *)(iVar5 + 0x58) == DAT_00015118 + 0x20) && (piVar1[2] != 3)) && (piVar1[2] != 0))
       || ((uint)piVar1[4] < *(uint *)(iVar5 + 0x5c))) goto LAB_00014ffc;
    FUN_00001670(piVar1[0x13],iVar5 + 0x70,uVar6,*(uint *)(iVar5 + 0x5c),param_4);
    iVar4 = *(int *)(*(int *)(iVar2 + 4) + 0x74);
    goto LAB_000150da;
  }
  iVar7 = iVar3 - DAT_000150e8;
  if (iVar3 == DAT_000150e8) {
LAB_00015098:
    iVar2 = piVar1[0x13];
    iVar4 = FUN_00011efc(param_2,iVar2,iVar3,iVar5 + 0x70,uVar6);
    if (iVar4 == 0) {
      piVar1[5] = *(int *)(iVar2 + 0x144) << 3;
      return 0;
    }
    goto LAB_00014ffc;
  }
  if (iVar3 == DAT_000150e8 || iVar3 < DAT_000150e8) {
    iVar7 = iVar3 - DAT_000150ec;
    if (iVar3 == DAT_000150ec) {
LAB_0001500a:
      iVar7 = *(int *)(iVar5 + 0x58);
      iVar3 = piVar1[0x13];
      if ((((iVar7 != DAT_00015118) && (iVar7 != DAT_00015118 + 1)) && (iVar7 != DAT_00015118 + 3))
         || (uVar8 = *(uint *)(iVar5 + 0x5c), (uint)piVar1[4] < uVar8)) {
LAB_00014ffc:
        FUN_0000b5b0(iVar4);
        return iVar4;
      }
      goto LAB_000150be;
    }
    if (iVar3 != DAT_000150ec && DAT_000150ec <= iVar3) {
      if ((((iVar7 != 1) && (iVar7 != 3)) && (iVar7 != 0x100)) && (iVar7 != 0x200)) {
LAB_00014ff8:
        iVar4 = DAT_000150e0 + 10;
        goto LAB_00014ffc;
      }
      goto LAB_0001500a;
    }
    iVar3 = iVar3 + DAT_000150f0;
    if (iVar3 != 0) {
      if (((iVar3 != -0x70000022) && (iVar3 != -0x70000021)) && (iVar3 != -0x7000001f))
      goto LAB_00014ff8;
      goto LAB_0001500a;
    }
    iVar4 = piVar1[0x13];
    FUN_00001670(iVar4,iVar5 + 0x70,uVar6,DAT_000150f0,param_4);
    iVar4 = *(int *)(iVar4 + 0x404);
  }
  else {
    if (iVar7 != 0x60e) {
      if (iVar7 < 0x60f) {
        if ((((iVar7 != 1) && (iVar7 != 2)) && (iVar7 != 3)) && (iVar7 != 4)) goto LAB_00014ff8;
        goto LAB_00015098;
      }
      iVar3 = iVar7 + -0x60e + DAT_000150f4;
      if ((iVar3 != 0) && (iVar7 = DAT_000150f8, iVar3 != 0x100)) goto LAB_00014ff4;
      goto LAB_0001500a;
    }
    iVar3 = piVar1[0x13];
    uVar8 = 0x60e;
    if (0x20 < uVar6) goto LAB_00014ffc;
LAB_000150be:
    FUN_00001670(iVar3,iVar5 + 0x70,uVar6,uVar8,param_4);
    iVar4 = *(int *)(*(int *)(iVar2 + 4) + 4);
  }
  iVar4 = iVar4 << 3;
LAB_000150da:
  piVar1[5] = iVar4;
  return 0;
}



/* FUN_0001511c @ 0001511c */

int FUN_0001511c(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int local_64;
  undefined *local_60;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_30;
  int *piStack_2c;
  undefined4 local_28;
  
  iVar2 = *DAT_000152cc;
  iVar7 = 0;
  local_54 = 0;
  local_50 = -1;
  local_64 = 0;
  uVar6 = 0;
  if ((param_2[2] != 0) && (param_2[3] != 0)) {
    uVar6 = param_2[3];
    local_64 = param_2[2];
  }
  local_4c = *param_2;
  uVar8 = param_2[1];
  uVar9 = *(undefined4 *)(param_1 + 0x3c);
  iVar3 = DAT_000152d0;
  local_38 = iVar2;
  iStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  if (0x2000 < uVar6) goto LAB_000152b8;
  if ((((local_4c == 0) || (uVar8 == 0)) || (0x40 < uVar8)) || (*(int *)(param_1 + 0x38) != 1)) {
    FUN_0000b5dc(DAT_000152d4);
  }
  iVar3 = FUN_00008db4(&local_48,0x10,local_28);
  if (iVar3 != 0) {
    FUN_0000b5dc();
  }
  local_50 = FUN_00007b40(local_4c,uVar8,local_28);
  iVar3 = FUN_0000b474(local_50,uVar9,&local_54,local_28);
  if (iVar3 == 0) {
    iVar4 = 0x70;
    if (*(int *)(param_1 + 0x40) == 0) {
      bVar1 = true;
    }
    else {
      iVar7 = FUN_000088b8(*(int *)(param_1 + 0x40),0,local_28);
      iVar3 = FUN_00004ed0();
      if (iVar3 != 0) {
        FUN_0000b5dc();
        goto LAB_0001529e;
      }
      iVar4 = *(int *)(*(int *)(iVar7 + 4) + 4) + 0x70;
      bVar1 = false;
    }
    iVar3 = FUN_00005594(local_4c,uVar8,&local_50,uVar9,local_28);
    if (iVar3 != 0) goto LAB_0001529e;
    iVar3 = FUN_000088ac(local_54);
    *(int *)(DAT_000152d8 + iVar3 * 0x10 + 0xc) = local_50;
    puVar10 = (undefined *)(DAT_000152dc + local_50 * 8);
    puVar5 = (undefined *)FUN_00006b14(iVar4 + uVar6,0,local_28);
    iVar3 = DAT_000152d4;
    if (puVar5 == (undefined *)0x0) {
      *puVar10 = 0;
      iVar3 = iVar3 + 6;
      goto LAB_0001529e;
    }
    *(undefined **)(puVar10 + 4) = puVar5;
    uVar9 = DAT_000152e0;
    local_60 = puVar5 + 0x70;
    if (bVar1) {
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 0x58) = uVar9;
    }
    else {
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(*(int *)(iVar7 + 4) + 4);
      FUN_00001670(puVar5 + 0x58,*(int *)(iVar7 + 4) + 0x58,0x18);
      FUN_00001670(local_60,*(int *)(iVar7 + 4) + 0x70,*(undefined4 *)(*(int *)(iVar7 + 4) + 4));
      local_60 = local_60 + *(int *)(puVar5 + 4);
    }
    *puVar5 = 1;
    puVar5[1] = (char)uVar8;
    *(uint *)(puVar5 + 0x68) = uVar6;
    *(uint *)(puVar5 + 0x6c) = *(uint *)(puVar5 + 0x6c) | 0x10000;
    FUN_000015e4(puVar5 + 8,local_4c,uVar8);
    *(undefined4 *)(puVar5 + 0x48) = local_48;
    *(undefined4 *)(puVar5 + 0x4c) = uStack_44;
    *(undefined4 *)(puVar5 + 0x50) = uStack_40;
    *(undefined4 *)(puVar5 + 0x54) = uStack_3c;
    if (uVar6 != 0) {
      FUN_000015e4(local_60,local_64,uVar6);
    }
    iVar3 = FUN_000114c8(*(undefined4 *)(puVar10 + 4));
    if (iVar3 != 0) goto LAB_0001529e;
  }
  else {
LAB_0001529e:
    FUN_0000fa8c(local_50,local_28);
    FUN_000050f0(local_54,local_28);
    local_54 = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = local_54;
LAB_000152b8:
  if (local_38 != iVar2) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_000152e4 @ 000152e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000152e4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined auStack_13c [12];
  undefined4 local_130;
  undefined auStack_12c [256];
  int local_2c;
  
  iVar5 = DAT_00015404;
  iVar1 = *DAT_00015400;
  local_2c = iVar1;
  FUN_00001728(auStack_12c,0x100);
  piVar2 = (int *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  iVar3 = FUN_000088b8(*(undefined4 *)(param_1 + 0x3c),0,param_3);
  iVar6 = piVar2[0x13];
  iVar8 = *(int *)(iVar3 + 4) + 0x70;
  uVar7 = *param_2;
  uVar4 = FUN_000019e8(param_2[1],0xc);
  if ((((uVar4 < 2) && (FUN_00001670(auStack_13c,uVar7,uVar4 * 0xc), piVar2[1] == 8)) &&
      (piVar2[5] != 0)) && (piVar2[2] == 6)) {
    if (((*(uint *)(iVar6 + 0x404) <= *(uint *)(*(int *)(iVar3 + 4) + 0x60) >> 3) &&
        ((*(uint *)(*(int *)(iVar3 + 4) + 0x6c) & 0x30000) == 0)) &&
       (iVar5 = FUN_00005238(auStack_12c,0x100,DAT_00015408,&local_130,auStack_13c,uVar4,2),
       iVar5 == 0)) {
      if (*piVar2 + DAT_0001540c == 0) {
        FUN_000036d0(auStack_12c,local_130);
        iVar5 = FUN_000045c0(iVar6 + 0x100,*(undefined4 *)(iVar6 + 0x404),iVar6 + 0x200,
                             *(undefined4 *)(iVar6 + 0x408),auStack_12c,local_130,iVar8);
        if (iVar5 == 0) {
          FUN_000036d0(iVar8,*(undefined4 *)(iVar6 + 0x404));
          *(int *)(*(int *)(iVar3 + 4) + 0x5c) = *(int *)(iVar6 + 0x404) << 3;
          *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar6 + 0x404);
          *(uint *)(*(int *)(iVar3 + 4) + 0x6c) = *(uint *)(*(int *)(iVar3 + 4) + 0x6c) | 0x20000;
          goto LAB_00015396;
        }
      }
      else {
        iVar5 = DAT_00015404 + 10;
      }
    }
  }
  FUN_0000b5b0(iVar5);
LAB_00015396:
  if (local_2c != iVar1) {
    do {
      do {
      } while (iVar1 < local_2c);
      coprocessor_function(0xe,10,7,in_cr11,in_cr13,in_cr15);
    } while( true );
  }
  return;
}



/* FUN_00015410 @ 00015410 */

undefined8
FUN_00015410(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  puVar6 = param_1 + 2;
  uVar8 = 0;
  uVar4 = param_2;
  do {
    if ((puVar6[uVar8 * 2] != 0) &&
       (iVar1 = FUN_0000a14c(puVar6[uVar8 * 2],puVar6[uVar8 * 2 + 1],2), iVar3 = DAT_00015710,
       iVar1 == 0)) goto LAB_000154b2;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  puVar2 = param_1 + 0xe;
  iVar3 = iVar7;
  switch(*param_1) {
  default:
    iVar3 = DAT_00015710 + -6;
    break;
  case 1:
    iVar3 = FUN_00014538(param_1,param_2);
    break;
  case 2:
    FUN_00014c2c(puVar2,param_2);
    break;
  case 3:
    iVar3 = FUN_00014eb4(puVar2,param_2);
    break;
  case 4:
    FUN_00014ea4(puVar2,param_2);
    break;
  case 5:
    FUN_000149ec(param_1,puVar6,param_2);
    break;
  case 6:
    uVar5 = 0;
    goto LAB_000154ec;
  case 7:
    uVar5 = 1;
LAB_000154ec:
    iVar3 = FUN_00014abc(param_1,puVar6,param_2,uVar5);
    break;
  case 8:
  case 9:
    iVar3 = FUN_00014604(param_1,puVar6,param_2);
    break;
  case 10:
  case 0xb:
    iVar3 = FUN_00014720(param_1,puVar6,param_2);
    break;
  case 0xc:
    iVar3 = FUN_00014c04(param_1,puVar6,param_2);
    break;
  case 0xd:
    iVar3 = FUN_00014bac(param_1,puVar6,param_2);
    break;
  case 0xe:
    FUN_00014d98(param_1,puVar6,param_2);
    break;
  case 0xf:
    FUN_00014e44(param_1,puVar6,param_2);
    break;
  case 0x10:
  case 0x11:
    FUN_00014c58(param_1,puVar6,param_2);
    break;
  case 0x30:
    iVar3 = FUN_000142e8(puVar2,param_2);
    break;
  case 0x31:
    FUN_000157cc(param_1[0xe],param_2);
    break;
  case 0x32:
    FUN_00016340(puVar2,param_2);
    break;
  case 0x33:
    FUN_000161e4(param_1,puVar6,param_2,2);
    break;
  case 0x34:
    iVar3 = FUN_00015820(param_1,puVar6,param_2,0);
    break;
  case 0x35:
    FUN_0001593c(param_1,puVar6);
    break;
  case 0x36:
    FUN_00015c1c(param_1,puVar6,param_2);
    break;
  case 0x37:
    FUN_00014474(puVar2,param_2);
    break;
  case 0x38:
    FUN_00015944(param_1,puVar6,param_2);
    break;
  case 0x39:
    FUN_000152e4(param_1,puVar6,param_2);
    break;
  case 0x3a:
    FUN_00015bd0(param_1,puVar6,param_2);
    break;
  case 0x3b:
    FUN_00016378(puVar2,param_2,2);
    break;
  case 0x40:
    FUN_0000b5b0(param_1[0xe]);
    break;
  case 0x41:
    iVar3 = FUN_00016474(param_1[0xe]);
    break;
  case 0x42:
    FUN_00015ff0();
    break;
  case 0x43:
    uVar4 = param_1[3];
    iVar3 = FUN_00015d60(param_2,param_1[0xe],0,*puVar6,uVar4,param_1[4],param_1 + 5);
    break;
  case 0x44:
    iVar3 = FUN_00015c40(param_1,puVar6,param_2);
    break;
  case 0x45:
    iVar3 = FUN_00015c9c(param_1,puVar6,param_2);
    break;
  case 0x46:
    uVar4 = param_1[3];
    iVar3 = FUN_00015f34(param_2,param_1[0xe],0,*puVar6,uVar4,param_1 + 0xf);
    break;
  case 0x47:
    iVar3 = FUN_00015f84(param_1,puVar6,param_2);
    break;
  case 0x48:
    iVar3 = FUN_00015cf4(param_1,puVar6,param_2);
    break;
  case 0x50:
    iVar3 = FUN_000157c6(param_2);
    break;
  case 0x51:
    FUN_000157c4(param_2);
    break;
  case 0x52:
    FUN_000157ca(puVar2,param_2);
    break;
  case 0x53:
    FUN_00015714(*puVar6,param_1[3],param_1[0xe],param_2,uVar4,param_3,param_4);
    break;
  case 0x54:
    iVar3 = FUN_0001615c(puVar2,param_2);
    break;
  case 0x55:
    iVar3 = FUN_0001440c(puVar2,param_2);
    break;
  case 0x56:
    iVar3 = FUN_0001601c(puVar2,param_2);
    break;
  case 0x57:
    iVar3 = FUN_0001511c(param_1,puVar6,param_2);
    break;
  case 0x58:
    FUN_000143c8(param_1[0xe],param_2);
    break;
  case 0x59:
    FUN_00014374(param_1[0xe],param_2);
    break;
  case 0x5a:
    iVar3 = FUN_0001606c(param_1,puVar6,param_2);
    break;
  case 0x5b:
    iVar3 = FUN_000162d8(param_1,puVar6,param_2);
    break;
  case 0x5c:
    iVar3 = FUN_00016498(param_1,puVar6,param_2);
    break;
  case 0x5d:
    iVar3 = FUN_00016410(param_1,puVar6,param_2);
    break;
  case 0x5e:
    iVar3 = FUN_000163a0(param_1,puVar6,param_2);
  }
LAB_000154b2:
  return CONCAT44(uVar4,iVar3);
}



/* FUN_00015714 @ 00015714 */

undefined8 FUN_00015714(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  software_interrupt(0x5e);
  if (((param_2 < 0x101) && (param_2 != 0)) && (*(char *)(param_1 + param_2 + -1) == '\0')) {
    uVar1 = FUN_000015a8(param_1);
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    uVar7 = 0;
    do {
      pbVar5 = (byte *)(DAT_000157c0 + uVar7 * 8);
      iVar2 = *(int *)(pbVar5 + 4);
      if (iVar2 == 0) break;
      if (*pbVar5 == param_4) {
        uVar3 = *(uint *)(iVar2 + 8);
        uVar4 = *(uint *)(iVar2 + 0xc);
        if ((0x7e < *(uint *)(iVar2 + 0xc)) && (uVar4 = uVar3, 0x7e < uVar3)) {
          uVar4 = 0;
        }
        uVar6 = uVar4 + 1;
        if (0x7e < uVar6) {
          uVar6 = 0;
        }
        if ((uVar3 != uVar6) ||
           (software_interrupt(0x56), *(uint *)(*(int *)(pbVar5 + 4) + 8) != uVar6)) {
          FUN_000015e4(uVar4 * 0x100 + 0x100 + *(int *)(pbVar5 + 4),param_1,uVar1);
          *(undefined *)(*(int *)(pbVar5 + 4) + uVar4 * 0x100 + uVar1 + 0x100) = 0;
          *(uint *)(*(int *)(pbVar5 + 4) + 0xc) = uVar6;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
  }
  software_interrupt(0x5f);
  return CONCAT44(param_2,param_1);
}



/* FUN_000157c4 @ 000157c4 */

void FUN_000157c4(void)

{
  return;
}



/* FUN_000157c6 @ 000157c6 */

undefined4 FUN_000157c6(void)

{
  return 0;
}



/* FUN_000157ca @ 000157ca */

void FUN_000157ca(void)

{
  return;
}



/* FUN_000157cc @ 000157cc */

void FUN_000157cc(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    iVar2 = FUN_000088ac();
    uVar1 = DAT_00015818;
    if (iVar2 == -1) {
      FUN_0000b5dc(DAT_00015818);
    }
    pcVar3 = (char *)(DAT_0001581c + iVar2 * 0x10);
    if ((*pcVar3 == '\0') || ((byte)pcVar3[1] != param_2)) {
      FUN_0000b5dc(uVar1);
    }
    FUN_0000fa8c(*(undefined4 *)(pcVar3 + 0xc),param_2);
    FUN_000050f0(param_1,param_2);
    return;
  }
  return;
}



/* FUN_00015820 @ 00015820 */

int FUN_00015820(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_0001592c;
  iVar1 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),0);
  uVar6 = *param_2;
  uVar2 = FUN_000019e8(param_2[1],0xc);
  iVar3 = *(int *)(iVar1 + 4);
  uVar4 = *(uint *)(param_1 + 0x3c);
  if (((*(uint *)(iVar3 + 0x6c) & 0x30000) != 0) || (*(uint *)(iVar3 + 0x60) < uVar4))
  goto switchD_00015872_caseD_5;
  iVar3 = *(int *)(iVar3 + 0x58);
  iVar5 = DAT_0001592c + 10;
  if (iVar3 == DAT_00015930) {
switchD_00015872_caseD_fffffffc:
    if (0x400 < uVar4) goto switchD_00015872_caseD_5;
switchD_00015872_caseD_fffffffb:
    iVar5 = FUN_0000b378(iVar1);
  }
  else {
    if (iVar3 <= DAT_00015930) {
      switch(iVar3 - DAT_00015930) {
      case -5:
        goto switchD_00015872_caseD_fffffffb;
      case -4:
      case -3:
      case -2:
      case -1:
        goto switchD_00015872_caseD_fffffffc;
      default:
        goto switchD_00015872_caseD_5;
      }
    }
    if (iVar3 == DAT_00015934) {
      if ((((uVar4 != 0x100) && (uVar4 != 0x200)) && (uVar4 != 0x300)) &&
         (((uVar4 != 0x400 && (uVar4 != 0x600)) &&
          ((uVar4 != 0x800 && ((uVar4 != 0xc00 && (uVar4 != 0x1000))))))))
      goto switchD_00015872_caseD_5;
      iVar5 = FUN_0000b398(iVar1,uVar4,param_3,param_4);
    }
    else {
      if (iVar3 <= DAT_00015934) {
        if (iVar3 - DAT_00015934 == -0x100002a) goto switchD_00015872_caseD_fffffffc;
        if ((iVar3 - DAT_00015934 != -0x1000020) ||
           (((uVar4 != 0x80 && (uVar4 != 0xc0)) && (uVar4 != 0x100))))
        goto switchD_00015872_caseD_5;
        goto switchD_00015872_caseD_fffffffb;
      }
      if (iVar3 + DAT_00015938 == 0) {
        iVar5 = FUN_0000b118(iVar1,uVar4,uVar6,uVar2);
      }
      else {
        if (iVar3 + DAT_00015938 != 0xf) goto switchD_00015872_caseD_5;
        iVar5 = FUN_0000b250(iVar1,uVar4,uVar6);
      }
    }
  }
  if (iVar5 == 0) {
    *(uint *)(*(int *)(iVar1 + 4) + 0x6c) = *(uint *)(*(int *)(iVar1 + 4) + 0x6c) | 0x20000;
    return 0;
  }
  if (iVar5 == DAT_0001592c + 6) {
    return iVar5;
  }
switchD_00015872_caseD_5:
  FUN_0000b5b0(iVar5);
  return iVar5;
}



/* FUN_0001593c @ 0001593c */

void FUN_0001593c(undefined4 param_1,undefined4 *param_2)

{
  FUN_000043c8(*param_2,param_2[1]);
  return;
}



/* FUN_00015944 @ 00015944 */

int FUN_00015944(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar4 = DAT_00015b94;
  iVar2 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),0);
  iVar1 = DAT_00015b9c;
  uVar11 = *param_2;
  local_4c = param_2[1];
  iVar2 = *(int *)(iVar2 + 4);
  if (-1 < *(int *)(iVar2 + 0x6c) << 0xe) goto LAB_00015b60;
  iVar5 = *(int *)(param_1 + 0x3c) * 4;
  if (*(int *)(param_1 + 0x40) == 2) {
    if (-1 < iVar5) goto LAB_00015b60;
  }
  else if (iVar5 < 0) goto LAB_00015b60;
  iVar5 = *(int *)(param_1 + 0x3c);
  if ((-1 < iVar5 << 3) && ((*(uint *)(iVar2 + 100) & 1) == 0)) goto LAB_00015b60;
  iVar6 = *(int *)(iVar2 + 0x58);
  iVar10 = DAT_00015b94 + 8;
  if (iVar6 == DAT_00015b98) {
LAB_000159e0:
    if (iVar5 != -0x40000000) {
      return iVar10;
    }
    uVar12 = 0;
    uVar8 = *(uint *)(iVar2 + 4);
    local_34 = iVar2 + 0x70;
  }
  else {
    if (iVar6 <= DAT_00015b98) {
      if (6 < (iVar6 - DAT_00015b98) + 0x10U) goto LAB_00015b60;
      goto LAB_000159e0;
    }
    iVar9 = DAT_00015b98 + 0x21;
    iVar7 = iVar6 - iVar9;
    if (iVar6 == iVar9) {
LAB_00015b14:
      local_34 = iVar2 + 0x70;
      if (iVar5 == DAT_00015bc4) {
        uVar8 = 0x80;
        uVar12 = 1;
      }
      else if (iVar5 == DAT_00015bc4 || iVar5 < DAT_00015bc4) {
        iVar4 = (iVar5 - DAT_00015bc4) + DAT_00015bc8;
        if (iVar4 == 0) {
          uVar8 = 0x80;
          uVar12 = 1;
          local_34 = iVar2 + 0x204;
        }
        else {
          if (iVar4 + DAT_00015ba0 != 0) {
            return iVar10;
          }
          uVar8 = 0x80;
          uVar12 = 1;
          local_34 = iVar2 + 0x184;
        }
      }
      else if (iVar5 + DAT_00015bcc == 0) {
        uVar8 = 0x14;
        uVar12 = 1;
        local_34 = iVar2 + 0xf0;
      }
      else {
        if (iVar5 + DAT_00015bcc != 0x100) {
          return iVar10;
        }
        uVar8 = 0x80;
        uVar12 = 1;
        local_34 = iVar2 + 0x104;
      }
    }
    else {
      if (iVar9 < iVar6) {
        iVar6 = iVar6 + DAT_00015ba4;
        if (iVar6 != 0) {
          if (iVar6 == 1) goto LAB_00015b14;
          if (iVar6 != 2) goto LAB_00015b60;
          local_34 = iVar2 + 0x70;
          if (iVar5 == DAT_00015bb4) {
            iVar4 = DAT_00015b94 + 10;
            goto LAB_00015b60;
          }
          if (DAT_00015bb4 < iVar5) {
            if (iVar5 + DAT_00015bbc != 0) {
              if (iVar5 + DAT_00015bbc + DAT_00015bc0 != 0) {
                return iVar10;
              }
              *(int *)(param_1 + 0x44) = *(int *)(iVar2 + 0x478) << 3;
              iVar4 = 0;
              goto LAB_00015b8a;
            }
            uVar12 = 1;
            uVar8 = *(uint *)(iVar2 + 0x470);
          }
          else {
            iVar4 = (iVar5 - DAT_00015bb4) + DAT_00015bb8;
            if (iVar4 == 0) {
              uVar12 = 1;
              uVar8 = *(uint *)(iVar2 + 0x478);
              local_34 = iVar2 + 0x270;
            }
            else {
              iVar4 = iVar4 + DAT_00015ba0;
              if (iVar4 == 0) {
                uVar12 = 1;
                uVar8 = *(uint *)(iVar2 + 0x474);
                local_34 = iVar2 + 0x370;
              }
              else {
                if (iVar4 != 0xf00) {
                  return iVar10;
                }
                uVar12 = 1;
                uVar8 = *(uint *)(iVar2 + 0x474);
                local_34 = iVar2 + 0x170;
              }
            }
          }
          goto LAB_00015b4c;
        }
      }
      else {
        if ((iVar7 == -0x20) || (iVar7 == -0x1e)) goto LAB_000159e0;
        if (iVar7 != -1) goto LAB_00015b60;
      }
      piVar3 = (int *)(iVar2 + 0x70);
      iVar4 = FUN_0000b694(piVar3,&local_48);
      if (iVar4 != 0) {
        return iVar1;
      }
      iVar5 = *(int *)(param_1 + 0x3c);
      iVar4 = iVar5 - DAT_00015ba8;
      if (iVar5 == DAT_00015ba8) {
        if (*piVar3 == 0) {
          return iVar10;
        }
        uVar12 = 1;
        uVar8 = *(uint *)(iVar2 + 0x74) >> 4;
        local_34 = local_30;
      }
      else if (iVar5 == DAT_00015ba8 || iVar5 < DAT_00015ba8) {
        if (iVar4 == -0x400) {
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x74) >> 3;
          local_34 = local_40;
        }
        else if (iVar4 == -0x300) {
          if (*piVar3 == 0) {
            return iVar10;
          }
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x74) >> 4;
          local_34 = local_3c;
        }
        else if (iVar4 == -0x200) {
          if (*piVar3 == 0) {
            return iVar10;
          }
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x74) >> 4;
          local_34 = local_38;
        }
        else {
          if (iVar4 != -0x100) {
            return iVar10;
          }
          if (*piVar3 == 0) {
            return iVar10;
          }
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x74) >> 4;
        }
      }
      else if (iVar5 + DAT_00015bac == 0) {
        if (*piVar3 == 0) {
          return iVar10;
        }
        uVar12 = 1;
        uVar8 = *(uint *)(iVar2 + 0x74) >> 4;
        local_34 = local_2c;
      }
      else {
        iVar4 = iVar5 + DAT_00015bac + DAT_00015bb0;
        if (iVar4 == 0) {
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x74) >> 3;
          local_34 = local_44;
        }
        else {
          if (iVar4 != 0x100) {
            return iVar10;
          }
          uVar12 = 1;
          uVar8 = *(uint *)(iVar2 + 0x7c);
          local_34 = local_48;
        }
      }
    }
  }
LAB_00015b4c:
  iVar4 = FUN_000052e4(uVar11,&local_4c,local_34,uVar8,uVar12);
  if (iVar4 == 0) {
LAB_00015b8a:
    param_2[1] = local_4c;
    return iVar4;
  }
  if (iVar4 == iVar10) {
    return iVar4;
  }
  if (iVar4 == iVar1) {
    return iVar4;
  }
LAB_00015b60:
  FUN_0000b5b0(iVar4);
  return iVar4;
}



/* FUN_00015bd0 @ 00015bd0 */

undefined4 FUN_00015bd0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int local_18;
  
  uVar1 = DAT_00015c18;
  puVar3 = (undefined4 *)*param_2;
  uVar4 = param_2[1];
  local_18 = param_4;
  iVar2 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),&local_18);
  if (0x1b < uVar4) {
    *puVar3 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x58);
    puVar3[1] = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x5c);
    puVar3[2] = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x60);
    puVar3[3] = *(undefined4 *)(*(int *)(iVar2 + 4) + 100);
    puVar3[4] = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x68);
    puVar3[6] = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x6c);
    puVar3[5] = *(undefined4 *)(local_18 + 8);
  }
  FUN_0000b5b0(uVar1);
  return uVar1;
}



/* FUN_00015c1c @ 00015c1c */

/* WARNING: Removing unreachable block (ram,0x000016c8) */
/* WARNING: Removing unreachable block (ram,0x000016c0) */
/* WARNING: Removing unreachable block (ram,0x000016b0) */
/* WARNING: Removing unreachable block (ram,0x00001698) */
/* WARNING: Removing unreachable block (ram,0x000016a0) */
/* WARNING: Removing unreachable block (ram,0x000016bc) */
/* WARNING: Removing unreachable block (ram,0x000016c4) */
/* WARNING: Removing unreachable block (ram,0x000016cc) */
/* WARNING: Removing unreachable block (ram,0x000016d0) */

undefined8 FUN_00015c1c(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  
  puVar5 = (undefined4 *)*param_2;
  iVar4 = param_2[1];
  puVar1 = (undefined4 *)FUN_0000890c(*(undefined4 *)(param_1 + 0x38),param_3);
  if (iVar4 != 0x20) {
    return CONCAT44(puVar1,puVar1);
  }
  uVar2 = 0;
  do {
    uVar3 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar9 = puVar1 + 4;
    bVar8 = 0x1f < uVar2;
    uVar2 = uVar2 - 0x20;
    *puVar5 = *puVar1;
    puVar5[1] = uVar3;
    puVar5[2] = uVar6;
    puVar5[3] = uVar7;
    uVar3 = puVar1[5];
    uVar6 = puVar1[6];
    uVar7 = puVar1[7];
    puVar1 = puVar1 + 8;
    puVar5[4] = *puVar9;
    puVar5[5] = uVar3;
    puVar5[6] = uVar6;
    puVar5[7] = uVar7;
    puVar5 = puVar5 + 8;
  } while (bVar8);
  return CONCAT44(puVar1,puVar5);
}



/* FUN_00015c40 @ 00015c40 */

int FUN_00015c40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_98 [132];
  
  iVar1 = DAT_00015c94;
  uVar3 = param_2[3];
  iVar2 = FUN_000089c8(param_3,0,*(undefined4 *)(param_1 + 0x38),*param_2,param_2[1],local_98);
  if (iVar2 == 0) {
    iVar2 = DAT_00015c94 + -3;
    if (local_98[0] == '\x03') {
      if (uVar3 < 10) {
        return DAT_00015c98;
      }
      param_2[3] = 10;
    }
  }
  else {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    if (iVar2 == DAT_00015c98) {
      return iVar2;
    }
  }
  FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00015c9c @ 00015c9c */

int FUN_00015c9c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char local_98 [4];
  char local_94;
  
  iVar1 = DAT_00015cf0;
  iVar2 = FUN_000089c8(param_3,0,*(undefined4 *)(param_1 + 0x38),*param_2,param_2[1],local_98);
  if (iVar2 == 0) {
    if (local_98[0] == '\x02') {
      if (local_94 != '\0') {
        local_94 = '\x01';
      }
      *(char *)(param_1 + 0x3c) = local_94;
      return 0;
    }
    iVar2 = DAT_00015cf0 + -3;
  }
  else {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    if (iVar2 == DAT_00015cf0 + 8) {
      return iVar2;
    }
  }
  FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00015cf4 @ 00015cf4 */

int FUN_00015cf4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_a0 [4];
  undefined auStack_9c [132];
  
  iVar1 = DAT_00015d58;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar2 = FUN_000089c8(param_3,0,*(undefined4 *)(param_1 + 0x38),*param_2,param_2[1],local_a0);
  if (iVar2 == 0) {
    if (local_a0[0] == '\x05') {
      if (uVar4 < 0x14) {
        return DAT_00015d5c;
      }
      FUN_000015e4(uVar3,auStack_9c,0x14);
      return 0;
    }
    iVar2 = DAT_00015d58 + -3;
  }
  else {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    if (iVar2 == DAT_00015d5c) {
      return iVar2;
    }
  }
  FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00015d60 @ 00015d60 */

int FUN_00015d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,char *param_6,uint *param_7)

{
  undefined uVar1;
  undefined uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  byte local_a0;
  byte local_9f;
  undefined4 local_9c;
  uint local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined local_90;
  undefined local_8f;
  undefined local_8e;
  undefined local_8d;
  undefined local_8c;
  undefined local_8b;
  undefined local_8a;
  
  iVar4 = FUN_000089c8(param_1,param_3,param_2,param_4,param_5,&local_a0);
  if (iVar4 != 0) {
    if (iVar4 == DAT_00015eb0 + -8) {
      return iVar4;
    }
    if (iVar4 == DAT_00015eb0) {
      return iVar4;
    }
switchD_00015dac_caseD_6:
    FUN_0000b5b0(iVar4);
    return iVar4;
  }
  iVar4 = DAT_00015eb0 + -10;
  switch(local_a0) {
  case 0:
  case 3:
    uVar7 = (uint)local_9f;
    break;
  case 1:
    uVar7 = 0xb;
    break;
  case 2:
    uVar7 = 6;
    break;
  case 4:
    uVar7 = 0x25;
    break;
  case 5:
    uVar7 = 0x30;
    break;
  default:
    goto switchD_00015dac_caseD_6;
  }
  if (*param_7 < uVar7) {
    return DAT_00015eb0;
  }
  switch(local_a0) {
  case 0:
  case 3:
    FUN_000015e4(param_6,&local_9c,local_9f);
    break;
  case 1:
    FUN_0000133c(param_6,s_0x_08x_00015ec4,local_9c);
    break;
  case 2:
    if ((char)local_9c == '\0') {
      *(undefined4 *)param_6 = s_false_00015ebc._0_4_;
      *(undefined2 *)(param_6 + 4) = s_false_00015ebc._4_2_;
    }
    else {
      *(undefined4 *)param_6 = DAT_00015eb4;
      param_6[4] = '\0';
    }
    break;
  case 4:
    uVar3 = local_94 & 0xff;
    uVar5 = local_98 >> 0x10;
    pcVar6 = s__08x__04x__04x__02x_02x_02x_02x__00015ecc;
    local_98 = local_98 & 0xffff;
    uVar1 = (undefined)local_92;
    uVar2 = local_92._1_1_;
    local_8c = local_8f;
    local_8b = local_8e;
    local_8a = local_8d;
    goto LAB_00015e96;
  case 5:
    uVar5 = (uint)local_94;
    pcVar6 = s_0x_08x__08x__04x__04x__02x_02x_0_00015efc;
    local_94._1_1_ = local_90;
    uVar1 = local_8f;
    uVar2 = local_8e;
    local_90 = local_8d;
    uVar3 = local_92;
LAB_00015e96:
    FUN_0000133c(param_6,pcVar6,local_9c,local_98,uVar5,uVar3,local_94._1_1_,uVar1,uVar2,local_90,
                 local_8c,local_8b,local_8a);
    break;
  default:
    goto switchD_00015dac_caseD_6;
  }
  *param_7 = uVar7;
  return 0;
}



/* FUN_00015f34 @ 00015f34 */

int FUN_00015f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  char local_98 [4];
  undefined4 local_94;
  
  iVar1 = DAT_00015f80;
  iVar2 = FUN_000089c8(param_1,param_3,param_2,param_4,param_5,local_98);
  if (iVar2 == 0) {
    if (local_98[0] == '\x01') {
      *param_6 = local_94;
      return 0;
    }
    iVar2 = DAT_00015f80 + -3;
  }
  else {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    if (iVar2 == DAT_00015f80 + 8) {
      return iVar2;
    }
  }
  FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00015f84 @ 00015f84 */

int FUN_00015f84(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_a0 [4];
  undefined auStack_9c [132];
  
  iVar1 = DAT_00015fe8;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  iVar2 = FUN_000089c8(param_3,0,*(undefined4 *)(param_1 + 0x38),*param_2,param_2[1],local_a0);
  if (iVar2 == 0) {
    if (local_a0[0] == '\x04') {
      if (uVar4 < 0x10) {
        return DAT_00015fec;
      }
      FUN_000015e4(uVar3,auStack_9c,0x10);
      return 0;
    }
    iVar2 = DAT_00015fe8 + -3;
  }
  else {
    if (iVar2 == iVar1) {
      return iVar2;
    }
    if (iVar2 == DAT_00015fec) {
      return iVar2;
    }
  }
  FUN_0000b5b0(iVar2);
  return iVar2;
}



/* FUN_00015ff0 @ 00015ff0 */

void FUN_00015ff0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00008df4();
  uVar2 = FUN_0000100c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  iVar1 = FUN_0000100c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  *param_1 = iVar1;
  param_1[1] = (int)uVar2 + iVar1 * -1000;
  return;
}



/* FUN_0001601c @ 0001601c */

int FUN_0001601c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_10 [4];
  undefined auStack_c [4];
  
  local_10[0] = 0xff;
  iVar1 = DAT_00016068;
  if ((*DAT_00016064 != '\0') &&
     (iVar1 = FUN_00008c94(*param_1,auStack_c,local_10,param_2), iVar1 == 0)) {
    iVar1 = FUN_00011aa8(local_10[0],3,param_1[2],param_1[1],auStack_c,param_1[3],param_1 + 4,
                         param_1 + 0xc);
  }
  return iVar1;
}



/* FUN_0001606c @ 0001606c */

int FUN_0001606c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_3c [16];
  int local_2c;
  
  iVar4 = *DAT_00016150;
  local_4c = -1;
  local_48 = 0;
  local_44 = *param_2;
  uVar6 = param_2[1];
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  local_2c = iVar4;
  local_4c = FUN_00007b40(local_44,uVar6);
  if (local_4c == -1) {
    iVar1 = FUN_00008db4(auStack_3c,0x10,param_3);
    if (iVar1 != 0) {
      FUN_0000b5dc();
    }
    iVar2 = FUN_00008960(local_44,uVar6,auStack_3c);
    iVar1 = DAT_00016154;
    if (((iVar2 != -1) && (iVar1 = FUN_00013ce4(iVar2,&local_40), iVar1 == 0)) &&
       (iVar1 = FUN_00005594(local_44,uVar6,&local_4c,uVar5,param_3), iVar1 == 0)) {
      iVar3 = DAT_00016158 + local_4c * 8;
      iVar1 = FUN_00006b14(local_40,0,param_3);
      if (iVar1 == 0) {
        iVar1 = DAT_00016154 + 4;
      }
      else {
        *(int *)(iVar3 + 4) = iVar1;
        iVar1 = FUN_00013c5c(iVar2,iVar1,local_40);
        if (iVar1 == 0) goto LAB_00016112;
      }
    }
  }
  else {
LAB_00016112:
    iVar1 = FUN_0000b474(local_4c,uVar5,&local_48,param_3);
    if (iVar1 == 0) goto LAB_00016138;
  }
  FUN_0000fa8c(local_4c,param_3);
  FUN_000050f0(local_48,param_3);
  local_48 = 0;
LAB_00016138:
  *(undefined4 *)(param_1 + 0x40) = local_48;
  if (local_2c != iVar4) {
    FUN_00001a20();
  }
  return iVar1;
}



/* FUN_0001615c @ 0001615c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001615c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined local_18;
  
  local_1c = 0xffffffff;
  local_20 = 0;
  local_18 = 0xff;
  if (*DAT_000161dc == '\0') {
    iVar1 = DAT_000161e0 + 1;
  }
  else {
    software_interrupt(0x9b);
    iVar1 = DAT_000161e0;
    if (((param_1 == 0) && (iVar1 = FUN_00001c5c(&local_1c,0xff,param_2), iVar1 == 0)) &&
       (iVar1 = FUN_00011aa8(local_18,1,0,_DataAbort,&local_20,_NotUsed,0x18,0x3c), iVar1 == 0)) {
      FUN_0001225c(local_1c,local_20,param_2);
      uRam00000038 = local_1c;
      return 0;
                    /* WARNING: Read-only address (ram,0x00000038) is written */
    }
  }
  FUN_00007d84(local_1c,param_2);
                    /* WARNING: Read-only address (ram,0x00000038) is written */
  return iVar1;
}



/* FUN_000161e4 @ 000161e4 */

int FUN_000161e4(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_000162cc;
  iVar1 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),0);
  uVar4 = *param_2;
  uVar2 = FUN_000019e8(param_2[1],0xc);
  if ((*(uint *)(*(int *)(iVar1 + 4) + 0x6c) & 0x30000) != 0) goto LAB_0001628e;
  uVar3 = *(uint *)(*(int *)(iVar1 + 4) + 0x58);
  if (uVar3 == DAT_000162d0) {
switchD_00016222_caseD_ffffffed:
    iVar5 = FUN_000121f0(iVar1,uVar4,uVar2,param_4);
  }
  else {
    if ((int)uVar3 <= (int)DAT_000162d0) {
      switch(uVar3 - DAT_000162d0) {
      case 0xffffffed:
      case 0xffffffee:
      case 0xffffffef:
      case 0xfffffff0:
      case 0xfffffff1:
      case 0xfffffff2:
      case 0xfffffff3:
      case 0xfffffffd:
      case 0xfffffffe:
        goto switchD_00016222_caseD_ffffffed;
      default:
switchD_00016222_caseD_fffffff4:
        iVar5 = DAT_000162cc + 10;
        goto LAB_0001628e;
      }
    }
    if (uVar3 == DAT_000162d4) {
LAB_00016278:
      iVar5 = FUN_0001202c(iVar1,uVar4,uVar2,param_4);
    }
    else if (uVar3 == DAT_000162d4 || (int)uVar3 < (int)DAT_000162d4) {
      if (uVar3 - DAT_000162d4 == -0x1000000) goto LAB_00016278;
      iVar5 = (uVar3 - DAT_000162d4) + 0xffffff;
      if (iVar5 == 0) goto LAB_000162a6;
LAB_0001625e:
      if ((iVar5 != 0x10) && (iVar5 != 0x11)) goto switchD_00016222_caseD_fffffff4;
      iVar5 = FUN_00011d3c(iVar1,uVar4,uVar2,param_4);
    }
    else {
      iVar5 = uVar3 + ~DAT_000162d4;
      if (iVar5 == 0) {
LAB_000162a6:
        iVar5 = FUN_00011c38(iVar1,uVar4,uVar2,param_4);
      }
      else {
        if (iVar5 != 1) goto LAB_0001625e;
        iVar5 = FUN_00011b38(iVar1,uVar4,uVar2,param_4);
      }
    }
  }
  if (iVar5 == 0) {
    *(uint *)(*(int *)(iVar1 + 4) + 0x6c) = *(uint *)(*(int *)(iVar1 + 4) + 0x6c) | 0x20000;
    return 0;
  }
  if (iVar5 == DAT_000162cc + 6) {
    return iVar5;
  }
LAB_0001628e:
  FUN_0000b5b0(iVar5);
  return iVar5;
}



/* FUN_000162d8 @ 000162d8 */

undefined4 FUN_000162d8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_18;
  
  uVar6 = *param_2;
  uVar5 = param_2[1];
  local_18 = param_4;
  iVar1 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),&local_18);
  uVar4 = DAT_0001633c;
  iVar1 = *(int *)(iVar1 + 4);
  if ((*(int *)(iVar1 + 0x6c) << 0xf < 0) && ((*(uint *)(local_18 + 4) & 0x11) != 0)) {
    uVar2 = *(uint *)(local_18 + 8);
    if (uVar2 < *(uint *)(iVar1 + 0x68)) {
      uVar3 = *(uint *)(iVar1 + 0x68) - uVar2;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_000015e4(uVar6,uVar2 + *(int *)(iVar1 + 4) + iVar1 + 0x70,uVar3);
      *(uint *)(local_18 + 8) = *(int *)(local_18 + 8) + uVar3;
      *(uint *)(param_1 + 0x3c) = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    uVar4 = 0;
  }
  else {
    FUN_0000b5dc(DAT_0001633c);
  }
  return uVar4;
}



/* FUN_00016340 @ 00016340 */

void FUN_00016340(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_000088b8(*param_1,0,param_2);
    iVar2 = *(int *)(iVar1 + 4);
    if (*(int *)(iVar2 + 0x6c) << 0xe < 0) {
      FUN_00001728(iVar2 + 0x70,*(undefined4 *)(iVar2 + 4));
      *(undefined4 *)(*(int *)(iVar1 + 4) + 4) = 0;
    }
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
  }
  return;
}



/* FUN_00016378 @ 00016378 */

undefined4 FUN_00016378(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0001639c;
  iVar2 = FUN_000088b8(*param_1,0,param_2);
  *(uint *)(*(int *)(iVar2 + 4) + 100) = *(uint *)(*(int *)(iVar2 + 4) + 100) & param_1[1];
  FUN_0000b5b0(uVar1);
  return uVar1;
}



/* FUN_000163a0 @ 000163a0 */

undefined4 FUN_000163a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_18;
  
  uVar1 = DAT_00016408;
  uVar5 = *(uint *)(param_1 + 0x44);
  iVar6 = *(int *)(param_1 + 0x48);
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  local_18 = param_4;
  iVar2 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),&local_18);
  uVar3 = *(uint *)(*(int *)(iVar2 + 4) + 0x68);
  uVar4 = *(uint *)(local_18 + 8);
  if (-1 < *(int *)(param_1 + 0x44)) {
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        uVar5 = uVar5 + uVar4;
      }
      else {
        if (iVar6 != 2) {
          return uVar1;
        }
        uVar5 = uVar5 + uVar3;
      }
    }
    if (0x2000 < uVar5) {
      return DAT_0001640c;
    }
    goto LAB_00016400;
  }
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      if (uVar5 < uVar4) {
        uVar5 = uVar4 - uVar5;
        goto LAB_00016400;
      }
    }
    else {
      if (iVar6 != 2) {
        return uVar1;
      }
      if (uVar5 < uVar3) {
        uVar5 = uVar3 - uVar5;
        goto LAB_00016400;
      }
    }
  }
  uVar5 = 0;
LAB_00016400:
  *(uint *)(local_18 + 8) = uVar5;
  return 0;
}



/* FUN_00016410 @ 00016410 */

int FUN_00016410(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  
  uVar4 = *(uint *)(param_1 + 0x40);
  iVar3 = DAT_0001646c;
  if ((uVar4 < 0x2001) &&
     (((local_20 = param_4, iVar2 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),&local_20),
       iVar1 = DAT_00016470, iVar3 = DAT_00016470, -1 < *(int *)(*(int *)(iVar2 + 4) + 0x6c) << 0xf
       || ((*(uint *)(local_20 + 4) & 0x22) == 0)) ||
      (((iVar3 = FUN_0000f934(iVar2,uVar4,param_3), iVar3 != 0 ||
        (iVar3 = FUN_000114c8(*(undefined4 *)(iVar2 + 4)), iVar3 != 0)) && (iVar3 == iVar1)))))) {
    FUN_0000b5dc(iVar3);
  }
  return iVar3;
}



/* FUN_00016474 @ 00016474 */

undefined4 FUN_00016474(void)

{
  software_interrupt(0x56);
  return 0;
}



/* FUN_0001647e @ 0001647e */

void FUN_0001647e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00008df4();
  do {
    iVar2 = FUN_00008df4();
  } while ((uint)(iVar2 - iVar1) < param_1 + 1U);
  return;
}



/* FUN_00016498 @ 00016498 */

int FUN_00016498(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_20;
  
  uVar6 = *param_2;
  uVar5 = param_2[1];
  local_20 = param_4;
  iVar2 = FUN_000088b8(*(undefined4 *)(param_1 + 0x38),&local_20);
  iVar1 = DAT_00016524;
  iVar3 = DAT_00016524;
  if ((*(int *)(*(int *)(iVar2 + 4) + 0x6c) << 0xf < 0) && ((*(uint *)(local_20 + 4) & 0x22) != 0))
  {
    uVar4 = *(uint *)(local_20 + 8) + uVar5;
    if (CARRY4(*(uint *)(local_20 + 8),uVar5) != false) {
      return DAT_00016528;
    }
    if (0x2000 < uVar4) {
      return DAT_00016528 + 0x32;
    }
    if ((uVar4 <= *(uint *)(*(int *)(iVar2 + 4) + 0x68)) ||
       (iVar3 = FUN_0000f934(iVar2,uVar4,param_3), iVar3 == 0)) {
      FUN_000015e4(*(int *)(*(int *)(iVar2 + 4) + 4) + *(int *)(iVar2 + 4) + 0x70 +
                   *(int *)(local_20 + 8),uVar6,uVar5);
      *(uint *)(local_20 + 8) = *(int *)(local_20 + 8) + uVar5;
      iVar3 = FUN_000114c8(*(undefined4 *)(iVar2 + 4));
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar3 != iVar1) {
      return iVar3;
    }
  }
  FUN_0000b5dc(iVar3);
  return iVar3;
}



/* FUN_0001652c @ 0001652c */

int FUN_0001652c(int param_1,undefined *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_30;
  int local_2c;
  
  iVar2 = *DAT_00016610;
  local_30 = 0;
  local_2c = iVar2;
  if ((param_2 != (undefined *)0x0) && (param_3 != 0)) {
    local_30 = CONCAT13(param_2[1],
                        CONCAT12(*param_2,CONCAT11((char)param_3,(char)((uint)param_3 >> 8))));
    FUN_000137f0();
    iVar1 = DAT_00016614;
    while (iVar3 = FUN_000113b4(&local_30,0), iVar3 == 0) {
      uVar6 = FUN_00008ccc();
      if (20000 < uVar6) goto LAB_000165ee;
      software_interrupt(0x56);
    }
    uVar6 = 2;
    FUN_000137f0();
LAB_00016596:
    iVar3 = FUN_000113b4(param_2 + uVar6,0);
    if (iVar3 == 0) {
      uVar5 = FUN_00008ccc();
      if (20000 < uVar5) goto LAB_000165ee;
    }
    else {
      uVar6 = uVar6 + 4 & 0xffff;
      if (param_3 - uVar6 < 5) {
        local_30 = 0;
        for (uVar5 = 0; uVar5 < param_3 - uVar6; uVar5 = uVar5 + 1) {
          *(undefined *)((int)&local_30 + uVar5) = param_2[uVar6 + uVar5];
        }
        FUN_000137f0();
        while( true ) {
          iVar4 = FUN_000113b4(&local_30,1);
          iVar3 = 0;
          if (iVar4 != 0) goto LAB_000165f4;
          uVar6 = FUN_00008ccc();
          if (20000 < uVar6) break;
          software_interrupt(0x56);
        }
LAB_000165ee:
        *(undefined4 *)(param_1 + 0xc) = 0x4000000;
        iVar3 = iVar1;
        goto LAB_000165f4;
      }
      FUN_000137f0();
    }
    software_interrupt(0x56);
    goto LAB_00016596;
  }
  iVar3 = DAT_00016614 + 6;
LAB_000165f4:
  if (local_2c != iVar2) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_00016618 @ 00016618 */

undefined4 FUN_00016618(void)

{
  return DAT_0001661c;
}



/* FUN_00016620 @ 00016620 */

int FUN_00016620(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint local_20;
  int local_1c;
  
  iVar5 = DAT_000166d0;
  uVar6 = 0;
  iVar2 = param_1;
  local_20 = param_3;
  local_1c = param_4;
  while( true ) {
    FUN_00001b80(iVar2);
    iVar1 = FUN_0000e280(&local_1c);
    iVar2 = DAT_000166d4;
    if (local_1c == 0 && iVar1 == 0) break;
    FUN_0000fa68();
    iVar2 = 10;
    software_interrupt(0x56);
    uVar6 = uVar6 + 1;
    if (99 < uVar6) {
      return iVar5;
    }
  }
  FUN_0000f8f8(*(undefined4 *)(DAT_000166d4 + 0x20),*(undefined4 *)(DAT_000166d4 + 0x24),&local_20,
               *(undefined4 *)(DAT_000166d4 + 0x1c));
  local_20 = *(uint *)(DAT_000166d8 + 0x14) | *(uint *)(DAT_000166d8 + 0x10) & local_20;
  FUN_0001730c(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),&local_20,
               *(undefined4 *)(iVar2 + 0x1c));
  FUN_0000fa68();
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar6 = 0;
  while( true ) {
    software_interrupt(0x56);
    piVar4 = *(int **)(iVar2 + 0x18);
    if ((*piVar4 == 0) && (piVar4[1] < 0)) break;
    uVar6 = uVar6 + 1;
    if (4999 < uVar6) {
      return DAT_000166d0 + -2;
    }
  }
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (piVar4[3] != 0) {
    return 0;
  }
  uVar6 = piVar4[1];
  uVar3 = FUN_00003738(piVar4[2],piVar4 + 2);
  if (uVar3 != (uVar6 & 0xff)) {
    iVar5 = DAT_000166d0 + -1;
  }
  *(uint *)(*(int *)(iVar2 + 0x18) + 4) = *(uint *)(*(int *)(iVar2 + 0x18) + 4) & 0xfffffe00;
  return iVar5;
}



/* FUN_000166dc @ 000166dc */

int FUN_000166dc(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_28;
  
  iVar1 = DAT_000167a0;
  uVar8 = 0;
  piVar6 = *(int **)(DAT_000167a0 + 0x18);
  iVar4 = DAT_000167a4;
  if ((piVar6[1] < 0) && (*piVar6 == 0)) {
    if (*(uint *)(DAT_000167a0 + 0x14) < (uint)piVar6[2]) {
      iVar4 = DAT_000167a4 + 1;
    }
    else if (param_1 - 0x81U < 9) {
      uVar7 = piVar6[1];
      local_28 = param_4;
      if (param_2 == 0) {
        uVar7 = uVar7 & 0x7ffffe00;
      }
      else {
        uVar3 = FUN_00003738(piVar6[2],piVar6 + 2);
        uVar7 = uVar3 | uVar7 & 0x7fffff00 | 0x100;
      }
      piVar6 = *(int **)(iVar1 + 0x18);
      *piVar6 = param_1;
      piVar6[1] = uVar7;
      iVar2 = DAT_000167a8;
      iVar9 = DAT_000167a4 + 3;
      iVar10 = DAT_000167a4 + 4;
      do {
        iVar4 = FUN_00016620(param_2);
        if (iVar4 == 0) {
          return 0;
        }
        if ((iVar4 == iVar9) || (iVar4 == iVar10)) {
          puVar5 = *(undefined4 **)(iVar1 + 0x18);
          *puVar5 = 0;
          puVar5[1] = 0x80000000;
          return iVar4;
        }
        FUN_00001b80();
        FUN_0000f8f8(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),&local_28,
                     *(undefined4 *)(iVar1 + 0x1c));
        local_28 = *(uint *)(iVar2 + 0x10) & local_28;
        FUN_0001730c(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),&local_28,
                     *(undefined4 *)(iVar1 + 0x1c));
        FUN_0000fa68();
        uVar8 = uVar8 + 1;
      } while (uVar8 < 10);
    }
    else {
      iVar4 = DAT_000167a4 + -3;
    }
  }
  return iVar4;
}



/* FUN_000167ac @ 000167ac */

undefined8 FUN_000167ac(undefined4 param_1,undefined4 param_2)

{
  software_interrupt(0x6a);
  software_interrupt(99);
  return CONCAT44(1,param_2);
}



/* FUN_000167bc @ 000167bc */

void FUN_000167bc(int param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    software_interrupt(0x8a);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    software_interrupt(0x6a);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    software_interrupt(0x6a);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(0x6a);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    software_interrupt(0x6a);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    software_interrupt(0x6a);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    software_interrupt(0x6a);
  }
  return;
}



/* FUN_00016a60 @ 00016a60 */

int FUN_00016a60(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *piStack_34;
  int iStack_30;
  int *local_2c;
  int *piStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  piVar1 = DAT_00016aec;
  piVar5 = param_1 + 8;
  iVar3 = DAT_00016af0;
  if (param_1 != (int *)0x0) {
    if (*DAT_00016aec == 0) {
      if (*DAT_00016af4 == '\x14') {
        piVar2 = DAT_00016aec + 0x10;
        piVar4 = DAT_00016aec + 0x18;
      }
      else {
        piVar2 = DAT_00016aec + 0x20;
        piVar4 = DAT_00016aec + 0x28;
      }
      iVar3 = FUN_0000606c(piVar2,piVar4,DAT_00016af8);
      if (iVar3 != 0) {
        return iVar3;
      }
      *piVar1 = 1;
    }
    iVar6 = *param_1;
    local_40 = DAT_00016af8;
    local_3c = 0;
    local_38 = 0x80;
    piStack_28 = param_1 + 4;
    local_24 = 1;
    uStack_20 = DAT_00016afc;
    piStack_34 = piVar5;
    iStack_30 = iVar6 + -0x20;
    local_2c = piVar5;
    iVar3 = FUN_0000c98c(&local_40,&local_2c);
    if ((iVar3 == 0) && (iVar6 = FUN_000036ec(piVar5,iVar6 + -0x20), param_1[2] != iVar6)) {
      iVar3 = DAT_00016af0 + -0xb;
    }
  }
  return iVar3;
}



/* FUN_00016b00 @ 00016b00 */

undefined4 FUN_00016b00(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = DAT_00016b38;
  if (((param_2 | param_1) & 0x1f) == 0) {
    local_20 = 0x80;
    local_28 = DAT_00016b3c;
    local_24 = 0;
    local_18 = 0x20;
    uStack_10 = 0;
    local_c = 1;
    local_8 = DAT_00016b40;
    uStack_1c = param_1;
    uStack_14 = param_2;
    uVar1 = FUN_0000c98c(&local_28,param_2,0,&local_c);
  }
  return uVar1;
}



/* FUN_00016b44 @ 00016b44 */

undefined4 FUN_00016b44(void)

{
  return 0;
}



/* FUN_00016b48 @ 00016b48 */

undefined4 FUN_00016b48(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_68;
  int local_64;
  undefined *local_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined auStack_48 [32];
  int local_28;
  
  local_50 = *DAT_00016c78;
  local_4c = 0;
  software_interrupt(0x66);
  local_54 = 0;
  iVar6 = 0;
  local_28 = local_50;
  iVar1 = FUN_0000527c(DAT_00016c80,0x8000,DAT_00016c7c);
  if ((iVar1 == 0) &&
     (puVar4 = (uint *)(DAT_00016c7c + 0x100), *(int *)(DAT_00016c7c + 0x10) == DAT_00016c84)) {
    if (*(char *)(DAT_00016c7c + 0x5a) == '\0') {
      if (*(char *)(DAT_00016c7c + 0x7c) == 'D') goto LAB_00016b94;
    }
    else if (*(short *)(DAT_00016c7c + 0x58) == 0x101c) {
LAB_00016b94:
      uVar7 = *(uint *)(DAT_00016c7c + 0x14) >> 3;
      if ((uVar7 != 0) && (*(uint *)(DAT_00016c7c + 0x14) == uVar7 * 8)) {
        software_interrupt(0x79);
        local_68 = DAT_00016c7c;
        local_64 = 0x8000;
        uStack_5c = 0x20;
        local_60 = auStack_48;
        local_58 = &local_4c;
        iVar1 = FUN_0000d3c0(&local_68,0,local_54);
        if (iVar1 == 0) {
          for (uVar5 = 0; uVar5 < uVar7; uVar5 = uVar5 + 1) {
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            if (uVar2 + uVar3 == 0) {
              iVar6 = iVar6 + 1;
            }
            else {
              if ((((iVar6 != 0) || (uVar2 == 0)) || (uVar3 == 0)) || (0x7fff < uVar3))
              goto LAB_00016c50;
              iVar1 = DAT_00016c7c + uVar3;
              if (*(char *)(iVar1 + 0x5a) == '\0') {
                if (*(char *)(iVar1 + 0x7c) != 'D') goto LAB_00016c50;
                uVar3 = (uint)*(byte *)(iVar1 + 0x7d);
              }
              else {
                uVar3 = (uint)*(ushort *)(iVar1 + 0x58);
                if (((uVar3 != 0x101d) && (uVar3 != 0x101e)) && (uVar3 != 0x1047))
                goto LAB_00016c50;
              }
              if (uVar2 != uVar3) goto LAB_00016c50;
              software_interrupt(0x79);
              local_64 = 0x8000 - puVar4[1];
              uStack_5c = 0x20;
              local_68 = iVar1;
              local_60 = auStack_48;
              local_58 = &local_4c;
              iVar1 = FUN_0000d3c0(&local_68,0,local_54);
              if (iVar1 != 0) goto LAB_00016c50;
            }
            puVar4 = puVar4 + 2;
          }
          *DAT_00016c88 = 1;
          goto LAB_00016c58;
        }
      }
    }
  }
LAB_00016c50:
  FUN_00011fb0(1);
LAB_00016c58:
  if (local_28 != local_50) {
    FUN_00001a20();
  }
  return 0;
}



/* FUN_00016c8c @ 00016c8c */

undefined4 FUN_00016c8c(void)

{
  return 0;
}



/* FUN_00016c90 @ 00016c90 */

int FUN_00016c90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = FUN_000113f4(param_2,param_3 + -0x100,param_2 + param_3 + -0x100);
    iVar1 = DAT_00016cc4;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x3000000;
      iVar3 = iVar1 + -6;
    }
    return iVar3;
  }
  return DAT_00016cc4;
}



/* FUN_00016cc8 @ 00016cc8 */

int FUN_00016cc8(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,
                undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2a4;
  undefined4 local_2a0;
  int iStack_29c;
  undefined *local_298;
  undefined4 local_294;
  int iStack_290;
  int local_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined auStack_27c [512];
  undefined auStack_7c [64];
  int local_3c;
  undefined4 local_34;
  int iStack_30;
  int *local_2c;
  undefined4 *local_28;
  
  iVar2 = *DAT_00016db4;
  if (*(int *)(param_2 + 0x3c) - 0x800U < 8) {
    iVar1 = 0x140;
    iVar5 = 0x240;
    uVar6 = 0x100;
  }
  else {
    iVar1 = 0x240;
    iVar5 = 0x440;
    uVar6 = 0x200;
  }
  local_3c = iVar2;
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar3 = FUN_0000a1f0(param_2 + 0x14,&uStack_280,&local_284,&uStack_288,&local_28c,0xffffffff);
  if ((iVar3 == 0) && (iVar3 = FUN_00008d20(param_2 + 0x14,param_7), iVar3 == 0)) {
    if (local_28c == 0x100) {
      uVar4 = 0x20;
      iStack_290 = DAT_00016db8;
    }
    else {
      iStack_290 = DAT_00016db8 + 1;
      uVar4 = 0x30;
    }
    local_2a4 = local_34;
    local_2a0 = 0;
    local_298 = auStack_7c;
    iStack_29c = iVar5;
    local_294 = uVar4;
    iVar3 = FUN_0000eb08(&local_2a4);
    if (iVar3 == 0) {
      FUN_000015e4(auStack_27c,param_2 + iVar5,local_28c);
      FUN_000036d0(auStack_27c,local_28c);
      iVar5 = FUN_00010804(auStack_7c,uVar4,uStack_288,local_28c,uStack_280,local_284,auStack_27c);
      iVar3 = DAT_00016dbc;
      if (iVar5 == 0) {
        *local_2c = param_2 + 0x40;
        *local_28 = uVar6;
        *param_5 = param_2 + iVar1;
        *param_6 = uVar6;
        iVar3 = 0;
      }
    }
  }
  if (local_3c != iVar2) {
    FUN_00001a20();
  }
  return iVar3;
}



/* FUN_00016dc0 @ 00016dc0 */

undefined4 FUN_00016dc0(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000088ac();
  if ((((int)uVar2 != -1) && (pcVar1 = (char *)(DAT_00016de4 + (int)uVar2 * 0x10), *pcVar1 != '\0'))
     && ((uint)(byte)pcVar1[1] == (uint)((ulonglong)uVar2 >> 0x20))) {
    return 0;
  }
  return DAT_00016de8;
}



/* FUN_00016dec @ 00016dec */

int FUN_00016dec(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (CARRY4(param_1,param_2) != false) {
    return DAT_00016e2c + -1;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00016e30 + 0x3c) <= uVar1) {
      return DAT_00016e2c;
    }
    iVar3 = DAT_00016e30 + uVar1 * 0x10;
    uVar2 = *(uint *)(iVar3 + 0x44);
    if ((*DAT_00016e34 == '\x01') ||
       ((uVar2 <= param_1 && (param_1 + param_2 <= uVar2 + *(int *)(iVar3 + 0x48))))) break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}



/* FUN_00016e38 @ 00016e38 */

int FUN_00016e38(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_10;
  
  local_10 = 0;
  iVar1 = FUN_00007c28(DAT_00016e68,param_1,param_3,&local_10);
  if (iVar1 == 0) {
    if (param_2 < local_10) {
      return DAT_00016e6c + -1;
    }
  }
  else if (iVar1 == DAT_00016e6c) {
    *(undefined4 *)(DAT_00016e70 + 4) = 2;
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_00016e74 @ 00016e74 */

int FUN_00016e74(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,int *param_7,int *param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c [3];
  undefined auStack_180 [20];
  int aiStack_16c [14];
  undefined4 local_134;
  undefined4 local_120 [4];
  int aiStack_110 [42];
  undefined auStack_68 [48];
  int local_38;
  int local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  local_194 = *DAT_00017064;
  local_1a0 = 0;
  local_190 = param_2;
  local_38 = local_194;
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar1 = FUN_00005360(auStack_180,0x100,param_5);
  if (iVar1 != 0) goto LAB_0001704e;
  software_interrupt(0x79);
  local_19c = DAT_00017068;
  software_interrupt(0x79);
  uVar2 = FUN_00008ad8(local_34);
  software_interrupt(0x5e);
  iVar1 = FUN_0000a1ac(auStack_180,&local_1ac,&local_1b8,&uStack_1bc,&local_1c0,&local_198,uVar2);
  bVar6 = iVar1 == 0;
  do {
    if (!bVar6) goto LAB_00017048;
    iVar1 = FUN_0000b5f4(auStack_180,param_3,param_6,local_1ac,local_34,&local_1a0,&local_1a4,
                         &local_1a8,local_18c,&local_1b0);
    bVar6 = iVar1 == 0;
  } while (!bVar6);
  *param_9 = local_120[local_1a0 * 0x40];
  local_1b4 = local_18c[0] + param_5;
  if (local_198 == 0x100) {
    uVar2 = 3;
LAB_00016f32:
    uVar7 = local_1a8;
    iVar1 = FUN_00006594();
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00006654(auStack_180 + local_1ac * 0x100,local_1b0,uVar2,1), iVar1 == 0)) {
      param_5 = local_1b0 + local_1ac * 0x100 + param_5;
      iVar5 = local_1b0;
      while (local_1a4 != 0) {
        uVar3 = local_1a4;
        if (0x8000 < local_1a4) {
          uVar3 = 0x8000;
        }
        uVar4 = local_1a8;
        if (uVar3 < local_1a8) {
          uVar4 = uVar3;
        }
        iVar5 = iVar5 + uVar3;
        iVar1 = FUN_00005324(DAT_00017068,uVar3,param_5);
        if (iVar1 != 0) goto LAB_00017048;
        if (local_1a4 < 0x8001) {
          iVar1 = FUN_00006458(local_19c,uVar3,iVar5,auStack_68,uVar2);
        }
        else {
          iVar1 = FUN_00006654(local_19c,uVar3,uVar2,0);
        }
        if (iVar1 != 0) goto LAB_00017048;
        if (uVar4 != 0) {
          iVar1 = FUN_00005398(param_2,uVar4,local_28,local_19c);
          if (iVar1 != 0) goto LAB_00017048;
          local_1a8 = local_1a8 - uVar4;
        }
        param_5 = param_5 + uVar3;
        local_1a4 = local_1a4 - uVar3;
        if (local_28 == 0) {
          param_2 = param_2 + uVar4;
        }
      }
      iVar1 = FUN_00009d60(local_1b4,local_1b8,uStack_1bc,local_1c0,local_198,auStack_68,uVar2);
      if (iVar1 == 0) {
        if ((local_1a8 == 0) ||
           (iVar1 = FUN_00005398(param_2,local_1a8,local_28,param_5), iVar1 == 0)) {
          *param_7 = aiStack_110[local_1a0 * 0x40] + aiStack_16c[local_1a0 * 0x40];
          iVar5 = DAT_00017074;
          *param_8 = aiStack_16c[local_1a0 * 0x40];
          *(undefined4 *)(iVar5 + local_34 * 4) = local_120[0];
          *(undefined4 *)(DAT_00017078 + local_34 * 4) = local_134;
          if (local_34 == 0xd) {
            *DAT_0001707c = uVar7;
          }
        }
      }
      else {
        FUN_000039e8(local_190,local_28,uVar7);
      }
    }
  }
  else {
    iVar1 = DAT_00017070;
    if (local_198 == 0x200) {
      uVar2 = 4;
      goto LAB_00016f32;
    }
  }
LAB_00017048:
  software_interrupt(0x5f);
LAB_0001704e:
  if (local_38 != local_194) {
    FUN_00001a20();
  }
  return iVar1;
}



/* FUN_00017080 @ 00017080 */

uint FUN_00017080(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0xff;
  uVar6 = *(undefined4 *)(DAT_00017194 + 0x66c);
  uVar5 = *(undefined4 *)(DAT_00017194 + 0x670);
  uVar2 = FUN_000069c4(uVar5,uVar6,0x40000,local_38,local_2c,0,1,0xffff,0,0xfffffff7);
  puVar1 = DAT_000171a0;
  if ((uVar2 == 0) && (uVar2 = DAT_0001719c, *(int *)(local_2c[0] + 0x10) == DAT_00017198)) {
    puVar4 = DAT_000171a0 + 2;
    DAT_000171a0[4] = uVar6;
    puVar1[5] = uVar5;
    iVar3 = FUN_00011e2c(uVar6,uVar5,puVar4);
    if (iVar3 != 0) {
      return 0;
    }
    software_interrupt(0x6d);
    uVar2 = (uint)local_38[0];
    if (local_38[0] == 0) {
      FUN_0001234c(puVar1[2],puVar1[3],0x40000,0);
      local_58 = puVar1[2];
      uStack_54 = puVar1[3];
      local_50 = 0x40000;
      local_4c = 0;
      uStack_48 = 0x33;
      uVar2 = FUN_0000e978(&local_58,1);
      if (uVar2 == 0) {
        *puVar1 = local_44;
        uVar2 = FUN_0000b9dc(0x33);
        if ((uVar2 == 0) &&
           (uVar2 = FUN_00016e74(0x33,local_34,0x40000,0,local_34,0x40000,&local_40,&local_3c,
                                 &local_30), uVar2 == 0)) {
          puVar1[1] = local_40;
          uVar2 = FUN_0000fbe8(0x33,0xffff);
          FUN_000083c0(local_30,0x33,0,0xffff,0xff,2,1);
        }
      }
    }
  }
  if (local_38[0] != 0xff) {
    software_interrupt(0x6c);
  }
  return uVar2;
}



/* FUN_000171a4 @ 000171a4 */

undefined8 FUN_000171a4(void)

{
  software_interrupt(0x7c);
  return 0x100000000;
}



/* FUN_000171b8 @ 000171b8 */

int FUN_000171b8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_0000a844(param_2);
  if (iVar1 == 0) {
    iVar7 = DAT_0001727c + param_2 * 0x60;
    uVar5 = -param_1[1] & 0xf;
    iVar1 = DAT_00017280;
    if (param_1[1] + uVar5 + 0x50 <= (uint)param_1[3]) {
      iVar4 = param_1[2];
      iVar6 = iVar4 + 0x50;
      FUN_00001728(iVar4,0x50);
      *(uint *)(iVar4 + 0x30) = param_1[1] + uVar5 + 0x50;
      *(undefined4 *)(iVar4 + 0x34) = param_1[1];
      *(uint *)(iVar4 + 0x38) = uVar5;
      if (uVar5 != 0) {
        FUN_000016e4(param_1[1] + iVar6,uVar5);
      }
      FUN_000015e4(iVar6,*param_1,param_1[1]);
      iVar2 = iVar4 + 0x20;
      iVar1 = FUN_000043c8(iVar2,0x10);
      if (iVar1 == 0) {
        iVar3 = *(int *)(iVar4 + 0x30);
        iVar1 = FUN_0000ca5c(param_2,iVar7,0x10,iVar2,0x10,DAT_00017284,iVar6,param_1[1] + uVar5,
                             iVar6,0);
        if (iVar1 == 0) {
          iVar1 = FUN_00009198(param_2,DAT_00017288,iVar7 + 0x10,0x20,iVar2,iVar3 + -0x20,iVar4,0x20
                              );
        }
      }
    }
  }
  return iVar1;
}



/* FUN_0001728c @ 0001728c */

int FUN_0001728c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_0000a844(param_5);
  if ((iVar1 == 0) && (iVar1 = DAT_000172d8, param_4 == 0x20)) {
    iVar1 = FUN_00009198(param_5,DAT_000172dc,DAT_000172d4 + param_5 * 0x60 + 0x10,0x20,param_1,
                         param_2,param_3,0x20);
  }
  return iVar1;
}



/* FUN_000172e0 @ 000172e0 */

undefined4 FUN_000172e0(void)

{
  return DAT_000172e4;
}



/* FUN_000172e8 @ 000172e8 */

void FUN_000172e8(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *DAT_00017308 + param_1 * 4;
  if (param_1 < 0x20) {
    *(undefined4 *)(iVar1 + 0x500) = param_2;
  }
  else if (param_1 - 0x20 < 0x48) {
    *(undefined4 *)(iVar1 + 0x900) = param_2;
    return;
  }
  return;
}



/* FUN_0001730c @ 0001730c */

undefined8 FUN_0001730c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (((param_4 != 4) && (param_4 != 2)) && (param_4 != 1)) {
    return CONCAT44(param_2,DAT_00017334);
  }
  software_interrupt(0x95);
  return CONCAT44(param_1,param_2);
}



/* FUN_00017338 @ 00017338 */

undefined8 FUN_00017338(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1 * 0x10;
  iVar1 = DAT_00017360;
  if ((uVar2 < 0x170) && (software_interrupt(0x7c), iVar1 = DAT_00017364, DAT_00017364 == 0)) {
    software_interrupt(0x7c);
    return CONCAT44(param_3,4);
  }
  return CONCAT44(uVar2,iVar1);
}



/* FUN_00017368 @ 00017368 */

int FUN_00017368(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = DAT_00017478;
  iVar9 = 0;
  bVar1 = false;
  if (param_5 == 2) {
    if (param_2 < 0x80000000) {
      return DAT_00017470;
    }
  }
  else {
    if (param_5 != 1) {
      return DAT_00017470;
    }
    if (0x7fffffff < param_2) {
      return DAT_00017470;
    }
  }
  if (0x2a000 < param_4) {
    return DAT_00017474;
  }
  software_interrupt(0x7d);
  if (DAT_00017478 == 0) {
    return 0;
  }
  piVar7 = (int *)(DAT_00017478 + DAT_0001747c);
  if (*piVar7 != DAT_00017480) {
    iVar8 = DAT_00017470 + -1;
    goto LAB_00017462;
  }
  uVar5 = piVar7[1];
  uVar6 = param_4;
  for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
    uVar6 = piVar7[uVar5 * -4 + uVar3 * 4];
    if (uVar6 == param_2) {
      iVar8 = DAT_00017484;
      if (piVar7[uVar5 * -4 + uVar3 * 4 + 2] != param_4) goto LAB_00017460;
      bVar1 = true;
      iVar9 = piVar7[uVar5 * -4 + uVar3 * 4 + 1] + DAT_00017478;
      break;
    }
  }
  uVar3 = param_4 + 0x1f & 0xffffffe0;
  if (bVar1) {
LAB_00017426:
    FUN_000015e4(iVar9,param_3,param_4,uVar6,param_1,param_2,param_3,param_4);
    iVar8 = 0;
    if (!bVar1) {
      puVar4 = (uint *)(iVar2 + piVar7[1] * -0x10 + DAT_0001747c + -0x10);
      *puVar4 = param_2;
      puVar4[1] = iVar9 - iVar2;
      puVar4[2] = param_4;
      puVar4[3] = uVar3;
      piVar7[1] = piVar7[1] + 1;
      piVar7[2] = puVar4[3] + piVar7[2] + 0x10;
    }
  }
  else {
    iVar8 = DAT_00017474;
    if (uVar3 + 0x10 + piVar7[2] < 0x2a001) {
      iVar9 = piVar7[2] + DAT_00017478 + uVar5 * -0x10 + -0x10;
      goto LAB_00017426;
    }
  }
LAB_00017460:
  if (iVar2 == 0) {
    return iVar8;
  }
LAB_00017462:
  software_interrupt(0x7e);
  return iVar8;
}



/* FUN_00017488 @ 00017488 */

int FUN_00017488(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  iVar2 = DAT_00017564;
  piVar4 = DAT_00017560;
  iVar1 = DAT_00017568;
  if (*DAT_0001755c != '\0') {
    piVar3 = DAT_00017560 + 0x10;
    piVar6 = DAT_00017560 + 0x1000;
    do {
      if (piVar3[3] != iVar2) {
        piVar7 = piVar3 + 8;
        if (piVar6 < (int *)((int)piVar7 + param_3)) {
          return DAT_00017570;
        }
        FUN_000015e4(piVar3 + 4,param_1,0x10);
        FUN_000015e4(piVar7,param_2,param_3);
        uVar5 = param_3 + 0xf & 0xfffffff0;
        if (uVar5 != param_3) {
          FUN_000016e4((int *)((int)piVar7 + param_3),uVar5 - param_3);
        }
        piVar3[3] = iVar2;
        *(undefined2 *)(piVar3 + 1) = 1;
        *(short *)((int)piVar3 + 10) = (short)param_3;
        *(short *)(piVar3 + 2) = (short)uVar5 + 0x20;
        iVar2 = FUN_000036ec(piVar7);
        *piVar3 = iVar2;
        if (*piVar4 == -1) {
          iVar2 = 0;
          *piVar4 = DAT_00017574;
          piVar4[1] = 0x4000;
          uVar5 = *(ushort *)(piVar3 + 2) + 0x40;
        }
        else {
          uVar5 = (uint)*(ushort *)(piVar3 + 2);
          iVar2 = (int)piVar3 - (int)piVar4;
          piVar4 = piVar3;
        }
        iVar2 = FUN_000135f4(4,0,iVar2,uVar5,piVar4,0);
        return iVar2;
      }
      iVar1 = FUN_00001550(piVar3 + 4,param_1,0x10);
      if (iVar1 == 0) {
        return DAT_0001756c;
      }
      piVar3 = (int *)((int)piVar3 + (uint)*(ushort *)(piVar3 + 2));
    } while (piVar3 <= piVar6);
    iVar1 = DAT_00017568 + -2;
  }
  return iVar1;
}



/* FUN_00017578 @ 00017578 */

undefined4 FUN_00017578(void)

{
  return DAT_0001757c;
}



/* FUN_000175cc @ 000175cc */

uint FUN_000175cc(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    uVar2 = uVar2 ^ param_1 >> *(sbyte *)(param_2 + uVar1);
  }
  return uVar2 & 1;
}



/* FUN_000175e8 @ 000175e8 */

undefined4 FUN_000175e8(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* FUN_000175f6 @ 000175f6 */

void FUN_000175f6(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar4 = FUN_00008df4();
    uVar3 = param_1 + 1;
    lVar5 = lVar4;
    do {
      lVar5 = FUN_00008df4((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
      uVar1 = (uint)(lVar5 - lVar4);
      uVar2 = (uint)((ulonglong)(lVar5 - lVar4) >> 0x20);
      lVar5 = CONCAT44(uVar2 - (uVar3 > uVar1),uVar1 - uVar3);
    } while (uVar2 == 0 && (uVar3 <= uVar1) <= uVar2);
  }
  return;
}



/* FUN_0001761a @ 0001761a */

void FUN_0001761a(uint param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)*param_3;
  for (uVar3 = 0; uVar3 < param_1; uVar3 = uVar3 + 1 & 0xff) {
    uVar2 = 1;
    do {
      uVar4 = *(byte *)(param_2 + uVar3) & uVar2;
      if (uVar4 != 0) {
        uVar4 = 1;
      }
      uVar5 = uVar1 >> 0xf;
      uVar1 = (uVar1 << 0x11) >> 0x10;
      if (uVar4 != uVar5) {
        uVar1 = uVar1 ^ 0x8005;
      }
      uVar2 = (uVar2 << 0x19) >> 0x18;
    } while (uVar2 != 0);
  }
  *(char *)param_3 = (char)uVar1;
  *(char *)((int)param_3 + 1) = (char)(uVar1 >> 8);
  return;
}



/* FUN_00017658 @ 00017658 */

undefined4 FUN_00017658(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  
  bVar2 = *param_1;
  uVar4 = (uint)bVar2;
  if ((((((bVar2 & 0x88) == 0) && (((int)(uVar4 << 0x1e) < 0 || (*(int *)(param_1 + 8) != 0)))) &&
       (((bVar2 & 1) != 0 || (*(int *)(param_1 + 4) != 0)))) &&
      (((((bVar2 & 3) == 0 || (*(int *)(param_1 + 0x18) != 0)) &&
        ((-1 < (int)(uVar4 << 0x1a) || (*(int *)(param_1 + 0xc) != 0)))) &&
       ((-1 < (int)(uVar4 << 0x1b) || (*(int *)(param_1 + 0xc) != 0)))))) &&
     ((-1 < (int)(uVar4 << 0x19) || (*(int *)(param_1 + 0x10) != 0)))) {
    if ((bVar2 & 3) != 0) {
      bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 0x20);
      uVar6 = (uint)bVar2;
      if ((((int)(uVar6 << 0x19) < 0) || (-1 < (int)(uVar6 << 0x18))) ||
         ((int)(uVar4 << 0x1d) >> 0x1f != (int)(uVar6 << 0x1b) >> 0x1f)) {
        *(byte *)(*(int *)(param_1 + 0x18) + 0x20) = bVar2 & 0x7f;
        return 9;
      }
    }
    if ((int)(uVar4 << 0x1e) < 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 8);
    }
    FUN_000015e4(param_2,uVar7,0x20);
    if ((*param_1 & 1) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
    }
    FUN_000015e4(param_2 + 0x20,uVar7,0x20);
    *(undefined *)(param_2 + 0x40) = 8;
    *(byte *)(param_2 + 0x41) = *param_1;
    *(char *)(param_2 + 0x42) = (char)*(undefined2 *)(param_1 + 2);
    *(char *)(param_2 + 0x43) = (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8);
    puVar8 = (undefined4 *)(param_2 + 0x44);
    if ((int)((uint)*param_1 << 0x1b) < 0) {
      puVar5 = *(undefined4 **)(param_1 + 0xc);
      *puVar8 = *puVar5;
      *(undefined4 *)(param_2 + 0x48) = puVar5[1];
      *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(puVar5 + 2);
      *(undefined *)(param_2 + 0x4e) = *(undefined *)((int)puVar5 + 10);
      puVar8 = (undefined4 *)(param_2 + 0x4f);
    }
    else {
      if ((int)((uint)*param_1 << 0x1a) < 0) {
        puVar5 = *(undefined4 **)(param_1 + 0xc);
        *puVar8 = *puVar5;
        *(undefined4 *)(param_2 + 0x48) = puVar5[1];
        puVar5 = (undefined4 *)(param_2 + 0x4c);
      }
      else {
        bVar2 = 0;
        do {
          bVar2 = bVar2 + 1;
          puVar5 = (undefined4 *)((int)puVar8 + 1);
          *(undefined *)puVar8 = 0;
          puVar8 = puVar5;
        } while (bVar2 < 8);
      }
      bVar2 = 0;
      do {
        bVar2 = bVar2 + 1;
        puVar8 = (undefined4 *)((int)puVar5 + 1);
        *(undefined *)puVar5 = 0;
        puVar5 = puVar8;
      } while (bVar2 < 3);
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = 0xee;
    }
    else {
      uVar3 = *(undefined *)(*(int *)(param_1 + 0x10) + 8);
    }
    *(undefined *)puVar8 = uVar3;
    if ((int)((uint)*param_1 << 0x19) < 0) {
      puVar5 = (undefined4 *)((int)puVar8 + 5);
      *(undefined4 *)((int)puVar8 + 1) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4);
    }
    else {
      bVar2 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      do {
        bVar2 = bVar2 + 1;
        puVar5 = (undefined4 *)((int)puVar8 + 1);
        *(undefined *)puVar8 = 0;
        puVar8 = puVar5;
      } while (bVar2 < 4);
    }
    if (*(undefined **)(param_1 + 0x10) == (undefined *)0x0) {
      *(undefined *)puVar5 = 1;
      uVar3 = 0x23;
    }
    else {
      *(undefined *)puVar5 = **(undefined **)(param_1 + 0x10);
      uVar3 = *(undefined *)(*(int *)(param_1 + 0x10) + 1);
    }
    *(undefined *)((int)puVar5 + 1) = uVar3;
    if ((int)((uint)*param_1 << 0x19) < 0) {
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 2);
    }
    else {
      bVar2 = 0;
      puVar9 = (undefined2 *)((int)puVar5 + 2);
      do {
        bVar2 = bVar2 + 1;
        *(undefined *)puVar9 = 0;
        puVar9 = (undefined2 *)((int)puVar9 + 1);
      } while (bVar2 < 2);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x18) + 0x20);
      *pbVar1 = *pbVar1 & 0x7f;
    }
    return 0;
  }
  return 8;
}



/* FUN_0001a114 @ 0001a114 */

int FUN_0001a114(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      if (uVar4 != uVar3) {
        if ((uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18) <=
            (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18)) {
          return -1;
        }
        return 1;
      }
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) goto LAB_0001a14c;
    param_3 = param_3 + 1;
    puVar1 = param_1;
    puVar2 = param_2;
    while( true ) {
      param_1 = (uint *)((int)puVar1 + 1);
      param_2 = (uint *)((int)puVar2 + 1);
      if ((uint)*(byte *)puVar1 - (uint)*(byte *)puVar2 != 0) {
        return (uint)*(byte *)puVar1 - (uint)*(byte *)puVar2;
      }
      param_3 = param_3 - 2;
      if (param_3 == 0) break;
LAB_0001a14c:
      puVar1 = (uint *)((int)param_1 + 1);
      puVar2 = (uint *)((int)param_2 + 1);
      if ((uint)*(byte *)param_1 - (uint)*(byte *)param_2 != 0) {
        return (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
      }
    }
    return 0;
  }
  return 0;
}



/* FUN_0001a16c @ 0001a16c */

undefined8 FUN_0001a16c(uint *param_1,uint *param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar6;
  byte in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  if (3 < param_3) {
    uVar7 = (uint)param_1 & 3;
    puVar3 = param_1;
    uVar8 = uVar7;
    if (uVar7 != 0) {
      bVar5 = *(byte *)param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar7 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar7 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = *(byte *)puVar3;
      }
      puVar1 = (uint *)((int)param_1 + 1);
      if (uVar7 < 3) {
        puVar1 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar8;
      }
      param_3 = (param_3 + uVar7) - 4;
      puVar3 = puVar1;
      if (uVar7 < 2) {
        puVar3 = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = bVar5;
      }
    }
    uVar7 = (uint)param_2 & 3;
    if (uVar7 == 0) {
      uVar8 = 0;
      while (uVar7 = param_3 - 0x20, 0x1f < param_3) {
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        *puVar3 = *param_2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        uVar8 = param_2[4];
        uVar9 = param_2[5];
        uVar10 = param_2[6];
        uVar11 = param_2[7];
        param_2 = param_2 + 8;
        puVar3[4] = uVar8;
        puVar3[5] = uVar9;
        puVar3[6] = uVar10;
        puVar3[7] = uVar11;
        puVar3 = puVar3 + 8;
        param_3 = uVar7;
      }
      if ((bool)((byte)(uVar7 >> 4) & 1)) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar3 = puVar3 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3 = puVar3 + 2;
      }
      puVar2 = puVar3;
      puVar1 = param_2;
      if ((bool)((byte)(uVar7 >> 2) & 1)) {
        puVar1 = param_2 + 1;
        uVar8 = *param_2;
        puVar2 = puVar3 + 1;
        *puVar3 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((uVar7 & 3) != 0) {
        bVar13 = (bool)((byte)(uVar7 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar12 = (int)param_3 < 0;
        puVar3 = puVar1;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar1 + 2);
          uVar6 = *(undefined2 *)puVar1;
        }
        puVar1 = puVar3;
        if (bVar12) {
          puVar1 = (uint *)((int)puVar3 + 1);
          param_3 = (uint)*(byte *)puVar3;
        }
        puVar3 = puVar2;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar2 + 2);
          *(undefined2 *)puVar2 = uVar6;
        }
        puVar2 = puVar3;
        if (bVar12) {
          puVar2 = (uint *)((int)puVar3 + 1);
          *(byte *)puVar3 = (byte)param_3;
        }
        return CONCAT44(puVar1,puVar2);
      }
      return CONCAT44(puVar1,puVar2);
    }
    while( true ) {
      in_r12 = (byte)uVar8;
      if (param_3 < 8) break;
      puVar1 = param_2 + 1;
      uVar7 = *param_2;
      param_2 = param_2 + 2;
      uVar8 = *puVar1;
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3 = puVar3 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar3;
    if (-1 < (int)param_3) {
      uVar7 = *param_2;
      param_1 = puVar3 + 1;
      *puVar3 = uVar7;
      param_2 = param_2 + 1;
    }
    param_4 = (byte)uVar7;
  }
  bVar13 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar12 = (int)param_3 < 0;
  if (bVar13) {
    pbVar4 = (byte *)((int)param_2 + 1);
    param_4 = *(byte *)param_2;
    param_2 = (uint *)((int)param_2 + 2);
    in_r12 = *pbVar4;
  }
  puVar3 = param_2;
  if (bVar12) {
    puVar3 = (uint *)((int)param_2 + 1);
    param_3 = (uint)*(byte *)param_2;
  }
  if (bVar13) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = param_4;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = in_r12;
  }
  puVar1 = param_1;
  if (bVar12) {
    puVar1 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar3,puVar1);
}



/* FUN_0001a1f4 @ 0001a1f4 */

undefined8 FUN_0001a1f4(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_r12;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  bVar5 = (byte)in_r12;
  uVar8 = (int)param_1 - (int)param_2;
  bVar13 = uVar8 == 0;
  if (param_2 <= param_1) {
    bVar13 = param_3 == uVar8;
  }
  if ((param_2 <= param_1 && uVar8 <= param_3) && !bVar13) {
    param_1 = (uint *)((int)param_1 + param_3);
    param_2 = (uint *)((int)param_2 + param_3);
    if (3 < param_3) {
      bVar13 = ((uint)param_1 & 3) == 0;
      do {
        if (!bVar13) {
          param_2 = (uint *)((int)param_2 + -1);
          param_3 = param_3 - 1;
          param_1 = (uint *)((int)param_1 + -1);
          *(byte *)param_1 = *(byte *)param_2;
        }
        bVar13 = ((uint)param_1 & 3) == 0;
      } while (!bVar13);
      uVar8 = (uint)param_2 & 3;
      if (uVar8 == 0) {
        while (uVar8 = param_3 - 0x10, 0xf < param_3) {
          puVar3 = param_2 + -1;
          uVar11 = param_2[-2];
          uVar10 = param_2[-3];
          param_2 = param_2 + -4;
          uVar9 = *param_2;
          param_1[-1] = *puVar3;
          param_1[-2] = uVar11;
          param_1[-3] = uVar10;
          param_1 = param_1 + -4;
          *param_1 = uVar9;
          param_3 = uVar8;
        }
        uVar9 = param_3 << 0x1d;
        bVar13 = (int)uVar9 < 0;
        if ((bool)((byte)(uVar8 >> 3) & 1)) {
          puVar3 = param_2 + -1;
          param_2 = param_2 + -2;
          uVar9 = *param_2;
          param_1[-1] = *puVar3;
          param_1 = param_1 + -2;
          *param_1 = uVar9;
        }
        if (bVar13) {
          param_2 = param_2 + -1;
          uVar9 = *param_2;
          param_1 = param_1 + -1;
          *param_1 = uVar9;
        }
        uVar7 = (undefined2)uVar9;
        if ((uVar8 & 3) != 0) {
          bVar14 = (bool)((byte)(uVar8 >> 1) & 1);
          param_3 = param_3 << 0x1f;
          bVar13 = (int)param_3 < 0;
          if (bVar14) {
            param_2 = (uint *)((int)param_2 + -2);
            uVar7 = *(undefined2 *)param_2;
          }
          if (bVar13) {
            param_3 = (uint)*(byte *)((int)param_2 + -1);
          }
          if (bVar14) {
            param_1 = (uint *)((int)param_1 + -2);
            *(undefined2 *)param_1 = uVar7;
          }
          if (bVar13) {
            *(byte *)((int)param_1 + -1) = (byte)param_3;
          }
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,param_1);
      }
      while( true ) {
        bVar5 = (byte)in_r12;
        if (param_3 < 8) break;
        uVar8 = param_2[-1];
        param_2 = param_2 + -2;
        in_r12 = *param_2;
        param_1[-1] = uVar8;
        param_1 = param_1 + -2;
        *param_1 = in_r12;
        param_3 = param_3 - 8;
      }
      param_3 = param_3 - 4;
      if (-1 < (int)param_3) {
        param_2 = param_2 + -1;
        uVar8 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = uVar8;
      }
    }
    bVar6 = (byte)uVar8;
    bVar14 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar13 = (int)param_3 < 0;
    if (bVar14) {
      bVar6 = *(byte *)((int)param_2 + -1);
      param_2 = (uint *)((int)param_2 + -2);
      bVar5 = *(byte *)param_2;
    }
    if (bVar13) {
      param_3 = (uint)*(byte *)((int)param_2 + -1);
    }
    if (bVar14) {
      *(byte *)((int)param_1 + -1) = bVar6;
      param_1 = (uint *)((int)param_1 + -2);
      *(byte *)param_1 = bVar5;
    }
    if (bVar13) {
      *(byte *)((int)param_1 + -1) = (byte)param_3;
    }
    return CONCAT44(param_2,param_1);
  }
  puVar3 = param_2;
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    puVar1 = param_1;
    uVar9 = uVar8;
    if (uVar8 != 0) {
      bVar5 = *(byte *)param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = *(byte *)puVar3;
      }
      puVar3 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar3 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar9;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar1 = puVar3;
      if (uVar8 < 2) {
        puVar1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = bVar5;
      }
    }
    uVar8 = (uint)param_2 & 3;
    if (uVar8 == 0) {
      uVar8 = 0;
      while (uVar9 = param_3 - 0x20, 0x1f < param_3) {
        uVar8 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *puVar1 = *param_2;
        puVar1[1] = uVar8;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        uVar8 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        puVar1[4] = uVar8;
        puVar1[5] = uVar10;
        puVar1[6] = uVar11;
        puVar1[7] = uVar12;
        puVar1 = puVar1 + 8;
        param_3 = uVar9;
      }
      if ((bool)((byte)(uVar9 >> 4) & 1)) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        puVar1 = puVar1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar1 = uVar8;
        puVar1[1] = uVar10;
        puVar1 = puVar1 + 2;
      }
      puVar2 = puVar1;
      puVar3 = param_2;
      if ((bool)((byte)(uVar9 >> 2) & 1)) {
        puVar3 = param_2 + 1;
        uVar8 = *param_2;
        puVar2 = puVar1 + 1;
        *puVar1 = uVar8;
      }
      uVar7 = (undefined2)uVar8;
      if ((uVar9 & 3) != 0) {
        bVar14 = (bool)((byte)(uVar9 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar1 = puVar3;
        if (bVar14) {
          puVar1 = (uint *)((int)puVar3 + 2);
          uVar7 = *(undefined2 *)puVar3;
        }
        puVar3 = puVar1;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar1 + 1);
          param_3 = (uint)*(byte *)puVar1;
        }
        puVar1 = puVar2;
        if (bVar14) {
          puVar1 = (uint *)((int)puVar2 + 2);
          *(undefined2 *)puVar2 = uVar7;
        }
        puVar2 = puVar1;
        if (bVar13) {
          puVar2 = (uint *)((int)puVar1 + 1);
          *(byte *)puVar1 = (byte)param_3;
        }
        return CONCAT44(puVar3,puVar2);
      }
      return CONCAT44(puVar3,puVar2);
    }
    while( true ) {
      bVar5 = (byte)uVar9;
      if (param_3 < 8) break;
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar3;
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = puVar1 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar1;
    puVar3 = param_2;
    if (-1 < (int)param_3) {
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_1 = puVar1 + 1;
      *puVar1 = uVar8;
    }
  }
  bVar6 = (byte)uVar8;
  bVar14 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar14) {
    pbVar4 = (byte *)((int)puVar3 + 1);
    bVar6 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 2);
    bVar5 = *pbVar4;
  }
  puVar1 = puVar3;
  if (bVar13) {
    puVar1 = (uint *)((int)puVar3 + 1);
    param_3 = (uint)*(byte *)puVar3;
  }
  if (bVar14) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = bVar5;
  }
  puVar3 = param_1;
  if (bVar13) {
    puVar3 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar1,puVar3);
}



/* FUN_0001a280 @ 0001a280 */

undefined4 * FUN_0001a280(undefined4 *param_1,uint param_2,undefined param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar1,uVar1);
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar3 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = param_3;
    }
    puVar2 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    return puVar2;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar2 = param_1;
    if (iVar7 != 2) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    param_1 = puVar2;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    param_2 = param_2 - iVar7;
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((param_2 & 0x10) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar5 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar5 != 0) {
    puVar4 = puVar2;
    if ((int)uVar5 < 0) {
      puVar4 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    puVar2 = puVar4;
    if ((uVar5 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar4 + 1);
      *(undefined *)puVar4 = param_3;
    }
    return puVar2;
  }
  return puVar2;
}



/* FUN_0001a290 @ 0001a290 */

undefined4 * FUN_0001a290(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar2 = 0;
    }
    puVar1 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    return puVar1;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar1 = param_1;
    if (iVar5 != 2) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = 0;
    }
    param_1 = puVar1;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    param_2 = param_2 - iVar5;
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
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
  uVar4 = param_2 << 0x1e;
  puVar1 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar4 != 0) {
    puVar3 = puVar1;
    if ((int)uVar4 < 0) {
      puVar3 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    puVar1 = puVar3;
    if ((uVar4 & 0x40000000) != 0) {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined *)puVar3 = 0;
    }
    return puVar1;
  }
  return puVar1;
}



/* FUN_0001a2d4 @ 0001a2d4 */

undefined4 * FUN_0001a2d4(undefined4 *param_1,uint param_2)

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



/* FUN_0001a408 @ 0001a408 */

undefined4 FUN_0001a408(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x1fU & 0xfffffff0);
  param_1[3] = piVar1;
  *piVar1 = (int)param_1;
  piVar1[1] = 0;
  piVar1[2] = 0;
  *(undefined *)(piVar1 + 4) = 1;
  *(undefined *)((int)piVar1 + 0x11) = 0x56;
  piVar1[3] = (param_2 - (param_1[3] - (int)param_1)) + -0x20;
  *param_1 = piVar1;
  param_1[1] = piVar1;
  param_1[2] = piVar1[3];
  return 0;
}



/* FUN_0001a438 @ 0001a438 */

int FUN_0001a438(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = 0;
  uVar4 = param_1 + 0xfU & 0xfffffff0;
  if (uVar4 == 0) {
    return 0;
  }
  iVar5 = param_2[1];
  iVar1 = iVar5;
  do {
    if ((*(char *)(iVar1 + 0x10) != '\0') && (uVar4 <= *(uint *)(iVar1 + 0xc))) {
      if (*(uint *)(iVar1 + 0xc) < uVar4 + 0x20) {
        *(undefined *)(iVar1 + 0x10) = 0;
      }
      else {
        iVar2 = iVar1 + uVar4;
        puVar3 = (undefined4 *)(iVar2 + 0x20);
        *puVar3 = param_2;
        *(int *)(iVar2 + 0x24) = iVar1;
        *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 8);
        *(undefined *)(iVar2 + 0x30) = 1;
        *(uint *)(iVar2 + 0x2c) = (*(int *)(iVar1 + 0xc) - uVar4) + -0x20;
        *(undefined *)(iVar2 + 0x31) = 0x56;
        *(undefined *)(iVar1 + 0x10) = 0;
        *(int *)(iVar1 + 0x18) = param_1;
        *(undefined4 **)(iVar1 + 8) = puVar3;
        *(uint *)(iVar1 + 0xc) = uVar4;
        if (*(int *)(iVar2 + 0x28) == 0) {
          *param_2 = (int)puVar3;
        }
        else {
          *(undefined4 **)(*(int *)(iVar2 + 0x28) + 4) = puVar3;
        }
      }
      *(undefined4 *)(iVar1 + 0x14) = param_3;
      param_2[2] = (param_2[2] - *(int *)(iVar1 + 0xc)) + -0x20;
      iVar2 = iVar1 + 0x20;
      break;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
  } while (iVar1 != iVar5);
  iVar1 = *(int *)(iVar5 + 8);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
  }
  param_2[1] = iVar1;
  return iVar2;
}



/* FUN_0001a548 @ 0001a548 */

undefined4 FUN_0001a548(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = DAT_0001a5b0;
  switch(*param_1) {
  case 0x20:
    uVar1 = FUN_0001a5d6(param_1[0xe],param_1[0xf],param_1[0x11],param_1[0x12]);
    param_1[0x10] = uVar1;
    uVar1 = uVar2;
    break;
  case 0x21:
    uVar1 = FUN_0001a610(param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11]);
    param_1[0xe] = uVar1;
    uVar1 = uVar2;
    break;
  case 0x22:
    FUN_0001a5b4(param_1[0xe]);
    uVar1 = uVar2;
    break;
  case 0x23:
    FUN_0001a1f4(param_1[0xe],param_1[0xf],param_1[0x10]);
    uVar1 = uVar2;
    break;
  case 0x24:
    uVar1 = FUN_0001a114(param_1[0xe],param_1[0xf],param_1[0x10]);
    break;
  case 0x25:
    FUN_0001a280(param_1[0xe],param_1[0x10],param_1[0xf] & 0xff);
    uVar1 = uVar2;
  }
  return uVar1;
}



/* FUN_0001a5b4 @ 0001a5b4 */

void FUN_0001a5b4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(char *)(param_1 + -0xf) == 'V') && (*(char *)(param_1 + -0x10) == '\0')) {
    if (param_1 != 0) {
      puVar1 = (undefined4 *)(param_1 + -0x20);
      piVar2 = (int *)*puVar1;
      piVar2[2] = piVar2[2] + *(int *)(param_1 + -0x14) + 0x20;
      *(undefined *)(param_1 + -0x10) = 1;
      if ((undefined4 *)piVar2[1] == puVar1) {
        iVar3 = ((undefined4 *)piVar2[1])[2];
        if (iVar3 == 0) {
          iVar3 = piVar2[3];
        }
        piVar2[1] = iVar3;
      }
      puVar4 = *(undefined4 **)(param_1 + -0x1c);
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 4) != '\0')) {
        puVar4[3] = puVar4[3] + *(int *)(param_1 + -0x14) + 0x20;
        iVar3 = *(int *)(param_1 + -0x18);
        puVar4[2] = iVar3;
        if (iVar3 == 0) {
          *piVar2 = (int)puVar4;
        }
        else {
          *(undefined4 **)(iVar3 + 4) = puVar4;
        }
        *(undefined *)(param_1 + -0xf) = 0;
        puVar1 = puVar4;
      }
      iVar3 = puVar1[2];
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x10) != '\0')) {
        if (piVar2[1] == iVar3) {
          iVar5 = *(int *)(piVar2[1] + 8);
          if (iVar5 == 0) {
            iVar5 = piVar2[3];
          }
          piVar2[1] = iVar5;
        }
        puVar1[3] = puVar1[3] + *(int *)(iVar3 + 0xc) + 0x20;
        iVar5 = *(int *)(iVar3 + 8);
        puVar1[2] = iVar5;
        if (iVar5 == 0) {
          *piVar2 = (int)puVar1;
        }
        else {
          *(undefined4 **)(iVar5 + 4) = puVar1;
        }
        *(undefined *)(iVar3 + 0x11) = 0;
      }
    }
    return;
  }
  FUN_0001a2d4(0xffffff00,0x40);
  return;
}



/* FUN_0001a5d6 @ 0001a5d6 */

int FUN_0001a5d6(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_3 + 4) == 0) && (iVar1 = FUN_0001a408(param_3,param_4), iVar1 != 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0001a438(param_1,param_3,param_2);
    if ((iVar1 != 0) && (param_2 == 0)) {
      FUN_0001a290(iVar1,param_1);
    }
  }
  return iVar1;
}



/* FUN_0001a610 @ 0001a610 */

int FUN_0001a610(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    param_1 = FUN_0001a5d6(param_2,0);
  }
  else if ((*(char *)(param_1 + -0xf) == 'V') && (*(char *)(param_1 + -0x10) != '\x01')) {
    uVar2 = *(uint *)(param_1 + -8);
    if (param_2 < *(uint *)(param_1 + -8)) {
      uVar2 = param_2;
    }
    iVar1 = FUN_0001a5d6(param_2,*(undefined4 *)(param_1 + -0xc));
    if (iVar1 == 0) {
      param_1 = 0;
    }
    else {
      FUN_0001a16c(iVar1,param_1,uVar2);
      FUN_0001a5b4(param_1);
      param_1 = iVar1;
    }
  }
  else {
    FUN_0001a2d4(0xffffff00,0x40);
  }
  return param_1;
}




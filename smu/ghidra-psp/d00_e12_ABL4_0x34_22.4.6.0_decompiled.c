/* Decompiled from: d00_e12_ABL4~0x34_22.4.6.0 */

/* Reset @ 00000000 */

/* WARNING: Control flow encountered bad instruction data */

void Reset(void)

{
  int unaff_r8;
  bool in_NG;
  undefined4 in_cr2;
  
  if (!in_NG) {
    coprocessor_load(9,in_cr2,unaff_r8 + 0x2ac);
  }
  func_0x00d1af0a();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* UndefinedInstruction @ 00000004 */

/* WARNING: Control flow encountered bad instruction data */

void UndefinedInstruction(void)

{
  func_0x00d1af0a();
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



/* FUN_00000430 @ 00000430 */

uint FUN_00000430(void)

{
  undefined auStack_20 [12];
  uint local_14;
  uint local_10;
  
  FUN_00009f98(auStack_20);
  return local_10 & 0xff | (local_14 & 0xff) << 8;
}



/* FUN_0000044c @ 0000044c */

undefined4 FUN_0000044c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined auStack_1f0 [40];
  undefined4 local_1c8 [54];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  char *local_5c;
  undefined4 local_58;
  int *local_54;
  undefined auStack_50 [4];
  uint local_4c;
  int local_44;
  uint local_40;
  int local_3c;
  undefined4 local_34;
  char *pcStack_30;
  undefined local_2c;
  uint local_28;
  
  FUN_000021f0(4,0,0x6e0);
  FUN_000021f0(4,0,0x6f0);
  FUN_00009f98(auStack_50);
  uVar8 = local_40 | local_44 << 2;
  local_34 = 0x40;
  pcStack_30 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x1b;
  local_2c = 4;
  iVar2 = FUN_000097b4(&local_34,*(undefined4 *)(param_1 + 0xb8));
  if (iVar2 == 0) {
    uVar5 = local_28 & 0xfffffffc;
    iVar6 = uVar5 + 4;
    FUN_000021f0(4,0,0x71c);
    local_5c = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x18;
    iVar2 = FUN_000099e8(&local_5c,*(undefined4 *)(param_1 + 0xb8));
    uVar3 = 0x764;
    if (iVar2 == 0) {
      FUN_000021f0(4,0,0x758);
      *local_54 = 1;
      local_54[1] = 2;
      piVar7 = local_54;
    }
    else {
      uVar3 = 0x30;
      local_8c = DAT_00000744;
      local_88 = DAT_00000744 + 1;
      piVar7 = &local_8c;
    }
    iVar2 = FUN_00000430();
    piVar7[2] = iVar2;
    piVar7[3] = 0x764;
    local_9c = uVar8 * 0x7b0 + 0x428;
    func_0x00010da0(piVar7,local_9c,uVar3,*(undefined4 *)(param_1 + 0xb8));
    local_90 = 0;
    local_94 = 0;
    FUN_000021f0(0x400,0,0x748);
    iVar2 = func_0x00010e18(&local_f0);
    if (iVar2 != 0) {
      FUN_00009b0c(DAT_00000718 + 0x56);
    }
    local_f0 = 3;
    uStack_ec = 1;
    local_e8 = FUN_00000430();
    local_98 = uVar8 * 0x7b0 + 0xb8c;
    uStack_e4 = 0x4c;
    func_0x00010da0(&local_f0,local_98,0x4c,*(undefined4 *)(param_1 + 0xb8));
    if ((local_44 == 0) && (local_40 == 0)) {
      FUN_000021f0(0x400,0,0x774);
      local_5c = s_PspBootRomServices_EnabledCoreCo_0000a030 + 10;
      iVar2 = FUN_000099e8(&local_5c,*(undefined4 *)(param_1 + 0xb8));
      if (iVar2 != 0) {
        FUN_00009b0c(DAT_00000718 + 0x82);
      }
      piVar7 = local_54;
      if (9 < (uint)local_54[2]) {
        FUN_00009b0c(DAT_00000718 + 0x85);
      }
      uVar8 = 0;
      do {
        uVar4 = uVar8 + 1;
        local_1c8[uVar8 * 6] = 0;
        local_1c8[uVar8 * 6 + 1] = 0;
        local_1c8[uVar8 * 6 + 4] = 0;
        local_1c8[uVar8 * 6 + 2] = 0;
        local_1c8[uVar8 * 6 + 3] = 0;
        uVar8 = uVar4;
      } while (uVar4 < 9);
      puVar1 = (undefined4 *)(param_1 + 0xb8);
      thunk_FUN_00009eea(auStack_1f0,piVar7,local_58,*puVar1);
      local_220 = 9;
      local_21c = 9;
      local_218 = FUN_00000430();
      local_90 = 0x40;
      uStack_214 = 0x130;
      func_0x00010da0(&local_220,0x40,0x130,*puVar1);
      FUN_000021f0(0x400,0,0x790);
      local_5c = s_PspBootRomServices_DiesPerSocket_00009fe8 + 0x2e;
      iVar2 = FUN_000099e8(&local_5c,*puVar1);
      if (iVar2 == 0) {
        uVar3 = 0x2b4;
        *local_54 = 8;
        local_54[1] = 8;
        piVar7 = local_54;
      }
      else {
        uVar3 = 0x30;
        local_8c = DAT_00000744 + 7;
        piVar7 = &local_8c;
        local_88 = local_8c;
      }
      iVar2 = FUN_00000430();
      piVar7[2] = iVar2;
      piVar7[3] = 0x2b8;
      local_94 = 0x170;
      func_0x00010da0(piVar7,0x170,uVar3,*puVar1);
    }
    if (local_3c == 0) {
      local_a4 = 0x7b0;
    }
    else {
      local_a4 = 0xbd8;
    }
    local_a0 = iVar6;
    if (local_4c < 2) {
      FUN_000021f0(4,0,0x7ac);
      *(int *)(uVar5 + 0x1c) = local_9c;
      *(int *)(uVar5 + 0x20) = local_98;
      if (local_94 == 0) {
        FUN_00009b0c(DAT_000007c0);
      }
      *(int *)(uVar5 + 0x18) = local_94;
      if (local_90 == 0) {
        FUN_00009b0c(DAT_000007c0 + 2);
      }
      *(int *)(uVar5 + 0x14) = local_90;
      *(undefined4 *)(uVar5 + 0xc) = local_a4;
      FUN_000021f0(4,0,0x7c4);
      func_0x000100b0(*(undefined4 *)(param_1 + 0xb8),iVar6);
      func_0x000101a4(iVar6,0x40,0,*(undefined4 *)(param_1 + 0xb8));
    }
    else if (local_3c != 0) {
      FUN_000021f0(4,0,0x7ac);
      func_0x000100b0(*(undefined4 *)(param_1 + 0xb8),iVar6);
    }
    FUN_00001a18(*(undefined4 *)(param_1 + 0xb8),0xd,&local_a4);
    uVar3 = 0;
  }
  else {
    FUN_00009b0c(DAT_00000718);
    uVar3 = 9;
  }
  return uVar3;
}



/* FUN_00000c1c @ 00000c1c */

uint FUN_00000c1c(void)

{
  undefined auStack_20 [12];
  uint local_14;
  uint local_10;
  
  FUN_00009f98(auStack_20);
  return local_10 & 0xff | (local_14 & 0xff) << 8;
}



/* FUN_00000c38 @ 00000c38 */

undefined4 FUN_00000c38(short *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)*DAT_00000c88 == '\x01') {
    uVar2 = 0;
    do {
      iVar1 = *DAT_00000c8c + uVar2 * 0x10;
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



/* FUN_00000c90 @ 00000c90 */

void FUN_00000c90(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(char *)*DAT_00000cc4 == '\x01') {
    FUN_000021f0(4,0,0xcc8);
    puVar3 = (undefined4 *)*DAT_00000ce4;
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



/* FUN_00000ce8 @ 00000ce8 */

/* WARNING: Removing unreachable block (ram,0x00000d20) */
/* WARNING: Removing unreachable block (ram,0x00000d24) */

void FUN_00000ce8(undefined2 *param_1,int param_2)

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
  
  piVar1 = DAT_00000dc8;
  if (*(char *)*DAT_00000dc8 == '\x01') {
    FUN_000021f0(4,0,0xdcc);
    iVar3 = FUN_00000c38(param_1);
    puVar2 = DAT_00000de4;
    if (iVar3 == 0) {
      uVar5 = *(uint *)*DAT_00000de4;
      if (0x1f < uVar5) {
        do {
        } while( true );
      }
      FUN_00009f98(auStack_34);
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
          FUN_00000de8(1);
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
          FUN_000020e4(0,auStack_78);
        }
      }
      else if ((*(char *)(*piVar1 + 0x10) == '\x01') &&
              (*(short *)((int)piVar4 + uVar5 * 0x10 + 0x1a) == 9)) {
        FUN_00000de8(1);
        do {
        } while( true );
      }
    }
  }
  return;
}



/* FUN_00000de8 @ 00000de8 */

void FUN_00000de8(int param_1)

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
  
  FUN_00009f98(auStack_44);
  piVar1 = DAT_00000f30;
  if (*(char *)*DAT_00000f30 == '\x01') {
    if ((local_40 < 2) || (local_30 != 0)) {
      FUN_000021f0(4,0,0xf48);
      puVar2 = (uint *)*DAT_00000f60;
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
        FUN_000021f0(4,0,0xf64);
        if (0x1f < *puVar2) {
          *puVar2 = 0x1f;
        }
        func_0x0000ff60(uVar4,uVar3,DAT_00000f84,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000fac(uVar4,uVar3);
        func_0x0000ff60(uVar4,uVar3,*puVar2,*(uint *)(*piVar1 + 0x14) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000fac(uVar4,uVar3);
        for (uVar6 = 0; uVar6 < *puVar2; uVar6 = uVar6 + 1) {
          uVar5 = 0;
          do {
            func_0x0000ff60(uVar4,uVar3,puVar7[uVar5 + uVar6 * 4],*(uint *)(*piVar1 + 0x18) & 0xff,
                            *(undefined4 *)(*piVar1 + 0x1c));
            FUN_00000fac(uVar4,uVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < 4);
        }
        func_0x0000ff60(uVar4,uVar3,DAT_00000f88,*(uint *)(*piVar1 + 0x18) & 0xff,
                        *(undefined4 *)(*piVar1 + 0x20));
        FUN_00000fac(uVar4,uVar3);
        FUN_000021f0(4,0,0xf8c);
      } while (param_1 != 0);
      if (*puVar2 == 0x20) {
        FUN_00000c90();
      }
    }
  }
  else {
    FUN_000021f0(4,0,0xf34);
  }
  return;
}



/* FUN_00000fac @ 00000fac */

void FUN_00000fac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00001000;
  if (*(char *)*DAT_00001000 == '\x01') {
    FUN_000021f0(4,0,s_Error_Reporting_waiting_for_ACK_00001004,param_4,param_4);
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 3) == '\x01') {
      FUN_000019b8(param_1,param_2,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c));
    }
    else {
      software_interrupt(0x1b);
    }
    iVar2 = *piVar1;
    if (*(char *)(iVar2 + 0x24) == '\x01') {
      func_0x0000ff60(param_1,param_2,0,*(uint *)(iVar2 + 0x14) & 0xff,*(undefined4 *)(iVar2 + 0x1c)
                     );
    }
  }
  return;
}



/* FUN_000014e4 @ 000014e4 */

undefined4 FUN_000014e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_1a4 [16];
  char acStack_194 [8];
  undefined4 auStack_18c [72];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_54;
  undefined auStack_4c [4];
  uint local_48;
  int local_38;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  thunk_FUN_00009ef6(&local_6c,0,0x20,param_2);
  FUN_000021f0(4,0,s_AGESA_MEM___Multi_Die___APOB_Sup_00001724);
  FUN_00009f98(auStack_4c);
  if (local_48 < 2) {
    FUN_000021f0(4,0,s_APOB_Sync_Disabled___Die_count_<_00001990);
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
    FUN_000021f0(4,0,s_Unified_APOB_Start_0000174c);
    if (local_38 == 0) {
      FUN_000021f0(4,0,s_Slave__APOB_init_00001924);
      local_6c._2_2_ = 7;
      local_68 = *(undefined4 *)(param_1 + 8);
      local_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_000021f0(4,0,s_Slave__APOB___Send_Data_to_Maste_00001938);
      iVar4 = FUN_00001fa4(local_28,0,&local_6c,7,1);
      if (iVar4 != 0) {
        FUN_00009b0c(DAT_0000195c);
      }
      FUN_000021f0(4,0,s_Slave__APOB_init_00001924);
      local_6c._2_2_ = 7;
      FUN_000021f0(4,0,s_Slave__APOB_Data_Set_2__Send_Dat_00001960);
      iVar4 = FUN_00001fa4(local_28,0,&local_6c,7,1);
      if (iVar4 != 0) {
        FUN_00009b0c(DAT_0000195c + 0x16);
      }
    }
    else {
      iVar5 = local_48 * 0x7b0 + 0x428;
      FUN_000021f0(4,0,s_Running_on_System_Master__Retrei_00001764);
      FUN_000021f0(4,0,s_Master_Memory__000017a4);
      FUN_000021f0(4,0,s_Master__APOB_init_000017b8);
      FUN_000021f0(4,0,s_Master__APOB___Get_Data_from_Mas_000017cc);
      iVar1 = FUN_00001c8c(local_28,auStack_1a4);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      FUN_000021f0(4,0,s_Master__Mem_Config_buffer_Offset_000017f4);
      FUN_000021f0(0x400,0,s_Master__CCX_Map_Offset___08x_00001820,*(undefined4 *)(iVar4 + 0x1c));
      FUN_000021f0(4,0,s_Master__Mem_SMBIOS_Offset___08x_00001844,*(undefined4 *)(iVar4 + 0x14));
      FUN_000021f0(0x400,0,s_Master__System_Map_Offset___08x_00001868,*(undefined4 *)(iVar4 + 0x10))
      ;
      for (uVar3 = 1; uVar3 < local_48; uVar3 = uVar3 + 1 & 0xff) {
        FUN_000021f0(4,0,s_Slave__d_0000188c,uVar3);
        uVar2 = 0;
        do {
          (&local_6c)[uVar2] = auStack_18c[uVar3 * 7 + uVar2];
          uVar2 = uVar2 + 1;
        } while (uVar2 < 7);
        if ((iVar1 == 0) && (acStack_194[uVar3] == '\x01')) {
          if (uVar3 != 0) {
            do {
            } while( true );
          }
          *(undefined4 *)(iVar4 + 0x18) = local_68;
          FUN_000021f0(4,0,s_Mem_Config_buffer_Offset___08x_00001898);
          *(undefined4 *)(iVar4 + 0x1c) = local_54;
          FUN_000021f0(0x400,0,s_CCX_Map_Offset___08x_000018bc);
        }
      }
      FUN_00001c8c(local_28,auStack_1a4);
      for (uVar3 = 1; uVar3 < local_48; uVar3 = uVar3 + 1 & 0xff) {
        FUN_000021f0(4,0,s_Slave__d_0000188c,uVar3);
        uVar2 = 0;
        do {
          (&local_6c)[uVar2] = auStack_18c[uVar3 * 7 + uVar2];
          uVar2 = uVar2 + 1;
        } while (uVar2 < 7);
      }
      *(int *)(iVar4 + 8) = iVar5;
      FUN_000021f0(4,0,s_AGESA_Unified_APOB_Size____04x_000018d8,iVar5);
      FUN_000021f0(4,0,s_Master__Pass_unified_APOB_to_PSP_000018fc);
      func_0x000101a4(iVar4,0x40,0,local_28);
    }
  }
  return 0;
}



/* FUN_000019b8 @ 000019b8 */

void FUN_000019b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_1c;
  
  local_1c = 0;
  FUN_000021f0(4,0,s_Error_Reporting_waiting_for_ACK_000019f0,param_4,param_3);
  iVar1 = DAT_00001a14;
  while (local_1c != iVar1) {
    func_0x0000f470(param_1,param_2,&local_1c,param_3,param_4);
  }
  return;
}



/* FUN_00001a18 @ 00001a18 */

void FUN_00001a18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_30 [4];
  uint local_2c;
  int local_1c;
  
  FUN_00009f98(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    FUN_00001b8c(param_1,param_2,param_3);
  }
  else {
    FUN_00001ebc(param_1,param_2,param_3);
  }
  return;
}



/* FUN_00001a4c @ 00001a4c */

void FUN_00001a4c(undefined4 param_1,undefined4 param_2)

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
  
  iVar2 = DAT_00001b5c;
  local_38[0] = 0;
  FUN_00009efc(3,param_2,DAT_00001b5c,0,local_38,0);
  FUN_000021f0(4,0,s_REG28__x_00001b60,local_38[0]);
  FUN_000021f0(4,0,s_REG28__x_00001b60);
  FUN_00009f48(3,extraout_r1,iVar2,0,local_38,0);
  local_38[0] = 0;
  iVar2 = DAT_00001b5c + 0x18;
  FUN_00009efc(1,extraout_r1_00,iVar2,0,local_38,0);
  FUN_000021f0(4,0,s_REG40__x_00001b6c,local_38[0]);
  local_38[0] = local_38[0] & 0x7f;
  FUN_000021f0(4,0,s_REG40__x_00001b6c);
  FUN_00009f48(1,extraout_r1_01,iVar2,0,local_38,0);
  FUN_00009f98(auStack_34);
  func_0x0000a860(3,DAT_00001b7c,DAT_00001b78,param_1);
  iVar2 = FUN_000077ac(2,1,local_38,auStack_18,0);
  if (iVar2 != 0) {
    bVar1 = local_38[0];
    if (local_38[0] != 1) {
      bVar1 = 0;
    }
    if (bVar1 != 0) {
      *DAT_00001b80 = 1;
      iVar2 = FUN_000077dc(0x1c02,1,local_38,auStack_18,0);
      if (iVar2 == 0) {
        *DAT_00001b84 = 0;
      }
      else {
        *DAT_00001b84 = local_38[0];
      }
      if (*DAT_00001b78 == DAT_00001b88) {
        return;
      }
      if ((1 < local_30) && (local_20 == 0)) {
        return;
      }
      func_0x0000f7e8(param_1);
      return;
    }
  }
  *DAT_00001b80 = 0;
  return;
}



/* FUN_00001b8c @ 00001b8c */

undefined4 FUN_00001b8c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined auStack_178 [312];
  undefined auStack_40 [32];
  
  FUN_00009f98(auStack_40);
  uVar4 = 0;
  if (param_2 != 8) {
    iVar2 = FUN_00001cf4(param_1,param_2,auStack_178);
    iVar1 = DAT_00001c4c;
    if (iVar2 == 0) {
      for (uVar3 = 0; *(int *)(DAT_00001c4c + uVar3 * 8) != 0; uVar3 = uVar3 + 1 & 0xff) {
        if (*(int *)(DAT_00001c4c + uVar3 * 8 + 4) == param_2) {
          iVar2 = (**(code **)(DAT_00001c4c + uVar3 * 8))(param_3,param_1);
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
      FUN_000021f0(0,0x40000000,s__ERROR___Master__ABL__Error__no_s_00001c50);
      FUN_00009b0c(DAT_00001c88);
    }
    else {
      FUN_000021f0(0,0x40000000,s__ERROR___Master__ABL__Error__thi_00001c14);
      uVar4 = 9;
    }
  }
  return uVar4;
}



/* FUN_00001c8c @ 00001c8c */

undefined4 FUN_00001c8c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  uint local_24;
  int local_14;
  
  FUN_00009f98(auStack_28);
  if (local_24 < 2) {
    uVar1 = 0;
  }
  else if (local_14 == 0) {
    FUN_000021f0(0,0x40000000,DAT_00001cf0);
    uVar1 = 9;
  }
  else {
    FUN_000021f0(4,0,s_Master__Get_Data_from_Slaves_00001cd0);
    uVar1 = FUN_00001cf4(param_1,0xc,param_2);
  }
  return uVar1;
}



/* FUN_00001cf4 @ 00001cf4 */

undefined4 FUN_00001cf4(undefined4 param_1)

{
  undefined auStack_48 [32];
  undefined auStack_28 [32];
  
  thunk_FUN_00009ef6(auStack_48,0,0x20,param_1);
  FUN_00009f98(auStack_28);
  return 0;
}



/* FUN_00001d14 @ 00001d14 */

/* WARNING: Removing unreachable block (ram,0x00001d68) */
/* WARNING: Removing unreachable block (ram,0x00001d70) */

undefined4 FUN_00001d14(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_430 [1000];
  undefined auStack_48 [16];
  int local_38;
  char *local_2c [2];
  int local_24;
  
  local_2c[0] = s_PspBootRomServices_DiesPerSocket_00009fe8 + 0x26;
  iVar1 = FUN_000099e8(local_2c,auStack_430);
  if (iVar1 == 0) {
    software_interrupt(6);
    software_interrupt(6);
    FUN_00009f98(auStack_48);
    FUN_000021f0(4,0,s_Die_ID____d_00001e38,local_38);
    iVar2 = local_38 * 0x10000 + -0x9000000;
    FUN_000021f0(4,0,s_Agesa_Mem_Test_Start_Addr_Hi__0x_00001e48,0xfffd,iVar2);
    iVar1 = FUN_0000927c(local_24,iVar2,0xfffd,auStack_430);
    if (iVar1 == 9) {
      FUN_000021f0(4,0,s_Agesa_Mem_Test_at_Addr_Hi__0x_08_00001e80,0xfffd,iVar2);
    }
    FUN_00001a18(auStack_430,0xe,local_24);
    if (*(char *)(local_24 + 0x120) == '\x01') {
      return 0;
    }
  }
  else {
    FUN_000021f0(4,0,s_Allocate_Heap_Fail_for_Memory_Te_00001dd4);
  }
  return 9;
}



/* FUN_00001ebc @ 00001ebc */

undefined4 FUN_00001ebc(undefined4 param_1,int param_2,undefined4 param_3)

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
    local_8c = s__MEM_CONF__Override_Memory_Timin_00002fe4 + 0x20;
    uVar2 = FUN_00000c1c();
    local_90 = CONCAT22(local_90._2_2_,uVar2);
    FUN_00000ce8(&local_90,1);
    FUN_00009b0c(DAT_00001f60);
  }
  FUN_00009f98(auStack_3c);
  pcVar5 = DAT_00001f64;
  if (local_28 == 0) {
    iVar3 = FUN_000020c4(param_1,param_2,auStack_80);
    iVar1 = DAT_00001f68;
    if (iVar3 == 0) {
      for (uVar6 = 0; *(int *)(DAT_00001f68 + uVar6 * 8) != 0; uVar6 = uVar6 + 1 & 0xff) {
        if (*(int *)(DAT_00001f68 + uVar6 * 8 + 4) == param_2) {
          uVar4 = (**(code **)(DAT_00001f68 + uVar6 * 8))(param_3,param_1);
          if (*(int *)(iVar1 + uVar6 * 8) != 0) {
            return uVar4;
          }
          break;
        }
      }
      pcVar5 = s__ERROR___Slave__ABL__Error__No_s_00001f6c;
    }
    else {
      pcVar5 = DAT_00001f64 + -0x54;
    }
  }
  FUN_000021f0(0,0x40000000,pcVar5);
  return 9;
}



/* FUN_00001fa4 @ 00001fa4 */

undefined4
FUN_00001fa4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
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
  
  FUN_00009f98(auStack_34);
  if (local_20 == 0) {
    FUN_000021f0(4,0,s_Slave__ABL__Send_Data_to_Master_00002040);
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
    uVar1 = FUN_000020c4(param_1,0xc,auStack_78);
  }
  else {
    FUN_000021f0(0,0x40000000,s__ERROR___Slave__ABL__Error__inva_00002008);
    uVar1 = 9;
  }
  return uVar1;
}



/* FUN_00002064 @ 00002064 */

void FUN_00002064(void)

{
  int iVar1;
  uint uVar2;
  undefined auStack_20 [4];
  int local_1c;
  
  FUN_00009f98(auStack_20);
  FUN_000021f0(4,0,s_Slave__ABL__Init_Slave_states_0000209c);
  iVar1 = DAT_000020bc;
  for (uVar2 = 0; uVar2 < local_1c - 1U; uVar2 = uVar2 + 1 & 0xff) {
    *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
  }
  *DAT_000020c0 = 1;
  return;
}



/* FUN_000020c4 @ 000020c4 */

undefined4 FUN_000020c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined auStack_28 [28];
  
  FUN_00009f98(auStack_28);
  *(undefined *)(param_3 + 0x40) = 0;
  software_interrupt(6);
  return 0;
}



/* FUN_000020e4 @ 000020e4 */

undefined4 FUN_000020e4(void)

{
  undefined auStack_20 [32];
  
  FUN_00009f98(auStack_20);
  return 0;
}



/* FUN_000020f4 @ 000020f4 */

undefined4 FUN_000020f4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_000086f4();
  FUN_00008e2c(param_1,param_2);
  FUN_00008698(param_1,param_2);
  FUN_00008b00(param_1,param_2);
  FUN_00008618(param_1,param_2);
  FUN_00008750(param_1,param_2);
  FUN_00008d8c(param_1,param_2);
  software_interrupt(0x1c);
  if (&stack0x00000000 != &NotUsed) {
    FUN_00009b0c(DAT_0000218c);
  }
  FUN_00009a6c(0xe0c1,param_1);
  uVar1 = (uint)*(ushort *)(param_2 + 0x6c);
  FUN_000021f0(4,0,s_Encryption_Flags__AddrTweakEn_pa_00002190,*(int *)(param_2 + 0x68),uVar1);
  iVar2 = *(int *)(param_2 + 0x68);
  software_interrupt(0x21);
  if ((param_4 != 2) && (iVar2 != 0)) {
    FUN_00009b0c(DAT_0000218c + 0x11,*(undefined2 *)(param_2 + 0x6c));
  }
  FUN_000021f0(4,0,s_Svc_ProgramUmcKeys_status__x_000021cc,iVar2,uVar1);
  FUN_00003614(0,0xc);
  return 0;
}



/* FUN_000021f0 @ 000021f0 */

void FUN_000021f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if ((param_1 == 0x20 && param_2 == 0) || (param_1 == 1 && param_2 == 0)) {
    param_1 = 4;
    param_2 = 0;
  }
  uStack_4 = param_4;
  FUN_00002238(param_1,param_2,param_3,&uStack_4);
  return;
}



/* FUN_00002216 @ 00002216 */

undefined4 FUN_00002216(int param_1)

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



/* FUN_00002238 @ 00002238 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002238(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar1 = DAT_00002300;
  iVar2 = *DAT_000022fc;
  local_24 = iVar2;
  FUN_0000946c(DAT_00002300);
  iVar3 = FUN_00002216(iVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_0000230c(param_3,param_4,auStack_224,0x200,&local_234);
    if (iVar3 == 1) {
      FUN_00009bc0(auStack_224,0x200);
      local_234 = 0x200;
    }
    local_228[0] = 0;
    for (uVar5 = 0; puVar4 = *(undefined4 **)(iVar1 + uVar5 * 4), puVar4 != (undefined4 *)0x0;
        uVar5 = uVar5 + 1 & 0xff) {
      iVar3 = (*(code *)*puVar4)();
      if (iVar3 != 0) {
        local_230 = DAT_00002304;
        uStack_22c = DAT_00002308;
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



/* FUN_0000230c @ 0000230c */

undefined4 FUN_0000230c(byte *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

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
LAB_00002434:
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        *(undefined *)(param_3 + iVar7) = 0;
        *param_5 = iVar7;
      }
      return uVar5;
    }
    if (local_20 == 0) goto LAB_00002434;
    if (bVar1 == 0x25) {
      param_1 = (byte *)FUN_000094a4(param_1,&local_34,&local_30,&local_28);
      bVar1 = *param_1;
      if (bVar1 == 100) {
        uVar5 = *local_28;
        local_28 = local_28 + 1;
        iVar3 = func_0x0000feb4(param_3 + iVar7,uVar5,local_34,&local_20);
LAB_000023c8:
        if (iVar3 == 0xffff) goto LAB_00002434;
        iVar7 = iVar7 + iVar3;
      }
      else if (bVar1 < 0x65) {
        if (bVar1 == 0x25) {
LAB_00002372:
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00002434;
          *(byte *)(param_3 + iVar7) = *param_1;
        }
        else {
          if (bVar1 == 0x53) goto LAB_000023e2;
          if (bVar1 == 0x58) {
            local_34 = local_34 | 0x20;
            local_30 = 0x10;
LAB_0000239c:
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
            iVar3 = func_0x0000fdf8(param_3 + iVar7,local_34,uVar5,uVar6,local_34,local_30,&local_20
                                   );
            goto LAB_000023c8;
          }
          if (bVar1 != 99) goto LAB_00002364;
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00002434;
          uVar5 = *local_28;
          local_28 = local_28 + 1;
          *(char *)(param_3 + iVar7) = (char)uVar5;
        }
        iVar7 = iVar7 + 1;
      }
      else if (bVar1 == 0x73) {
LAB_000023e2:
        puVar2 = local_28 + 1;
        for (pcVar4 = (char *)*local_28; local_28 = puVar2, *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
          local_20 = local_20 + -1;
          if (local_20 == 0) goto LAB_00002434;
          *(char *)(param_3 + iVar7) = *pcVar4;
          iVar7 = iVar7 + 1;
        }
      }
      else {
        if (bVar1 != 0x76) {
          if (bVar1 == 0x78) goto LAB_0000239c;
LAB_00002364:
          local_20 = local_20 + -1;
          if (local_20 != 0) {
            *(undefined *)(param_3 + iVar7) = 0x25;
            iVar7 = iVar7 + 1;
            goto LAB_00002372;
          }
          goto LAB_00002434;
        }
        FUN_00009b0c(DAT_00002438);
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



/* FUN_00002444 @ 00002444 */

void FUN_00002444(char *param_1,int param_2)

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
  
  FUN_00009f98(auStack_30);
  if ((local_2c < 2) || (local_1c != 0)) {
    if (*DAT_000024c4 == DAT_000024c8) {
      local_14 = DAT_000024cc;
      uVar2 = 3;
      pcVar3 = (char *)&local_14;
      while( true ) {
        FUN_00009e10(uVar2,0x80,pcVar3,0);
        bVar5 = param_2 == 0;
        param_2 = param_2 + -1;
        if (bVar5) break;
        uVar2 = 1;
        pcVar3 = param_1;
        param_1 = param_1 + 1;
      }
      local_14 = DAT_000024d0;
      FUN_00009e10(3,0x80,&local_14,0);
    }
    else {
      iVar4 = 200;
      while (bVar5 = param_2 != 0, param_2 = param_2 + -1, bVar5) {
        do {
          if (*param_1 == '\n') {
            FUN_000024d4(0xd);
          }
          iVar1 = FUN_000024d4(*param_1);
          iVar4 = iVar4 + -1;
        } while ((iVar1 == 0) && (iVar4 != 0));
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



/* FUN_000024d4 @ 000024d4 */

undefined4 FUN_000024d4(undefined4 param_1,undefined4 param_2)

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
  
  pcVar3 = DAT_00002590;
  iVar2 = DAT_0000258c;
  iVar1 = DAT_00002588;
  iVar4 = 200;
  local_28[0] = 0;
  uStack_24 = param_1;
  while( true ) {
    if (*pcVar3 == '\0') {
      FUN_00009e38(1,0x3fd,local_28,0);
      param_2 = extraout_r1;
    }
    if (*pcVar3 == '\x01') {
      FUN_00009efc(1,param_2,iVar1,0,local_28,0);
      param_2 = extraout_r1_00;
    }
    if (*pcVar3 == '\x02') {
      FUN_00009efc(1,param_2,iVar2,0,local_28,0);
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
    FUN_00009e8c(1,0x3f8,&uStack_24,0);
    param_2 = extraout_r1_02;
  }
  if (*pcVar3 == '\x01') {
    FUN_00009f48(1,param_2,DAT_00002588 + -0x14,0,&uStack_24,0);
    param_2 = extraout_r1_03;
  }
  if (*pcVar3 == '\x02') {
    FUN_00009f48(1,param_2,DAT_0000258c + -0x14,0,&uStack_24,0);
  }
  return 1;
}



/* FUN_0000290c @ 0000290c */

int FUN_0000290c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_000021f0(0,0,DAT_00002990,param_1,param_2,param_2);
  iVar2 = FUN_0000777c(param_1,param_2,&local_20,param_4,param_5);
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



/* FUN_00002994 @ 00002994 */

undefined4
FUN_00002994(short *param_1,undefined4 param_2,undefined4 *param_3,char *param_4,int param_5,
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
    FUN_00009b0c(DAT_00002a80);
  }
  while( true ) {
    if (param_1[uVar5 + 1] == 0) {
      FUN_000021f0(0,0,s_Get_internal_APCB_parameter__Tok_00002ac8,param_1[uVar5],param_2);
      iVar3 = FUN_000077ac(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
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
    iVar3 = FUN_000077ac(param_1[uVar5],param_2,&local_28,param_4,param_6,uVar6);
    if (iVar3 == 0) break;
    if (((uint)local_28 & 0xff) != 1) {
      sVar2 = param_1[uVar5];
      pcVar4 = s_Parent_APCB_parameter_disabled__T_00002a84;
      goto LAB_000029d8;
    }
    uVar5 = uVar5 + 1 & 0xff;
  }
  sVar2 = param_1[uVar5];
  pcVar4 = DAT_00002ac4;
LAB_000029d8:
  FUN_000021f0(0,0,pcVar4,sVar2,param_2);
  return 0;
}



/* FUN_00002b04 @ 00002b04 */

int FUN_00002b04(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *local_20;
  char *pcStack_1c;
  
  local_20 = param_3;
  pcStack_1c = param_4;
  FUN_000021f0(0,0,DAT_00002b88,param_1,param_2,param_2);
  iVar2 = FUN_000077ac(param_1,param_2,&local_20,param_4,param_5);
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



/* FUN_00002b8c @ 00002b8c */

undefined8 FUN_00002b8c(int *param_1,uint param_2,undefined4 param_3,uint param_4)

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
      FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Clock_00002f58,
                   *(undefined4 *)(param_1[1] + 0x2c));
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_0000290c(7,param_2,&local_34,&uStack_30);
    if (iVar2 == 0) break;
    FUN_000021f0(4,0,s_Override_Memory_clock__0x_x_00002f8c,local_34 & 0xff);
    switch(local_34 & 0xff) {
    case 2:
      uVar1 = 0x7d;
      break;
    default:
      FUN_00009b0c(DAT_00002fac);
      goto LAB_00002ca0;
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
LAB_00002ca0:
    *(undefined4 *)(param_1[1] + 0x28) = 2;
    break;
  case 3:
    if (*(char *)((int)param_1 + 0x331) != '\0') {
      if (*(char *)(param_1 + 0x146) != -1) {
        func_0x0000ec8c(param_1,0x1f2);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00002fb0,*(undefined *)(param_1 + 0x146)
                    );
      }
      if (*(char *)((int)param_1 + 0x519) != -1) {
        func_0x0000ec8c(param_1,0x208);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00002fe4,
                     *(undefined *)((int)param_1 + 0x519));
      }
      if (*(char *)((int)param_1 + 0x51a) != -1) {
        func_0x0000ec8c(param_1,0x20b);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003018,
                     *(undefined *)((int)param_1 + 0x51a));
      }
      if (*(char *)((int)param_1 + 0x51b) != -1) {
        func_0x0000ec8c(param_1,0x20c);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_0000304c,
                     *(undefined *)((int)param_1 + 0x51b));
      }
      if (*(char *)(param_1 + 0x147) != -1) {
        func_0x0000ec8c(param_1,0x209);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003080,*(undefined *)(param_1 + 0x147)
                    );
      }
      if (*(char *)((int)param_1 + 0x51d) != -1) {
        func_0x0000ec8c(param_1,0x20a);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_000030b4,
                     *(undefined *)((int)param_1 + 0x51d));
      }
      if (*(char *)((int)param_1 + 0x51e) != -1) {
        func_0x0000ec8c(param_1,0x227);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_000030e8,
                     *(undefined *)((int)param_1 + 0x51e));
      }
      if (*(char *)((int)param_1 + 0x51f) != -1) {
        func_0x0000ec8c(param_1,0x228);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_0000311c,
                     *(undefined *)((int)param_1 + 0x51f));
      }
      if (*(char *)(param_1 + 0x148) != -1) {
        func_0x0000ec8c(param_1,0x22b);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003150,*(undefined *)(param_1 + 0x148)
                    );
      }
      if (*(char *)((int)param_1 + 0x521) != -1) {
        func_0x0000ec8c(param_1,0x22a);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003180,
                     *(undefined *)((int)param_1 + 0x521));
      }
      if (*(char *)((int)param_1 + 0x522) != -1) {
        func_0x0000ec8c(param_1,0x22c);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_000031b4,
                     *(undefined *)((int)param_1 + 0x522));
      }
      if (*(char *)((int)param_1 + 0x523) != -1) {
        func_0x0000ec8c(param_1,0x1f6);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_000031e8,
                     *(undefined *)((int)param_1 + 0x523));
      }
      if (*(short *)(param_1 + 0x149) != -1) {
        func_0x0000ec8c(param_1,0x220);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_0000321c,
                     *(undefined2 *)(param_1 + 0x149));
      }
      if (*(short *)((int)param_1 + 0x526) != -1) {
        func_0x0000ec8c(param_1,0x189);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003250,
                     *(undefined2 *)((int)param_1 + 0x526));
      }
      if (*(short *)(param_1 + 0x14a) != -1) {
        func_0x0000ec8c(param_1,0x18b);
        FUN_000021f0(4,0,s__MEM_CONF__Override_Memory_Timin_00003284,
                     *(undefined2 *)(param_1 + 0x14a));
      }
    }
    iVar2 = FUN_0000290c(8,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TCL___d_000032b8,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x1f2,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_Trcdrd___d_000032cc,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x20b,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0xb,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_Trcdwr___d_000032e4,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x20c,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(9,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_Tras___d_0000353c,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x208,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0xc,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrpAb___d_00003554,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x227,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0xd,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrpPb___d_0000356c,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x228,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0xe,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrcAb___d_00003584,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x209,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0xf,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrcPb___d_0000359c,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x20a,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0x10,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrrdL___d_000035b4,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x22a,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0x11,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_TrrdS___d_000035cc,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x22b,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0x12,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_Trtp___d_000035e4,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x22c,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0x13,param_2,&local_34,&uStack_30,*param_1);
    if (iVar2 != 0) {
      FUN_000021f0(4,0,s_Override_Tfaw___d_000035fc,local_34 & 0xff);
      func_0x0000ec8c(param_1,0x1f6,local_34 & 0xff);
    }
    iVar2 = FUN_0000290c(0x14,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_0000777c(0x15,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x0000ec8c(param_1,0x220,local_2c & 0xffff);
    }
    iVar2 = FUN_0000290c(0x18,param_2,&local_34,&uStack_30,*param_1);
    if (((iVar2 != 0) && ((char)local_34 == '\x01')) &&
       (iVar2 = FUN_0000777c(0x19,param_2,&local_2c,&uStack_30,*param_1), iVar2 != 0)) {
      func_0x0000ec8c(param_1,0x18b,local_2c & 0xffff);
    }
    piVar3 = (int *)*param_1;
    iVar2 = FUN_0000290c(0x16,param_2,&local_34,&uStack_30);
    bVar4 = iVar2 == 0;
    while ((!bVar4 && ((char)local_34 == '\x01'))) {
      piVar3 = (int *)*param_1;
      iVar2 = FUN_0000777c(0x17,param_2,&local_2c,&uStack_30);
      bVar4 = iVar2 == 0;
      if (!bVar4) {
        func_0x0000ec8c(param_1,0x189,local_2c & 0xffff);
        return CONCAT44(local_34,piVar3);
      }
    }
  }
  return CONCAT44(local_34,piVar3);
}



/* FUN_00003614 @ 00003614 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_00003614(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined auStack_88 [40];
  uint local_60;
  byte local_5c [4];
  undefined auStack_58 [4];
  uint local_54;
  uint local_50 [2];
  byte local_48 [4];
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_34;
  undefined4 uStack_2c;
  int local_28;
  
  local_44 = *DAT_00003a00;
  local_34 = local_44;
  uStack_2c = param_1;
  local_28 = param_2;
  if (param_2 == 0xc) {
    local_40 = 3;
    local_3e = 0;
    iVar7 = FUN_00002994(&local_40,0xc,local_5c,auStack_58,0,auStack_88);
    iVar4 = DAT_00003a04;
    if ((iVar7 != 0) && (local_5c[0] == 0)) {
      func_0x0000a860(3,DAT_00003a04,&local_60,auStack_88);
      local_60 = local_60 | 0x80000;
      func_0x0000a92c(3,iVar4,&local_60,auStack_88,1);
    }
    local_40 = 4;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar1 = DAT_00003a08;
    if ((iVar4 != 0) && (local_5c[0] == 0)) {
      func_0x0000a860(3,DAT_00003a08,&local_60,auStack_88);
      local_60 = local_60 | 0x80000;
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 5;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      iVar4 = DAT_00003a04 + -4;
      func_0x0000a860(3,iVar4,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffffe;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 1;
      }
      func_0x0000a92c(3,iVar4,&local_60,auStack_88,1);
    }
    local_40 = 6;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar2 = DAT_00003a0c;
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,DAT_00003a0c,&local_60,auStack_88);
      local_60 = local_60 & 0x7fffffff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x80000000;
      }
      func_0x0000a92c(3,uVar2,&local_60,auStack_88,1);
    }
    local_40 = 0xd;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffffb;
      if (local_5c[0] == 1) {
        local_60 = local_60 | 4;
      }
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 0xe;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xffefffff;
      if (local_5c[0] == 1) {
        local_60 = local_60 | 0x100000;
      }
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 0xf;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 8)) {
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xff1fffff | (uint)local_5c[0] << 0x15;
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 0x10;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar3 = DAT_00003a10;
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,DAT_00003a10,&local_60,auStack_88);
      local_60 = local_60 & 0xffffffcf;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x30;
      }
      func_0x0000a92c(3,uVar3,&local_60,auStack_88,1);
    }
    local_40 = 0x11;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar3 = DAT_00003a14;
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,DAT_00003a14,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffffe;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 1;
      }
      func_0x0000a92c(3,uVar3,&local_60,auStack_88,1);
    }
    local_40 = 0x13;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_48,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_48[0] < 3)) {
      local_40 = 0x14;
      local_3e = 0;
      iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,1,auStack_88);
      uVar3 = DAT_00003a18;
      if ((iVar4 != 0) && (local_5c[0] < 0x40)) {
        if (local_48[0] == 2) {
          func_0x0000a860(3,DAT_00003a18,&local_60,auStack_88);
          local_60 = local_60 & 0xfffc0fff | (uint)local_5c[0] << 0xc;
          func_0x0000a92c(3,uVar3,&local_60,auStack_88,1);
        }
        else {
          if (local_48[0] == 0) {
            uVar3 = 0x28;
          }
          else {
            uVar3 = 0x20;
          }
          func_0x0000a680(auStack_88,3,4,0xc0,uVar3,&local_60);
          local_60 = local_60 & 0xfffc0fff | (uint)local_5c[0] << 0xc;
          if (local_48[0] == 0) {
            uVar3 = 0x28;
          }
          else {
            uVar3 = 0x20;
          }
          func_0x0000a768(auStack_88,3,4,0xc0,uVar3,&local_60);
          if (local_48[0] == 1) {
            func_0x0000a680(auStack_88,3,4,0xc0,0x21,&local_60);
            local_60 = local_60 & 0xfffc0fff | (uint)local_5c[0] << 0xc;
            func_0x0000a768(auStack_88,3,4,0xc0,0x21,&local_60);
          }
        }
      }
    }
    local_40 = 0x5f;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xfeffffff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x1000000;
      }
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 0x15;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar1 = DAT_00004050;
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,DAT_00004050,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffffa;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 5;
      }
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_40 = 0x16;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,uVar2,&local_60,auStack_88);
      local_60 = local_60 & 0xffffffdf;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x20;
      }
      func_0x0000a92c(3,uVar2,&local_60,auStack_88,1);
    }
    local_40 = 0x1d;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] != 3)) {
      func_0x0000a860(3,uVar2,&local_60,auStack_88);
      if (local_5c[0] == 0) {
        local_60 = local_60 | 1;
      }
      else if (local_5c[0] == 1) {
        local_60 = local_60 & 0xfffffffe;
      }
      func_0x0000a92c(3,uVar2,&local_60,auStack_88,1);
    }
    local_40 = 0x1e;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] != 3)) {
      func_0x0000a860(3,uVar2,&local_60,auStack_88);
      if (local_5c[0] == 0) {
        local_60 = local_60 | 2;
      }
      else if (local_5c[0] == 1) {
        local_60 = local_60 & 0xfffffffd;
      }
      func_0x0000a92c(3,uVar2,&local_60,auStack_88,1);
    }
    local_40 = 0x72;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] != 0xf)) {
      func_0x0000a680(auStack_88,3,3,0x4c,0x28,&local_60);
      local_60 = local_60 & 0xfffff7ff;
      if (local_5c[0] == 1) {
        local_60 = local_60 | 0x800;
        FUN_000021f0(4,0,s_IOM_Rogue_Mode_Enabled_00004054);
      }
      func_0x0000a768(auStack_88,3,3,0x4c,0x28,&local_60);
    }
    local_40 = 0x73;
    local_3e = 0x74;
    local_3c = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar1 = DAT_00004070;
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_LvtOffsetVal___d_00004074,local_5c[0]);
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffeff;
      if (local_5c[0] != 0) {
        local_60 = local_60 | 0x100;
      }
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
    local_3e = 0x75;
    local_3c = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_LvtOffset___d_00004094,local_5c[0]);
      func_0x0000a860(3,uVar1,&local_60,auStack_88);
      local_60 = local_60 & 0xfffffff0 | (uint)local_5c[0];
      func_0x0000a92c(3,uVar1,&local_60,auStack_88,1);
    }
  }
  else if (param_2 == 0xd) {
    local_40 = 7;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,0xd,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,0x1ca00,&local_60,auStack_88);
      local_60 = local_60 & 0xffffdfff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x2000;
      }
      func_0x0000a92c(3,0x1ca00,&local_60,auStack_88,1);
    }
    local_40 = 9;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,0x1ca00,&local_60,auStack_88);
      local_60 = local_60 & 0xefffffff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x10000000;
      }
      func_0x0000a92c(3,0x1ca00,&local_60,auStack_88,1);
    }
    local_40 = 10;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,0x1ca00,&local_60,auStack_88);
      local_60 = local_60 & 0xf7ffffff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x8000000;
      }
      func_0x0000a92c(3,0x1ca00,&local_60,auStack_88,1);
    }
    local_40 = 0xb;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] < 2)) {
      func_0x0000a860(3,0x1ca00,&local_60,auStack_88);
      local_60 = local_60 & 0xfbffffff;
      if (local_5c[0] == 0) {
        local_60 = local_60 | 0x4000000;
      }
      func_0x0000a92c(3,0x1ca00,&local_60,auStack_88,1);
    }
    func_0x0000a860(3,DAT_000040b0,&local_60,auStack_88);
  }
  else if (param_2 == 0xe) {
    FUN_000021f0(0x40000000,0,s_Begin_DF_TCB_Trace_VC8_token_set_000040b4);
    iVar4 = FUN_00002b04(0x6e,local_28,local_5c,auStack_58,auStack_88);
    bVar10 = iVar4 == 0;
    do {
      if (bVar10) goto LAB_0000450c;
      bVar10 = local_5c[0] == 0;
    } while (bVar10);
    FUN_000021f0(0x40000000,0,s_It_is_Cardinal_DF_000040dc);
    func_0x0000fc80(0x1c,0,2,0,1);
    func_0x0000fc80(0x1c,1,2,1,1);
    func_0x0000fc80(0x1c,2,0,3,0x13);
    func_0x0000fc80(0x1c,4,0,8,0xb);
    func_0x0000fc80(0xd,0,3,0,1);
    func_0x0000fc80(0xd,1,3,1,1);
    func_0x0000fc80(0xd,2,0,5,0x18);
    func_0x0000fc80(0xd,4,0,10,0xe);
    func_0x0000fc80(0xf,0,3,0,1);
    func_0x0000fc80(0xf,1,3,1,1);
    func_0x0000fc80(0xf,2,0,5,10);
    func_0x0000fc80(0xf,4,0,10,6);
    func_0x0000fc80(0x11,0,4,0,1);
    func_0x0000fc80(0x11,1,4,1,1);
    func_0x0000fc80(0x11,3,0,6,10);
    func_0x0000fc80(0x11,5,0,0xb,7);
    func_0x0000fc80(0x18,0,2,0,1);
    func_0x0000fc80(0x18,1,2,1,1);
    func_0x0000fc80(0x18,2,0,2,0xe);
    func_0x0000fc80(0x18,4,0,7,9);
    func_0x0000fc80(0x19,0,1,0,1);
    func_0x0000fc80(0x19,1,1,1,1);
    func_0x0000fc80(0x19,2,0,3,0xb);
    func_0x0000fc80(0x19,4,0,8,6);
    func_0x0000fc80(0x1d,0,1,0,1);
    func_0x0000fc80(0x1d,1,1,1,1);
    func_0x0000fc80(0x1d,2,0,3,0x13);
    func_0x0000fc80(0x1d,4,0,8,0xb);
    func_0x0000fc80(0xc,0,0,0,1);
    func_0x0000fc80(0xc,1,0,1,1);
    func_0x0000fc80(0xc,2,0,2,0x18);
    func_0x0000fc80(0xc,4,0,7,0xc);
    func_0x0000fc80(0,0,3,0,1);
    func_0x0000fc80(0,1,3,1,1);
    func_0x0000fc80(0,2,0,5,10);
    func_0x0000fc80(0,4,0,10,6);
    func_0x0000fc80(4,0,4,0,1);
    func_0x0000fc80(4,1,4,1,1);
    func_0x0000fc80(4,3,0,6,10);
    func_0x0000fc80(4,5,0,0xb,7);
    func_0x0000fc80(0xe,0,3,0,1);
    func_0x0000fc80(0xe,1,3,1,1);
    func_0x0000fc80(0xe,2,0,5,10);
    func_0x0000fc80(0xe,4,0,10,6);
    func_0x0000fc80(0x10,0,4,0,1);
    func_0x0000fc80(0x10,1,4,1,1);
    func_0x0000fc80(0x10,3,0,6,10);
    func_0x0000fc80(0x10,5,0,0xb,7);
    func_0x0000fc80(1,0,3,0,1);
    func_0x0000fc80(1,1,3,1,1);
    func_0x0000fc80(1,2,0,5,10);
    func_0x0000fc80(1,4,0,10,6);
    func_0x0000fc80(5,0,4,0,1);
    func_0x0000fc80(5,1,4,1,1);
    func_0x0000fc80(5,3,0,6,10);
    func_0x0000fc80(5,5,0,0xb,7);
    func_0x0000fc80(0x12,0,4,0,1);
    func_0x0000fc80(0x12,1,4,1,1);
    func_0x0000fc80(0x12,3,0,6,10);
    func_0x0000fc80(0x12,5,0,0xb,7);
    func_0x0000fc80(2,0,4,0,1);
    func_0x0000fc80(2,1,4,1,1);
    func_0x0000fc80(2,3,0,6,10);
    func_0x0000fc80(2,5,0,0xb,7);
    func_0x0000fc80(0x13,0,4,0,1);
    func_0x0000fc80(0x13,1,4,1,1);
    func_0x0000fc80(0x13,3,0,6,10);
    func_0x0000fc80(0x13,5,0,0xb,7);
    func_0x0000fc80(3,0,4,0,1);
    func_0x0000fc80(3,1,4,1,1);
    func_0x0000fc80(3,3,0,6,10);
    func_0x0000fc80(3,5,0,0xb,7);
    func_0x0000fc80(0x15,0,0,0,1);
    func_0x0000fc80(0x15,1,0,1,1);
    func_0x0000fc80(0x15,2,0,3,0xf);
    func_0x0000fc80(0x15,4,0,8,7);
    func_0x0000fc80(0xb,0,0,0,1);
    func_0x0000fc80(0xb,1,0,1,1);
    func_0x0000fc80(0xb,2,0,3,5);
    func_0x0000fc80(0xb,4,0,8,4);
    func_0x0000fc80(9,0,0,0,1);
    func_0x0000fc80(9,1,0,1,1);
    func_0x0000fc80(9,2,0,2,8);
    func_0x0000fc80(9,4,0,7,4);
    func_0x0000fc80(0x14,0,0,0,1);
    func_0x0000fc80(0x14,1,0,1,1);
    func_0x0000fc80(0x14,2,0,3,0xf);
    func_0x0000fc80(0x14,4,0,8,0xe);
    func_0x0000fc80(10,0,0,0,1);
    func_0x0000fc80(10,1,0,1,1);
    func_0x0000fc80(10,2,0,3,6);
    func_0x0000fc80(10,4,0,8,3);
    iVar4 = DAT_00004898;
    func_0x0000a860(3,DAT_00004898,local_50,auStack_88);
    local_50[0] = (local_50[0] & 0xe0ffffff) + 0x1000000;
    func_0x0000a92c(3,iVar4,local_50,auStack_88,1);
    iVar4 = iVar4 + -4;
    func_0x0000a860(3,iVar4,&local_54,auStack_88);
    local_54 = (local_54 & 0xffffff80) + 0x35;
    func_0x0000a92c(3,iVar4,&local_54,auStack_88,1);
    iVar4 = DAT_00004898 + -0xf4;
    func_0x0000a860(3,iVar4,local_50 + 1,auStack_88);
    local_50[1] = 0x1e0;
    func_0x0000a92c(3,iVar4,local_50 + 1,auStack_88,1);
LAB_0000450c:
    iVar4 = FUN_00002b04(0x6f,local_28,local_5c,auStack_58,auStack_88);
    bVar10 = iVar4 == 0;
    do {
      if (bVar10) goto LAB_00004b34;
      bVar10 = local_5c[0] == 0;
    } while (bVar10);
    FUN_000021f0(0x40000000,0,s_It_is_Cardinal_IOMS_0000489c);
    func_0x0000fc80(10,0,3,0,1);
    func_0x0000fc80(10,1,3,1,1);
    func_0x0000fc80(10,2,0,5,8);
    func_0x0000fc80(10,4,0,10,9);
    func_0x0000fc80(0xb,0,1,0,1);
    func_0x0000fc80(0xb,1,1,1,1);
    func_0x0000fc80(0xb,2,0,3,5);
    func_0x0000fc80(0xb,4,0,8,4);
    func_0x0000fc80(0x15,0,1,0,1);
    func_0x0000fc80(0x15,1,1,1,1);
    func_0x0000fc80(0x15,2,0,3,0xf);
    func_0x0000fc80(0x15,4,0,8,7);
    func_0x0000fc80(0xf,0,2,0,1);
    func_0x0000fc80(0xf,1,2,1,1);
    func_0x0000fc80(0xf,2,0,4,10);
    func_0x0000fc80(0xf,4,0,9,7);
    func_0x0000fc80(0x11,0,4,0,1);
    func_0x0000fc80(0x11,1,4,1,1);
    func_0x0000fc80(0x11,3,0,6,10);
    func_0x0000fc80(0x11,5,0,0xb,7);
    func_0x0000fc80(8,0,0,0,1);
    func_0x0000fc80(8,1,0,1,1);
    func_0x0000fc80(8,2,0,2,0xd);
    func_0x0000fc80(8,4,0,7,9);
    func_0x0000fc80(6,0,0,0,1);
    func_0x0000fc80(6,1,0,1,1);
    func_0x0000fc80(6,2,0,2,0xf);
    func_0x0000fc80(6,4,0,7,0xc);
    func_0x0000fc80(0x16,0,1,0,1);
    func_0x0000fc80(0x16,1,1,1,1);
    func_0x0000fc80(0x16,2,0,3,0xf);
    func_0x0000fc80(0x16,4,0,8,0xe);
    func_0x0000fc80(0,0,2,0,1);
    func_0x0000fc80(0,1,2,1,1);
    func_0x0000fc80(0,2,0,4,10);
    func_0x0000fc80(0,4,0,9,7);
    func_0x0000fc80(4,0,4,0,1);
    func_0x0000fc80(4,1,4,1,1);
    func_0x0000fc80(4,3,0,6,10);
    func_0x0000fc80(4,5,0,0xb,7);
    func_0x0000fc80(0x14,0,1,0,1);
    func_0x0000fc80(0x14,1,1,1,1);
    func_0x0000fc80(0x14,2,0,3,0xf);
    func_0x0000fc80(0x14,4,0,8,0xe);
    func_0x0000fc80(0xe,0,2,0,1);
    func_0x0000fc80(0xe,1,2,1,1);
    func_0x0000fc80(0xe,2,0,4,10);
    func_0x0000fc80(0xe,4,0,9,7);
    func_0x0000fc80(0x10,0,4,0,1);
    func_0x0000fc80(0x10,1,4,1,1);
    func_0x0000fc80(0x10,3,0,6,10);
    func_0x0000fc80(0x10,5,0,0xb,7);
    func_0x0000fc80(9,0,0,0,1);
    func_0x0000fc80(9,1,0,1,1);
    func_0x0000fc80(9,2,0,2,8);
    func_0x0000fc80(9,4,0,7,4);
    func_0x0000fc80(7,0,0,0,1);
    func_0x0000fc80(7,1,0,1,1);
    func_0x0000fc80(7,2,0,2,8);
    func_0x0000fc80(7,4,0,7,6);
    func_0x0000fc80(0x17,0,1,0,1);
    func_0x0000fc80(0x17,1,1,1,1);
    func_0x0000fc80(0x17,2,0,3,0xf);
    func_0x0000fc80(0x17,4,0,8,0xc);
    func_0x0000fc80(1,0,2,0,1);
    func_0x0000fc80(1,1,2,1,1);
    func_0x0000fc80(1,2,0,4,10);
    func_0x0000fc80(1,4,0,9,7);
    func_0x0000fc80(5,0,4,0,1);
    func_0x0000fc80(5,1,4,1,1);
    func_0x0000fc80(5,3,0,6,10);
    func_0x0000fc80(5,5,0,0xb,7);
    func_0x0000fc80(0x12,0,4,0,1);
    func_0x0000fc80(0x12,1,4,1,1);
    func_0x0000fc80(0x12,3,0,6,10);
    func_0x0000fc80(0x12,5,0,0xb,7);
    func_0x0000fc80(2,0,4,0,1);
    func_0x0000fc80(2,1,4,1,1);
    func_0x0000fc80(2,3,0,6,10);
    func_0x0000fc80(2,5,0,0xb,7);
    func_0x0000fc80(0x13,0,4,0,1);
    func_0x0000fc80(0x13,1,4,1,1);
    func_0x0000fc80(0x13,3,0,6,10);
    func_0x0000fc80(0x13,5,0,0xb,7);
    func_0x0000fc80(3,0,4,0,1);
    func_0x0000fc80(3,1,4,1,1);
    func_0x0000fc80(3,3,0,6,10);
    func_0x0000fc80(3,5,0,0xb,7);
    func_0x0000fc80(0xd,0,1,0,1);
    func_0x0000fc80(0xd,1,1,1,1);
    func_0x0000fc80(0xd,2,0,5,0x18);
    func_0x0000fc80(0xd,4,0,10,0xe);
    func_0x0000fc80(0x1c,0,0,0,1);
    func_0x0000fc80(0x1c,1,0,1,1);
    func_0x0000fc80(0x1c,2,0,3,0x13);
    func_0x0000fc80(0x1c,4,0,8,0xb);
    iVar4 = DAT_00004ec0;
    func_0x0000a860(3,DAT_00004ec0,local_50,auStack_88);
    local_50[0] = (local_50[0] & 0xe0ffffff) + 0x1000000;
    func_0x0000a92c(3,iVar4,local_50,auStack_88,1);
    iVar4 = iVar4 + -4;
    func_0x0000a860(3,iVar4,&local_54,auStack_88);
    local_54 = (local_54 & 0xffffff80) + 0x35;
    func_0x0000a92c(3,iVar4,&local_54,auStack_88,1);
    iVar4 = DAT_00004ec0 + -0xf4;
    func_0x0000a860(3,iVar4,local_50 + 1,auStack_88);
    local_50[1] = 0x1e0;
    func_0x0000a92c(3,iVar4,local_50 + 1,auStack_88,1);
LAB_00004b34:
    iVar4 = FUN_00002b04(0x70,local_28,local_5c,auStack_58,auStack_88);
    bVar10 = iVar4 == 0;
    do {
      if (bVar10) goto LAB_00005c32;
      bVar10 = local_5c[0] == 0;
    } while (bVar10);
    FUN_000021f0(0x40000000,0,s_It_is_Cardinal_CS_00004ec4);
    func_0x0000fc80(2,0,0,0,1);
    func_0x0000fc80(2,1,0,1,1);
    func_0x0000fc80(2,2,0,4,10);
    func_0x0000fc80(2,4,0,9,9);
    func_0x0000fc80(0,0,0,0,1);
    func_0x0000fc80(0,1,0,1,1);
    func_0x0000fc80(0,2,0,4,10);
    func_0x0000fc80(0,4,0,9,7);
    func_0x0000fc80(0x16,0,0,0,1);
    func_0x0000fc80(0x16,1,0,1,1);
    func_0x0000fc80(0x16,2,0,3,0xf);
    func_0x0000fc80(0x16,4,0,8,0xe);
    func_0x0000fc80(6,0,1,0,1);
    func_0x0000fc80(6,1,1,1,1);
    func_0x0000fc80(6,2,0,2,0xf);
    func_0x0000fc80(6,4,0,7,0xc);
    func_0x0000fc80(8,0,1,0,1);
    func_0x0000fc80(8,1,1,1,1);
    func_0x0000fc80(8,2,0,2,0xd);
    func_0x0000fc80(8,4,0,7,9);
    func_0x0000fc80(10,0,1,0,1);
    func_0x0000fc80(10,1,1,1,1);
    func_0x0000fc80(10,2,0,3,6);
    func_0x0000fc80(10,4,0,8,3);
    func_0x0000fc80(0xb,0,1,0,1);
    func_0x0000fc80(0xb,1,1,1,1);
    func_0x0000fc80(0xb,2,0,3,5);
    func_0x0000fc80(0xb,4,0,8,4);
    func_0x0000fc80(0x15,0,1,0,1);
    func_0x0000fc80(0x15,1,1,1,1);
    func_0x0000fc80(0x15,2,0,3,0xf);
    func_0x0000fc80(0x15,4,0,8,7);
    func_0x0000fc80(0xf,0,2,0,1);
    func_0x0000fc80(0xf,1,2,1,1);
    func_0x0000fc80(0xf,2,0,4,10);
    func_0x0000fc80(0xf,4,0,9,7);
    func_0x0000fc80(0x11,0,4,0,1);
    func_0x0000fc80(0x11,1,4,1,1);
    func_0x0000fc80(0x11,3,0,6,10);
    func_0x0000fc80(0x11,5,0,0xb,7);
    func_0x0000fc80(4,0,4,0,1);
    func_0x0000fc80(4,1,4,1,1);
    func_0x0000fc80(4,3,0,6,10);
    func_0x0000fc80(4,5,0,0xb,7);
    func_0x0000fc80(0x14,0,1,0,1);
    func_0x0000fc80(0x14,1,1,1,1);
    func_0x0000fc80(0x14,2,0,3,0xf);
    func_0x0000fc80(0x14,4,0,8,0xe);
    func_0x0000fc80(0xe,0,2,0,1);
    func_0x0000fc80(0xe,1,2,1,1);
    func_0x0000fc80(0xe,2,0,4,10);
    func_0x0000fc80(0xe,4,0,9,7);
    func_0x0000fc80(0x10,0,4,0,1);
    func_0x0000fc80(0x10,1,4,1,1);
    func_0x0000fc80(0x10,3,0,6,10);
    func_0x0000fc80(0x10,5,0,0xb,7);
    func_0x0000fc80(0x17,0,2,0,1);
    func_0x0000fc80(0x17,1,2,1,1);
    func_0x0000fc80(0x17,2,0,3,0xf);
    func_0x0000fc80(0x17,4,0,8,0xc);
    func_0x0000fc80(1,0,2,0,1);
    func_0x0000fc80(1,1,2,1,1);
    func_0x0000fc80(1,2,0,4,10);
    func_0x0000fc80(1,4,0,9,7);
    func_0x0000fc80(5,0,4,0,1);
    func_0x0000fc80(5,1,4,1,1);
    func_0x0000fc80(5,3,0,6,10);
    func_0x0000fc80(5,5,0,0xb,7);
    func_0x0000fc80(0x15,0,2,0,1);
    func_0x0000fc80(0x15,1,2,1,1);
    func_0x0000fc80(0x15,2,0,3,0xf);
    func_0x0000fc80(0x15,4,0,8,7);
    func_0x0000fc80(0x12,0,4,0,1);
    func_0x0000fc80(0x12,1,4,1,1);
    func_0x0000fc80(0x12,3,0,6,10);
    func_0x0000fc80(0x12,5,0,0xb,7);
    func_0x0000fc80(0x13,0,4,0,1);
    func_0x0000fc80(0x13,1,4,1,1);
    func_0x0000fc80(0x13,3,0,6,10);
    func_0x0000fc80(0x13,5,0,0xb,7);
    func_0x0000fc80(3,0,4,0,1);
    func_0x0000fc80(3,1,4,1,1);
    func_0x0000fc80(3,3,0,6,10);
    func_0x0000fc80(3,5,0,0xb,7);
    func_0x0000fc80(0xc,0,1,0,1);
    func_0x0000fc80(0xc,1,1,1,1);
    func_0x0000fc80(0xc,2,0,2,0x18);
    func_0x0000fc80(0xc,4,0,7,0xc);
    func_0x0000fc80(0x1d,0,0,0,1);
    func_0x0000fc80(0x1d,1,0,1,1);
    func_0x0000fc80(0x1d,2,0,3,0x13);
    func_0x0000fc80(0x1d,4,0,8,0xb);
    func_0x0000fc80(0x19,0,2,0,1);
    func_0x0000fc80(0x19,1,2,1,1);
    func_0x0000fc80(0x19,2,0,2,0xe);
    func_0x0000fc80(0x19,4,0,7,9);
    func_0x0000fc80(0x18,0,1,0,1);
    func_0x0000fc80(0x18,1,1,1,1);
    func_0x0000fc80(0x18,2,0,3,0xb);
    func_0x0000fc80(0x18,4,0,8,6);
    func_0x0000fc80(2,0,1,0,1);
    func_0x0000fc80(2,1,1,1,1);
    func_0x0000fc80(2,2,0,4,10);
    func_0x0000fc80(2,4,0,9,9);
    func_0x0000fc80(3,0,0,0,1);
    func_0x0000fc80(3,1,0,1,1);
    func_0x0000fc80(3,2,0,4,10);
    func_0x0000fc80(3,4,0,9,9);
    func_0x0000fc80(1,0,0,0,1);
    func_0x0000fc80(1,1,0,1,1);
    func_0x0000fc80(1,2,0,4,10);
    func_0x0000fc80(1,4,0,9,7);
    func_0x0000fc80(0x17,0,0,0,1);
    func_0x0000fc80(0x17,1,0,1,1);
    func_0x0000fc80(0x17,2,0,3,0xf);
    func_0x0000fc80(0x17,4,0,8,0xc);
    func_0x0000fc80(7,0,2,0,1);
    func_0x0000fc80(7,1,2,1,1);
    func_0x0000fc80(7,2,0,2,8);
    func_0x0000fc80(7,4,0,7,6);
    func_0x0000fc80(9,0,2,0,1);
    func_0x0000fc80(9,1,2,1,1);
    func_0x0000fc80(9,2,0,2,8);
    func_0x0000fc80(9,4,0,7,4);
    func_0x0000fc80(0xb,0,2,0,1);
    func_0x0000fc80(0xb,1,2,1,1);
    func_0x0000fc80(0xb,2,0,4,5);
    func_0x0000fc80(0xb,4,0,9,3);
    func_0x0000fc80(0x16,0,2,0,1);
    func_0x0000fc80(0x16,1,2,1,1);
    func_0x0000fc80(0x16,2,0,3,0xf);
    func_0x0000fc80(0x16,4,0,8,0xe);
    func_0x0000fc80(0,0,2,0,1);
    func_0x0000fc80(0,1,2,1,1);
    func_0x0000fc80(0,2,0,4,10);
    func_0x0000fc80(0,4,0,9,7);
    func_0x0000fc80(2,0,4,0,1);
    func_0x0000fc80(2,1,4,1,1);
    func_0x0000fc80(2,3,0,6,10);
    func_0x0000fc80(2,5,0,0xb,7);
    func_0x0000fc80(0xc,0,2,0,1);
    func_0x0000fc80(0xc,1,2,1,1);
    func_0x0000fc80(0xc,2,0,2,0x18);
    func_0x0000fc80(0xc,4,0,7,0xc);
    func_0x0000fc80(3,0,1,0,1);
    func_0x0000fc80(3,1,1,1,1);
    func_0x0000fc80(3,2,0,4,10);
    func_0x0000fc80(3,4,0,9,9);
    func_0x0000fc80(4,0,0,0,1);
    func_0x0000fc80(4,1,0,1,1);
    func_0x0000fc80(4,2,0,4,10);
    func_0x0000fc80(4,4,0,9,9);
    func_0x0000fc80(0,0,1,0,1);
    func_0x0000fc80(0,1,1,1,1);
    func_0x0000fc80(0,2,0,4,10);
    func_0x0000fc80(0,4,0,9,7);
    func_0x0000fc80(4,0,1,0,1);
    func_0x0000fc80(4,1,1,1,1);
    func_0x0000fc80(4,2,0,4,10);
    func_0x0000fc80(4,4,0,9,9);
    func_0x0000fc80(5,0,0,0,1);
    func_0x0000fc80(5,1,0,1,1);
    func_0x0000fc80(5,2,0,4,10);
    func_0x0000fc80(5,4,0,9,9);
    func_0x0000fc80(1,0,1,0,1);
    func_0x0000fc80(1,1,1,1,1);
    func_0x0000fc80(1,2,0,4,10);
    func_0x0000fc80(1,4,0,9,7);
    func_0x0000fc80(5,0,1,0,1);
    func_0x0000fc80(5,1,1,1,1);
    func_0x0000fc80(5,2,0,4,10);
    func_0x0000fc80(5,4,0,9,9);
    func_0x0000fc80(0x10,0,0,0,1);
    func_0x0000fc80(0x10,1,0,1,1);
    func_0x0000fc80(0x10,2,0,4,10);
    func_0x0000fc80(0x10,4,0,9,9);
    func_0x0000fc80(0xe,0,0,0,1);
    func_0x0000fc80(0xe,1,0,1,1);
    func_0x0000fc80(0xe,2,0,4,10);
    func_0x0000fc80(0xe,4,0,9,7);
    func_0x0000fc80(0x14,0,0,0,1);
    func_0x0000fc80(0x14,1,0,1,1);
    func_0x0000fc80(0x14,2,0,3,0xf);
    func_0x0000fc80(0x14,4,0,8,0xe);
    func_0x0000fc80(10,0,0,0,1);
    func_0x0000fc80(10,1,0,1,1);
    func_0x0000fc80(10,2,0,3,6);
    func_0x0000fc80(10,4,0,8,3);
    func_0x0000fc80(8,0,0,0,1);
    func_0x0000fc80(8,1,0,1,1);
    func_0x0000fc80(8,2,0,2,0xd);
    func_0x0000fc80(8,4,0,7,9);
    func_0x0000fc80(6,0,0,0,1);
    func_0x0000fc80(6,1,0,1,1);
    func_0x0000fc80(6,2,0,2,0xf);
    func_0x0000fc80(6,4,0,7,0xc);
    func_0x0000fc80(0x16,0,1,0,1);
    func_0x0000fc80(0x16,1,1,1,1);
    func_0x0000fc80(0x16,2,0,3,0xf);
    func_0x0000fc80(0x16,4,0,8,0xe);
    func_0x0000fc80(0xd,0,1,0,1);
    func_0x0000fc80(0xd,1,1,1,1);
    func_0x0000fc80(0xd,2,0,5,0x18);
    func_0x0000fc80(0xd,4,0,10,0xe);
    func_0x0000fc80(0x1c,0,0,0,1);
    func_0x0000fc80(0x1c,1,0,1,1);
    func_0x0000fc80(0x1c,2,0,3,0x13);
    func_0x0000fc80(0x1c,4,0,8,0xb);
    func_0x0000fc80(0x18,0,2,0,1);
    func_0x0000fc80(0x18,1,2,1,1);
    func_0x0000fc80(0x18,2,0,2,0xe);
    func_0x0000fc80(0x18,4,0,7,9);
    func_0x0000fc80(0x19,0,1,0,1);
    func_0x0000fc80(0x19,1,1,1,1);
    func_0x0000fc80(0x19,2,0,3,0xb);
    func_0x0000fc80(0x19,4,0,8,6);
    func_0x0000fc80(0x10,0,1,0,1);
    func_0x0000fc80(0x10,1,1,1,1);
    func_0x0000fc80(0x10,2,0,4,10);
    func_0x0000fc80(0x10,4,0,9,9);
    func_0x0000fc80(0x11,0,0,0,1);
    func_0x0000fc80(0x11,1,0,1,1);
    func_0x0000fc80(0x11,2,0,4,10);
    func_0x0000fc80(0x11,4,0,9,9);
    func_0x0000fc80(0xf,0,0,0,1);
    func_0x0000fc80(0xf,1,0,1,1);
    func_0x0000fc80(0xf,2,0,4,10);
    func_0x0000fc80(0xf,4,0,9,7);
    func_0x0000fc80(0x15,0,0,0,1);
    func_0x0000fc80(0x15,1,0,1,1);
    func_0x0000fc80(0x15,2,0,3,0xf);
    func_0x0000fc80(0x15,4,0,8,7);
    func_0x0000fc80(0x14,0,2,0,1);
    func_0x0000fc80(0x14,1,2,1,1);
    func_0x0000fc80(0x14,2,0,3,0xf);
    func_0x0000fc80(0x14,4,0,8,0xe);
    func_0x0000fc80(0xb,0,0,0,1);
    func_0x0000fc80(0xb,1,0,1,1);
    func_0x0000fc80(0xb,2,0,3,5);
    func_0x0000fc80(0xb,4,0,8,4);
    func_0x0000fc80(9,0,0,0,1);
    func_0x0000fc80(9,1,0,1,1);
    func_0x0000fc80(9,2,0,2,8);
    func_0x0000fc80(9,4,0,7,4);
    func_0x0000fc80(7,0,0,0,1);
    func_0x0000fc80(7,1,0,1,1);
    func_0x0000fc80(7,2,0,2,8);
    func_0x0000fc80(7,4,0,7,6);
    func_0x0000fc80(0x17,0,1,0,1);
    func_0x0000fc80(0x17,1,1,1,1);
    func_0x0000fc80(0x17,2,0,3,0xf);
    func_0x0000fc80(0x17,4,0,8,0xc);
    func_0x0000fc80(0xd,0,2,0,1);
    func_0x0000fc80(0xd,1,2,1,1);
    func_0x0000fc80(0xd,2,0,5,0x18);
    func_0x0000fc80(0xd,4,0,10,0xe);
    func_0x0000fc80(0x11,0,1,0,1);
    func_0x0000fc80(0x11,1,1,1,1);
    func_0x0000fc80(0x11,2,0,4,10);
    func_0x0000fc80(0x11,4,0,9,9);
    func_0x0000fc80(0x12,0,0,0,1);
    func_0x0000fc80(0x12,1,0,1,1);
    func_0x0000fc80(0x12,2,0,4,10);
    func_0x0000fc80(0x12,4,0,9,9);
    func_0x0000fc80(0xf,0,1,0,1);
    func_0x0000fc80(0xf,1,1,1,1);
    func_0x0000fc80(0xf,2,0,4,10);
    func_0x0000fc80(0xf,4,0,9,7);
    func_0x0000fc80(0x12,0,1,0,1);
    func_0x0000fc80(0x12,1,1,1,1);
    func_0x0000fc80(0x12,2,0,4,10);
    func_0x0000fc80(0x12,4,0,9,9);
    func_0x0000fc80(0x13,0,0,0,1);
    func_0x0000fc80(0x13,1,0,1,1);
    func_0x0000fc80(0x13,2,0,4,10);
    func_0x0000fc80(0x13,4,0,9,9);
    func_0x0000fc80(0xe,0,1,0,1);
    func_0x0000fc80(0xe,1,1,1,1);
    func_0x0000fc80(0xe,2,0,4,10);
    func_0x0000fc80(0xe,4,0,9,7);
    func_0x0000fc80(0x13,0,1,0,1);
    func_0x0000fc80(0x13,1,1,1,1);
    func_0x0000fc80(0x13,2,0,4,10);
    func_0x0000fc80(0x13,4,0,9,9);
    iVar4 = DAT_00005ddc;
    func_0x0000a860(3,DAT_00005ddc,local_50,auStack_88);
    local_50[0] = (local_50[0] & 0xe0ffffff) + 0x1000000;
    func_0x0000a92c(3,iVar4,local_50,auStack_88,1);
    iVar4 = iVar4 + -4;
    func_0x0000a860(3,iVar4,&local_54,auStack_88);
    local_54 = (local_54 & 0xffffff80) + 0x35;
    func_0x0000a92c(3,iVar4,&local_54,auStack_88,1);
    iVar4 = DAT_00005ddc + -0xf4;
    func_0x0000a860(3,iVar4,local_50 + 1,auStack_88);
    local_50[1] = 0x1e0;
    func_0x0000a92c(3,iVar4,local_50 + 1,auStack_88,1);
LAB_00005c32:
    local_40 = 0x19;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] == 0)) {
      uVar9 = 0;
      do {
        func_0x0000a680(auStack_88,3,1,0xec,uVar9 + 0x2a,&local_60);
        uVar5 = 0;
        do {
          uVar8 = uVar5 * 4 + 8;
          uVar6 = 0xf << (uVar8 & 0xff);
          uVar8 = 1 << (uVar8 & 0xff);
          if (uVar8 < (local_60 & uVar6)) {
            local_60 = local_60 & ~uVar6 | uVar8;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 5);
        func_0x0000a768(auStack_88,3,1,0xec,uVar9 + 0x2a,&local_60);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 7);
    }
    local_40 = 0x1a;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    if ((iVar4 != 0) && (local_5c[0] == 0)) {
      uVar9 = 0;
      do {
        func_0x0000a680(auStack_88,3,1,0xfc,uVar9 + 0x2a,&local_60);
        uVar5 = 0;
        do {
          uVar8 = uVar5 * 4 + 8;
          uVar6 = 0xf << (uVar8 & 0xff);
          uVar8 = 1 << (uVar8 & 0xff);
          if (uVar8 < (local_60 & uVar6)) {
            local_60 = local_60 & ~uVar6 | uVar8;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 5);
        func_0x0000a768(auStack_88,3,1,0xfc,uVar9 + 0x2a,&local_60);
        uVar9 = uVar9 + 1;
      } while (uVar9 < 7);
    }
    local_40 = 0x1b;
    local_3e = 0;
    iVar4 = FUN_00002994(&local_40,local_28,local_5c,auStack_58,0,auStack_88);
    uVar9 = DAT_00005de0;
    if ((iVar4 != 0) && (local_5c[0] == 0)) {
      uVar5 = 0;
      do {
        func_0x0000a680(auStack_88,3,1,0xf4,uVar5 + 0x2a,&local_60);
        local_60 = local_60 & uVar9;
        uVar6 = 0;
        do {
          iVar4 = uVar6 * 4;
          if (uVar5 == 5) {
            if (uVar6 == 0) goto LAB_00005dd0;
LAB_00005d98:
            iVar7 = 1;
          }
          else {
            if (uVar5 == 6) {
              if (uVar6 == 2) goto LAB_00005dd0;
              goto LAB_00005d98;
            }
            if ((uVar5 != 2) || (uVar6 != 1)) goto LAB_00005d98;
LAB_00005dd0:
            iVar7 = 2;
          }
          uVar6 = uVar6 + 1;
          local_60 = iVar7 << (iVar4 + 8U & 0xff) | local_60;
        } while (uVar6 < 5);
        func_0x0000a768(auStack_88,3,1,0xf4,uVar5 + 0x2a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 7);
    }
  }
  if (local_34 == local_44) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_00005de4 @ 00005de4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005de4(undefined4 *param_1,undefined4 param_2)

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
  
  iVar5 = *DAT_000061e8;
  local_30 = iVar5;
  puStack_2c = param_1;
  local_28 = param_2;
  switch(param_2) {
  case 2:
    local_3c = 0x20;
    local_3a = 0x21;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_UclkDiv1_M0___d_000061ec,local_74[0]);
    }
    local_3a = 0x22;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_UclkDiv1_M1___d_00006208,local_74[0]);
    }
    local_3a = 0x23;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_UclkDiv1_M2___d_00006224,local_74[0]);
    }
    local_3a = 0x24;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_UclkDiv1_M3___d_00006240,local_74[0]);
    }
    break;
  case 3:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    goto switchD_00005e12_caseD_3;
  case 4:
    local_3c = 0x20;
    local_3a = 0x27;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwtrL___d_0000625c,local_74[0]);
      func_0x0000ec8c(param_1,0x23f,local_74[0]);
    }
    local_3a = 0x28;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwtrS___d_00006274,local_74[0]);
      func_0x0000ec8c(param_1,0x240,local_74[0]);
    }
    local_3a = 0x2f;
    local_38 = 0x30;
    iVar4 = FUN_00002994(&local_3c,local_28,local_6c,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Tcksrx__0x_x_0000628c,local_6c[0]);
      func_0x0000ec8c(param_1,0x5cd,local_6c[0]);
    }
    local_3a = 0x31;
    local_38 = 0x32;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Tcksre__0x_x_000062a8,local_74[0]);
      func_0x0000ec8c(param_1,0x5cc,local_74[0]);
    }
    local_3a = 0x33;
    local_38 = 0x34;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Tpd__0x_x_000062c4,local_74[0]);
      func_0x0000ec8c(param_1,0x203,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x35,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_BFDisDynAdrTri___d_000062dc,local_74[0]);
      func_0x0000ec8c(param_1,0x5f7,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x39,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_CmdThrottleMode_Control_000062fc,local_74[0]);
      func_0x0000ec8c(param_1,0x155,local_74[0]);
    }
    local_3c = 0x39;
    local_3a = 0x3a;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_CmdThrottleMode__OdtsCm_00006338,local_74[0]);
      func_0x0000ec8c(param_1,0x154,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x3b,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Write_CRC_Enable__WrCrc_0000636c,local_74[0]);
      func_0x0000ec8c(param_1,0x259,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x3d,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_MEM_Hardware_Hisrory__E_00006398,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x3e,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Command_Parity_En__CmdP_000063d4,local_74[0]);
      func_0x0000ec8c(param_1,0x54,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x3f,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_RCD_Parity__RDimmParEn__00006404,local_74[0]);
      func_0x0000ec8c(param_1,0x1a5,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x40,local_28,local_74,auStack_70,*param_1);
    if (iVar4 == 0) break;
    FUN_000021f0(4,0,s_Override_DBI__WrDbiEn____d_0000642c,local_74[0]);
    uVar7 = (uint)local_74[0];
    uVar6 = 0x25c;
    goto LAB_0000702e;
  case 7:
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x80;
    do {
      local_3a = (short)uVar8 + 0x81;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0x89;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        uVar1 = func_0x0000b650(param_1);
        func_0x0000ec8c(param_1,uVar8 + 0x2b9,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    local_3a = 0x88;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = local_78;
    }
    local_3a = 0x90;
    iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
    uVar8 = local_78;
    if (iVar4 != 0) {
      uVar2 = func_0x0000b650(param_1,0x2c2);
      func_0x0000ec8c(param_1,0x2c2,uVar2 & ~uVar7 | uVar8);
    }
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x91;
    do {
      local_3a = (short)uVar8 + 0x92;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0xa2;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000ec8c(param_1,0x4a5,uVar8 * 4 + 0xfe00);
        uVar1 = func_0x0000b650(param_1,0x4a6);
        func_0x0000ec8c(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x10);
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0xb2;
    do {
      local_3a = (short)uVar8 + 0xb3;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 200;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000ec8c(param_1,0x4a5,uVar8 * 4 + 0xfe40);
        uVar1 = func_0x0000b650(param_1,0x4a6);
        func_0x0000ec8c(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x15);
    local_3c = 0xdd;
    local_3a = 0xde;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      if (local_74[0] == 0) {
        local_3a = 0xdf;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0xe7;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar8 = local_78;
        if (iVar4 != 0) {
          func_0x0000ec8c(param_1,0x4a5,0xfe4c);
          uVar2 = func_0x0000b650(param_1,0x4a6);
          uVar8 = uVar2 & ~uVar7 | uVar8;
LAB_00006694:
          func_0x0000ec8c(param_1,0x4a6,uVar8);
        }
      }
      else if (local_74[0] == 1) {
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xdf;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xe7;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        uVar8 = local_78;
        if (iVar4 != 0) {
          func_0x0000ec8c(param_1,0x4a5,0xfe4c);
          uVar2 = func_0x0000b650(param_1,0x4a6);
          uVar8 = uVar2 & ~uVar7 | uVar8;
          goto LAB_00006694;
        }
      }
    }
    local_3c = 0xef;
    local_3a = 0xf0;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = 0;
      if (local_74[0] == 0) {
        local_3a = 0xf1;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0xf9;
      }
      else {
        if (local_74[0] != 1) goto LAB_00006764;
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xf1;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0xf9;
      }
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar8 = local_78;
      if (iVar4 != 0) {
        func_0x0000ec8c(param_1,0x4a5,0xfe50);
        uVar2 = func_0x0000b650(param_1,0x4a6);
        func_0x0000ec8c(param_1,0x4a6,uVar2 & ~uVar7 | uVar8);
      }
    }
LAB_00006764:
    local_3c = 0x101;
    local_3a = 0x102;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      uVar7 = 0;
      if (local_74[0] == 0) {
        local_3a = 0x103;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = 0x10b;
      }
      else {
        if (local_74[0] != 1) goto LAB_00006834;
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0x103;
        iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
        if (iVar4 != 0) {
          uVar7 = local_78;
        }
        local_3a = (*(byte *)((int)param_1 + 0x49) >> 1) + 0x10b;
      }
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar8 = local_78;
      if (iVar4 != 0) {
        func_0x0000ec8c(param_1,0x4a5,0xfe78);
        uVar2 = func_0x0000b650(param_1,0x4a6);
        func_0x0000ec8c(param_1,0x4a6,uVar2 & ~uVar7 | uVar8);
      }
    }
LAB_00006834:
    uVar7 = 0;
    uVar8 = 0;
    local_3c = 0x113;
    do {
      local_3a = (short)uVar8 + 0x114;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = (short)uVar8 + 0x11f;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      uVar2 = local_78;
      if (iVar4 != 0) {
        func_0x0000ec8c(param_1,0x4a5,uVar8 * 4 + 0xff84);
        uVar1 = func_0x0000b650(param_1,0x4a6);
        func_0x0000ec8c(param_1,0x4a6,uVar1 & ~uVar7 | uVar2);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0xb);
    iVar4 = param_1[0xac];
    uVar7 = 0;
    if (iVar4 == 0) {
      local_3c = 0x13b;
      local_3a = 0x13c;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x13d;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2c7);
        func_0x0000ec8c(param_1,0x2c7,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x145;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x146;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2c6);
        func_0x0000ec8c(param_1,0x2c6,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x14e;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14f;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2c8);
        func_0x0000ec8c(param_1,0x2c8,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x157;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x158;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2c9;
LAB_00006f02:
        uVar8 = func_0x0000b650(param_1,uVar6);
        func_0x0000ec8c(param_1,uVar6,uVar8 & ~uVar7 | local_78);
      }
    }
    else if (iVar4 == 1) {
      local_3c = 0x13b;
      local_3a = 0x13e;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x13f;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2ce);
        func_0x0000ec8c(param_1,0x2ce,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x147;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x148;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2cd);
        func_0x0000ec8c(param_1,0x2cd,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x150;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x151;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2cf);
        func_0x0000ec8c(param_1,0x2cf,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x159;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15a;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2d0;
        goto LAB_00006f02;
      }
    }
    else if (iVar4 == 2) {
      local_3c = 0x13b;
      local_3a = 0x140;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x141;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2d5);
        func_0x0000ec8c(param_1,0x2d5,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x149;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14a;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2d4);
        func_0x0000ec8c(param_1,0x2d4,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x152;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x153;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2d6);
        func_0x0000ec8c(param_1,0x2d6,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x15b;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15c;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2d7;
        goto LAB_00006f02;
      }
    }
    else if (iVar4 == 3) {
      local_3c = 0x13b;
      local_3a = 0x142;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x143;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2dc);
        func_0x0000ec8c(param_1,0x2dc,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x144;
      local_3a = 0x14b;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x14c;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2db);
        func_0x0000ec8c(param_1,0x2db,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x14d;
      local_3a = 0x154;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x155;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar8 = func_0x0000b650(param_1,0x2dd);
        func_0x0000ec8c(param_1,0x2dd,uVar8 & ~uVar7 | local_78);
      }
      local_3c = 0x156;
      local_3a = 0x15d;
      local_38 = 0;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar7 = local_78;
      }
      local_3a = 0x15e;
      iVar4 = FUN_00002994(&local_3c,local_28,&local_78,auStack_70,1,*param_1);
      if (iVar4 != 0) {
        uVar6 = 0x2de;
        goto LAB_00006f02;
      }
    }
    else {
      FUN_00009b0c(DAT_00006cd0);
    }
    iVar4 = FUN_00002b04(0x76,local_28,local_74,auStack_70,*param_1);
    if ((iVar4 != 0) &&
       (FUN_000021f0(4,0,s_Override_APCB_TOKEN_CBS_DBG_MEM__00006cd4,local_74[0]), local_74[0] == 0)
       ) {
      iVar4 = FUN_00002b04(0x78,local_28,local_6c,auStack_70,*param_1);
      if (iVar4 != 0) {
        FUN_000021f0(4,0,s_Override_APCB_TOKEN_CBS_DBG_MEM__0000730c,local_6c[0]);
        func_0x0000ec8c(param_1,0x651,local_6c[0]);
      }
      func_0x0000ec8c(param_1,0x123,1);
      func_0x0000ec8c(param_1,0x122,1);
      local_78 = func_0x0000b650(param_1,0x2b9);
      local_78 = local_78 | 1;
      func_0x0000ec8c(param_1,0x2b9);
      iVar4 = FUN_00002b04(0x77,local_28,local_74,auStack_70,*param_1);
      if (iVar4 == 0) break;
      if (local_74[0] == 0) {
        func_0x0000ec8c(param_1,0x650,1);
        local_78 = func_0x0000b650(param_1,0x2c9);
        local_78 = local_78 | 0x80;
        func_0x0000ec8c(param_1,0x2c9);
        local_78 = func_0x0000b650(param_1,0x2d0);
        local_78 = local_78 | 0x80;
        func_0x0000ec8c(param_1,0x2d0);
        local_78 = func_0x0000b650(param_1,0x2d7);
        local_78 = local_78 | 0x80;
        func_0x0000ec8c(param_1,0x2d7);
        local_78 = func_0x0000b650(param_1,0x2de);
        local_78 = local_78 | 0x80;
        func_0x0000ec8c(param_1,0x2de);
        iVar4 = func_0x0000b650(param_1,0x220);
        iVar3 = func_0x0000b650(param_1,0x189);
        uVar7 = (uint)(iVar4 - iVar3) >> 3;
      }
      else {
        if (local_74[0] != 1) break;
        func_0x0000ec8c(param_1,0x650,0);
        iVar4 = func_0x0000b650(param_1,0x220);
        iVar3 = func_0x0000b650(param_1,0x189);
        uVar7 = (uint)(iVar4 - iVar3) >> 4;
      }
      uVar6 = 0x624;
      local_78 = uVar7;
      goto LAB_0000702e;
    }
    goto switchD_00005e12_caseD_3;
  case 8:
    local_3c = 0x20;
    local_3a = 0x27;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,param_2,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwtrL___d_0000625c,local_74[0]);
      func_0x0000ec8c(param_1,0x23f,local_74[0]);
    }
    local_3a = 0x28;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwtrS___d_00006274,local_74[0]);
      func_0x0000ec8c(param_1,0x240,local_74[0]);
    }
    local_3a = 0x29;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwrwrSc___d_00007348,local_74[0]);
      func_0x0000ec8c(param_1,0x23b,local_74[0]);
    }
    local_3a = 0x2a;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwrwrSd___d_00007360,local_74[0]);
      func_0x0000ec8c(param_1,0x23e,local_74[0]);
    }
    local_3a = 0x2b;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TwrwrDd___d_00007378,local_74[0]);
    }
    local_3a = 0x2c;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TrdrdSc___d_00007390,local_74[0]);
      func_0x0000ec8c(param_1,0x219,local_74[0]);
    }
    local_3a = 0x2d;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TrdrdSd___d_000073a8,local_74[0]);
      func_0x0000ec8c(param_1,0x21c,local_74[0]);
    }
    local_3a = 0x2e;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_TrdrdDd___d_000073c0,local_74[0]);
      func_0x0000ec8c(param_1,0x218,local_74[0]);
    }
    local_3a = 0x25;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Trdwr___d_000073d8,local_74[0]);
      func_0x0000ec8c(param_1,0x21d,local_74[0]);
    }
    local_3a = 0x26;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Twrrd___d_000073f0,local_74[0]);
      func_0x0000ec8c(param_1,0x237,local_74[0]);
    }
    iVar4 = FUN_00002b04(0x47,local_28,local_74,auStack_70,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Power_Down_Enable___d_00007408,local_74[0]);
      func_0x0000ec8c(param_1,0x1a1,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x48;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Power_Down_Mode___d_0000742c,local_74[0]);
      func_0x0000ec8c(param_1,0x1a2,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x49;
    local_38 = 0x4a;
    local_36 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Power_Down_Delay___d_00007668,local_74[0]);
      func_0x0000ec8c(param_1,0x1a0,local_74[0]);
    }
    local_3c = 0x47;
    local_3a = 0x4b;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Aggressive_Power_Down_E_0000768c,local_74[0]);
      func_0x0000ec8c(param_1,9,local_74[0]);
    }
    local_3c = 0x47;
    local_38 = 0x4c;
    local_3a = 0x4b;
    local_36 = 0x4d;
    local_34 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,1,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Override_Aggressive_Power_Down_D_000076bc,local_74[0]);
      func_0x0000ec8c(param_1,8,local_74[0]);
    }
    local_3c = 0x7a;
    local_3a = 0x7b;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 != 0) {
      FUN_000021f0(4,0,s_Additional_CAS_CAS_Delay_Cycles__000076e8,local_74[0]);
      iVar4 = func_0x0000b650(param_1,0x219);
      func_0x0000ec8c(param_1,0x219,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000b650(param_1,0x21b);
      func_0x0000ec8c(param_1,0x21b,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000b650(param_1,0x23a);
      func_0x0000ec8c(param_1,0x23a,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000b650(param_1,0x23b);
      func_0x0000ec8c(param_1,0x23b,iVar4 + (uint)local_74[0]);
      iVar4 = func_0x0000b650(param_1,0x23d);
      func_0x0000ec8c(param_1,0x23d,iVar4 + (uint)local_74[0]);
    }
    local_3c = 0x7c;
    local_3a = 0x7d;
    local_38 = 0;
    iVar4 = FUN_00002994(&local_3c,local_28,local_74,auStack_70,0,*param_1);
    if (iVar4 == 0) break;
    FUN_000021f0(4,0,s_Additional_Read_to_Write_Turnaro_00007710,local_74[0]);
    uVar6 = 0x21d;
    iVar4 = func_0x0000b650(param_1,0x21d);
    uVar7 = iVar4 + (uint)local_74[0];
    goto LAB_0000702e;
  case 9:
    iVar4 = FUN_00002b04(0x38,param_2,local_74,auStack_70,*param_1);
    if (iVar4 == 0) break;
    FUN_000021f0(4,0,s_Override_OnDimmTemperatureSensor_00007744,local_74[0]);
    uVar7 = (uint)local_74[0];
    uVar6 = 0x157;
LAB_0000702e:
    func_0x0000ec8c(param_1,uVar6,uVar7);
    break;
  case 0xe:
    local_3c = 0x71;
    local_3a = 0;
    iVar4 = FUN_00002994(&local_3c,param_2,local_74,auStack_70,0,auStack_68);
    if ((iVar4 != 0) && (local_74[0] == 1)) {
      FUN_000021f0(4,0,DAT_00007774);
      uVar6 = DAT_00007778;
      do {
        func_0x0000a860(3,uVar6,&local_40,auStack_68);
      } while (local_40 != 0xf);
    }
  }
switchD_00005e12_caseD_d:
  if (local_30 == iVar5) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
switchD_00005e12_caseD_3:
  goto switchD_00005e12_caseD_d;
}



/* FUN_0000777c @ 0000777c */

undefined4
FUN_0000777c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x1e) {
    uVar1 = FUN_00007978(0xd,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_00009b0c(DAT_000077a8);
  return 0;
}



/* FUN_000077ac @ 000077ac */

undefined4
FUN_000077ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 0x161) {
    uVar1 = FUN_00007978(0xf,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_00009b0c(DAT_000077d8);
  return 0;
}



/* FUN_000077dc @ 000077dc */

int FUN_000077dc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort local_38 [12];
  
  FUN_0000013c(local_38,DAT_000078c4,0x14);
  uVar3 = 0;
  while ((local_38[uVar3 * 2] != param_1 ||
         (iVar1 = FUN_0000777c(local_38[uVar3 * 2 + 1],param_2,param_3,param_4,param_5), iVar1 == 0)
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
          FUN_00009b0c(DAT_00007974);
          return 0;
        }
        iVar1 = 0xc;
      }
      FUN_000021f0(0,0,s_Get_config_parameter__token__04x_00007900,param_1,param_2);
      iVar2 = FUN_00007978(iVar1,param_1,param_2,param_3,param_4,param_5);
      if (iVar2 == 0) {
        FUN_000021f0(0,0,s_Get_config_parameter_from_defaul_00007934,param_1,param_2);
        iVar2 = FUN_00007978(iVar1 + -1,param_1,param_2,param_3,param_4,param_5);
      }
      return iVar2;
    }
  }
  FUN_000021f0(0,0,s_APCB_Config_parameter__04x_mappe_000078c8,local_38[uVar3 * 2],
               local_38[uVar3 * 2 + 1]);
  return 1;
}



/* FUN_00007978 @ 00007978 */

undefined4
FUN_00007978(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,undefined4 param_6)

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
  
  local_68 = *DAT_00007d78;
  local_3c = local_68;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_0000013c(auStack_60,DAT_00007d7c,0x24);
  uVar9 = local_34 - 1;
  if (0xe < uVar9) {
    FUN_00009b0c(DAT_00007d80);
  }
  if (0xf < local_2c) {
    FUN_00009b0c(DAT_00007d80 + 0xb);
  }
  if (local_28 == 0) {
    FUN_00009b0c(DAT_00007d80 + 0xd);
  }
  if (param_5 == (byte *)0x0) {
    FUN_00009b0c(DAT_00007d80 + 0xe);
  }
  switch(local_34) {
  default:
    iVar6 = DAT_00007d84 + -0xd1;
    goto LAB_00007b94;
  case 1:
  case 2:
    local_98 = 0x1701;
    pcVar15 = (char *)0x3;
    pcVar13 = (char *)0x1;
    pcVar16 = (char *)0xff;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0xc;
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
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0xd;
    uVar9 = local_34 - 3 & 0xff;
    break;
  case 5:
  case 6:
    iVar6 = 5;
    local_98 = 0x1703;
    pcVar13 = (char *)0x301;
    pcVar15 = (char *)0x309;
    pcVar16 = (char *)0x6ff;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0xe;
    uVar9 = local_34 - 5 & 0xff;
    break;
  case 7:
  case 8:
    iVar6 = 7;
    local_98 = 0x1704;
    pcVar13 = (char *)0x701;
    pcVar15 = (char *)0x71c;
    pcVar16 = s_Master__Mem_Config_buffer_Offset_000017f4 + 0xb;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0xf;
    uVar9 = local_34 - 7 & 0xff;
    break;
  case 9:
  case 10:
    iVar6 = 9;
    pcVar13 = s_Master__Mem_Config_buffer_Offset_000017f4 + 0xd;
    local_98 = 0x1705;
    pcVar15 = s_Master__Mem_Config_buffer_Offset_000017f4 + 0xd;
    pcVar16 = (char *)0x1bff;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x10;
    uVar9 = local_34 - 9 & 0xff;
    break;
  case 0xb:
  case 0xc:
    iVar6 = 0xb;
    local_98 = 0x1706;
    pcVar13 = (char *)0x1c01;
    pcVar15 = (char *)0x1c03;
    pcVar16 = "\f!";
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x11;
    uVar9 = local_34 - 0xb & 0xff;
    break;
  case 0xd:
    pcVar15 = (char *)0x1f;
    uVar9 = 0;
    pcVar16 = "\f!";
    pcVar13 = (char *)0x1;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x1d;
    iVar6 = 0xd;
    local_98 = 0x1707;
    break;
  case 0xf:
    pcVar15 = (char *)0x162;
    uVar9 = 0;
    pcVar16 = "\f!";
    pcVar13 = (char *)0x1;
    pcVar14 = s_PspBootRomServices_EnabledCoreCo_0000a030 + 0x1e;
    iVar6 = 0xf;
    local_98 = 0x1707;
  }
  local_90 = 0;
  if (local_34 < 0x11) {
    local_90 = (uint)auStack_60[local_34];
  }
  local_7c[0] = pcVar14;
  iVar4 = FUN_000099e8(local_7c,param_6);
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
              goto LAB_00007bd4;
            }
            iVar6 = DAT_00007d84 + -0x21;
          }
          else {
            iVar6 = DAT_00007d84 + -0x36;
          }
LAB_00007b94:
          FUN_00009b0c(iVar6);
        }
      }
    }
    uVar11 = 0;
  }
  else {
    local_8c = ((int)pcVar15 - (int)pcVar13) * 6 + 8;
    local_84 = 4;
    pcStack_88 = pcVar14;
    iVar4 = FUN_000097b4(&local_8c,param_6);
    if (iVar4 != 0) {
      FUN_00009b0c(DAT_00007d84);
    }
    local_70 = local_80;
    iVar4 = local_80 + 8;
    uVar9 = 0;
    do {
      local_6c = iVar6 + uVar9;
      iVar5 = FUN_00007df8(local_98,local_6c & 0xffff,0,auStack_64,&local_94);
      if (iVar5 != 0) {
        FUN_000021f0(0,0,s_Initializing_APCB_parameters_for_00007d88,local_6c);
        uVar10 = 0;
        iVar5 = DAT_00007d84 + 0x20;
        while (pcVar14 = (char *)((uint)(*(int *)(local_94 + uVar10 * 4) << 0xb) >> 0x13),
              pcVar14 != "!") {
          if ((pcVar14 < pcVar13) || (pcVar16 <= pcVar14)) {
            FUN_00009b0c(iVar5);
          }
          uVar10 = uVar10 + 1 & 0xff;
        }
        uVar12 = 0;
        *(uint *)(local_70 + uVar9 * 4) = local_94 + uVar10 * 4 + 4;
        uVar10 = 0;
        while( true ) {
          uVar8 = *(uint *)(local_94 + uVar12 * 4);
          pcVar14 = (char *)((uVar8 << 0xb) >> 0x13);
          if (pcVar14 == "!") break;
          if (pcVar14 < pcVar15) {
            if (uVar8 >> 0x18 != 0) {
              iVar6 = DAT_00007d84 + 0x41;
              goto LAB_00007b94;
            }
            if (local_90 < ((uVar8 << 8) >> 0x1d) + 1) {
              iVar6 = DAT_00007d84 + 0x62;
              goto LAB_00007b94;
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
            FUN_000021f0(0,0,s_Type__d___Token_0x_x____00007dbc,local_6c,uVar8);
            for (uVar7 = (uint)(*(int *)(local_94 + uVar12 * 4) << 8) >> 0x1d; uVar7 != 0xff;
                uVar7 = uVar7 - 1 & 0xff) {
              FUN_000021f0(0,0,&DAT_00007dd8,
                           *(undefined *)(*(int *)(local_70 + uVar9 * 4) + uVar10 + uVar7),uVar8);
            }
            iVar5 = ((uint)(*(int *)(local_94 + uVar12 * 4) << 0xb) >> 0x13) - (int)pcVar13;
            *(byte *)(iVar4 + iVar5 * 6) = *(byte *)(iVar4 + iVar5 * 6) | 1;
            FUN_000021f0(0,0,&DAT_00007de0);
          }
          uVar8 = ((uint)(*(int *)(local_94 + uVar12 * 4) << 8) >> 0x1d) + uVar10 + 1 & 0xffff;
          if (uVar8 <= uVar10) {
            FUN_00009b0c(DAT_00007d84 + 0xe9);
          }
          uVar12 = uVar12 + 1 & 0xff;
          uVar10 = uVar8;
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 2);
    uVar11 = FUN_00007978(local_34,local_30,local_2c,local_28,param_5,param_6);
  }
LAB_00007bd4:
  if (local_3c != local_68) {
    func_0x00010084();
  }
  return uVar11;
}



/* FUN_00007df8 @ 00007df8 */

undefined4 FUN_00007df8(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  FUN_000021f0(0,0,s_ToSearch__GroupId___0x_04X__Type_00007ea4,param_1,param_2);
  iVar2 = DAT_00007ed8;
  FUN_00007f10(*(undefined4 *)(DAT_00007ed8 + 8));
  iVar4 = iVar2 + 0x20;
  uVar5 = *(int *)(iVar2 + 8) + iVar2 + -1;
  FUN_00007f2c(*(undefined4 *)(iVar2 + 0x2c));
  uVar3 = iVar2 + 0x30;
  FUN_00007f48(*(undefined2 *)(iVar2 + 0x34));
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
        FUN_000021f0(0,0,s_Found_type_id_match__00007edc,(uint)uVar1,uVar6);
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



/* FUN_00007f10 @ 00007f10 */

undefined4 FUN_00007f10(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009b0c(DAT_00007f28);
    return 0;
  }
  return 1;
}



/* FUN_00007f2c @ 00007f2c */

undefined4 FUN_00007f2c(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009b0c(DAT_00007f44);
    return 0;
  }
  return 1;
}



/* FUN_00007f48 @ 00007f48 */

undefined4 FUN_00007f48(uint param_1)

{
  if (0x2000 < param_1) {
    FUN_00009b0c(DAT_00007f60);
    return 0;
  }
  return 1;
}



/* FUN_000085e0 @ 000085e0 */

void FUN_000085e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  iVar2 = *(int *)(DAT_00008614 + 0xc);
  while( true ) {
    if (iVar2 == -1) {
      return;
    }
    iVar3 = DAT_00008614 + iVar2;
    if (iVar2 == param_2) break;
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  if (iVar1 != -1) {
    *(undefined4 *)(DAT_00008614 + iVar1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    return;
  }
  *(undefined4 *)(DAT_00008614 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  return;
}



/* FUN_00008618 @ 00008618 */

void FUN_00008618(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_Apply_Errata_Workaround_00008644);
  func_0x0000f984(param_1,param_2,DAT_0000866c);
  FUN_000021f0(0x40000000,0,s_DF_Apply_Errata_Workarounds_comp_00008670);
  return;
}



/* FUN_00008698 @ 00008698 */

void FUN_00008698(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_CCM_init_000086c4);
  func_0x0000f984(param_1,param_2,DAT_000086d8);
  FUN_000021f0(0x40000000,0,s_DF_CCM_init_complete_000086dc);
  return;
}



/* FUN_000086f4 @ 000086f4 */

void FUN_000086f4(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_CS_init_00008720);
  func_0x0000f984(param_1,param_2,DAT_00008734);
  FUN_000021f0(0x40000000,0,s_DF_CS_init_complete_00008738);
  return;
}



/* FUN_00008750 @ 00008750 */

void FUN_00008750(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_security_widget_init_0000877c);
  func_0x0000f984(param_1,param_2,DAT_0000879c);
  FUN_000021f0(0x40000000,0,s_DF_security_widget_init_complete_000087a0);
  return;
}



/* FUN_00008b00 @ 00008b00 */

void FUN_00008b00(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_IOMS_init_00008b2c);
  func_0x0000f984(param_1,param_2,DAT_00008b40);
  FUN_000021f0(0x40000000,0,s_DF_IOMS_init_complete_00008b44);
  return;
}



/* FUN_00008c38 @ 00008c38 */

uint FUN_00008c38(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  if (0xf < *(byte *)(param_1 + 1)) {
    FUN_00009b0c(DAT_00008c6c);
  }
  func_0x0000a860(3,(uint)(*(byte *)(param_1 + 1) >> 1) << 0x14 |
                    (*(byte *)(param_1 + 1) & 1) << 0xd | DAT_00008c70,&local_10,0);
  return (uint)(local_10 << 0x14) >> 0x1f;
}



/* FUN_00008d8c @ 00008d8c */

void FUN_00008d8c(undefined4 param_1,undefined4 param_2)

{
  FUN_00003614(0,0xe);
  FUN_00005de4(0,0xe);
  FUN_000021f0(0x40000000,0,s_Begin_DF_FTI_credit_release_and_S_00008dc8);
  func_0x0000f984(param_1,param_2,DAT_00008df8);
  FUN_000021f0(0x40000000,0,s_DF_FTI_credit_release_and_SDP_co_00008dfc);
  return;
}



/* FUN_00008e2c @ 00008e2c */

void FUN_00008e2c(undefined4 param_1,undefined4 param_2)

{
  FUN_000021f0(0x40000000,0,s_Begin_DF_SPF_init_00008e68);
  FUN_00003614(0,0xd);
  FUN_00005de4(0,0xd);
  func_0x0000f984(param_1,param_2,DAT_00008e7c);
  FUN_000021f0(0x40000000,0,s_DF_SPF_init_complete_00008e80);
  return;
}



/* FUN_00008e98 @ 00008e98 */

void FUN_00008e98(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00008eb0;
  *DAT_00008eb0 = DAT_00008eac;
  puVar1[1] = DAT_00008eb4;
  puVar1[2] = DAT_00008eb8;
  puVar1[3] = DAT_00008ebc;
  return;
}



/* FUN_0000927c @ 0000927c */

undefined4 FUN_0000927c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *(undefined *)(param_1 + 0x120) = 1;
  software_interrupt(6);
  iVar8 = param_1;
  FUN_000021f0(4,0,s_1KB_Memory_Test_Start____0000939c);
  iVar1 = DAT_000093bc;
  iVar6 = 0;
  do {
    uVar4 = 0;
    do {
      iVar7 = -1;
      FUN_000021f0(4,0,s___08x__000093c0,param_2 + uVar4 * 4 + iVar6 * 0x400,0xffffffff,iVar8,
                   param_2,param_3);
      uVar3 = 0;
      do {
        iVar5 = *(int *)(iVar1 + uVar3 * 4);
        software_interrupt(10);
        software_interrupt(9);
        if (iVar7 != iVar5) {
          FUN_000021f0(4,0,s_Test_Failed_000093cc,4);
          FUN_000021f0(4,0,s_Pattern_Written__Pattern_Read__000093dc);
          FUN_000021f0(4,0,s__08x_00009408,iVar5);
          FUN_000021f0(4,0,s__08x_00009410,iVar7);
          *(undefined *)(param_1 + 0x120) = 0;
          break;
        }
        FUN_000021f0(4,0,s_PASS_00009418,4);
        FUN_00009a6c(uVar4,param_4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 2);
    } while ((iVar7 == iVar5) && (uVar4 = uVar4 + 1, uVar4 < 0x100));
    if ((iVar7 != iVar5) || (iVar6 = iVar6 + 1, iVar6 != 0)) {
      if (*(char *)(param_1 + 0x120) == '\x01') {
        FUN_00009a6c(0,param_4);
        FUN_000021f0(4,0,s_Test_Passed_0000945c);
      }
      else {
        FUN_00009a6c(0xeded,param_4);
        FUN_00009b0c(DAT_00009420);
      }
      FUN_000021f0(4,0,s_Agesa_Mem_Test_Complete_00009424);
      software_interrupt(6);
      if (*(char *)(param_1 + 0x120) == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = 9;
      }
      return uVar2;
    }
  } while( true );
}



/* FUN_0000946c @ 0000946c */

void FUN_0000946c(undefined4 *param_1)

{
  FUN_00008e98();
  *param_1 = DAT_00009480;
  param_1[1] = 0;
  return;
}



/* FUN_000094a4 @ 000094a4 */

void FUN_000094a4(byte *param_1,uint *param_2,int *param_3,int *param_4)

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
LAB_0000953c:
      iVar5 = 0;
      pbVar2 = param_1;
      do {
        param_1 = pbVar2;
        iVar5 = iVar5 * 10 + -0x30 + (uint)*param_1;
        pbVar2 = param_1 + 1;
      } while (param_1[1] - 0x30 < 10);
LAB_0000955a:
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
          goto LAB_0000951e;
        }
      }
      goto LAB_0000953c;
    }
    if (bVar1 != 0x2d) {
      if (0x2d < bVar1) {
        if (bVar1 != 0x30) {
          if ((bVar1 != 0x31) && (bVar1 != 0x32)) {
            return;
          }
          goto LAB_0000953c;
        }
        uVar3 = *param_2 | 0x20;
        goto LAB_0000951e;
      }
      if (bVar1 == 0x20) {
        uVar3 = *param_2 | 4;
        goto LAB_0000951e;
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
        goto LAB_0000951e;
      }
      piVar4 = (int *)*param_4;
      *param_4 = (int)(piVar4 + 1);
      iVar5 = *piVar4;
      goto LAB_0000955a;
    }
    uVar3 = *param_2 | 1;
LAB_0000951e:
    *param_2 = uVar3;
  } while( true );
}



/* FUN_000097b4 @ 000097b4 */

undefined4 FUN_000097b4(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

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
  
  piVar1 = DAT_000098dc;
  param_1[3] = 0;
  iVar2 = DAT_000098e0;
  iVar12 = 4 - (*param_1 & 3);
  *param_1 = *param_1 + iVar12;
  if (*piVar1 == iVar2) {
    uVar5 = piVar1[2];
    puVar10 = (uint *)(piVar1 + 4);
    uVar4 = param_4;
    if (uVar5 == 0xffffffff) {
LAB_0000981c:
      uVar5 = piVar1[3];
      while (puVar9 = (uint *)((int)piVar1 + uVar5), uVar5 != 0xffffffff) {
        uVar11 = -(int)puVar9 & 0xf;
        uVar6 = *param_1 + uVar11;
        *param_1 = uVar6;
        if (uVar6 <= puVar9[1]) {
          if (uVar5 != 0xffffffff) {
            FUN_000085e0(param_2,uVar5,param_3,uVar4,param_4);
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
              FUN_00009b88(param_2);
            }
            *puVar9 = param_1[1];
            cVar3 = *(char *)(param_1 + 2);
            if ((cVar3 != '\x03') && (cVar3 != '\x04')) {
              cVar3 = '\x02';
            }
            *(char *)(puVar9 + 2) = cVar3;
            puVar9[3] = 0xffffffff;
            *(char *)((int)puVar9 + 9) = (char)uVar11;
            thunk_FUN_00009ef6(puVar9 + 4,0,puVar9[1],param_2);
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
      uVar8 = DAT_000098ec;
    }
    else {
      param_3 = param_1[1];
      do {
        puVar10 = (uint *)(uVar5 + (int)piVar1);
        uVar5 = puVar10[3];
        uVar8 = DAT_000098e8;
        if (uVar5 == 0xffffffff) {
          uVar4 = 0;
          if (*puVar10 != param_3) goto LAB_0000981c;
          break;
        }
      } while (*puVar10 != param_3);
    }
    func_0x0000f358(2,uVar8,param_3,0,param_2);
    uVar4 = 2;
  }
  else {
    FUN_00009b0c(DAT_000098e4);
    uVar4 = 7;
  }
  return uVar4;
}



/* FUN_000098f0 @ 000098f0 */

/* WARNING: Removing unreachable block (ram,0x000099ae) */

undefined4 FUN_000098f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = DAT_000099d8;
  if (*DAT_000099d8 == DAT_000099dc) {
    iVar3 = DAT_000099d8[2];
    iVar6 = -1;
    while (iVar5 = iVar3, iVar5 != -1) {
      piVar4 = (int *)((int)DAT_000099d8 + iVar5);
      if (*piVar4 == param_1) {
        if (iVar6 == -1) {
          DAT_000099d8[2] = piVar4[3];
        }
        else {
          *(int *)((int)DAT_000099d8 + iVar6 + 0xc) = piVar4[3];
        }
        piVar1[1] = (piVar1[1] - piVar4[1]) + -0x10;
        iVar6 = piVar1[3];
        goto LAB_0000999a;
      }
      iVar6 = iVar5;
      iVar3 = piVar4[3];
    }
    if ((DAT_000099d8 == (int *)0x0) || (*DAT_000099d8 != DAT_000099dc)) {
      FUN_00009b0c(DAT_000099e0 + 0xde);
    }
    else {
      func_0x0000f358(2,DAT_000099e4,param_1,0,param_2);
    }
    uVar2 = 2;
  }
  else {
    FUN_00009b0c(DAT_000099e0);
    uVar2 = 7;
  }
  return uVar2;
LAB_0000999a:
  piVar7 = (int *)((int)piVar1 + iVar6);
  if (iVar6 == -1) {
    FUN_00009b88(param_2,iVar5);
    return 0;
  }
  if (iVar6 + 0x10 + piVar7[1] == iVar5) {
    FUN_000085e0(param_2,iVar6);
    iVar3 = piVar7[1] + piVar4[1];
    piVar4 = piVar7;
    iVar5 = iVar6;
LAB_00009996:
    piVar4[1] = iVar3 + 0x10;
  }
  else if (iVar5 + 0x10 + piVar4[1] == iVar6) {
    FUN_000085e0(param_2,iVar6);
    iVar3 = piVar7[1] + piVar4[1];
    goto LAB_00009996;
  }
  iVar6 = piVar7[3];
  goto LAB_0000999a;
}



/* FUN_000099e8 @ 000099e8 */

undefined4 FUN_000099e8(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = DAT_00009a60;
  piVar2 = DAT_00009a5c;
  if (*DAT_00009a5c != DAT_00009a60) {
    FUN_00009b0c(DAT_00009a64);
    return 7;
  }
  iVar5 = DAT_00009a5c[2];
  if (iVar5 != -1) {
    do {
      piVar4 = (int *)((int)DAT_00009a5c + iVar5);
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
    FUN_00009b0c(DAT_00009a64 + 0x4d);
  }
  else {
    func_0x0000f358(2,DAT_00009a68,*param_1,0,param_2);
  }
  return 2;
}



/* FUN_00009a6c @ 00009a6c */

void FUN_00009a6c(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined auStack_2c [4];
  uint local_28;
  int local_18;
  uint local_10;
  
  local_10 = param_1 | 0xea000000;
  if ((param_1 != 0xe0e0) && (param_1 != 0xe0e1)) {
    FUN_000021f0(0,0x10000000,s__TP__04x__00009af0,param_1 & 0xffff);
  }
  FUN_00009f98(auStack_2c);
  puVar1 = DAT_00009afc;
  if ((1 < local_28) && (local_18 == 0)) {
    uVar2 = *DAT_00009afc;
    if (uVar2 < 0x181) {
      DAT_00009afc[uVar2 + 2] = local_10;
      *puVar1 = uVar2 + 1;
    }
    else if (uVar2 == 0x181) {
      *DAT_00009afc = 0;
    }
    else {
      FUN_00009b0c(DAT_00009b00);
    }
  }
  software_interrupt(10);
  func_0x0000a92c(3,DAT_00009b08,&local_10,param_2,0);
  return;
}



/* FUN_00009b0c @ 00009b0c */

undefined4 FUN_00009b0c(uint param_1)

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
  FUN_000021f0(0,0x40000000,s_ASSERT_on_File__x__Line__x__00009b5c,param_1 >> 0x10,param_1 & 0xffff)
  ;
  local_24._2_2_ = 9;
  local_20 = s__MEM_CONF__Override_Memory_Timin_00002fe4 + 0x25;
  local_1c = param_1 >> 0x10;
  local_18 = param_1 & 0xffff;
  uVar1 = FUN_00000c1c();
  local_24 = CONCAT22(local_24._2_2_,uVar1);
  FUN_00000ce8(&local_24,1);
  FUN_00009b7c(param_1);
  return 1;
}



/* FUN_00009b7c @ 00009b7c */

/* WARNING: Removing unreachable block (ram,0x00009b84) */

void FUN_00009b7c(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



/* FUN_00009b88 @ 00009b88 */

void FUN_00009b88(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00009bbc;
  iVar2 = *(int *)(DAT_00009bbc + 0xc);
  iVar4 = -1;
  while ((iVar3 = iVar2, iVar3 != -1 &&
         (*(uint *)(DAT_00009bbc + iVar3 + 4) < *(uint *)(DAT_00009bbc + param_2 + 4)))) {
    iVar4 = iVar3;
    iVar2 = *(int *)(DAT_00009bbc + iVar3 + 0xc);
  }
  *(int *)(DAT_00009bbc + param_2 + 0xc) = iVar3;
  if (iVar4 != -1) {
    *(int *)(iVar1 + iVar4 + 0xc) = param_2;
    return;
  }
  *(int *)(iVar1 + 0xc) = param_2;
  return;
}



/* FUN_00009bc0 @ 00009bc0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009bc0(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_58 [40];
  undefined auStack_30 [24];
  int local_18;
  
  iVar1 = *DAT_00009bfc;
  local_18 = iVar1;
  FUN_0000013c(auStack_30,s__BUFFER_OVERFLOW__00009c00,0x18);
  thunk_FUN_00009eea(param_1 + param_2 + -0x15,auStack_30,0x15,auStack_58);
  if (local_18 != iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* FUN_00009dd4 @ 00009dd4 */

undefined * FUN_00009dd4(void)

{
  undefined local_18 [24];
  
  software_interrupt(0x27);
  return local_18;
}



/* FUN_00009e10 @ 00009e10 */

undefined8 FUN_00009e10(int param_1,int param_2)

{
  if (param_2 == 0x80) {
    param_2 = 0xfffd;
    if (param_1 == 3) {
      software_interrupt(10);
      return CONCAT44(0xfffd,DAT_00009e34);
    }
    software_interrupt(10);
    param_1 = DAT_00009e34;
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_00009e38 @ 00009e38 */

undefined * FUN_00009e38(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009e70;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009e70;
    local_18[2] = param_3;
    FUN_00009b0c(DAT_00009e88);
  }
LAB_00009e70:
  software_interrupt(0x26);
  return (undefined *)local_18;
}



/* FUN_00009e8c @ 00009e8c */

undefined * FUN_00009e8c(int param_1,uint param_2,undefined4 param_3)

{
  uint local_18 [4];
  undefined4 local_8;
  
  local_18[0] = param_2 | 0xfc000000;
  local_18[1] = 0xfffd;
  local_8 = 6;
  if (param_1 != 0x81) {
    if (param_1 < 0x82) {
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009ec4;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009ec4;
    local_18[2] = param_3;
    FUN_00009b0c(DAT_00009edc);
  }
LAB_00009ec4:
  software_interrupt(0x27);
  return (undefined *)local_18;
}



/* FUN_00009eea @ 00009eea */

void FUN_00009eea(undefined *param_1,undefined *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* FUN_00009ef6 @ 00009ef6 */

void FUN_00009ef6(undefined *param_1,undefined param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* FUN_00009efc @ 00009efc */

undefined *
FUN_00009efc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009f2e;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009f2e;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00009b0c(DAT_00009f44);
  }
LAB_00009f2e:
  software_interrupt(0x26);
  return (undefined *)&local_18;
}



/* FUN_00009f48 @ 00009f48 */

undefined *
FUN_00009f48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
      if ((param_1 == 1) || ((param_1 == 2 || (param_1 == 3)))) goto LAB_00009f7a;
    }
    else if ((param_1 == 0x82) || (param_1 == 0x83)) goto LAB_00009f7a;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00009b0c(DAT_00009f90);
  }
LAB_00009f7a:
  software_interrupt(0x27);
  return (undefined *)&local_18;
}



/* FUN_00009f98 @ 00009f98 */

void FUN_00009f98(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x0000a5c8();
  *param_1 = uVar1;
  uVar1 = func_0x0000a58c();
  param_1[1] = uVar1;
  uVar1 = FUN_00009fd4();
  param_1[2] = uVar1;
  uVar1 = func_0x0000a550();
  param_1[3] = uVar1;
  iVar2 = func_0x0000a518();
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



/* FUN_00009fd4 @ 00009fd4 */

undefined4 FUN_00009fd4(void)

{
  FUN_000021f0(0,2,s_PspBootRomServices_DiesPerSocket_00009fe8,1);
  return 1;
}



/* FUN_0000a018 @ 0000a018 */

undefined FUN_0000a018(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0000a02c;
  FUN_000021f0(0,2,s_PspBootRomServices_EnabledCoreCo_0000a030,*DAT_0000a02c);
  return *puVar1;
}



/* FUN_0000a060 @ 0000a060 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a060(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = (uint)*_DAT_0000a120;
  if (param_1 < uVar1) {
    uVar2 = 0xa124;
  }
  else {
    uVar2 = 0xa12c;
  }
  uVar3 = uVar1;
  FUN_000021f0(0,2,_DAT_0000a134,param_1,uVar2,uVar1);
  if (uVar1 <= param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  for (uVar1 = 0; (uVar1 < DAT_0007fa1f && (*(byte *)(uVar1 + 0x7fa22) <= param_1));
      uVar1 = uVar1 + 1) {
    param_1 = param_1 - *(byte *)(uVar1 + 0x7fa22);
  }
  FUN_000021f0(0,2,0xa138,(uint)DAT_0007fa1f,uVar2,uVar3);
  if (DAT_0007fa1f <= uVar1) {
    FUN_00009b0c(_DAT_0000a16c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




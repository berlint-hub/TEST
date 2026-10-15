// vaddr 0x743620  ghidra 0x843620  name=FUN_00843620  size=7344 instr-addr
// duvod: data 0xB99BD0 (104 xrefu)
// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...


void FUN_00843620(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  puVar3 = PTR___tls_init_00c93cd0;
  uVar7 = (ulong)param_4;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  switch(uVar7) {
  case 0:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,0);
    break;
  case 1:
    uVar8 = *param_2;
    uVar9 = *param_1;
    if (uVar8 == uVar9) {
      if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
      }
      else {
        armAsm::__tls_init();
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_3;
    }
    else {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
        uVar9 = *param_1;
        uVar8 = *param_2;
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)uVar9 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)uVar8 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_2;
    }
    uVar4 = *puVar5;
    uVar6 = 0;
    goto LAB_00845020;
  case 2:
    uVar8 = *param_2;
    uVar9 = *param_1;
    if (uVar8 == uVar9) {
      if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
      }
      else {
        armAsm::__tls_init();
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_3;
    }
    else {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
        uVar9 = *param_1;
        uVar8 = *param_2;
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)uVar9 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)uVar8 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_2;
    }
    local_68 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)uVar9 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007c01d0(*puVar5,&local_68,0,&local_78,2);
    break;
  case 3:
    uVar8 = *param_2;
    uVar9 = *param_1;
    if (uVar8 == uVar9) {
      if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
      }
      else {
        armAsm::__tls_init();
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_3;
    }
    else {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
        uVar9 = *param_1;
        uVar8 = *param_2;
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)uVar9 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)uVar8 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_2;
    }
    local_68 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)uVar9 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007c01d0(*puVar5,&local_68,0,&local_78,3);
    break;
  default:
    fprintf(*(FILE **)PTR_stderr_00c93c28,"Invalid shuffle 0x%02X\n",uVar7);
    FUN_008de3e0(0x41700000,"Missing shuffle 0x%02X, emitting slow path, please report",uVar7);
    puVar3 = PTR___tls_init_00c93cd0;
    uVar8 = *param_2;
    uVar9 = *param_1;
    if (uVar8 == uVar9) {
      if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
      }
      else {
        armAsm::__tls_init();
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_3 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,0,&local_78,param_4 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_3 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,1,&local_78,param_4 >> 2 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_3 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,2,&local_78,param_4 >> 4 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_3;
    }
    else {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
        uVar9 = *param_1;
        uVar8 = *param_2;
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)uVar9 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)uVar8 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,0,&local_78,param_4 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,1,&local_78,param_4 >> 2 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007d5b90(*puVar5,&local_68,2,&local_78,param_4 >> 4 & 3);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_2;
    }
    local_68 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)uVar9 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007d5b90(*puVar5,&local_68,3,&local_78,param_4 >> 6 & 3);
    break;
  case 0xe:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar9 = *param_3;
    uVar8 = *param_2;
    uVar4 = *puVar5;
    uVar6 = 0;
    goto LAB_00844b7c;
  case 0xf:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,0);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uVar4 = *puVar5;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar6 = 0xc;
    goto LAB_00843e84;
  case 0x18:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007b4880(*puVar5,&local_68,&local_78);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007abb80(*puVar5,&local_68,&local_78,&local_88);
    goto joined_r0x00844644;
  case 0x1b:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007b4880(*puVar5,&local_68,&local_78);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_88 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_78 = local_88;
    local_68 = local_88;
    goto LAB_00844bc4;
  case 0x27:
    if (*param_1 != *param_2) {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_007abe30(*puVar5,param_1,param_2);
    }
    puVar3 = PTR___tls_init_00c93cd0;
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_1 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,8);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    local_88 = (ulong)*param_3 | 0x8000000000;
    uStack_80 = 0x400000002;
    local_68 = local_78;
    FUN_007ad2a0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_88 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_78 = local_88;
    local_68 = local_88;
    goto LAB_00844bc4;
  case 0x39:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar1 = *param_1;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_2 | 0x8000000000;
    local_78 = local_88;
    goto LAB_00844a34;
  case 0x3a:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,8);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007abb80(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    local_68 = local_78;
    goto LAB_00844b1c;
  case 0x3e:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,0xc);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uVar8 = *param_3;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    goto LAB_00844910;
  case 0x3f:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,3);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar1 = *param_1;
    uVar8 = *param_3;
    uVar9 = *param_2;
    goto LAB_00844a24;
  case 0x40:
    uVar8 = *param_2;
    uVar9 = *param_1;
    if (uVar8 == uVar9) {
      if (PTR___tls_init_00c93cd0 == (undefined *)0x0) {
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
      }
      else {
        armAsm::__tls_init();
        puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
        FUN_007abe30(*puVar5,param_3,param_2);
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)*param_1 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)*param_2 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_3;
    }
    else {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
        uVar9 = *param_1;
        uVar8 = *param_2;
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      local_68 = (ulong)uVar9 | 0x8000000000;
      uStack_60 = 0x400000002;
      local_78 = (ulong)uVar8 | 0x8000000000;
      uStack_70 = 0x400000002;
      FUN_007aac70(*puVar5,&local_68,&local_78,0);
      if (puVar3 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      uVar8 = *param_1;
      uVar9 = *param_2;
    }
    uVar4 = *puVar5;
    uVar6 = 3;
LAB_00845020:
    local_68 = (ulong)uVar8 | 0x8000000000;
    local_78 = (ulong)uVar9 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    FUN_007c01d0(uVar4,&local_68,uVar6,&local_78,1);
    break;
  case 0x43:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ab8d0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    goto LAB_00844b1c;
  case 0x4e:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_2 | 0x8000000000;
    local_78 = local_88;
    goto LAB_00844bc4;
  case 0x4f:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,0xc);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    uVar9 = *param_2;
    uVar1 = *param_3;
    goto LAB_008443ac;
  case 0x50:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_2 | 0x8000000000;
    local_78 = local_88;
    goto LAB_008447e8;
  case 0x53:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ab8d0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_3 | 0x8000000000;
    uVar4 = *puVar5;
    uVar6 = 4;
    local_68 = local_78;
LAB_00843e84:
    uStack_60 = 0x1000000002;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_88 = local_68;
    FUN_007ab730(uVar4,&local_68,&local_78,&local_88,uVar6);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    goto LAB_00844b1c;
  case 0x54:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,1);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    goto LAB_008447e8;
  case 0x55:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar9 = *param_1;
    uVar8 = *param_2;
    uStack_70 = 0x400000002;
    goto LAB_00844a74;
  case 0x90:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,4);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    uVar9 = *param_3;
    uVar1 = *param_2;
LAB_008443ac:
    local_68 = (ulong)uVar8 | 0x8000000000;
    local_78 = (ulong)uVar9 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)uVar1 | 0x8000000000;
    goto LAB_00844b1c;
  case 0x93:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_2 | 0x8000000000;
    local_78 = local_88;
    goto LAB_00844b1c;
  case 0x94:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,4);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
LAB_008447e8:
    local_68 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    FUN_007ab8d0(uVar4,&local_68,&local_78,&local_88);
    break;
  case 0x95:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,4);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ab8d0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uVar8 = *param_3;
    uVar4 = *puVar5;
    local_68 = local_78;
LAB_00844910:
    local_88 = (ulong)uVar8 | 0x8000000000;
    goto LAB_00844bc4;
  case 0xa4:
    if (*param_1 != *param_2) {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_007abe30(*puVar5,param_1,param_2);
    }
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007d5b90(*puVar5,&local_68,3,&local_78,2);
    break;
  case 0xa5:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,2);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_2 | 0x8000000000;
    local_78 = local_88;
    goto LAB_00844630;
  case 0xa9:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,2);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar8 = *param_1;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
LAB_00844630:
    local_68 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    FUN_007ab8d0(uVar4,&local_68,&local_78,&local_88);
joined_r0x00844644:
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    local_68 = local_78;
    goto LAB_00844bc4;
  case 0xaa:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,2);
    break;
  case 0xc6:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007b4880(*puVar5,&local_68,&local_78);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_88 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_78 = local_88;
    local_68 = local_88;
    goto LAB_00844b1c;
  case 0xc9:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,8);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    local_88 = (ulong)*param_3 | 0x8000000000;
    uStack_80 = 0x400000002;
    FUN_007ad2a0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_88 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_78 = local_88;
    local_68 = local_88;
    goto LAB_00844b1c;
  case 0xd2:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x1000000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    local_78 = local_88;
    FUN_007ab730(*puVar5,&local_68,&local_78,&local_88,4);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_3 | 0x8000000000;
    uStack_70 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_80 = 0x400000002;
    FUN_007d5200(*puVar5,&local_68,&local_78,&local_88);
    break;
  case 0xe4:
    if (*param_1 != *param_2) {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_007abe30(*puVar5,param_1,param_2);
    }
    break;
  case 0xe5:
    if (*param_1 != *param_2) {
      if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
        armAsm::__tls_init();
      }
      puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
      FUN_007abe30(*puVar5,param_1,param_2);
    }
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    local_68 = local_78;
    FUN_007d5b90(*puVar5,&local_68,0,&local_78,1);
    break;
  case 0xe9:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ad2a0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ab8d0(*puVar5,&local_68,&local_78,&local_88);
    goto joined_r0x00843808;
  case 0xea:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ad2a0(*puVar5,&local_68,&local_78,&local_88);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007abb80(*puVar5,&local_68,&local_78,&local_88);
joined_r0x00843808:
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_78 = (ulong)*param_1 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
    local_68 = local_78;
LAB_00844b1c:
    uVar6 = 0xc;
LAB_00844bd4:
    uStack_60 = 0x1000000002;
    uStack_70 = 0x1000000002;
    uStack_80 = 0x1000000002;
    FUN_007ab730(uVar4,&local_68,&local_78,&local_88,uVar6);
    break;
  case 0xee:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar9 = *param_1;
    uVar8 = *param_2;
    uStack_70 = 0x200000002;
LAB_00844a74:
    local_68 = (ulong)uVar9 | 0x8000000000;
    local_78 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = uStack_70;
    FUN_007aac70(*puVar5,&local_68,&local_78,1);
    break;
  case 0xf9:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_3 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,3);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar1 = *param_1;
    uVar8 = *param_2;
    uVar9 = *param_3;
LAB_00844a24:
    local_78 = (ulong)uVar8 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)uVar9 | 0x8000000000;
LAB_00844a34:
    local_68 = (ulong)uVar1 | 0x8000000000;
    uVar6 = 4;
    goto LAB_00844bd4;
  case 0xfa:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_88 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    uStack_80 = 0x400000002;
    local_78 = local_88;
    FUN_007ad2a0(*puVar5,&local_68,&local_78,&local_88);
    break;
  case 0xfe:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    uVar9 = *param_3;
    uVar8 = *param_2;
    uVar4 = *puVar5;
    uVar6 = 3;
LAB_00844b7c:
    local_68 = (ulong)uVar9 | 0x8000000000;
    local_78 = (ulong)uVar8 | 0x8000000000;
    uStack_60 = 0x400000002;
    uStack_70 = 0x400000002;
    FUN_007aac70(uVar4,&local_68,&local_78,uVar6);
    if (puVar3 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uVar4 = *puVar5;
    local_88 = (ulong)*param_3 | 0x8000000000;
LAB_00844bc4:
    uVar6 = 8;
    goto LAB_00844bd4;
  case 0xff:
    if (PTR___tls_init_00c93cd0 != (undefined *)0x0) {
      armAsm::__tls_init();
    }
    puVar5 = (undefined8 *)__emutls_get_address(&DAT_00c99bd0);
    local_68 = (ulong)*param_1 | 0x8000000000;
    uStack_60 = 0x400000002;
    local_78 = (ulong)*param_2 | 0x8000000000;
    uStack_70 = 0x400000002;
    FUN_007aac70(*puVar5,&local_68,&local_78,3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FUN_80012444(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  
  puVar4 = (ushort *)(param_1 + 0xb8);
  puVar6 = (ushort *)(param_2 + 0x22);
  piVar3 = (int *)(param_1 + 0xd8);
  uVar5 = (uint)*(byte *)(param_1 + 0x16);
  uVar2 = (uint)*(byte *)(param_2 + 0x14);
  do {
    *puVar4 = *puVar4 | 0x4000;
    if (uVar2 == 0) {
      *piVar3 = 0;
    }
    else {
      iVar1 = 0;
      if (*puVar6 != 0) {
        iVar1 = param_2 + (uint)*puVar6;
      }
      *piVar3 = iVar1;
      uVar2 = uVar2 - 1;
      puVar6 = puVar6 + 1;
    }
    piVar3 = piVar3 + 0x58;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 0xb0;
  } while (uVar5 != 0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x80010b10) */

void start(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  uint uVar3;
  undefined *unaff_retaddr;
  undefined4 uVar4;
  
  ppuVar2 = &StartReturnAddress;
  do {
    *ppuVar2 = (undefined *)0x0;
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < &DAT_8004091c);
  uVar3 = DAT_8004593c - 8U | 0x80000000;
  DAT_80028aec = ((DAT_8004593c - 8U) - DAT_80045940) + -0x4091c;
  DAT_80028ae8 = &DAT_8004091c;
  uVar4 = 0x80010acc;
  StartReturnAddress = unaff_retaddr;
  main();
  iVar1 = IsGameRunning;
  trap(1);
  *(undefined4 *)(uVar3 - 0xc) = unaff_s0;
  *(undefined4 *)(uVar3 - 8) = unaff_s1;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  if (iVar1 == 0) {
    IsGameRunning = 1;
  }
  return;
}


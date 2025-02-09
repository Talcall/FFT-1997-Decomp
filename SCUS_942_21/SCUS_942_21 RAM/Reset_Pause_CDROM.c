
void Reset_Pause_CDROM(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  CdFlush();
  do {
    iVar1 = CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  } while (iVar1 == 0);
  VSync(3);
  return;
}


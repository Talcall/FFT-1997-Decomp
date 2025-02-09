
void Open_File_to_RAM_Centre(int param_1)

{
  int iVar1;
  u_char local_10 [8];
  
  switch(*(undefined4 *)(param_1 + 4)) {
  default:
    goto switchD_80011e70_caseD_0;
  case 1:
    local_10[0] = 0x80;
    CdControl('\x0e',local_10,(u_char *)0x0);
    DAT_80057718 = 0;
    iVar1 = *(int *)(param_1 + 4) + 1;
    break;
  case 2:
    if (DAT_80057718 < 4) goto switchD_80011e70_caseD_0;
    iVar1 = *(int *)(param_1 + 4) + 1;
    break;
  case 3:
    CdControlF('\x15',(u_char *)(param_1 + 0x1c));
    iVar1 = *(int *)(param_1 + 4) + 1;
    break;
  case 4:
    iVar1 = CdSync(1,(u_char *)0x0);
    if (iVar1 != 2) {
      if (iVar1 != 5) goto switchD_80011e70_caseD_0;
LAB_80011fbc:
      Reset_CD_Subsystems();
      iVar1 = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 4) = 1;
LAB_80011fd4:
      *(int *)(param_1 + 8) = iVar1 + 1;
      goto switchD_80011e70_caseD_0;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(int *)(param_1 + 0x20) != 0) goto switchD_80011e70_caseD_0;
    goto LAB_80011f10;
  case 5:
    iVar1 = CdRead(*(int *)(param_1 + 0x10),*(u_long **)(param_1 + 0x20),0x80);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      goto LAB_80011fd4;
    }
    DAT_80057718 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 4) + 1;
    break;
  case 6:
    iVar1 = CdReadSync(1,(u_char *)0x0);
    if (iVar1 != 0) {
      if ((iVar1 != *(int *)(param_1 + 0x10)) && (iVar1 != -1)) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        goto switchD_80011e70_caseD_0;
      }
      if (DAT_80057718 < 0x101) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        goto switchD_80011e70_caseD_0;
      }
      DAT_80057718 = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_80011fbc;
    }
LAB_80011f10:
    *(undefined4 *)(param_1 + 4) = 0;
    goto switchD_80011e70_caseD_0;
  }
  *(int *)(param_1 + 4) = iVar1;
switchD_80011e70_caseD_0:
  if (*(int *)(param_1 + 4) != 0) {
    Draw_NowLoading();
  }
  return;
}


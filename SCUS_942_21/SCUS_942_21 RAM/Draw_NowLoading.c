
void Draw_NowLoading(void)

{
  uint uVar1;
  u_long *ot;
  
  if (DAT_80028b08 != 0xffffffff) {
    DAT_80028b08 = DAT_80028b08 + 1;
    uVar1 = DAT_80028b08 & 1;
    if (0x3f < (int)DAT_80028b08) {
      PutDrawEnv(&DRAWENV1 + uVar1);
      PutDispEnv(&DISPENV1 + uVar1);
      ot = (u_long *)(uVar1 * 8 + -0x7ffcd598);
      ClearOTag(ot,2);
      Put_NowLoading_ToOTAG(ot);
      DrawOTag(ot);
      SetDispMask(1);
      DAT_80028b08 = DAT_80028b08 & 0x41;
    }
  }
  return;
}



int _Calculate_File_Header
              (fileOpenDesc *fileOpenDesc,int lba,int nosect,u_long *addr,int nowloadingflag)

{
  int couldCalculateCdlLOC;
  RECT local_30;
  
  if (fileOpenDesc->busy == 0) {
    if (nowloadingflag != 1) {
      DAT_80028b08 = nowloadingflag;
    }
    if (nowloadingflag == 0) {
      SetDispMask(0);
      BuildNowLoadingImages(1,0,0);
      local_30.w = 0x100;
      local_30.x = 0;
      local_30.y = 0;
      local_30.h = 0x1e0;
      ClearImage(&local_30,'\0','\0','\0');
      DrawSync(0);
      SetDefDrawEnv(&DRAWENV1,0,0,0x100,0xf0);
      SetDefDispEnv(&DISPENV1,0,0xf0,0x100,0xf0);
      SetDefDrawEnv(&DRAWENV2,0,0xf0,0x100,0xf0);
      SetDefDispEnv(&DISPENV2,0,0,0x100,0xf0);
      DRAWENV2.ofs[1] = 0xf0;
      DRAWENV2.ofs[0] = 0;
      DRAWENV1.ofs[1] = 0;
      DRAWENV1.ofs[0] = 0;
      DRAWENV2.dfe = '\x01';
      DRAWENV2.isbg = '\x01';
      DRAWENV1.dfe = '\x01';
      DRAWENV1.isbg = '\x01';
      PutDrawEnv(&DRAWENV2);
      PutDispEnv(&DISPENV2);
    }
    fileOpenDesc->field0_0x0 = 0;
    fileOpenDesc->field6_0x18 = 0;
    fileOpenDesc->field2_0x8 = 0;
    fileOpenDesc->busy = 1;
    fileOpenDesc->lba = lba;
    CdIntToPos(lba,&fileOpenDesc->CdlLOC);
    couldCalculateCdlLOC = 0;
    fileOpenDesc->nosect = nosect;
    fileOpenDesc->addr = (u_long)addr;
  }
  else {
    couldCalculateCdlLOC = 1;
  }
  return couldCalculateCdlLOC;
}


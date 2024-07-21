typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct fileOpenDesc fileOpenDesc, *PfileOpenDesc;

typedef struct CdlLOC CdlLOC, *PCdlLOC;

typedef ulong __u_long;

typedef __u_long u_long;

typedef uchar u_char;

struct CdlLOC {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
};

struct fileOpenDesc { // custom FFT file header used to load most files
    undefined4 field0_0x0;
    int busy;
    undefined4 field2_0x8;
    undefined4 field3_0xc;
    int nosect;
    int lba;
    undefined4 field6_0x18;
    struct CdlLOC CdlLOC;
    u_long addr;
};

typedef struct 16Palette 16Palette, *P16Palette;

struct 16Palette {
    short argb0;
    short argb1;
    short argb2;
    short argb3;
    short argb4;
    short argb5;
    short argb6;
    short argb7;
    short argb8;
    short argb9;
    short argbA;
    short argbB;
    short argbC;
    short argbD;
    short argbE;
    short argbF;
};


// WARNING! conflicting data type names: /TYPES.H/u_long - /types.h/u_long

typedef ushort u_short;

typedef struct VERTC VERTC, *PVERTC;

typedef struct CVECTOR CVECTOR, *PCVECTOR;

struct CVECTOR {
    u_char r;
    u_char g;
    u_char b;
    u_char cd;
};

struct VERTC {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
    struct CVECTOR col;
};

typedef void (* CdlCB)(u_char, u_char *);

typedef struct CdlATV CdlATV, *PCdlATV;

struct CdlATV {
    u_char val0;
    u_char val1;
    u_char val2;
    u_char val3;
};

typedef struct TILE_8 TILE_8, *PTILE_8;

struct TILE_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct POLY_G3 POLY_G3, *PPOLY_G3;

struct POLY_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
};

typedef struct TMD_PRIM TMD_PRIM, *PTMD_PRIM;

typedef struct SVECTOR SVECTOR, *PSVECTOR;

struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short pad;
};

struct TMD_PRIM {
    u_long id;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    u_short tpage;
    u_short clut;
    u_char u0;
    u_char $2;
    u_char u1;
    u_char $3;
    u_char u2;
    u_char v2;
    u_char u3;
    u_char v3;
    struct SVECTOR x0;
    struct SVECTOR x1;
    struct SVECTOR x2;
    struct SVECTOR x3;
    struct SVECTOR n0;
    struct SVECTOR n1;
    struct SVECTOR n2;
    struct SVECTOR n3;
    struct SVECTOR * v_ofs;
    struct SVECTOR * n_ofs;
    u_short vert0;
    u_short vert1;
    u_short vert2;
    u_short vert3;
    u_short norm0;
    u_short norm1;
    u_short norm2;
    u_short norm3;
};

typedef struct POLY_F3 POLY_F3, *PPOLY_F3;

struct POLY_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
};

typedef struct POLY_F4 POLY_F4, *PPOLY_F4;

struct POLY_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
};

typedef struct POLY_GT3 POLY_GT3, *PPOLY_GT3;

struct POLY_GT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
};

typedef struct POLY_FT4 POLY_FT4, *PPOLY_FT4;

struct POLY_FT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad2;
};

typedef struct POLY_FT3 POLY_FT3, *PPOLY_FT3;

struct POLY_FT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
};

typedef struct DR_MODE DR_MODE, *PDR_MODE;

struct DR_MODE {
    u_long tag;
    u_long code[2];
};

typedef struct LINE_F3 LINE_F3, *PLINE_F3;

struct LINE_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    u_long pad;
};

typedef struct DR_ENV DR_ENV, *PDR_ENV;

struct DR_ENV {
    u_long tag;
    u_long code[15];
};

typedef struct DR_OFFSET DR_OFFSET, *PDR_OFFSET;

struct DR_OFFSET {
    u_long tag;
    u_long code[2];
};

typedef struct RECT RECT, *PRECT;

struct RECT {
    short x;
    short y;
    short w;
    short h;
};

typedef struct POLY_G4 POLY_G4, *PPOLY_G4;

struct POLY_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char pad3;
    short x3;
    short y3;
};

typedef struct TILE_16 TILE_16, *PTILE_16;

struct TILE_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct SPRT_16 SPRT_16, *PSPRT_16;

struct SPRT_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct LINE_G2 LINE_G2, *PLINE_G2;

struct LINE_G2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
};

typedef struct TILE TILE, *PTILE;

struct TILE {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short w;
    short h;
};

typedef struct DISPENV DISPENV, *PDISPENV;

struct DISPENV {
    struct RECT disp;
    struct RECT screen;
    u_char isinter;
    u_char isrgb24;
    u_char pad0;
    u_char pad1;
};

typedef struct TIM_IMAGE TIM_IMAGE, *PTIM_IMAGE;

struct TIM_IMAGE {
    u_long mode;
    struct RECT * crect;
    u_long * caddr;
    struct RECT * prect;
    u_long * paddr;
};

typedef struct DR_PRIO DR_PRIO, *PDR_PRIO;

struct DR_PRIO {
    u_long tag;
    u_long code[2];
};

typedef struct DR_AREA DR_AREA, *PDR_AREA;

struct DR_AREA {
    u_long tag;
    u_long code[2];
};

typedef struct LINE_F4 LINE_F4, *PLINE_F4;

struct LINE_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
    u_long pad;
};

typedef struct SPRT_8 SPRT_8, *PSPRT_8;

struct SPRT_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct SPRT SPRT, *PSPRT;

struct SPRT {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short w;
    short h;
};

typedef struct LINE_F2 LINE_F2, *PLINE_F2;

struct LINE_F2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
};

typedef struct DR_TPAGE DR_TPAGE, *PDR_TPAGE;

struct DR_TPAGE {
    u_long tag;
    u_long code[1];
};

typedef struct DR_LOAD DR_LOAD, *PDR_LOAD;

struct DR_LOAD {
    u_long tag;
    u_long code[4];
    u_long p[12];
};

typedef struct LINE_G3 LINE_G3, *PLINE_G3;

struct LINE_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_long pad;
};

typedef struct DR_TWIN DR_TWIN, *PDR_TWIN;

struct DR_TWIN {
    u_long tag;
    u_long code[2];
};

typedef struct DR_MOVE DR_MOVE, *PDR_MOVE;

struct DR_MOVE {
    u_long tag;
    u_long code;
    u_long code2;
    short sx;
    short sy;
    short x0;
    short y0;
    short w;
    short h;
};

typedef struct TILE_1 TILE_1, *PTILE_1;

struct TILE_1 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct LINE_G4 LINE_G4, *PLINE_G4;

struct LINE_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_long pad;
};

typedef struct DRAWENV DRAWENV, *PDRAWENV;

struct DRAWENV {
    struct RECT clip;
    short ofs[2];
    struct RECT tw;
    u_short tpage;
    u_char dtd;
    u_char dfe;
    u_char isbg;
    u_char r0;
    u_char g0;
    u_char b0;
    struct DR_ENV dr_env;
};

typedef struct POLY_GT4 POLY_GT4, *PPOLY_GT4;

struct POLY_GT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad3;
};

typedef int __jmp_buf[6];

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef long __off_t;

typedef struct MATRIX MATRIX, *PMATRIX;

struct MATRIX {
    short m[3][3];
    long t[3];
};

typedef struct VECTOR VECTOR, *PVECTOR;

struct VECTOR {
    long vx;
    long vy;
    long vz;
    long pad;
};

typedef struct DVECTOR DVECTOR, *PDVECTOR;

struct DVECTOR {
    short vx;
    short vy;
};

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef ulong size_t;

typedef struct SpuDecodedData SpuDecodedData, *PSpuDecodedData;

struct SpuDecodedData {
    short cd_left[512];
    short cd_right[512];
    short voice1[512];
    short voice3[512];
};

typedef struct SpuReverbAttr SpuReverbAttr, *PSpuReverbAttr;

typedef struct SpuVolume SpuVolume, *PSpuVolume;

struct SpuVolume {
    short left;
    short right;
};

struct SpuReverbAttr {
    ulong mask;
    long mode;
    struct SpuVolume depth;
    long delay;
    long feedback;
};




// WARNING: Removing unreachable block (ram,0x80010b10)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void start(void)

{
  undefined **ppuVar1;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined *unaff_retaddr;
  undefined4 uVar2;
  
  ppuVar1 = &StartReturnAddress;
  do {
    *ppuVar1 = (undefined *)0x0;
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &DAT_8004091c);
  DAT_80028aec = 0x1be6dc;
  DAT_80028ae8 = &DAT_8004091c;
  uVar2 = 0x80010acc;
  StartReturnAddress = unaff_retaddr;
  main();
  trap(1);
                    // WARNING: Read-only address (ram,0x801fffec) is written
  _UNK_801fffec = unaff_s0;
                    // WARNING: Read-only address (ram,0x801ffff0) is written
  _UNK_801ffff0 = unaff_s1;
                    // WARNING: Read-only address (ram,0x801ffff4) is written
  _UNK_801ffff4 = uVar2;
  if (DAT_80028ae4 == 0) {
    DAT_80028ae4 = 1;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x80010b10)

void FUN_80010ad0(void)

{
  if (DAT_80028ae4 == 0) {
    DAT_80028ae4 = 1;
  }
  return;
}



void BATTLE_ENTRY_DEPRECATED(void)

{
  return;
}



void Put_Stack_Pointer(undefined4 param_1)

{
  undefined auStackX_0 [16];
  
  *(BADSPACEBASE **)param_1 = register0x00000074;
  return;
}



void FUN_80011bc0(void)

{
  Initialise_GameState();
  return;
}



void Calculate_File_Header_NNL(undefined4 *param_1,int param_2,int param_3,u_long *param_4)

{
  _Calculate_File_Header((fileOpenDesc *)param_1,param_2,param_3,param_4,-1);
  return;
}



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
                    // WARNING: Read-only address (ram,0x8004ea7a) is written
      DRAWENV2.ofs[1] = 0xf0;
                    // WARNING: Read-only address (ram,0x8004ea78) is written
      DRAWENV2.ofs[0] = 0;
                    // WARNING: Read-only address (ram,0x8004ea1e) is written
      DRAWENV1.ofs[1] = 0;
                    // WARNING: Read-only address (ram,0x8004ea1c) is written
      DRAWENV1.ofs[0] = 0;
                    // WARNING: Read-only address (ram,0x8004ea87) is written
      DRAWENV2.dfe = '\x01';
                    // WARNING: Read-only address (ram,0x8004ea88) is written
      DRAWENV2.isbg = '\x01';
                    // WARNING: Read-only address (ram,0x8004ea2b) is written
      DRAWENV1.dfe = '\x01';
                    // WARNING: Read-only address (ram,0x8004ea2c) is written
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



// Possible S_I.OBJ/SpuInit

void Reset_CD_Subsystems(void)

{
  CdReset(0);
  return;
}



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
    FUN_80012020();
  }
  return;
}



void FUN_80012020(void)

{
  uint uVar1;
  u_long *ot;
  
  if (DAT_80028b08 != 0xffffffff) {
    DAT_80028b08 = DAT_80028b08 + 1;
    uVar1 = DAT_80028b08 & 1;
    if (0x3f < (int)DAT_80028b08) {
      PutDrawEnv(&DRAWENV1 + uVar1);
      PutDispEnv(&DISPENV1 + uVar1);
      ot = (u_long *)(&UNK_80032a68 + uVar1 * 8);
      ClearOTag(ot,2);
      Build_Now_Loading_x128(ot);
      DrawOTag(ot);
      SetDispMask(1);
      DAT_80028b08 = DAT_80028b08 & 0x41;
    }
  }
  return;
}



void FUN_8001216c(int **param_1)

{
  int iVar1;
  
  if (((int)*(short *)(param_1 + 4) & 0x8000U) != 0) {
    FUN_80012338((int)param_1);
  }
  iVar1 = FUN_80014078(param_1);
  if (iVar1 == 0) {
    FUN_80013f74((int)param_1);
    FUN_80014358((int)param_1);
  }
  return;
}



void FUN_80012338(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0x7fff;
    uVar1 = FUN_800135fc(param_1);
    DAT_80032a08 = uVar1 | DAT_80032a08;
  }
  return;
}



void FUN_800124cc(int param_1)

{
  if (param_1 == 0) {
    FUN_80012860();
    DAT_80032a54 = DAT_80032a54 & 0xefff;
  }
  else {
    DAT_80032a54 = DAT_80032a54 | 0x1000;
  }
  return;
}



void FUN_80012560(uint param_1)

{
  if ((DAT_80032a54 & 0x1000) != 0) {
    DAT_800329f0 = 2;
    FUN_80013b20(0x6004,param_1,0x6000,0x4000);
  }
  return;
}



void FUN_80012664(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((DAT_80032a54 & 0x1000) != 0) {
    uVar1 = FUN_80012d40(param_1,2);
    DAT_800329f0 = 2;
    FUN_80013b20((int)(short)((ushort)uVar1 | 0x2000),param_1,
                 (short)((uint)(param_2 << 0x18) >> 0x10),(short)((uint)(param_3 << 0x18) >> 0x10));
  }
  return;
}



void FUN_80012860(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_80032a60;
  uVar4 = 0;
  iVar3 = 8;
  puVar2 = (ushort *)(DAT_80032a60 + 0xb8);
  do {
    iVar3 = iVar3 + -1;
    if ((*puVar2 & 1) != 0) {
      *puVar2 = 0;
      uVar4 = uVar4 | *(uint *)(puVar2 + 0x1a);
    }
    puVar2 = puVar2 + 0xb0;
  } while (iVar3 != 0);
  DisableEvent();
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  DAT_80032a0c = 0;
  DAT_80032a20 = uVar4 | DAT_80032a20;
  EnableEvent();
  return;
}



void FUN_80012990(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = DAT_80032a60;
  uVar8 = 1;
  uVar5 = 0;
  uVar4 = 0;
  iVar7 = 8;
  puVar6 = (ushort *)(DAT_80032a60 + 0xb8);
  puVar3 = (uint *)(DAT_80032a60 + 0xec);
  do {
    iVar7 = iVar7 + -1;
    if (((*puVar6 & 1) != 0) && (puVar3[-0xb] == param_1)) {
      uVar2 = *puVar3;
      uVar4 = uVar4 | uVar8;
      *puVar6 = 0;
      uVar5 = uVar5 | uVar2;
    }
    uVar8 = uVar8 << 1;
    puVar3 = puVar3 + 0x58;
    puVar6 = puVar6 + 0xb0;
  } while (iVar7 != 0);
  if (uVar4 != 0) {
    FUN_80012ab0(iVar1,uVar4,uVar5);
  }
  return;
}



void FUN_80012ab0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  DisableEvent();
  uVar1 = ~param_3;
  DAT_80032a20 = param_3 | DAT_80032a20;
  *(uint *)(param_1 + 0x58) = ~param_2 & *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x60) = uVar1 & *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x68) = uVar1 & *(uint *)(param_1 + 0x68);
  DAT_80032a0c = uVar1 & DAT_80032a0c;
  *(uint *)(param_1 + 0x6c) = uVar1 & *(uint *)(param_1 + 0x6c);
  *(uint *)(param_1 + 0x70) = uVar1 & *(uint *)(param_1 + 0x70);
  EnableEvent();
  return;
}



uint FUN_80012d40(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_t5;
  uint uVar9;
  
  DAT_80032a14 = 0;
  DAT_80032a10 = 0;
  uVar4 = 1;
  iVar5 = 8;
  puVar3 = (ushort *)(DAT_80032a60 + 0xb8);
  puVar2 = (uint *)(DAT_80032a60 + 0xec);
  do {
    iVar5 = iVar5 + -1;
    if (((*puVar3 & 1) != 0) && (puVar2[-0xb] == param_1)) {
      uVar1 = *puVar2;
      DAT_80032a10 = DAT_80032a10 | uVar4;
      *puVar3 = 0;
      DAT_80032a14 = DAT_80032a14 | uVar1;
    }
    uVar4 = uVar4 << 1;
    puVar2 = puVar2 + 0x58;
    puVar3 = puVar3 + 0xb0;
  } while (iVar5 != 0);
  uVar4 = 6 - param_2;
  uVar8 = 0xffffffff >> (0x20 - param_2 & 0x1f);
  uVar1 = uVar8 << (uVar4 & 0x1f);
  iVar5 = DAT_80032a60 + uVar4 * 0x160 + 0xb8;
  uVar6 = 0xffffffff;
  while( true ) {
    if ((~DAT_80032a10 & *(uint *)(DAT_80032a60 + 0x58) & uVar1) == 0) {
      return uVar4;
    }
    uVar1 = uVar1 >> (param_2 & 0x1f);
    uVar7 = uVar6;
    uVar9 = in_t5;
    if ((uVar6 <= *(uint *)(iVar5 + 0x10)) ||
       (uVar7 = *(uint *)(iVar5 + 0x10), uVar9 = uVar4, *(byte *)(iVar5 + 0xd) < 0x21)) {
      uVar6 = uVar7;
      in_t5 = uVar9;
    }
    if (uVar1 < uVar8) break;
    iVar5 = iVar5 + param_2 * -0x160;
    uVar4 = uVar4 - param_2;
  }
  return in_t5;
}



void FUN_80012f08(int param_1,uint param_2,short param_3)

{
  int iVar1;
  
  *(short *)(param_1 + 0x9e) = (short)(param_2 << 8);
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x94) = param_2 << 0x18;
    *(undefined2 *)(param_1 + 0x9c) = 0;
    FUN_80017098(0x100,param_1);
  }
  else {
    iVar1 = param_2 * 0x10000 - (*(int *)(param_1 + 0x94) >> 8);
    if (iVar1 == 0) {
      return;
    }
    *(short *)(param_1 + 0x9c) = param_3;
    *(int *)(param_1 + 0x98) = iVar1 / (int)param_3 << 8;
  }
  if (((*(ushort *)(param_1 + 0x10) & 0x100) != 0) && ((param_2 & 0xffff) != 0)) {
    DisableEvent();
    FUN_80018140(*(uint *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x48),
                 *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    FUN_800170d8(param_1,0x71ff);
    FUN_80013544(param_1);
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfeff | 0x8000;
    EnableEvent();
  }
  return;
}



void FUN_80013480(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1[1] != 0) && ((*(ushort *)(param_1 + 4) & 0x10) != 0)) {
    DisableEvent();
    uVar1 = FUN_800135fc((int)param_1);
    uVar2 = param_1[9];
    DAT_80032a08 = uVar1 | DAT_80032a08;
    FUN_80013fc0(param_1,(undefined4 *)param_1[1]);
    param_1[0xb] = uVar2;
    FUN_800170d8((int)param_1,0x71ff);
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    FUN_80013544((int)param_1);
    EnableEvent();
  }
  return;
}



uint FUN_80013544(int param_1)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x16);
  puVar2 = (uint *)(param_1 + 0xb8);
  uVar4 = 0;
  puVar1 = (ushort *)(param_1 + 0xba);
  do {
    uVar3 = uVar3 - 1;
    if (((*puVar2 & 0x101) == 0x101) && ((*(ushort *)puVar2 & 0x30) == 0)) {
      uVar4 = uVar4 | *(uint *)(puVar1 + 0x19);
      *puVar1 = *puVar1 | 1;
    }
    puVar1 = puVar1 + 0xb0;
    puVar2 = puVar2 + 0x58;
  } while (uVar3 != 0);
  return uVar4;
}



uint FUN_800135fc(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x16);
  psVar2 = (short *)(param_1 + 0xb8);
  uVar3 = 0;
  do {
    uVar1 = uVar1 - 1;
    if (*psVar2 != 0) {
      uVar3 = uVar3 | *(uint *)(psVar2 + 0x1a);
    }
    psVar2 = psVar2 + 0xb0;
  } while (uVar1 != 0);
  return uVar3;
}



undefined4 * FUN_8001363c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = FUN_80014278(3000);
  FUN_80013788((int)puVar1);
  puVar6 = puVar1 + 0x2e;
  uVar3 = 0x10;
  iVar5 = 8;
  cVar4 = '\0';
  piVar2 = puVar1 + 0x3b;
  do {
    *(undefined2 *)puVar6 = 0;
    *(char *)(piVar2 + -10) = cVar4;
    cVar4 = cVar4 + '\x01';
    *(char *)((int)piVar2 + -7) = (char)uVar3;
    *piVar2 = 1 << (uVar3 & 0x1f);
    piVar2 = piVar2 + 0x58;
    puVar6 = puVar6 + 0x58;
    iVar5 = iVar5 + -1;
    uVar3 = uVar3 + 1;
  } while (iVar5 != 0);
  FUN_80014024(puVar1);
  return puVar1;
}



void FUN_80013788(int param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 2;
  *(undefined2 *)(param_1 + 0x12) = 0x7fff;
  *(undefined *)(param_1 + 0x14) = 1;
  *(undefined *)(param_1 + 0x15) = 1;
  *(undefined *)(param_1 + 0x16) = 8;
  *(undefined *)(param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0x7f;
  FUN_800137d8(param_1);
  return;
}



void FUN_800137d8(int param_1)

{
  FUN_80013f74(param_1);
  *(undefined *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1d) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 1;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x38) = 4;
  *(undefined2 *)(param_1 + 0x3c) = 4;
  *(undefined2 *)(param_1 + 0x3e) = 4;
  *(undefined4 *)(param_1 + 0x88) = 0x1000000;
  *(undefined4 *)(param_1 + 0x94) = 0x7f000000;
  *(undefined4 *)(param_1 + 0x7c) = 0x660000;
  *(undefined4 *)(param_1 + 0x78) = 0x6600;
  *(undefined4 *)(param_1 + 0x74) = 0x10000;
  *(short *)(param_1 + 0x3a) = (short)(0x30 / *(byte *)(param_1 + 0x15));
  return;
}



void FUN_80013b20(uint param_1,uint param_2,short param_3,undefined2 param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_50;
  uint local_40;
  
  iVar3 = DAT_80032a60;
  local_40 = 0;
  uVar13 = 0;
  uVar1 = *(ushort *)(DAT_80032a00 + 10);
  iVar11 = DAT_80032a00;
  while ((uint)uVar1 != (int)param_2 >> 0x10) {
    iVar11 = *(int *)(iVar11 + 0x10);
    if (iVar11 == 0) {
      return;
    }
    uVar1 = *(ushort *)(iVar11 + 10);
  }
  uVar10 = DAT_80032a44;
  if (DAT_80032a44 != 0) {
    do {
      if ((uint)*(ushort *)(uVar10 + 0x20) == (int)*(short *)(DAT_80032a60 + 0x18)) break;
      uVar10 = *(uint *)(uVar10 + 0x2c);
    } while (uVar10 != 0);
    if (uVar10 == 0) {
      uVar10 = DAT_80032a44;
    }
  }
  uVar15 = (int)param_3 *
           (uint)*(byte *)(iVar11 + (uint)*(ushort *)(iVar11 + 0xc) + (param_2 & 0xffff));
  local_50 = (undefined2)(uVar15 >> 7);
  if ((uVar15 >> 0x16 & 1) != 0) {
    local_50 = 0x7fff;
  }
  puVar12 = (ushort *)(iVar11 + (param_2 & 0xffff) * 4 + 0x14);
  uVar14 = 1 << (param_1 & 0x1f);
  puVar8 = (ushort *)(DAT_80032a60 + (param_1 & 0xff) * 0x160 + 0xb8);
  iVar9 = (int)DAT_800329f0;
  puVar7 = (uint *)(puVar8 + 0x1a);
  DisableEvent();
  uVar15 = 0;
  do {
    uVar4 = DAT_80032a2c;
    puVar7[-0xb] = param_2;
    puVar7[-9] = uVar4;
    *(char *)((int)puVar7 + -0x27) = (char)(param_1 >> 8);
    iVar6 = 3;
    if (*puVar12 == 0) {
      if ((*puVar8 & 1) != 0) {
        uVar13 = uVar13 | *puVar7;
      }
      *puVar8 = 0;
    }
    else {
      local_40 = local_40 | uVar14;
      uVar4 = *puVar7;
      puVar5 = puVar8 + 0x30;
      *puVar8 = 0x409;
      *(undefined2 *)((int)puVar7 + -0x32) = 0x100;
      *(undefined2 *)((int)puVar7 + -0x2e) = 0;
      uVar1 = *puVar12;
      *(undefined2 *)((int)puVar7 + 0x4a) = 0x3c;
      *(undefined2 *)((int)puVar7 + 0x46) = 0xf;
      puVar7[-6] = 0;
      puVar7[-4] = 0;
      *(undefined2 *)(puVar7 + -3) = 0;
      *(undefined *)((int)puVar7 + -10) = 0;
      *(undefined2 *)(puVar7 + 0x10) = 0;
      *(undefined *)((int)puVar7 + 0x42) = 0;
      *(undefined2 *)((int)puVar7 + 0x52) = 0;
      *(undefined *)(puVar7 + 0x12) = 0;
      *(undefined2 *)(puVar7 + 0x1e) = 0xffff;
      puVar7[0x19] = 0x7f000000;
      uVar15 = uVar15 | uVar4;
      *(undefined2 *)(puVar7 + 0x18) = local_50;
      *(undefined2 *)(puVar7 + 0x17) = 0;
      *(undefined2 *)(puVar7 + 0x15) = 0;
      *(undefined2 *)((int)puVar7 + 0x56) = 0;
      *(undefined2 *)(puVar7 + 0x16) = 0;
      *(undefined2 *)(puVar7 + 3) = 0;
      *(undefined2 *)((int)puVar7 + 0xe) = 0;
      puVar7[-8] = iVar11 + (uint)uVar1;
      puVar7[-7] = iVar11 + (uint)uVar1;
      *(undefined2 *)((int)puVar7 + 0x5e) = param_4;
      do {
        puVar5[0x7f] = 0;
        iVar6 = iVar6 + -1;
        puVar5 = puVar5 + -0x10;
      } while (-1 < iVar6);
      puVar7[-1] = uVar10;
      if (uVar10 != 0) {
        Set_Instrument((int)DAT_80032a1c,puVar8);
      }
    }
    puVar12 = puVar12 + 1;
    uVar14 = uVar14 << 1;
    puVar7 = puVar7 + 0x58;
    iVar9 = iVar9 + -1;
    puVar8 = puVar8 + 0xb0;
  } while (iVar9 != 0);
  uVar13 = uVar13 | uVar15 | DAT_80032a14;
  uVar10 = ~uVar13;
  *(uint *)(iVar3 + 0x58) = local_40 | ~DAT_80032a10 & *(uint *)(iVar3 + 0x58);
  *(uint *)(iVar3 + 100) = uVar10 & *(uint *)(iVar3 + 100);
  *(uint *)(iVar3 + 0x60) = uVar10 & *(uint *)(iVar3 + 0x60);
  DAT_80032a20 = uVar13 | DAT_80032a20;
  DAT_80032a0c = uVar15 | uVar10 & DAT_80032a0c;
  *(uint *)(iVar3 + 0x68) = uVar10 & *(uint *)(iVar3 + 0x68);
  *(uint *)(iVar3 + 0x6c) = uVar10 & *(uint *)(iVar3 + 0x6c);
  DAT_80032a10 = 0;
  DAT_80032a14 = 0;
  *(uint *)(iVar3 + 0x70) = uVar10 & *(uint *)(iVar3 + 0x70);
  DAT_80032a4c = DAT_80032a4c | 7;
  *(ushort *)(iVar3 + 0x10) = *(ushort *)(iVar3 + 0x10) | 0x8000;
  piVar2 = DAT_80032a50;
  if (uVar15 != 0) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      if (((*(ushort *)(piVar2 + 4) & 1) != 0) && ((int)((uint)*(ushort *)(piVar2 + 4) << 0x10) < 0)
         ) {
        puVar12 = (ushort *)(piVar2 + 0x2e);
        uVar13 = (uint)*(byte *)((int)piVar2 + 0x16);
        puVar8 = (ushort *)(piVar2 + 0x2f);
        do {
          uVar1 = *puVar12;
          puVar12 = puVar12 + 0xb0;
          if (((uVar1 & 1) != 0) && ((uVar15 & *(uint *)(puVar8 + 0x18)) != 0)) {
            *puVar8 = *puVar8 | 0x71ff;
          }
          uVar13 = uVar13 - 1;
          puVar8 = puVar8 + 0xb0;
        } while (uVar13 != 0);
      }
    }
  }
  EnableEvent();
  return;
}



void FUN_80013f74(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    do {
      iVar2 = *(int *)(iVar1 + 4);
      FUN_80014358(iVar1);
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}



void FUN_80013fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_8001442c(param_1,param_2,(uint)*(byte *)((int)param_1 + 0x16) * 0x160 + 0xb8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



void FUN_80014024(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  DisableEvent();
  puVar1 = param_1;
  *param_1 = DAT_80032a50;
  DAT_80032a50 = puVar1;
  EnableEvent();
  return;
}



undefined4 FUN_80014078(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  
  ppiVar2 = DAT_80032a50;
  ppiVar4 = (int **)0x0;
  if (DAT_80032a50 != (int **)0x0) {
    do {
      ppiVar1 = ppiVar2;
      ppiVar2 = ppiVar1;
      if (ppiVar1 == param_1) break;
      ppiVar2 = (int **)*ppiVar1;
      ppiVar4 = ppiVar1;
    } while (ppiVar2 != (int **)0x0);
    if (ppiVar2 != (int **)0x0) {
      if ((((int)(short)*(ushort *)(param_1 + 4) & 0x8000U) != 0) && (param_1 != (int **)0x0)) {
        *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0x7fff;
        uVar3 = FUN_800135fc((int)param_1);
        DAT_80032a08 = uVar3 | DAT_80032a08;
      }
      if (ppiVar4 == (int **)0x0) {
        DAT_80032a50 = (int **)*param_1;
      }
      else {
        *ppiVar4 = *param_1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}



void FUN_8001423c(undefined2 *param_1,uint param_2)

{
  DAT_80032a38 = param_2 & 0xfffffff0;
  DAT_80032a64 = (int)param_1 + DAT_80032a38;
  *param_1 = 0x8000;
  DAT_800329f8 = param_1;
  DAT_800329fc = param_1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 **)(param_1 + 4) = param_1 + 8;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



undefined4 * FUN_80014278(uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (param_1 + 0xf & 0xfffffff0) + 0x10;
  iVar4 = *(int *)(DAT_800329fc + 0xc);
  iVar1 = DAT_800329fc;
  while (iVar4 != 0) {
    iVar5 = *(int *)(iVar1 + 0xc);
    if (uVar6 <= (uint)(iVar5 - *(int *)(iVar1 + 8))) goto LAB_800142f0;
    iVar1 = iVar5;
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  if ((uint)(DAT_80032a64 - *(int *)(iVar1 + 8)) < uVar6) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
LAB_800142f0:
    puVar2 = (undefined2 *)(*(int *)(iVar1 + 8) + 0xfU & 0xfffffff0);
    puVar3 = (undefined4 *)(puVar2 + 8);
    *(uint *)(puVar2 + 4) = (int)puVar3 + param_1;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *puVar2 = 2;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined2 **)(iVar1 + 0xc) = puVar2;
    FUN_800144d0(puVar3,param_1);
  }
  return puVar3;
}



void FUN_80014358(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_800329fc;
  if (DAT_800329fc != param_1 + -0x10) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0xc);
    } while (*(int *)(iVar2 + 0xc) != param_1 + -0x10);
  }
  if (iVar2 == 0) {
    DAT_800329fc = *(int *)(DAT_800329fc + 0xc);
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + -4);
  }
  return;
}



void FUN_8001442c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar6 = (int)param_3 >> 4;
  if (iVar6 != 0) {
    puVar9 = param_1 + 3;
    puVar8 = param_2 + 3;
    do {
      uVar3 = puVar8[-2];
      uVar4 = puVar8[-1];
      uVar5 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar2 = *param_2;
      param_2 = param_2 + 4;
      iVar6 = iVar6 + -1;
      *param_1 = uVar2;
      puVar9[-2] = uVar3;
      puVar9[-1] = uVar4;
      *puVar9 = uVar5;
      puVar9 = puVar9 + 4;
      param_1 = param_1 + 4;
    } while (iVar6 != 0);
  }
  for (uVar7 = (int)param_3 >> 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar2;
    param_1 = param_1 + 1;
  }
  for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar1 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined *)param_1 = uVar1;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



void FUN_800144d0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)param_2 >> 4;
  if (iVar1 != 0) {
    puVar3 = param_1 + 1;
    do {
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 4;
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 4;
    } while (iVar1 != 0);
  }
  for (uVar2 = (int)param_2 >> 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



void FUN_80014544(void)

{
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void Call_SpuMalloc(uint param_1)

{
  SpuMalloc(param_1);
  return;
}



undefined4 Call_SpuFree(ulong param_1)

{
  SpuFree(param_1);
  return 0;
}



void FUN_80014590(void)

{
  uint uVar1;
  int *piVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint local_38;
  
  piVar4 = DAT_80032a50;
  if (DAT_80032a50 != (int *)0x0) {
    do {
      uVar1 = (uint)(short)*(ushort *)(piVar4 + 4);
      if (((uVar1 & 0xc000) != 0) && ((uVar1 & 0x20) == 0)) {
        *(ushort *)(piVar4 + 4) = *(ushort *)(piVar4 + 4) & 0xbfff;
        uVar6 = (uint)*(byte *)((int)piVar4 + 0x16);
        piVar5 = piVar4 + 0x2e;
        if ((uVar1 & 2) == 0) {
          local_38 = ~(DAT_80032a0c | DAT_80032a20);
        }
        else {
          local_38 = 0xffffffff;
        }
        piVar2 = piVar4 + 0x2f;
        do {
          if (((*(ushort *)piVar5 & 1) != 0) && ((local_38 & piVar2[0xc]) != 0)) {
            uVar3 = *(ushort *)piVar2;
            if (uVar3 != 0) {
              uVar1 = (uint)*(byte *)((int)piVar2 + 0x29);
              if ((uVar3 & 2) != 0) {
                uVar3 = uVar3 & 0xfffe;
                FUN_8001b4b0(uVar1,*(ushort *)(piVar2 + 0xe),*(ushort *)((int)piVar2 + 0x3a),
                             (int)(short)*(ushort *)(piVar2 + 0xf),*(ushort *)((int)piVar2 + 0x3e));
              }
              if ((uVar3 & 1) != 0) {
                FUN_8001b428(uVar1,*(ushort *)(piVar2 + 0xe),*(ushort *)((int)piVar2 + 0x3a));
              }
              if ((uVar3 & 4) != 0) {
                FUN_8001b628(uVar1,*(word *)(piVar2 + 0x11));
              }
              if ((uVar3 & 8) != 0) {
                FUN_8001b6a4(uVar1,piVar2[0x13]);
                FUN_8001b720(uVar1,piVar2[0x14]);
              }
              if ((uVar3 & 0x10) != 0) {
                FUN_8001b938(uVar1,(uint)*(ushort *)(piVar2 + 0x18),piVar2[0x15]);
              }
              if ((uVar3 & 0x20) != 0) {
                FUN_8001b79c(uVar1,(uint)*(ushort *)((int)piVar2 + 0x62));
              }
              if ((uVar3 & 0x40) != 0) {
                FUN_8001b9d4(uVar1,(uint)*(ushort *)(piVar2 + 0x19),piVar2[0x16]);
              }
              if ((uVar3 & 0x80) != 0) {
                FUN_8001bab8(uVar1,*(ushort *)((int)piVar2 + 0x66),piVar2[0x17]);
              }
              if ((uVar3 & 0x100) != 0) {
                FUN_8001b8b0(uVar1,*(ushort *)(piVar2 + 0x1a));
              }
              if ((uVar3 & 4) != 0) {
                DAT_80032a4c = DAT_80032a4c | 1;
              }
              if ((uVar3 & 0x10) != 0) {
                DAT_80032a4c = DAT_80032a4c | 2;
              }
              if ((uVar3 & 0x40) != 0) {
                DAT_80032a4c = DAT_80032a4c | 4;
              }
              *(ushort *)piVar2 = 0;
            }
          }
          piVar2 = piVar2 + 0x58;
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 0x58;
        } while (uVar6 != 0);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return;
}



void FUN_80014f18(int *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 2);
  *(short *)(param_1 + 2) = sVar1 + -1;
  if (sVar1 == 1) {
    iVar2 = (int)*(short *)((int)param_1 + 10) << 0x10;
  }
  else {
    iVar2 = *param_1 + param_1[1];
  }
  *param_1 = iVar2;
  return;
}



void FUN_80014f58(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  piVar1 = DAT_80032a50;
  if (DAT_80032a50 != (int *)0x0) {
    do {
      if ((short)*(ushort *)(piVar1 + 4) < 0) {
        if ((*(ushort *)(piVar1 + 4) & 1) == 0) {
          uVar2 = uVar2 | piVar1[0x1a];
        }
        else {
          uVar3 = uVar3 | piVar1[0x1a];
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = uVar3 & ~DAT_80032a0c | uVar2;
  SpuSetPitchLFOVoice(1,uVar2);
  SpuSetPitchLFOVoice(0,~uVar2);
  return;
}



void FUN_80014ff8(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  piVar1 = DAT_80032a50;
  if (DAT_80032a50 != (int *)0x0) {
    do {
      if ((short)*(ushort *)(piVar1 + 4) < 0) {
        if ((*(ushort *)(piVar1 + 4) & 1) == 0) {
          uVar2 = uVar2 | piVar1[0x1b];
        }
        else {
          uVar3 = uVar3 | piVar1[0x1b];
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = uVar3 & ~DAT_80032a0c | uVar2;
  SpuSetNoiseVoice(1,uVar2);
  SpuSetNoiseVoice(0,~uVar2);
  return;
}



void FUN_80015098(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  piVar1 = DAT_80032a50;
  if (DAT_80032a50 != (int *)0x0) {
    do {
      if ((short)*(ushort *)(piVar1 + 4) < 0) {
        if ((*(ushort *)(piVar1 + 4) & 1) == 0) {
          uVar2 = uVar2 | piVar1[0x1c];
        }
        else {
          uVar3 = uVar3 | piVar1[0x1c];
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = uVar3 & ~DAT_80032a0c | uVar2;
  SpuSetReverbVoice(1,uVar2);
  SpuSetReverbVoice(0,~uVar2);
  return;
}



void FUN_80015138(int param_1,ushort *param_2,short param_3)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  
  sVar1 = *(short *)(param_1 + 0x84);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x86) << 0x10;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
    }
    *(int *)(param_1 + 0x7c) = iVar4;
    *(short *)(param_1 + 0x84) = sVar1 + -1;
    *(int *)(param_1 + 0x78) = (int)*(short *)(param_1 + 0x7e) * (int)*(short *)(param_1 + 0x8a);
  }
  puVar5 = param_2 + 3;
  do {
    uVar2 = *param_2;
    if (uVar2 != 0) {
      uVar7 = puVar5[-2];
      uVar6 = *puVar5;
      if (puVar5[0x37] != 0) {
        puVar5[0x41] = 0;
        puVar5[0x42] = 0;
        puVar5[0x43] = 0;
        if ((uVar6 & 8) != 0) {
          uVar3 = puVar5[0x51];
          puVar5[0x51] = uVar3 - 1;
          uVar7 = uVar7 | 0x100;
          if ((ushort)(uVar3 - 1) == 0) {
            uVar6 = uVar6 & 0xfff7;
          }
          *(int *)(puVar5 + 0x49) = *(int *)(puVar5 + 0x49) + *(int *)(puVar5 + 0x4d);
        }
        if ((uVar6 & 1) != 0) {
          uVar7 = uVar7 | 0x200;
          if (((uVar6 & 2) == 0) &&
             (uVar3 = puVar5[0x50], puVar5[0x50] = uVar3 - 1, (ushort)(uVar3 - 1) == 0)) {
            uVar6 = uVar6 & 0xfffe;
          }
          *(int *)(puVar5 + 0x3d) = *(int *)(puVar5 + 0x3d) + *(int *)(puVar5 + 0x4b);
        }
        if ((uVar6 & 0x10) != 0) {
          uVar3 = puVar5[0x52];
          puVar5[0x52] = uVar3 - 1;
          uVar7 = uVar7 | 0x100;
          if ((ushort)(uVar3 - 1) == 0) {
            uVar6 = uVar6 & 0xffef;
          }
          puVar5[0x46] = puVar5[0x46] + puVar5[0x4f];
        }
        uVar3 = puVar5[0x37];
        puVar5[0x37] = uVar3 - 1;
        if (((ushort)(uVar3 - 1) == 1) && ((uVar2 & 0x1000) != 0)) {
          puVar5[0x32] = 6;
          puVar5[-1] = puVar5[-1] | 0x80;
        }
        if (((uVar2 & 0x600) == 0) &&
           (uVar2 = puVar5[0x39], puVar5[0x39] = uVar2 - 1, (ushort)(uVar2 - 1) == 0)) {
          uVar7 = uVar7 | 2;
          *param_2 = *param_2 | 0x400;
        }
      }
      puVar5[-2] = uVar7;
      *puVar5 = uVar6;
    }
    puVar5 = puVar5 + 0xb0;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0xb0;
  } while (param_3 != 0);
  return;
}



void FUN_80015324(int param_1,ushort *param_2,short param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ushort *puVar12;
  uint uVar13;
  
  uVar13 = 1;
  puVar12 = param_2 + 1;
  do {
    if ((*param_2 != 0) && (bVar3 = false, puVar12[0x39] == 0)) {
      uVar4 = *param_2;
      pbVar10 = *(byte **)(puVar12 + 0xb);
      *param_2 = uVar4 & 0xf8ff;
      do {
        bVar1 = *pbVar10;
        if (bVar1 < 0x80) {
          if ((*param_2 & 8) == 0) {
            puVar12[0x49] = (ushort)bVar1 << 8;
          }
          *puVar12 = *puVar12 | 0x100;
          bVar1 = pbVar10[1];
          cVar2 = (&DAT_80028e70)[bVar1];
          pbVar11 = pbVar10 + 2;
          *(char *)((int)puVar12 + 0x7b) = *(char *)(puVar12 + 0x3e) + cVar2;
          if ((&DAT_80028d8c)[bVar1] == 0) {
            bVar1 = *pbVar11;
            pbVar11 = pbVar10 + 3;
            puVar12[0x39] = (ushort)bVar1;
          }
          else {
            puVar12[0x39] = (ushort)(byte)(&DAT_80028d8c)[bVar1];
          }
          puVar12[1] = puVar12[1] | 0x80;
          puVar12[0x34] = puVar12[0x16];
          *(uint *)(puVar12 + 0x3f) =
               ((uint)(byte)(*(char *)(puVar12 + 0x3e) + cVar2) * 0x100 + (int)(short)puVar12[0x42]
               + (int)(short)puVar12[0x41]) * 0x10000;
          *puVar12 = *puVar12 | 0x200;
          *param_2 = *param_2 | 0x180;
          if ((uVar4 & 0x400) != 0) {
            bVar3 = true;
            *puVar12 = *puVar12 | 1;
          }
          if ((*param_2 & 0x8000) != 0) {
            *param_2 = *param_2 & 0x7fff;
            *puVar12 = *puVar12 | 0x300;
            puVar12[1] = puVar12[1] | 0x1ff;
          }
        }
        else {
          pbVar11 = (byte *)(*(code *)(&PTR_Rest_80028b0c)[bVar1 - 0x80 & 0xffff])
                                      (pbVar10 + 1,param_1,param_2);
          if (*param_2 == 0) {
            *(uint *)(param_1 + 0x58) = ~uVar13 & *(uint *)(param_1 + 0x58);
            break;
          }
        }
        pbVar10 = pbVar11;
      } while ((*param_2 & 0x500) == 0);
      *(byte **)(puVar12 + 0xb) = pbVar11;
      if ((*param_2 & 0x800) != 0) {
        *param_2 = *param_2 | 0x200;
      }
      puVar7 = param_2 + (uint)puVar12[0x55] * 6 + 0x58;
      bVar1 = *pbVar11;
      while (uVar4 = (ushort)bVar1, 0x7f < uVar4) {
        if (uVar4 != 0x90) {
          if (uVar4 != 0x80) {
            if (uVar4 == 0x81) {
              *param_2 = *param_2 | 0x200;
              break;
            }
            if (1 < (ushort)(uVar4 - 0xb0)) {
              if (uVar4 == 0x99) {
                if (*(char *)puVar7 != '\0') {
                  pbVar11 = *(byte **)(puVar7 + 2);
                  goto LAB_80015618;
                }
                puVar7 = puVar7 + -6;
              }
              if ((uVar4 == 0x9a) && (*(char *)puVar7 == '\0')) {
                pbVar11 = *(byte **)(puVar7 + 4);
                puVar7 = puVar7 + -6;
              }
              else {
                pbVar11 = pbVar11 + (byte)(&DAT_80028d0c)[(ushort)(uVar4 - 0x80)];
              }
              goto LAB_80015618;
            }
          }
          *param_2 = *param_2 & 0xfdff;
          break;
        }
        pbVar11 = *(byte **)(puVar12 + 0xd);
        if (pbVar11 == (byte *)0x0) break;
LAB_80015618:
        bVar1 = *pbVar11;
      }
      if (uVar4 < 0x80) {
        uVar4 = *param_2 | 0x1000;
      }
      else {
        uVar4 = *param_2 & 0xefff;
      }
      *param_2 = uVar4;
      iVar8 = (int)*(char *)(puVar12 + 0x3a) + (uint)puVar12[0x39];
      if (iVar8 * 0x10000 < 1) {
        iVar8 = (uint)puVar12[0x39] + iVar8;
        *(char *)(puVar12 + 0x3a) = *(char *)(puVar12 + 0x3a) + *(char *)(puVar12 + 0x39);
      }
      uVar9 = (uint)puVar12[0x3c];
      uVar4 = (ushort)iVar8;
      if (uVar9 == 0xf) {
        uVar9 = iVar8 - 1;
LAB_80015704:
        uVar6 = (ushort)uVar9;
        if ((uVar9 & 0xffff) == 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = uVar4;
        if (uVar9 != 0x10) {
          uVar9 = (int)(short)uVar4 * uVar9 >> 4;
          goto LAB_80015704;
        }
      }
      puVar12[0x3b] = uVar6;
      puVar12[0x39] = uVar4;
      if (bVar3) {
        iVar8 = 4;
        if (((puVar12[2] & 4) != 0) &&
           (iVar5 = ((uint)*(byte *)((int)puVar12 + 0x7b) - (uint)*(byte *)(puVar12 + 0x3d)) *
                    0x1000000, iVar5 != 0)) {
          puVar12[2] = puVar12[2] | 1;
          puVar12[0x52] = puVar12[0x47];
          *(uint *)(puVar12 + 0x3f) =
               ((uint)*(byte *)(puVar12 + 0x3d) * 0x100 + (int)(short)puVar12[0x42] +
               (int)(short)puVar12[0x41]) * 0x10000;
          *(int *)(puVar12 + 0x4d) = iVar5 / (int)(uint)puVar12[0x47];
        }
        puVar7 = param_2 + 0x7f;
        *(undefined *)(puVar12 + 0x3d) = *(undefined *)((int)puVar12 + 0x7b);
        do {
          uVar4 = *puVar7;
          if (((uVar4 & 1) != 0) && ((uVar4 & 2) != 0)) {
            *(undefined4 *)(puVar7 + -0xd) = 0;
            puVar7[-7] = 1;
            puVar7[-5] = puVar7[-4];
            puVar7[-3] = puVar7[-2];
            if ((uVar4 & 3) != 0) {
              *puVar12 = *puVar12 | 0x100;
            }
            *puVar7 = *puVar7 & 0xfff3;
          }
          iVar8 = iVar8 + -1;
          puVar7 = puVar7 + 0x10;
        } while (iVar8 != 0);
      }
    }
    puVar12 = puVar12 + 0xb0;
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + -1;
    uVar13 = uVar13 << 1;
    if (param_3 == 0) {
      return;
    }
  } while( true );
}



int FUN_80016bf8(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = (int)param_2, iVar1 != 0)) && (1 < param_3)) {
    if (param_3 < 4) {
      param_1 = param_1 / iVar1;
    }
    else if ((param_3 == 4) && (iVar1 != 1)) {
      param_1 = param_1 / (iVar1 + -1);
    }
  }
  return param_1;
}



void FUN_80016dc0(int param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfff3;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 0x1a);
  return;
}



void Set_Instrument(int param_1,ushort *param_2)

{
  byte bVar1;
  int *piVar2;
  
  *(char *)(param_2 + 0x16) = (char)param_1;
  piVar2 = (int *)(*(int *)(param_2 + 0x18) + ((param_1 << 0x10) >> 0xc) + 0x30);
  *(int *)(param_2 + 0x28) = *piVar2 + *(int *)(*(int *)(param_2 + 0x18) + 0x28);
  *(uint *)(param_2 + 0x2a) = (uint)*(ushort *)(piVar2 + 1) + *piVar2;
  *(uint *)(param_2 + 0x2c) = (uint)*(byte *)((int)piVar2 + 0xd);
  *(uint *)(param_2 + 0x2e) = (uint)*(byte *)((int)piVar2 + 0xe);
  *(uint *)(param_2 + 0x30) = (uint)*(byte *)((int)piVar2 + 0xf);
  param_2[0x32] = (ushort)*(byte *)(piVar2 + 2);
  param_2[0x33] = (ushort)*(byte *)((int)piVar2 + 9);
  param_2[0x34] = (ushort)*(byte *)((int)piVar2 + 10);
  bVar1 = *(byte *)((int)piVar2 + 0xb);
  param_2[0x17] = (ushort)bVar1;
  param_2[0x35] = (ushort)bVar1;
  param_2[0x36] = (ushort)*(byte *)(piVar2 + 3);
  param_2[0x42] = *(ushort *)((int)piVar2 + 6);
  if ((*param_2 & 0xc) == 0) {
    *param_2 = *param_2 | 0x8000;
  }
  else {
    param_2[1] = param_2[1] | 0x300;
    param_2[2] = param_2[2] | 0x1ff;
  }
  return;
}



void FUN_80017098(ushort param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  short *psVar4;
  
  psVar4 = (short *)(param_2 + 0xb8);
  uVar2 = (uint)*(byte *)(param_2 + 0x16);
  puVar3 = (ushort *)(param_2 + 0xba);
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 0xb0;
    if (sVar1 != 0) {
      *puVar3 = param_1 | *puVar3;
    }
    uVar2 = uVar2 - 1;
    puVar3 = puVar3 + 0xb0;
  } while (uVar2 != 0);
  return;
}



void FUN_800170d8(int param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  short *psVar4;
  
  psVar4 = (short *)(param_1 + 0xb8);
  uVar2 = (uint)*(byte *)(param_1 + 0x16);
  puVar3 = (ushort *)(param_1 + 0xbc);
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 0xb0;
    if (sVar1 != 0) {
      *puVar3 = *puVar3 | param_2;
    }
    uVar2 = uVar2 - 1;
    puVar3 = puVar3 + 0xb0;
  } while (uVar2 != 0);
  return;
}



void FUN_80017118(int param_1,ushort *param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*(ushort *)(param_1 + 0x10) & 2) == 0) {
    uVar11 = ~(DAT_80032a0c | DAT_80032a20);
  }
  else {
    uVar11 = 0xffffffff;
  }
  uVar10 = 0;
  uVar9 = 0;
  puVar8 = param_2 + 1;
  do {
    if ((*param_2 != 0) && (*(byte *)((int)puVar8 + 0x2b) < 0x19)) {
      uVar1 = *puVar8;
      if ((uVar1 & 0x100) != 0) {
        iVar7 = (int)(short)puVar8[0x4c] + (int)(short)puVar8[0x44];
        if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        iVar2 = (int)(short)puVar8[0x48] + (int)(short)puVar8[0x45] +
                (int)*(short *)(param_1 + 0xae);
        iVar7 = (int)*(short *)(param_1 + 0x96) * ((short)puVar8[0x49] * iVar7 >> 0xf) >> 0x10;
        if (0x7f00 < iVar2) {
          iVar2 = 0x7f00;
        }
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        if ((DAT_80032a54 & 0x100) == 0) {
          uVar5 = (ushort)(iVar7 * 0x5a00 >> 0xf);
          uVar3 = uVar5;
        }
        else {
          if (iVar2 < 0x4000) {
            iVar4 = iVar2 * 0x5a00 >> 0xe;
            iVar6 = 0x7f00 - (iVar2 * 0x2500 >> 0xe);
          }
          else {
            iVar6 = (0x8000 - iVar2) * 0x5a00 >> 0xe;
            iVar4 = 0x7f00 - ((0x8000 - iVar2) * 0x2500 >> 0xe);
          }
          uVar5 = (ushort)(iVar6 * iVar7 >> 0xf);
          uVar3 = (ushort)(iVar4 * iVar7 >> 0xf);
        }
        puVar8[0x1d] = uVar5;
        puVar8[0x1e] = uVar3;
        puVar8[1] = puVar8[1] | 1;
      }
      if ((uVar1 & 0x200) != 0) {
        iVar7 = FUN_80017424((int)(((int)(short)puVar8[0x40] + (uint)puVar8[0x43] +
                                   (int)*(short *)(param_1 + 0xa2)) * 0x10000) >> 0x10);
        puVar8[0x23] = (ushort)iVar7 & 0x3fff;
        puVar8[1] = puVar8[1] | 4;
      }
      if (((uVar1 & 1) != 0) && ((*param_2 & 0x20) == 0)) {
        uVar9 = uVar9 | *(uint *)(puVar8 + 0x19);
      }
      if ((uVar1 & 2) != 0) {
        uVar10 = uVar10 | *(uint *)(puVar8 + 0x19);
      }
      *puVar8 = 0;
    }
    puVar8 = puVar8 + 0xb0;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0xb0;
  } while (param_3 != 0);
  *(uint *)(param_1 + 0x60) = uVar9 & uVar11 | *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 100) = uVar10 & uVar11 | *(uint *)(param_1 + 100);
  return;
}



int FUN_80017424(uint param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  uVar1 = (param_1 & 0x7fff) >> 8;
  uVar2 = 6 - (byte)(&DAT_80028fe8)[uVar1];
  if ((int)uVar2 < 0) {
    sVar3 = (short)((int)*(short *)(&DAT_800290d8 +
                                   ((param_1 & 0xff) + (uint)(byte)(&DAT_80029060)[uVar1] * 0x100) *
                                   2) << (-uVar2 & 0x1f));
  }
  else {
    sVar3 = (short)((int)*(short *)(&DAT_800290d8 +
                                   ((param_1 & 0xff) + (uint)(byte)(&DAT_80029060)[uVar1] * 0x100) *
                                   2) >> (uVar2 & 0x1f));
  }
  return (int)sVar3;
}



void FUN_8001749c(undefined4 param_1,short *param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  short *psVar6;
  code **ppcVar7;
  int iVar8;
  
  puVar5 = (ushort *)(param_2 + 1);
  do {
    if (*param_2 != 0) {
      iVar8 = 4;
      ppcVar7 = (code **)(param_2 + 0x70);
      psVar6 = param_2 + 0x7e;
      do {
        if ((psVar6[1] & 1U) != 0) {
          if (psVar6[-4] == 0) {
            iVar3 = (**ppcVar7)(ppcVar7);
            sVar2 = psVar6[-2];
            if (sVar2 < 0x100) {
              iVar3 = (iVar3 >> 8) * (int)sVar2;
              psVar6[-2] = sVar2 + psVar6[-1];
            }
            bVar1 = *(byte *)psVar6;
            sVar2 = (short)((uint)iVar3 >> 0x10);
            if (bVar1 == 1) {
              uVar4 = *puVar5 | 0x100;
              puVar5[0x44] = puVar5[0x44] + sVar2;
LAB_800175e0:
              *puVar5 = uVar4;
            }
            else if (bVar1 < 2) {
              if (bVar1 == 0) {
                uVar4 = *puVar5 | 0x200;
                puVar5[0x43] = puVar5[0x43] + sVar2;
                goto LAB_800175e0;
              }
            }
            else if (bVar1 == 2) {
              uVar4 = *puVar5 | 0x100;
              puVar5[0x45] = puVar5[0x45] + sVar2;
              goto LAB_800175e0;
            }
          }
          else {
            psVar6[-4] = psVar6[-4] + -1;
          }
        }
        psVar6 = psVar6 + 0x10;
        iVar8 = iVar8 + -1;
        ppcVar7 = ppcVar7 + 8;
      } while (iVar8 != 0);
    }
    puVar5 = puVar5 + 0xb0;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0xb0;
    if (param_3 == 0) {
      return;
    }
  } while( true );
}



uint FUN_800178f4(void)

{
  uint uVar1;
  
  uVar1 = DAT_80032a18 ^ DAT_80032a18 << 0x11;
  DAT_80032a18 = uVar1 ^ (int)uVar1 >> 0xf;
  return DAT_80032a18 & 0x7fff;
}



void FUN_80017920(ushort param_1)

{
  if (-1 < (short)DAT_80032a54) {
    DAT_80032a54 = param_1 | 0x8000;
    SpuInitMalloc(6,"");
    FUN_8001423c((undefined2 *)&DAT_800370bc,0x8000);
    FUN_80014544();
    DAT_80032a18 = 0x12345678;
    DAT_80032a50 = 0;
    DAT_80032a60 = (undefined4 *)0x0;
    DAT_80032a00 = 0;
    DAT_80032a44 = 0;
    DAT_80032a0c = 0;
    DAT_80032a10 = 0;
    DAT_80032a14 = 0;
    DAT_80032a08 = 0;
    DAT_80032a20 = 0;
    DAT_80032a1c = 0;
    DAT_80032a58 = 0;
    DAT_80032a60 = FUN_8001363c();
    DAT_80037028 = 0;
    DAT_8003702a = 0;
    DAT_80037020 = 0xc;
    EnterCriticalSection();
    DAT_80032a5c = OpenEvent();
    DAT_80032a48 = OpenEvent();
    DAT_80032a2c = 0;
    DAT_80032a34 = 0;
    SetRCnt(0xf2000002,0x44e8,0x1000);
    StartRCnt(0xf2000002);
    EnableEvent();
    SpuSetTransferCallback((int)&LAB_800184f0);
    DAT_80032a54 = DAT_80032a54 | 1;
    ExitCriticalSection();
    FUN_80017f6c(1);
    SpuReverbAttr_80037008.mode = -1;
    FUN_80018140(4,0,0,0);
    FUN_800183c0(0,1);
    FUN_80018240(0x3fff,0);
    FUN_80018300(0x6400,0);
    if ((DAT_80032a54 & 0x2000) != 0) {
      FUN_80018090(0xc0);
    }
    FUN_800124cc(1);
    DAT_80032a28 = 0;
  }
  return;
}



void FUN_80017b4c(void)

{
  int iVar1;
  
  if (DAT_80032a54 != 0) {
    iVar1 = 0;
    EnterCriticalSection();
    CloseEvent();
    CloseEvent();
    DAT_80032a54 = 0;
    ExitCriticalSection();
    do {
      FUN_8001b828(iVar1,6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x18);
    FUN_8001acf0(0,0xffffff);
    FUN_80018140(0,0,0,0);
    DAT_80032a28 = 0;
  }
  return;
}



undefined4 * FUN_80017c8c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = Call_SpuMalloc(param_1[5]);
  FUN_80018518(uVar1,(word *)((int)param_1 + param_1[6]),param_1[5],0x11);
  puVar2 = FUN_80014278(param_1[4]);
  FUN_8001442c(puVar2,param_1,param_1[4]);
  iVar3 = DAT_80032a44;
  piVar4 = &DAT_80032a44;
  puVar2[10] = uVar1;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
    iVar3 = *piVar4;
    piVar4 = (int *)(iVar3 + 0x2c);
  }
  *piVar4 = (int)puVar2;
  puVar2[0xb] = 0;
  FUN_8001865c(0x10);
  return puVar2;
}



void FUN_80017e7c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_80032a00;
  if (DAT_80032a00 != 0) {
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)(iVar1 + 0x10);
    } while (*(int *)(iVar1 + 0x10) != 0);
  }
  *piVar2 = param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void FUN_80017f6c(int param_1)

{
  ushort uVar1;
  int *piVar2;
  
  uVar1 = DAT_80032a54 & 0xf8ff;
  if (param_1 == 1) {
    DAT_80032a54 = uVar1 | 0x100;
  }
  else {
    DAT_80032a54 = uVar1;
    if (1 < param_1) {
      if (param_1 == 2) {
        DAT_80032a54 = uVar1 | 0x300;
      }
      else {
        DAT_80032a54 = uVar1 | 0x500;
        if (param_1 != 3) {
          DAT_80032a54 = uVar1;
        }
      }
    }
  }
  FUN_80018400();
  SpuSetReverbModeParam(&SpuReverbAttr_80037008);
  SpuReverbAttr_80037008.mask = 0;
  for (piVar2 = (int *)DAT_80032a50; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    FUN_80017098(0x100,(int)piVar2);
  }
  if ((DAT_80032a54 & 0x2000) != 0) {
    FUN_80018090((int)DAT_8003704e);
  }
  return;
}



void FUN_80018090(int param_1)

{
  DAT_8003704e = (short)param_1;
  if ((DAT_80032a54 & 0x700) == 0) {
    param_1 = (DAT_8003704e * 0xa0) / 0xff;
    DAT_80032a3d = (undefined)param_1;
  }
  else {
    DAT_80032a3d = 0;
  }
  DAT_80032a3c = (undefined)param_1;
  DAT_80032a3e = DAT_80032a3c;
  DAT_80032a3f = DAT_80032a3d;
  CdMix((CdlATV *)&DAT_80032a3c);
  return;
}



void FUN_80018140(uint param_1,undefined2 param_2,long param_3,long param_4)

{
  undefined auStack_30 [4];
  uint local_2c;
  
  SpuGetReverbModeParam((int)auStack_30);
  if ((-1 < (int)param_1) ||
     (param_1 = SpuReverbAttr_80037008.mode, local_2c != SpuReverbAttr_80037008.mode)) {
    SpuReverbAttr_80037008.delay = param_3;
    SpuReverbAttr_80037008.feedback = param_4;
    DAT_8003704c = param_2;
    if ((int)param_1 < 10) {
      if ((local_2c != param_1) || (param_1 == 0)) {
        SpuSetReverb(0);
        SpuReverbAttr_80037008.mode = param_1 | 0x100;
        SpuReverbAttr_80037008.mask = SpuReverbAttr_80037008.mask | 1;
        SpuSetReverbModeParam(&SpuReverbAttr_80037008);
        SpuReverbAttr_80037008.mask = 0;
        SpuSetReverb(1);
      }
      FUN_80018400();
      SpuSetReverbDepth(&SpuReverbAttr_80037008);
      SpuReverbAttr_80037008.mask = 0;
    }
  }
  return;
}



void FUN_80018240(ushort param_1,short param_2)

{
  int iVar1;
  
  DAT_8003705a = param_1;
  if (param_2 == 0) {
    DAT_80037050 = (uint)param_1 << 0x10;
    DAT_80037058 = 0;
    DAT_80037048 = param_1;
    FUN_8001848c(param_1,(short *)&DAT_80037024,'\0');
    DAT_80037020 = DAT_80037020 | 3;
  }
  else {
    iVar1 = ((int)((uint)param_1 << 0x10) >> 8) - (DAT_80037050 >> 8);
    if (iVar1 != 0) {
      DAT_80037054 = iVar1 / (int)param_2 << 8;
      DAT_80037058 = param_2;
    }
  }
  return;
}



void FUN_80018300(ushort param_1,short param_2)

{
  int iVar1;
  
  DAT_80037066 = param_1;
  if (param_2 == 0) {
    DAT_8003705c = (uint)param_1 << 0x10;
    DAT_80037064 = 0;
    DAT_8003704a = param_1;
    FUN_8001848c(param_1,(short *)&DAT_80037030,'\0');
    DAT_80037020 = DAT_80037020 | 0xc0;
  }
  else {
    iVar1 = ((int)((uint)param_1 << 0x10) >> 8) - (DAT_8003705c >> 8);
    if (iVar1 != 0) {
      DAT_80037060 = iVar1 / (int)param_2 << 8;
      DAT_80037064 = param_2;
    }
  }
  return;
}



void FUN_800183c0(undefined4 param_1,undefined4 param_2)

{
  DAT_80037020 = DAT_80037020 | 0x300;
  DAT_80037034 = param_1;
  DAT_80037038 = param_2;
  FUN_8001b094(&DAT_80037020);
  return;
}



void FUN_80018400(void)

{
  FUN_8001848c(DAT_80037048,(short *)&DAT_80037024,'\0');
  FUN_8001848c(DAT_8003704a,(short *)&DAT_80037030,'\0');
  FUN_8001848c(DAT_8003704c,&SpuReverbAttr_80037008.depth.left,'\x01');
  DAT_80037020 = DAT_80037020 | 0xc3;
  SpuReverbAttr_80037008.mask = SpuReverbAttr_80037008.mask | 6;
  return;
}



void FUN_8001848c(short param_1,short *param_2,char param_3)

{
  ushort uVar1;
  
  uVar1 = DAT_80032a54;
  param_2[1] = param_1;
  *param_2 = param_1;
  if ((uVar1 & 0x600) != 0) {
    if ((uVar1 & 0x200) == 0) {
      if (param_3 == '\x01') {
        param_2[1] = -param_1;
        return;
      }
    }
    else if (param_3 == '\0') {
      param_2[1] = -param_1;
      return;
    }
    *param_2 = -param_1;
  }
  return;
}



void FUN_80018518(uint param_1,word *param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = param_3;
  FUN_8001865c(0x10);
  DAT_80032a54 = DAT_80032a54 | 0x10;
  SpuSetTransferMode(0);
  FUN_8001afc4(param_1);
  switch(param_4 & 0xf) {
  case 1:
    DAT_80032a54 = DAT_80032a54 | 0x30;
    FUN_8001af64(param_2,param_3,uVar2);
    break;
  case 2:
    DAT_80032a54 = DAT_80032a54 | 0x50;
    FUN_80019dd8((uint)param_2,param_3,uVar2);
    break;
  case 3:
    lVar1 = 0;
    goto LAB_80018618;
  case 4:
    lVar1 = 5;
LAB_80018618:
    DAT_80032a54 = DAT_80032a54 | 0x50;
    lVar1 = SpuReadDecodedData((SpuDecodedData *)param_2,lVar1);
    DAT_80032a40 = (undefined2)lVar1;
  }
  return;
}



int FUN_8001865c(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0x10) != 0) {
    do {
    } while ((DAT_80032a54 & 0x10) != 0);
  }
  iVar1 = 0;
  if ((DAT_80032a54 & 0x10) != 0) {
    iVar1 = (int)sRam00000000;
  }
  return iVar1;
}



// Possible UT_ROFF.OBJ/SsUtReverbOff
// Possible S_I.OBJ/SpuInit

void FUN_800186c4(void)

{
  FUN_800186e4(0);
  return;
}



void FUN_800186e4(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  ResetCallback();
  FUN_80018858(param_1);
  if (param_1 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_8002a93a;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  FUN_800187dc();
  DAT_8002a8e4 = 0;
  DAT_8002a8e8 = 0;
  DAT_8002a8f4 = 0;
  DAT_8002a8f8 = 0;
  DAT_8002a8fa = 0;
  DAT_8002a8fc = 0;
  DAT_8002a900 = 0;
  DAT_8002a8ec = 0xfffe;
  FUN_800191c4(0xd1,0xfffe,0);
  DAT_8002ada0 = 0;
  DAT_8002ada4 = 0;
  DAT_8002ada8 = 0;
  DAT_8002a8e0 = 0;
  DAT_8002ad60 = 0;
  DAT_8002a8dc = 0;
  DAT_8002a908 = 0;
  DAT_8002a904 = 0;
  DAT_8002ad3c = 0;
  return;
}



void FUN_800187dc(void)

{
  if (DAT_8002ad40 == 0) {
    DAT_8002ad40 = 1;
    EnterCriticalSection();
    _SpuDataCallback();
    DAT_8002a8d8 = OpenEvent();
    EnableEvent();
    ExitCriticalSection();
  }
  return;
}



undefined4 FUN_80018858(int param_1)

{
  uint uVar1;
  dword *pdVar2;
  int iVar3;
  undefined2 *puVar4;
  
  DMA_DPCR = DMA_DPCR | 0xb0000;
  DAT_8002ad60 = 0;
  DAT_8002ad64 = 0;
  DAT_8002ad5c = 0;
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  SPU_CTRL_REG_CPUCNT = 0;
  FUN_800193a4();
  SPU_MAIN_VOL_L = 0;
  SPU_MAIN_VOL_R = 0;
  if ((SPU_STATUS_REG_SPUSTAT & 0x7ff) != 0) {
    uVar1 = 1;
    do {
      if (0xf00 < uVar1) {
        printf("SPU:T/O [%s]\n","wait (reset)");
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((SPU_STATUS_REG_SPUSTAT & 0x7ff) != 0);
  }
  iVar3 = 0;
  puVar4 = &DAT_80037080;
  DAT_8002ad68 = 2;
  DAT_8002ad6c = 3;
  DAT_8002ad70 = 8;
  DAT_8002ad74 = 7;
  SOUND_RAM_DATA_TRANSTER_CTRL = 4;
  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
  SPU_VOICE_KEY_OFF._2_2_ = 0xffff;
  SPU_VOICE_CHN_REVERB_MODE._0_2_ = 0;
  SPU_VOICE_CHN_REVERB_MODE._2_2_ = 0;
  do {
    *puVar4 = 0;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 10);
  if (param_1 == 0) {
    DAT_8002ad5c = 0x200;
    SPU_VOICE_CHN_FM_MODE._0_2_ = 0;
    SPU_VOICE_CHN_FM_MODE._2_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._0_2_ = 0;
    SPU_VOICE_CHN_NOISE_MODE._2_2_ = 0;
    CD_VOL_L = 0;
    CD_VOL_R = 0;
    EXT_VOL_L = 0;
    EXT_VOL_R = 0;
    FUN_80018aec((word *)&DAT_8002ad84,0x10);
    iVar3 = 0;
    pdVar2 = &VOICE_00_LEFT_RIGHT;
    do {
      *(undefined2 *)pdVar2 = 0;
      *(undefined2 *)((int)pdVar2 + 2) = 0;
      *(undefined2 *)(pdVar2 + 1) = 0x3fff;
      *(undefined2 *)((int)pdVar2 + 6) = 0x200;
      *(undefined2 *)(pdVar2 + 2) = 0;
      *(undefined2 *)((int)pdVar2 + 10) = 0;
      iVar3 = iVar3 + 1;
      pdVar2 = pdVar2 + 4;
    } while (iVar3 < 0x18);
    SPU_VOICE_KEY_ON._0_2_ = 0xffff;
    SPU_VOICE_KEY_ON._2_2_ = 0xff;
    FUN_800193a4();
    FUN_800193a4();
    FUN_800193a4();
    FUN_800193a4();
    SPU_VOICE_KEY_OFF._0_2_ = 0xffff;
    SPU_VOICE_KEY_OFF._2_2_ = 0xff;
    FUN_800193a4();
    FUN_800193a4();
    FUN_800193a4();
    FUN_800193a4();
  }
  DAT_8002ad78 = 1;
  SPU_CTRL_REG_CPUCNT = 0xc000;
  DAT_8002ad7c = 0;
  DAT_8002ad80 = 0;
  return 0;
}



void FUN_80018aec(word *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  SOUND_RAM_DATA_TRANSFER_ADDR = DAT_8002ad5c;
  uVar5 = SPU_STATUS_REG_SPUSTAT & 0x7ff;
  FUN_800193a4();
  bVar1 = param_2 < 0x41;
  if (param_2 != 0) {
    do {
      uVar4 = param_2;
      if (!bVar1) {
        uVar4 = 0x40;
      }
      iVar2 = 0;
      if (0 < (int)uVar4) {
        do {
          SOUND_RAM_DATA_TRANSFER_FIFO = *param_1;
          param_1 = param_1 + 1;
          iVar2 = iVar2 + 2;
        } while (iVar2 < (int)uVar4);
      }
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf | 0x10;
      FUN_800193a4();
      if ((SPU_STATUS_REG_SPUSTAT & 0x400) != 0) {
        uVar3 = 1;
        do {
          if (0xf00 < uVar3) {
            printf("SPU:T/O [%s]\n","wait (wrdy H -> L)");
            break;
          }
          uVar3 = uVar3 + 1;
        } while ((SPU_STATUS_REG_SPUSTAT & 0x400) != 0);
      }
      param_2 = param_2 - uVar4;
      FUN_800193a4();
      FUN_800193a4();
      bVar1 = param_2 < 0x41;
    } while (param_2 != 0);
  }
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf;
  uVar4 = 1;
  while( true ) {
    if ((SPU_STATUS_REG_SPUSTAT & 0x7ff) == uVar5) {
      return;
    }
    if (0xf00 < uVar4) break;
    uVar4 = uVar4 + 1;
  }
  printf("SPU:T/O [%s]\n","wait (dmaf clear/W)");
  return;
}



void FUN_80018d88(dword param_1,word param_2,int param_3)

{
  SOUND_RAM_DATA_TRANSFER_ADDR = param_2;
  FUN_800193a4();
  FUN_800193a4();
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x30;
  FUN_800193a4();
  FUN_800193a4();
  FUN_80019378();
  DMA_SPU_MADR = param_1;
  DMA_SPU_BCR = param_3 << 0x10 | 0x10;
  DAT_8002ad94 = 1;
  DMA_SPU_CHCR = 0x1000200;
  return;
}



undefined4 FUN_80018e44(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 == 1) {
    DAT_8002ad94 = 0;
    if (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8002ad5c) {
      uVar1 = 1;
      do {
        if (0xf00 < uVar1) {
          DAT_8002ad94 = 0;
          return 0xfffffffe;
        }
        uVar1 = uVar1 + 1;
      } while (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8002ad5c);
    }
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xffcf | 0x20;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      DAT_8002ad94 = 1;
      if (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8002ad5c) {
        uVar1 = 1;
        do {
          if (0xf00 < uVar1) {
            DAT_8002ad94 = 1;
            return 0xfffffffe;
          }
          uVar1 = uVar1 + 1;
        } while (SOUND_RAM_DATA_TRANSFER_ADDR != DAT_8002ad5c);
      }
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x30;
    }
  }
  else if (param_1 == 2) {
    DAT_8002ad5c = (word)(param_2 >> (DAT_8002ad6c & 0x1f));
    SOUND_RAM_DATA_TRANSFER_ADDR = DAT_8002ad5c;
  }
  else if (param_1 == 3) {
    uVar2 = 0x20;
    if (DAT_8002ad94 == 1) {
      uVar2 = 0x30;
    }
    uVar1 = 1;
    while ((SPU_CTRL_REG_CPUCNT & 0x30) != uVar2) {
      if (0xf00 < uVar1) {
        return 0xfffffffe;
      }
      uVar1 = uVar1 + 1;
    }
    if (DAT_8002ad94 == 1) {
      FUN_80019378();
    }
    else {
      FUN_8001934c();
    }
    DAT_8002ad9c = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
    DMA_SPU_BCR = DAT_8002ad9c * 0x10000 | 0x10;
    DMA_SPU_CHCR = 0x1000201;
    DAT_8002ad98 = param_2;
    DMA_SPU_MADR = param_2;
    if (DAT_8002ad94 == 1) {
      DMA_SPU_CHCR = 0x1000200;
    }
  }
  return 0;
}



uint FUN_800190d4(word *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (DAT_8002ad60 == 0) {
    uVar1 = (uint)DAT_8002ad5c << (DAT_8002ad6c & 0x1f);
    FUN_80018e44(2,uVar1,param_3);
    FUN_80018e44(1,uVar1,param_3);
    FUN_80018e44(3,(uint)param_1,param_2);
  }
  else {
    FUN_80018aec(param_1,param_2);
  }
  return param_2;
}



uint FUN_8001915c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_8002ad5c << (DAT_8002ad6c & 0x1f);
  FUN_80018e44(2,uVar1,param_3);
  FUN_80018e44(0,uVar1,param_3);
  FUN_80018e44(3,param_1,param_2);
  return param_2;
}



void FUN_800191c4(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)param_2;
  }
  else {
    *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)(param_2 >> (DAT_8002ad6c & 0x1f));
  }
  return;
}



uint FUN_8001920c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_8002ad68 != 0) {
    if (DAT_8002ad70 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_8002ad70 != 0) {
      param_2 = param_2 + DAT_8002ad70 & ~DAT_8002ad74;
    }
  }
  uVar1 = param_2 >> (DAT_8002ad6c & 0x1f);
  if (param_1 != -2) {
    if (param_1 == -1) {
      param_2 = uVar1 & 0xffff;
    }
    else {
      *(short *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 2) = (short)uVar1;
    }
  }
  return param_2;
}



void FUN_8001934c(void)

{
  SPU_DELAY = SPU_DELAY & 0xf0ffffff | 0x20000000;
  return;
}



void FUN_80019378(void)

{
  SPU_DELAY = SPU_DELAY & 0xf0ffffff | 0x22000000;
  return;
}



void FUN_800193a4(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0xf0; local_8 = local_8 + 1) {
  }
  return;
}



void _SpuDataCallback(void)

{
  DMACallback();
  return;
}



// Possible S_IH.OBJ/SpuInitHot

void SsUtReverbOn(void)

{
  FUN_800186e4(1);
  return;
}



// Possible S_Q.OBJ/SpuQuit

void FUN_80019448(void)

{
  if (DAT_8002ad40 == 1) {
    DAT_8002ad40 = 0;
    EnterCriticalSection();
    DAT_8002ad7c = 0;
    DAT_8002ad80 = 0;
    _SpuDataCallback();
    CloseEvent();
    DisableEvent();
    ExitCriticalSection();
  }
  return;
}



long SpuInitMalloc(long num,char *top)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = DAT_8002ad6c;
  if (num < 1) {
    lVar2 = S_M_INIT_OBJ_4C();
    return lVar2;
  }
  *(undefined4 *)top = 0x40001010;
  DAT_8002ada4 = 0;
  DAT_8002ada0 = num;
  DAT_8002ada8 = top;
  *(int *)(top + 4) = (0x10000 << (uVar1 & 0x1f)) + -0x1010;
  return num;
}



void S_M_INIT_OBJ_4C(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80019650)
// WARNING: Removing unreachable block (ram,0x80019714)
// WARNING: Removing unreachable block (ram,0x80019728)
// WARNING: Removing unreachable block (ram,0x80019748)
// WARNING: Removing unreachable block (ram,0x80019780)
// WARNING: Removing unreachable block (ram,0x80019674)
// WARNING: Removing unreachable block (ram,0x8001968c)
// WARNING: Removing unreachable block (ram,0x800196a4)

long SpuMalloc(long size)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_8002a8e8 == 0) {
    uVar2 = S_M_M_OBJ_54();
    return uVar2;
  }
  if ((size & ~DAT_8002ad74) != 0) {
    size = size + DAT_8002ad74;
  }
  uVar1 = DAT_8002ad6c & 0x1f;
  uVar2 = DAT_8002ad6c & 0x1f;
  if ((*DAT_8002ada8 & 0x40000000) != 0) {
    lVar3 = S_M_M_OBJ_12C();
    return lVar3;
  }
  _spu_gcSPU();
  puVar4 = DAT_8002ada8;
  if (0 < DAT_8002ada0) {
    do {
      if (((*puVar4 & 0x40000000) != 0) ||
         (((*puVar4 & 0x80000000) != 0 && ((uint)((size >> uVar1) << uVar2) <= puVar4[1])))) {
        lVar3 = S_M_M_OBJ_12C();
        return lVar3;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < DAT_8002ada0);
  }
  return -1;
}



uint S_M_M_OBJ_54(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  uint *puVar8;
  int unaff_s0;
  uint unaff_s1;
  uint uVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  if ((unaff_s1 & ~DAT_8002ad74) != 0) {
    unaff_s1 = unaff_s1 + DAT_8002ad74;
  }
  uVar9 = ((int)unaff_s1 >> (DAT_8002ad6c & 0x1f)) << (DAT_8002ad6c & 0x1f);
  if ((*DAT_8002ada8 & 0x40000000) != 0) {
    uVar9 = S_M_M_OBJ_12C();
    return uVar9;
  }
  _spu_gcSPU();
  puVar8 = DAT_8002ada8;
  if (unaff_s0 < DAT_8002ada0) {
    puVar3 = DAT_8002ada8 + unaff_s0 * 2;
    do {
      if (((*puVar3 & 0x40000000) != 0) || (((*puVar3 & 0x80000000) != 0 && (uVar9 <= puVar3[1]))))
      {
        uVar9 = S_M_M_OBJ_12C();
        return uVar9;
      }
      unaff_s0 = unaff_s0 + 1;
      puVar3 = puVar3 + 2;
    } while (unaff_s0 < DAT_8002ada0);
  }
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar3 = DAT_8002ada8 + unaff_s2 * 2;
    if ((*puVar3 & 0x40000000) == 0) {
      uVar1 = puVar3[1];
      if (uVar9 < uVar1) {
        if (DAT_8002ada4 < DAT_8002ada0) {
          puVar8 = DAT_8002ada8 + DAT_8002ada4 * 2;
          uVar7 = *puVar8;
          uVar5 = puVar8[1];
          *puVar8 = uVar9 + *puVar3 | 0x80000000;
          puVar8[1] = uVar1 - uVar9;
          DAT_8002ada4 = DAT_8002ada4 + 1;
          puVar8[2] = uVar7;
          puVar8[3] = uVar5;
        }
      }
      puVar8 = DAT_8002ada8 + unaff_s2 * 2;
      puVar8[1] = uVar9;
      *puVar8 = *puVar8 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = DAT_8002ada8[unaff_s2 * 2];
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_8002ada0) && (uVar1 = 0xffffffff, uVar9 <= puVar3[1] - unaff_s3)) {
        uVar6 = 0xff;
        iVar4 = unaff_s2 + 1;
        puVar2 = DAT_8002ada8 + iVar4 * 2;
        *puVar2 = (*puVar3 & 0xfffffff) + uVar9 | 0x40000000;
        puVar2[1] = puVar3[1] - uVar9;
        DAT_8002ada4 = iVar4;
        puVar3[1] = uVar9;
        *puVar3 = *puVar3 & 0xfffffff;
        _spu_gcSPU();
        uVar9 = S_M_M_OBJ_2A8((char)iVar4,uVar6,(char)puVar3,(char)puVar8,in_stack_00000010,
                              in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                              in_stack_00000020);
        return uVar9;
      }
    }
  }
  return uVar1;
}



undefined4 S_M_M_OBJ_12C(void)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar8 = DAT_8002ada8;
  uVar1 = 0xffffffff;
  if (unaff_s2 != -1) {
    puVar7 = (uint *)(unaff_s2 * 8 + DAT_8002ada8);
    if ((*puVar7 & 0x40000000) == 0) {
      uVar9 = puVar7[1];
      if (unaff_s1 < uVar9) {
        if (DAT_8002ada4 < DAT_8002ada0) {
          puVar2 = (uint *)(DAT_8002ada4 * 8 + DAT_8002ada8);
          uVar6 = *puVar2;
          uVar4 = puVar2[1];
          *puVar2 = unaff_s1 + *puVar7 | 0x80000000;
          puVar2[1] = uVar9 - unaff_s1;
          DAT_8002ada4 = DAT_8002ada4 + 1;
          puVar2[2] = uVar6;
          puVar2[3] = uVar4;
        }
      }
      puVar7 = (uint *)(unaff_s2 * 8 + DAT_8002ada8);
      puVar7[1] = unaff_s1;
      *puVar7 = *puVar7 & 0xfffffff;
      _spu_gcSPU();
      uVar1 = *(undefined4 *)(unaff_s2 * 8 + DAT_8002ada8);
    }
    else {
      uVar1 = 0xffffffff;
      if ((unaff_s2 < DAT_8002ada0) && (uVar1 = 0xffffffff, unaff_s1 <= puVar7[1] - unaff_s3)) {
        uVar5 = 0xff;
        iVar3 = unaff_s2 + 1;
        puVar2 = (uint *)(iVar3 * 8 + DAT_8002ada8);
        *puVar2 = (*puVar7 & 0xfffffff) + unaff_s1 | 0x40000000;
        puVar2[1] = puVar7[1] - unaff_s1;
        DAT_8002ada4 = iVar3;
        puVar7[1] = unaff_s1;
        *puVar7 = *puVar7 & 0xfffffff;
        _spu_gcSPU();
        uVar1 = S_M_M_OBJ_2A8((char)iVar3,uVar5,(char)puVar7,(char)iVar8,in_stack_00000010,
                              in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                              in_stack_00000020);
        return uVar1;
      }
    }
  }
  return uVar1;
}



void S_M_M_OBJ_2A8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  return;
}



void _spu_gcSPU(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = DAT_8002ada8;
  iVar8 = 0;
  puVar4 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      iVar5 = iVar8 + 1;
      if ((*puVar4 & 0x80000000) == 0) {
S_M_INT_OBJ_B8:
        puVar4 = puVar4 + 2;
        iVar8 = iVar8 + 1;
      }
      else {
        puVar2 = puVar3 + iVar5 * 2;
        while (uVar1 = *puVar2, puVar2 = puVar2 + 2, uVar1 == 0x2fffffff) {
          iVar5 = iVar5 + 1;
        }
        puVar2 = puVar3 + iVar5 * 2;
        if (((*puVar2 & 0x80000000) == 0) ||
           ((*puVar2 & 0xfffffff) != (*puVar4 & 0xfffffff) + puVar4[1])) goto S_M_INT_OBJ_B8;
        *puVar2 = 0x2fffffff;
        puVar4[1] = puVar4[1] + puVar2[1];
      }
    } while (iVar8 <= DAT_8002ada4);
  }
  iVar8 = DAT_8002ada4;
  iVar5 = 0;
  puVar3 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      iVar5 = iVar5 + 1;
      if (puVar3[1] == 0) {
        *puVar3 = 0x2fffffff;
      }
      puVar3 = puVar3 + 2;
    } while (iVar5 <= iVar8);
  }
  puVar3 = DAT_8002ada8;
  iVar8 = 0;
  puVar4 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      iVar5 = DAT_8002ada4;
      if ((*puVar4 & 0x40000000) != 0) break;
      iVar6 = iVar8 + 1;
      if (iVar6 <= DAT_8002ada4) {
        puVar2 = puVar3 + iVar6 * 2;
        do {
          uVar1 = *puVar2;
          if ((uVar1 & 0x40000000) != 0) break;
          uVar7 = *puVar4;
          iVar6 = iVar6 + 1;
          if ((uVar1 & 0xfffffff) < (uVar7 & 0xfffffff)) {
            *puVar4 = uVar1;
            uVar1 = puVar4[1];
            puVar4[1] = puVar2[1];
            *puVar2 = uVar7;
            puVar2[1] = uVar1;
          }
          puVar2 = puVar2 + 2;
        } while (iVar6 <= iVar5);
      }
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar8 <= DAT_8002ada4);
  }
  puVar3 = DAT_8002ada8;
  iVar8 = 0;
  puVar4 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      if ((*puVar4 & 0x40000000) != 0) break;
      if (*puVar4 == 0x2fffffff) {
        puVar3 = DAT_8002ada8 + DAT_8002ada4 * 2;
        *puVar4 = *puVar3;
        DAT_8002ada4 = iVar8;
        puVar4[1] = puVar3[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar8 <= DAT_8002ada4);
  }
  iVar8 = DAT_8002ada4 + -1;
  if (-1 < iVar8) {
    puVar4 = DAT_8002ada8 + iVar8 * 2;
    do {
      if ((*puVar4 & 0x80000000) == 0) {
        return;
      }
      *puVar4 = *puVar4 & 0xfffffff | 0x40000000;
      iVar5 = DAT_8002ada4 * 2;
      iVar6 = iVar8 + -1;
      DAT_8002ada4 = iVar8;
      puVar4[1] = puVar4[1] + puVar3[iVar5 + 1];
      puVar4 = puVar4 + -2;
      iVar8 = iVar6;
    } while (-1 < iVar6);
  }
  return;
}



void S_M_INT_OBJ_50(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint *in_v1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int in_t0;
  int in_t1;
  int iVar7;
  int iVar8;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  
code_r0x80019830:
  while (uVar1 = *in_v1, in_v1 = in_v1 + 2, uVar1 == in_t2) {
    param_3 = param_3 + 1;
  }
  puVar4 = (uint *)(param_3 * 8 + in_t0);
  if ((*puVar4 & in_t4) == 0) goto S_M_INT_OBJ_B8;
  if ((*puVar4 & in_t3) != (*param_4 & in_t3) + param_4[1]) goto S_M_INT_OBJ_B8;
  *puVar4 = in_t2;
  param_4[1] = param_4[1] + puVar4[1];
  for (; iVar8 = DAT_8002ada4, in_t1 <= DAT_8002ada4; in_t1 = in_t1 + 1) {
    param_3 = in_t1 + 1;
    if ((*param_4 & in_t4) != 0) goto code_r0x80019828;
S_M_INT_OBJ_B8:
    param_4 = param_4 + 2;
  }
  iVar7 = 0;
  puVar4 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      iVar7 = iVar7 + 1;
      if (puVar4[1] == 0) {
        *puVar4 = 0x2fffffff;
      }
      puVar4 = puVar4 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar4 = DAT_8002ada8;
  iVar8 = 0;
  puVar3 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      iVar7 = DAT_8002ada4;
      if ((*puVar3 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_8002ada4) {
        puVar2 = puVar4 + iVar5 * 2;
        do {
          uVar1 = *puVar2;
          if ((uVar1 & 0x40000000) != 0) break;
          uVar6 = *puVar3;
          iVar5 = iVar5 + 1;
          if ((uVar1 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar3 = uVar1;
            uVar1 = puVar3[1];
            puVar3[1] = puVar2[1];
            *puVar2 = uVar6;
            puVar2[1] = uVar1;
          }
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_8002ada4);
  }
  puVar4 = DAT_8002ada8;
  iVar8 = 0;
  puVar3 = DAT_8002ada8;
  if (-1 < DAT_8002ada4) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar4 = DAT_8002ada8 + DAT_8002ada4 * 2;
        *puVar3 = *puVar4;
        DAT_8002ada4 = iVar8;
        puVar3[1] = puVar4[1];
        S_M_INT_OBJ_270();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_8002ada4);
  }
  iVar8 = DAT_8002ada4 + -1;
  if (-1 < iVar8) {
    puVar3 = DAT_8002ada8 + iVar8 * 2;
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar7 = DAT_8002ada4 * 2;
      iVar5 = iVar8 + -1;
      DAT_8002ada4 = iVar8;
      puVar3[1] = puVar3[1] + puVar4[iVar7 + 1];
      puVar3 = puVar3 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
code_r0x80019828:
  in_v1 = (uint *)(param_3 * 8 + in_t0);
  goto code_r0x80019830;
}



void S_M_INT_OBJ_270(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_8002ada8;
  iVar4 = DAT_8002ada4 + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(iVar4 * 8 + DAT_8002ada8);
    do {
      if ((*puVar3 & 0x80000000) == 0) {
        return;
      }
      *puVar3 = *puVar3 & 0xfffffff | 0x40000000;
      iVar2 = DAT_8002ada4 * 8;
      iVar5 = iVar4 + -1;
      DAT_8002ada4 = iVar4;
      puVar3[1] = puVar3[1] + *(int *)(iVar2 + iVar1 + 4);
      puVar3 = puVar3 + -2;
      iVar4 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}



void SpuFree(ulong addr)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  undefined in_stack_fffffff0;
  undefined in_stack_fffffff4;
  
  iVar1 = DAT_8002ada0;
  iVar3 = 0;
  if (0 < DAT_8002ada0) {
    puVar2 = DAT_8002ada8;
    do {
      if ((*puVar2 & 0x40000000) != 0) break;
      iVar3 = iVar3 + 1;
      if (*puVar2 == addr) {
        *puVar2 = addr | 0x80000000;
        S_M_F_OBJ_64((char)addr,(char)puVar2,(char)iVar3,(char)iVar1,in_stack_fffffff0,
                     in_stack_fffffff4,unaff_retaddr);
        return;
      }
      puVar2 = puVar2 + 2;
    } while (iVar3 < DAT_8002ada0);
  }
  _spu_gcSPU();
  return;
}



void S_M_F_OBJ_64(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7)

{
  _spu_gcSPU();
  return;
}



ulong SpuSetNoiseVoice(long on_off,ulong voice_bit)

{
  uint uVar1;
  
  uVar1 = FUN_80019b80(on_off,voice_bit,0xca,0xcb);
  return uVar1;
}



uint FUN_80019b80(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  dword *pdVar4;
  ushort *puVar5;
  uint uVar6;
  
  if ((DAT_8002ad3c & 1) == 0) {
    pdVar4 = &VOICE_00_LEFT_RIGHT;
  }
  else {
    pdVar4 = (dword *)&DAT_80036ef8;
  }
  uVar6 = (uint)*(ushort *)((int)pdVar4 + param_3 * 2) |
          (*(ushort *)((int)pdVar4 + param_4 * 2) & 0xff) << 0x10;
  uVar1 = (ushort)param_2;
  uVar2 = (ushort)(param_2 >> 0x10);
  if (param_1 == 0) {
    if ((DAT_8002ad3c & 1) == 0) {
      puVar3 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
      puVar5 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
      *puVar3 = *puVar3 & ~uVar1;
      *puVar5 = *puVar5 & ~(uVar2 & 0xff);
    }
    else {
      *(ushort *)(&DAT_80036ef8 + param_3 * 2) = *(ushort *)(&DAT_80036ef8 + param_3 * 2) & ~uVar1;
      *(ushort *)(&DAT_80036ef8 + param_4 * 2) =
           *(ushort *)(&DAT_80036ef8 + param_4 * 2) & ~(uVar2 & 0xff);
      DAT_8002a908 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8002a908;
    }
    uVar6 = uVar6 & ~(param_2 & 0xffffff);
  }
  else if (param_1 == 1) {
    if ((DAT_8002ad3c & 1) == 0) {
      puVar3 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_3 * 2);
      puVar5 = (ushort *)((int)&VOICE_00_LEFT_RIGHT + param_4 * 2);
      *puVar3 = *puVar3 | uVar1;
      *puVar5 = *puVar5 | uVar2 & 0xff;
    }
    else {
      *(ushort *)(&DAT_80036ef8 + param_3 * 2) = *(ushort *)(&DAT_80036ef8 + param_3 * 2) | uVar1;
      *(ushort *)(&DAT_80036ef8 + param_4 * 2) =
           *(ushort *)(&DAT_80036ef8 + param_4 * 2) | uVar2 & 0xff;
      DAT_8002a908 = 1 << (param_3 + -0xc6 >> 1 & 0x1fU) | DAT_8002a908;
    }
    uVar6 = uVar6 | param_2 & 0xffffff;
  }
  return uVar6;
}



long SpuSetNoiseClock(long n_clock)

{
  uint uVar1;
  
  if (n_clock < 0) {
    uVar1 = S_SNC_OBJ_24(n_clock,0);
    return uVar1;
  }
  if (0x3f < n_clock) {
    n_clock = 0x3f;
  }
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xc0ff | (ushort)((n_clock & 0x3fU) << 8);
  return n_clock;
}



uint S_SNC_OBJ_24(undefined4 param_1,uint param_2)

{
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xc0ff | (ushort)((param_2 & 0x3f) << 8);
  return param_2;
}



uint FUN_80019dd8(uint param_1,uint param_2,uint param_3)

{
  if (0x7eff0 < param_2) {
    param_2 = 0x7eff0;
  }
  FUN_8001915c(param_1,param_2,param_3);
  if (DAT_8002ad7c == 0) {
    DAT_8002ad78 = 0;
  }
  return param_2;
}



long SpuSetReverb(long on_off)

{
  long lVar1;
  int iVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  if (on_off == 0) {
    DAT_8002a8e4 = 0;
    lVar1 = S_SR_OBJ_B0();
    return lVar1;
  }
  if (on_off != 1) {
    lVar1 = S_SR_OBJ_B4((char)on_off,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return lVar1;
  }
  if ((DAT_8002a8e8 != 1) && (iVar2 = FUN_80019f88(DAT_8002a8ec), iVar2 != 0)) {
    DAT_8002a8e4 = 0;
    lVar1 = S_SR_OBJ_B0();
    return lVar1;
  }
  SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  DAT_8002a8e4 = on_off;
  return 1;
}



undefined4 S_SR_OBJ_B0(void)

{
  int in_v0;
  undefined2 in_v1;
  
  *(undefined2 *)(in_v0 + 0x1aa) = in_v1;
  return DAT_8002a8e4;
}



undefined4
S_SR_OBJ_B4(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
           undefined4 param_5,undefined4 param_6)

{
  return DAT_8002a8e4;
}



undefined4 FUN_80019f88(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = param_1 << (DAT_8002ad6c & 0x1f);
  puVar3 = DAT_8002ada8;
  if (DAT_8002ada8 == (uint *)0x0) {
    return 0;
  }
  do {
    uVar1 = *puVar3;
    if ((uVar1 & 0x80000000) == 0) {
      if ((uVar1 & 0x40000000) != 0) {
        return 0;
      }
      if (uVar2 <= (uVar1 & 0xfffffff)) {
        return 1;
      }
      if (uVar2 < (uVar1 & 0xfffffff) + puVar3[1]) {
        return 1;
      }
    }
    puVar3 = puVar3 + 2;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x8001a488)
// WARNING: Removing unreachable block (ram,0x8001a348)
// WARNING: Removing unreachable block (ram,0x8001a358)
// WARNING: Removing unreachable block (ram,0x8001a3a8)
// WARNING: Removing unreachable block (ram,0x8001a3cc)
// WARNING: Removing unreachable block (ram,0x8001a44c)
// WARNING: Removing unreachable block (ram,0x8001a4b8)
// WARNING: Removing unreachable block (ram,0x8001a4d0)
// WARNING: Removing unreachable block (ram,0x8001a4a0)

long SpuSetReverbModeParam(SpuReverbAttr *attr)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined in_a1;
  undefined in_a2;
  undefined *puVar6;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  uint uVar7;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  undefined2 in_stack_ffffff84;
  undefined2 in_stack_ffffff86;
  undefined in_stack_ffffff88;
  undefined in_stack_ffffff8c;
  undefined in_stack_ffffff90;
  undefined in_stack_ffffff94;
  undefined2 in_stack_ffffff98;
  undefined2 in_stack_ffffff9a;
  undefined2 in_stack_ffffff9c;
  undefined2 in_stack_ffffff9e;
  undefined2 in_stack_ffffffa4;
  undefined2 in_stack_ffffffa6;
  undefined2 in_stack_ffffffb8;
  undefined2 in_stack_ffffffbc;
  undefined2 in_stack_ffffffbe;
  
  uVar7 = attr->mask;
  bVar2 = uVar7 == 0;
  uVar8 = 0;
  if ((bVar2) || ((uVar7 & 1) != 0)) {
    uVar7 = attr->mode;
    if ((uVar7 & 0x100) != 0) {
      uVar7 = uVar7 & 0xfffffeff;
    }
    if (uVar7 < 10) {
      attr = (SpuReverbAttr *)(&DAT_8002adac)[uVar7];
      iVar3 = FUN_80019f88((int)attr);
      if (iVar3 == 0) {
        puVar6 = &stack0xffffff80;
        iVar3 = 0x43;
        DAT_8002a8ec = (&DAT_8002adac)[uVar7];
        puVar5 = &DAT_8002adfc + uVar7 * 0x44;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (iVar3 != -1);
        DAT_8002a8f4 = uVar7;
        if (uVar7 != 7) {
          if (uVar7 != 8) {
            lVar4 = S_SRMP_OBJ_170();
            return lVar4;
          }
          DAT_8002a900 = 0;
          DAT_8002a8fc = 0x7f;
          lVar4 = S_SRMP_OBJ_180((char)DAT_8002a8ec,0xff,(char)puVar6,0xff,uVar8,in_stack_ffffff84,
                                 in_stack_ffffff88,in_stack_ffffff8c,in_stack_ffffff90,
                                 in_stack_ffffff94,in_stack_ffffff86,in_stack_ffffff98,
                                 in_stack_ffffff9a,in_stack_ffffff9c,in_stack_ffffff9e,
                                 in_stack_ffffffa4,in_stack_ffffffa6,in_stack_ffffffb8,
                                 in_stack_ffffffbc,in_stack_ffffffbe);
          return lVar4;
        }
        DAT_8002a900 = 0x7f;
        DAT_8002a8fc = 0x7f;
        lVar4 = S_SRMP_OBJ_180((char)DAT_8002a8ec,0xff,(char)puVar6,0xff,uVar8,in_stack_ffffff84,
                               in_stack_ffffff88,in_stack_ffffff8c,in_stack_ffffff90,
                               in_stack_ffffff94,in_stack_ffffff86,in_stack_ffffff98,
                               in_stack_ffffff9a,in_stack_ffffff9c,in_stack_ffffff9e,
                               in_stack_ffffffa4,in_stack_ffffffa6,in_stack_ffffffb8,
                               in_stack_ffffffbc,in_stack_ffffffbe);
        return lVar4;
      }
    }
    lVar4 = S_SRMP_OBJ_4DC((char)attr,in_a1,in_a2,in_a3,(char)uVar8,(char)in_stack_ffffff84,
                           in_stack_ffffff88,in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,
                           unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_s6,unaff_s7,
                           unaff_s8,unaff_retaddr);
    return lVar4;
  }
  if ((bVar2) || ((uVar7 & 8) != 0)) {
    if (((int)DAT_8002a8f4 < 9) && (6 < (int)DAT_8002a8f4)) {
      puVar6 = &stack0xffffff80;
      iVar3 = 0x43;
      puVar5 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (iVar3 != -1);
      DAT_8002a8fc = attr->delay;
      lVar4 = S_SRMP_OBJ_2AC((char)in_stack_ffffffbe,(char)(DAT_8002a8fc * 0x1000 >> 0x1f),9,in_a3,
                             0xc011c00);
      return lVar4;
    }
    DAT_8002a8fc = 0;
  }
  if ((bVar2) || ((uVar7 & 0x10) != 0)) {
    if (((int)DAT_8002a8f4 < 9) && (6 < (int)DAT_8002a8f4)) {
      puVar6 = &stack0xffffff80;
      iVar3 = 0x43;
      puVar5 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (iVar3 != -1);
      lVar4 = S_SRMP_OBJ_340(0xff,(char)puVar6,0xff,in_a3,uVar8);
      return lVar4;
    }
    DAT_8002a900 = 0;
  }
  if ((bVar2) || ((uVar7 & 2) != 0)) {
    SPU_REVERB_OUT_L = (attr->depth).left;
    DAT_8002a8f8 = (attr->depth).left;
  }
  if ((!bVar2) && ((uVar7 & 4) == 0)) {
    return 0;
  }
  SPU_REVERB_OUT_R = (attr->depth).right;
  DAT_8002a8fa = (attr->depth).right;
  lVar4 = S_SRMP_OBJ_45C((char)attr,in_a1,in_a2,in_a3,0,(char)in_stack_ffffff84,in_stack_ffffff88,
                         in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,0);
  return lVar4;
}



undefined4 S_SRMP_OBJ_170(void)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined in_a0;
  int iVar4;
  undefined in_a1;
  undefined4 *puVar5;
  undefined in_a2;
  undefined in_a3;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined uVar6;
  uint in_stack_00000010;
  undefined uVar7;
  short in_stack_00000014;
  short in_stack_00000016;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined2 uStack00000022;
  undefined in_stack_00000024;
  short sStack00000028;
  short sStack0000002a;
  short sStack0000002c;
  short in_stack_0000002e;
  short sStack00000034;
  short in_stack_00000036;
  short sStack00000048;
  short sStack0000004a;
  short in_stack_0000004c;
  short in_stack_0000004e;
  int in_stack_00000058;
  
  DAT_8002a900 = 0;
  if ((((unaff_s5 != 0) || ((unaff_s3 & 8) != 0)) && (DAT_8002a8f4 < 9)) && (6 < DAT_8002a8f4)) {
    if (unaff_s4 == 0) {
      puVar5 = (undefined4 *)&stack0x00000010;
      iVar4 = 0x43;
      puVar3 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
        *(undefined *)puVar5 = uVar1;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (iVar4 != -1);
      in_stack_00000010 = 0xc011c00;
    }
    DAT_8002a8fc = *(int *)(unaff_s2 + 0xc);
    sStack00000028 = (short)((DAT_8002a8fc * 0x2000) / 0x7f) - in_stack_00000014;
    sStack0000004a = (short)((DAT_8002a8fc * 0x1000) / 0x7f);
    sStack0000002a = sStack0000004a - in_stack_00000016;
    sStack00000034 = sStack0000004a + in_stack_00000036;
    sStack0000002c = sStack0000004a + in_stack_0000002e;
    sStack00000048 = sStack0000004a + in_stack_0000004c;
    sStack0000004a = sStack0000004a + in_stack_0000004e;
    uVar2 = S_SRMP_OBJ_2AC((char)in_stack_0000004e,(char)(DAT_8002a8fc * 0x1000 >> 0x1f),9,in_a3,
                           in_stack_00000010);
    return uVar2;
  }
  DAT_8002a8fc = 0;
  if (((unaff_s5 != 0) || ((unaff_s3 & 0x10) != 0)) && ((DAT_8002a8f4 < 9 && (6 < DAT_8002a8f4)))) {
    if (unaff_s4 == 0) {
      puVar5 = (undefined4 *)&stack0x00000010;
      if (unaff_s6 == 0) {
        iVar4 = 0x43;
        puVar3 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
          *(undefined *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        } while (iVar4 != -1);
        uVar2 = S_SRMP_OBJ_340(0xff,(char)puVar5,0xff,in_a3,in_stack_00000010);
        return uVar2;
      }
      in_stack_00000010 = in_stack_00000010 | 0x80;
    }
    DAT_8002a900 = *(int *)(unaff_s2 + 0x10);
    uStack00000022 = (undefined2)((DAT_8002a900 * 0x8100) / 0x7f);
    uVar2 = S_SRMP_OBJ_38C();
    return uVar2;
  }
  DAT_8002a900 = 0;
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      SPU_REVERB_OUT_L = *(word *)(unaff_s2 + 8);
      DAT_8002a8f8 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      SPU_REVERB_OUT_R = *(word *)(unaff_s2 + 10);
      DAT_8002a8fa = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_45C(in_a0,in_a1,in_a2,in_a3,uVar6,uVar7,in_stack_00000018,in_stack_0000001c
                             ,in_stack_00000020,in_stack_00000024,in_stack_00000058);
      return uVar2;
    }
  }
  else {
    unaff_s7 = SPU_CTRL_REG_CPUCNT >> 7 & 1;
    if ((SPU_CTRL_REG_CPUCNT >> 7 & 1) != 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f;
      uVar2 = S_SRMP_OBJ_438();
      return uVar2;
    }
    SPU_REVERB_OUT_L = 0;
    SPU_REVERB_OUT_R = 0;
    DAT_8002a8f8 = 0;
    DAT_8002a8fa = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr((uint *)&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



undefined4
S_SRMP_OBJ_180(undefined param_1,undefined param_2,undefined param_3,undefined param_4,uint param_5,
              short param_6,undefined param_7,undefined param_8,undefined param_9,undefined param_10
              ,short param_11,short param_12,short param_13,short param_14,short param_15,
              short param_16,short param_17,short param_18,short param_19,short param_20)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined2 uStack00000022;
  short sStack0000004a;
  int in_stack_00000058;
  
  if ((unaff_s5 != 0) || ((unaff_s3 & 8) != 0)) {
    if ((DAT_8002a8f4 < 9) && (6 < DAT_8002a8f4)) {
      if (unaff_s4 == 0) {
        puVar5 = &param_5;
        iVar4 = 0x43;
        puVar3 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
          *(undefined *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        } while (iVar4 != -1);
        param_5 = 0xc011c00;
      }
      DAT_8002a8fc = *(int *)(unaff_s2 + 0xc);
      param_12 = (short)((DAT_8002a8fc * 0x2000) / 0x7f) - param_6;
      sStack0000004a = (short)((DAT_8002a8fc * 0x1000) / 0x7f);
      param_13 = sStack0000004a - param_11;
      param_16 = sStack0000004a + param_17;
      param_14 = sStack0000004a + param_15;
      param_18 = sStack0000004a + param_19;
      sStack0000004a = sStack0000004a + param_20;
      uVar2 = S_SRMP_OBJ_2AC((char)param_20,(char)(DAT_8002a8fc * 0x1000 >> 0x1f),9,param_4,param_5)
      ;
      return uVar2;
    }
    DAT_8002a8fc = 0;
  }
  if ((unaff_s5 != 0) || ((unaff_s3 & 0x10) != 0)) {
    if ((DAT_8002a8f4 < 9) && (6 < DAT_8002a8f4)) {
      if (unaff_s4 == 0) {
        puVar5 = &param_5;
        if (unaff_s6 == 0) {
          iVar4 = 0x43;
          puVar3 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
          do {
            uVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
            *(undefined *)puVar5 = uVar1;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (iVar4 != -1);
          uVar2 = S_SRMP_OBJ_340(0xff,(char)puVar5,0xff,param_4,param_5);
          return uVar2;
        }
        param_5 = param_5 | 0x80;
      }
      DAT_8002a900 = *(int *)(unaff_s2 + 0x10);
      uStack00000022 = (undefined2)((DAT_8002a900 * 0x8100) / 0x7f);
      uVar2 = S_SRMP_OBJ_38C();
      return uVar2;
    }
    DAT_8002a900 = 0;
  }
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      SPU_REVERB_OUT_L = *(word *)(unaff_s2 + 8);
      DAT_8002a8f8 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      SPU_REVERB_OUT_R = *(word *)(unaff_s2 + 10);
      DAT_8002a8fa = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_45C(param_1,param_2,param_3,param_4,(undefined)param_5,(undefined)param_6,
                             param_7,param_8,param_9,param_10,in_stack_00000058);
      return uVar2;
    }
  }
  else {
    unaff_s7 = SPU_CTRL_REG_CPUCNT >> 7 & 1;
    if ((SPU_CTRL_REG_CPUCNT >> 7 & 1) != 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f;
      uVar2 = S_SRMP_OBJ_438();
      return uVar2;
    }
    SPU_REVERB_OUT_L = 0;
    SPU_REVERB_OUT_R = 0;
    DAT_8002a8f8 = 0;
    DAT_8002a8fa = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&param_5);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



undefined4
S_SRMP_OBJ_2AC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,uint param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined2 uStack00000022;
  undefined in_stack_00000024;
  int in_stack_00000058;
  
  if ((unaff_s5 != 0) || ((unaff_s3 & 0x10) != 0)) {
    if ((DAT_8002a8f4 < 9) && (6 < DAT_8002a8f4)) {
      if (unaff_s4 == 0) {
        puVar5 = &param_5;
        if (unaff_s6 == 0) {
          iVar4 = 0x43;
          puVar3 = &DAT_8002adfc + DAT_8002a8f4 * 0x44;
          do {
            uVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
            *(undefined *)puVar5 = uVar1;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (iVar4 != -1);
          uVar2 = S_SRMP_OBJ_340(0xff,(char)puVar5,0xff,param_4,param_5);
          return uVar2;
        }
        param_5 = param_5 | 0x80;
      }
      DAT_8002a900 = *(int *)(unaff_s2 + 0x10);
      uStack00000022 = (undefined2)((DAT_8002a900 * 0x8100) / 0x7f);
      uVar2 = S_SRMP_OBJ_38C();
      return uVar2;
    }
    DAT_8002a900 = 0;
  }
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      SPU_REVERB_OUT_L = *(word *)(unaff_s2 + 8);
      DAT_8002a8f8 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      SPU_REVERB_OUT_R = *(word *)(unaff_s2 + 10);
      DAT_8002a8fa = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_45C(param_1,param_2,param_3,param_4,(undefined)param_5,in_stack_00000014,
                             in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024
                             ,in_stack_00000058);
      return uVar2;
    }
  }
  else {
    unaff_s7 = SPU_CTRL_REG_CPUCNT >> 7 & 1;
    if ((SPU_CTRL_REG_CPUCNT >> 7 & 1) != 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f;
      uVar2 = S_SRMP_OBJ_438();
      return uVar2;
    }
    SPU_REVERB_OUT_L = 0;
    SPU_REVERB_OUT_R = 0;
    DAT_8002a8f8 = 0;
    DAT_8002a8fa = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&param_5);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



void S_SRMP_OBJ_340(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined4 param_5)

{
  int unaff_s2;
  undefined2 uStack00000022;
  
  DAT_8002a900 = *(int *)(unaff_s2 + 0x10);
  uStack00000022 = (undefined2)((DAT_8002a900 * 0x8100) / 0x7f);
  S_SRMP_OBJ_38C();
  return;
}



undefined4 S_SRMP_OBJ_38C(void)

{
  undefined4 uVar1;
  undefined in_a0;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  int in_stack_00000058;
  
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      SPU_REVERB_OUT_L = *(word *)(unaff_s2 + 8);
      DAT_8002a8f8 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      SPU_REVERB_OUT_R = *(word *)(unaff_s2 + 10);
      DAT_8002a8fa = *(undefined2 *)(unaff_s2 + 10);
      uVar1 = S_SRMP_OBJ_45C(in_a0,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                             in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024
                             ,in_stack_00000058);
      return uVar1;
    }
  }
  else {
    unaff_s7 = SPU_CTRL_REG_CPUCNT >> 7 & 1;
    if ((SPU_CTRL_REG_CPUCNT >> 7 & 1) != 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xff7f;
      uVar1 = S_SRMP_OBJ_438();
      return uVar1;
    }
    SPU_REVERB_OUT_L = 0;
    SPU_REVERB_OUT_R = 0;
    DAT_8002a8f8 = 0;
    DAT_8002a8fa = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr((uint *)&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



undefined4 S_SRMP_OBJ_438(void)

{
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000058;
  
  SPU_REVERB_OUT_L = 0;
  SPU_REVERB_OUT_R = 0;
  DAT_8002a8f8 = 0;
  DAT_8002a8fa = 0;
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr((uint *)&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



undefined4
S_SRMP_OBJ_45C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
              undefined param_5,undefined param_6,undefined param_7,undefined param_8,
              undefined param_9,undefined param_10,int param_11)

{
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr((uint *)&param_5);
  }
  if (param_11 != 0) {
    SpuClearReverbWorkArea(DAT_8002a8f4);
  }
  if ((unaff_s4 != 0) && (FUN_800191c4(0xd1,DAT_8002a8ec,0), unaff_s7 != 0)) {
    SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 0x80;
  }
  return 0;
}



void S_SRMP_OBJ_4DC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                   undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _spu_setReverbAttr(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  bVar1 = uVar2 == 0;
  if ((bVar1) || ((uVar2 & 1) != 0)) {
    _DAT_1f801dc0 = *(undefined2 *)(param_1 + 1);
  }
  if ((bVar1) || ((uVar2 & 2) != 0)) {
    _DAT_1f801dc2 = *(undefined2 *)((int)param_1 + 6);
  }
  if ((bVar1) || ((uVar2 & 4) != 0)) {
    _DAT_1f801dc4 = *(undefined2 *)(param_1 + 2);
  }
  if ((bVar1) || ((uVar2 & 8) != 0)) {
    _DAT_1f801dc6 = *(undefined2 *)((int)param_1 + 10);
  }
  if ((bVar1) || ((uVar2 & 0x10) != 0)) {
    _DAT_1f801dc8 = *(undefined2 *)(param_1 + 3);
  }
  if ((bVar1) || ((uVar2 & 0x20) != 0)) {
    _DAT_1f801dca = *(undefined2 *)((int)param_1 + 0xe);
  }
  if ((bVar1) || ((uVar2 & 0x40) != 0)) {
    _DAT_1f801dcc = *(undefined2 *)(param_1 + 4);
  }
  if ((bVar1) || ((uVar2 & 0x80) != 0)) {
    _DAT_1f801dce = *(undefined2 *)((int)param_1 + 0x12);
  }
  if ((bVar1) || ((uVar2 & 0x100) != 0)) {
    _DAT_1f801dd0 = *(undefined2 *)(param_1 + 5);
  }
  if ((bVar1) || ((uVar2 & 0x200) != 0)) {
    _DAT_1f801dd2 = *(undefined2 *)((int)param_1 + 0x16);
  }
  if ((bVar1) || ((uVar2 & 0x400) != 0)) {
    _DAT_1f801dd4 = *(undefined2 *)(param_1 + 6);
  }
  if ((bVar1) || ((uVar2 & 0x800) != 0)) {
    _DAT_1f801dd6 = *(undefined2 *)((int)param_1 + 0x1a);
  }
  if ((bVar1) || ((uVar2 & 0x1000) != 0)) {
    _DAT_1f801dd8 = *(undefined2 *)(param_1 + 7);
  }
  if ((bVar1) || ((uVar2 & 0x2000) != 0)) {
    _DAT_1f801dda = *(undefined2 *)((int)param_1 + 0x1e);
  }
  if ((bVar1) || ((uVar2 & 0x4000) != 0)) {
    _DAT_1f801ddc = *(undefined2 *)(param_1 + 8);
  }
  if ((bVar1) || ((uVar2 & 0x8000) != 0)) {
    _DAT_1f801dde = *(undefined2 *)((int)param_1 + 0x22);
  }
  if ((bVar1) || ((uVar2 & 0x10000) != 0)) {
    _DAT_1f801de0 = *(undefined2 *)(param_1 + 9);
  }
  if ((bVar1) || ((uVar2 & 0x20000) != 0)) {
    _DAT_1f801de2 = *(undefined2 *)((int)param_1 + 0x26);
  }
  if ((bVar1) || ((uVar2 & 0x40000) != 0)) {
    _DAT_1f801de4 = *(undefined2 *)(param_1 + 10);
  }
  if ((bVar1) || ((uVar2 & 0x80000) != 0)) {
    _DAT_1f801de6 = *(undefined2 *)((int)param_1 + 0x2a);
  }
  if ((bVar1) || ((uVar2 & 0x100000) != 0)) {
    _DAT_1f801de8 = *(undefined2 *)(param_1 + 0xb);
  }
  if ((bVar1) || ((uVar2 & 0x200000) != 0)) {
    _DAT_1f801dea = *(undefined2 *)((int)param_1 + 0x2e);
  }
  if ((bVar1) || ((uVar2 & 0x400000) != 0)) {
    _DAT_1f801dec = *(undefined2 *)(param_1 + 0xc);
  }
  if ((bVar1) || ((uVar2 & 0x800000) != 0)) {
    _DAT_1f801dee = *(undefined2 *)((int)param_1 + 0x32);
  }
  if ((bVar1) || ((uVar2 & 0x1000000) != 0)) {
    _DAT_1f801df0 = *(undefined2 *)(param_1 + 0xd);
  }
  if ((bVar1) || ((uVar2 & 0x2000000) != 0)) {
    _DAT_1f801df2 = *(undefined2 *)((int)param_1 + 0x36);
  }
  if ((bVar1) || ((uVar2 & 0x4000000) != 0)) {
    _DAT_1f801df4 = *(undefined2 *)(param_1 + 0xe);
  }
  if ((bVar1) || ((uVar2 & 0x8000000) != 0)) {
    _DAT_1f801df6 = *(undefined2 *)((int)param_1 + 0x3a);
  }
  if ((bVar1) || ((uVar2 & 0x10000000) != 0)) {
    _DAT_1f801df8 = *(undefined2 *)(param_1 + 0xf);
  }
  if ((bVar1) || ((uVar2 & 0x20000000) != 0)) {
    _DAT_1f801dfa = *(undefined2 *)((int)param_1 + 0x3e);
  }
  if ((bVar1) || ((uVar2 & 0x40000000) != 0)) {
    _DAT_1f801dfc = *(undefined2 *)(param_1 + 0x10);
  }
  if ((bVar1) || ((int)uVar2 < 0)) {
    _DAT_1f801dfe = *(undefined2 *)((int)param_1 + 0x42);
  }
  return;
}



// Possible S_GRMP.OBJ/SpuGetReverbModeParam

void SpuGetReverbModeParam(int param_1)

{
  *(undefined4 *)(param_1 + 4) = DAT_8002a8f4;
  *(undefined4 *)(param_1 + 0xc) = DAT_8002a8fc;
  *(undefined4 *)(param_1 + 0x10) = DAT_8002a900;
  *(undefined2 *)(param_1 + 8) = DAT_8002a8f8;
  *(undefined2 *)(param_1 + 10) = DAT_8002a8fa;
  return;
}



long SpuSetReverbDepth(SpuReverbAttr *attr)

{
  uint uVar1;
  
  uVar1 = attr->mask;
  if ((uVar1 == 0) || ((uVar1 & 2) != 0)) {
    SPU_REVERB_OUT_L = (attr->depth).left;
    DAT_8002a8f8 = (attr->depth).left;
  }
  if ((uVar1 == 0) || ((uVar1 & 4) != 0)) {
    SPU_REVERB_OUT_R = (attr->depth).right;
    DAT_8002a8fa = (attr->depth).right;
  }
  return 0;
}



ulong SpuSetReverbVoice(long on_off,ulong voice_bit)

{
  uint uVar1;
  
  uVar1 = FUN_80019b80(on_off,voice_bit,0xcc,0xcd);
  return uVar1;
}



long SpuClearReverbWorkArea(long mode)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined in_a1;
  uint uVar7;
  uint in_a2;
  uint uVar8;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  uint uVar9;
  undefined4 unaff_s2;
  uint uVar10;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_retaddr;
  int iVar11;
  undefined in_stack_ffffffdc;
  
  iVar11 = 0;
  lVar6 = mode;
  if ((uint)mode < 10) {
    lVar6 = (&DAT_8002adac)[mode];
    iVar5 = FUN_80019f88(lVar6);
    iVar4 = DAT_8002ad7c;
    iVar3 = DAT_8002ad60;
    if (iVar5 == 0) {
      if (mode != 0) {
        iVar5 = (&DAT_8002adac)[mode];
        uVar9 = 0x10000 - iVar5 << (DAT_8002ad6c & 0x1f);
        uVar10 = iVar5 << (DAT_8002ad6c & 0x1f);
        bVar1 = DAT_8002ad60 == 1;
        if (bVar1) {
          DAT_8002ad60 = 0;
        }
        bVar2 = true;
        if (DAT_8002ad7c != 0) {
          DAT_8002ad7c = 0;
          iVar11 = iVar4;
        }
        do {
          if (uVar9 < 0x401) {
            bVar2 = false;
            uVar8 = uVar9;
          }
          else {
            uVar8 = 0x400;
          }
          uVar7 = uVar10;
          FUN_80018e44(2,uVar10,in_a2);
          FUN_80018e44(1,uVar7,in_a2);
          FUN_80018e44(3,(uint)&DAT_8002a93c,uVar8);
          uVar9 = uVar9 - 0x400;
          uVar10 = uVar10 + 0x400;
          WaitEvent();
          in_a2 = uVar8;
        } while (bVar2);
        if (bVar1) {
          DAT_8002ad60 = iVar3;
        }
        if (iVar11 != 0) {
          DAT_8002ad7c = iVar11;
        }
        return 0;
      }
      lVar6 = S_CRWA_OBJ_9C((char)lVar6,in_a1,(char)in_a2,in_a3,iVar11);
      return lVar6;
    }
  }
  lVar6 = S_CRWA_OBJ_174((char)lVar6,in_a1,(char)in_a2,in_a3,(char)iVar11,in_stack_ffffffdc,unaff_s0
                         ,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_retaddr);
  return lVar6;
}



undefined4
S_CRWA_OBJ_9C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 in_register_00000019;
  uint uVar5;
  uint uVar6;
  uint unaff_s1;
  uint unaff_s2;
  int unaff_s5;
  
  iVar3 = DAT_8002ad60;
  if (DAT_8002ad60 == 1) {
    DAT_8002ad60 = 0;
    unaff_s5 = 1;
  }
  bVar2 = true;
  if (DAT_8002ad7c != 0) {
    param_5 = DAT_8002ad7c;
    DAT_8002ad7c = 0;
  }
  bVar1 = unaff_s1 < 0x401;
  uVar5 = CONCAT31(in_register_00000019,param_3);
  do {
    if (bVar1) {
      bVar2 = false;
      uVar6 = unaff_s1;
    }
    else {
      uVar6 = 0x400;
    }
    uVar4 = unaff_s2;
    FUN_80018e44(2,unaff_s2,uVar5);
    FUN_80018e44(1,uVar4,uVar5);
    FUN_80018e44(3,(uint)&DAT_8002a93c,uVar6);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    WaitEvent();
    bVar1 = unaff_s1 < 0x401;
    uVar5 = uVar6;
  } while (bVar2);
  if (unaff_s5 != 0) {
    DAT_8002ad60 = iVar3;
  }
  if (param_5 != 0) {
    DAT_8002ad7c = param_5;
  }
  return 0;
}



undefined4
S_CRWA_OBJ_100(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  int unaff_s5;
  
  while( true ) {
    uVar1 = unaff_s2;
    FUN_80018e44(2,unaff_s2,param_3);
    FUN_80018e44(1,uVar1,param_3);
    FUN_80018e44(3,(uint)&DAT_8002a93c,unaff_s0);
    unaff_s1 = unaff_s1 - 0x400;
    unaff_s2 = unaff_s2 + 0x400;
    WaitEvent();
    if (unaff_s3 == 0) break;
    param_3 = unaff_s0;
    if (unaff_s1 < 0x401) {
      unaff_s3 = 0;
      unaff_s0 = unaff_s1;
    }
    else {
      unaff_s0 = 0x400;
    }
  }
  if (unaff_s5 != 0) {
    DAT_8002ad60 = unaff_s4;
  }
  if (param_5 != 0) {
    DAT_8002ad7c = param_5;
  }
  return 0;
}



void S_CRWA_OBJ_174(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13)

{
  return;
}



long SpuReadDecodedData(SpuDecodedData *d_data,long flag)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined in_a3;
  undefined4 unaff_retaddr;
  
  if (flag == 5) {
    bVar1 = S_RDD_OBJ_40((dword)d_data,0,0x20,in_a3,unaff_retaddr);
    return CONCAT31(extraout_var_00,bVar1);
  }
  if (flag != 6) {
    bVar1 = S_RDD_OBJ_3C(d_data,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = S_RDD_OBJ_40((dword)d_data->voice1,0x100,0x20,in_a3,unaff_retaddr);
  return CONCAT31(extraout_var_01,bVar1);
}



bool S_RDD_OBJ_3C(dword param_1,undefined4 param_2)

{
  FUN_80018d88(param_1,(word)param_2,0x40);
  return (SPU_STATUS_REG_SPUSTAT & 0x800) != 0;
}



bool S_RDD_OBJ_40(dword param_1,word param_2,int param_3,undefined param_4,undefined4 param_5)

{
  FUN_80018d88(param_1,param_2,param_3);
  return (SPU_STATUS_REG_SPUSTAT & 0x800) != 0;
}



void FUN_8001acf0(int param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = param_2 & 0xffffff;
  uVar2 = (ushort)uVar1;
  uVar3 = (ushort)(uVar1 >> 0x10);
  if (param_1 == 0) {
    if ((DAT_8002ad3c & 1) == 0) {
      DAT_8002a8dc = ~uVar1 & DAT_8002a8dc;
      SPU_VOICE_KEY_OFF._0_2_ = uVar2;
      SPU_VOICE_KEY_OFF._2_2_ = uVar3;
    }
    else {
      DAT_8002a908 = DAT_8002a908 | 1;
      DAT_8002a904 = ~uVar1 & DAT_8002a904;
      if ((DAT_80037080 & uVar1) != 0) {
        DAT_80037080 = DAT_80037080 & (ushort)~uVar1;
      }
      DAT_80037084 = uVar2;
      DAT_80037086 = uVar3;
      if (((uint)DAT_80037082 & uVar1 >> 0x10) != 0) {
        DAT_80037082 = DAT_80037082 & ~uVar3;
      }
    }
  }
  else if (param_1 == 1) {
    if ((DAT_8002ad3c & 1) == 0) {
      DAT_8002a8dc = uVar1 | DAT_8002a8dc;
      SPU_VOICE_KEY_ON._0_2_ = uVar2;
      SPU_VOICE_KEY_ON._2_2_ = uVar3;
    }
    else {
      DAT_8002a908 = DAT_8002a908 | 1;
      DAT_8002a904 = uVar1 | DAT_8002a904;
      if ((DAT_80037084 & uVar1) != 0) {
        DAT_80037084 = DAT_80037084 & ~uVar2;
      }
      DAT_80037080 = uVar2;
      DAT_80037082 = uVar3;
      if (((uint)DAT_80037086 & uVar1 >> 0x10) != 0) {
        DAT_80037086 = DAT_80037086 & ~uVar3;
      }
    }
  }
  return;
}



void FUN_8001aef4(uint param_1,undefined2 *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)((int)&VOICE_00_LEFT_RIGHT + (param_1 << 4 | 0xc));
  *param_3 = uVar1;
  iVar2 = (uint)uVar1 << 0x10;
  if ((1 << (param_1 & 0x1f) & DAT_8002a8dc) == 0) {
    if (iVar2 < 1) {
      *param_2 = 0;
    }
    else {
      *param_2 = 2;
    }
  }
  else if (iVar2 < 1) {
    *param_2 = 3;
  }
  else {
    *param_2 = 1;
  }
  return;
}



uint FUN_8001af64(word *param_1,uint param_2,uint param_3)

{
  if (0x7eff0 < param_2) {
    param_2 = 0x7eff0;
  }
  FUN_800190d4(param_1,param_2,param_3);
  if (DAT_8002ad7c == 0) {
    DAT_8002ad78 = 0;
  }
  return param_2;
}



uint FUN_8001afc4(uint param_1)

{
  uint uVar1;
  
  if (param_1 - 0x1010 < 0x7efe9) {
    uVar1 = FUN_8001920c(-1,param_1);
    DAT_8002ad5c = (undefined2)uVar1;
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



long SpuSetTransferMode(long mode)

{
  long lVar1;
  
  if ((mode != 0) && (mode == 1)) {
    lVar1 = S_STM_OBJ_1C(1);
    return lVar1;
  }
  DAT_8002a8e0 = mode;
  DAT_8002ad60 = 0;
  return 0;
}



void S_STM_OBJ_1C(undefined4 param_1)

{
  undefined4 in_v0;
  
  DAT_8002a8e0 = param_1;
  DAT_8002ad60 = in_v0;
  return;
}



// Possible S_STC.OBJ/SpuSetTransferCallback

void SpuSetTransferCallback(int param_1)

{
  if (param_1 != DAT_8002ad7c) {
    DAT_8002ad7c = param_1;
  }
  return;
}



ulong SpuSetPitchLFOVoice(long on_off,ulong voice_bit)

{
  uint uVar1;
  
  uVar1 = FUN_80019b80(on_off,voice_bit,200,0xc9);
  return uVar1;
}



void FUN_8001b094(uint *param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = *param_1;
  bVar1 = uVar5 == 0;
  uVar4 = 0;
  if (bVar1) {
LAB_8001b0c4:
    switch(*(undefined2 *)(param_1 + 2)) {
    default:
switchD_8001b0e8_caseD_0:
      uVar3 = *(ushort *)(param_1 + 1);
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 0x8000;
      break;
    case 2:
      uVar2 = 0x9000;
      break;
    case 3:
      uVar2 = 0xa000;
      break;
    case 4:
      uVar2 = 0xb000;
      break;
    case 5:
      uVar2 = 0xc000;
      break;
    case 6:
      uVar2 = 0xd000;
      break;
    case 7:
      uVar2 = 0xe000;
    }
    if (uVar2 != 0) {
      uVar3 = *(ushort *)(param_1 + 1);
      if ((short)uVar3 < 0x80) {
        if ((short)uVar3 < 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x7f;
      }
    }
    SPU_MAIN_VOL_L = uVar3 & 0x7fff | uVar2;
  }
  else if ((uVar5 & 1) != 0) {
    if ((uVar5 & 4) != 0) goto LAB_8001b0c4;
    goto switchD_8001b0e8_caseD_0;
  }
  if (bVar1) {
LAB_8001b18c:
    switch(*(undefined2 *)((int)param_1 + 10)) {
    default:
      goto switchD_8001b1b0_caseD_0;
    case 1:
      uVar3 = 0x8000;
      break;
    case 2:
      uVar3 = 0x9000;
      break;
    case 3:
      uVar3 = 0xa000;
      break;
    case 4:
      uVar3 = 0xb000;
      break;
    case 5:
      uVar3 = 0xc000;
      break;
    case 6:
      uVar3 = 0xd000;
      break;
    case 7:
      uVar3 = 0xe000;
    }
  }
  else {
    if ((uVar5 & 2) == 0) goto LAB_8001b23c;
    if ((uVar5 & 8) != 0) goto LAB_8001b18c;
switchD_8001b1b0_caseD_0:
    uVar4 = *(ushort *)((int)param_1 + 6);
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    uVar4 = *(ushort *)((int)param_1 + 6);
    if ((short)uVar4 < 0x80) {
      if ((short)uVar4 < 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x7f;
    }
  }
  SPU_MAIN_VOL_R = uVar4 & 0x7fff | uVar3;
LAB_8001b23c:
  if ((bVar1) || ((uVar5 & 0x40) != 0)) {
    CD_VOL_L = *(word *)(param_1 + 4);
  }
  if ((bVar1) || ((uVar5 & 0x80) != 0)) {
    CD_VOL_R = *(word *)((int)param_1 + 0x12);
  }
  if ((bVar1) || ((uVar5 & 0x400) != 0)) {
    EXT_VOL_L = *(word *)(param_1 + 7);
  }
  if ((bVar1) || ((uVar5 & 0x800) != 0)) {
    EXT_VOL_R = *(word *)((int)param_1 + 0x1e);
  }
  if ((bVar1) || ((uVar5 & 0x100) != 0)) {
    if (param_1[5] == 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xfffb;
    }
    else {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 4;
    }
  }
  if ((bVar1) || ((uVar5 & 0x200) != 0)) {
    if (param_1[6] == 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xfffe;
    }
    else {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 1;
    }
  }
  if ((bVar1) || ((uVar5 & 0x1000) != 0)) {
    if (param_1[8] == 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xfff7;
    }
    else {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 8;
    }
  }
  if ((bVar1) || ((uVar5 & 0x2000) != 0)) {
    if (param_1[9] == 0) {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT & 0xfffd;
    }
    else {
      SPU_CTRL_REG_CPUCNT = SPU_CTRL_REG_CPUCNT | 2;
    }
  }
  return;
}



void FUN_8001b428(int param_1,ushort param_2,ushort param_3)

{
  int local_8;
  
  *(ushort *)(&VOICE_00_LEFT_RIGHT + param_1 * 4) = param_2 & 0x7fff;
  *(ushort *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 0x10 + 2) = param_3 & 0x7fff;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b4b0(int param_1,ushort param_2,ushort param_3,int param_4,ushort param_5)

{
  ushort uVar1;
  ushort uVar2;
  int local_8;
  
  uVar2 = 0;
  switch((param_4 + -1) * 0x10000 >> 0x10) {
  case 0:
    uVar2 = 0x8000;
    break;
  case 1:
    uVar2 = 0x9000;
    break;
  case 2:
    uVar2 = 0xa000;
    break;
  case 3:
    uVar2 = 0xb000;
    break;
  case 4:
    uVar2 = 0xc000;
    break;
  case 5:
    uVar2 = 0xd000;
    break;
  case 6:
    uVar2 = 0xe000;
  }
  uVar1 = 0;
  *(ushort *)(&VOICE_00_LEFT_RIGHT + param_1 * 4) = param_2 & 0x7fff | uVar2;
  switch((int)((param_5 - 1) * 0x10000) >> 0x10) {
  case 0:
    uVar1 = 0x8000;
    break;
  case 1:
    uVar1 = 0x9000;
    break;
  case 2:
    uVar1 = 0xa000;
    break;
  case 3:
    uVar1 = 0xb000;
    break;
  case 4:
    uVar1 = 0xc000;
    break;
  case 5:
    uVar1 = 0xd000;
    break;
  case 6:
    uVar1 = 0xe000;
  }
  *(ushort *)((int)&VOICE_00_LEFT_RIGHT + param_1 * 0x10 + 2) = param_3 & 0x7fff | uVar1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b628(int param_1,word param_2)

{
  int local_8;
  
  (&VOICE_00_ADPCM_SAMPLE_RATE)[param_1 * 8] = param_2;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b6a4(int param_1,uint param_2)

{
  int local_10;
  
  FUN_8001920c(param_1 << 3 | 3,param_2);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
  }
  return;
}



void FUN_8001b720(int param_1,uint param_2)

{
  int local_10;
  
  FUN_8001920c(param_1 << 3 | 7,param_2);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
  }
  return;
}



void FUN_8001b79c(int param_1,int param_2)

{
  int local_8;
  
  (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] =
       (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] & 0xff0f | (ushort)(param_2 << 4);
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b828(int param_1,ushort param_2)

{
  int local_8;
  
  (&DAT_1f801c0a)[param_1 * 8] = (&DAT_1f801c0a)[param_1 * 8] & 0xffc0 | param_2;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b8b0(int param_1,ushort param_2)

{
  int local_8;
  
  (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] =
       (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] & 0xfff0 | param_2;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b938(int param_1,uint param_2,int param_3)

{
  int local_8;
  
  (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] =
       (&VOICE_00_ADSR_ATT_DEC_SUS_REL)[param_1 * 8] & 0xff |
       (ushort)((param_2 | (uint)(param_3 == 5) << 7) << 8);
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001b9d4(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0x100;
  if (param_3 == 5) {
    uVar1 = 0x200;
  }
  else if (param_3 < 6) {
    if (param_3 == 1) {
      uVar1 = 0;
    }
  }
  else if (param_3 == 7) {
    uVar1 = 0x300;
  }
  (&DAT_1f801c0a)[param_1 * 8] =
       (&DAT_1f801c0a)[param_1 * 8] & 0x3f | (ushort)((param_2 | uVar1) << 6);
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



void FUN_8001bab8(int param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  int local_8;
  
  uVar1 = 0;
  if (param_3 != 3) {
    uVar1 = (ushort)(param_3 == 7) << 5;
  }
  (&DAT_1f801c0a)[param_1 * 8] = (&DAT_1f801c0a)[param_1 * 8] & 0xffc0 | param_2 | uVar1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
  }
  return;
}



int rsin(int a)

{
  int iVar1;
  uint uVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_retaddr;
  
  if (-1 < a) {
    uVar2 = a & 0xfff;
    sin_1(uVar2);
    iVar1 = GEO_00_OBJ_2C((char)uVar2,in_a1,in_a2,in_a3,unaff_retaddr);
    return iVar1;
  }
  iVar1 = sin_1(-a & 0xfff);
  return -iVar1;
}



void GEO_00_OBJ_2C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5)

{
  return;
}



int sin_1(int param_1)

{
  int iVar1;
  
  if (0x800 < param_1) {
    if (0xc00 < param_1) {
      iVar1 = GEO_00_OBJ_C4();
      return iVar1;
    }
    return -(int)*(short *)(&DAT_8002a0a4 + param_1 * 2);
  }
  if (param_1 < 0x401) {
    iVar1 = GEO_00_OBJ_C4();
    return iVar1;
  }
  iVar1 = GEO_00_OBJ_C4();
  return iVar1;
}



void GEO_00_OBJ_C4(void)

{
  return;
}



int rcos(int a)

{
  int iVar1;
  uint uVar2;
  
  if (a < 0) {
    a = -a;
  }
  uVar2 = a & 0xfff;
  if (uVar2 < 0x801) {
    if (uVar2 < 0x401) {
      iVar1 = GEO_01_OBJ_98();
      return iVar1;
    }
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  if (0xc00 < uVar2) {
    iVar1 = GEO_01_OBJ_98();
    return iVar1;
  }
  return -(int)*(short *)(&DAT_8002b0a4 + (0xc00 - uVar2) * 2);
}



void GEO_01_OBJ_98(void)

{
  return;
}



undefined4 csqrt_1(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_3c [3];
  int in_stack_ffffffd0;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  undefined in_stack_ffffffe0;
  int aiStack_18 [3];
  int in_stack_fffffff4;
  
  uVar5 = 1;
  piVar4 = local_3c;
  iVar2 = param_1 + -0x5d50ad;
  local_3c[0] = param_1 + 0x5d50ad;
  do {
    if (uVar5 == 4) {
      iVar3 = in_stack_ffffffd0 >> 4;
      if (aiStack_18[2] < 0) {
        in_stack_ffffffd0 = (aiStack_18[2] >> 4) + in_stack_ffffffd0;
        iVar3 = iVar3 + aiStack_18[2];
        if (-1 < iVar3) {
          uVar1 = COR_05_OBJ_130(aiStack_18[2],in_stack_ffffffd0,piVar4,4,in_stack_ffffffd0,
                                 in_stack_ffffffd0 - (iVar3 >> 4),in_stack_ffffffd8,
                                 in_stack_ffffffdc,in_stack_ffffffe0,(char)iVar2,in_stack_fffffff4);
          return uVar1;
        }
      }
      else {
        in_stack_ffffffd0 = in_stack_ffffffd0 - (aiStack_18[2] >> 4);
        iVar3 = aiStack_18[2] - iVar3;
        if (-1 < iVar3) {
          uVar1 = COR_05_OBJ_130(aiStack_18[2],in_stack_ffffffd0,piVar4,4,in_stack_ffffffd0,
                                 in_stack_ffffffd0 - (iVar3 >> 4),in_stack_ffffffd8,
                                 in_stack_ffffffdc,in_stack_ffffffe0,(char)iVar2,in_stack_fffffff4);
          return uVar1;
        }
      }
      in_stack_fffffff4 = (in_stack_ffffffd0 >> 4) + iVar3;
      aiStack_18[2] = iVar3;
    }
    else {
      iVar3 = piVar4[8];
      if (iVar3 < 0) {
        piVar4[1] = (iVar3 >> (uVar5 & 0x1f)) + *piVar4;
        *(int *)(&stack0xffffffe4 + uVar5 * 4) = (*piVar4 >> (uVar5 & 0x1f)) + piVar4[8];
      }
      else {
        piVar4[1] = *piVar4 - (iVar3 >> (uVar5 & 0x1f));
        *(int *)(&stack0xffffffe4 + uVar5 * 4) = piVar4[8] - (*piVar4 >> (uVar5 & 0x1f));
      }
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)uVar5 < 7);
  return in_stack_ffffffdc;
}



undefined4
COR_05_OBJ_130(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined param_9,
              undefined param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  int in_v0;
  int iVar3;
  int *piVar4;
  int in_t0;
  int in_stack_00000030;
  
  do {
    while( true ) {
      iVar3 = in_stack_00000030;
      param_4 = param_4 + 1;
      piVar4 = param_3 + 1;
      if (6 < (int)param_4) {
        return param_8;
      }
      if (param_4 == 4) break;
      iVar3 = param_3[9];
      if (iVar3 < 0) {
        param_3[2] = (iVar3 >> (param_4 & 0x1f)) + *piVar4;
        *(int *)(in_t0 + param_4 * 4) = (*piVar4 >> (param_4 & 0x1f)) + param_3[9];
        param_3 = piVar4;
      }
      else {
        param_3[2] = *piVar4 - (iVar3 >> (param_4 & 0x1f));
        *(int *)(in_t0 + param_4 * 4) = param_3[9] - (*piVar4 >> (param_4 & 0x1f));
        param_3 = piVar4;
      }
    }
    iVar1 = param_5 >> 4;
    if (in_stack_00000030 < 0) {
      param_5 = (in_stack_00000030 >> 4) + param_5;
      in_stack_00000030 = iVar1 + in_stack_00000030;
      if (-1 < in_stack_00000030) {
        uVar2 = COR_05_OBJ_130(iVar3,param_5,piVar4,4,param_5,param_5 - (in_stack_00000030 >> 4),
                               param_7,param_8,param_9,param_10,in_v0);
        return uVar2;
      }
    }
    else {
      param_5 = param_5 - (in_stack_00000030 >> 4);
      in_stack_00000030 = in_stack_00000030 - iVar1;
      if (-1 < in_stack_00000030) {
        uVar2 = COR_05_OBJ_130(iVar3,param_5,piVar4,4,param_5,param_5 - (in_stack_00000030 >> 4),
                               param_7,param_8,param_9,param_10,in_v0);
        return uVar2;
      }
    }
    in_v0 = (param_5 >> 4) + in_stack_00000030;
    param_3 = piVar4;
  } while( true );
}



undefined4
COR_05_OBJ_134(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5,
              undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_t0;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000034;
  
  do {
    while( true ) {
      param_4 = param_4 + 1;
      piVar3 = param_3 + 1;
      if (6 < (int)param_4) {
        return param_8;
      }
      if (param_4 == 4) break;
      iVar2 = param_3[9];
      if (iVar2 < 0) {
        param_3[2] = (iVar2 >> (param_4 & 0x1f)) + *piVar3;
        *(int *)(in_t0 + param_4 * 4) = (*piVar3 >> (param_4 & 0x1f)) + param_3[9];
        param_3 = piVar3;
      }
      else {
        param_3[2] = *piVar3 - (iVar2 >> (param_4 & 0x1f));
        *(int *)(in_t0 + param_4 * 4) = param_3[9] - (*piVar3 >> (param_4 & 0x1f));
        param_3 = piVar3;
      }
    }
    iVar2 = param_5 >> 4;
    if (in_stack_00000030 < 0) {
      param_5 = (in_stack_00000030 >> 4) + param_5;
      iVar2 = iVar2 + in_stack_00000030;
      if (-1 < iVar2) {
        uVar1 = COR_05_OBJ_130(in_stack_00000030,param_5,piVar3,4,param_5,param_5 - (iVar2 >> 4),
                               param_7,param_8,in_stack_00000020,in_stack_00000024,in_stack_00000034
                              );
        return uVar1;
      }
    }
    else {
      param_5 = param_5 - (in_stack_00000030 >> 4);
      iVar2 = in_stack_00000030 - iVar2;
      if (-1 < iVar2) {
        uVar1 = COR_05_OBJ_130(in_stack_00000030,param_5,piVar3,4,param_5,param_5 - (iVar2 >> 4),
                               param_7,param_8,in_stack_00000020,in_stack_00000024,in_stack_00000034
                              );
        return uVar1;
      }
    }
    in_stack_00000034 = (param_5 >> 4) + iVar2;
    param_3 = piVar3;
    in_stack_00000030 = iVar2;
  } while( true );
}



int csqrt(int a)

{
  int iVar1;
  long lVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  uint uVar3;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  
  if (a == 0) {
    iVar1 = COR_05_OBJ_1D8(0,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return iVar1;
  }
  lVar2 = Lzc(a);
  uVar3 = 8 - lVar2 >> 1;
  if (-1 < 8 - lVar2) {
    iVar1 = COR_05_OBJ_1AC(a >> ((uVar3 & 0xf) << 1));
    return iVar1;
  }
  iVar1 = a << ((uVar3 + 1) * -2 & 0x1f);
  if ((int)(uVar3 - 5) < 0) {
    csqrt_1(iVar1);
    iVar1 = COR_05_OBJ_1D8((char)iVar1,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return iVar1;
  }
  iVar1 = csqrt_1(iVar1);
  return iVar1 << (uVar3 - 5 & 0x1f);
}



int COR_05_OBJ_1AC(int param_1)

{
  int iVar1;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  int unaff_s0;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if ((int)(unaff_s0 - 6U) < 0) {
    csqrt_1(param_1);
    iVar1 = COR_05_OBJ_1D8((char)param_1,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                           in_stack_00000018);
    return iVar1;
  }
  iVar1 = csqrt_1(param_1);
  return iVar1 << (unaff_s0 - 6U & 0x1f);
}



void COR_05_OBJ_1D8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  return;
}



void InitGeom(void)

{
  undefined4 unaff_retaddr;
  
  DAT_8002b8a8 = unaff_retaddr;
  _patch_gte();
  setCopReg(0,Status,Status | 0x40000000,0);
  gte_ldZSF3(0x155);
  gte_ldZSF4(0x100);
  gte_ldH(1000);
  gte_ldDQA(0xffffef9e);
  gte_ldDQB(0x1400000);
  gte_ldOFX(0);
  gte_ldOFY(0);
  return;
}



// WARNING: Instruction at (ram,0x8001bf80) overlaps instruction at (ram,0x8001bf7c)
// 

long SquareRoot0(long a)

{
  uint uVar1;
  int iVar2;
  
  gte_ldLZCS(a);
  uVar1 = gte_stLZCR();
  if (uVar1 != 0x20) {
    uVar1 = uVar1 & 0xfffffffe;
    if ((int)(uVar1 - 0x18) < 0) {
      iVar2 = a >> (0x18 - uVar1 & 0x1f);
    }
    else {
      iVar2 = a << (uVar1 - 0x18 & 0x1f);
    }
    return (uint)((int)*(short *)(&DAT_8002b8b8 + (iVar2 + -0x40) * 2) <<
                 ((int)(0x1f - uVar1) >> 1 & 0x1fU)) >> 0xc;
  }
  return 0;
}



// WARNING: Instruction at (ram,0x8001c018) overlaps instruction at (ram,0x8001c014)
// 

void InvSquareRoot(long a,long *b,long *c)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  gte_ldLZCS(a);
  uVar2 = gte_stLZCR();
  if ((uVar2 != 0x20) && (uVar2 != 0)) {
    uVar2 = uVar2 & 0xfffffffe;
    if ((int)(uVar2 - 0x18) < 0) {
      iVar3 = a >> (0x18 - uVar2 & 0x1f);
    }
    else {
      iVar3 = a << (uVar2 - 0x18 & 0x1f);
    }
    sVar1 = *(short *)(&DAT_8002ba4c + (iVar3 + -0x40) * 2);
    *c = (int)(0x1f - uVar2) >> 1;
    *b = (int)sVar1;
    return;
  }
  return;
}



long VectorNormalS(VECTOR *_2,SVECTOR *_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar2 = (short)_2->vx;
  sVar3 = (short)_2->vy;
  sVar4 = (short)_2->vz;
  lVar1 = MSC02_OBJ_FC();
  _3->vx = sVar2;
  _3->vy = sVar3;
  _3->vz = sVar4;
  return lVar1;
}



long VectorNormal(VECTOR *_2,VECTOR *_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = _2->vx;
  lVar3 = _2->vy;
  lVar4 = _2->vz;
  lVar1 = MSC02_OBJ_FC();
  _3->vx = lVar2;
  _3->vy = lVar3;
  _3->vz = lVar4;
  return lVar1;
}



long VectorNormalSS(SVECTOR *_2,SVECTOR *_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar2 = _2->vx;
  sVar3 = _2->vy;
  sVar4 = _2->vz;
  lVar1 = MSC02_OBJ_FC();
  _3->vx = sVar2;
  _3->vy = sVar3;
  _3->vz = sVar4;
  return lVar1;
}



void MSC02_OBJ_FC(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  int in_t3;
  uint uVar3;
  int in_t4;
  int in_t5;
  
  gte_ldsv_(in_t0,in_t1,in_t2);
  gte_sqr0_b(0);
  read_mt(in_t3,in_t4,in_t5);
  iVar1 = in_t3 + in_t4 + in_t5;
  gte_ldLZCS(iVar1);
  uVar2 = gte_stLZCR();
  uVar3 = (uVar2 & 0xfffffffe) - 0x18;
  if ((int)uVar3 < 0) {
    iVar1 = iVar1 >> (0x18 - (uVar2 & 0xfffffffe) & 0x1f);
  }
  else {
    iVar1 = iVar1 << (uVar3 & 0x1f);
  }
  gte_ldIR0((int)*(short *)(&DAT_8002ba4c + (iVar1 + -0x40) * 2));
  gte_ldsv_(in_t0,in_t1,in_t2);
  gte_gpf0(0);
  read_mt(in_t0,in_t1,in_t2);
  return;
}



void MatrixNormal(MATRIX *m,MATRIX *n)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 in_t7;
  undefined4 in_t8;
  undefined4 in_t9;
  
  iVar6 = (int)m->m[0];
  iVar9 = (int)m->m[1];
  iVar12 = (int)m->m[2];
  iVar13 = (int)m->m[1][0];
  iVar14 = (int)m->m[1][1];
  iVar15 = (int)m->m[1][2];
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR22R23();
  uVar3 = gte_stR33();
  gte_ldR11R12(iVar6);
  gte_ldR22R23(iVar9);
  gte_ldR33(iVar12);
  gte_ldIR3(iVar15);
  gte_ldIR1(iVar13);
  gte_ldIR2(iVar14);
  gte_op12_b();
  read_mt(in_t7,in_t8,in_t9);
  gte_ldR11R12(iVar13);
  gte_ldR22R23(iVar14);
  gte_ldR33(iVar15);
  gte_op12_b();
  gte_ldVXY0(iVar13);
  gte_ldVZ0(iVar14);
  gte_ldVXY1(iVar15);
  read_mt(iVar6,iVar9,iVar12);
  gte_ldR11R12(uVar1);
  gte_ldR22R23(uVar2);
  gte_ldR33(uVar3);
  MSC02_OBJ_FC();
  sVar11 = (short)in_t9;
  sVar8 = (short)in_t8;
  sVar5 = (short)in_t7;
  n->m[0] = (short)iVar6;
  n->m[1] = (short)iVar9;
  n->m[2] = (short)iVar12;
  uVar1 = gte_stVXY0();
  sVar4 = (short)uVar1;
  uVar1 = gte_stVZ0();
  sVar7 = (short)uVar1;
  uVar1 = gte_stVXY1();
  sVar10 = (short)uVar1;
  MSC02_OBJ_FC();
  n->m[1][0] = sVar4;
  n->m[1][1] = sVar7;
  n->m[1][2] = sVar10;
  MSC02_OBJ_FC();
  n->m[2][0] = sVar5;
  n->m[2][1] = sVar8;
  n->m[2][2] = sVar11;
  return;
}



// WARNING: Instruction at (ram,0x8001c2b0) overlaps instruction at (ram,0x8001c2ac)
// 

long SquareRoot12(long a)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  gte_ldLZCS(a);
  uVar1 = gte_stLZCR();
  if (uVar1 == 0x20) {
    return 0;
  }
  uVar1 = uVar1 & 0xfffffffe;
  uVar2 = (int)(0x13 - uVar1) >> 1;
  if ((int)(uVar1 - 0x18) < 0) {
    iVar3 = a >> (0x18 - uVar1 & 0x1f);
  }
  else {
    iVar3 = a << (uVar1 - 0x18 & 0x1f);
  }
  if (-1 < (int)uVar2) {
    return (int)*(short *)(&DAT_8002b8b8 + (iVar3 + -0x40) * 2) << (uVar2 & 0x1f);
  }
  return (uint)(int)*(short *)(&DAT_8002b8b8 + (iVar3 + -0x40) * 2) >> (-uVar2 & 0x1f);
}



MATRIX * CompMatrix(MATRIX *m0,MATRIX *m1,MATRIX *m2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m);
  gte_ldR13R21(*(undefined4 *)(m0->m + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m2->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m2->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  gte_stIR3();
  iVar6 = m1->t[2];
  gte_ldVXY0((uint)*(ushort *)m1->t | m1->t[1] << 0x10);
  gte_ldVZ0(iVar6);
  gte_rtv0_b();
  uVar1 = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m2->m + 2) = uVar1;
  uVar3 = iVar4 << 0x10 | uVar5 & 0xffff;
  *(uint *)(m2->m[1] + 1) = uVar3;
  read_mt(uVar1,uVar3,iVar6);
  iVar4 = m0->t[1];
  iVar2 = m0->t[2];
  m2->t[0] = uVar1 + m0->t[0];
  m2->t[1] = uVar3 + iVar4;
  m2->t[2] = iVar6 + iVar2;
  return m2;
}



MATRIX * MulMatrix0(MATRIX *m0,MATRIX *m1,MATRIX *m2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m);
  gte_ldR13R21(*(undefined4 *)(m0->m + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m2->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m2->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m2->m + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m2->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m2;
}



MATRIX * MulRotMatrix0(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldVXY0((uint)(ushort)m0->m[0] | *(uint *)(m0->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m0->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m0->m[1] | *(int *)(m0->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m0->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m0->m[2] | *(uint *)(m0->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m0->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m1->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m1->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m1->m + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m1->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m1;
}



MATRIX * MulRotMatrix(MATRIX *m0)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldVXY0(*(uint *)m0->m & 0xffff | *(uint *)(m0->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m0->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m0->m[1] | *(int *)(m0->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m0->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m0->m[2] | *(uint *)(m0->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m0->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m0->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m0->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m0->m + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m0->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m0;
}



MATRIX * SetMulMatrix(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  gte_ldR11R12(*(undefined4 *)m0->m);
  gte_ldR13R21(*(undefined4 *)(m0->m + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar4 = gte_stIR1();
  iVar5 = gte_stIR2();
  uVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar7 = gte_stIR1();
  uVar8 = gte_stIR2();
  iVar9 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldR11R12(iVar7 << 0x10 | uVar4 & 0xffff);
  gte_ldR13R21(uVar1 & 0xffff | iVar5 << 0x10);
  gte_ldR22R23(iVar2 << 0x10 | uVar8 & 0xffff);
  gte_ldR31R32(iVar9 << 0x10 | uVar6 & 0xffff);
  gte_ldR33(uVar3);
  return m0;
}



VECTOR * ApplyMatrixLV(MATRIX *m,VECTOR *_2,VECTOR *_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m->m);
  gte_ldR13R21(*(undefined4 *)(m->m + 2));
  gte_ldR22R23(*(undefined4 *)(m->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m->m[2]);
  gte_ldR33(*(undefined4 *)(m->m[2] + 2));
  uVar1 = _2->vx;
  uVar2 = _2->vy;
  uVar3 = _2->vz;
  iVar4 = (int)uVar1 >> 0xf;
  if ((int)uVar1 < 0) {
    iVar4 = -((int)-uVar1 >> 0xf);
    uVar1 = -(-uVar1 & 0x7fff);
  }
  else {
    uVar1 = uVar1 & 0x7fff;
  }
  iVar5 = (int)uVar2 >> 0xf;
  if ((int)uVar2 < 0) {
    iVar5 = -((int)-uVar2 >> 0xf);
    uVar2 = -(-uVar2 & 0x7fff);
  }
  else {
    uVar2 = uVar2 & 0x7fff;
  }
  iVar6 = (int)uVar3 >> 0xf;
  if ((int)uVar3 < 0) {
    iVar6 = -((int)-uVar3 >> 0xf);
    uVar3 = -(-uVar3 & 0x7fff);
  }
  else {
    uVar3 = uVar3 & 0x7fff;
  }
  gte_ldsv_(iVar4,iVar5,iVar6);
  gte_rtir_sf0_b();
  read_mt(iVar4,iVar5,iVar6);
  gte_ldsv_(uVar1,uVar2,uVar3);
  gte_rtir_b();
  if (iVar4 < 0) {
    iVar4 = iVar4 * 8;
  }
  else {
    iVar4 = iVar4 << 3;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 * 8;
  }
  else {
    iVar5 = iVar5 << 3;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 * 8;
  }
  else {
    iVar6 = iVar6 << 3;
  }
  read_mt(uVar1,uVar2,uVar3);
  _3->vx = uVar1 + iVar4;
  _3->vy = uVar2 + iVar5;
  _3->vz = uVar3 + iVar6;
  return _3;
}



VECTOR * ApplyRotMatrix(SVECTOR *_2,VECTOR *_3)

{
  VECTOR *in_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1._0_2_ = _2->vx;
  uVar1._2_2_ = _2->vy;
  uVar2._0_2_ = _2->vz;
  uVar2._2_2_ = _2->pad;
  gte_ldVXY0(uVar1);
  gte_ldVZ0(uVar2);
  gte_rtv0_b();
  gte_stlvl(_3);
  return in_a2;
}



MATRIX * ScaleMatrixL(MATRIX *m,VECTOR *v)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)m->m;
  iVar4 = v->vx;
  iVar5 = v->vy;
  iVar6 = v->vz;
  iVar2 = *(int *)(m->m + 2);
  *(uint *)m->m = (short)iVar1 * iVar4 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar4 >> 0xc) << 0x10;
  iVar1 = *(int *)(m->m[1] + 1);
  *(uint *)(m->m + 2) =
       (short)iVar2 * iVar4 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar5 >> 0xc) << 0x10;
  iVar2 = *(int *)m->m[2];
  *(uint *)(m->m[1] + 1) =
       (short)iVar1 * iVar5 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar5 >> 0xc) << 0x10;
  uVar3 = *(undefined4 *)(m->m[2] + 2);
  *(uint *)m->m[2] =
       (short)iVar2 * iVar6 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar6 >> 0xc) << 0x10;
  *(int *)(m->m[2] + 2) = (short)uVar3 * iVar6 >> 0xc;
  return m;
}



void PushMatrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  if (0x27f < DAT_8002bbe4) {
    DAT_8002bbd8 = unaff_retaddr;
    printf("Error: Can\'t push matrix,stack(max 20) is full!\n");
    return;
  }
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR13R21();
  *(undefined4 *)(&DAT_8002bbe8 + DAT_8002bbe4) = uVar1;
  *(undefined4 *)(&DAT_8002bbec + DAT_8002bbe4) = uVar2;
  uVar1 = gte_stR22R23();
  uVar2 = gte_stR31R32();
  *(undefined4 *)(&DAT_8002bbf0 + DAT_8002bbe4) = uVar1;
  *(undefined4 *)(&DAT_8002bbf4 + DAT_8002bbe4) = uVar2;
  uVar1 = gte_stR33();
  *(undefined4 *)(&DAT_8002bbf8 + DAT_8002bbe4) = uVar1;
  uVar1 = gte_stTRX();
  uVar2 = gte_stTRY();
  uVar3 = gte_stTRZ();
  *(undefined4 *)(&DAT_8002bbfc + DAT_8002bbe4) = uVar1;
  *(undefined4 *)(&DAT_8002bc00 + DAT_8002bbe4) = uVar2;
  *(undefined4 *)(&DAT_8002bc04 + DAT_8002bbe4) = uVar3;
  DAT_8002bbe4 = DAT_8002bbe4 + 0x20;
  return;
}



void PopMatrix(void)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = DAT_8002bbe4;
  if (DAT_8002bbe4 < 1) {
    DAT_8002bbd8 = unaff_retaddr;
    printf("Error: Can\'t pop matrix,stack is empty!\n");
    return;
  }
  DAT_8002bbe4 = DAT_8002bbe4 + -0x20;
  gte_ldR11R12(*(undefined4 *)(&DAT_8002bbc8 + iVar1));
  gte_ldR13R21(*(undefined4 *)(&DAT_8002bbcc + iVar1));
  gte_ldR22R23(*(undefined4 *)(&DAT_8002bbd0 + iVar1));
  gte_ldR31R32(*(undefined4 *)(&DAT_8002bbd4 + iVar1));
  gte_ldR33(*(undefined4 *)((int)&DAT_8002bbd8 + iVar1));
  gte_ldtr(*(undefined4 *)(&DAT_8002bbdc + iVar1),*(undefined4 *)(&DAT_8002bbe0 + iVar1),
           *(undefined4 *)((int)&DAT_8002bbe4 + iVar1));
  return;
}



void ReadRotMatrix(MATRIX *m)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = gte_stR11R12();
  uVar3 = gte_stR13R21();
  uVar5 = gte_stR22R23();
  uVar7 = gte_stR31R32();
  uVar8 = gte_stR33();
  *(undefined4 *)m->m = uVar1;
  *(undefined4 *)(m->m + 2) = uVar3;
  *(undefined4 *)(m->m[1] + 1) = uVar5;
  *(undefined4 *)m->m[2] = uVar7;
  *(undefined4 *)(m->m[2] + 2) = uVar8;
  lVar2 = gte_stTRX();
  lVar4 = gte_stTRY();
  lVar6 = gte_stTRZ();
  m->t[0] = lVar2;
  m->t[1] = lVar4;
  m->t[2] = lVar6;
  return;
}



void ReadLightMatrix(MATRIX *m)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = gte_stL11L12();
  uVar3 = gte_stL13L21();
  uVar5 = gte_stL22L23();
  uVar7 = gte_stL31L32();
  uVar8 = gte_stL33();
  *(undefined4 *)m->m = uVar1;
  *(undefined4 *)(m->m + 2) = uVar3;
  *(undefined4 *)(m->m[1] + 1) = uVar5;
  *(undefined4 *)m->m[2] = uVar7;
  *(undefined4 *)(m->m[2] + 2) = uVar8;
  lVar2 = gte_stRBK();
  lVar4 = gte_stGBK();
  lVar6 = gte_stBBK();
  m->t[0] = lVar2;
  m->t[1] = lVar4;
  m->t[2] = lVar6;
  return;
}



void ReadColorMatrix(MATRIX *m)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = gte_stLR1LR2();
  uVar3 = gte_stLR3LG1();
  uVar5 = gte_stLG2LG3();
  uVar7 = gte_stLB1LB2();
  uVar8 = gte_stLB3();
  *(undefined4 *)m->m = uVar1;
  *(undefined4 *)(m->m + 2) = uVar3;
  *(undefined4 *)(m->m[1] + 1) = uVar5;
  *(undefined4 *)m->m[2] = uVar7;
  *(undefined4 *)(m->m[2] + 2) = uVar8;
  lVar2 = gte_stRFC();
  lVar4 = gte_stGFC();
  lVar6 = gte_stBFC();
  m->t[0] = lVar2;
  m->t[1] = lVar4;
  m->t[2] = lVar6;
  return;
}



MATRIX * MulMatrix(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m);
  gte_ldR13R21(*(undefined4 *)(m0->m + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m0->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m0->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m0->m + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m0->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m0;
}



MATRIX * MulMatrix2(MATRIX *m0,MATRIX *m1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  gte_ldR11R12(*(undefined4 *)m0->m);
  gte_ldR13R21(*(undefined4 *)(m0->m + 2));
  gte_ldR22R23(*(undefined4 *)(m0->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m0->m[2]);
  gte_ldR33(*(undefined4 *)(m0->m[2] + 2));
  gte_ldVXY0((uint)(ushort)m1->m[0] | *(uint *)(m1->m + 2) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)m1->m[2]);
  gte_rtv0_b();
  uVar1 = gte_stIR1();
  iVar2 = gte_stIR2();
  uVar3 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[1] | *(int *)(m1->m[1] + 1) << 0x10);
  gte_ldVZ0((int)m1->m[2][1]);
  gte_rtv0_b();
  iVar4 = gte_stIR1();
  uVar5 = gte_stIR2();
  iVar6 = gte_stIR3();
  gte_ldVXY0((uint)(ushort)m1->m[2] | *(uint *)(m1->m[1] + 1) & 0xffff0000);
  gte_ldVZ0(*(undefined4 *)(m1->m[2] + 2));
  gte_rtv0_b();
  *(uint *)m1->m = iVar4 << 0x10 | uVar1 & 0xffff;
  *(uint *)m1->m[2] = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = gte_stIR1();
  iVar4 = gte_stIR2();
  *(uint *)(m1->m + 2) = uVar1 & 0xffff | iVar2 << 0x10;
  *(uint *)(m1->m[1] + 1) = iVar4 << 0x10 | uVar5 & 0xffff;
  gte_stIR3();
  return m1;
}



MATRIX * ScaleMatrix(MATRIX *m,VECTOR *v)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)m->m;
  iVar4 = v->vx;
  iVar5 = v->vy;
  iVar6 = v->vz;
  iVar2 = *(int *)(m->m + 2);
  *(uint *)m->m = (short)iVar1 * iVar4 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar5 >> 0xc) << 0x10;
  iVar1 = *(int *)(m->m[1] + 1);
  *(uint *)(m->m + 2) =
       (short)iVar2 * iVar6 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar4 >> 0xc) << 0x10;
  iVar2 = *(int *)m->m[2];
  *(uint *)(m->m[1] + 1) =
       (short)iVar1 * iVar5 >> 0xc & 0xffffU | ((iVar1 >> 0x10) * iVar6 >> 0xc) << 0x10;
  uVar3 = *(undefined4 *)(m->m[2] + 2);
  *(uint *)m->m[2] =
       (short)iVar2 * iVar4 >> 0xc & 0xffffU | ((iVar2 >> 0x10) * iVar5 >> 0xc) << 0x10;
  *(int *)(m->m[2] + 2) = (short)uVar3 * iVar6 >> 0xc;
  return m;
}



void SetRotMatrix(MATRIX *m)

{
  gte_ldR11R12(*(undefined4 *)m->m);
  gte_ldR13R21(*(undefined4 *)(m->m + 2));
  gte_ldR22R23(*(undefined4 *)(m->m[1] + 1));
  gte_ldR31R32(*(undefined4 *)m->m[2]);
  gte_ldR33(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetLightMatrix(MATRIX *m)

{
  gte_ldL11L12(*(undefined4 *)m->m);
  gte_ldL13L21(*(undefined4 *)(m->m + 2));
  gte_ldL22L23(*(undefined4 *)(m->m[1] + 1));
  gte_ldL31L32(*(undefined4 *)m->m[2]);
  gte_ldL33(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetColorMatrix(MATRIX *m)

{
  gte_ldLR1LR2(*(undefined4 *)m->m);
  gte_ldLR3LG1(*(undefined4 *)(m->m + 2));
  gte_ldLG2LG3(*(undefined4 *)(m->m[1] + 1));
  gte_ldLB1LB2(*(undefined4 *)m->m[2]);
  gte_ldLB3(*(undefined4 *)(m->m[2] + 2));
  return;
}



void SetTransMatrix(MATRIX *m)

{
  gte_ldtr(m->t[0],m->t[1],m->t[2]);
  return;
}



void SetBackColor(long rbk,long gbk,long bbk)

{
  gte_ldbkdir(rbk << 4,gbk << 4,bbk << 4);
  return;
}



void SetFarColor(long rfc,long gfc,long bfc)

{
  gte_ldfcdir(rfc << 4,gfc << 4,bfc << 4);
  return;
}



// Possible REG12.OBJ/SetGeomOffset

void FUN_8001d1a8(int param_1,int param_2)

{
  gte_ldOFX(param_1 << 0x10);
  gte_ldOFY(param_2 << 0x10);
  return;
}



// Possible REG13.OBJ/SetGeomScreen

void FUN_8001d1c8(undefined4 param_1)

{
  gte_ldH(param_1);
  return;
}



void LightColor(VECTOR *_2,VECTOR *_3)

{
  gte_ldlvl(_2);
  gte_lc_b();
  gte_stlvl(_3);
  return;
}



void DpqColorLight(VECTOR *_2,CVECTOR *_3,long p,CVECTOR *v2)

{
  gte_ldlvl(_2);
  gte_ldrgb(_3);
  gte_ldIR0(p);
  gte_dpcl_b();
  gte_strgb(v2);
  return;
}



void DpqColor3(CVECTOR *_2,CVECTOR *_3,CVECTOR *v2,long p,CVECTOR *v3,CVECTOR *v4,CVECTOR *v5)

{
  undefined auStackX_0 [16];
  
  gte_ldrgb3(_2,_3,v2);
  gte_ldIR0(p);
  gte_dpct_b();
  gte_strgb3(*(CVECTOR **)((int)register0x00000074 + 0x10),
             *(CVECTOR **)((int)register0x00000074 + 0x14),
             *(CVECTOR **)((int)register0x00000074 + 0x18));
  return;
}



void Intpl(VECTOR *_2,long p,CVECTOR *_3)

{
  gte_ldlvl(_2);
  gte_ldIR0(p);
  gte_intpl_b();
  gte_strgb(_3);
  return;
}



VECTOR * Square12(VECTOR *_2,VECTOR *_3)

{
  gte_ldlvl(_2);
  gte_sqr12_b();
  gte_stlvnl(_3);
  return _3;
}



VECTOR * Square0(VECTOR *_2,VECTOR *_3)

{
  gte_ldlvl(_2);
  gte_sqr0_b(0);
  gte_stlvnl(_3);
  return _3;
}



long AverageZ3(long sz0,long sz1,long sz2)

{
  long lVar1;
  
  gte_ldsz3(sz0,sz1,sz2);
  gte_avsz3_b();
  lVar1 = gte_stOTZ();
  return lVar1;
}



long AverageZ4(long sz0,long sz1,long sz2,long sz3)

{
  long lVar1;
  
  gte_ldsz4(sz0,sz1,sz2,sz3);
  gte_avsz4_b();
  lVar1 = gte_stOTZ();
  return lVar1;
}



void OuterProduct12(VECTOR *_2,VECTOR *_3,VECTOR *v2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR22R23();
  uVar3 = gte_stR33();
  gte_ldR11R12(_2->vx);
  gte_ldR22R23(_2->vy);
  gte_ldR33(_2->vz);
  gte_ldopv2(_3);
  gte_op12_b();
  gte_stlvnl(v2);
  gte_ldR11R12(uVar1);
  gte_ldR22R23(uVar2);
  gte_ldR33(uVar3);
  return;
}



void OuterProduct0(VECTOR *_2,VECTOR *_3,VECTOR *v2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = gte_stR11R12();
  uVar2 = gte_stR22R23();
  uVar3 = gte_stR33();
  gte_ldR11R12(_2->vx);
  gte_ldR22R23(_2->vy);
  gte_ldR33(_2->vz);
  gte_ldopv2(_3);
  gte_op0_b(0);
  gte_stlvnl(v2);
  gte_ldR11R12(uVar1);
  gte_ldR22R23(uVar2);
  gte_ldR33(uVar3);
  return;
}



long Lzc(long data)

{
  long lVar1;
  
  gte_ldLZCS(data);
  lVar1 = gte_stLZCR();
  return lVar1;
}



void RotTransSV(SVECTOR *_2,SVECTOR *_3,long *flag)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  gte_ldv0(_2);
  copFunction(2,0x480012);
  uVar1 = gte_stIR1();
  uVar3 = gte_stIR2();
  gte_stIR3();
  _3->vx = (short)uVar1;
  _3->vy = (short)uVar3;
  lVar2 = gte_stFLAG();
  *flag = lVar2;
  return;
}



SVECTOR * SquareSS12(SVECTOR *_2,SVECTOR *_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gte_ldIR1((int)_2->vx);
  gte_ldIR2((int)_2->vy);
  gte_ldIR3(&_2->vz);
  gte_sqr12_b();
  uVar1 = gte_stIR1();
  uVar2 = gte_stIR2();
  gte_stIR3();
  _3->vx = (short)uVar1;
  _3->vy = (short)uVar2;
  return _3;
}



SVECTOR * SquareSS0(SVECTOR *_2,SVECTOR *_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gte_ldIR1((int)_2->vx);
  gte_ldIR2((int)_2->vy);
  gte_ldIR3(&_2->vz);
  gte_sqr0_b(0);
  uVar1 = gte_stIR1();
  uVar2 = gte_stIR2();
  gte_stIR3();
  _3->vx = (short)uVar1;
  _3->vy = (short)uVar2;
  return _3;
}



VECTOR * SquareSL12(SVECTOR *_2,VECTOR *_3)

{
  gte_ldIR1((int)_2->vx);
  gte_ldIR2((int)_2->vy);
  gte_ldIR3(&_2->vz);
  gte_sqr12_b();
  gte_stlvl(_3);
  return _3;
}



VECTOR * SquareSL0(SVECTOR *_2,VECTOR *_3)

{
  gte_ldIR1((int)_2->vx);
  gte_ldIR2((int)_2->vy);
  gte_ldIR3(&_2->vz);
  gte_sqr0_b(0);
  gte_stlvl(_3);
  return _3;
}



long RotTransPers(SVECTOR *_2,long *sxy,long *p,long *flag)

{
  int iVar1;
  long lVar2;
  
  gte_ldv0(_2);
  gte_rtps_b();
  gte_stsxy(sxy);
  gte_stdp(p);
  lVar2 = gte_stFLAG();
  iVar1 = gte_stSZ3();
  *flag = lVar2;
  return iVar1 >> 2;
}



long RotTransPers3(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,long *sxy0,long *sxy1,long *sxy2,long *p,
                  long *flag)

{
  int iVar1;
  undefined4 uVar2;
  long *r0;
  undefined4 *puVar3;
  undefined auStackX_0 [16];
  
  gte_ldv3(_2,_3,v2);
  gte_rtpt_b();
  r0 = *(long **)((int)register0x00000074 + 0x18);
  puVar3 = *(undefined4 **)((int)register0x00000074 + 0x1c);
  gte_stsxy3(sxy0,*(long **)((int)register0x00000074 + 0x10),
             *(long **)((int)register0x00000074 + 0x14));
  gte_stdp(r0);
  uVar2 = gte_stFLAG();
  iVar1 = gte_stSZ3();
  *puVar3 = uVar2;
  return iVar1 >> 2;
}



void RotTrans(SVECTOR *_2,VECTOR *_3,long *flag)

{
  long lVar1;
  
  gte_ldv0(_2);
  copFunction(2,0x480012);
  gte_stlvnl(_3);
  lVar1 = gte_stFLAG();
  *flag = lVar1;
  return;
}



long RotTransPers4(SVECTOR *_2,SVECTOR *_3,SVECTOR *v2,SVECTOR *v3,long *sxy0,long *sxy1,long *sxy2,
                  long *sxy3,long *p,long *flag)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *r0;
  uint *puVar4;
  undefined auStackX_0 [16];
  
  gte_ldv3(_2,_3,v2);
  gte_rtpt_b();
  gte_stsxy3(*(long **)((int)register0x00000074 + 0x10),*(long **)((int)register0x00000074 + 0x14),
             *(long **)((int)register0x00000074 + 0x18));
  uVar2 = gte_stFLAG();
  gte_ldv0(v3);
  gte_rtps_b();
  r0 = *(long **)((int)register0x00000074 + 0x20);
  puVar4 = *(uint **)((int)register0x00000074 + 0x24);
  gte_stsxy(*(long **)((int)register0x00000074 + 0x1c));
  gte_stdp(r0);
  uVar3 = gte_stFLAG();
  iVar1 = gte_stSZ3();
  *puVar4 = uVar3 | uVar2;
  return iVar1 >> 2;
}



MATRIX * RotMatrix(SVECTOR *r,MATRIX *m)

{
  short sVar1;
  MATRIX *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  if (r->vx < 0) {
    pMVar2 = (MATRIX *)FGO_01_OBJ_64((int)r,(undefined2 *)m);
    return pMVar2;
  }
  iVar6 = (int)(short)*(int *)(&DAT_8002bee8 + ((int)r->vx & 0xfffU) * 4);
  iVar3 = *(int *)(&DAT_8002bee8 + ((int)r->vx & 0xfffU) * 4) >> 0x10;
  if (-1 < r->vy) {
    sVar8 = (short)*(int *)(&DAT_8002bee8 + ((int)r->vy & 0xfffU) * 4);
    iVar9 = -(int)sVar8;
    iVar4 = *(int *)(&DAT_8002bee8 + ((int)r->vy & 0xfffU) * 4) >> 0x10;
    sVar1 = r->vz;
    m->m[2] = sVar8;
    m->m[1][2] = (short)(-(iVar4 * iVar6) >> 0xc);
    sVar8 = (short)(iVar4 * iVar3 >> 0xc);
    if (-1 < sVar1) {
      m->m[2][2] = sVar8;
      iVar7 = (int)(short)*(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4);
      iVar5 = *(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
      m->m[0] = (short)(iVar5 * iVar4 >> 0xc);
      m->m[1] = (short)(-(iVar7 * iVar4) >> 0xc);
      iVar4 = iVar5 * iVar9 >> 0xc;
      m->m[1][0] = (short)(iVar7 * iVar3 >> 0xc) - (short)(iVar4 * iVar6 >> 0xc);
      m->m[2][0] = (short)(iVar7 * iVar6 >> 0xc) + (short)(iVar4 * iVar3 >> 0xc);
      iVar9 = iVar7 * iVar9 >> 0xc;
      m->m[1][1] = (short)(iVar5 * iVar3 >> 0xc) + (short)(iVar9 * iVar6 >> 0xc);
      m->m[2][1] = (short)(iVar5 * iVar6 >> 0xc) - (short)(iVar9 * iVar3 >> 0xc);
      return m;
    }
    m->m[2][2] = sVar8;
    pMVar2 = (MATRIX *)FGO_01_OBJ_160(r,(undefined2 *)m);
    return pMVar2;
  }
  pMVar2 = (MATRIX *)FGO_01_OBJ_CC((int)r,(undefined2 *)m);
  return pMVar2;
}



void FGO_01_OBJ_64(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int iVar2;
  int iVar3;
  int in_t3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 2) < 0) {
    FGO_01_OBJ_CC(param_1,param_2);
    return;
  }
  sVar5 = (short)*(int *)(&DAT_8002bee8 + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4);
  iVar7 = -(int)sVar5;
  iVar2 = *(int *)(&DAT_8002bee8 + ((int)*(short *)(param_1 + 2) & 0xfffU) * 4) >> 0x10;
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = sVar5;
  param_2[5] = (short)(-(iVar2 * in_t3) >> 0xc);
  uVar6 = (undefined2)(iVar2 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar6;
    iVar4 = (int)(short)*(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4);
    iVar3 = *(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar3 * iVar2 >> 0xc);
    param_2[1] = (short)(-(iVar4 * iVar2) >> 0xc);
    iVar2 = iVar3 * iVar7 >> 0xc;
    param_2[3] = (short)(iVar4 * in_t0 >> 0xc) - (short)(iVar2 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar4 * in_t3 >> 0xc) + (short)(iVar2 * in_t0 >> 0xc);
    iVar7 = iVar4 * iVar7 >> 0xc;
    param_2[4] = (short)(iVar3 * in_t0 >> 0xc) + (short)(iVar7 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar3 * in_t3 >> 0xc) - (short)(iVar7 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar6;
  FGO_01_OBJ_160(param_1,param_2);
  return;
}



void FGO_01_OBJ_CC(int param_1,undefined2 *param_2)

{
  short sVar1;
  int in_t0;
  int in_t1;
  int iVar2;
  int in_t3;
  int in_t4;
  int iVar3;
  undefined2 in_t6;
  undefined2 uVar4;
  int iVar5;
  
  sVar1 = *(short *)(param_1 + 4);
  param_2[2] = in_t6;
  param_2[5] = (short)(-(in_t1 * in_t3) >> 0xc);
  uVar4 = (undefined2)(in_t1 * in_t0 >> 0xc);
  if (-1 < sVar1) {
    param_2[8] = uVar4;
    iVar3 = (int)(short)*(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4);
    iVar2 = *(int *)(&DAT_8002bee8 + ((int)sVar1 & 0xfffU) * 4) >> 0x10;
    *param_2 = (short)(iVar2 * in_t1 >> 0xc);
    param_2[1] = (short)(-(iVar3 * in_t1) >> 0xc);
    iVar5 = iVar2 * in_t4 >> 0xc;
    param_2[3] = (short)(iVar3 * in_t0 >> 0xc) - (short)(iVar5 * in_t3 >> 0xc);
    param_2[6] = (short)(iVar3 * in_t3 >> 0xc) + (short)(iVar5 * in_t0 >> 0xc);
    iVar3 = iVar3 * in_t4 >> 0xc;
    param_2[4] = (short)(iVar2 * in_t0 >> 0xc) + (short)(iVar3 * in_t3 >> 0xc);
    param_2[7] = (short)(iVar2 * in_t3 >> 0xc) - (short)(iVar3 * in_t0 >> 0xc);
    return;
  }
  param_2[8] = uVar4;
  FGO_01_OBJ_160(param_1,param_2);
  return;
}



void FGO_01_OBJ_160(undefined4 param_1,undefined2 *param_2)

{
  int in_t0;
  int in_t1;
  int in_t2;
  int in_t3;
  int in_t4;
  int in_t5;
  int iVar1;
  
  *param_2 = (short)(in_t2 * in_t1 >> 0xc);
  param_2[1] = (short)(-(in_t5 * in_t1) >> 0xc);
  iVar1 = in_t2 * in_t4 >> 0xc;
  param_2[3] = (short)(in_t5 * in_t0 >> 0xc) - (short)(iVar1 * in_t3 >> 0xc);
  param_2[6] = (short)(in_t5 * in_t3 >> 0xc) + (short)(iVar1 * in_t0 >> 0xc);
  iVar1 = in_t5 * in_t4 >> 0xc;
  param_2[4] = (short)(in_t2 * in_t0 >> 0xc) + (short)(iVar1 * in_t3 >> 0xc);
  param_2[7] = (short)(in_t2 * in_t3 >> 0xc) - (short)(iVar1 * in_t0 >> 0xc);
  return;
}



long ratan2(long y,long x)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = x < 0;
  if (bVar1) {
    x = -x;
  }
  uVar4 = (uint)bVar1;
  bVar1 = y < 0;
  if (bVar1) {
    y = -y;
  }
  uVar5 = (uint)bVar1;
  if ((x == 0) && (y == 0)) {
    lVar2 = RATAN_OBJ_178();
    return lVar2;
  }
  if (x <= y) {
    iVar3 = y >> 10;
    if ((x & 0x7fe00000U) != 0) {
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (x == 0x80000000)) {
        trap(0x1800);
      }
      iVar3 = RATAN_OBJ_148(x / iVar3,x,uVar4,uVar5);
      return iVar3;
    }
    if (y == 0) {
      trap(0x1c00);
    }
    if ((y == 0xffffffff) && (x << 10 == -0x80000000)) {
      trap(0x1800);
    }
    iVar3 = 0x400 - *(short *)(&DAT_8002fee8 + ((x << 10) / y) * 2);
    if (uVar4 != 0) {
      iVar3 = 0x800 - iVar3;
    }
    if (uVar5 != 0) {
      iVar3 = -iVar3;
    }
    return iVar3;
  }
  iVar3 = x >> 10;
  if ((y & 0x7fe00000U) != 0) {
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (y == 0x80000000)) {
      trap(0x1800);
    }
    lVar2 = RATAN_OBJ_BC(y / iVar3,x,uVar4,uVar5);
    return lVar2;
  }
  if (x == 0) {
    trap(0x1c00);
  }
  if ((x == 0xffffffff) && (y << 10 == -0x80000000)) {
    trap(0x1800);
  }
  iVar3 = RATAN_OBJ_15C((y << 10) / x,x,uVar4,uVar5);
  return iVar3;
}



void RATAN_OBJ_BC(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  RATAN_OBJ_15C(param_1,param_2,param_3,param_4);
  return;
}



int RATAN_OBJ_148(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v0;
  int iVar1;
  
  iVar1 = 0x400 - *(short *)(&DAT_8002fee8 + in_v0);
  if (param_3 != 0) {
    iVar1 = 0x800 - iVar1;
  }
  if (param_4 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



int RATAN_OBJ_15C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_v1;
  
  if (param_3 != 0) {
    in_v1 = 0x800 - in_v1;
  }
  if (param_4 != 0) {
    in_v1 = -in_v1;
  }
  return in_v1;
}



void RATAN_OBJ_178(void)

{
  return;
}



void _patch_gte(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *unaff_retaddr;
  
  _patch_gteReturnAddress = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar4 = &PATCHGTE_OBJ_68;
  puVar2 = *(undefined4 **)(iVar1 + 0x18);
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
  } while (puVar4 != (undefined4 *)PadInit);
  FlushCache();
  ExitCriticalSection();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_8001dad8(undefined4 param_1)

{
  undefined4 in_at;
  undefined4 in_v0;
  undefined4 in_v1;
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = *_DAT_00000108;
  *(undefined4 *)(iVar1 + 0xc) = in_at;
  *(undefined4 *)(iVar1 + 0x10) = in_v0;
  *(undefined4 *)(iVar1 + 0x14) = in_v1;
  *(undefined4 *)(iVar1 + 0x84) = unaff_retaddr;
  button_destPadInit2 = 0xffffffff;
  DAT_800370b0 = param_1;
  ResetCallback();
  PAD_init();
  ChangeClearPAD();
  return;
}



void PadInit(int mode)

{
  button_destPadInit2 = 0xffffffff;
  DAT_800370b0 = mode;
  ResetCallback();
  PAD_init();
  ChangeClearPAD();
  return;
}



u_long PadRead(int id)

{
  PAD_dr();
  return ~button_destPadInit2;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void PadStop(void)

{
  StopPAD();
  return;
}



int VSync(int mode)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  
  uVar2 = TMR_HRETRACE_VAL - DAT_800306f4;
  if (mode < 0) {
    iVar3 = VSYNC_OBJ_130((char)mode,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return iVar3;
  }
  if (mode != 1) {
    if (0 < mode) {
      iVar3 = VSYNC_OBJ_84(mode);
      return iVar3;
    }
    iVar3 = 0;
    if (0 < mode) {
      iVar3 = mode + -1;
    }
    v_wait(DAT_800306f8,iVar3);
    dVar1 = GPU_REG1;
    v_wait(DAT_800317b8 + 1,1);
    if (((dVar1 & 0x80000) != 0) && (-1 < (int)(dVar1 ^ GPU_REG1))) {
      do {
      } while (((dVar1 ^ GPU_REG1) & 0x80000000) == 0);
    }
    DAT_800306f8 = DAT_800317b8;
    DAT_800306f4 = TMR_HRETRACE_VAL;
  }
  return uVar2 & 0xffff;
}



void VSYNC_OBJ_84(int param_1)

{
  dword dVar1;
  int in_v0;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    iVar2 = param_1 + -1;
  }
  v_wait(in_v0,iVar2);
  dVar1 = GPU_REG1;
  v_wait(DAT_800317b8 + 1,1);
  if (((dVar1 & 0x80000) != 0) && (-1 < (int)(dVar1 ^ GPU_REG1))) {
    do {
    } while (((dVar1 ^ GPU_REG1) & 0x80000000) == 0);
  }
  DAT_800306f8 = DAT_800317b8;
  DAT_800306f4 = TMR_HRETRACE_VAL;
  return;
}



void VSYNC_OBJ_130(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  return;
}



void v_wait(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_retaddr;
  undefined uVar4;
  undefined in_stack_fffffff4;
  
  iVar3 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800317b8) {
      return;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  puts("VSync: timeout\n");
  uVar4 = (undefined)iVar3;
  ChangeClearPAD();
  uVar1 = 3;
  uVar2 = 0;
  ChangeClearRCnt();
  VSYNC_OBJ_1D4(uVar1,uVar2,in_a2,in_a3,uVar4,in_stack_fffffff4,unaff_retaddr);
  return;
}



void VSYNC_OBJ_1D4(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined param_5,undefined param_6,undefined4 param_7)

{
  return;
}



int ResetCallback(void)

{
  undefined2 *puVar1;
  
  puVar1 = startIntr();
  return (int)puVar1;
}



void InterruptCallback(uint param_1,int param_2)

{
  setIntr(param_1,param_2);
  return;
}



void DMACallback(void)

{
  (*DAT_80031768)();
  return;
}



int VSyncCallback(f *f)

{
  int iVar1;
  
  iVar1 = (*DAT_80031778)(0,f);
  return iVar1;
}



int VSyncCallbacks(int ch,f *f)

{
  int iVar1;
  
  iVar1 = (*DAT_80031778)();
  return iVar1;
}



int StopCallback(void)

{
  undefined2 *puVar1;
  
  puVar1 = stopIntr();
  return (int)puVar1;
}



int RestartCallback(void)

{
  int iVar1;
  
  iVar1 = restartIntr();
  return iVar1;
}



int CheckCallback(void)

{
  return (uint)DAT_800306fe;
}



word GetIntrMask(void)

{
  return I_MASK;
}



word SetIntrMask(word param_1)

{
  word wVar1;
  
  wVar1 = I_MASK;
  I_MASK = param_1;
  return wVar1;
}



undefined2 * startIntr(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)0x0;
  if (DAT_800306fc == 0) {
    I_MASK = 0;
    I_STAT = 0;
    DMA_DPCR = 0x33333333;
    memclr((undefined4 *)&DAT_800306fc,0x41a);
    iVar2 = setjmp((__jmp_buf_tag *)&DAT_80030734);
    if (iVar2 != 0) {
      trapIntr();
    }
    DAT_80030738 = &DAT_80031714;
    HookEntryInt();
    DAT_800306fc = 1;
    DAT_80031778 = startIntrVSync();
    DAT_80031768 = startIntrDMA();
    _96_remove();
    puVar1 = &DAT_800306fc;
    ExitCriticalSection();
  }
  return puVar1;
}



void trapIntr(void)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined in_a3;
  undefined4 unaff_s0;
  uint uVar6;
  undefined4 unaff_s1;
  uint uVar7;
  undefined4 unaff_s2;
  code **ppcVar8;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_retaddr;
  
  if (DAT_800306fc == 0) {
    printf("unexpected interrupt(%04x)\n",(uint)I_STAT);
    ReturnFromException();
  }
  DAT_800306fe = 1;
  uVar6 = (uint)(I_MASK & DAT_8003072c & I_STAT);
  if (uVar6 != 0) {
    do {
      ppcVar8 = (code **)&DAT_80030700;
      for (uVar7 = 0; (uVar6 != 0 && ((int)uVar7 < 0xb)); uVar7 = uVar7 + 1) {
        if ((uVar6 & 1) != 0) {
          I_STAT = ~(ushort)(1 << (uVar7 & 0x1f));
          if (*ppcVar8 != (code *)0x0) {
            (**ppcVar8)();
          }
        }
        ppcVar8 = ppcVar8 + 1;
        uVar6 = uVar6 >> 1;
      }
      uVar6 = (uint)(I_MASK & DAT_8003072c & I_STAT);
    } while (uVar6 != 0);
  }
  if ((I_STAT & I_MASK) == 0) {
    DAT_80031794 = 0;
  }
  else {
    iVar2 = DAT_80031794 + 1;
    bVar1 = 0x800 < DAT_80031794;
    DAT_80031794 = iVar2;
    if (bVar1) {
      uVar3 = 0x68;
      uVar4 = (undefined)I_STAT;
      uVar5 = (undefined)I_MASK;
      printf("intr timeout(%04x:%04x)\n");
      DAT_80031794 = 0;
      I_STAT = 0;
      INTR_OBJ_428(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,
                   unaff_retaddr);
      return;
    }
  }
  DAT_800306fe = 0;
  ReturnFromException();
  return;
}



void INTR_OBJ_428(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  DAT_800306fe = 0;
  ReturnFromException();
  return;
}



int setIntr(uint param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  word wVar3;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  int iVar4;
  undefined4 unaff_retaddr;
  
  wVar3 = I_MASK;
  piVar2 = &DAT_80030700 + param_1;
  iVar4 = *piVar2;
  if ((param_2 != iVar4) && (DAT_800306fc != 0)) {
    I_MASK = 0;
    if (param_2 != 0) {
      *piVar2 = param_2;
      DAT_8003072c = DAT_8003072c | (ushort)(1 << (param_1 & 0x1f));
      iVar4 = INTR_OBJ_514((char)piVar2,0,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,
                           unaff_retaddr);
      return iVar4;
    }
    uVar1 = ~(ushort)(1 << (param_1 & 0x1f));
    *piVar2 = 0;
    wVar3 = wVar3 & uVar1;
    DAT_8003072c = DAT_8003072c & uVar1;
    if (param_1 == 0) {
      ChangeClearPAD();
      ChangeClearRCnt();
    }
    if (param_1 == 4) {
      ChangeClearRCnt();
    }
    if (param_1 == 5) {
      ChangeClearRCnt();
    }
    if (param_1 == 6) {
      ChangeClearRCnt();
    }
  }
  I_MASK = wVar3;
  return iVar4;
}



void INTR_OBJ_514(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int unaff_s1;
  word unaff_s3;
  
  if (unaff_s1 == 0) {
    ChangeClearPAD();
    ChangeClearRCnt();
  }
  if (unaff_s1 == 4) {
    ChangeClearRCnt();
  }
  if (unaff_s1 == 5) {
    ChangeClearRCnt();
  }
  if (unaff_s1 == 6) {
    ChangeClearRCnt();
  }
  I_MASK = unaff_s3;
  return;
}



undefined2 * stopIntr(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)0x0;
  if (DAT_800306fc != 0) {
    EnterCriticalSection();
    DAT_8003072e = I_MASK;
    DAT_80030730 = DMA_DPCR;
    I_MASK = 0;
    I_STAT = 0;
    DMA_DPCR = DMA_DPCR & 0x77777777;
    ResetEntryInt();
    DAT_800306fc = 0;
    puVar1 = &DAT_800306fc;
  }
  return puVar1;
}



undefined4 restartIntr(void)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  if (DAT_800306fc == 0) {
    HookEntryInt();
    uVar2 = 0x74;
    DAT_800306fc = 1;
    I_MASK = DAT_8003072e;
    DMA_DPCR = DAT_80030730;
    ExitCriticalSection();
    uVar1 = INTR_OBJ_6D0(uVar2,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return uVar1;
  }
  return 0;
}



void INTR_OBJ_6D0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6)

{
  return;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



undefined * startIntrVSync(void)

{
  TMR_HRETRACE_MODE = 0x107;
  DAT_800317b8 = 0;
  memclr(&DAT_80031798,8);
  InterruptCallback(0,(int)trapIntrVSync);
  return setIntrVSync;
}



void trapIntrVSync(void)

{
  code *pcVar1;
  code **ppcVar2;
  int iVar3;
  
  iVar3 = 0;
  ppcVar2 = (code **)&DAT_80031798;
  DAT_800317b8 = DAT_800317b8 + 1;
  do {
    pcVar1 = *ppcVar2;
    ppcVar2 = ppcVar2 + 1;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return;
}



void setIntrVSync(int param_1,int param_2)

{
  if (param_2 != (&DAT_80031798)[param_1]) {
    (&DAT_80031798)[param_1] = param_2;
  }
  return;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



undefined * startIntrDMA(void)

{
  memclr(&DAT_800317c4,8);
  DMA_DICR = 0;
  InterruptCallback(3,(int)trapIntrDMA);
  return setIntrDMA;
}



void trapIntrDMA(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code **ppcVar4;
  
  uVar3 = DMA_DICR >> 0x18 & 0x7f;
  if (uVar3 != 0) {
    do {
      ppcVar4 = (code **)&DAT_800317c4;
      for (iVar1 = 0; (uVar3 != 0 && (iVar1 < 7)); iVar1 = iVar1 + 1) {
        if ((uVar3 & 1) != 0) {
          DMA_DICR = (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU) & DMA_DICR;
          if (*ppcVar4 != (code *)0x0) {
            (**ppcVar4)();
          }
        }
        ppcVar4 = ppcVar4 + 1;
        uVar3 = uVar3 >> 1;
      }
      uVar3 = DMA_DICR >> 0x18 & 0x7f;
    } while (uVar3 != 0);
  }
  if (((DMA_DICR & 0xff000000) == 0x80000000) || ((DMA_DICR & 0x8000) != 0)) {
    printf("DMA bus error: code=%08x\n",DMA_DICR);
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      printf("MADR[%d]=%08x\n",iVar1,(&DMA_MDEC_IN_MADR)[iVar1 * 4]);
      iVar1 = iVar2;
    } while (iVar2 < 7);
  }
  return;
}



int setIntrDMA(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_800317c4 + param_1;
  iVar2 = *piVar1;
  if (param_2 != iVar2) {
    if (param_2 != 0) {
      *piVar1 = param_2;
      DMA_DICR = DMA_DICR & 0xffffff | 1 << (param_1 + 0x10U & 0x1f) | 0x800000U;
      iVar2 = INTR_DMA_OBJ_274();
      return iVar2;
    }
    *piVar1 = 0;
    DMA_DICR = (DMA_DICR & 0xffffff | 0x800000) & ~(1 << (param_1 + 0x10U & 0x1f));
  }
  return iVar2;
}



undefined4 INTR_DMA_OBJ_274(void)

{
  undefined4 in_a3;
  
  return in_a3;
}



void memclr(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}



// Possible VMODE.OBJ/GetVideoMode
// Possible GS_125.OBJ/GsGetWorkBase

undefined4 FUN_8001e884(void)

{
  return 0;
}



void StSetRing(u_long *ring_addr,u_long ring_size)

{
  DAT_800408dc = ring_addr;
  DAT_80040918 = ring_size;
  StClearRing();
  return;
}



int CdInit(void)

{
  int iVar1;
  undefined uVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  int iVar3;
  undefined4 unaff_retaddr;
  
  iVar3 = 4;
  do {
    iVar1 = CdReset(1);
    iVar3 = iVar3 + -1;
    if (iVar1 == 1) {
      CdSyncCallback(def_cbsync);
      CdReadyCallback(def_cbready);
      uVar2 = 0xa4;
      CdReadCallback(def_cbread);
      iVar3 = EVENT_OBJ_7C(uVar2,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
      return iVar3;
    }
  } while (iVar3 != -1);
  printf("CdInit: Init failed\n");
  return 0;
}



void EVENT_OBJ_7C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6)

{
  return;
}



void def_cbsync(void)

{
  DeliverEvent();
  return;
}



void def_cbready(void)

{
  DeliverEvent();
  return;
}



void def_cbread(void)

{
  DeliverEvent();
  return;
}



int CdStatus(void)

{
  return (uint)DAT_8003188c;
}



int CdMode(void)

{
  return (uint)DAT_8003189c;
}



int CdLastCom(void)

{
  return (uint)DAT_8003189d;
}



CdlLOC * CdLastPos(void)

{
  return (CdlLOC *)&DAT_80031898;
}



undefined4 CdReset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  if (param_1 == 2) {
    CD_initintr();
    uVar1 = SYS_OBJ_98((char)param_1,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return uVar1;
  }
  iVar2 = CD_init();
  uVar1 = 0;
  if ((iVar2 == 0) && (uVar1 = 1, param_1 == 1)) {
    iVar2 = CD_initvol();
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



void SYS_OBJ_98(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined4 param_5,undefined4 param_6)

{
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void CdFlush(void)

{
  CD_flush();
  return;
}



int CdSetDebug(int level)

{
  int iVar1;
  
  iVar1 = DAT_80031888;
  DAT_80031888 = level;
  return iVar1;
}



char * CdComstr(u_char com)

{
  char *pcVar1;
  
  if (com < 0x1c) {
    pcVar1 = (char *)SYS_OBJ_110();
    return pcVar1;
  }
  return "none";
}



void SYS_OBJ_110(void)

{
  return;
}



char * CdIntstr(u_char intr)

{
  char *pcVar1;
  
  if (intr < 7) {
    pcVar1 = (char *)SYS_OBJ_144();
    return pcVar1;
  }
  return "none";
}



void SYS_OBJ_144(void)

{
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdSync(int mode,u_char *result)

{
  int iVar1;
  
  iVar1 = CD_sync(mode,result);
  return iVar1;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdReady(int mode,u_char *result)

{
  int iVar1;
  
  iVar1 = CD_ready(mode,result);
  return iVar1;
}



CdlCB CdSyncCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_8003187c;
  DAT_8003187c = func;
  return pCVar1;
}



CdlCB CdReadyCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_80031880;
  DAT_80031880 = func;
  return pCVar1;
}



int CdControl(u_char com,u_char *param,u_char *result)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003187c;
  iVar3 = 3;
  while( true ) {
    DAT_8003187c = 0;
    if ((com != 1) && ((DAT_8003188c & 0x10) != 0)) {
      CD_cw(1,(byte *)0x0,(undefined *)0x0,0);
    }
    if ((((param == (u_char *)0x0) || (*(int *)(&DAT_800317fc + (uint)com * 4) == 0)) ||
        (iVar2 = CD_cw(2,param,result,0), iVar2 == 0)) &&
       (DAT_8003187c = uVar1, iVar2 = CD_cw(com,param,result,0), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003187c = uVar1;
      return 0;
    }
  }
  return 1;
}



int CdControlF(u_char com,u_char *param)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_8003187c;
  iVar3 = 3;
  while( true ) {
    DAT_8003187c = 0;
    if ((com != 1) && ((DAT_8003188c & 0x10) != 0)) {
      CD_cw(1,(byte *)0x0,(undefined *)0x0,0);
    }
    if ((((param == (u_char *)0x0) || (*(int *)(&DAT_800317fc + (uint)com * 4) == 0)) ||
        (iVar2 = CD_cw(2,param,(undefined *)0x0,0), iVar2 == 0)) &&
       (DAT_8003187c = uVar1, iVar2 = CD_cw(com,param,(undefined *)0x0,1), iVar2 == 0)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      DAT_8003187c = uVar1;
      return 0;
    }
  }
  return 1;
}



int CdControlB(u_char com,u_char *param,u_char *result)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined uVar5;
  u_char *puVar6;
  undefined uVar7;
  undefined4 unaff_s0;
  int iVar8;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_retaddr;
  
  uVar1 = DAT_8003187c;
  iVar8 = 3;
  do {
    DAT_8003187c = 0;
    if ((com != 1) && ((DAT_8003188c & 0x10) != 0)) {
      CD_cw(1,(byte *)0x0,(undefined *)0x0,0);
    }
    if ((param == (u_char *)0x0) || (*(int *)(&DAT_800317fc + (uint)com * 4) == 0)) {
SYS_OBJ_4DC:
      uVar7 = 0;
      puVar6 = result;
      DAT_8003187c = uVar1;
      iVar2 = CD_cw(com,param,result,0);
      uVar5 = SUB41(puVar6,0);
      iVar3 = 0;
      if (iVar2 == 0) break;
    }
    else {
      uVar7 = 0;
      puVar6 = result;
      iVar2 = CD_cw(2,param,result,0);
      uVar5 = SUB41(puVar6,0);
      if (iVar2 == 0) goto SYS_OBJ_4DC;
    }
    iVar8 = iVar8 + -1;
    iVar3 = -1;
    DAT_8003187c = uVar1;
  } while (iVar8 != -1);
  uVar4 = 0;
  if (iVar3 != 0) {
    return 0;
  }
  CD_sync(0,result);
  iVar8 = SYS_OBJ_538(uVar4,(char)result,uVar5,uVar7,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,
                      unaff_s5,unaff_s6,unaff_retaddr);
  return iVar8;
}



void SYS_OBJ_538(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  return;
}



int CdMix(CdlATV *vol)

{
  CD_vol((int)vol);
  return 1;
}



int CdGetSector(void *madr,int size)

{
  int iVar1;
  
  iVar1 = CD_getsector((dword)madr,size);
  return (uint)(iVar1 == 0);
}



_func_49 * CdDataCallback(func *func)

{
  _func_49 *p_Var1;
  
  p_Var1 = (_func_49 *)DMACallback();
  return p_Var1;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

int CdDataSync(int mode)

{
  int iVar1;
  
  iVar1 = CD_datasync(mode);
  return iVar1;
}



CdlLOC * CdIntToPos(int i,CdlLOC *p)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (i + 0x96) / 0x4b;
  iVar2 = (i + 0x96) % 0x4b;
  iVar1 = iVar3 / 0x3c;
  iVar3 = iVar3 % 0x3c;
  p->second = (char)iVar3 + (char)(iVar3 / 10) * '\x06';
  p->sector = (char)iVar2 + (char)(iVar2 / 10) * '\x06';
  p->minute = (char)iVar1 + (char)(iVar1 / 10) * '\x06';
  return p;
}



int CdPosToInt(CdlLOC *p)

{
  return (((uint)(p->minute >> 4) * 10 + (p->minute & 0xf)) * 0x3c +
         (uint)(p->second >> 4) * 10 + (p->second & 0xf)) * 0x4b +
         (uint)(p->sector >> 4) * 10 + (p->sector & 0xf) + -0x96;
}



undefined4 getintr(void)

{
  undefined4 uVar1;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined unaff_s0;
  undefined unaff_s1;
  undefined in_stack_ffffffe4;
  undefined1 in_stack_ffffffe8;
  undefined1 in_stack_ffffffe9;
  undefined in_stack_ffffffec;
  
  CDROM_REG0 = 1;
  if ((CDROM_REG3 & 7) != 0) {
    uVar1 = BIOS_OBJ_64(&CDROM_REG3,in_a1,in_a2,in_a3,CDROM_REG3 & 7,in_stack_ffffffe4,
                        in_stack_ffffffe8,in_stack_ffffffec,unaff_s0,unaff_s1,in_stack_ffffffe9);
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
BIOS_OBJ_64(byte *param_1,undefined param_2,undefined param_3,undefined param_4,byte param_5,
           undefined param_6,byte param_7,undefined param_8,undefined param_9,undefined param_10,
           byte param_11)

{
  undefined uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint unaff_s1;
  undefined3 in_stack_00000021;
  undefined3 in_stack_00000025;
  undefined4 in_stack_00000028;
  
  while (iVar7 = 0, param_5 != (*param_1 & 7)) {
    param_5 = *param_1 & 7;
  }
  pbVar3 = &param_7;
  do {
    if ((CDROM_REG0 & 0x20) == 0) break;
    iVar7 = iVar7 + 1;
    *pbVar3 = CDROM_REG1;
    pbVar3 = pbVar3 + 1;
  } while (iVar7 < 8);
  if (iVar7 < 8) {
    puVar4 = &param_7 + iVar7;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < (int)&param_9);
  }
  CDROM_REG0 = 1;
  CDROM_REG3 = 7;
  CDROM_REG2 = 7;
  if ((param_5 != 3) || (*(int *)(&DAT_80031a40 + (uint)DAT_8003189d * 4) != 0)) {
    if (((_DAT_8003188c & 0x10) == 0) && ((param_7 & 0x10) != 0)) {
      DAT_80031894 = DAT_80031894 + 1;
    }
    _DAT_8003188c = (uint)param_7;
    DAT_80031890 = (uint)param_11;
    unaff_s1 = _DAT_8003188c & 0x1d;
  }
  if ((param_5 == 5) && (puts("DiskError: "), 0 < DAT_80031888)) {
    uVar6 = DAT_80031890;
    printf("com=%s,code=(%02x:%02x)\n",(&PTR_s_CdlSync_800318a0)[DAT_8003189d]);
    param_4 = (undefined)uVar6;
  }
  switch(param_5) {
  case 1:
    DAT_80031b59 = 1;
    if (unaff_s1 != 0) {
      if (iVar7 == 1) {
        unaff_s1 = 0;
      }
      DAT_80031b59 = 1;
      if (unaff_s1 != 0) {
        DAT_80031b59 = 5;
      }
    }
    puVar5 = &DAT_80032a84;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    CDROM_REG0 = 0;
    CDROM_REG3 = 0;
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  case 2:
    DAT_80031b58 = 2;
    if (unaff_s1 != 0) {
      DAT_80031b58 = 5;
    }
    puVar5 = &DAT_80032a7c;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  case 3:
    break;
  case 4:
    puVar5 = &DAT_80032a8c;
    puVar4 = &param_7;
    DAT_80031b5a = 4;
    DAT_80031b59 = 4;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    puVar5 = &DAT_80032a84;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  case 5:
    puVar5 = &DAT_80032a7c;
    puVar4 = &param_7;
    DAT_80031b59 = 5;
    DAT_80031b58 = 5;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    puVar5 = &DAT_80032a84;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  default:
    puts("CDROM: unknown intr");
    printf("(%d)\n",(uint)param_5);
    return 0;
  }
  if (unaff_s1 != 0) {
    DAT_80031b58 = 5;
    puVar5 = &DAT_80032a7c;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  }
  if (*(int *)(&DAT_80031940 + (uint)DAT_8003189d * 4) == 0) {
    DAT_80031b58 = 2;
    puVar5 = &DAT_80032a7c;
    puVar4 = &param_7;
    iVar7 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar7 != -1);
    uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                         _param_10,in_stack_00000028);
    return uVar2;
  }
  DAT_80031b58 = 3;
  puVar5 = &DAT_80032a7c;
  puVar4 = &param_7;
  iVar7 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while (iVar7 != -1);
  uVar2 = BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,param_8,_param_9,
                       _param_10,in_stack_00000028);
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x8001f4dc)

void BIOS_OBJ_258(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s1;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  if (unaff_s1 != 0) {
    DAT_80031b58 = 5;
    puVar2 = &DAT_80032a7c;
    puVar4 = &param_7;
    iVar3 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != -1);
    BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
                 in_stack_00000020,in_stack_00000024,in_stack_00000028);
    return;
  }
  if (*(int *)(&DAT_80031940 + (uint)DAT_8003189d * 4) != 0) {
    DAT_80031b58 = 3;
    puVar2 = &DAT_80032a7c;
    puVar4 = &param_7;
    iVar3 = 7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != -1);
    BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
                 in_stack_00000020,in_stack_00000024,in_stack_00000028);
    return;
  }
  DAT_80031b58 = 2;
  puVar2 = &DAT_80032a7c;
  puVar4 = &param_7;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
               in_stack_00000020,in_stack_00000024,in_stack_00000028);
  return;
}



void BIOS_OBJ_358(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s1;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  DAT_80031b58 = 2;
  if (unaff_s1 != 0) {
    DAT_80031b58 = 5;
  }
  puVar2 = &DAT_80032a7c;
  puVar4 = &param_7;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
               in_stack_00000020,in_stack_00000024,in_stack_00000028);
  return;
}



void BIOS_OBJ_3A4(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7)

{
  undefined uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_s0;
  int unaff_s1;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  DAT_80031b59 = 1;
  if (unaff_s1 != 0) {
    if (unaff_s0 == 1) {
      unaff_s1 = 0;
    }
    DAT_80031b59 = 1;
    if (unaff_s1 != 0) {
      DAT_80031b59 = 5;
    }
  }
  puVar2 = &DAT_80032a84;
  puVar4 = &param_7;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
               in_stack_00000020,in_stack_00000024,in_stack_00000028);
  return;
}



void BIOS_OBJ_428(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7)

{
  undefined uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  puVar3 = &DAT_80032a8c;
  puVar4 = &param_7;
  DAT_80031b5a = 4;
  DAT_80031b59 = 4;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = &DAT_80032a84;
  puVar4 = &param_7;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
               in_stack_00000020,in_stack_00000024,in_stack_00000028);
  return;
}



void BIOS_OBJ_4B0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7)

{
  undefined uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  puVar3 = &DAT_80032a7c;
  puVar4 = &param_7;
  DAT_80031b59 = 5;
  DAT_80031b58 = 5;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = &DAT_80032a84;
  puVar4 = &param_7;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  BIOS_OBJ_560(0xff,(char)puVar4,0xff,param_4,param_5,param_6,param_7,in_stack_0000001c,
               in_stack_00000020,in_stack_00000024,in_stack_00000028);
  return;
}



void BIOS_OBJ_560(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  return;
}



undefined4 CD_sync(int param_1,undefined *param_2)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined uVar7;
  undefined4 in_a3;
  undefined4 unaff_s0;
  byte bVar8;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffd8;
  undefined in_stack_ffffffdc;
  
  iVar3 = VSync(-1);
  DAT_80032a94 = iVar3 + 0x3c0;
  DAT_80032a98 = 0;
  DAT_80032a9c = "CD_sync";
  while( true ) {
    iVar3 = VSync(-1);
    if ((DAT_80032a94 < iVar3) ||
       (iVar3 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar3, bVar2)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
             (&PTR_s_NoIntr_80031920)[DAT_80031b58],(&PTR_s_NoIntr_80031920)[DAT_80031b59]);
      CD_flush();
      uVar4 = BIOS_OBJ_6A4();
      return uVar4;
    }
    iVar3 = CheckCallback();
    bVar8 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar8 = CDROM_REG0 & 3;
      while( true ) {
        uVar5 = getintr();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
          (*DAT_80031880)(DAT_80031b59,&DAT_80032a84);
        }
        if (((uVar5 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
          (*DAT_8003187c)(DAT_80031b58,&DAT_80032a7c);
        }
      }
    }
    CDROM_REG0 = bVar8;
    bVar8 = DAT_80031b58;
    uVar7 = (undefined)in_a3;
    if ((DAT_80031b58 == 2) || (DAT_80031b58 == 5)) break;
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_80031b58 = 2;
  puVar6 = &DAT_80032a7c;
  iVar3 = 7;
  if (param_2 != (undefined *)0x0) {
    uVar7 = 0xff;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (iVar3 != -1);
  }
  uVar4 = BIOS_OBJ_7CC((char)puVar6,(char)param_2,bVar8,uVar7,(char)in_stack_ffffffd8,
                       in_stack_ffffffdc,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,
                       unaff_s6,unaff_retaddr);
  return uVar4;
}



undefined4 BIOS_OBJ_6A4(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined uVar7;
  undefined4 in_a3;
  byte bVar8;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar3 = CheckCallback();
    bVar8 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar8 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
          (*DAT_80031880)(*unaff_s4,&DAT_80032a84);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
          (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
        }
      }
    }
    CDROM_REG0 = bVar8;
    uVar7 = (undefined)in_a3;
    bVar8 = *unaff_s2;
    if ((bVar8 == 2) || (bVar8 == 5)) {
      *unaff_s2 = 2;
      puVar6 = &DAT_80032a7c;
      iVar3 = 7;
      if (unaff_s6 != (undefined *)0x0) {
        uVar7 = 0xff;
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *unaff_s6 = uVar1;
          unaff_s6 = unaff_s6 + 1;
        } while (iVar3 != -1);
      }
      uVar5 = BIOS_OBJ_7CC((char)puVar6,(char)unaff_s6,bVar8,uVar7,in_stack_00000010,
                           in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                           in_stack_00000024,in_stack_00000028,in_stack_0000002c,in_stack_00000030,
                           in_stack_00000034);
      return uVar5;
    }
    if (unaff_s5 != 0) {
      return 0;
    }
    iVar3 = VSync(-1);
    if ((DAT_80032a94 < iVar3) ||
       (iVar3 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar3, bVar2))
    break;
    in_v0 = 0;
  }
  puts("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
         *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
  CD_flush();
  uVar5 = BIOS_OBJ_6A4();
  return uVar5;
}



undefined4
BIOS_OBJ_6D4(undefined param_1,undefined param_2,undefined param_3,byte param_4,undefined4 param_5)

{
  byte bVar1;
  undefined uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined uVar8;
  uint uVar9;
  byte unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  undefined in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  uVar9 = (uint)param_4;
  do {
    while( true ) {
      uVar4 = getintr();
      bVar1 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
        (*DAT_80031880)(*unaff_s4,&DAT_80032a84);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
        (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
      }
    }
    do {
      CDROM_REG0 = bVar1;
      uVar8 = (undefined)uVar9;
      bVar1 = *unaff_s2;
      if ((bVar1 == 2) || (bVar1 == 5)) {
        *unaff_s2 = 2;
        puVar7 = &DAT_80032a7c;
        iVar6 = 7;
        if (unaff_s6 != (undefined *)0x0) {
          uVar8 = 0xff;
          do {
            uVar2 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s6 = uVar2;
            unaff_s6 = unaff_s6 + 1;
          } while (iVar6 != -1);
        }
        uVar5 = BIOS_OBJ_7CC((char)puVar7,(char)unaff_s6,bVar1,uVar8,(undefined)param_5,
                             in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020
                             ,in_stack_00000024,in_stack_00000028,in_stack_0000002c,
                             in_stack_00000030,in_stack_00000034);
        return uVar5;
      }
      if (unaff_s5 != 0) {
        return 0;
      }
      iVar6 = VSync(-1);
      if ((DAT_80032a94 < iVar6) ||
         (iVar6 = DAT_80032a98 + 1, bVar3 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar6, bVar3)) {
        puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
        CD_flush();
        uVar5 = BIOS_OBJ_6A4();
        return uVar5;
      }
      iVar6 = CheckCallback();
      bVar1 = CDROM_REG0;
    } while (iVar6 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_7CC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  return;
}



undefined4 CD_ready(int param_1,undefined *param_2)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined uVar8;
  undefined4 in_a3;
  undefined4 unaff_s0;
  byte bVar9;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffd0;
  undefined in_stack_ffffffd4;
  
  iVar4 = VSync(-1);
  DAT_80032a94 = iVar4 + 0x3c0;
  DAT_80032a98 = 0;
  DAT_80032a9c = "CD_ready";
  while( true ) {
    iVar4 = VSync(-1);
    if ((DAT_80032a94 < iVar4) ||
       (iVar4 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar4, bVar2)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
             (&PTR_s_NoIntr_80031920)[DAT_80031b58],(&PTR_s_NoIntr_80031920)[DAT_80031b59]);
      CD_flush();
      uVar5 = BIOS_OBJ_92C();
      return uVar5;
    }
    iVar4 = CheckCallback();
    bVar9 = CDROM_REG0;
    if (iVar4 != 0) {
      bVar9 = CDROM_REG0 & 3;
      while( true ) {
        uVar6 = getintr();
        if (uVar6 == 0) break;
        if (((uVar6 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
          (*DAT_80031880)(DAT_80031b59,&DAT_80032a84);
        }
        if (((uVar6 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
          (*DAT_8003187c)(DAT_80031b58,&DAT_80032a7c);
        }
      }
    }
    CDROM_REG0 = bVar9;
    bVar3 = DAT_80031b5a;
    bVar9 = DAT_80031b59;
    uVar8 = (undefined)in_a3;
    if (DAT_80031b5a != 0) break;
    if (DAT_80031b59 != 0) {
      DAT_80031b59 = 0;
      puVar7 = &DAT_80032a84;
      iVar4 = 7;
      if (param_2 != (undefined *)0x0) {
        uVar8 = 0xff;
        do {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + -1;
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (iVar4 != -1);
      }
      goto BIOS_OBJ_A84;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_80031b5a = 0;
  puVar7 = &DAT_80032a8c;
  bVar9 = bVar3;
  if (param_2 != (undefined *)0x0) {
    iVar4 = 7;
    do {
      uVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
      *param_2 = uVar8;
      param_2 = param_2 + 1;
    } while (iVar4 != -1);
    uVar5 = BIOS_OBJ_A94((char)puVar7,(char)param_2,bVar3,0xff,(char)in_stack_ffffffd0,
                         in_stack_ffffffd4,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,
                         unaff_s6,unaff_s7,unaff_retaddr);
    return uVar5;
  }
BIOS_OBJ_A84:
  uVar5 = BIOS_OBJ_A94((char)puVar7,(char)param_2,bVar9,uVar8,(char)in_stack_ffffffd0,
                       in_stack_ffffffd4,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,
                       unaff_s6,unaff_s7,unaff_retaddr);
  return uVar5;
}



undefined4 BIOS_OBJ_92C(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined uVar8;
  undefined4 in_a3;
  byte bVar9;
  byte *unaff_s2;
  char *unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  int unaff_s7;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar3 = CheckCallback();
    bVar9 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar9 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
          (*DAT_80031880)(*unaff_s6,&DAT_80032a84);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
          (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
        }
      }
    }
    CDROM_REG0 = bVar9;
    uVar8 = (undefined)in_a3;
    cVar7 = *unaff_s3;
    if (cVar7 != '\0') break;
    cVar7 = unaff_s3[-1];
    if (cVar7 != '\0') {
      unaff_s3[-1] = '\0';
      puVar6 = &DAT_80032a84;
      iVar3 = 7;
      if (unaff_s4 != (undefined *)0x0) {
        uVar8 = 0xff;
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar3 = iVar3 + -1;
          *unaff_s4 = uVar1;
          unaff_s4 = unaff_s4 + 1;
        } while (iVar3 != -1);
      }
      goto BIOS_OBJ_A84;
    }
    if (unaff_s7 != 0) {
      return 0;
    }
    iVar3 = VSync(-1);
    if ((DAT_80032a94 < iVar3) ||
       (iVar3 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar3, bVar2)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
             *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s5));
      CD_flush();
      uVar5 = BIOS_OBJ_92C();
      return uVar5;
    }
    in_v0 = 0;
  }
  *unaff_s3 = '\0';
  puVar6 = &DAT_80032a8c;
  if (unaff_s4 != (undefined *)0x0) {
    iVar3 = 7;
    do {
      uVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
      *unaff_s4 = uVar8;
      unaff_s4 = unaff_s4 + 1;
    } while (iVar3 != -1);
    uVar5 = BIOS_OBJ_A94((char)puVar6,(char)unaff_s4,cVar7,0xff,in_stack_00000010,in_stack_00000014,
                         in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                         in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                         in_stack_00000038);
    return uVar5;
  }
BIOS_OBJ_A84:
  uVar5 = BIOS_OBJ_A94((char)puVar6,(char)unaff_s4,cVar7,uVar8,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                       in_stack_00000038);
  return uVar5;
}



undefined4
BIOS_OBJ_95C(undefined param_1,undefined param_2,undefined param_3,byte param_4,undefined4 param_5)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  undefined uVar9;
  uint uVar10;
  byte unaff_s1;
  byte *unaff_s2;
  char *unaff_s3;
  undefined *unaff_s4;
  int unaff_s5;
  undefined *unaff_s6;
  int unaff_s7;
  undefined in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  uVar10 = (uint)param_4;
  do {
    while( true ) {
      uVar4 = getintr();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
        (*DAT_80031880)(*unaff_s6,&DAT_80032a84);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
        (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
      }
    }
    do {
      CDROM_REG0 = bVar3;
      uVar9 = (undefined)uVar10;
      cVar8 = *unaff_s3;
      if (cVar8 != '\0') {
        *unaff_s3 = '\0';
        puVar7 = &DAT_80032a8c;
        if (unaff_s4 != (undefined *)0x0) {
          iVar6 = 7;
          do {
            uVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s4 = uVar9;
            unaff_s4 = unaff_s4 + 1;
          } while (iVar6 != -1);
          uVar5 = BIOS_OBJ_A94((char)puVar7,(char)unaff_s4,cVar8,0xff,(undefined)param_5,
                               in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                               in_stack_00000020,in_stack_00000024,in_stack_00000028,
                               in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                               in_stack_00000038);
          return uVar5;
        }
        goto BIOS_OBJ_A84;
      }
      cVar8 = unaff_s3[-1];
      if (cVar8 != '\0') {
        unaff_s3[-1] = '\0';
        puVar7 = &DAT_80032a84;
        iVar6 = 7;
        if (unaff_s4 != (undefined *)0x0) {
          uVar9 = 0xff;
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
            *unaff_s4 = uVar1;
            unaff_s4 = unaff_s4 + 1;
          } while (iVar6 != -1);
        }
BIOS_OBJ_A84:
        uVar5 = BIOS_OBJ_A94((char)puVar7,(char)unaff_s4,cVar8,uVar9,(undefined)param_5,
                             in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020
                             ,in_stack_00000024,in_stack_00000028,in_stack_0000002c,
                             in_stack_00000030,in_stack_00000034,in_stack_00000038);
        return uVar5;
      }
      if (unaff_s7 != 0) {
        return 0;
      }
      iVar6 = VSync(-1);
      if ((DAT_80032a94 < iVar6) ||
         (iVar6 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar6, bVar2)) {
        puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s5));
        CD_flush();
        uVar5 = BIOS_OBJ_92C();
        return uVar5;
      }
      iVar6 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar6 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_A94(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  return;
}



int CD_cw(byte param_1,byte *param_2,undefined *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined uVar5;
  undefined1 *puVar6;
  undefined uVar7;
  undefined uVar8;
  undefined *puVar9;
  undefined uVar10;
  undefined4 unaff_s0;
  byte bVar11;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffc0;
  undefined in_stack_ffffffc4;
  undefined in_stack_ffffffc8;
  undefined in_stack_ffffffcc;
  undefined in_stack_ffffffd0;
  undefined in_stack_ffffffd4;
  
  puVar9 = param_3;
  iVar2 = param_4;
  if (1 < DAT_80031888) {
    printf("%s...\n",(&PTR_s_CdlSync_800318a0)[param_1]);
  }
  uVar10 = (undefined)iVar2;
  uVar8 = SUB41(puVar9,0);
  if ((*(int *)(&DAT_80031ac0 + (uint)param_1 * 4) == 0) || (param_2 != (byte *)0x0)) {
    CD_sync(0,(undefined *)0x0);
    iVar2 = 0;
    pbVar4 = param_2;
    if (param_1 == 2) {
      do {
        (&DAT_80031898)[iVar2] = *pbVar4;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar2 < 4);
    }
    DAT_80031b58 = 0;
    if (*(int *)(&DAT_800319c0 + (uint)param_1 * 4) != 0) {
      DAT_80031b59 = 0;
    }
    CDROM_REG0 = 0;
    iVar2 = 0;
    pbVar4 = param_2;
    if (0 < *(int *)(&DAT_80031ac0 + (uint)param_1 * 4)) {
      do {
        CDROM_REG2 = *pbVar4;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar2 < *(int *)(&DAT_80031ac0 + (uint)param_1 * 4));
    }
    iVar2 = 0;
    DAT_8003189d = param_1;
    CDROM_REG1 = param_1;
    if (param_4 == 0) {
      iVar2 = VSync(-1);
      DAT_80032a94 = iVar2 + 0x3c0;
      DAT_80032a98 = 0;
      DAT_80032a9c = "CD_cw";
      bVar11 = CDROM_REG0;
      while (CDROM_REG0 = bVar11, DAT_80031b58 == 0) {
        iVar2 = VSync(-1);
        if ((DAT_80032a94 < iVar2) ||
           (iVar2 = DAT_80032a98 + 1, bVar1 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar2, bVar1))
        {
          puts("CD timeout: ");
          printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
                 (&PTR_s_NoIntr_80031920)[DAT_80031b58],(&PTR_s_NoIntr_80031920)[DAT_80031b59]);
          CD_flush();
          iVar2 = BIOS_OBJ_D88();
          return iVar2;
        }
        iVar2 = CheckCallback();
        bVar11 = CDROM_REG0;
        if (iVar2 != 0) {
          bVar11 = CDROM_REG0 & 3;
          while( true ) {
            uVar3 = getintr();
            if (uVar3 == 0) break;
            if (((uVar3 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
              (*DAT_80031880)(DAT_80031b59,&DAT_80032a84);
            }
            if (((uVar3 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
              (*DAT_8003187c)(DAT_80031b58,&DAT_80032a7c);
            }
          }
        }
      }
      if ((DAT_80031b58 == 2) && (param_1 == 0xe)) {
        DAT_8003189c = *param_2;
      }
      puVar6 = &DAT_80032a7c;
      if (param_3 != (undefined *)0x0) {
        iVar2 = 7;
        do {
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar2 = iVar2 + -1;
          *param_3 = uVar8;
          param_3 = param_3 + 1;
        } while (iVar2 != -1);
      }
      iVar2 = -(uint)(DAT_80031b58 == 5);
    }
  }
  else {
    iVar2 = -2;
    if (0 < DAT_80031888) {
      uVar7 = SUB41((&PTR_s_CdlSync_800318a0)[param_1],0);
      uVar5 = 0xb0;
      printf("%s: no param\n");
      iVar2 = BIOS_OBJ_EDC(uVar5,uVar7,uVar8,uVar10,in_stack_ffffffc0,in_stack_ffffffc4,
                           in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,
                           unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_s6,unaff_s7,
                           unaff_retaddr);
      return iVar2;
    }
  }
  return iVar2;
}



int BIOS_OBJ_D88(void)

{
  undefined uVar1;
  bool bVar2;
  int in_v0;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined *unaff_s6;
  undefined *unaff_s7;
  undefined4 uStack00000010;
  
  while( true ) {
    if (in_v0 != 0) {
      return -1;
    }
    iVar3 = CheckCallback();
    bVar6 = CDROM_REG0;
    if (iVar3 != 0) {
      bVar6 = CDROM_REG0 & 3;
      while( true ) {
        uVar4 = getintr();
        if (uVar4 == 0) break;
        if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
          (*DAT_80031880)(*unaff_s6,&DAT_80032a84);
        }
        if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
          (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
        }
      }
    }
    CDROM_REG0 = bVar6;
    if (*unaff_s2 != 0) break;
    iVar3 = VSync(-1);
    if ((DAT_80032a94 < iVar3) ||
       (iVar3 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar3, bVar2)) {
      puts("CD timeout: ");
      uStack00000010 = *(undefined4 *)((uint)unaff_s2[1] * 4 + unaff_s4);
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
             *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s4));
      CD_flush();
      iVar3 = BIOS_OBJ_D88();
      return iVar3;
    }
    in_v0 = 0;
  }
  if ((DAT_80031b58 == '\x02') && (unaff_s3 == '\x0e')) {
    DAT_8003189c = *unaff_s5;
  }
  puVar5 = &DAT_80032a7c;
  if (unaff_s7 != (undefined *)0x0) {
    iVar3 = 7;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
      *unaff_s7 = uVar1;
      unaff_s7 = unaff_s7 + 1;
    } while (iVar3 != -1);
  }
  return -(uint)(DAT_80031b58 == '\x05');
}



int BIOS_OBJ_DB8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5)

{
  undefined uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte unaff_s1;
  byte *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  undefined *unaff_s5;
  undefined *unaff_s6;
  undefined *unaff_s7;
  
  do {
    while( true ) {
      uVar4 = getintr();
      bVar3 = unaff_s1;
      if (uVar4 == 0) break;
      if (((uVar4 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
        (*DAT_80031880)(*unaff_s6,&DAT_80032a84);
      }
      if (((uVar4 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
        (*DAT_8003187c)(*unaff_s2,&DAT_80032a7c);
      }
    }
    do {
      CDROM_REG0 = bVar3;
      if (*unaff_s2 != 0) {
        if ((DAT_80031b58 == '\x02') && (unaff_s3 == '\x0e')) {
          DAT_8003189c = *unaff_s5;
        }
        puVar6 = &DAT_80032a7c;
        if (unaff_s7 != (undefined *)0x0) {
          iVar5 = 7;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s7 = uVar1;
            unaff_s7 = unaff_s7 + 1;
          } while (iVar5 != -1);
        }
        return -(uint)(DAT_80031b58 == '\x05');
      }
      iVar5 = VSync(-1);
      if ((DAT_80032a94 < iVar5) ||
         (iVar5 = DAT_80032a98 + 1, bVar2 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar5, bVar2)) {
        puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s4));
        CD_flush();
        iVar5 = BIOS_OBJ_D88();
        return iVar5;
      }
      iVar5 = CheckCallback();
      bVar3 = CDROM_REG0;
    } while (iVar5 == 0);
    unaff_s1 = CDROM_REG0 & 3;
  } while( true );
}



void BIOS_OBJ_EDC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  return;
}



undefined4 CD_vol(int param_1)

{
  CDROM_REG0 = 3;
  CDROM_REG1 = *(byte *)(param_1 + 2);
  CDROM_REG2 = *(byte *)(param_1 + 3);
  CDROM_REG3 = 0x20;
  return 0;
}



void CD_flush(void)

{
  if ((CDROM_REG3 & 7) != 0) {
    do {
    } while( true );
  }
  DAT_80031b5a = 0;
  DAT_80031b59 = 0;
  DAT_80031b58 = 2;
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  COMMON_DELAY = 0x1325;
  return;
}



undefined4 CD_initvol(void)

{
  if ((CURR_MAIN_VOL_L == 0) && (CURR_MAIN_VOL_R == 0)) {
    SPU_MAIN_VOL_L = 0x3fff;
    SPU_MAIN_VOL_R = 0x3fff;
  }
  CD_VOL_L = 0x3fff;
  CD_VOL_R = 0x3fff;
  SPU_CTRL_REG_CPUCNT = 0xc001;
  CDROM_REG0 = 3;
  CDROM_REG1 = 0x80;
  CDROM_REG2 = 0;
  CDROM_REG3 = 0x20;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CD_initintr(void)

{
  DAT_80031880 = 0;
  DAT_8003187c = 0;
  DAT_80031890 = 0;
  _DAT_8003188c = 0;
  ResetCallback();
  InterruptCallback(2,(int)callback);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int CD_init(void)

{
  int iVar1;
  int iVar2;
  
  puts("CD_init:");
  printf("addr=%08x\n",&PTR_DAT_80031b5c);
  DAT_8003189d = 0;
  DAT_8003189c = 0;
  DAT_80031880 = 0;
  DAT_8003187c = 0;
  DAT_80031890 = 0;
  _DAT_8003188c = 0;
  ResetCallback();
  InterruptCallback(2,(int)callback);
  if ((CDROM_REG3 & 7) != 0) {
    do {
    } while( true );
  }
  DAT_80031b5a = 0;
  DAT_80031b59 = 0;
  DAT_80031b58 = 2;
  CDROM_REG0 = 0;
  CDROM_REG3 = 0;
  COMMON_DELAY = 0x1325;
  CD_cw(1,(byte *)0x0,(undefined *)0x0,0);
  if ((_DAT_8003188c & 0x10) != 0) {
    CD_cw(1,(byte *)0x0,(undefined *)0x0,0);
  }
  iVar1 = CD_cw(10,(byte *)0x0,(undefined *)0x0,0);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar1 = CD_cw(0xc,(byte *)0x0,(undefined *)0x0,0);
    iVar2 = -1;
    if (iVar1 == 0) {
      iVar2 = CD_sync(0,(undefined *)0x0);
      iVar2 = -(uint)(iVar2 != 2);
    }
  }
  return iVar2;
}



undefined4 CD_datasync(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  DAT_80032a94 = iVar2 + 0x3c0;
  DAT_80032a98 = 0;
  DAT_80032a9c = "CD_datasync";
  do {
    iVar2 = VSync(-1);
    if ((DAT_80032a94 < iVar2) ||
       (iVar2 = DAT_80032a98 + 1, bVar1 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar2, bVar1)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,(&PTR_s_CdlSync_800318a0)[DAT_8003189d],
             (&PTR_s_NoIntr_80031920)[DAT_80031b58],(&PTR_s_NoIntr_80031920)[DAT_80031b59]);
      CD_flush();
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = 0xffffffff;
  } while (((iVar2 == 0) && (uVar3 = 0, (DMA_CDROM_CHCR & 0x1000000) != 0)) &&
          (uVar3 = 1, param_1 == 0));
  return uVar3;
}



undefined4
BIOS_OBJ_14C0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
             undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  int iVar2;
  int in_v0;
  undefined4 uVar3;
  int unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while (((uVar3 = 0xffffffff, in_v0 == 0 && (uVar3 = 0, (DMA_CDROM_CHCR & 0x1000000) != 0)) &&
         (uVar3 = 1, unaff_s2 == 0))) {
    iVar2 = VSync(-1);
    if ((DAT_80032a94 < iVar2) ||
       (iVar2 = DAT_80032a98 + 1, bVar1 = 0x3c0000 < DAT_80032a98, DAT_80032a98 = iVar2, bVar1)) {
      puts("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_80032a9c,
             *(undefined4 *)((uint)DAT_8003189d * 4 + unaff_s3),
             *(undefined4 *)((uint)*unaff_s1 * 4 + unaff_s0));
      CD_flush();
      in_v0 = -1;
    }
    else {
      in_v0 = 0;
    }
  }
  return uVar3;
}



// WARNING: Removing unreachable block (ram,0x800206f0)
// WARNING: Removing unreachable block (ram,0x80020720)
// WARNING: Removing unreachable block (ram,0x80020724)
// WARNING: Removing unreachable block (ram,0x80020738)

undefined4 CD_getsector(dword param_1,uint param_2)

{
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}



// Possible GS_101.OBJ/GsSetNearClip
// Possible GS_102.OBJ/GsSetFarClip
// Possible GS_124.OBJ/GsSetWorkBase

void CD_set_test_parmnum(undefined4 param_1)

{
  DAT_80031b24 = param_1;
  return;
}



void callback(void)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = CDROM_REG0 & 3;
  while( true ) {
    uVar1 = getintr();
    if (uVar1 == 0) break;
    if (((uVar1 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
      (*DAT_80031880)(DAT_80031b59,&DAT_80032a84);
    }
    if (((uVar1 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
      (*DAT_8003187c)(DAT_80031b58,&DAT_80032a7c);
    }
  }
  CDROM_REG0 = bVar2;
  return;
}



void BIOS_OBJ_164C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  byte unaff_s1;
  undefined *unaff_s2;
  
  while( true ) {
    uVar1 = getintr();
    if (uVar1 == 0) break;
    if (((uVar1 & 4) != 0) && (DAT_80031880 != (code *)0x0)) {
      (*DAT_80031880)(*unaff_s2,&DAT_80032a84);
    }
    if (((uVar1 & 2) != 0) && (DAT_8003187c != (code *)0x0)) {
      (*DAT_8003187c)(DAT_80031b58,&DAT_80032a7c);
    }
  }
  CDROM_REG0 = unaff_s1;
  return;
}



void cb_read(char param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  u_char in_stack_ffffffe0;
  undefined in_stack_ffffffe4;
  undefined in_stack_ffffffe8;
  undefined in_stack_ffffffec;
  
  if (param_1 == '\x01') {
    if (0 < CDReadNumSect) {
      if (DAT_80031b9c == 0x200) {
        CdGetSector(&stack0xffffffe0,3);
        iVar1 = CdPosToInt((CdlLOC *)&stack0xffffffe0);
        if (iVar1 != DAT_80031bac) {
          puts("CdRead: sector error\n");
          CDReadNumSect = -1;
        }
      }
      pvVar2 = DAT_80031b94;
      iVar1 = DAT_80031b9c;
      CdGetSector(DAT_80031b94,DAT_80031b9c);
      DAT_80031b94 = (void *)(DAT_80031b9c * 4 + (int)DAT_80031b94);
      CDReadNumSect = CDReadNumSect + -1;
      DAT_80031bac = DAT_80031bac + 1;
      CDREAD_OBJ_114((char)pvVar2,(char)iVar1,in_a2,in_a3,in_stack_ffffffe0,in_stack_ffffffe4,
                     in_stack_ffffffe8,in_stack_ffffffec,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
  }
  else {
    CDReadNumSect = -1;
  }
  DAT_80031ba4 = VSync(-1);
  if (CDReadNumSect < 0) {
    cd_read_retry(1);
  }
  iVar1 = VSync(-1);
  if (DAT_80031ba8 + 0x4b0 < iVar1) {
    CDReadNumSect = -1;
  }
  if ((CDReadNumSect == 0) || (iVar1 = VSync(-1), DAT_80031ba8 + 0x4b0 < iVar1)) {
    CdSyncCallback(CDSyncCallbackFunc);
    CdReadyCallback(CDReadyCallbackFunc);
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    if (DAT_80031b88 != (code *)0x0) {
      uVar3 = 5;
      if (CDReadNumSect == 0) {
        uVar3 = 2;
      }
      (*DAT_80031b88)(uVar3,param_2);
    }
  }
  return;
}



void CDREAD_OBJ_114(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_80031ba4 = VSync(-1);
  if (CDReadNumSect < 0) {
    cd_read_retry(1);
  }
  iVar1 = VSync(-1);
  if (DAT_80031ba8 + 0x4b0 < iVar1) {
    CDReadNumSect = -1;
  }
  if ((CDReadNumSect == 0) || (iVar1 = VSync(-1), DAT_80031ba8 + 0x4b0 < iVar1)) {
    CdSyncCallback(CDSyncCallbackFunc);
    CdReadyCallback(CDReadyCallbackFunc);
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    if (DAT_80031b88 != (code *)0x0) {
      uVar2 = 5;
      if (CDReadNumSect == 0) {
        uVar2 = 2;
      }
      (*DAT_80031b88)(uVar2);
    }
  }
  return;
}



undefined4 cd_read_retry(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  CdlLOC *pCVar3;
  int iVar4;
  undefined uVar5;
  undefined uVar6;
  undefined in_a3;
  undefined4 unaff_s0;
  uint uVar7;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  u_char in_stack_ffffffe8;
  undefined in_stack_ffffffec;
  
  CdSyncCallback((CdlCB)0x0);
  CdReadyCallback((CdlCB)0x0);
  uVar1 = CdStatus();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      puts("CdRead: Shell open...\n");
    }
    CdControlF('\x01',(u_char *)0x0);
    DAT_80031ba8 = VSync(-1);
    CDReadNumSect = 0xffffffff;
    uVar2 = CDREAD_OBJ_3DC();
    return uVar2;
  }
  if (param_1 != 0) {
    puts("CdRead: retry...\n");
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    pCVar3 = CdLastPos();
    uVar5 = 2;
    uVar6 = 0;
    iVar4 = CdControl('\x02',&pCVar3->minute,(u_char *)0x0);
    if (iVar4 == 0) {
      CDReadNumSect = 0xffffffff;
      uVar2 = CDREAD_OBJ_3E4(uVar5,(char)pCVar3,uVar6,in_a3,in_stack_ffffffe8,in_stack_ffffffec,
                             unaff_s0,unaff_s1,unaff_retaddr);
      return uVar2;
    }
  }
  CdFlush();
  uVar7 = CDSubsystemMode & 0xff;
  uVar1 = CdMode();
  if (((uVar7 != uVar1) || (param_1 != 0)) &&
     (iVar4 = CdControl('\x0e',&stack0xffffffe8,(u_char *)0x0), iVar4 == 0)) {
    CDReadNumSect = 0xffffffff;
    uVar2 = CDREAD_OBJ_3DC();
    return uVar2;
  }
  pCVar3 = CdLastPos();
  DAT_80031bac = CdPosToInt(pCVar3);
  CdReadyCallback(cb_read);
  DAT_80031b94 = bufAddrCdRead;
  CdControlF('\x06',(u_char *)0x0);
  CDReadNumSect = DAT_80031b8c;
  DAT_80031ba4 = VSync(-1);
  return CDReadNumSect;
}



undefined4 CDREAD_OBJ_3DC(void)

{
  return CDReadNumSect;
}



void CDREAD_OBJ_3E4(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9)

{
  return;
}



int CdRead(int sectors,u_long *buf,int mode)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 unaff_retaddr;
  
  CDSubsystemMode = mode;
  if ((mode & 0x30U) == 0) {
    DAT_80031b9c = 0x200;
    bVar1 = CDREAD_OBJ_468(sectors,buf,mode,sectors,unaff_retaddr);
    return CONCAT31(extraout_var_00,bVar1);
  }
  if ((mode & 0x30U) != 0x20) {
    bVar1 = CDREAD_OBJ_45C(sectors,buf,mode,sectors);
    return CONCAT31(extraout_var,bVar1);
  }
  DAT_80031b9c = 0x249;
  bVar1 = CDREAD_OBJ_468(sectors,buf,mode,sectors,unaff_retaddr);
  return CONCAT31(extraout_var_01,bVar1);
}



bool CDREAD_OBJ_45C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_v0;
  uint uVar1;
  int iVar2;
  
  CDSubsystemMode = CDSubsystemMode | 0x20;
  DAT_80031b8c = param_4;
  bufAddrCdRead = param_2;
  DAT_80031b9c = in_v0;
  CDSyncCallbackFunc = CdSyncCallback((CdlCB)0x0);
  CDReadyCallbackFunc = CdReadyCallback((CdlCB)0x0);
  DAT_80031ba8 = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = cd_read_retry(0);
  return 0 < iVar2;
}



bool CDREAD_OBJ_468(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  CDSubsystemMode = CDSubsystemMode | 0x20;
  DAT_80031b8c = param_4;
  bufAddrCdRead = param_2;
  CDSyncCallbackFunc = CdSyncCallback((CdlCB)0x0);
  CDReadyCallbackFunc = CdReadyCallback((CdlCB)0x0);
  DAT_80031ba8 = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = cd_read_retry(0);
  return 0 < iVar2;
}



int CdReadSync(int mode,u_char *result)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = VSync(-1);
    iVar2 = -1;
    if ((iVar1 <= DAT_80031ba8 + 0x4b0) &&
       ((CDReadNumSect < 0 ||
        (iVar1 = VSync(-1), iVar2 = CDReadNumSect, DAT_80031ba4 + 0x3c < iVar1)))) {
      cd_read_retry(1);
      iVar2 = DAT_80031b8c;
    }
  } while ((mode == 0) && (0 < iVar2));
  CdReady(1,result);
  return iVar2;
}



int CDREAD_OBJ_594(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  u_char *unaff_s3;
  
  while ((unaff_s2 == 0 && (0 < unaff_s0))) {
    iVar1 = VSync(-1);
    unaff_s0 = -1;
    if (iVar1 <= *unaff_s1 + 0x4b0) {
      if ((unaff_s1[-2] < 0) || (iVar1 = VSync(-1), unaff_s1[-1] + 0x3c < iVar1)) {
        cd_read_retry(1);
        unaff_s0 = unaff_s1[-7];
      }
      else {
        unaff_s0 = unaff_s1[-2];
      }
    }
  }
  CdReady(1,unaff_s3);
  return unaff_s0;
}



CdlCB CdReadCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_80031b88;
  DAT_80031b88 = func;
  return pCVar1;
}



int CdRead2(long mode)

{
  int iVar1;
  undefined uVar2;
  u_char *param;
  undefined uVar3;
  undefined in_a3;
  u_char uVar4;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  undefined in_stack_fffffff4;
  
  uVar2 = 0xe;
  param = &stack0xfffffff0;
  uVar3 = 0;
  uVar4 = (u_char)mode;
  CdControl('\x0e',param,(u_char *)0x0);
  if ((mode & 0x100U) != 0) {
    if ((mode & 0x20U) != 0) {
      DAT_80037070 = 0;
      iVar1 = CDREAD2_OBJ_50(uVar2,(char)param,uVar3,in_a3,uVar4,in_stack_fffffff4,unaff_s0,
                             unaff_retaddr);
      return iVar1;
    }
    DAT_80037070 = 1;
    CdDataCallback(data_ready_callback);
    CdReadyCallback(StCdInterrupt2);
  }
  iVar1 = CdControl('\x1b',(u_char *)0x0,(u_char *)0x0);
  return iVar1;
}



void CDREAD2_OBJ_50(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8)

{
  CdDataCallback(data_ready_callback);
  CdReadyCallback(StCdInterrupt2);
  CdControl('\x1b',(u_char *)0x0,(u_char *)0x0);
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void StCdInterrupt2(void)

{
  StCdInterrupt();
  return;
}



void StClearRing(void)

{
  DAT_800408c4 = 0;
  DAT_800408c0 = 0;
  DAT_800408bc = 0;
  DAT_800370b4 = 0;
  init_ring_status(0,DAT_80040918);
  DAT_8003707c = 0;
  DAT_80037068 = 0;
  DAT_8003701c = 0;
  return;
}



void data_ready_callback(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(DAT_800408c0 * 0x20 + DAT_800408dc);
  *puVar1 = 2;
  DAT_80032aa0 = *(undefined4 *)(puVar1 + 0xe);
  DAT_80032aa4 = *(undefined4 *)(puVar1 + 4);
  DAT_800408c0 = DAT_800408bc;
  if (DAT_80037074 != (code *)0x0) {
    (*DAT_80037074)();
  }
  DAT_800370b4 = 0;
  return;
}



int StGetBackloc(CdlLOC *loc)

{
  int iVar1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  if (DAT_80037070 == 0) {
    iVar1 = CdPosToInt((CdlLOC *)&DAT_80032aa0);
    iVar1 = iVar1 + 1;
    CdIntToPos(iVar1,loc);
    iVar1 = C_004_OBJ_DC((char)iVar1,(char)loc,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return iVar1;
  }
  return -1;
}



void C_004_OBJ_DC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6)

{
  return;
}



void StSetStream(u_long mode,u_long start_frame,u_long end_frame,func1 *func1,func2 *func2)

{
  FUN_800212cc(1,start_frame,end_frame);
  DAT_800408cc = 0;
  DAT_80037074 = func1;
  DAT_8003706c = mode & 1;
  DAT_800370ac = 0;
  DAT_800370a4 = 0;
  DAT_80037068 = 0;
  DAT_8003701c = 0;
  DAT_80037078 = func2;
  return;
}



u_long StFreeRing(u_long *base)

{
  int iVar1;
  short *psVar2;
  u_long uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = ((int)base - (DAT_80040918 * 0x20 + DAT_800408dc) >> 2) / 0x1f8;
  psVar2 = (short *)(iVar1 * 0x20 + DAT_800408dc);
  if (*psVar2 == 4) {
    iVar4 = (int)psVar2[3];
    iVar6 = 0;
    iVar5 = iVar1;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
        *(undefined2 *)(iVar5 * 0x20 + DAT_800408dc) = 0;
        iVar5 = iVar6 + iVar1;
      } while (iVar6 < iVar4);
    }
    DAT_800408c4 = iVar6 + iVar1;
    return 0;
  }
  uVar3 = C_007_OBJ_B0();
  return uVar3;
}



void C_007_OBJ_B0(void)

{
  return;
}



void init_ring_status(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar1 * 0x20 + DAT_800408dc) = 0;
    } while (uVar2 < param_2);
  }
  return;
}



u_long StGetNext(u_long **addr,u_long **header)

{
  short sVar1;
  u_long *puVar2;
  
  puVar2 = (u_long *)(DAT_800408c4 * 0x20 + DAT_800408dc);
  if (*(short *)puVar2 == 1) {
    DAT_800408c4 = 0;
    if (DAT_800408d0 != 0) {
      *(short *)puVar2 = 0;
    }
    puVar2 = (u_long *)(DAT_800408c4 * 0x20 + DAT_800408dc);
  }
  sVar1 = *(short *)puVar2;
  if (sVar1 == 2) {
    *(short *)puVar2 = 4;
    *addr = (u_long *)(DAT_80040918 * 0x20 + DAT_800408dc + DAT_800408c4 * 0x7e0);
    *header = puVar2;
  }
  return (uint)(sVar1 != 2);
}



// Possible C_010.OBJ/StSetMask

void FUN_800212cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_800408d4 = param_1;
  DAT_800370a8 = param_2;
  DAT_800408d0 = param_3;
  return;
}



void StCdInterrupt(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined4 *puVar7;
  undefined in_a1;
  undefined uVar8;
  undefined4 *puVar9;
  undefined in_a2;
  undefined in_a3;
  undefined uVar10;
  undefined uVar11;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffd0;
  undefined4 uVar12;
  undefined in_stack_ffffffd4;
  undefined uVar13;
  undefined4 uVar14;
  undefined in_stack_ffffffd8;
  undefined uVar15;
  undefined4 uVar16;
  undefined in_stack_ffffffdc;
  undefined in_stack_ffffffe0;
  undefined in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  byte abStack_14 [4];
  byte local_10;
  undefined local_f;
  
  uVar6 = 1;
  if (DAT_800370b4 != 1) {
    if ((DAT_8003706c != 0) && ((DMA_MDEC_OUT_CHCR & 0x1000000) != 0)) {
      DAT_8003707c = 1;
      if (DAT_800408cc != 0) {
        DAT_800370b8 = DAT_800370b8 + 1;
      }
      DAT_80031c80 = 1;
      C_011_OBJ_960(1,in_a1,in_a2,in_a3,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,
                    in_stack_ffffffdc,in_stack_ffffffe0,in_stack_ffffffe4,unaff_retaddr);
      return;
    }
    pbVar3 = &local_10;
    iVar1 = CdReady(1,pbVar3);
    if (iVar1 != 5) {
      if ((local_10 & 4) != 0) {
        DAT_80031c80 = 3;
        C_011_OBJ_960(uVar6,(char)pbVar3,in_a2,in_a3,in_stack_ffffffd0,in_stack_ffffffd4,
                      in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0,local_f,unaff_retaddr);
        return;
      }
      puVar7 = DAT_800408dc + DAT_800408bc * 8;
      DAT_80032aa8 = puVar7;
      if (*(short *)puVar7 != 0) {
        if (DAT_800408cc != 0) {
          DAT_800370b8 = DAT_800370b8 + 1;
        }
        DAT_80031c80 = 4;
        C_011_OBJ_960(uVar6,(char)pbVar3,in_a2,in_a3,in_stack_ffffffd0,in_stack_ffffffd4,
                      in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0,local_f,unaff_retaddr);
        return;
      }
      CDROM_REG0 = 0;
      CDROM_REG3 = 0x80;
      CDROM_DELAY = 0x20943;
      COMMON_DELAY = 0x1323;
      if (DAT_80037070 == 0) {
        pbVar3 = &stack0xffffffe8;
        do {
          *pbVar3 = CDROM_REG2;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 < abStack_14);
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
      }
      if (DAT_800408cc != 0) {
        uVar6 = 8;
        uVar10 = 0;
        puVar9 = (undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc);
        mem2mem(puVar7,puVar9,8);
        C_011_OBJ_270((char)puVar7,(char)puVar9,uVar6,uVar10,in_stack_ffffffd0,in_stack_ffffffd4,
                      in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0,local_f,
                      in_stack_ffffffe8);
        return;
      }
      uVar10 = 0;
      uVar11 = 8;
      uVar12 = 0x11000000;
      uVar14 = 0;
      uVar16 = 0;
      dma_execute(3,(dword)puVar7,0,8,0x11000000,'\0');
      uVar6 = SUB41(puVar7,0);
      do {
      } while ((DMA_CDROM_CHCR & 0x1000000) != 0);
      DAT_80032aa8[7] = in_stack_ffffffe8;
      uVar4 = DAT_800370a8;
      puVar9 = DAT_80032aa8;
      CDROM_DELAY = 0x20843;
      COMMON_DELAY = 0x1325;
      uVar8 = (undefined)uVar12;
      uVar13 = (undefined)uVar14;
      uVar15 = (undefined)uVar16;
      if ((DAT_800408d4 == 1) && (DAT_800370a8 != 0)) {
        if (DAT_800370a8 != *(ushort *)(DAT_80032aa8 + 2)) {
          *(short *)DAT_80032aa8 = 0;
          if (DAT_800408cc == 0) {
            return;
          }
          DAT_800370b8 = DAT_800370b8 + 1;
          C_011_OBJ_960((char)uVar4,uVar6,uVar10,uVar11,uVar8,uVar13,uVar15,in_stack_ffffffdc,
                        in_stack_ffffffe0,local_f,unaff_retaddr);
          return;
        }
        DAT_800408d4 = 0;
      }
      uVar5 = SUB41(DAT_80032aa8,0);
      if ((*(short *)DAT_80032aa8 != 0x160) ||
         ((*(ushort *)((int)DAT_80032aa8 + 2) >> 10 & 0x1f) != DAT_800370ac)) {
        if (DAT_800408cc != 0) {
          DAT_800370b8 = 0;
          C_011_OBJ_3D0();
          return;
        }
        DAT_80031c80 = 5;
        *(short *)DAT_80032aa8 = 0;
        C_011_OBJ_960(uVar5,uVar6,uVar10,uVar11,uVar8,uVar13,uVar15,in_stack_ffffffdc,
                      in_stack_ffffffe0,local_f,unaff_retaddr);
        return;
      }
      if (((int)DAT_80037068 != (uint)*(ushort *)(DAT_80032aa8 + 1)) ||
         ((DAT_8003701c != 0 && (DAT_8003701c != *(ushort *)(DAT_80032aa8 + 2))))) {
        DAT_8003701c = 0;
        DAT_80037068 = 0;
        uVar4 = DAT_800408bc - DAT_800408c0;
        iVar1 = DAT_800408c0;
        init_ring_status(DAT_800408c0,uVar4);
        DAT_800408bc = DAT_800408c0;
        *(short *)DAT_80032aa8 = 0;
        if (DAT_800408cc != 0) {
          DAT_800370b8 = DAT_800370b8 + 1;
        }
        DAT_80031c80 = 6;
        C_011_OBJ_960((char)iVar1,(char)uVar4,uVar10,uVar11,(char)uVar12,(char)uVar14,(char)uVar16,
                      in_stack_ffffffdc,in_stack_ffffffe0,local_f,unaff_retaddr);
        return;
      }
      if (*(short *)(DAT_80032aa8 + 1) == 0) {
        DAT_8003701c = (uint)*(ushort *)(DAT_80032aa8 + 2);
        DAT_80037068 = 0;
        if ((DAT_800408d0 != 0) && (DAT_800408d0 <= DAT_8003701c)) {
          DAT_8003701c = 0;
          DAT_80037068 = 0;
          uVar4 = DAT_800408bc - DAT_800408c0;
          iVar1 = DAT_800408c0;
          init_ring_status(DAT_800408c0,uVar4);
          uVar5 = (undefined)uVar16;
          uVar15 = (undefined)uVar14;
          uVar13 = (undefined)uVar12;
          uVar8 = (undefined)uVar4;
          uVar6 = (undefined)iVar1;
          DAT_800408bc = DAT_800408c0;
          *(short *)DAT_80032aa8 = 0;
          DAT_800408d4 = 1;
          if (DAT_80037078 != (code *)0x0) {
            (*DAT_80037078)();
          }
          if (DAT_800408cc != 0) {
            DAT_800370b8 = DAT_800370b8 + 1;
          }
          DAT_80031c80 = 7;
          C_011_OBJ_960(uVar6,uVar8,uVar10,uVar11,uVar13,uVar15,uVar5,in_stack_ffffffdc,
                        in_stack_ffffffe0,local_f,unaff_retaddr);
          return;
        }
        if ((DAT_80040918 - DAT_800408bc) - 1U < (uint)*(ushort *)((int)DAT_80032aa8 + 6)) {
          if (DAT_800408d0 == 0) {
            *(short *)DAT_80032aa8 = 1;
            DAT_800408d4 = 1;
            if (DAT_80037078 != (code *)0x0) {
              (*DAT_80037078)();
            }
            if (DAT_800408cc != 0) {
              DAT_800370b8 = DAT_800370b8 + 1;
            }
            DAT_80031c80 = 8;
            C_011_OBJ_960((char)puVar9,uVar6,uVar10,uVar11,(char)uVar12,(char)uVar14,(char)uVar16,
                          in_stack_ffffffdc,in_stack_ffffffe0,local_f,unaff_retaddr);
            return;
          }
          if (*(short *)DAT_800408dc != 0) {
            *(short *)DAT_80032aa8 = 0;
            if (DAT_800408cc != 0) {
              DAT_800370b8 = DAT_800370b8 + 1;
            }
            DAT_80031c80 = 9;
            C_011_OBJ_960(uVar5,uVar6,uVar10,uVar11,uVar8,uVar13,uVar15,in_stack_ffffffdc,
                          in_stack_ffffffe0,local_f,unaff_retaddr);
            return;
          }
          *(short *)DAT_80032aa8 = 1;
          uVar4 = 0;
          DAT_800408bc = 0;
          puVar7 = DAT_800408dc;
          do {
            uVar2 = *DAT_80032aa8;
            DAT_80032aa8 = DAT_80032aa8 + 1;
            uVar4 = uVar4 + 1;
            *puVar7 = uVar2;
            puVar7 = puVar7 + 1;
          } while (uVar4 < 8);
          DAT_80032aa8 = DAT_800408dc;
        }
        uVar6 = SUB41(puVar7,0);
        DAT_800408c0 = DAT_800408bc;
      }
      DAT_80031c80 = 10;
      DAT_80037068 = DAT_80037068 + 1;
      DAT_800408d8 = DAT_800408dc + DAT_80040918 * 8 + DAT_800408bc * 0x1f8;
      if (DAT_8003706c != 0) {
        CDROM_DELAY = 0x20943;
        COMMON_DELAY = 0x1323;
        C_011_OBJ_7BC((char)DAT_8003706c,uVar6,uVar10,uVar11,uVar12,uVar14,uVar16);
        return;
      }
      CDROM_DELAY = 0x21020843;
      if (*(ushort *)((int)DAT_80032aa8 + 6) - 1 == (uint)*(ushort *)(DAT_80032aa8 + 1)) {
        DAT_800370b4 = 1;
        if (DAT_800408cc != 0) {
          mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
          DAT_800370b8 = DAT_800370b8 + 1;
          C_011_OBJ_85C();
          return;
        }
        dma_execute(3,(dword)DAT_800408d8,0,0x1f8,0x11400100,'\x01');
        DAT_80037068 = 0;
        DAT_8003701c = 0;
        DAT_800370ac = DAT_800370a4;
        C_011_OBJ_900();
        return;
      }
      if (DAT_800408cc != 0) {
        mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
        DAT_800370b8 = DAT_800370b8 + 1;
        C_011_OBJ_900();
        return;
      }
      dma_execute(3,(dword)DAT_800408d8,0,0x1f8,0x11400100,'\0');
      COMMON_DELAY = 0x1325;
      *(short *)DAT_80032aa8 = 3;
      DAT_800408bc = DAT_800408bc + 1;
      if ((DAT_800408cc != 0) && (DAT_800370b4 != 0)) {
        data_ready_callback();
      }
    }
  }
  return;
}



void C_011_OBJ_270(undefined param_1,byte param_2,undefined param_3,undefined param_4,
                  undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                  undefined param_9,undefined param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined4 *puVar4;
  undefined uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  undefined3 in_stack_00000019;
  undefined4 in_stack_00000038;
  int iVar3;
  
  puVar6 = (undefined4 *)(uint)param_2;
  do {
  } while ((DMA_CDROM_CHCR & 0x1000000) != 0);
  DAT_80032aa8[7] = param_11;
  uVar7 = DAT_800370a8;
  puVar4 = DAT_80032aa8;
  CDROM_DELAY = 0x20843;
  COMMON_DELAY = 0x1325;
  if ((DAT_800408d4 == 1) && (DAT_800370a8 != 0)) {
    if (DAT_800370a8 != *(ushort *)(DAT_80032aa8 + 2)) {
      *(short *)DAT_80032aa8 = 0;
      if (DAT_800408cc == 0) {
        return;
      }
      DAT_800370b8 = DAT_800370b8 + 1;
      C_011_OBJ_960((char)uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,in_stack_00000038);
      return;
    }
    DAT_800408d4 = 0;
  }
  uVar2 = SUB41(DAT_80032aa8,0);
  if ((*(short *)DAT_80032aa8 != 0x160) ||
     ((*(ushort *)((int)DAT_80032aa8 + 2) >> 10 & 0x1f) != DAT_800370ac)) {
    if (DAT_800408cc != 0) {
      DAT_800370b8 = 0;
      C_011_OBJ_3D0();
      return;
    }
    DAT_80031c80 = 5;
    *(short *)DAT_80032aa8 = 0;
    C_011_OBJ_960(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  in_stack_00000038);
    return;
  }
  if (((int)DAT_80037068 != (uint)*(ushort *)(DAT_80032aa8 + 1)) ||
     ((DAT_8003701c != 0 && (DAT_8003701c != *(ushort *)(DAT_80032aa8 + 2))))) {
    DAT_8003701c = 0;
    DAT_80037068 = 0;
    uVar7 = DAT_800408bc - DAT_800408c0;
    iVar3 = DAT_800408c0;
    init_ring_status(DAT_800408c0,uVar7);
    DAT_800408bc = DAT_800408c0;
    *(short *)DAT_80032aa8 = 0;
    if (DAT_800408cc != 0) {
      DAT_800370b8 = DAT_800370b8 + 1;
    }
    DAT_80031c80 = 6;
    C_011_OBJ_960((char)iVar3,(char)uVar7,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  param_10,in_stack_00000038);
    return;
  }
  if (*(short *)(DAT_80032aa8 + 1) == 0) {
    DAT_8003701c = (uint)*(ushort *)(DAT_80032aa8 + 2);
    DAT_80037068 = 0;
    if ((DAT_800408d0 != 0) && (DAT_800408d0 <= DAT_8003701c)) {
      DAT_8003701c = 0;
      DAT_80037068 = 0;
      uVar7 = DAT_800408bc - DAT_800408c0;
      iVar3 = DAT_800408c0;
      init_ring_status(DAT_800408c0,uVar7);
      uVar5 = (undefined)uVar7;
      uVar2 = (undefined)iVar3;
      DAT_800408bc = DAT_800408c0;
      *(short *)DAT_80032aa8 = 0;
      DAT_800408d4 = 1;
      if (DAT_80037078 != (code *)0x0) {
        (*DAT_80037078)();
      }
      if (DAT_800408cc != 0) {
        DAT_800370b8 = DAT_800370b8 + 1;
      }
      DAT_80031c80 = 7;
      C_011_OBJ_960(uVar2,uVar5,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                    in_stack_00000038);
      return;
    }
    if ((DAT_80040918 - DAT_800408bc) - 1U < (uint)*(ushort *)((int)DAT_80032aa8 + 6)) {
      if (DAT_800408d0 == 0) {
        *(short *)DAT_80032aa8 = 1;
        DAT_800408d4 = 1;
        if (DAT_80037078 != (code *)0x0) {
          (*DAT_80037078)();
        }
        if (DAT_800408cc != 0) {
          DAT_800370b8 = DAT_800370b8 + 1;
        }
        DAT_80031c80 = 8;
        C_011_OBJ_960((char)puVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,in_stack_00000038);
        return;
      }
      if (*(short *)DAT_800408dc != 0) {
        *(short *)DAT_80032aa8 = 0;
        if (DAT_800408cc != 0) {
          DAT_800370b8 = DAT_800370b8 + 1;
        }
        DAT_80031c80 = 9;
        C_011_OBJ_960(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                      ,in_stack_00000038);
        return;
      }
      *(short *)DAT_80032aa8 = 1;
      uVar7 = 0;
      DAT_800408bc = 0;
      puVar6 = DAT_800408dc;
      do {
        uVar1 = *DAT_80032aa8;
        DAT_80032aa8 = DAT_80032aa8 + 1;
        uVar7 = uVar7 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < 8);
      DAT_80032aa8 = DAT_800408dc;
    }
    param_2 = (byte)puVar6;
    DAT_800408c0 = DAT_800408bc;
  }
  DAT_80031c80 = 10;
  DAT_80037068 = DAT_80037068 + 1;
  DAT_800408d8 = DAT_800408dc + DAT_80040918 * 8 + DAT_800408bc * 0x1f8;
  if (DAT_8003706c != 0) {
    CDROM_DELAY = 0x20943;
    COMMON_DELAY = 0x1323;
    C_011_OBJ_7BC((char)DAT_8003706c,param_2,param_3,param_4,_param_5,_param_6,_param_7);
    return;
  }
  CDROM_DELAY = 0x21020843;
  if (*(ushort *)((int)DAT_80032aa8 + 6) - 1 != (uint)*(ushort *)(DAT_80032aa8 + 1)) {
    if (DAT_800408cc == 0) {
      dma_execute(3,(dword)DAT_800408d8,0,0x1f8,0x11400100,'\0');
      COMMON_DELAY = 0x1325;
      *(short *)DAT_80032aa8 = 3;
      DAT_800408bc = DAT_800408bc + 1;
      if ((DAT_800408cc != 0) && (DAT_800370b4 != 0)) {
        data_ready_callback();
      }
      return;
    }
    mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
    DAT_800370b8 = DAT_800370b8 + 1;
    C_011_OBJ_900();
    return;
  }
  DAT_800370b4 = 1;
  if (DAT_800408cc != 0) {
    mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
    DAT_800370b8 = DAT_800370b8 + 1;
    C_011_OBJ_85C();
    return;
  }
  dma_execute(3,(dword)DAT_800408d8,0,0x1f8,0x11400100,'\x01');
  DAT_80037068 = 0;
  DAT_8003701c = 0;
  DAT_800370ac = DAT_800370a4;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_3D0(void)

{
  undefined in_a0;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  undefined4 in_stack_00000038;
  
  DAT_80031c80 = 5;
  *DAT_80032aa8 = 0;
  C_011_OBJ_960(in_a0,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                in_stack_0000001c,in_stack_00000020,in_stack_00000024,in_stack_00000038);
  return;
}



void C_011_OBJ_7BC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  dword in_t0;
  
  if ((ushort)DAT_80032aa8[3] - 1 != (uint)(ushort)DAT_80032aa8[2]) {
    if (DAT_800408cc != 0) {
      mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
      DAT_800370b8 = DAT_800370b8 + 1;
      C_011_OBJ_900();
      return;
    }
    dma_execute(3,(dword)DAT_800408d8,0,0x1f8,in_t0,'\0');
    COMMON_DELAY = 0x1325;
    *DAT_80032aa8 = 3;
    DAT_800408bc = DAT_800408bc + 1;
    if ((DAT_800408cc != 0) && (DAT_800370b4 != 0)) {
      data_ready_callback();
    }
    return;
  }
  DAT_800370b4 = 1;
  if (DAT_800408cc != 0) {
    mem2mem(DAT_800408d8,(undefined4 *)(DAT_800370b8 * 0x800 + DAT_800408cc + 0x20),0x1f8);
    DAT_800370b8 = DAT_800370b8 + 1;
    C_011_OBJ_85C();
    return;
  }
  dma_execute(3,(dword)DAT_800408d8,0,0x1f8,in_t0,'\x01');
  DAT_80037068 = 0;
  DAT_8003701c = 0;
  DAT_800370ac = DAT_800370a4;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_85C(void)

{
  DAT_80037068 = 0;
  DAT_8003701c = 0;
  DAT_800370ac = DAT_800370a4;
  C_011_OBJ_900();
  return;
}



void C_011_OBJ_900(void)

{
  COMMON_DELAY = 0x1325;
  *DAT_80032aa8 = 3;
  DAT_800408bc = DAT_800408bc + 1;
  if ((DAT_800408cc != 0) && (DAT_800370b4 != 0)) {
    data_ready_callback();
  }
  return;
}



void C_011_OBJ_960(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                  undefined param_9,undefined param_10,undefined4 param_11)

{
  return;
}



void mem2mem(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}



void dma_execute(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_retaddr;
  undefined4 in_stack_ffffffd8;
  undefined in_stack_ffffffdc;
  
  iVar2 = 0;
  iVar3 = param_3;
  if (((&DMA_MDEC_IN_CHCR)[param_1 * 4] & 0x1000000) != 0) {
    iVar3 = 0;
    do {
      if (iVar2 == 0x10000) {
        printf("DMA STATUS ERROR %x\n",(&DMA_MDEC_IN_CHCR)[param_1 * 4]);
        C_011_OBJ_A30();
        return;
      }
      iVar2 = iVar2 + 1;
    } while (((&DMA_MDEC_IN_CHCR)[param_1 * 4] & 0x1000000) != 0);
  }
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  if (param_6 == '\x01') {
    C_011_OBJ_A90(DMA_DICR._2_1_ | bVar1,1,(char)iVar3,(char)param_4,in_stack_ffffffd8,
                  in_stack_ffffffdc,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,
                  unaff_retaddr);
    return;
  }
  DMA_DICR._2_1_ = DMA_DICR._2_1_ & ~bVar1;
  DMA_DPCR = DMA_DPCR | 1 << (param_1 * 4 + 3 & 0x1f);
  (&DMA_MDEC_IN_MADR)[param_1 * 4] = param_2;
  (&DMA_MDEC_IN_BCR)[param_1 * 4] = param_3 << 0x10 | param_4;
  do {
  } while ((CDROM_REG0 & 0x40) == 0);
  (&DMA_MDEC_IN_CHCR)[param_1 * 4] = param_5;
  return;
}



void C_011_OBJ_A30(void)

{
  byte bVar1;
  int in_v0;
  undefined in_a2;
  undefined in_a3;
  uint unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword unaff_s5;
  undefined4 in_stack_00000010;
  undefined in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  bVar1 = (byte)(1 << (unaff_s0 & 0x1f));
  if (in_v0 == 1) {
    C_011_OBJ_A90(DMA_DICR._2_1_ | bVar1,1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                  in_stack_00000028,in_stack_0000002c,in_stack_00000030);
    return;
  }
  DMA_DICR._2_1_ = DMA_DICR._2_1_ & ~bVar1;
  DMA_DPCR = DMA_DPCR | 1 << (unaff_s0 * 4 + 3 & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  do {
  } while ((CDROM_REG0 & 0x40) == 0);
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = unaff_s5;
  return;
}



void C_011_OBJ_A90(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined4 param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13)

{
  int in_v1;
  int unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword unaff_s5;
  
  *(undefined *)(in_v1 + 2) = param_1;
  DMA_DPCR = DMA_DPCR | 1 << (unaff_s0 * 4 + 3U & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  do {
  } while ((CDROM_REG0 & 0x40) == 0);
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = unaff_s5;
  return;
}



void StRingStatus(short *free_sectors,short *over_sectors)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_80040918;
  *free_sectors = 0;
  uVar1 = (uint)(ushort)DAT_800408bc;
  uVar3 = (uint)(ushort)DAT_800408c4;
  *over_sectors = (short)(uVar1 - uVar3);
  if (-1 < (int)((uVar1 - uVar3) * 0x10000)) {
    while( true ) {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) break;
      if (*(short *)(iVar4 * 0x20 + DAT_800408dc) == 0) {
        *free_sectors = *free_sectors + 1;
      }
    }
    return;
  }
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    psVar2 = (short *)(iVar4 * 0x20 + DAT_800408dc);
    do {
      if (*psVar2 == 1) break;
      iVar4 = iVar4 + -1;
      psVar2 = psVar2 + -0x10;
    } while (-1 < iVar4);
  }
  *over_sectors = *over_sectors + (short)(iVar4 + 1);
  C_015_OBJ_B4(free_sectors,over_sectors,iVar4 + 1);
  return;
}



void C_015_OBJ_B4(short *param_1,undefined4 param_2,int param_3)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    if (*(short *)(param_3 * 0x20 + DAT_800408dc) == 0) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



void InitHeap(ulong *param_1,ulong param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void FlushCache(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void _bu_init(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void _96_remove(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void SetMem(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void DeliverEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void OpenEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void CloseEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void WaitEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void TestEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void EnableEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void DisableEvent(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StopPAD(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void PAD_init(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void PAD_dr(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ReturnFromException(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ResetEntryInt(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void HookEntryInt(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



// Possible A36.OBJ/EnterCriticalSection

void EnterCriticalSection(void)

{
  syscall(0);
  return;
}



// Possible A37.OBJ/ExitCriticalSection

void ExitCriticalSection(void)

{
  syscall(0);
  return;
}



int open(char *__file,int __oflag,...)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&SUB_000000b0)();
  return iVar1;
}



__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
                    // WARNING: Treating indirect jump as call
  _Var1 = (*(code *)&SUB_000000b0)();
  return _Var1;
}



ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)&SUB_000000b0)();
  return sVar1;
}



ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)&SUB_000000b0)();
  return sVar1;
}



int close(int __fd)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&SUB_000000b0)();
  return iVar1;
}



void format(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void firstfile(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void nextfile(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void delete(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void _get_error(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ChangeClearPAD(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void ChangeClearRCnt(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000c0)();
  return;
}



undefined4 SetRCnt(uint param_1,undefined2 param_2,uint param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xffff;
  uVar2 = 0x48;
  if (2 < uVar3) {
    uVar1 = COUNTER_OBJ_98();
    return uVar1;
  }
  *(undefined2 *)(&TMR_DOTCLOCK_MODE + uVar3 * 4) = 0;
  *(undefined2 *)(&TMR_DOTCLOCK_MAX + uVar3 * 4) = param_2;
  if (uVar3 < 2) {
    if ((param_3 & 0x10) != 0) {
      uVar2 = 0x49;
    }
    if ((param_3 & 1) == 0) {
      uVar1 = COUNTER_OBJ_74();
      return uVar1;
    }
  }
  else if ((uVar3 == 2) && ((param_3 & 1) == 0)) {
    uVar2 = 0x248;
  }
  if ((param_3 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  *(ushort *)(&TMR_DOTCLOCK_MODE + uVar3 * 4) = uVar2;
  return 1;
}



undefined4 COUNTER_OBJ_74(void)

{
  int in_v0;
  ushort in_a3;
  int in_t0;
  
  if (in_v0 != 0) {
    in_a3 = in_a3 | 0x10;
  }
  *(ushort *)(&TMR_DOTCLOCK_MODE + in_t0 * 4) = in_a3;
  return 1;
}



void COUNTER_OBJ_98(void)

{
  return;
}



undefined4 GetRCnt(ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = COUNTER_OBJ_D0();
    return uVar1;
  }
  return 0;
}



void COUNTER_OBJ_D0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool StartRCnt(uint param_1)

{
  _I_MASK = _I_MASK | *(uint *)(&DAT_80031ca0 + (param_1 & 0xffff) * 4);
  return (param_1 & 0xffff) < 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 StopRCnt(uint param_1)

{
  _I_MASK = ~*(uint *)(&DAT_80031ca0 + (param_1 & 0xffff) * 4) & _I_MASK;
  return 1;
}



undefined4 ResetRCnt(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xffff) < 3) {
    *(undefined2 *)(&TMR_DOTCLOCK_VAL + (param_1 & 0xffff) * 4) = 0;
    uVar1 = COUNTER_OBJ_170();
    return uVar1;
  }
  return 0;
}



void COUNTER_OBJ_170(void)

{
  return;
}



void puts(char *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



char * strcat(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)&LAB_000000a0)();
  return pcVar1;
}



int strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



char * strcpy(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)&LAB_000000a0)();
  return pcVar1;
}



void * bcopy(uchar *param_1,uchar *param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



void * bzero(uchar *param_1,int param_2)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



int rand(void)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



void srand(uint param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



int printf(char *fmt,...)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int sprintf(char *buffer,char *fmt,...)

{
  int **ppiVar1;
  char *pcVar2;
  void *pvVar3;
  undefined uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  uchar *puVar8;
  byte bVar9;
  uint uVar10;
  undefined uVar11;
  int *in_a2;
  int iVar12;
  undefined uVar13;
  char *in_a3;
  undefined4 unaff_s0;
  uint uVar14;
  undefined4 unaff_s1;
  int *piVar15;
  undefined4 unaff_s2;
  int iVar16;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_retaddr;
  int *local_res8;
  char *local_resc;
  undefined in_stack_fffffdc8;
  undefined in_stack_fffffdcc;
  undefined in_stack_fffffdd0;
  undefined in_stack_fffffdd4;
  undefined in_stack_fffffdd8;
  undefined in_stack_fffffddc;
  undefined uStack_39;
  uint uVar17;
  int iVar18;
  int iVar19;
  int **ppiVar20;
  
  iVar16 = 0;
  bVar9 = *fmt;
  ppiVar1 = &local_res8;
  local_res8 = in_a2;
  local_resc = in_a3;
  while (uVar10 = (uint)bVar9, uVar10 != 0) {
    uVar13 = SUB41(in_a3,0);
    if (uVar10 != 0x25) {
SPRINTF_OBJ_764:
      buffer[iVar16] = (char)uVar10;
      iVar16 = iVar16 + 1;
      ppiVar20 = ppiVar1;
      goto code_r0x80022b40;
    }
    uVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    uVar11 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pcVar2 = fmt + 1;
              uVar10 = (uint)(byte)fmt[1];
              if (uVar10 != 0x2d) break;
              uVar17 = uVar17 | 1;
              fmt = pcVar2;
            }
            if (uVar10 != 0x2b) break;
            uVar17 = uVar17 | 2;
            fmt = pcVar2;
          }
          if (uVar10 != 0x20) break;
          uVar17 = (uint)CONCAT11(fmt[1],(char)uVar17);
          fmt = pcVar2;
        }
        if (uVar10 != 0x23) break;
        uVar17 = uVar17 | 4;
        fmt = pcVar2;
      }
      if (uVar10 != 0x30) break;
      uVar17 = uVar17 | 8;
      fmt = pcVar2;
    }
    if (uVar10 == 0x2a) {
      iVar16 = SPRINTF_OBJ_1C0((int)fmt,(uint)(byte)fmt[2],0x23,uVar13,in_stack_fffffdc8,
                               in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                               in_stack_fffffdd8,in_stack_fffffddc,0,ppiVar1 + 1,fmt + 2);
      return iVar16;
    }
    while (uVar10 - 0x30 < 10) {
      iVar18 = iVar18 * 10 + -0x30 + uVar10;
      uVar10 = (uint)(byte)pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    pcVar5 = fmt;
    fmt = pcVar2;
    if (uVar10 == 0x2e) {
      uVar10 = (uint)(byte)pcVar2[1];
      pcVar5 = pcVar2;
      if (uVar10 == 0x2a) {
        iVar16 = SPRINTF_OBJ_260((int)pcVar2,(uint)(byte)pcVar2[2],0x23,uVar13,in_stack_fffffdc8,
                                 in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                                 in_stack_fffffdd8,in_stack_fffffddc,uVar17,*ppiVar1);
        return iVar16;
      }
      while (fmt = pcVar5 + 1, uVar10 - 0x30 < 10) {
        iVar19 = iVar19 * 10 + -0x30 + uVar10;
        uVar10 = (uint)(byte)pcVar5[2];
        pcVar5 = fmt;
      }
      pcVar5 = pcVar2;
      if (-1 < iVar19) {
        uVar17 = uVar17 | 0x10;
      }
    }
    piVar15 = (int *)&stack0xffffffc8;
    if ((uVar17 & 1) != 0) {
      uVar17 = uVar17 & 0xfffffff7;
    }
    bVar9 = (byte)uVar10;
    uVar4 = SUB41(pcVar5,0);
    switch(uVar10) {
    case 0x4c:
      iVar16 = SPRINTF_OBJ_2A4((int)pcVar5,(uint)(byte)fmt[1]);
      return iVar16;
    default:
      if (uVar10 == 0x25) goto SPRINTF_OBJ_764;
      goto SPRINTF_OBJ_824;
    case 99:
      iVar16 = SPRINTF_OBJ_770(uVar4,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                               in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                               in_stack_fffffddc,uVar17,iVar18);
      return iVar16;
    case 100:
    case 0x69:
      piVar7 = *ppiVar1;
      if ((int)piVar7 < 0) {
        iVar16 = SPRINTF_OBJ_388((int *)-(int)piVar7,bVar9,0x23,uVar13,in_stack_fffffdc8,
                                 in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                                 in_stack_fffffdd8,in_stack_fffffddc,
                                 (uint)CONCAT11(0x2d,(char)uVar17),iVar18,iVar19);
        return iVar16;
      }
      if ((uVar17 & 2) != 0) {
        iVar16 = SPRINTF_OBJ_388(piVar7,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                                 in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                                 in_stack_fffffddc,(uint)CONCAT11(0x2b,(char)uVar17),iVar18,iVar19);
        return iVar16;
      }
      goto code_r0x800226c4;
    case 0x68:
      iVar16 = SPRINTF_OBJ_2EC((int)pcVar5,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                               in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                               in_stack_fffffddc,uVar17,fmt);
      return iVar16;
    case 0x6c:
      iVar16 = SPRINTF_OBJ_2EC((int)pcVar5,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                               in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                               in_stack_fffffddc,uVar17,fmt);
      return iVar16;
    case 0x6e:
      **ppiVar1 = iVar16;
      iVar16 = SPRINTF_OBJ_804(uVar4,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                               in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                               in_stack_fffffddc,uVar17,iVar18,iVar19,unaff_s0,unaff_s1,unaff_s2,
                               unaff_s3,unaff_s4,unaff_s5,unaff_s6,unaff_retaddr,fmt);
      return iVar16;
    case 0x6f:
      ppiVar20 = ppiVar1 + 1;
      piVar7 = *ppiVar1;
      if ((uVar17 & 0x10) == 0) {
        if ((uVar17 & 8) != 0) {
          iVar19 = iVar18;
        }
        if (iVar19 < 1) {
          iVar19 = 1;
        }
      }
      uVar14 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
        piVar15 = (int *)((int)piVar15 + -1);
        *(byte *)piVar15 = ((byte)piVar7 & 7) + 0x30;
        uVar14 = uVar14 + 1;
      }
      if ((((uVar17 & 4) != 0) && (uVar14 != 0)) && (*(byte *)piVar15 != 0x30)) {
        piVar15 = (int *)((int)piVar15 + -1);
        *(byte *)piVar15 = 0x30;
        uVar14 = uVar14 + 1;
      }
      if ((int)uVar14 < iVar19) {
        do {
          piVar15 = (int *)((int)piVar15 + -1);
          *(byte *)piVar15 = 0x30;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar19);
        iVar16 = SPRINTF_OBJ_770((byte)piVar7,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                                 in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                                 in_stack_fffffddc,uVar17,iVar18);
        return iVar16;
      }
      break;
    case 0x70:
      iVar19 = 8;
      uVar17 = uVar17 | 0x50;
    case 0x58:
      iVar16 = SPRINTF_OBJ_590(pcVar5,uVar10,0x23,"0123456789ABCDEF",in_stack_fffffdc8,
                               in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                               in_stack_fffffdd8,in_stack_fffffddc,uVar17,iVar18,iVar19,ppiVar1);
      return iVar16;
    case 0x73:
      ppiVar20 = ppiVar1 + 1;
      piVar15 = *ppiVar1;
      if ((uVar17 & 4) == 0) {
        if ((uVar17 & 0x10) == 0) {
          strlen((char *)piVar15);
          iVar16 = SPRINTF_OBJ_770((char)piVar15,(char)uVar10,uVar11,uVar13,in_stack_fffffdc8,
                                   in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                                   in_stack_fffffdd8,in_stack_fffffddc,uVar17,iVar18);
          return iVar16;
        }
        uVar13 = 0;
        piVar7 = piVar15;
        pvVar3 = memchr((uchar *)piVar15,'\0',iVar19);
        uVar14 = (int)pvVar3 - (int)piVar15;
        if (pvVar3 == (void *)0x0) {
          iVar16 = SPRINTF_OBJ_770((char)piVar7,uVar13,(char)iVar19,(char)in_a3,in_stack_fffffdc8,
                                   in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                                   in_stack_fffffdd8,in_stack_fffffddc,uVar17,iVar18);
          return iVar16;
        }
      }
      else {
        uVar14 = (uint)*(byte *)piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        if (((uVar17 & 0x10) != 0) && (iVar19 < (int)uVar14)) {
          iVar16 = SPRINTF_OBJ_770(uVar4,bVar9,0x23,uVar13,in_stack_fffffdc8,in_stack_fffffdcc,
                                   in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                                   in_stack_fffffddc,uVar17,iVar18);
          return iVar16;
        }
      }
      break;
    case 0x75:
      piVar7 = *ppiVar1;
      uVar17 = uVar17 & 0xff;
code_r0x800226c4:
      ppiVar20 = ppiVar1 + 1;
      bVar9 = (byte)(uVar17 >> 8);
      if ((uVar17 & 0x10) == 0) {
        if (((uVar17 & 8) != 0) && (iVar19 = iVar18, bVar9 != 0)) {
          iVar19 = iVar18 + -1;
        }
        if (iVar19 < 1) {
          iVar19 = 1;
        }
      }
      uVar14 = 0;
      if (piVar7 != (int *)0x0) {
        uVar10 = 0xcccccccd;
        piVar6 = piVar7;
        do {
          piVar15 = (int *)((int)piVar15 + -1);
          uVar14 = uVar14 + 1;
          piVar7 = (int *)((uint)piVar6 / 10);
          *(byte *)piVar15 = (char)piVar6 + (char)piVar7 * -10 + 0x30;
          piVar6 = piVar7;
        } while (piVar7 != (int *)0x0);
      }
      for (; (int)uVar14 < iVar19; uVar14 = uVar14 + 1) {
        piVar15 = (int *)((int)piVar15 + -1);
        *(byte *)piVar15 = 0x30;
      }
      if (bVar9 != 0) {
        *(byte *)((int)piVar15 + -1) = bVar9;
        iVar16 = SPRINTF_OBJ_770((char)piVar7,(char)uVar10,0x23,uVar13,in_stack_fffffdc8,
                                 in_stack_fffffdcc,in_stack_fffffdd0,in_stack_fffffdd4,
                                 in_stack_fffffdd8,in_stack_fffffddc,uVar17,iVar18);
        return iVar16;
      }
      break;
    case 0x78:
      in_a3 = "0123456789abcdef";
      ppiVar20 = ppiVar1 + 1;
      piVar7 = *ppiVar1;
      if ((uVar17 & 0x10) == 0) {
        iVar12 = 0x23;
        if (((uVar17 & 8) != 0) && (iVar12 = iVar18, iVar19 = iVar18, (uVar17 & 4) != 0)) {
          iVar19 = iVar18 + -2;
        }
        uVar11 = (undefined)iVar12;
        if (iVar19 < 1) {
          iVar19 = 1;
        }
      }
      uVar14 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
        piVar15 = (int *)((int)piVar15 + -1);
        uVar14 = uVar14 + 1;
        *(char *)piVar15 = "0123456789abcdef"[(uint)piVar7 & 0xf];
      }
      for (; (int)uVar14 < iVar19; uVar14 = uVar14 + 1) {
        piVar15 = (int *)((int)piVar15 + -1);
        *(byte *)piVar15 = 0x30;
      }
      if ((uVar17 & 4) != 0) {
        *(byte *)((int)piVar15 + -1) = bVar9;
        *(byte *)((int)piVar15 + -2) = 0x30;
        iVar16 = SPRINTF_OBJ_770(0,bVar9,uVar11,0x90,in_stack_fffffdc8,in_stack_fffffdcc,
                                 in_stack_fffffdd0,in_stack_fffffdd4,in_stack_fffffdd8,
                                 in_stack_fffffddc,uVar17,iVar18);
        return iVar16;
      }
    }
    puVar8 = (uchar *)(buffer + iVar16);
    if (((int)uVar14 < iVar18) && ((uVar17 & 1) == 0)) {
      pcVar2 = buffer + iVar16;
      do {
        *pcVar2 = ' ';
        pcVar2 = pcVar2 + 1;
        iVar18 = iVar18 + -1;
        iVar16 = iVar16 + 1;
      } while ((int)uVar14 < iVar18);
      puVar8 = (uchar *)(buffer + iVar16);
    }
    memmove(puVar8,(uchar *)piVar15,uVar14);
    iVar16 = iVar16 + uVar14;
    if ((int)uVar14 < iVar18) {
      pcVar2 = buffer + iVar16;
      do {
        *pcVar2 = ' ';
        pcVar2 = pcVar2 + 1;
        uVar14 = uVar14 + 1;
        iVar16 = iVar16 + 1;
      } while ((int)uVar14 < iVar18);
    }
code_r0x80022b40:
    bVar9 = fmt[1];
    ppiVar1 = ppiVar20;
    fmt = fmt + 1;
  }
SPRINTF_OBJ_824:
  buffer[iVar16] = '\0';
  return iVar16;
}



int SPRINTF_OBJ_90(undefined4 param_1,undefined4 param_2,uint param_3,byte param_4,undefined param_5
                  ,undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                  undefined param_10,uint param_11,int *param_12,int **param_13,int param_14)

{
  byte *pbVar1;
  int iVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  uint in_v1;
  undefined *puVar7;
  undefined uVar8;
  int *piVar9;
  int *piVar10;
  uchar *puVar11;
  byte bVar12;
  uint uVar13;
  undefined uVar14;
  undefined uVar15;
  char *pcVar16;
  uint uVar17;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000218;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  
  pcVar16 = (char *)(uint)param_4;
code_r0x800223cc:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar4 = param_14;
            ppiVar3 = param_13;
            uVar15 = SUB41(pcVar16,0);
            param_14 = param_14 + 1;
            uVar13 = (uint)*(byte *)(iVar4 + 1);
            if (uVar13 != unaff_s6) break;
            param_11 = param_11 | 1;
          }
          if (uVar13 != unaff_s5) break;
          param_11 = param_11 | 2;
        }
        if (uVar13 != unaff_s4) break;
        param_11._0_2_ = CONCAT11(*(byte *)(iVar4 + 1),(byte)param_11);
      }
      if (uVar13 != param_3) break;
      param_11 = param_11 | 4;
    }
    if (uVar13 != in_v1) break;
    param_11 = param_11 | 8;
  }
  uVar14 = (undefined)param_3;
  if (uVar13 == 0x2a) {
    ppiVar3 = param_13 + 1;
    param_12 = *param_13;
    if ((int)param_12 < 0) {
      param_12 = (int *)-(int)param_12;
      param_11 = param_11 | 1;
    }
    param_14 = iVar4 + 2;
    param_13 = ppiVar3;
    iVar4 = SPRINTF_OBJ_1C0(iVar4,(uint)*(byte *)(iVar4 + 2),uVar14,uVar15,param_5,param_6,param_7,
                            param_8,param_9,param_10,in_stack_00000218,ppiVar3,param_14);
    return iVar4;
  }
  while (iVar2 = param_14, uVar13 - 0x30 < 10) {
    param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar13);
    param_14 = param_14 + 1;
    uVar13 = (uint)*(byte *)(iVar2 + 1);
  }
  if (uVar13 == 0x2e) {
    param_14 = param_14 + 1;
    uVar13 = (uint)*(byte *)(iVar2 + 1);
    if (uVar13 == 0x2a) {
      piVar5 = *param_13;
      param_14 = iVar2 + 2;
      param_13 = param_13 + 1;
      iVar4 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),uVar14,uVar15,param_5,param_6,param_7
                              ,param_8,param_9,param_10,param_11,piVar5);
      return iVar4;
    }
    while (iVar4 = param_14, uVar13 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar13;
      param_14 = param_14 + 1;
      uVar13 = (uint)*(byte *)(iVar4 + 1);
    }
    iVar4 = iVar2;
    if (-1 < (int)in_stack_00000218) {
      param_11 = param_11 | 0x10;
    }
  }
  piVar5 = (int *)&param_11;
  if ((param_11 & 1) != 0) {
    param_11 = param_11 & 0xfffffff7;
  }
  bVar12 = (byte)uVar13;
  uVar8 = (undefined)iVar4;
  switch(uVar13) {
  case 0x4c:
    param_11 = param_11 | 0x80;
    pbVar1 = (byte *)(param_14 + 1);
    param_14 = param_14 + 1;
    iVar4 = SPRINTF_OBJ_2A4(iVar4,(uint)*pbVar1);
    return iVar4;
  default:
    goto SPRINTF_OBJ_758;
  case 99:
    param_13 = param_13 + 1;
    iVar4 = SPRINTF_OBJ_770(uVar8,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12);
    return iVar4;
  case 100:
  case 0x69:
    piVar10 = *param_13;
    if ((param_11 & 0x20) != 0) {
      piVar10 = (int *)(int)(short)piVar10;
    }
    if ((int)piVar10 < 0) {
      param_11._0_2_ = CONCAT11((char)unaff_s6,(byte)param_11);
      param_13 = param_13 + 1;
      iVar4 = SPRINTF_OBJ_388((int *)-(int)piVar10,bVar12,uVar14,uVar15,param_5,param_6,param_7,
                              param_8,param_9,param_10,param_11,param_12,in_stack_00000218);
      return iVar4;
    }
    if ((param_11 & 2) != 0) {
      param_11._0_2_ = CONCAT11((char)unaff_s5,(byte)param_11);
      param_13 = param_13 + 1;
      iVar4 = SPRINTF_OBJ_388(piVar10,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12,in_stack_00000218);
      return iVar4;
    }
    break;
  case 0x68:
    iVar4 = SPRINTF_OBJ_2EC(iVar4,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_14);
    return iVar4;
  case 0x6c:
    iVar4 = SPRINTF_OBJ_2EC(iVar4,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_14);
    return iVar4;
  case 0x6e:
    if ((param_11 & 0x20) != 0) {
      *(short *)*param_13 = (short)unaff_s2;
      param_13 = param_13 + 1;
      iVar4 = SPRINTF_OBJ_804(uVar8,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12,in_stack_00000218,in_stack_00000228,
                              in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                              in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                              in_stack_00000244,param_14);
      return iVar4;
    }
    **param_13 = unaff_s2;
    param_13 = param_13 + 1;
    iVar4 = SPRINTF_OBJ_804(uVar8,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,in_stack_00000218,in_stack_00000228,
                            in_stack_0000022c,in_stack_00000230,in_stack_00000234,in_stack_00000238,
                            in_stack_0000023c,in_stack_00000240,in_stack_00000244,param_14);
    return iVar4;
  case 0x6f:
    param_13 = param_13 + 1;
    piVar10 = *ppiVar3;
    if ((param_11 & 0x20) != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    if ((param_11 & 0x10) == 0) {
      if ((param_11 & 8) != 0) {
        in_stack_00000218 = (uint)param_12;
      }
      if ((int)in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar17 = 0;
    for (; piVar10 != (int *)0x0; piVar10 = (int *)((uint)piVar10 >> 3)) {
      piVar5 = (int *)((int)piVar5 + -1);
      *(byte *)piVar5 = ((byte)piVar10 & 7) + 0x30;
      uVar17 = uVar17 + 1;
    }
    if ((((param_11 & 4) != 0) && (uVar17 != 0)) && (*(byte *)piVar5 != 0x30)) {
      piVar5 = (int *)((int)piVar5 + -1);
      *(byte *)piVar5 = 0x30;
      uVar17 = uVar17 + 1;
    }
    if ((int)uVar17 < (int)in_stack_00000218) {
      do {
        piVar5 = (int *)((int)piVar5 + -1);
        *(byte *)piVar5 = 0x30;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)in_stack_00000218);
      iVar4 = SPRINTF_OBJ_770((byte)piVar10,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12);
      return iVar4;
    }
    goto code_r0x80022aac;
  case 0x70:
    in_stack_00000218 = 8;
    param_11 = param_11 | 0x50;
  case 0x58:
    iVar4 = SPRINTF_OBJ_590(iVar4,uVar13,param_3,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,in_stack_00000218,param_13);
    return iVar4;
  case 0x73:
    ppiVar3 = param_13 + 1;
    piVar5 = *param_13;
    param_13 = ppiVar3;
    if ((param_11 & 4) == 0) {
      if ((param_11 & 0x10) == 0) {
        strlen((char *)piVar5);
        iVar4 = SPRINTF_OBJ_770((char)piVar5,(char)uVar13,(char)param_3,uVar15,param_5,param_6,
                                param_7,param_8,param_9,param_10,param_11,param_12);
        return iVar4;
      }
      uVar15 = 0;
      piVar10 = piVar5;
      pvVar6 = memchr((uchar *)piVar5,'\0',in_stack_00000218);
      uVar17 = (int)pvVar6 - (int)piVar5;
      if (pvVar6 == (void *)0x0) {
        iVar4 = SPRINTF_OBJ_770((char)piVar10,uVar15,(char)in_stack_00000218,(char)pcVar16,param_5,
                                param_6,param_7,param_8,param_9,param_10,param_11,param_12);
        return iVar4;
      }
    }
    else {
      uVar17 = (uint)*(byte *)piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      if (((param_11 & 0x10) != 0) && ((int)in_stack_00000218 < (int)uVar17)) {
        iVar4 = SPRINTF_OBJ_770(uVar8,bVar12,uVar14,uVar15,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_12);
        return iVar4;
      }
    }
    goto code_r0x80022aac;
  case 0x75:
    piVar10 = *param_13;
    uVar17 = param_11 & 0x20;
    param_11._0_2_ = (ushort)(byte)param_11;
    if (uVar17 != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    break;
  case 0x78:
    pcVar16 = "0123456789abcdef";
    ppiVar3 = param_13 + 1;
    piVar10 = *param_13;
    if ((param_11 & 0x20) != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    if ((param_11 & 0x10) == 0) {
      if (((param_11 & 8) != 0) &&
         (param_3 = (uint)param_12, in_stack_00000218 = (uint)param_12, (param_11 & 4) != 0)) {
        in_stack_00000218 = (int)param_12 - 2;
      }
      if ((int)in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar17 = 0;
    for (; piVar10 != (int *)0x0; piVar10 = (int *)((uint)piVar10 >> 4)) {
      piVar5 = (int *)((int)piVar5 + -1);
      uVar17 = uVar17 + 1;
      *(char *)piVar5 = "0123456789abcdef"[(uint)piVar10 & 0xf];
    }
    for (; (int)uVar17 < (int)in_stack_00000218; uVar17 = uVar17 + 1) {
      piVar5 = (int *)((int)piVar5 + -1);
      *(byte *)piVar5 = 0x30;
    }
    param_13 = ppiVar3;
    if ((param_11 & 4) != 0) {
      *(byte *)((int)piVar5 + -1) = bVar12;
      *(byte *)((int)piVar5 + -2) = 0x30;
      iVar4 = SPRINTF_OBJ_770(0,bVar12,(char)param_3,0x90,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12);
      return iVar4;
    }
    goto code_r0x80022aac;
  }
  param_13 = param_13 + 1;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (in_stack_00000218 = (uint)param_12, param_11._1_1_ != 0)) {
      in_stack_00000218 = (int)param_12 - 1;
    }
    if ((int)in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar17 = 0;
  if (piVar10 != (int *)0x0) {
    uVar13 = 0xcccccccd;
    piVar9 = piVar10;
    do {
      piVar5 = (int *)((int)piVar5 + -1);
      uVar17 = uVar17 + 1;
      piVar10 = (int *)((uint)piVar9 / 10);
      *(byte *)piVar5 = (char)piVar9 + (char)piVar10 * -10 + 0x30;
      piVar9 = piVar10;
    } while (piVar10 != (int *)0x0);
  }
  for (; (int)uVar17 < (int)in_stack_00000218; uVar17 = uVar17 + 1) {
    piVar5 = (int *)((int)piVar5 + -1);
    *(byte *)piVar5 = 0x30;
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)piVar5 + -1) = param_11._1_1_;
    iVar4 = SPRINTF_OBJ_770((char)piVar10,(char)uVar13,uVar14,uVar15,param_5,param_6,param_7,param_8
                            ,param_9,param_10,param_11,param_12);
    return iVar4;
  }
code_r0x80022aac:
  puVar11 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar17 < (int)param_12) && ((param_11 & 1) == 0)) {
    puVar7 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar7 = (char)unaff_s4;
      puVar7 = puVar7 + 1;
      param_12 = (int *)((int)param_12 - 1);
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar17 < (int)param_12);
    puVar11 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar11,(uchar *)piVar5,uVar17);
  unaff_s2 = unaff_s2 + uVar17;
  if ((int)param_12 <= (int)uVar17) goto code_r0x80022b40;
  puVar7 = (undefined *)(unaff_s2 + unaff_s3);
  do {
    *puVar7 = (char)unaff_s4;
    puVar7 = puVar7 + 1;
    uVar17 = uVar17 + 1;
    unaff_s2 = unaff_s2 + 1;
    if ((int)param_12 <= (int)uVar17) goto code_r0x80022b40;
  } while( true );
SPRINTF_OBJ_758:
  if (uVar13 != 0x25) {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  do {
    *(char *)(unaff_s3 + unaff_s2) = (char)uVar13;
    unaff_s2 = unaff_s2 + 1;
code_r0x80022b40:
    iVar4 = param_14 + 1;
    uVar13 = (uint)*(byte *)(param_14 + 1);
    if (uVar13 == 0) goto SPRINTF_OBJ_824;
    param_14 = iVar4;
  } while (uVar13 != 0x25);
  param_11 = 0;
  param_12 = (int *)0x0;
  in_stack_00000218 = 0;
  param_3 = 0x23;
  in_v1 = 0x30;
  goto code_r0x800223cc;
}



int SPRINTF_OBJ_1C0(int param_1,uint param_2,undefined param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,int *param_11,int **param_12,int param_13)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint in_v0;
  int iVar4;
  int **ppiVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined uVar8;
  int *piVar9;
  int *piVar10;
  uchar *puVar11;
  byte bVar12;
  undefined uVar13;
  undefined3 in_register_00000019;
  undefined uVar14;
  char *pcVar15;
  uint uVar16;
  int *piVar17;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  byte bVar18;
  uint in_stack_00000210;
  undefined2 uVar19;
  int in_stack_00000214;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  
  pcVar15 = (char *)(uint)param_4;
  iVar4 = CONCAT31(in_register_00000019,param_3);
code_r0x800224fc:
  iVar2 = param_13;
  ppiVar5 = param_12;
  uVar13 = (undefined)iVar4;
  uVar14 = SUB41(pcVar15,0);
  if (param_2 == in_v0) {
    param_13 = param_13 + 1;
    param_2 = (uint)*(byte *)(iVar2 + 1);
    if (param_2 == 0x2a) {
      param_11 = *param_12;
      param_13 = iVar2 + 2;
      param_12 = param_12 + 1;
      iVar4 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),uVar13,uVar14,param_5,param_6,param_7
                              ,param_8,param_9,param_10,in_stack_00000210,param_11);
      return iVar4;
    }
    while (iVar3 = param_13, param_2 - 0x30 < 10) {
      param_11 = (int *)((int)param_11 * 10 + -0x30 + param_2);
      param_13 = param_13 + 1;
      param_2 = (uint)*(byte *)(iVar3 + 1);
    }
    param_1 = iVar2;
    if (-1 < (int)param_11) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  piVar17 = (int *)&stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  bVar12 = (byte)param_2;
  uVar8 = (undefined)param_1;
  bVar18 = (byte)in_stack_00000210;
  uVar19 = (undefined2)(in_stack_00000210 >> 0x10);
  switch(param_2) {
  case 0x4c:
    pbVar1 = (byte *)(param_13 + 1);
    param_13 = param_13 + 1;
    iVar4 = SPRINTF_OBJ_2A4(param_1,(uint)*pbVar1);
    return iVar4;
  default:
    goto SPRINTF_OBJ_758;
  case 99:
    param_12 = param_12 + 1;
    iVar4 = SPRINTF_OBJ_770(uVar8,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,in_stack_00000210,in_stack_00000214);
    return iVar4;
  case 100:
  case 0x69:
    piVar10 = *param_12;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar10 = (int *)(int)(short)piVar10;
    }
    if ((int)piVar10 < 0) {
      param_12 = param_12 + 1;
      iVar4 = SPRINTF_OBJ_388((int *)-(int)piVar10,bVar12,uVar13,uVar14,param_5,param_6,param_7,
                              param_8,param_9,param_10,
                              CONCAT22(uVar19,CONCAT11((char)unaff_s6,bVar18)),in_stack_00000214,
                              param_11);
      return iVar4;
    }
    if ((in_stack_00000210 & 2) != 0) {
      param_12 = param_12 + 1;
      iVar4 = SPRINTF_OBJ_388(piVar10,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,CONCAT22(uVar19,CONCAT11((char)unaff_s5,bVar18)),
                              in_stack_00000214,param_11);
      return iVar4;
    }
    break;
  case 0x68:
    iVar4 = SPRINTF_OBJ_2EC(param_1,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,in_stack_00000210,param_13);
    return iVar4;
  case 0x6c:
    iVar4 = SPRINTF_OBJ_2EC(param_1,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,in_stack_00000210,param_13);
    return iVar4;
  case 0x6e:
    if ((in_stack_00000210 & 0x20) != 0) {
      *(short *)*param_12 = (short)unaff_s2;
      param_12 = param_12 + 1;
      iVar4 = SPRINTF_OBJ_804(uVar8,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,in_stack_00000210,in_stack_00000214,param_11,
                              in_stack_00000228,in_stack_0000022c,in_stack_00000230,
                              in_stack_00000234,in_stack_00000238,in_stack_0000023c,
                              in_stack_00000240,in_stack_00000244,param_13);
      return iVar4;
    }
    **param_12 = unaff_s2;
    param_12 = param_12 + 1;
    iVar4 = SPRINTF_OBJ_804(uVar8,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,in_stack_00000210,in_stack_00000214,param_11,in_stack_00000228,
                            in_stack_0000022c,in_stack_00000230,in_stack_00000234,in_stack_00000238,
                            in_stack_0000023c,in_stack_00000240,in_stack_00000244,param_13);
    return iVar4;
  case 0x6f:
    param_12 = param_12 + 1;
    piVar10 = *ppiVar5;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    if ((in_stack_00000210 & 0x10) == 0) {
      if ((in_stack_00000210 & 8) != 0) {
        param_11 = (int *)in_stack_00000214;
      }
      if ((int)param_11 < 1) {
        param_11 = (int *)0x1;
      }
    }
    uVar16 = 0;
    for (; piVar10 != (int *)0x0; piVar10 = (int *)((uint)piVar10 >> 3)) {
      piVar17 = (int *)((int)piVar17 + -1);
      *(byte *)piVar17 = ((byte)piVar10 & 7) + 0x30;
      uVar16 = uVar16 + 1;
    }
    if ((((in_stack_00000210 & 4) != 0) && (uVar16 != 0)) && (*(byte *)piVar17 != 0x30)) {
      piVar17 = (int *)((int)piVar17 + -1);
      *(byte *)piVar17 = 0x30;
      uVar16 = uVar16 + 1;
    }
    if ((int)uVar16 < (int)param_11) {
      do {
        piVar17 = (int *)((int)piVar17 + -1);
        *(byte *)piVar17 = 0x30;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)param_11);
      iVar4 = SPRINTF_OBJ_770((byte)piVar10,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,
                              param_9,param_10,in_stack_00000210,in_stack_00000214);
      return iVar4;
    }
    goto code_r0x80022aac;
  case 0x70:
    param_11 = (int *)0x8;
    in_stack_00000210 = in_stack_00000210 | 0x50;
  case 0x58:
    iVar4 = SPRINTF_OBJ_590(param_1,param_2,iVar4,"0123456789ABCDEF",param_5,param_6,param_7,param_8
                            ,param_9,param_10,in_stack_00000210,in_stack_00000214,param_11,param_12)
    ;
    return iVar4;
  case 0x73:
    ppiVar5 = param_12 + 1;
    piVar17 = *param_12;
    param_12 = ppiVar5;
    if ((in_stack_00000210 & 4) == 0) {
      if ((in_stack_00000210 & 0x10) == 0) {
        strlen((char *)piVar17);
        iVar4 = SPRINTF_OBJ_770((char)piVar17,(char)param_2,(char)iVar4,uVar14,param_5,param_6,
                                param_7,param_8,param_9,param_10,in_stack_00000210,in_stack_00000214
                               );
        return iVar4;
      }
      uVar13 = 0;
      piVar10 = piVar17;
      iVar4 = (int)param_11;
      pvVar6 = memchr((uchar *)piVar17,'\0',(int)param_11);
      uVar16 = (int)pvVar6 - (int)piVar17;
      if (pvVar6 == (void *)0x0) {
        iVar4 = SPRINTF_OBJ_770((char)piVar10,uVar13,(char)iVar4,(char)pcVar15,param_5,param_6,
                                param_7,param_8,param_9,param_10,in_stack_00000210,in_stack_00000214
                               );
        return iVar4;
      }
    }
    else {
      uVar16 = (uint)*(byte *)piVar17;
      piVar17 = (int *)((int)piVar17 + 1);
      if (((in_stack_00000210 & 0x10) != 0) && ((int)param_11 < (int)uVar16)) {
        iVar4 = SPRINTF_OBJ_770(uVar8,bVar12,uVar13,uVar14,param_5,param_6,param_7,param_8,param_9,
                                param_10,in_stack_00000210,in_stack_00000214);
        return iVar4;
      }
    }
    goto code_r0x80022aac;
  case 0x75:
    piVar10 = *param_12;
    uVar16 = in_stack_00000210 & 0x20;
    in_stack_00000210 = CONCAT22(uVar19,(ushort)bVar18);
    if (uVar16 != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    break;
  case 0x78:
    pcVar15 = "0123456789abcdef";
    ppiVar5 = param_12 + 1;
    piVar10 = *param_12;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar10 = (int *)((uint)piVar10 & 0xffff);
    }
    if ((in_stack_00000210 & 0x10) == 0) {
      if (((in_stack_00000210 & 8) != 0) &&
         (iVar4 = in_stack_00000214, param_11 = (int *)in_stack_00000214,
         (in_stack_00000210 & 4) != 0)) {
        param_11 = (int *)(in_stack_00000214 + -2);
      }
      if ((int)param_11 < 1) {
        param_11 = (int *)0x1;
      }
    }
    uVar16 = 0;
    for (; piVar10 != (int *)0x0; piVar10 = (int *)((uint)piVar10 >> 4)) {
      piVar17 = (int *)((int)piVar17 + -1);
      uVar16 = uVar16 + 1;
      *(char *)piVar17 = "0123456789abcdef"[(uint)piVar10 & 0xf];
    }
    for (; (int)uVar16 < (int)param_11; uVar16 = uVar16 + 1) {
      piVar17 = (int *)((int)piVar17 + -1);
      *(byte *)piVar17 = 0x30;
    }
    param_12 = ppiVar5;
    if ((in_stack_00000210 & 4) != 0) {
      *(byte *)((int)piVar17 + -1) = bVar12;
      *(byte *)((int)piVar17 + -2) = 0x30;
      iVar4 = SPRINTF_OBJ_770(0,bVar12,(char)iVar4,0x90,param_5,param_6,param_7,param_8,param_9,
                              param_10,in_stack_00000210,in_stack_00000214);
      return iVar4;
    }
    goto code_r0x80022aac;
  }
  param_12 = param_12 + 1;
  bVar12 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) && (param_11 = (int *)in_stack_00000214, bVar12 != 0)) {
      param_11 = (int *)(in_stack_00000214 + -1);
    }
    if ((int)param_11 < 1) {
      param_11 = (int *)0x1;
    }
  }
  uVar16 = 0;
  if (piVar10 != (int *)0x0) {
    param_2 = 0xcccccccd;
    piVar9 = piVar10;
    do {
      piVar17 = (int *)((int)piVar17 + -1);
      uVar16 = uVar16 + 1;
      piVar10 = (int *)((uint)piVar9 / 10);
      *(byte *)piVar17 = (char)piVar9 + (char)piVar10 * -10 + 0x30;
      piVar9 = piVar10;
    } while (piVar10 != (int *)0x0);
  }
  for (; (int)uVar16 < (int)param_11; uVar16 = uVar16 + 1) {
    piVar17 = (int *)((int)piVar17 + -1);
    *(byte *)piVar17 = 0x30;
  }
  if (bVar12 != 0) {
    *(byte *)((int)piVar17 + -1) = bVar12;
    iVar4 = SPRINTF_OBJ_770((char)piVar10,(char)param_2,uVar13,uVar14,param_5,param_6,param_7,
                            param_8,param_9,param_10,in_stack_00000210,in_stack_00000214);
    return iVar4;
  }
code_r0x80022aac:
  puVar11 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar16 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar7 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar7 = (char)unaff_s4;
      puVar7 = puVar7 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar16 < in_stack_00000214);
    puVar11 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar11,(uchar *)piVar17,uVar16);
  unaff_s2 = unaff_s2 + uVar16;
  if (in_stack_00000214 <= (int)uVar16) goto code_r0x80022b40;
  puVar7 = (undefined *)(unaff_s2 + unaff_s3);
  do {
    *puVar7 = (char)unaff_s4;
    puVar7 = puVar7 + 1;
    uVar16 = uVar16 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (in_stack_00000214 <= (int)uVar16) goto code_r0x80022b40;
  } while( true );
SPRINTF_OBJ_758:
  if (param_2 != 0x25) {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  do {
    *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
    unaff_s2 = unaff_s2 + 1;
code_r0x80022b40:
    iVar4 = param_13 + 1;
    param_2 = (uint)*(byte *)(param_13 + 1);
    if (param_2 == 0) goto SPRINTF_OBJ_824;
    param_13 = iVar4;
  } while (param_2 != 0x25);
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  param_11 = (int *)0x0;
  iVar4 = 0x23;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            param_1 = param_13;
            param_13 = param_13 + 1;
            param_2 = (uint)*(byte *)(param_1 + 1);
            if (param_2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 1;
          }
          if (param_2 != unaff_s5) break;
          in_stack_00000210 = in_stack_00000210 | 2;
        }
        if (param_2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(byte *)(param_1 + 1),(char)in_stack_00000210);
      }
      if (param_2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
    }
    if (param_2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
  }
  if (param_2 == 0x2a) {
    param_12 = param_12 + 1;
    param_13 = param_1 + 2;
    iVar4 = SPRINTF_OBJ_1C0(param_1,(uint)*(byte *)(param_1 + 2),0x23,(char)pcVar15,param_5,param_6,
                            param_7,param_8,param_9,param_10,(int *)0x0,param_12,param_13);
    return iVar4;
  }
  while (iVar2 = param_13, in_v0 = 0x2e, param_2 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_13 = param_13 + 1;
    param_2 = (uint)*(byte *)(iVar2 + 1);
  }
  goto code_r0x800224fc;
}



int SPRINTF_OBJ_260(int param_1,uint param_2,undefined param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int *param_12)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  undefined uVar4;
  int *piVar5;
  int *piVar6;
  uchar *puVar7;
  byte bVar8;
  undefined uVar9;
  int iVar10;
  undefined3 in_register_00000019;
  undefined uVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int in_stack_00000214;
  int **in_stack_00000220;
  int **ppiVar15;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  
  pcVar12 = (char *)(uint)param_4;
  iVar10 = CONCAT31(in_register_00000019,param_3);
code_r0x8002259c:
  iVar2 = param_1;
  ppiVar15 = in_stack_00000220;
  if (-1 < (int)param_12) {
    param_11 = param_11 | 0x10;
  }
SPRINTF_OBJ_280:
  uVar11 = SUB41(pcVar12,0);
  piVar14 = (int *)&param_11;
  if ((param_11 & 1) != 0) {
    param_11 = param_11 & 0xfffffff7;
  }
  bVar8 = (byte)param_2;
  uVar9 = (undefined)iVar10;
  uVar4 = (undefined)iVar2;
  switch(param_2) {
  case 0x4c:
    param_11 = param_11 | 0x80;
    iVar10 = SPRINTF_OBJ_2A4(iVar2,(uint)*(byte *)(in_stack_0000024c + 1));
    return iVar10;
  default:
    goto SPRINTF_OBJ_758;
  case 99:
    iVar10 = SPRINTF_OBJ_770(uVar4,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,in_stack_00000214);
    return iVar10;
  case 100:
  case 0x69:
    piVar6 = *ppiVar15;
    if ((param_11 & 0x20) != 0) {
      piVar6 = (int *)(int)(short)piVar6;
    }
    if ((int)piVar6 < 0) {
      param_11._0_2_ = CONCAT11((char)unaff_s6,(byte)param_11);
      iVar10 = SPRINTF_OBJ_388((int *)-(int)piVar6,bVar8,uVar9,uVar11,param_5,param_6,param_7,
                               param_8,param_9,param_10,param_11,in_stack_00000214,param_12);
      return iVar10;
    }
    if ((param_11 & 2) != 0) {
      param_11._0_2_ = CONCAT11((char)unaff_s5,(byte)param_11);
      iVar10 = SPRINTF_OBJ_388(piVar6,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,in_stack_00000214,param_12);
      return iVar10;
    }
    break;
  case 0x68:
    iVar10 = SPRINTF_OBJ_2EC(iVar2,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,in_stack_0000024c);
    return iVar10;
  case 0x6c:
    iVar10 = SPRINTF_OBJ_2EC(iVar2,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,in_stack_0000024c);
    return iVar10;
  case 0x6e:
    if ((param_11 & 0x20) != 0) {
      *(short *)*ppiVar15 = (short)unaff_s2;
      iVar10 = SPRINTF_OBJ_804(uVar4,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,in_stack_00000214,param_12,in_stack_00000228,
                               in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                               in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                               in_stack_00000244,in_stack_0000024c);
      return iVar10;
    }
    **ppiVar15 = unaff_s2;
    iVar10 = SPRINTF_OBJ_804(uVar4,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,in_stack_00000214,param_12,in_stack_00000228,
                             in_stack_0000022c,in_stack_00000230,in_stack_00000234,in_stack_00000238
                             ,in_stack_0000023c,in_stack_00000240,in_stack_00000244,
                             in_stack_0000024c);
    return iVar10;
  case 0x6f:
    in_stack_00000220 = ppiVar15 + 1;
    piVar6 = *ppiVar15;
    if ((param_11 & 0x20) != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    if ((param_11 & 0x10) == 0) {
      if ((param_11 & 8) != 0) {
        param_12 = (int *)in_stack_00000214;
      }
      if ((int)param_12 < 1) {
        param_12 = (int *)0x1;
      }
    }
    uVar13 = 0;
    for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 3)) {
      piVar14 = (int *)((int)piVar14 + -1);
      *(byte *)piVar14 = ((byte)piVar6 & 7) + 0x30;
      uVar13 = uVar13 + 1;
    }
    if ((((param_11 & 4) != 0) && (uVar13 != 0)) && (*(byte *)piVar14 != 0x30)) {
      piVar14 = (int *)((int)piVar14 + -1);
      *(byte *)piVar14 = 0x30;
      uVar13 = uVar13 + 1;
    }
    if ((int)uVar13 < (int)param_12) {
      do {
        piVar14 = (int *)((int)piVar14 + -1);
        *(byte *)piVar14 = 0x30;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)param_12);
      iVar10 = SPRINTF_OBJ_770((byte)piVar6,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11,in_stack_00000214);
      return iVar10;
    }
    goto code_r0x80022aac;
  case 0x70:
    param_12 = (int *)0x8;
    param_11 = param_11 | 0x50;
  case 0x58:
    iVar10 = SPRINTF_OBJ_590(iVar2,param_2,iVar10,"0123456789ABCDEF",param_5,param_6,param_7,param_8
                             ,param_9,param_10,param_11,in_stack_00000214,param_12,ppiVar15);
    return iVar10;
  case 0x73:
    in_stack_00000220 = ppiVar15 + 1;
    piVar14 = *ppiVar15;
    if ((param_11 & 4) == 0) {
      if ((param_11 & 0x10) == 0) {
        strlen((char *)piVar14);
        iVar10 = SPRINTF_OBJ_770((char)piVar14,(char)param_2,(char)iVar10,uVar11,param_5,param_6,
                                 param_7,param_8,param_9,param_10,param_11,in_stack_00000214);
        return iVar10;
      }
      uVar11 = 0;
      piVar6 = piVar14;
      iVar10 = (int)param_12;
      pvVar1 = memchr((uchar *)piVar14,'\0',(int)param_12);
      uVar13 = (int)pvVar1 - (int)piVar14;
      if (pvVar1 == (void *)0x0) {
        iVar10 = SPRINTF_OBJ_770((char)piVar6,uVar11,(char)iVar10,(char)pcVar12,param_5,param_6,
                                 param_7,param_8,param_9,param_10,param_11,in_stack_00000214);
        return iVar10;
      }
    }
    else {
      uVar13 = (uint)*(byte *)piVar14;
      piVar14 = (int *)((int)piVar14 + 1);
      if (((param_11 & 0x10) != 0) && ((int)param_12 < (int)uVar13)) {
        iVar10 = SPRINTF_OBJ_770(uVar4,bVar8,uVar9,uVar11,param_5,param_6,param_7,param_8,param_9,
                                 param_10,param_11,in_stack_00000214);
        return iVar10;
      }
    }
    goto code_r0x80022aac;
  case 0x75:
    piVar6 = *ppiVar15;
    uVar13 = param_11 & 0x20;
    param_11._0_2_ = (ushort)(byte)param_11;
    if (uVar13 != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    break;
  case 0x78:
    pcVar12 = "0123456789abcdef";
    in_stack_00000220 = ppiVar15 + 1;
    piVar6 = *ppiVar15;
    if ((param_11 & 0x20) != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    if ((param_11 & 0x10) == 0) {
      if (((param_11 & 8) != 0) &&
         (iVar10 = in_stack_00000214, param_12 = (int *)in_stack_00000214, (param_11 & 4) != 0)) {
        param_12 = (int *)(in_stack_00000214 + -2);
      }
      if ((int)param_12 < 1) {
        param_12 = (int *)0x1;
      }
    }
    uVar13 = 0;
    for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 4)) {
      piVar14 = (int *)((int)piVar14 + -1);
      uVar13 = uVar13 + 1;
      *(char *)piVar14 = "0123456789abcdef"[(uint)piVar6 & 0xf];
    }
    for (; (int)uVar13 < (int)param_12; uVar13 = uVar13 + 1) {
      piVar14 = (int *)((int)piVar14 + -1);
      *(byte *)piVar14 = 0x30;
    }
    if ((param_11 & 4) != 0) {
      *(byte *)((int)piVar14 + -1) = bVar8;
      *(byte *)((int)piVar14 + -2) = 0x30;
      iVar10 = SPRINTF_OBJ_770(0,bVar8,(char)iVar10,0x90,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,in_stack_00000214);
      return iVar10;
    }
    goto code_r0x80022aac;
  }
  in_stack_00000220 = ppiVar15 + 1;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (param_12 = (int *)in_stack_00000214, param_11._1_1_ != 0)) {
      param_12 = (int *)(in_stack_00000214 + -1);
    }
    if ((int)param_12 < 1) {
      param_12 = (int *)0x1;
    }
  }
  uVar13 = 0;
  if (piVar6 != (int *)0x0) {
    param_2 = 0xcccccccd;
    piVar5 = piVar6;
    do {
      piVar14 = (int *)((int)piVar14 + -1);
      uVar13 = uVar13 + 1;
      piVar6 = (int *)((uint)piVar5 / 10);
      *(byte *)piVar14 = (char)piVar5 + (char)piVar6 * -10 + 0x30;
      piVar5 = piVar6;
    } while (piVar6 != (int *)0x0);
  }
  for (; (int)uVar13 < (int)param_12; uVar13 = uVar13 + 1) {
    piVar14 = (int *)((int)piVar14 + -1);
    *(byte *)piVar14 = 0x30;
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)piVar14 + -1) = param_11._1_1_;
    iVar10 = SPRINTF_OBJ_770((char)piVar6,(char)param_2,uVar9,uVar11,param_5,param_6,param_7,param_8
                             ,param_9,param_10,param_11,in_stack_00000214);
    return iVar10;
  }
code_r0x80022aac:
  puVar7 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar13 < in_stack_00000214) && ((param_11 & 1) == 0)) {
    puVar3 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar3 = (char)unaff_s4;
      puVar3 = puVar3 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar13 < in_stack_00000214);
    puVar7 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar7,(uchar *)piVar14,uVar13);
  unaff_s2 = unaff_s2 + uVar13;
  if (in_stack_00000214 <= (int)uVar13) goto code_r0x80022b40;
  puVar3 = (undefined *)(unaff_s2 + unaff_s3);
  do {
    *puVar3 = (char)unaff_s4;
    puVar3 = puVar3 + 1;
    uVar13 = uVar13 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (in_stack_00000214 <= (int)uVar13) goto code_r0x80022b40;
  } while( true );
SPRINTF_OBJ_758:
  in_stack_00000220 = ppiVar15;
  if (param_2 != 0x25) {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  do {
    *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
    unaff_s2 = unaff_s2 + 1;
code_r0x80022b40:
    iVar2 = in_stack_0000024c + 1;
    param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
    if (param_2 == 0) goto SPRINTF_OBJ_824;
    in_stack_0000024c = iVar2;
  } while (param_2 != 0x25);
  param_11 = 0;
  in_stack_00000214 = 0;
  param_12 = (int *)0x0;
  iVar10 = 0x23;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            param_1 = iVar2 + 1;
            param_2 = (uint)*(byte *)(iVar2 + 1);
            if (param_2 != unaff_s6) break;
            param_11 = param_11 | 1;
            iVar2 = param_1;
          }
          if (param_2 != unaff_s5) break;
          param_11 = param_11 | 2;
          iVar2 = param_1;
        }
        if (param_2 != unaff_s4) break;
        param_11._0_2_ = CONCAT11(*(byte *)(iVar2 + 1),(byte)param_11);
        param_11 = (uint)(ushort)param_11;
        iVar2 = param_1;
      }
      if (param_2 != 0x23) break;
      param_11 = param_11 | 4;
      iVar2 = param_1;
    }
    if (param_2 != 0x30) break;
    param_11 = param_11 | 8;
    iVar2 = param_1;
  }
  if (param_2 == 0x2a) {
    if ((int)*in_stack_00000220 < 0) {
      param_11 = param_11 | 1;
    }
    iVar10 = SPRINTF_OBJ_1C0(iVar2,(uint)*(byte *)(iVar2 + 2),0x23,(char)pcVar12,param_5,param_6,
                             param_7,param_8,param_9,param_10,0,in_stack_00000220 + 1,iVar2 + 2);
    return iVar10;
  }
  while (param_2 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (uint)*(byte *)(param_1 + 1);
    param_1 = param_1 + 1;
  }
  ppiVar15 = in_stack_00000220;
  in_stack_0000024c = param_1;
  if (param_2 == 0x2e) goto code_r0x80022504;
  goto SPRINTF_OBJ_280;
code_r0x80022504:
  param_2 = (uint)*(byte *)(param_1 + 1);
  iVar2 = param_1;
  if (param_2 == 0x2a) {
    param_12 = *in_stack_00000220;
    iVar10 = SPRINTF_OBJ_260(param_1,(uint)*(byte *)(param_1 + 2),0x23,(char)pcVar12,param_5,param_6
                             ,param_7,param_8,param_9,param_10,param_11,param_12);
    return iVar10;
  }
  while (in_stack_0000024c = iVar2 + 1, param_2 - 0x30 < 10) {
    param_12 = (int *)((int)param_12 * 10 + -0x30 + param_2);
    param_2 = (uint)*(byte *)(iVar2 + 2);
    iVar2 = in_stack_0000024c;
  }
  goto code_r0x8002259c;
}



int SPRINTF_OBJ_2A4(int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  int in_v1;
  undefined *puVar3;
  undefined uVar4;
  int *piVar5;
  int *piVar6;
  uchar *puVar7;
  byte bVar8;
  undefined uVar9;
  int in_a2;
  undefined uVar10;
  char *in_a3;
  uint uVar11;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  byte bVar12;
  uint in_stack_00000210;
  undefined2 uVar13;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar14;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int iVar15;
  int in_stack_0000024c;
  
code_r0x800225e0:
  uVar10 = SUB41(in_a3,0);
  bVar8 = (byte)param_2;
  uVar9 = (undefined)in_a2;
  uVar4 = (undefined)param_1;
  bVar12 = (byte)in_stack_00000210;
  uVar13 = (undefined2)(in_stack_00000210 >> 0x10);
  switch(in_v1) {
  case 0:
    iVar1 = SPRINTF_OBJ_2A4(param_1,(uint)*(byte *)(in_stack_0000024c + 1));
    return iVar1;
  default:
    goto SPRINTF_OBJ_758;
  case 0x17:
    *(byte *)((int)unaff_s1 + -1) = *(byte *)in_stack_00000220;
    iVar1 = SPRINTF_OBJ_770(uVar4,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            in_stack_00000210,in_stack_00000214);
    return iVar1;
  case 0x18:
  case 0x1d:
    piVar6 = *in_stack_00000220;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar6 = (int *)(int)(short)piVar6;
    }
    if ((int)piVar6 < 0) {
      iVar1 = SPRINTF_OBJ_388((int *)-(int)piVar6,bVar8,uVar9,uVar10,in_stack_00000010,
                              in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                              in_stack_00000020,in_stack_00000024,
                              CONCAT22(uVar13,CONCAT11((char)unaff_s6,bVar12)),in_stack_00000214,
                              in_stack_00000218);
      return iVar1;
    }
    if ((in_stack_00000210 & 2) != 0) {
      iVar1 = SPRINTF_OBJ_388(piVar6,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,CONCAT22(uVar13,CONCAT11((char)unaff_s5,bVar12)),
                              in_stack_00000214,in_stack_00000218);
      return iVar1;
    }
    break;
  case 0x1c:
    iVar1 = SPRINTF_OBJ_2EC(param_1,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            in_stack_00000210,in_stack_0000024c);
    return iVar1;
  case 0x20:
    iVar1 = SPRINTF_OBJ_2EC(param_1,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            in_stack_00000210,in_stack_0000024c);
    return iVar1;
  case 0x22:
    if ((in_stack_00000210 & 0x20) == 0) {
      **in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804(uVar4,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_00000214,
                              in_stack_00000218,in_stack_00000228,in_stack_0000022c,
                              in_stack_00000230,in_stack_00000234,in_stack_00000238,
                              in_stack_0000023c,in_stack_00000240,in_stack_00000244,
                              in_stack_0000024c);
      return iVar1;
    }
    *(short *)*in_stack_00000220 = (short)unaff_s2;
    iVar1 = SPRINTF_OBJ_804(uVar4,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            in_stack_00000210,in_stack_00000214,in_stack_00000218,in_stack_00000228,
                            in_stack_0000022c,in_stack_00000230,in_stack_00000234,in_stack_00000238,
                            in_stack_0000023c,in_stack_00000240,in_stack_00000244,in_stack_0000024c)
    ;
    return iVar1;
  case 0x23:
    ppiVar14 = in_stack_00000220 + 1;
    piVar6 = *in_stack_00000220;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    if ((in_stack_00000210 & 0x10) == 0) {
      if ((in_stack_00000210 & 8) != 0) {
        in_stack_00000218 = in_stack_00000214;
      }
      if (in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar11 = 0;
    for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 3)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = ((byte)piVar6 & 7) + 0x30;
      uVar11 = uVar11 + 1;
    }
    if ((((in_stack_00000210 & 4) != 0) && (uVar11 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar11 = uVar11 + 1;
    }
    if ((int)uVar11 < in_stack_00000218) {
      do {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < in_stack_00000218);
      iVar1 = SPRINTF_OBJ_770((byte)piVar6,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_00000214);
      return iVar1;
    }
    goto code_r0x80022aac;
  case 0x24:
    in_stack_00000218 = 8;
    in_stack_00000210 = in_stack_00000210 | 0x50;
  case 0xc:
    iVar1 = SPRINTF_OBJ_590(param_1,param_2,in_a2,"0123456789ABCDEF",in_stack_00000010,
                            in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                            in_stack_00000024,in_stack_00000210,in_stack_00000214,in_stack_00000218,
                            in_stack_00000220);
    return iVar1;
  case 0x27:
    ppiVar14 = in_stack_00000220 + 1;
    unaff_s1 = *in_stack_00000220;
    if ((in_stack_00000210 & 4) == 0) {
      if ((in_stack_00000210 & 0x10) == 0) {
        strlen((char *)unaff_s1);
        iVar1 = SPRINTF_OBJ_770((char)unaff_s1,(char)param_2,(char)in_a2,uVar10,in_stack_00000010,
                                in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                in_stack_00000020,in_stack_00000024,in_stack_00000210,
                                in_stack_00000214);
        return iVar1;
      }
      uVar4 = 0;
      piVar6 = unaff_s1;
      pvVar2 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
      uVar11 = (int)pvVar2 - (int)unaff_s1;
      if (pvVar2 == (void *)0x0) {
        iVar1 = SPRINTF_OBJ_770((char)piVar6,uVar4,(char)in_stack_00000218,(char)in_a3,
                                in_stack_00000010,in_stack_00000014,in_stack_00000018,
                                in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                                in_stack_00000210,in_stack_00000214);
        return iVar1;
      }
    }
    else {
      uVar11 = (uint)*(byte *)unaff_s1;
      unaff_s1 = (int *)((int)unaff_s1 + 1);
      if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar11)) {
        iVar1 = SPRINTF_OBJ_770(uVar4,bVar8,uVar9,uVar10,in_stack_00000010,in_stack_00000014,
                                in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                in_stack_00000024,in_stack_00000210,in_stack_00000214);
        return iVar1;
      }
    }
    goto code_r0x80022aac;
  case 0x29:
    piVar6 = *in_stack_00000220;
    uVar11 = in_stack_00000210 & 0x20;
    in_stack_00000210 = CONCAT22(uVar13,(ushort)bVar12);
    if (uVar11 != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    break;
  case 0x2c:
    in_a3 = "0123456789abcdef";
    ppiVar14 = in_stack_00000220 + 1;
    piVar6 = *in_stack_00000220;
    if ((in_stack_00000210 & 0x20) != 0) {
      piVar6 = (int *)((uint)piVar6 & 0xffff);
    }
    if ((in_stack_00000210 & 0x10) == 0) {
      if (((in_stack_00000210 & 8) != 0) &&
         (in_a2 = in_stack_00000214, in_stack_00000218 = in_stack_00000214,
         (in_stack_00000210 & 4) != 0)) {
        in_stack_00000218 = in_stack_00000214 + -2;
      }
      if (in_stack_00000218 < 1) {
        in_stack_00000218 = 1;
      }
    }
    uVar11 = 0;
    for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 4)) {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar11 = uVar11 + 1;
      *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar6 & 0xf];
    }
    if ((int)uVar11 < in_stack_00000218) {
      do {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < in_stack_00000218);
    }
    if ((in_stack_00000210 & 4) != 0) {
      *(byte *)((int)unaff_s1 + -1) = bVar8;
      *(byte *)((int)unaff_s1 + -2) = 0x30;
      iVar1 = SPRINTF_OBJ_770(0,bVar8,(char)in_a2,0x90,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_00000214);
      return iVar1;
    }
    goto code_r0x80022aac;
  }
  ppiVar14 = in_stack_00000220 + 1;
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_stack_00000218 = in_stack_00000214, (char)(in_stack_00000210 >> 8) != '\0')) {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar11 = 0;
  if (piVar6 != (int *)0x0) {
    param_2 = 0xcccccccd;
    piVar5 = piVar6;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar11 = uVar11 + 1;
      piVar6 = (int *)((uint)piVar5 / 10);
      *(byte *)unaff_s1 = (char)piVar5 + (char)piVar6 * -10 + 0x30;
      piVar5 = piVar6;
    } while (piVar6 != (int *)0x0);
  }
  if ((int)uVar11 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < in_stack_00000218);
  }
  bVar8 = (byte)(in_stack_00000210 >> 8);
  if (bVar8 != 0) {
    *(byte *)((int)unaff_s1 + -1) = bVar8;
    iVar1 = SPRINTF_OBJ_770((char)piVar6,(char)param_2,uVar9,uVar10,in_stack_00000010,
                            in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                            in_stack_00000024,in_stack_00000210,in_stack_00000214);
    return iVar1;
  }
code_r0x80022aac:
  puVar7 = (uchar *)(unaff_s3 + unaff_s2);
  if (((int)uVar11 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
    puVar3 = (undefined *)(unaff_s2 + unaff_s3);
    do {
      *puVar3 = (char)unaff_s4;
      puVar3 = puVar3 + 1;
      in_stack_00000214 = in_stack_00000214 + -1;
      unaff_s2 = unaff_s2 + 1;
    } while ((int)uVar11 < in_stack_00000214);
    puVar7 = (uchar *)(unaff_s3 + unaff_s2);
  }
  memmove(puVar7,(uchar *)unaff_s1,uVar11);
  unaff_s2 = unaff_s2 + uVar11;
  if (in_stack_00000214 <= (int)uVar11) goto code_r0x80022b40;
  puVar3 = (undefined *)(unaff_s2 + unaff_s3);
  do {
    *puVar3 = (char)unaff_s4;
    puVar3 = puVar3 + 1;
    uVar11 = uVar11 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (in_stack_00000214 <= (int)uVar11) goto code_r0x80022b40;
  } while( true );
SPRINTF_OBJ_758:
  ppiVar14 = in_stack_00000220;
  if (param_2 != 0x25) {
SPRINTF_OBJ_824:
    *(undefined *)(unaff_s3 + unaff_s2) = 0;
    return unaff_s2;
  }
  do {
    *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
    unaff_s2 = unaff_s2 + 1;
code_r0x80022b40:
    param_1 = in_stack_0000024c + 1;
    param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
    if (param_2 == 0) goto SPRINTF_OBJ_824;
    in_stack_0000024c = param_1;
  } while (param_2 != 0x25);
  in_stack_00000210 = 0;
  in_stack_00000214 = 0;
  in_stack_00000218 = 0;
  in_a2 = 0x23;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar1 = param_1 + 1;
            param_2 = (uint)*(byte *)(param_1 + 1);
            if (param_2 != unaff_s6) break;
            in_stack_00000210 = in_stack_00000210 | 1;
            param_1 = iVar1;
          }
          if (param_2 != unaff_s5) break;
          in_stack_00000210 = in_stack_00000210 | 2;
          param_1 = iVar1;
        }
        if (param_2 != unaff_s4) break;
        in_stack_00000210 = (uint)CONCAT11(*(byte *)(param_1 + 1),(char)in_stack_00000210);
        param_1 = iVar1;
      }
      if (param_2 != 0x23) break;
      in_stack_00000210 = in_stack_00000210 | 4;
      param_1 = iVar1;
    }
    if (param_2 != 0x30) break;
    in_stack_00000210 = in_stack_00000210 | 8;
    param_1 = iVar1;
  }
  if (param_2 == 0x2a) {
    iVar1 = SPRINTF_OBJ_1C0(param_1,(uint)*(byte *)(param_1 + 2),0x23,(char)in_a3,in_stack_00000010,
                            in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                            in_stack_00000024,0,ppiVar14 + 1,param_1 + 2);
    return iVar1;
  }
  while (param_2 - 0x30 < 10) {
    in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
    param_2 = (uint)*(byte *)(iVar1 + 1);
    iVar1 = iVar1 + 1;
  }
  in_stack_0000024c = iVar1;
  if (param_2 == 0x2e) {
    param_2 = (uint)*(byte *)(iVar1 + 1);
    iVar15 = iVar1;
    if (param_2 == 0x2a) {
      iVar1 = SPRINTF_OBJ_260(iVar1,(uint)*(byte *)(iVar1 + 2),0x23,(char)in_a3,in_stack_00000010,
                              in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                              in_stack_00000020,in_stack_00000024,in_stack_00000210,*ppiVar14);
      return iVar1;
    }
    while (in_stack_0000024c = iVar15 + 1, param_2 - 0x30 < 10) {
      in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar15 + 2);
      iVar15 = in_stack_0000024c;
    }
    param_1 = iVar1;
    if (-1 < in_stack_00000218) {
      in_stack_00000210 = in_stack_00000210 | 0x10;
    }
  }
  unaff_s1 = (int *)&stack0x00000210;
  if ((in_stack_00000210 & 1) != 0) {
    in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
  }
  in_v1 = param_2 - 0x4c;
  in_stack_00000220 = ppiVar14;
  goto code_r0x800225e0;
}



void SPRINTF_OBJ_2C8(int param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,undefined4 param_11)

{
  undefined4 in_stack_0000024c;
  
  SPRINTF_OBJ_2EC(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,in_stack_0000024c);
  return;
}



void SPRINTF_OBJ_2D4(int param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,undefined4 param_11)

{
  undefined4 in_stack_0000024c;
  
  SPRINTF_OBJ_2EC(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,in_stack_0000024c);
  return;
}



void SPRINTF_OBJ_2E0(int param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,undefined4 param_11)

{
  int in_stack_0000024c;
  
  SPRINTF_OBJ_2A4(param_1,(uint)*(byte *)(in_stack_0000024c + 1));
  return;
}



void SPRINTF_OBJ_2EC(int param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,undefined4 param_11,int param_12)

{
  SPRINTF_OBJ_2A4(param_1,(uint)*(byte *)(param_12 + 1));
  return;
}



// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_30C(undefined param_1,byte param_2,byte param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int **param_12)

{
  int **ppiVar1;
  int iVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uchar *puVar9;
  byte bVar10;
  undefined uVar11;
  undefined uVar13;
  char *pcVar14;
  uint uVar15;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000214;
  uint in_stack_00000218;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  uint uVar12;
  
  pcVar14 = (char *)(uint)param_4;
  uVar12 = (uint)param_3;
  uVar15 = (uint)param_2;
code_r0x80022648:
  ppiVar1 = param_12 + 1;
  piVar7 = *param_12;
  if ((param_11 & 0x20) != 0) {
    piVar7 = (int *)(int)(short)piVar7;
  }
  param_12 = ppiVar1;
  if ((int)piVar7 < 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
    iVar2 = SPRINTF_OBJ_388((int *)-(int)piVar7,(char)uVar15,(char)uVar12,(char)pcVar14,param_5,
                            param_6,param_7,param_8,param_9,param_10,param_11,in_stack_00000214,
                            in_stack_00000218);
    return iVar2;
  }
  if ((param_11 & 2) != 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
    iVar2 = SPRINTF_OBJ_388(piVar7,(char)uVar15,(char)uVar12,(char)pcVar14,param_5,param_6,param_7,
                            param_8,param_9,param_10,param_11,in_stack_00000214,in_stack_00000218);
    return iVar2;
  }
code_r0x800226c4:
  uVar13 = (undefined)uVar15;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, param_11._1_1_ != '\0')) {
      in_stack_00000218 = in_stack_00000214 - 1;
    }
    if ((int)in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar15 = 0;
  if (piVar7 != (int *)0x0) {
    uVar13 = 0xcd;
    piVar8 = piVar7;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar15 = uVar15 + 1;
      piVar7 = (int *)((uint)piVar8 / 10);
      *(byte *)unaff_s1 = (char)piVar8 + (char)piVar7 * -10 + 0x30;
      piVar8 = piVar7;
    } while (piVar7 != (int *)0x0);
  }
  if ((int)uVar15 < (int)in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)in_stack_00000218);
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar2 = SPRINTF_OBJ_770((char)piVar7,uVar13,(char)uVar12,(char)pcVar14,param_5,param_6,param_7,
                            param_8,param_9,param_10,param_11,in_stack_00000214);
    return iVar2;
  }
code_r0x80022aac:
  do {
    puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar15 < (int)in_stack_00000214) && ((param_11 & 1) == 0)) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        in_stack_00000214 = in_stack_00000214 - 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar15 < (int)in_stack_00000214);
      puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar9,(uchar *)unaff_s1,uVar15);
    ppiVar1 = param_12;
    uVar13 = SUB41(pcVar14,0);
    unaff_s2 = unaff_s2 + uVar15;
    iVar2 = in_stack_0000024c;
    if ((int)uVar15 < (int)in_stack_00000214) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        uVar15 = uVar15 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar15 < (int)in_stack_00000214);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar2 + 1;
    uVar15 = (uint)*(byte *)(iVar2 + 1);
    if (uVar15 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar15 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar15;
      unaff_s2 = unaff_s2 + 1;
      iVar2 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    uVar12 = 0x23;
    uVar11 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar2 = in_stack_0000024c + 1;
              uVar15 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar15 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar2;
            }
            if (uVar15 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar2;
          }
          if (uVar15 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar2;
        }
        if (uVar15 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar2;
      }
      if (uVar15 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar2;
    }
    if (uVar15 == 0x2a) {
      ppiVar1 = param_12 + 1;
      if ((int)*param_12 < 0) {
        param_11 = param_11 | 1;
      }
      param_12 = ppiVar1;
      iVar2 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar13,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar1,
                              in_stack_0000024c + 2);
      return iVar2;
    }
    while (uVar15 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar15;
      uVar15 = (uint)*(byte *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    }
    iVar6 = in_stack_0000024c;
    in_stack_0000024c = iVar2;
    if (uVar15 == 0x2e) {
      uVar15 = (uint)*(byte *)(iVar2 + 1);
      iVar6 = iVar2;
      if (uVar15 == 0x2a) {
        piVar7 = *param_12;
        param_12 = param_12 + 1;
        iVar2 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),0x23,uVar13,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,piVar7);
        return iVar2;
      }
      while (in_stack_0000024c = iVar6 + 1, uVar15 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar15;
        uVar15 = (uint)*(byte *)(iVar6 + 2);
        iVar6 = in_stack_0000024c;
      }
      iVar6 = iVar2;
      if (-1 < (int)in_stack_00000218) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar10 = (byte)uVar15;
    uVar5 = (undefined)iVar6;
    switch(uVar15) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar2 = SPRINTF_OBJ_2A4(iVar6,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (uVar15 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      param_12 = param_12 + 1;
      iVar2 = SPRINTF_OBJ_770(uVar5,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_00000214);
      return iVar2;
    case 100:
    case 0x69:
      goto code_r0x80022648;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6e:
      **param_12 = unaff_s2;
      param_12 = param_12 + 1;
      iVar2 = SPRINTF_OBJ_804(uVar5,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_00000214,in_stack_00000218,
                              in_stack_00000228,in_stack_0000022c,in_stack_00000230,
                              in_stack_00000234,in_stack_00000238,in_stack_0000023c,
                              in_stack_00000240,in_stack_00000244,in_stack_0000024c);
      return iVar2;
    case 0x6f:
      goto SPRINTF_OBJ_474;
    case 0x70:
      in_stack_00000218 = 8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar2 = SPRINTF_OBJ_590(iVar6,uVar15,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,in_stack_00000214,in_stack_00000218,param_12
                             );
      return iVar2;
    case 0x73:
      ppiVar1 = param_12 + 1;
      unaff_s1 = *param_12;
      param_12 = ppiVar1;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar2 = SPRINTF_OBJ_770((char)unaff_s1,(char)uVar15,uVar11,uVar13,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,in_stack_00000214);
          return iVar2;
        }
        uVar13 = 0;
        piVar7 = unaff_s1;
        pvVar3 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
        uVar15 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_770((char)piVar7,uVar13,(char)in_stack_00000218,(char)pcVar14,param_5,
                                  param_6,param_7,param_8,param_9,param_10,param_11,
                                  in_stack_00000214);
          return iVar2;
        }
      }
      else {
        uVar15 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        if (((param_11 & 0x10) != 0) && ((int)in_stack_00000218 < (int)uVar15)) {
          iVar2 = SPRINTF_OBJ_770(uVar5,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,in_stack_00000214);
          return iVar2;
        }
      }
      break;
    case 0x75:
      piVar7 = *param_12;
      param_11 = param_11 & 0xff;
      param_12 = param_12 + 1;
      goto code_r0x800226c4;
    case 0x78:
      pcVar14 = "0123456789abcdef";
      ppiVar1 = param_12 + 1;
      piVar7 = *param_12;
      if ((param_11 & 0x10) == 0) {
        if (((param_11 & 8) != 0) &&
           (uVar12 = in_stack_00000214, in_stack_00000218 = in_stack_00000214, (param_11 & 4) != 0))
        {
          in_stack_00000218 = in_stack_00000214 - 2;
        }
        uVar11 = (undefined)uVar12;
        if ((int)in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar15 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar15 = uVar15 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar7 & 0xf];
      }
      for (; (int)uVar15 < (int)in_stack_00000218; uVar15 = uVar15 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
      }
      param_12 = ppiVar1;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar10;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar2 = SPRINTF_OBJ_770(0,bVar10,uVar11,0x90,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,in_stack_00000214);
        return iVar2;
      }
    }
  } while( true );
SPRINTF_OBJ_474:
  param_12 = param_12 + 1;
  piVar7 = *ppiVar1;
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 8) != 0) {
      in_stack_00000218 = in_stack_00000214;
    }
    if ((int)in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar15 = 0;
  for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = ((byte)piVar7 & 7) + 0x30;
    uVar15 = uVar15 + 1;
  }
  if ((((param_11 & 4) != 0) && (uVar15 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
    uVar15 = uVar15 + 1;
  }
  if ((int)uVar15 < (int)in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)in_stack_00000218);
    iVar2 = SPRINTF_OBJ_770((byte)piVar7,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,in_stack_00000214);
    return iVar2;
  }
  goto code_r0x80022aac;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_35C(undefined param_1,byte param_2,byte param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int **param_12)

{
  int **ppiVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uchar *puVar10;
  byte bVar11;
  undefined uVar12;
  undefined uVar14;
  char *pcVar15;
  uint uVar16;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000214;
  uint in_stack_00000218;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  uint uVar13;
  
  pcVar15 = (char *)(uint)param_4;
  uVar13 = (uint)param_3;
  uVar16 = (uint)param_2;
code_r0x80022698:
  ppiVar1 = param_12 + 1;
  piVar8 = *param_12;
  uVar2 = param_11 & 0x20;
  param_11._0_2_ = (ushort)(byte)param_11;
  param_12 = ppiVar1;
  if (uVar2 != 0) {
    piVar8 = (int *)((uint)piVar8 & 0xffff);
  }
code_r0x800226c4:
  uVar14 = (undefined)uVar16;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, param_11._1_1_ != '\0')) {
      in_stack_00000218 = in_stack_00000214 - 1;
    }
    if ((int)in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar16 = 0;
  if (piVar8 != (int *)0x0) {
    uVar14 = 0xcd;
    piVar9 = piVar8;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar16 = uVar16 + 1;
      piVar8 = (int *)((uint)piVar9 / 10);
      *(byte *)unaff_s1 = (char)piVar9 + (char)piVar8 * -10 + 0x30;
      piVar9 = piVar8;
    } while (piVar8 != (int *)0x0);
  }
  if ((int)uVar16 < (int)in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)in_stack_00000218);
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar3 = SPRINTF_OBJ_770((char)piVar8,uVar14,(char)uVar13,(char)pcVar15,param_5,param_6,param_7,
                            param_8,param_9,param_10,param_11,in_stack_00000214);
    return iVar3;
  }
code_r0x80022aac:
  do {
    puVar10 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar16 < (int)in_stack_00000214) && ((param_11 & 1) == 0)) {
      puVar5 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar5 = (char)unaff_s4;
        puVar5 = puVar5 + 1;
        in_stack_00000214 = in_stack_00000214 - 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)in_stack_00000214);
      puVar10 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar10,(uchar *)unaff_s1,uVar16);
    ppiVar1 = param_12;
    uVar14 = SUB41(pcVar15,0);
    unaff_s2 = unaff_s2 + uVar16;
    iVar3 = in_stack_0000024c;
    if ((int)uVar16 < (int)in_stack_00000214) {
      puVar5 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar5 = (char)unaff_s4;
        puVar5 = puVar5 + 1;
        uVar16 = uVar16 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)in_stack_00000214);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar3 + 1;
    uVar16 = (uint)*(byte *)(iVar3 + 1);
    if (uVar16 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar16 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar16;
      unaff_s2 = unaff_s2 + 1;
      iVar3 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    uVar13 = 0x23;
    uVar12 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar3 = in_stack_0000024c + 1;
              uVar16 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar16 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar3;
            }
            if (uVar16 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar3;
          }
          if (uVar16 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(byte)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar3;
        }
        if (uVar16 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar3;
      }
      if (uVar16 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar3;
    }
    if (uVar16 == 0x2a) {
      ppiVar1 = param_12 + 1;
      if ((int)*param_12 < 0) {
        param_11 = param_11 | 1;
      }
      param_12 = ppiVar1;
      iVar3 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar14,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar1,
                              in_stack_0000024c + 2);
      return iVar3;
    }
    while (uVar16 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar16;
      uVar16 = (uint)*(byte *)(iVar3 + 1);
      iVar3 = iVar3 + 1;
    }
    iVar7 = in_stack_0000024c;
    in_stack_0000024c = iVar3;
    if (uVar16 == 0x2e) {
      uVar16 = (uint)*(byte *)(iVar3 + 1);
      iVar7 = iVar3;
      if (uVar16 == 0x2a) {
        piVar8 = *param_12;
        param_12 = param_12 + 1;
        iVar3 = SPRINTF_OBJ_260(iVar3,(uint)*(byte *)(iVar3 + 2),0x23,uVar14,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,piVar8);
        return iVar3;
      }
      while (in_stack_0000024c = iVar7 + 1, uVar16 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + uVar16;
        uVar16 = (uint)*(byte *)(iVar7 + 2);
        iVar7 = in_stack_0000024c;
      }
      iVar7 = iVar3;
      if (-1 < (int)in_stack_00000218) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar11 = (byte)uVar16;
    uVar6 = (undefined)iVar7;
    switch(uVar16) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar3 = SPRINTF_OBJ_2A4(iVar7,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar3;
    default:
      if (uVar16 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      param_12 = param_12 + 1;
      iVar3 = SPRINTF_OBJ_770(uVar6,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_00000214);
      return iVar3;
    case 100:
    case 0x69:
      ppiVar1 = param_12 + 1;
      piVar8 = *param_12;
      param_12 = ppiVar1;
      if ((int)piVar8 < 0) {
        param_11._0_2_ = CONCAT11((char)unaff_s6,(byte)param_11);
        param_11 = (uint)(ushort)param_11;
        iVar3 = SPRINTF_OBJ_388((int *)-(int)piVar8,bVar11,0x23,uVar14,param_5,param_6,param_7,
                                param_8,param_9,param_10,param_11,in_stack_00000214,
                                in_stack_00000218);
        return iVar3;
      }
      if ((param_11 & 2) != 0) {
        param_11._0_2_ = CONCAT11((char)unaff_s5,(byte)param_11);
        param_11 = (uint)(ushort)param_11;
        iVar3 = SPRINTF_OBJ_388(piVar8,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,in_stack_00000214,in_stack_00000218);
        return iVar3;
      }
      goto code_r0x800226c4;
    case 0x68:
      iVar3 = SPRINTF_OBJ_2EC(iVar7,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar3;
    case 0x6c:
      iVar3 = SPRINTF_OBJ_2EC(iVar7,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar3;
    case 0x6e:
      **param_12 = unaff_s2;
      param_12 = param_12 + 1;
      iVar3 = SPRINTF_OBJ_804(uVar6,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_00000214,in_stack_00000218,
                              in_stack_00000228,in_stack_0000022c,in_stack_00000230,
                              in_stack_00000234,in_stack_00000238,in_stack_0000023c,
                              in_stack_00000240,in_stack_00000244,in_stack_0000024c);
      return iVar3;
    case 0x6f:
      goto SPRINTF_OBJ_474;
    case 0x70:
      in_stack_00000218 = 8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar3 = SPRINTF_OBJ_590(iVar7,uVar16,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,in_stack_00000214,in_stack_00000218,param_12
                             );
      return iVar3;
    case 0x73:
      ppiVar1 = param_12 + 1;
      unaff_s1 = *param_12;
      param_12 = ppiVar1;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar3 = SPRINTF_OBJ_770((char)unaff_s1,(char)uVar16,uVar12,uVar14,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,in_stack_00000214);
          return iVar3;
        }
        uVar14 = 0;
        piVar8 = unaff_s1;
        pvVar4 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
        uVar16 = (int)pvVar4 - (int)unaff_s1;
        if (pvVar4 == (void *)0x0) {
          iVar3 = SPRINTF_OBJ_770((char)piVar8,uVar14,(char)in_stack_00000218,(char)pcVar15,param_5,
                                  param_6,param_7,param_8,param_9,param_10,param_11,
                                  in_stack_00000214);
          return iVar3;
        }
      }
      else {
        uVar16 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        if (((param_11 & 0x10) != 0) && ((int)in_stack_00000218 < (int)uVar16)) {
          iVar3 = SPRINTF_OBJ_770(uVar6,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,in_stack_00000214);
          return iVar3;
        }
      }
      break;
    case 0x75:
      goto code_r0x80022698;
    case 0x78:
      pcVar15 = "0123456789abcdef";
      ppiVar1 = param_12 + 1;
      piVar8 = *param_12;
      if ((param_11 & 0x10) == 0) {
        if (((param_11 & 8) != 0) &&
           (uVar13 = in_stack_00000214, in_stack_00000218 = in_stack_00000214, (param_11 & 4) != 0))
        {
          in_stack_00000218 = in_stack_00000214 - 2;
        }
        uVar12 = (undefined)uVar13;
        if ((int)in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar16 = 0;
      for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar16 = uVar16 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar8 & 0xf];
      }
      for (; (int)uVar16 < (int)in_stack_00000218; uVar16 = uVar16 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
      }
      param_12 = ppiVar1;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar11;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar3 = SPRINTF_OBJ_770(0,bVar11,uVar12,0x90,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,in_stack_00000214);
        return iVar3;
      }
    }
  } while( true );
SPRINTF_OBJ_474:
  param_12 = param_12 + 1;
  piVar8 = *ppiVar1;
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 8) != 0) {
      in_stack_00000218 = in_stack_00000214;
    }
    if ((int)in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar16 = 0;
  for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 3)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = ((byte)piVar8 & 7) + 0x30;
    uVar16 = uVar16 + 1;
  }
  if ((((param_11 & 4) != 0) && (uVar16 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
    uVar16 = uVar16 + 1;
  }
  if ((int)uVar16 < (int)in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)in_stack_00000218);
    iVar3 = SPRINTF_OBJ_770((byte)piVar8,bVar11,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,in_stack_00000214);
    return iVar3;
  }
  goto code_r0x80022aac;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_388(int *param_1,byte param_2,byte param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int *param_12,int *param_13)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined uVar4;
  int iVar5;
  int *piVar6;
  uchar *puVar7;
  byte bVar8;
  undefined uVar9;
  undefined uVar11;
  char *pcVar12;
  uint uVar13;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int **in_stack_00000220;
  int **ppiVar14;
  int **ppiVar15;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  uint uVar10;
  
  pcVar12 = (char *)(uint)param_4;
  uVar10 = (uint)param_3;
  uVar13 = (uint)param_2;
code_r0x800226c4:
  uVar11 = (undefined)uVar13;
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 8) != 0) {
      param_13 = param_12;
      if (param_11._1_1_ != '\0') {
        param_13 = (int *)((int)param_12 - 1);
      }
    }
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar13 = 0;
  if (param_1 != (int *)0x0) {
    uVar11 = 0xcd;
    piVar6 = param_1;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar13 = uVar13 + 1;
      param_1 = (int *)((uint)piVar6 / 10);
      *(byte *)unaff_s1 = (char)piVar6 + (char)param_1 * -10 + 0x30;
      piVar6 = param_1;
    } while (param_1 != (int *)0x0);
  }
  if ((int)uVar13 < (int)param_13) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)param_13);
  }
  ppiVar15 = in_stack_00000220;
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar1 = SPRINTF_OBJ_770((char)param_1,uVar11,(char)uVar10,(char)pcVar12,param_5,param_6,param_7,
                            param_8,param_9,param_10,param_11,param_12);
    return iVar1;
  }
code_r0x80022aac:
  do {
    puVar7 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar13 < (int)param_12) && ((param_11 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        param_12 = (int *)((int)param_12 - 1);
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < (int)param_12);
      puVar7 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar7,(uchar *)unaff_s1,uVar13);
    uVar11 = SUB41(pcVar12,0);
    unaff_s2 = unaff_s2 + uVar13;
    iVar1 = in_stack_0000024c;
    if ((int)uVar13 < (int)param_12) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        uVar13 = uVar13 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < (int)param_12);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar1 + 1;
    uVar13 = (uint)*(byte *)(iVar1 + 1);
    if (uVar13 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar13 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar13;
      unaff_s2 = unaff_s2 + 1;
      iVar1 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    param_12 = (int *)0x0;
    param_13 = (int *)0x0;
    uVar10 = 0x23;
    uVar9 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = in_stack_0000024c + 1;
              uVar13 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar13 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar1;
            }
            if (uVar13 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar1;
          }
          if (uVar13 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar1;
        }
        if (uVar13 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar1;
      }
      if (uVar13 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar1;
    }
    if (uVar13 == 0x2a) {
      param_12 = *ppiVar15;
      if ((int)param_12 < 0) {
        param_12 = (int *)-(int)param_12;
        param_11 = param_11 | 1;
      }
      iVar1 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar11,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar15 + 1,
                              in_stack_0000024c + 2);
      return iVar1;
    }
    while (uVar13 - 0x30 < 10) {
      param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar13);
      uVar13 = (uint)*(byte *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar5 = in_stack_0000024c;
    in_stack_0000024c = iVar1;
    if (uVar13 == 0x2e) {
      uVar13 = (uint)*(byte *)(iVar1 + 1);
      iVar5 = iVar1;
      if (uVar13 == 0x2a) {
        param_13 = *ppiVar15;
        iVar1 = SPRINTF_OBJ_260(iVar1,(uint)*(byte *)(iVar1 + 2),0x23,uVar11,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,param_13);
        return iVar1;
      }
      while (in_stack_0000024c = iVar5 + 1, uVar13 - 0x30 < 10) {
        param_13 = (int *)((int)param_13 * 10 + -0x30 + uVar13);
        uVar13 = (uint)*(byte *)(iVar5 + 2);
        iVar5 = in_stack_0000024c;
      }
      iVar5 = iVar1;
      if (-1 < (int)param_13) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar8 = (byte)uVar13;
    uVar4 = (undefined)iVar5;
    switch(uVar13) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar1 = SPRINTF_OBJ_2A4(iVar5,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar1;
    default:
      if (uVar13 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar1 = SPRINTF_OBJ_770(uVar4,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12);
      return iVar1;
    case 100:
    case 0x69:
      in_stack_00000220 = ppiVar15 + 1;
      param_1 = *ppiVar15;
      if ((int)param_1 < 0) {
        param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
        param_11 = (uint)(ushort)param_11;
        iVar1 = SPRINTF_OBJ_388((int *)-(int)param_1,bVar8,0x23,uVar11,param_5,param_6,param_7,
                                param_8,param_9,param_10,param_11,param_12,param_13);
        return iVar1;
      }
      if ((param_11 & 2) != 0) {
        param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
        param_11 = (uint)(ushort)param_11;
        iVar1 = SPRINTF_OBJ_388(param_1,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_12,param_13);
        return iVar1;
      }
      goto code_r0x800226c4;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2EC(iVar5,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2EC(iVar5,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar1;
    case 0x6e:
      **ppiVar15 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804(uVar4,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12,param_13,in_stack_00000228,
                              in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                              in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                              in_stack_00000244,in_stack_0000024c);
      return iVar1;
    case 0x6f:
      goto SPRINTF_OBJ_474;
    case 0x70:
      param_13 = (int *)0x8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar1 = SPRINTF_OBJ_590(iVar5,uVar13,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,ppiVar15);
      return iVar1;
    case 0x73:
      ppiVar14 = ppiVar15 + 1;
      unaff_s1 = *ppiVar15;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar1 = SPRINTF_OBJ_770((char)unaff_s1,(char)uVar13,uVar9,uVar11,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,param_12);
          return iVar1;
        }
        uVar11 = 0;
        piVar6 = unaff_s1;
        uVar10 = (uint)param_13;
        pvVar2 = memchr((uchar *)unaff_s1,'\0',(int)param_13);
        uVar13 = (int)pvVar2 - (int)unaff_s1;
        ppiVar15 = ppiVar14;
        if (pvVar2 == (void *)0x0) {
          iVar1 = SPRINTF_OBJ_770((char)piVar6,uVar11,(char)uVar10,(char)pcVar12,param_5,param_6,
                                  param_7,param_8,param_9,param_10,param_11,param_12);
          return iVar1;
        }
      }
      else {
        uVar13 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        ppiVar15 = ppiVar14;
        if (((param_11 & 0x10) != 0) && ((int)param_13 < (int)uVar13)) {
          iVar1 = SPRINTF_OBJ_770(uVar4,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12);
          return iVar1;
        }
      }
      break;
    case 0x75:
      in_stack_00000220 = ppiVar15 + 1;
      param_1 = *ppiVar15;
      param_11 = param_11 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      pcVar12 = "0123456789abcdef";
      piVar6 = *ppiVar15;
      if ((param_11 & 0x10) == 0) {
        if (((param_11 & 8) != 0) &&
           (param_13 = param_12, uVar10 = (uint)param_12, (param_11 & 4) != 0)) {
          param_13 = (int *)((int)param_12 - 2);
        }
        uVar9 = (undefined)uVar10;
        if ((int)param_13 < 1) {
          param_13 = (int *)0x1;
        }
      }
      uVar13 = 0;
      for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar13 = uVar13 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar6 & 0xf];
      }
      for (; (int)uVar13 < (int)param_13; uVar13 = uVar13 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
      }
      ppiVar15 = ppiVar15 + 1;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar8;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar1 = SPRINTF_OBJ_770(0,bVar8,uVar9,0x90,param_5,param_6,param_7,param_8,param_9,param_10,
                                param_11,param_12);
        return iVar1;
      }
    }
  } while( true );
SPRINTF_OBJ_474:
  ppiVar14 = ppiVar15 + 1;
  piVar6 = *ppiVar15;
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 8) != 0) {
      param_13 = param_12;
    }
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar13 = 0;
  for (; piVar6 != (int *)0x0; piVar6 = (int *)((uint)piVar6 >> 3)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = ((byte)piVar6 & 7) + 0x30;
    uVar13 = uVar13 + 1;
  }
  if ((((param_11 & 4) != 0) && (uVar13 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
    uVar13 = uVar13 + 1;
  }
  ppiVar15 = ppiVar14;
  if ((int)uVar13 < (int)param_13) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)param_13);
    iVar1 = SPRINTF_OBJ_770((byte)piVar6,bVar8,0x23,uVar11,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12);
    return iVar1;
  }
  goto code_r0x80022aac;
}



// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x80022a84)
// WARNING: Removing unreachable block (ram,0x80022670)

int SPRINTF_OBJ_474(undefined param_1,byte param_2,byte param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int *param_12,int *param_13,int **param_14)

{
  int **ppiVar1;
  int iVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uchar *puVar9;
  byte bVar10;
  uint uVar11;
  undefined uVar12;
  undefined uVar14;
  char *pcVar15;
  uint uVar16;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  uint uVar13;
  
  pcVar15 = (char *)(uint)param_4;
  uVar13 = (uint)param_3;
  uVar11 = (uint)param_2;
code_r0x800227b0:
  ppiVar1 = param_14;
  param_14 = param_14 + 1;
  piVar8 = *ppiVar1;
  if ((param_11 & 0x20) != 0) {
    piVar8 = (int *)((uint)piVar8 & 0xffff);
  }
  if ((param_11 & 0x10) == 0) {
    if ((param_11 & 8) != 0) {
      param_13 = param_12;
    }
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar16 = 0;
  for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 3)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = ((byte)piVar8 & 7) + 0x30;
    uVar16 = uVar16 + 1;
  }
  if ((((param_11 & 4) != 0) && (uVar16 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
    uVar16 = uVar16 + 1;
  }
  if ((int)uVar16 < (int)param_13) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)param_13);
    iVar2 = SPRINTF_OBJ_770((byte)piVar8,(char)uVar11,(char)uVar13,(char)pcVar15,param_5,param_6,
                            param_7,param_8,param_9,param_10,param_11,param_12);
    return iVar2;
  }
code_r0x80022aac:
  do {
    puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar16 < (int)param_12) && ((param_11 & 1) == 0)) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        param_12 = (int *)((int)param_12 - 1);
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)param_12);
      puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar9,(uchar *)unaff_s1,uVar16);
    uVar14 = SUB41(pcVar15,0);
    unaff_s2 = unaff_s2 + uVar16;
    iVar2 = in_stack_0000024c;
    if ((int)uVar16 < (int)param_12) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        uVar16 = uVar16 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)param_12);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar2 + 1;
    uVar11 = (uint)*(byte *)(iVar2 + 1);
    if (uVar11 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar11 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar11;
      unaff_s2 = unaff_s2 + 1;
      iVar2 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    param_12 = (int *)0x0;
    param_13 = (int *)0x0;
    uVar13 = 0x23;
    uVar12 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar2 = in_stack_0000024c + 1;
              uVar11 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar11 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar2;
            }
            if (uVar11 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar2;
          }
          if (uVar11 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar2;
        }
        if (uVar11 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar2;
      }
      if (uVar11 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar2;
    }
    if (uVar11 == 0x2a) {
      ppiVar1 = param_14 + 1;
      param_12 = *param_14;
      if ((int)param_12 < 0) {
        param_12 = (int *)-(int)param_12;
        param_11 = param_11 | 1;
      }
      param_14 = ppiVar1;
      iVar2 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar14,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar1,
                              in_stack_0000024c + 2);
      return iVar2;
    }
    while (uVar11 - 0x30 < 10) {
      param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar11);
      uVar11 = (uint)*(byte *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    }
    iVar6 = in_stack_0000024c;
    in_stack_0000024c = iVar2;
    if (uVar11 == 0x2e) {
      uVar11 = (uint)*(byte *)(iVar2 + 1);
      iVar6 = iVar2;
      if (uVar11 == 0x2a) {
        param_13 = *param_14;
        param_14 = param_14 + 1;
        iVar2 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),0x23,uVar14,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,param_13);
        return iVar2;
      }
      while (in_stack_0000024c = iVar6 + 1, uVar11 - 0x30 < 10) {
        param_13 = (int *)((int)param_13 * 10 + -0x30 + uVar11);
        uVar11 = (uint)*(byte *)(iVar6 + 2);
        iVar6 = in_stack_0000024c;
      }
      iVar6 = iVar2;
      if (-1 < (int)param_13) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar10 = (byte)uVar11;
    uVar5 = (undefined)iVar6;
    switch(uVar11) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar2 = SPRINTF_OBJ_2A4(iVar6,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (uVar11 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      param_14 = param_14 + 1;
      iVar2 = SPRINTF_OBJ_770(uVar5,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12);
      return iVar2;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6e:
      **param_14 = unaff_s2;
      param_14 = param_14 + 1;
      iVar2 = SPRINTF_OBJ_804(uVar5,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12,param_13,in_stack_00000228,
                              in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                              in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                              in_stack_00000244,in_stack_0000024c);
      return iVar2;
    case 0x6f:
      goto code_r0x800227b0;
    case 0x70:
      param_13 = (int *)0x8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar2 = SPRINTF_OBJ_590(iVar6,uVar11,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
      return iVar2;
    case 0x73:
      ppiVar1 = param_14 + 1;
      unaff_s1 = *param_14;
      param_14 = ppiVar1;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar2 = SPRINTF_OBJ_770((char)unaff_s1,(char)uVar11,uVar12,uVar14,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,param_12);
          return iVar2;
        }
        uVar14 = 0;
        piVar8 = unaff_s1;
        uVar13 = (uint)param_13;
        pvVar3 = memchr((uchar *)unaff_s1,'\0',(int)param_13);
        uVar16 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_770((char)piVar8,uVar14,(char)uVar13,(char)pcVar15,param_5,param_6,
                                  param_7,param_8,param_9,param_10,param_11,param_12);
          return iVar2;
        }
      }
      else {
        uVar16 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        if (((param_11 & 0x10) != 0) && ((int)param_13 < (int)uVar16)) {
          iVar2 = SPRINTF_OBJ_770(uVar5,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12);
          return iVar2;
        }
      }
      break;
    case 0x75:
      piVar8 = *param_14;
      param_11 = param_11 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      pcVar15 = "0123456789abcdef";
      ppiVar1 = param_14 + 1;
      piVar8 = *param_14;
      if ((param_11 & 0x10) == 0) {
        if (((param_11 & 8) != 0) &&
           (param_13 = param_12, uVar13 = (uint)param_12, (param_11 & 4) != 0)) {
          param_13 = (int *)((int)param_12 - 2);
        }
        uVar12 = (undefined)uVar13;
        if ((int)param_13 < 1) {
          param_13 = (int *)0x1;
        }
      }
      uVar16 = 0;
      for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        uVar16 = uVar16 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar8 & 0xf];
      }
      for (; (int)uVar16 < (int)param_13; uVar16 = uVar16 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
      }
      param_14 = ppiVar1;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar10;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar2 = SPRINTF_OBJ_770(0,bVar10,uVar12,0x90,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_12);
        return iVar2;
      }
    }
  } while( true );
SPRINTF_OBJ_30C:
  piVar8 = *param_14;
  if ((int)piVar8 < 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_14 = param_14 + 1;
    iVar2 = SPRINTF_OBJ_388((int *)-(int)piVar8,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,param_13);
    return iVar2;
  }
  if ((param_11 & 2) != 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_14 = param_14 + 1;
    iVar2 = SPRINTF_OBJ_388(piVar8,bVar10,0x23,uVar14,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,param_13);
    return iVar2;
  }
code_r0x800226c4:
  param_14 = param_14 + 1;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (param_13 = param_12, param_11._1_1_ != 0)) {
      param_13 = (int *)((int)param_12 - 1);
    }
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar16 = 0;
  if (piVar8 != (int *)0x0) {
    uVar11 = 0xcccccccd;
    piVar7 = piVar8;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar16 = uVar16 + 1;
      piVar8 = (int *)((uint)piVar7 / 10);
      *(byte *)unaff_s1 = (char)piVar7 + (char)piVar8 * -10 + 0x30;
      piVar7 = piVar8;
    } while (piVar8 != (int *)0x0);
  }
  for (; (int)uVar16 < (int)param_13; uVar16 = uVar16 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar2 = SPRINTF_OBJ_770((char)piVar8,(char)uVar11,0x23,uVar14,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12);
    return iVar2;
  }
  goto code_r0x80022aac;
}



void SPRINTF_OBJ_564(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,uint param_11,undefined4 param_12)

{
  undefined3 in_register_00000011;
  undefined3 in_register_00000015;
  undefined3 in_register_00000019;
  undefined4 in_stack_00000214;
  undefined4 in_stack_00000220;
  
  SPRINTF_OBJ_590(CONCAT31(in_register_00000011,param_1),CONCAT31(in_register_00000015,param_2),
                  CONCAT31(in_register_00000019,param_3),"0123456789ABCDEF",param_5,param_6,param_7,
                  param_8,param_9,param_10,param_11 | 0x50,in_stack_00000214,8,in_stack_00000220);
  return;
}



void SPRINTF_OBJ_578(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  undefined4 in_stack_00000210;
  undefined4 in_stack_00000214;
  undefined4 in_stack_00000218;
  undefined4 in_stack_00000220;
  
  SPRINTF_OBJ_590(param_1,param_2,param_3,"0123456789ABCDEF",in_stack_00000010,in_stack_00000014,
                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                  in_stack_00000210,in_stack_00000214,in_stack_00000218,in_stack_00000220);
  return;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_588(undefined4 param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uchar *puVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  int in_a2;
  char *pcVar12;
  uint uVar13;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  byte bVar14;
  uint in_stack_00000210;
  int in_stack_00000214;
  int in_stack_00000218;
  int **in_stack_00000220;
  int **ppiVar15;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  
code_r0x800228c4:
  uVar11 = (undefined)in_a2;
  pcVar12 = "0123456789abcdef";
  ppiVar15 = in_stack_00000220 + 1;
  piVar7 = *in_stack_00000220;
  if ((in_stack_00000210 & 0x20) != 0) {
    piVar7 = (int *)((uint)piVar7 & 0xffff);
  }
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) &&
       (in_a2 = in_stack_00000214, in_stack_00000218 = in_stack_00000214,
       (in_stack_00000210 & 4) != 0)) {
      in_stack_00000218 = in_stack_00000214 + -2;
    }
    uVar11 = (undefined)in_a2;
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar13 = 0;
  for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    uVar13 = uVar13 + 1;
    *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar7 & 0xf];
  }
  if ((int)uVar13 < in_stack_00000218) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < in_stack_00000218);
  }
  in_stack_00000220 = ppiVar15;
  if ((in_stack_00000210 & 4) != 0) {
    *(byte *)((int)unaff_s1 + -1) = (byte)param_2;
    *(byte *)((int)unaff_s1 + -2) = 0x30;
    iVar1 = SPRINTF_OBJ_770(0,(byte)param_2,uVar11,0x90,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            in_stack_00000210,in_stack_00000214);
    return iVar1;
  }
code_r0x80022aac:
  do {
    puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar13 < in_stack_00000214) && ((in_stack_00000210 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        in_stack_00000214 = in_stack_00000214 + -1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < in_stack_00000214);
      puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar8,(uchar *)unaff_s1,uVar13);
    uVar11 = SUB41(pcVar12,0);
    unaff_s2 = unaff_s2 + uVar13;
    iVar1 = in_stack_0000024c;
    if ((int)uVar13 < in_stack_00000214) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        uVar13 = uVar13 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < in_stack_00000214);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar1 + 1;
    param_2 = (uint)*(byte *)(iVar1 + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      unaff_s2 = unaff_s2 + 1;
      iVar1 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    in_stack_00000210 = 0;
    in_stack_00000214 = 0;
    in_stack_00000218 = 0;
    in_a2 = 0x23;
    uVar10 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = in_stack_0000024c + 1;
              param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (param_2 != unaff_s6) break;
              in_stack_00000210 = in_stack_00000210 | 1;
              in_stack_0000024c = iVar1;
            }
            if (param_2 != unaff_s5) break;
            in_stack_00000210 = in_stack_00000210 | 2;
            in_stack_0000024c = iVar1;
          }
          if (param_2 != unaff_s4) break;
          in_stack_00000210 =
               (uint)CONCAT11(*(byte *)(in_stack_0000024c + 1),(char)in_stack_00000210);
          in_stack_0000024c = iVar1;
        }
        if (param_2 != 0x23) break;
        in_stack_00000210 = in_stack_00000210 | 4;
        in_stack_0000024c = iVar1;
      }
      if (param_2 != 0x30) break;
      in_stack_00000210 = in_stack_00000210 | 8;
      in_stack_0000024c = iVar1;
    }
    if (param_2 == 0x2a) {
      iVar1 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar11,
                              in_stack_00000010,in_stack_00000014,in_stack_00000018,
                              in_stack_0000001c,in_stack_00000020,in_stack_00000024,0,
                              in_stack_00000220 + 1,in_stack_0000024c + 2);
      return iVar1;
    }
    while (param_2 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + param_2;
      param_2 = (uint)*(byte *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar5 = in_stack_0000024c;
    in_stack_0000024c = iVar1;
    if (param_2 == 0x2e) {
      param_2 = (uint)*(byte *)(iVar1 + 1);
      iVar5 = iVar1;
      if (param_2 == 0x2a) {
        iVar1 = SPRINTF_OBJ_260(iVar1,(uint)*(byte *)(iVar1 + 2),0x23,uVar11,in_stack_00000010,
                                in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                in_stack_00000020,in_stack_00000024,in_stack_00000210,
                                *in_stack_00000220);
        return iVar1;
      }
      while (in_stack_0000024c = iVar5 + 1, param_2 - 0x30 < 10) {
        in_stack_00000218 = in_stack_00000218 * 10 + -0x30 + param_2;
        param_2 = (uint)*(byte *)(iVar5 + 2);
        iVar5 = in_stack_0000024c;
      }
      iVar5 = iVar1;
      if (-1 < in_stack_00000218) {
        in_stack_00000210 = in_stack_00000210 | 0x10;
      }
    }
    unaff_s1 = (int *)&stack0x00000210;
    if ((in_stack_00000210 & 1) != 0) {
      in_stack_00000210 = in_stack_00000210 & 0xfffffff7;
    }
    uVar9 = (undefined)param_2;
    uVar4 = (undefined)iVar5;
    switch(param_2) {
    case 0x4c:
      iVar1 = SPRINTF_OBJ_2A4(iVar5,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar1;
    default:
      if (param_2 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar1 = SPRINTF_OBJ_770(uVar4,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_00000214);
      return iVar1;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar1 = SPRINTF_OBJ_2EC(iVar5,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_0000024c);
      return iVar1;
    case 0x6c:
      iVar1 = SPRINTF_OBJ_2EC(iVar5,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_0000024c);
      return iVar1;
    case 0x6e:
      **in_stack_00000220 = unaff_s2;
      iVar1 = SPRINTF_OBJ_804(uVar4,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                              in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                              in_stack_00000024,in_stack_00000210,in_stack_00000214,
                              in_stack_00000218,in_stack_00000228,in_stack_0000022c,
                              in_stack_00000230,in_stack_00000234,in_stack_00000238,
                              in_stack_0000023c,in_stack_00000240,in_stack_00000244,
                              in_stack_0000024c);
      return iVar1;
    case 0x6f:
      ppiVar15 = in_stack_00000220 + 1;
      piVar7 = *in_stack_00000220;
      if ((in_stack_00000210 & 0x10) == 0) {
        if ((in_stack_00000210 & 8) != 0) {
          in_stack_00000218 = in_stack_00000214;
        }
        if (in_stack_00000218 < 1) {
          in_stack_00000218 = 1;
        }
      }
      uVar13 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar7 & 7) + 0x30;
        uVar13 = uVar13 + 1;
      }
      if ((((in_stack_00000210 & 4) != 0) && (uVar13 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        uVar13 = uVar13 + 1;
      }
      in_stack_00000220 = ppiVar15;
      if ((int)uVar13 < in_stack_00000218) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < in_stack_00000218);
        iVar1 = SPRINTF_OBJ_770((byte)piVar7,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                in_stack_00000024,in_stack_00000210,in_stack_00000214);
        return iVar1;
      }
      break;
    case 0x70:
      in_stack_00000218 = 8;
      in_stack_00000210 = in_stack_00000210 | 0x50;
    case 0x58:
      iVar1 = SPRINTF_OBJ_590(iVar5,param_2,0x23,"0123456789ABCDEF",in_stack_00000010,
                              in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                              in_stack_00000020,in_stack_00000024,in_stack_00000210,
                              in_stack_00000214,in_stack_00000218,in_stack_00000220);
      return iVar1;
    case 0x73:
      ppiVar15 = in_stack_00000220 + 1;
      unaff_s1 = *in_stack_00000220;
      if ((in_stack_00000210 & 4) == 0) {
        if ((in_stack_00000210 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar1 = SPRINTF_OBJ_770((char)unaff_s1,(char)param_2,uVar10,uVar11,in_stack_00000010,
                                  in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                  in_stack_00000020,in_stack_00000024,in_stack_00000210,
                                  in_stack_00000214);
          return iVar1;
        }
        uVar11 = 0;
        piVar7 = unaff_s1;
        pvVar2 = memchr((uchar *)unaff_s1,'\0',in_stack_00000218);
        uVar13 = (int)pvVar2 - (int)unaff_s1;
        in_stack_00000220 = ppiVar15;
        if (pvVar2 == (void *)0x0) {
          iVar1 = SPRINTF_OBJ_770((char)piVar7,uVar11,(char)in_stack_00000218,(char)pcVar12,
                                  in_stack_00000010,in_stack_00000014,in_stack_00000018,
                                  in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                                  in_stack_00000210,in_stack_00000214);
          return iVar1;
        }
      }
      else {
        uVar13 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        in_stack_00000220 = ppiVar15;
        if (((in_stack_00000210 & 0x10) != 0) && (in_stack_00000218 < (int)uVar13)) {
          iVar1 = SPRINTF_OBJ_770(uVar4,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                  in_stack_00000024,in_stack_00000210,in_stack_00000214);
          return iVar1;
        }
      }
      break;
    case 0x75:
      piVar7 = *in_stack_00000220;
      in_stack_00000210 = in_stack_00000210 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      goto code_r0x800228c4;
    }
  } while( true );
SPRINTF_OBJ_30C:
  piVar7 = *in_stack_00000220;
  if ((int)piVar7 < 0) {
    iVar1 = SPRINTF_OBJ_388((int *)-(int)piVar7,uVar9,0x23,uVar11,in_stack_00000010,
                            in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                            in_stack_00000024,(uint)CONCAT11((char)unaff_s6,(char)in_stack_00000210)
                            ,in_stack_00000214,in_stack_00000218);
    return iVar1;
  }
  if ((in_stack_00000210 & 2) != 0) {
    iVar1 = SPRINTF_OBJ_388(piVar7,uVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                            in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                            (uint)CONCAT11((char)unaff_s5,(char)in_stack_00000210),in_stack_00000214
                            ,in_stack_00000218);
    return iVar1;
  }
code_r0x800226c4:
  bVar14 = (byte)(in_stack_00000210 >> 8);
  if ((in_stack_00000210 & 0x10) == 0) {
    if (((in_stack_00000210 & 8) != 0) && (in_stack_00000218 = in_stack_00000214, bVar14 != 0)) {
      in_stack_00000218 = in_stack_00000214 + -1;
    }
    if (in_stack_00000218 < 1) {
      in_stack_00000218 = 1;
    }
  }
  uVar13 = 0;
  if (piVar7 != (int *)0x0) {
    param_2 = 0xcccccccd;
    piVar6 = piVar7;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar13 = uVar13 + 1;
      piVar7 = (int *)((uint)piVar6 / 10);
      *(byte *)unaff_s1 = (char)piVar6 + (char)piVar7 * -10 + 0x30;
      piVar6 = piVar7;
    } while (piVar7 != (int *)0x0);
  }
  for (; (int)uVar13 < in_stack_00000218; uVar13 = uVar13 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if (bVar14 != 0) {
    *(byte *)((int)unaff_s1 + -1) = bVar14;
    iVar1 = SPRINTF_OBJ_770((char)piVar7,(char)param_2,0x23,uVar11,in_stack_00000010,
                            in_stack_00000014,in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                            in_stack_00000024,in_stack_00000210,in_stack_00000214);
    return iVar1;
  }
  goto code_r0x80022aac;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_590(undefined4 param_1,uint param_2,int param_3,char *param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int *param_12,int *param_13,int **param_14)

{
  int **ppiVar1;
  int iVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uchar *puVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  uint uVar13;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  
code_r0x800228cc:
  uVar12 = (undefined)param_3;
  piVar8 = *param_14;
  if ((param_11 & 0x20) != 0) {
    piVar8 = (int *)((uint)piVar8 & 0xffff);
  }
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (param_13 = param_12, param_3 = (int)param_12, (param_11 & 4) != 0)
       ) {
      param_13 = (int *)((int)param_12 + -2);
    }
    uVar12 = (undefined)param_3;
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar13 = 0;
  param_14 = param_14 + 1;
  for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 4)) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    uVar13 = uVar13 + 1;
    *(char *)unaff_s1 = param_4[(uint)piVar8 & 0xf];
  }
  if ((int)uVar13 < (int)param_13) {
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      *(byte *)unaff_s1 = 0x30;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)param_13);
  }
  if ((param_11 & 4) != 0) {
    *(byte *)((int)unaff_s1 + -1) = (byte)param_2;
    *(byte *)((int)unaff_s1 + -2) = 0x30;
    iVar2 = SPRINTF_OBJ_770(0,(byte)param_2,uVar12,(char)param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12);
    return iVar2;
  }
code_r0x80022aac:
  do {
    puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar13 < (int)param_12) && ((param_11 & 1) == 0)) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        param_12 = (int *)((int)param_12 + -1);
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < (int)param_12);
      puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar9,(uchar *)unaff_s1,uVar13);
    ppiVar1 = param_14;
    uVar12 = SUB41(param_4,0);
    unaff_s2 = unaff_s2 + uVar13;
    iVar2 = in_stack_0000024c;
    if ((int)uVar13 < (int)param_12) {
      puVar4 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar4 = (char)unaff_s4;
        puVar4 = puVar4 + 1;
        uVar13 = uVar13 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar13 < (int)param_12);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar2 + 1;
    param_2 = (uint)*(byte *)(iVar2 + 1);
    if (param_2 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (param_2 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      unaff_s2 = unaff_s2 + 1;
      iVar2 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    param_12 = (int *)0x0;
    param_13 = (int *)0x0;
    param_3 = 0x23;
    uVar11 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar2 = in_stack_0000024c + 1;
              param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (param_2 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar2;
            }
            if (param_2 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar2;
          }
          if (param_2 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar2;
        }
        if (param_2 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar2;
      }
      if (param_2 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar2;
    }
    if (param_2 == 0x2a) {
      ppiVar1 = param_14 + 1;
      param_12 = *param_14;
      if ((int)param_12 < 0) {
        param_12 = (int *)-(int)param_12;
        param_11 = param_11 | 1;
      }
      param_14 = ppiVar1;
      iVar2 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar12,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar1,
                              in_stack_0000024c + 2);
      return iVar2;
    }
    while (param_2 - 0x30 < 10) {
      param_12 = (int *)((int)param_12 * 10 + -0x30 + param_2);
      param_2 = (uint)*(byte *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    }
    iVar6 = in_stack_0000024c;
    in_stack_0000024c = iVar2;
    if (param_2 == 0x2e) {
      param_2 = (uint)*(byte *)(iVar2 + 1);
      iVar6 = iVar2;
      if (param_2 == 0x2a) {
        param_13 = *param_14;
        param_14 = param_14 + 1;
        iVar2 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),0x23,uVar12,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,param_13);
        return iVar2;
      }
      while (in_stack_0000024c = iVar6 + 1, param_2 - 0x30 < 10) {
        param_13 = (int *)((int)param_13 * 10 + -0x30 + param_2);
        param_2 = (uint)*(byte *)(iVar6 + 2);
        iVar6 = in_stack_0000024c;
      }
      iVar6 = iVar2;
      if (-1 < (int)param_13) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    uVar10 = (undefined)param_2;
    uVar5 = (undefined)iVar6;
    switch(param_2) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar2 = SPRINTF_OBJ_2A4(iVar6,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar2;
    default:
      if (param_2 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      param_14 = param_14 + 1;
      iVar2 = SPRINTF_OBJ_770(uVar5,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12);
      return iVar2;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6c:
      iVar2 = SPRINTF_OBJ_2EC(iVar6,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar2;
    case 0x6e:
      **param_14 = unaff_s2;
      param_14 = param_14 + 1;
      iVar2 = SPRINTF_OBJ_804(uVar5,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,param_12,param_13,in_stack_00000228,
                              in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                              in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                              in_stack_00000244,in_stack_0000024c);
      return iVar2;
    case 0x6f:
      param_14 = param_14 + 1;
      piVar8 = *ppiVar1;
      if ((param_11 & 0x10) == 0) {
        if ((param_11 & 8) != 0) {
          param_13 = param_12;
        }
        if ((int)param_13 < 1) {
          param_13 = (int *)0x1;
        }
      }
      uVar13 = 0;
      for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar8 & 7) + 0x30;
        uVar13 = uVar13 + 1;
      }
      if ((((param_11 & 4) != 0) && (uVar13 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        uVar13 = uVar13 + 1;
      }
      if ((int)uVar13 < (int)param_13) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)param_13);
        iVar2 = SPRINTF_OBJ_770((byte)piVar8,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,
                                param_9,param_10,param_11,param_12);
        return iVar2;
      }
      break;
    case 0x70:
      param_13 = (int *)0x8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar2 = SPRINTF_OBJ_590(iVar6,param_2,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
      return iVar2;
    case 0x73:
      ppiVar1 = param_14 + 1;
      unaff_s1 = *param_14;
      param_14 = ppiVar1;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar2 = SPRINTF_OBJ_770((char)unaff_s1,(char)param_2,uVar11,uVar12,param_5,param_6,param_7
                                  ,param_8,param_9,param_10,param_11,param_12);
          return iVar2;
        }
        uVar12 = 0;
        piVar8 = unaff_s1;
        iVar2 = (int)param_13;
        pvVar3 = memchr((uchar *)unaff_s1,'\0',(int)param_13);
        uVar13 = (int)pvVar3 - (int)unaff_s1;
        if (pvVar3 == (void *)0x0) {
          iVar2 = SPRINTF_OBJ_770((char)piVar8,uVar12,(char)iVar2,(char)param_4,param_5,param_6,
                                  param_7,param_8,param_9,param_10,param_11,param_12);
          return iVar2;
        }
      }
      else {
        uVar13 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        if (((param_11 & 0x10) != 0) && ((int)param_13 < (int)uVar13)) {
          iVar2 = SPRINTF_OBJ_770(uVar5,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12);
          return iVar2;
        }
      }
      break;
    case 0x75:
      piVar8 = *param_14;
      param_11 = param_11 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      param_4 = "0123456789abcdef";
      goto code_r0x800228cc;
    }
  } while( true );
SPRINTF_OBJ_30C:
  piVar8 = *param_14;
  if ((int)piVar8 < 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_14 = param_14 + 1;
    iVar2 = SPRINTF_OBJ_388((int *)-(int)piVar8,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,param_13);
    return iVar2;
  }
  if ((param_11 & 2) != 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_14 = param_14 + 1;
    iVar2 = SPRINTF_OBJ_388(piVar8,uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,param_13);
    return iVar2;
  }
code_r0x800226c4:
  param_14 = param_14 + 1;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (param_13 = param_12, param_11._1_1_ != 0)) {
      param_13 = (int *)((int)param_12 + -1);
    }
    if ((int)param_13 < 1) {
      param_13 = (int *)0x1;
    }
  }
  uVar13 = 0;
  if (piVar8 != (int *)0x0) {
    param_2 = 0xcccccccd;
    piVar7 = piVar8;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      uVar13 = uVar13 + 1;
      piVar8 = (int *)((uint)piVar7 / 10);
      *(byte *)unaff_s1 = (char)piVar7 + (char)piVar8 * -10 + 0x30;
      piVar7 = piVar8;
    } while (piVar8 != (int *)0x0);
  }
  for (; (int)uVar13 < (int)param_13; uVar13 = uVar13 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar2 = SPRINTF_OBJ_770((char)piVar8,(char)param_2,0x23,uVar12,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12);
    return iVar2;
  }
  goto code_r0x80022aac;
}



void SPRINTF_OBJ_680(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,undefined *param_11)

{
  int unaff_s1;
  undefined4 in_stack_00000210;
  undefined4 in_stack_00000214;
  
  *(undefined *)(unaff_s1 + -1) = *param_11;
  SPRINTF_OBJ_770(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  in_stack_00000210,in_stack_00000214);
  return;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_6A0(byte param_1,byte param_2,byte param_3,byte param_4,undefined param_5,
                   undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                   undefined param_10,uint param_11,int *param_12,int **param_13)

{
  uint uVar1;
  int **ppiVar2;
  int iVar3;
  void *pvVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uchar *puVar9;
  byte bVar10;
  undefined uVar11;
  uint uVar12;
  undefined uVar13;
  undefined uVar14;
  char *pcVar15;
  uint uVar16;
  int *piVar17;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint in_stack_00000214;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  uint in_stack_0000024c;
  
  pcVar15 = (char *)(uint)param_4;
  uVar16 = (uint)param_3;
  uVar12 = (uint)param_2;
  uVar8 = (uint)param_1;
code_r0x800229dc:
  uVar14 = SUB41(pcVar15,0);
  uVar13 = (undefined)uVar16;
  uVar11 = (undefined)uVar12;
  ppiVar2 = param_13 + 1;
  piVar17 = *param_13;
  param_13 = ppiVar2;
  if ((param_11 & 4) == 0) {
    if ((param_11 & 0x10) == 0) {
      strlen((char *)piVar17);
      iVar3 = SPRINTF_OBJ_770((char)piVar17,uVar11,uVar13,uVar14,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,in_stack_00000214);
      return iVar3;
    }
    uVar11 = 0;
    piVar7 = piVar17;
    uVar8 = (uint)param_12;
    pvVar4 = memchr((uchar *)piVar17,'\0',(int)param_12);
    uVar16 = (int)pvVar4 - (int)piVar17;
    if (pvVar4 == (void *)0x0) {
      iVar3 = SPRINTF_OBJ_770((char)piVar7,uVar11,(char)uVar8,(char)pcVar15,param_5,param_6,param_7,
                              param_8,param_9,param_10,param_11,in_stack_00000214);
      return iVar3;
    }
  }
  else {
    uVar16 = (uint)*(byte *)piVar17;
    piVar17 = (int *)((int)piVar17 + 1);
    if (((param_11 & 0x10) != 0) && ((int)param_12 < (int)uVar16)) {
      iVar3 = SPRINTF_OBJ_770((char)uVar8,uVar11,uVar13,uVar14,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,in_stack_00000214);
      return iVar3;
    }
  }
code_r0x80022aac:
  do {
    puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)uVar16 < (int)in_stack_00000214) && ((param_11 & 1) == 0)) {
      puVar5 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar5 = (char)unaff_s4;
        puVar5 = puVar5 + 1;
        in_stack_00000214 = in_stack_00000214 - 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)in_stack_00000214);
      puVar9 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar9,(uchar *)piVar17,uVar16);
    ppiVar2 = param_13;
    unaff_s2 = unaff_s2 + uVar16;
    uVar8 = in_stack_0000024c;
    if ((int)uVar16 < (int)in_stack_00000214) {
      puVar5 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar5 = (char)unaff_s4;
        puVar5 = puVar5 + 1;
        uVar16 = uVar16 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)uVar16 < (int)in_stack_00000214);
    }
code_r0x80022b40:
    in_stack_0000024c = uVar8 + 1;
    uVar12 = (uint)*(byte *)(uVar8 + 1);
    if (uVar12 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar12 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar12;
      unaff_s2 = unaff_s2 + 1;
      uVar8 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    in_stack_00000214 = 0;
    param_12 = (int *)0x0;
    uVar16 = 0x23;
    uVar11 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uVar1 = in_stack_0000024c + 1;
              uVar12 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar12 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = uVar1;
            }
            if (uVar12 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = uVar1;
          }
          if (uVar12 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = uVar1;
        }
        if (uVar12 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = uVar1;
      }
      if (uVar12 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = uVar1;
    }
    uVar13 = SUB41(pcVar15,0);
    if (uVar12 == 0x2a) {
      ppiVar2 = param_13 + 1;
      if ((int)*param_13 < 0) {
        param_11 = param_11 | 1;
      }
      param_13 = ppiVar2;
      iVar3 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar13,
                              param_5,param_6,param_7,param_8,param_9,param_10,0,ppiVar2,
                              in_stack_0000024c + 2);
      return iVar3;
    }
    while (uVar12 - 0x30 < 10) {
      in_stack_00000214 = in_stack_00000214 * 10 + -0x30 + uVar12;
      uVar12 = (uint)*(byte *)(uVar1 + 1);
      uVar1 = uVar1 + 1;
    }
    uVar8 = in_stack_0000024c;
    in_stack_0000024c = uVar1;
    if (uVar12 == 0x2e) {
      uVar12 = (uint)*(byte *)(uVar1 + 1);
      uVar8 = uVar1;
      if (uVar12 == 0x2a) {
        param_12 = *param_13;
        param_13 = param_13 + 1;
        iVar3 = SPRINTF_OBJ_260(uVar1,(uint)*(byte *)(uVar1 + 2),0x23,uVar13,param_5,param_6,param_7
                                ,param_8,param_9,param_10,param_11,param_12);
        return iVar3;
      }
      while (in_stack_0000024c = uVar8 + 1, uVar12 - 0x30 < 10) {
        param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar12);
        uVar12 = (uint)*(byte *)(uVar8 + 2);
        uVar8 = in_stack_0000024c;
      }
      uVar8 = uVar1;
      if (-1 < (int)param_12) {
        param_11 = param_11 | 0x10;
      }
    }
    piVar17 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar10 = (byte)uVar12;
    switch(uVar12) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar3 = SPRINTF_OBJ_2A4(uVar8,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar3;
    default:
      if (uVar12 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      param_13 = param_13 + 1;
      iVar3 = SPRINTF_OBJ_770((char)uVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9
                              ,param_10,param_11,in_stack_00000214);
      return iVar3;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar3 = SPRINTF_OBJ_2EC(uVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar3;
    case 0x6c:
      iVar3 = SPRINTF_OBJ_2EC(uVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                              param_10,param_11,in_stack_0000024c);
      return iVar3;
    case 0x6e:
      **param_13 = unaff_s2;
      param_13 = param_13 + 1;
      iVar3 = SPRINTF_OBJ_804((char)uVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9
                              ,param_10,param_11,in_stack_00000214,param_12,in_stack_00000228,
                              in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                              in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                              in_stack_00000244,in_stack_0000024c);
      return iVar3;
    case 0x6f:
      param_13 = param_13 + 1;
      piVar7 = *ppiVar2;
      if ((param_11 & 0x10) == 0) {
        if ((param_11 & 8) != 0) {
          param_12 = (int *)in_stack_00000214;
        }
        if ((int)param_12 < 1) {
          param_12 = (int *)0x1;
        }
      }
      uVar16 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
        piVar17 = (int *)((int)piVar17 + -1);
        *(byte *)piVar17 = ((byte)piVar7 & 7) + 0x30;
        uVar16 = uVar16 + 1;
      }
      if ((((param_11 & 4) != 0) && (uVar16 != 0)) && (*(byte *)piVar17 != 0x30)) {
        piVar17 = (int *)((int)piVar17 + -1);
        *(byte *)piVar17 = 0x30;
        uVar16 = uVar16 + 1;
      }
      if ((int)uVar16 < (int)param_12) {
        do {
          piVar17 = (int *)((int)piVar17 + -1);
          *(byte *)piVar17 = 0x30;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)param_12);
        iVar3 = SPRINTF_OBJ_770((byte)piVar7,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,
                                param_9,param_10,param_11,in_stack_00000214);
        return iVar3;
      }
      break;
    case 0x70:
      param_12 = (int *)0x8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar3 = SPRINTF_OBJ_590(uVar8,uVar12,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,in_stack_00000214,param_12,param_13);
      return iVar3;
    case 0x73:
      goto code_r0x800229dc;
    case 0x75:
      piVar7 = *param_13;
      param_11 = param_11 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      pcVar15 = "0123456789abcdef";
      ppiVar2 = param_13 + 1;
      piVar7 = *param_13;
      if ((param_11 & 0x10) == 0) {
        if (((param_11 & 8) != 0) &&
           (uVar16 = in_stack_00000214, param_12 = (int *)in_stack_00000214, (param_11 & 4) != 0)) {
          param_12 = (int *)(in_stack_00000214 - 2);
        }
        uVar11 = (undefined)uVar16;
        if ((int)param_12 < 1) {
          param_12 = (int *)0x1;
        }
      }
      uVar16 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
        piVar17 = (int *)((int)piVar17 + -1);
        uVar16 = uVar16 + 1;
        *(char *)piVar17 = "0123456789abcdef"[(uint)piVar7 & 0xf];
      }
      for (; (int)uVar16 < (int)param_12; uVar16 = uVar16 + 1) {
        piVar17 = (int *)((int)piVar17 + -1);
        *(byte *)piVar17 = 0x30;
      }
      param_13 = ppiVar2;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)piVar17 + -1) = bVar10;
        *(byte *)((int)piVar17 + -2) = 0x30;
        iVar3 = SPRINTF_OBJ_770(0,bVar10,uVar11,0x90,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,in_stack_00000214);
        return iVar3;
      }
    }
  } while( true );
SPRINTF_OBJ_30C:
  piVar7 = *param_13;
  if ((int)piVar7 < 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_13 = param_13 + 1;
    iVar3 = SPRINTF_OBJ_388((int *)-(int)piVar7,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,in_stack_00000214,param_12);
    return iVar3;
  }
  if ((param_11 & 2) != 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    param_13 = param_13 + 1;
    iVar3 = SPRINTF_OBJ_388(piVar7,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,in_stack_00000214,param_12);
    return iVar3;
  }
code_r0x800226c4:
  param_13 = param_13 + 1;
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (param_12 = (int *)in_stack_00000214, param_11._1_1_ != 0)) {
      param_12 = (int *)(in_stack_00000214 - 1);
    }
    if ((int)param_12 < 1) {
      param_12 = (int *)0x1;
    }
  }
  uVar16 = 0;
  if (piVar7 != (int *)0x0) {
    uVar12 = 0xcccccccd;
    piVar6 = piVar7;
    do {
      piVar17 = (int *)((int)piVar17 + -1);
      uVar16 = uVar16 + 1;
      piVar7 = (int *)((uint)piVar6 / 10);
      *(byte *)piVar17 = (char)piVar6 + (char)piVar7 * -10 + 0x30;
      piVar6 = piVar7;
    } while (piVar7 != (int *)0x0);
  }
  for (; (int)uVar16 < (int)param_12; uVar16 = uVar16 + 1) {
    piVar17 = (int *)((int)piVar17 + -1);
    *(byte *)piVar17 = 0x30;
  }
  if (param_11._1_1_ != 0) {
    *(byte *)((int)piVar17 + -1) = param_11._1_1_;
    iVar3 = SPRINTF_OBJ_770((char)piVar7,(char)uVar12,0x23,uVar13,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,in_stack_00000214);
    return iVar3;
  }
  goto code_r0x80022aac;
}



void SPRINTF_OBJ_724(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                    undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                    undefined param_9,undefined param_10,uint param_11,undefined4 *param_12)

{
  undefined4 unaff_s2;
  undefined4 in_stack_00000214;
  undefined4 in_stack_00000218;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  undefined4 in_stack_0000024c;
  
  if ((param_11 & 0x20) != 0) {
    *(short *)(undefined4 *)*param_12 = (short)unaff_s2;
    SPRINTF_OBJ_804(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                    ,param_11,in_stack_00000214,in_stack_00000218,in_stack_00000228,
                    in_stack_0000022c,in_stack_00000230,in_stack_00000234,in_stack_00000238,
                    in_stack_0000023c,in_stack_00000240,in_stack_00000244,in_stack_0000024c);
    return;
  }
  *(undefined4 *)*param_12 = unaff_s2;
  SPRINTF_OBJ_804(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,in_stack_00000214,in_stack_00000218,in_stack_00000228,in_stack_0000022c,
                  in_stack_00000230,in_stack_00000234,in_stack_00000238,in_stack_0000023c,
                  in_stack_00000240,in_stack_00000244,in_stack_0000024c);
  return;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_758(undefined4 param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined *puVar4;
  undefined uVar5;
  int *piVar6;
  int *piVar7;
  uchar *puVar8;
  byte bVar9;
  undefined uVar10;
  undefined uVar11;
  char *in_a3;
  uint uVar12;
  int *piVar13;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  uint uVar14;
  int iVar15;
  int iVar16;
  int **ppiVar17;
  int **in_stack_00000220;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  
code_r0x80022a94:
  if (param_2 == 0x25) {
    do {
      *(char *)(unaff_s3 + unaff_s2) = (char)param_2;
      unaff_s2 = unaff_s2 + 1;
      while( true ) {
        uVar11 = SUB41(in_a3,0);
        iVar3 = in_stack_0000024c + 1;
        param_2 = (uint)*(byte *)(in_stack_0000024c + 1);
        if (param_2 == 0) goto SPRINTF_OBJ_824;
        in_stack_0000024c = iVar3;
        if (param_2 != 0x25) break;
        uVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        uVar10 = 0x23;
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  iVar1 = iVar3 + 1;
                  param_2 = (uint)*(byte *)(iVar3 + 1);
                  if (param_2 != unaff_s6) break;
                  uVar14 = uVar14 | 1;
                  iVar3 = iVar1;
                }
                if (param_2 != unaff_s5) break;
                uVar14 = uVar14 | 2;
                iVar3 = iVar1;
              }
              if (param_2 != unaff_s4) break;
              uVar14 = (uint)CONCAT11(*(byte *)(iVar3 + 1),(char)uVar14);
              iVar3 = iVar1;
            }
            if (param_2 != 0x23) break;
            uVar14 = uVar14 | 4;
            iVar3 = iVar1;
          }
          if (param_2 != 0x30) break;
          uVar14 = uVar14 | 8;
          iVar3 = iVar1;
        }
        if (param_2 == 0x2a) {
          iVar3 = SPRINTF_OBJ_1C0(iVar3,(uint)*(byte *)(iVar3 + 2),0x23,uVar11,in_stack_00000010,
                                  in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                  in_stack_00000020,in_stack_00000024,0,in_stack_00000220 + 1,
                                  iVar3 + 2);
          return iVar3;
        }
        while (param_2 - 0x30 < 10) {
          iVar15 = iVar15 * 10 + -0x30 + param_2;
          param_2 = (uint)*(byte *)(iVar1 + 1);
          iVar1 = iVar1 + 1;
        }
        in_stack_0000024c = iVar1;
        if (param_2 == 0x2e) {
          param_2 = (uint)*(byte *)(iVar1 + 1);
          iVar3 = iVar1;
          if (param_2 == 0x2a) {
            iVar3 = SPRINTF_OBJ_260(iVar1,(uint)*(byte *)(iVar1 + 2),0x23,uVar11,in_stack_00000010,
                                    in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                    in_stack_00000020,in_stack_00000024,uVar14,*in_stack_00000220);
            return iVar3;
          }
          while (in_stack_0000024c = iVar3 + 1, param_2 - 0x30 < 10) {
            iVar16 = iVar16 * 10 + -0x30 + param_2;
            param_2 = (uint)*(byte *)(iVar3 + 2);
            iVar3 = in_stack_0000024c;
          }
          iVar3 = iVar1;
          if (-1 < iVar16) {
            uVar14 = uVar14 | 0x10;
          }
        }
        piVar13 = (int *)&stack0x00000210;
        if ((uVar14 & 1) != 0) {
          uVar14 = uVar14 & 0xfffffff7;
        }
        bVar9 = (byte)param_2;
        uVar5 = (undefined)iVar3;
        switch(param_2) {
        case 0x4c:
          iVar3 = SPRINTF_OBJ_2A4(iVar3,(uint)*(byte *)(in_stack_0000024c + 1));
          return iVar3;
        default:
          goto code_r0x80022a94;
        case 99:
          iVar3 = SPRINTF_OBJ_770(uVar5,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                  in_stack_00000024,uVar14,iVar15);
          return iVar3;
        case 100:
        case 0x69:
          piVar7 = *in_stack_00000220;
          if ((int)piVar7 < 0) {
            iVar3 = SPRINTF_OBJ_388((int *)-(int)piVar7,bVar9,0x23,uVar11,in_stack_00000010,
                                    in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                    in_stack_00000020,in_stack_00000024,
                                    (uint)CONCAT11((char)unaff_s6,(char)uVar14),iVar15,iVar16);
            return iVar3;
          }
          if ((uVar14 & 2) != 0) {
            iVar3 = SPRINTF_OBJ_388(piVar7,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                    in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                    in_stack_00000024,(uint)CONCAT11((char)unaff_s5,(char)uVar14),
                                    iVar15,iVar16);
            return iVar3;
          }
          goto code_r0x800226c4;
        case 0x68:
          iVar3 = SPRINTF_OBJ_2EC(iVar3,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                  in_stack_00000024,uVar14,in_stack_0000024c);
          return iVar3;
        case 0x6c:
          iVar3 = SPRINTF_OBJ_2EC(iVar3,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                  in_stack_00000024,uVar14,in_stack_0000024c);
          return iVar3;
        case 0x6e:
          **in_stack_00000220 = unaff_s2;
          iVar3 = SPRINTF_OBJ_804(uVar5,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                  in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                  in_stack_00000024,uVar14,iVar15,iVar16,in_stack_00000228,
                                  in_stack_0000022c,in_stack_00000230,in_stack_00000234,
                                  in_stack_00000238,in_stack_0000023c,in_stack_00000240,
                                  in_stack_00000244,in_stack_0000024c);
          return iVar3;
        case 0x6f:
          ppiVar17 = in_stack_00000220 + 1;
          piVar7 = *in_stack_00000220;
          if ((uVar14 & 0x10) == 0) {
            if ((uVar14 & 8) != 0) {
              iVar16 = iVar15;
            }
            if (iVar16 < 1) {
              iVar16 = 1;
            }
          }
          uVar12 = 0;
          for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
            piVar13 = (int *)((int)piVar13 + -1);
            *(byte *)piVar13 = ((byte)piVar7 & 7) + 0x30;
            uVar12 = uVar12 + 1;
          }
          if ((((uVar14 & 4) != 0) && (uVar12 != 0)) && (*(byte *)piVar13 != 0x30)) {
            piVar13 = (int *)((int)piVar13 + -1);
            *(byte *)piVar13 = 0x30;
            uVar12 = uVar12 + 1;
          }
          if ((int)uVar12 < iVar16) {
            do {
              piVar13 = (int *)((int)piVar13 + -1);
              *(byte *)piVar13 = 0x30;
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < iVar16);
            iVar3 = SPRINTF_OBJ_770((byte)piVar7,bVar9,0x23,uVar11,in_stack_00000010,
                                    in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                    in_stack_00000020,in_stack_00000024,uVar14,iVar15);
            return iVar3;
          }
          break;
        case 0x70:
          iVar16 = 8;
          uVar14 = uVar14 | 0x50;
        case 0x58:
          iVar3 = SPRINTF_OBJ_590(iVar3,param_2,0x23,"0123456789ABCDEF",in_stack_00000010,
                                  in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                  in_stack_00000020,in_stack_00000024,uVar14,iVar15,iVar16,
                                  in_stack_00000220);
          return iVar3;
        case 0x73:
          ppiVar17 = in_stack_00000220 + 1;
          piVar13 = *in_stack_00000220;
          if ((uVar14 & 4) == 0) {
            if ((uVar14 & 0x10) == 0) {
              strlen((char *)piVar13);
              iVar3 = SPRINTF_OBJ_770((char)piVar13,(char)param_2,uVar10,uVar11,in_stack_00000010,
                                      in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                      in_stack_00000020,in_stack_00000024,uVar14,iVar15);
              return iVar3;
            }
            uVar11 = 0;
            piVar7 = piVar13;
            pvVar2 = memchr((uchar *)piVar13,'\0',iVar16);
            uVar12 = (int)pvVar2 - (int)piVar13;
            if (pvVar2 == (void *)0x0) {
              iVar3 = SPRINTF_OBJ_770((char)piVar7,uVar11,(char)iVar16,(char)in_a3,in_stack_00000010
                                      ,in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                      in_stack_00000020,in_stack_00000024,uVar14,iVar15);
              return iVar3;
            }
          }
          else {
            uVar12 = (uint)*(byte *)piVar13;
            piVar13 = (int *)((int)piVar13 + 1);
            if (((uVar14 & 0x10) != 0) && (iVar16 < (int)uVar12)) {
              iVar3 = SPRINTF_OBJ_770(uVar5,bVar9,0x23,uVar11,in_stack_00000010,in_stack_00000014,
                                      in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                      in_stack_00000024,uVar14,iVar15);
              return iVar3;
            }
          }
          break;
        case 0x75:
          piVar7 = *in_stack_00000220;
          uVar14 = uVar14 & 0xff;
code_r0x800226c4:
          ppiVar17 = in_stack_00000220 + 1;
          bVar9 = (byte)(uVar14 >> 8);
          if ((uVar14 & 0x10) == 0) {
            if (((uVar14 & 8) != 0) && (iVar16 = iVar15, bVar9 != 0)) {
              iVar16 = iVar15 + -1;
            }
            if (iVar16 < 1) {
              iVar16 = 1;
            }
          }
          uVar12 = 0;
          if (piVar7 != (int *)0x0) {
            param_2 = 0xcccccccd;
            piVar6 = piVar7;
            do {
              piVar13 = (int *)((int)piVar13 + -1);
              uVar12 = uVar12 + 1;
              piVar7 = (int *)((uint)piVar6 / 10);
              *(byte *)piVar13 = (char)piVar6 + (char)piVar7 * -10 + 0x30;
              piVar6 = piVar7;
            } while (piVar7 != (int *)0x0);
          }
          for (; (int)uVar12 < iVar16; uVar12 = uVar12 + 1) {
            piVar13 = (int *)((int)piVar13 + -1);
            *(byte *)piVar13 = 0x30;
          }
          if (bVar9 != 0) {
            *(byte *)((int)piVar13 + -1) = bVar9;
            iVar3 = SPRINTF_OBJ_770((char)piVar7,(char)param_2,0x23,uVar11,in_stack_00000010,
                                    in_stack_00000014,in_stack_00000018,in_stack_0000001c,
                                    in_stack_00000020,in_stack_00000024,uVar14,iVar15);
            return iVar3;
          }
          break;
        case 0x78:
          in_a3 = "0123456789abcdef";
          ppiVar17 = in_stack_00000220 + 1;
          piVar7 = *in_stack_00000220;
          if ((uVar14 & 0x10) == 0) {
            iVar3 = 0x23;
            if (((uVar14 & 8) != 0) && (iVar3 = iVar15, iVar16 = iVar15, (uVar14 & 4) != 0)) {
              iVar16 = iVar15 + -2;
            }
            uVar10 = (undefined)iVar3;
            if (iVar16 < 1) {
              iVar16 = 1;
            }
          }
          uVar12 = 0;
          for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
            piVar13 = (int *)((int)piVar13 + -1);
            uVar12 = uVar12 + 1;
            *(char *)piVar13 = "0123456789abcdef"[(uint)piVar7 & 0xf];
          }
          for (; (int)uVar12 < iVar16; uVar12 = uVar12 + 1) {
            piVar13 = (int *)((int)piVar13 + -1);
            *(byte *)piVar13 = 0x30;
          }
          if ((uVar14 & 4) != 0) {
            *(byte *)((int)piVar13 + -1) = bVar9;
            *(byte *)((int)piVar13 + -2) = 0x30;
            iVar3 = SPRINTF_OBJ_770(0,bVar9,uVar10,0x90,in_stack_00000010,in_stack_00000014,
                                    in_stack_00000018,in_stack_0000001c,in_stack_00000020,
                                    in_stack_00000024,uVar14,iVar15);
            return iVar3;
          }
        }
        puVar8 = (uchar *)(unaff_s3 + unaff_s2);
        if (((int)uVar12 < iVar15) && ((uVar14 & 1) == 0)) {
          puVar4 = (undefined *)(unaff_s2 + unaff_s3);
          do {
            *puVar4 = (char)unaff_s4;
            puVar4 = puVar4 + 1;
            iVar15 = iVar15 + -1;
            unaff_s2 = unaff_s2 + 1;
          } while ((int)uVar12 < iVar15);
          puVar8 = (uchar *)(unaff_s3 + unaff_s2);
        }
        memmove(puVar8,(uchar *)piVar13,uVar12);
        unaff_s2 = unaff_s2 + uVar12;
        in_stack_00000220 = ppiVar17;
        if ((int)uVar12 < iVar15) {
          puVar4 = (undefined *)(unaff_s2 + unaff_s3);
          do {
            *puVar4 = (char)unaff_s4;
            puVar4 = puVar4 + 1;
            uVar12 = uVar12 + 1;
            unaff_s2 = unaff_s2 + 1;
          } while ((int)uVar12 < iVar15);
        }
      }
    } while( true );
  }
SPRINTF_OBJ_824:
  *(undefined *)(unaff_s3 + unaff_s2) = 0;
  return unaff_s2;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_770(undefined param_1,undefined param_2,undefined param_3,byte param_4,
                   undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                   undefined param_9,undefined param_10,uint param_11,int *param_12)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uchar *puVar8;
  byte bVar9;
  uint uVar10;
  undefined uVar11;
  undefined uVar12;
  char *pcVar13;
  uint unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int iVar14;
  int **ppiVar15;
  int **in_stack_00000220;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  undefined4 in_stack_00000240;
  undefined4 in_stack_00000244;
  int in_stack_0000024c;
  
  pcVar13 = (char *)(uint)param_4;
code_r0x80022aac:
  do {
    puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    if (((int)unaff_s0 < (int)param_12) && ((param_11 & 1) == 0)) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        param_12 = (int *)((int)param_12 + -1);
        unaff_s2 = unaff_s2 + 1;
      } while ((int)unaff_s0 < (int)param_12);
      puVar8 = (uchar *)(unaff_s3 + unaff_s2);
    }
    memmove(puVar8,(uchar *)unaff_s1,unaff_s0);
    uVar12 = SUB41(pcVar13,0);
    unaff_s2 = unaff_s2 + unaff_s0;
    iVar14 = in_stack_0000024c;
    if ((int)unaff_s0 < (int)param_12) {
      puVar3 = (undefined *)(unaff_s2 + unaff_s3);
      do {
        *puVar3 = (char)unaff_s4;
        puVar3 = puVar3 + 1;
        unaff_s0 = unaff_s0 + 1;
        unaff_s2 = unaff_s2 + 1;
      } while ((int)unaff_s0 < (int)param_12);
    }
code_r0x80022b40:
    in_stack_0000024c = iVar14 + 1;
    uVar10 = (uint)*(byte *)(iVar14 + 1);
    if (uVar10 == 0) {
SPRINTF_OBJ_824:
      *(undefined *)(unaff_s3 + unaff_s2) = 0;
      return unaff_s2;
    }
    if (uVar10 != 0x25) {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar10;
      unaff_s2 = unaff_s2 + 1;
      iVar14 = in_stack_0000024c;
      goto code_r0x80022b40;
    }
    param_11 = 0;
    param_12 = (int *)0x0;
    iVar14 = 0;
    uVar11 = 0x23;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar1 = in_stack_0000024c + 1;
              uVar10 = (uint)*(byte *)(in_stack_0000024c + 1);
              if (uVar10 != unaff_s6) break;
              param_11 = param_11 | 1;
              in_stack_0000024c = iVar1;
            }
            if (uVar10 != unaff_s5) break;
            param_11 = param_11 | 2;
            in_stack_0000024c = iVar1;
          }
          if (uVar10 != unaff_s4) break;
          param_11._0_2_ = CONCAT11(*(byte *)(in_stack_0000024c + 1),(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          in_stack_0000024c = iVar1;
        }
        if (uVar10 != 0x23) break;
        param_11 = param_11 | 4;
        in_stack_0000024c = iVar1;
      }
      if (uVar10 != 0x30) break;
      param_11 = param_11 | 8;
      in_stack_0000024c = iVar1;
    }
    if (uVar10 == 0x2a) {
      param_12 = *in_stack_00000220;
      if ((int)param_12 < 0) {
        param_12 = (int *)-(int)param_12;
        param_11 = param_11 | 1;
      }
      iVar14 = SPRINTF_OBJ_1C0(in_stack_0000024c,(uint)*(byte *)(in_stack_0000024c + 2),0x23,uVar12,
                               param_5,param_6,param_7,param_8,param_9,param_10,0,
                               in_stack_00000220 + 1,in_stack_0000024c + 2);
      return iVar14;
    }
    while (uVar10 - 0x30 < 10) {
      param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar10);
      uVar10 = (uint)*(byte *)(iVar1 + 1);
      iVar1 = iVar1 + 1;
    }
    iVar5 = in_stack_0000024c;
    in_stack_0000024c = iVar1;
    if (uVar10 == 0x2e) {
      uVar10 = (uint)*(byte *)(iVar1 + 1);
      iVar5 = iVar1;
      if (uVar10 == 0x2a) {
        iVar14 = SPRINTF_OBJ_260(iVar1,(uint)*(byte *)(iVar1 + 2),0x23,uVar12,param_5,param_6,
                                 param_7,param_8,param_9,param_10,param_11,*in_stack_00000220);
        return iVar14;
      }
      while (in_stack_0000024c = iVar5 + 1, uVar10 - 0x30 < 10) {
        iVar14 = iVar14 * 10 + -0x30 + uVar10;
        uVar10 = (uint)*(byte *)(iVar5 + 2);
        iVar5 = in_stack_0000024c;
      }
      iVar5 = iVar1;
      if (-1 < iVar14) {
        param_11 = param_11 | 0x10;
      }
    }
    unaff_s1 = (int *)&param_11;
    if ((param_11 & 1) != 0) {
      param_11 = param_11 & 0xfffffff7;
    }
    bVar9 = (byte)uVar10;
    uVar4 = (undefined)iVar5;
    switch(uVar10) {
    case 0x4c:
      param_11 = param_11 | 0x80;
      iVar14 = SPRINTF_OBJ_2A4(iVar5,(uint)*(byte *)(in_stack_0000024c + 1));
      return iVar14;
    default:
      if (uVar10 != 0x25) goto SPRINTF_OBJ_824;
      goto SPRINTF_OBJ_764;
    case 99:
      iVar14 = SPRINTF_OBJ_770(uVar4,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,param_12);
      return iVar14;
    case 100:
    case 0x69:
      goto SPRINTF_OBJ_30C;
    case 0x68:
      iVar14 = SPRINTF_OBJ_2EC(iVar5,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,in_stack_0000024c);
      return iVar14;
    case 0x6c:
      iVar14 = SPRINTF_OBJ_2EC(iVar5,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,in_stack_0000024c);
      return iVar14;
    case 0x6e:
      **in_stack_00000220 = unaff_s2;
      iVar14 = SPRINTF_OBJ_804(uVar4,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                               param_10,param_11,param_12,iVar14,in_stack_00000228,in_stack_0000022c
                               ,in_stack_00000230,in_stack_00000234,in_stack_00000238,
                               in_stack_0000023c,in_stack_00000240,in_stack_00000244,
                               in_stack_0000024c);
      return iVar14;
    case 0x6f:
      ppiVar15 = in_stack_00000220 + 1;
      piVar7 = *in_stack_00000220;
      if ((param_11 & 0x10) == 0) {
        if ((param_11 & 8) != 0) {
          iVar14 = (int)param_12;
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
      }
      unaff_s0 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 3)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = ((byte)piVar7 & 7) + 0x30;
        unaff_s0 = unaff_s0 + 1;
      }
      if ((((param_11 & 4) != 0) && (unaff_s0 != 0)) && (*(byte *)unaff_s1 != 0x30)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
        unaff_s0 = unaff_s0 + 1;
      }
      in_stack_00000220 = ppiVar15;
      if ((int)unaff_s0 < iVar14) {
        do {
          unaff_s1 = (int *)((int)unaff_s1 + -1);
          *(byte *)unaff_s1 = 0x30;
          unaff_s0 = unaff_s0 + 1;
        } while ((int)unaff_s0 < iVar14);
        iVar14 = SPRINTF_OBJ_770((byte)piVar7,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,
                                 param_9,param_10,param_11,param_12);
        return iVar14;
      }
      break;
    case 0x70:
      iVar14 = 8;
      param_11 = param_11 | 0x50;
    case 0x58:
      iVar14 = SPRINTF_OBJ_590(iVar5,uVar10,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11,param_12,iVar14,in_stack_00000220);
      return iVar14;
    case 0x73:
      ppiVar15 = in_stack_00000220 + 1;
      unaff_s1 = *in_stack_00000220;
      if ((param_11 & 4) == 0) {
        if ((param_11 & 0x10) == 0) {
          strlen((char *)unaff_s1);
          iVar14 = SPRINTF_OBJ_770((char)unaff_s1,(char)uVar10,uVar11,uVar12,param_5,param_6,param_7
                                   ,param_8,param_9,param_10,param_11,param_12);
          return iVar14;
        }
        uVar12 = 0;
        piVar7 = unaff_s1;
        pvVar2 = memchr((uchar *)unaff_s1,'\0',iVar14);
        unaff_s0 = (int)pvVar2 - (int)unaff_s1;
        in_stack_00000220 = ppiVar15;
        if (pvVar2 == (void *)0x0) {
          iVar14 = SPRINTF_OBJ_770((char)piVar7,uVar12,(char)iVar14,(char)pcVar13,param_5,param_6,
                                   param_7,param_8,param_9,param_10,param_11,param_12);
          return iVar14;
        }
      }
      else {
        unaff_s0 = (uint)*(byte *)unaff_s1;
        unaff_s1 = (int *)((int)unaff_s1 + 1);
        in_stack_00000220 = ppiVar15;
        if (((param_11 & 0x10) != 0) && (iVar14 < (int)unaff_s0)) {
          iVar14 = SPRINTF_OBJ_770(uVar4,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                                   param_10,param_11,param_12);
          return iVar14;
        }
      }
      break;
    case 0x75:
      piVar7 = *in_stack_00000220;
      param_11 = param_11 & 0xff;
      goto code_r0x800226c4;
    case 0x78:
      pcVar13 = "0123456789abcdef";
      piVar7 = *in_stack_00000220;
      if ((param_11 & 0x10) == 0) {
        iVar1 = 0x23;
        if (((param_11 & 8) != 0) &&
           (iVar1 = (int)param_12, iVar14 = (int)param_12, (param_11 & 4) != 0)) {
          iVar14 = (int)param_12 + -2;
        }
        uVar11 = (undefined)iVar1;
        if (iVar14 < 1) {
          iVar14 = 1;
        }
      }
      unaff_s0 = 0;
      for (; piVar7 != (int *)0x0; piVar7 = (int *)((uint)piVar7 >> 4)) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        unaff_s0 = unaff_s0 + 1;
        *(char *)unaff_s1 = "0123456789abcdef"[(uint)piVar7 & 0xf];
      }
      for (; (int)unaff_s0 < iVar14; unaff_s0 = unaff_s0 + 1) {
        unaff_s1 = (int *)((int)unaff_s1 + -1);
        *(byte *)unaff_s1 = 0x30;
      }
      in_stack_00000220 = in_stack_00000220 + 1;
      if ((param_11 & 4) != 0) {
        *(byte *)((int)unaff_s1 + -1) = bVar9;
        *(byte *)((int)unaff_s1 + -2) = 0x30;
        iVar14 = SPRINTF_OBJ_770(0,bVar9,uVar11,0x90,param_5,param_6,param_7,param_8,param_9,
                                 param_10,param_11,param_12);
        return iVar14;
      }
    }
  } while( true );
SPRINTF_OBJ_30C:
  piVar7 = *in_stack_00000220;
  if ((int)piVar7 < 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    iVar14 = SPRINTF_OBJ_388((int *)-(int)piVar7,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11,param_12,iVar14);
    return iVar14;
  }
  if ((param_11 & 2) != 0) {
    param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
    param_11 = (uint)(ushort)param_11;
    iVar14 = SPRINTF_OBJ_388(piVar7,bVar9,0x23,uVar12,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,param_12,iVar14);
    return iVar14;
  }
code_r0x800226c4:
  if ((param_11 & 0x10) == 0) {
    if (((param_11 & 8) != 0) && (iVar14 = (int)param_12, param_11._1_1_ != 0)) {
      iVar14 = (int)param_12 + -1;
    }
    if (iVar14 < 1) {
      iVar14 = 1;
    }
  }
  unaff_s0 = 0;
  if (piVar7 != (int *)0x0) {
    uVar10 = 0xcccccccd;
    piVar6 = piVar7;
    do {
      unaff_s1 = (int *)((int)unaff_s1 + -1);
      unaff_s0 = unaff_s0 + 1;
      piVar7 = (int *)((uint)piVar6 / 10);
      *(byte *)unaff_s1 = (char)piVar6 + (char)piVar7 * -10 + 0x30;
      piVar6 = piVar7;
    } while (piVar7 != (int *)0x0);
  }
  for (; (int)unaff_s0 < iVar14; unaff_s0 = unaff_s0 + 1) {
    unaff_s1 = (int *)((int)unaff_s1 + -1);
    *(byte *)unaff_s1 = 0x30;
  }
  in_stack_00000220 = in_stack_00000220 + 1;
  if (param_11._1_1_ != 0) {
    *(byte *)((int)unaff_s1 + -1) = param_11._1_1_;
    iVar14 = SPRINTF_OBJ_770((char)piVar7,(char)uVar10,0x23,uVar12,param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11,param_12);
    return iVar14;
  }
  goto code_r0x80022aac;
}



// WARNING: Removing unreachable block (ram,0x80022670)
// WARNING: Removing unreachable block (ram,0x800226c0)
// WARNING: Removing unreachable block (ram,0x800228f4)
// WARNING: Removing unreachable block (ram,0x800227d8)
// WARNING: Removing unreachable block (ram,0x80022a84)

int SPRINTF_OBJ_804(undefined param_1,undefined param_2,undefined param_3,byte param_4,
                   undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                   undefined param_9,undefined param_10,uint param_11,int *param_12,int *param_13,
                   undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                   undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                   int param_22)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined *puVar5;
  undefined uVar6;
  int *piVar7;
  int *piVar8;
  uchar *puVar9;
  byte bVar10;
  uint uVar11;
  undefined uVar12;
  undefined uVar13;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int **ppiVar17;
  int **in_stack_00000220;
  
  pcVar14 = (char *)(uint)param_4;
  while( true ) {
    uVar13 = SUB41(pcVar14,0);
    iVar4 = param_22 + 1;
    uVar11 = (uint)*(byte *)(param_22 + 1);
    if (uVar11 == 0) break;
    param_22 = iVar4;
    if (uVar11 == 0x25) {
      param_11 = 0;
      param_12 = (int *)0x0;
      param_13 = (int *)0x0;
      uVar12 = 0x23;
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar4 = param_22;
                param_22 = param_22 + 1;
                uVar11 = (uint)*(byte *)(iVar4 + 1);
                if (uVar11 != unaff_s6) break;
                param_11 = param_11 | 1;
              }
              if (uVar11 != unaff_s5) break;
              param_11 = param_11 | 2;
            }
            if (uVar11 != unaff_s4) break;
            param_11._0_2_ = CONCAT11(*(byte *)(iVar4 + 1),(undefined)param_11);
            param_11 = (uint)(ushort)param_11;
          }
          if (uVar11 != 0x23) break;
          param_11 = param_11 | 4;
        }
        if (uVar11 != 0x30) break;
        param_11 = param_11 | 8;
      }
      if (uVar11 == 0x2a) {
        param_12 = *in_stack_00000220;
        if ((int)param_12 < 0) {
          param_12 = (int *)-(int)param_12;
          param_11 = param_11 | 1;
        }
        param_22 = iVar4 + 2;
        iVar4 = SPRINTF_OBJ_1C0(iVar4,(uint)*(byte *)(iVar4 + 2),0x23,uVar13,param_5,param_6,param_7
                                ,param_8,param_9,param_10,0,in_stack_00000220 + 1,param_22);
        return iVar4;
      }
      while (iVar2 = param_22, uVar11 - 0x30 < 10) {
        param_12 = (int *)((int)param_12 * 10 + -0x30 + uVar11);
        param_22 = param_22 + 1;
        uVar11 = (uint)*(byte *)(iVar2 + 1);
      }
      if (uVar11 == 0x2e) {
        param_22 = param_22 + 1;
        uVar11 = (uint)*(byte *)(iVar2 + 1);
        if (uVar11 == 0x2a) {
          param_13 = *in_stack_00000220;
          param_22 = iVar2 + 2;
          iVar4 = SPRINTF_OBJ_260(iVar2,(uint)*(byte *)(iVar2 + 2),0x23,uVar13,param_5,param_6,
                                  param_7,param_8,param_9,param_10,param_11,param_13);
          return iVar4;
        }
        while (iVar4 = param_22, uVar11 - 0x30 < 10) {
          param_13 = (int *)((int)param_13 * 10 + -0x30 + uVar11);
          param_22 = param_22 + 1;
          uVar11 = (uint)*(byte *)(iVar4 + 1);
        }
        iVar4 = iVar2;
        if (-1 < (int)param_13) {
          param_11 = param_11 | 0x10;
        }
      }
      piVar16 = (int *)&param_11;
      if ((param_11 & 1) != 0) {
        param_11 = param_11 & 0xfffffff7;
      }
      bVar10 = (byte)uVar11;
      uVar6 = (undefined)iVar4;
      switch(uVar11) {
      case 0x4c:
        param_11 = param_11 | 0x80;
        pbVar1 = (byte *)(param_22 + 1);
        param_22 = param_22 + 1;
        iVar4 = SPRINTF_OBJ_2A4(iVar4,(uint)*pbVar1);
        return iVar4;
      default:
        if (uVar11 == 0x25) goto SPRINTF_OBJ_764;
        goto SPRINTF_OBJ_824;
      case 99:
        iVar4 = SPRINTF_OBJ_770(uVar6,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_12);
        return iVar4;
      case 100:
      case 0x69:
        piVar8 = *in_stack_00000220;
        if ((int)piVar8 < 0) {
          param_11._0_2_ = CONCAT11((char)unaff_s6,(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          iVar4 = SPRINTF_OBJ_388((int *)-(int)piVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,param_12,param_13);
          return iVar4;
        }
        if ((param_11 & 2) != 0) {
          param_11._0_2_ = CONCAT11((char)unaff_s5,(undefined)param_11);
          param_11 = (uint)(ushort)param_11;
          iVar4 = SPRINTF_OBJ_388(piVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12,param_13);
          return iVar4;
        }
        goto code_r0x800226c4;
      case 0x68:
        iVar4 = SPRINTF_OBJ_2EC(iVar4,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_22);
        return iVar4;
      case 0x6c:
        iVar4 = SPRINTF_OBJ_2EC(iVar4,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_22);
        return iVar4;
      case 0x6e:
        **in_stack_00000220 = unaff_s2;
        iVar4 = SPRINTF_OBJ_804(uVar6,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9,
                                param_10,param_11,param_12,param_13,param_14,param_15,param_16,
                                param_17,param_18,param_19,param_20,param_21,param_22);
        return iVar4;
      case 0x6f:
        ppiVar17 = in_stack_00000220 + 1;
        piVar8 = *in_stack_00000220;
        if ((param_11 & 0x10) == 0) {
          if ((param_11 & 8) != 0) {
            param_13 = param_12;
          }
          if ((int)param_13 < 1) {
            param_13 = (int *)0x1;
          }
        }
        uVar15 = 0;
        for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 3)) {
          piVar16 = (int *)((int)piVar16 + -1);
          *(byte *)piVar16 = ((byte)piVar8 & 7) + 0x30;
          uVar15 = uVar15 + 1;
        }
        if ((((param_11 & 4) != 0) && (uVar15 != 0)) && (*(byte *)piVar16 != 0x30)) {
          piVar16 = (int *)((int)piVar16 + -1);
          *(byte *)piVar16 = 0x30;
          uVar15 = uVar15 + 1;
        }
        if ((int)uVar15 < (int)param_13) {
          do {
            piVar16 = (int *)((int)piVar16 + -1);
            *(byte *)piVar16 = 0x30;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)param_13);
          iVar4 = SPRINTF_OBJ_770((byte)piVar8,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,
                                  param_9,param_10,param_11,param_12);
          return iVar4;
        }
        break;
      case 0x70:
        param_13 = (int *)0x8;
        param_11 = param_11 | 0x50;
      case 0x58:
        iVar4 = SPRINTF_OBJ_590(iVar4,uVar11,0x23,"0123456789ABCDEF",param_5,param_6,param_7,param_8
                                ,param_9,param_10,param_11,param_12,param_13,in_stack_00000220);
        return iVar4;
      case 0x73:
        ppiVar17 = in_stack_00000220 + 1;
        piVar16 = *in_stack_00000220;
        if ((param_11 & 4) == 0) {
          if ((param_11 & 0x10) == 0) {
            strlen((char *)piVar16);
            iVar4 = SPRINTF_OBJ_770((char)piVar16,(char)uVar11,uVar12,uVar13,param_5,param_6,param_7
                                    ,param_8,param_9,param_10,param_11,param_12);
            return iVar4;
          }
          uVar13 = 0;
          piVar8 = piVar16;
          iVar4 = (int)param_13;
          pvVar3 = memchr((uchar *)piVar16,'\0',(int)param_13);
          uVar15 = (int)pvVar3 - (int)piVar16;
          if (pvVar3 == (void *)0x0) {
            iVar4 = SPRINTF_OBJ_770((char)piVar8,uVar13,(char)iVar4,(char)pcVar14,param_5,param_6,
                                    param_7,param_8,param_9,param_10,param_11,param_12);
            return iVar4;
          }
        }
        else {
          uVar15 = (uint)*(byte *)piVar16;
          piVar16 = (int *)((int)piVar16 + 1);
          if (((param_11 & 0x10) != 0) && ((int)param_13 < (int)uVar15)) {
            iVar4 = SPRINTF_OBJ_770(uVar6,bVar10,0x23,uVar13,param_5,param_6,param_7,param_8,param_9
                                    ,param_10,param_11,param_12);
            return iVar4;
          }
        }
        break;
      case 0x75:
        piVar8 = *in_stack_00000220;
        param_11 = param_11 & 0xff;
code_r0x800226c4:
        ppiVar17 = in_stack_00000220 + 1;
        if ((param_11 & 0x10) == 0) {
          if (((param_11 & 8) != 0) && (param_13 = param_12, param_11._1_1_ != 0)) {
            param_13 = (int *)((int)param_12 + -1);
          }
          if ((int)param_13 < 1) {
            param_13 = (int *)0x1;
          }
        }
        uVar15 = 0;
        if (piVar8 != (int *)0x0) {
          uVar11 = 0xcccccccd;
          piVar7 = piVar8;
          do {
            piVar16 = (int *)((int)piVar16 + -1);
            uVar15 = uVar15 + 1;
            piVar8 = (int *)((uint)piVar7 / 10);
            *(byte *)piVar16 = (char)piVar7 + (char)piVar8 * -10 + 0x30;
            piVar7 = piVar8;
          } while (piVar8 != (int *)0x0);
        }
        for (; (int)uVar15 < (int)param_13; uVar15 = uVar15 + 1) {
          piVar16 = (int *)((int)piVar16 + -1);
          *(byte *)piVar16 = 0x30;
        }
        if (param_11._1_1_ != 0) {
          *(byte *)((int)piVar16 + -1) = param_11._1_1_;
          iVar4 = SPRINTF_OBJ_770((char)piVar8,(char)uVar11,0x23,uVar13,param_5,param_6,param_7,
                                  param_8,param_9,param_10,param_11,param_12);
          return iVar4;
        }
        break;
      case 0x78:
        pcVar14 = "0123456789abcdef";
        ppiVar17 = in_stack_00000220 + 1;
        piVar8 = *in_stack_00000220;
        if ((param_11 & 0x10) == 0) {
          iVar4 = 0x23;
          if (((param_11 & 8) != 0) &&
             (param_13 = param_12, iVar4 = (int)param_12, (param_11 & 4) != 0)) {
            param_13 = (int *)((int)param_12 + -2);
          }
          uVar12 = (undefined)iVar4;
          if ((int)param_13 < 1) {
            param_13 = (int *)0x1;
          }
        }
        uVar15 = 0;
        for (; piVar8 != (int *)0x0; piVar8 = (int *)((uint)piVar8 >> 4)) {
          piVar16 = (int *)((int)piVar16 + -1);
          uVar15 = uVar15 + 1;
          *(char *)piVar16 = "0123456789abcdef"[(uint)piVar8 & 0xf];
        }
        for (; (int)uVar15 < (int)param_13; uVar15 = uVar15 + 1) {
          piVar16 = (int *)((int)piVar16 + -1);
          *(byte *)piVar16 = 0x30;
        }
        if ((param_11 & 4) != 0) {
          *(byte *)((int)piVar16 + -1) = bVar10;
          *(byte *)((int)piVar16 + -2) = 0x30;
          iVar4 = SPRINTF_OBJ_770(0,bVar10,uVar12,0x90,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12);
          return iVar4;
        }
      }
      puVar9 = (uchar *)(unaff_s3 + unaff_s2);
      if (((int)uVar15 < (int)param_12) && ((param_11 & 1) == 0)) {
        puVar5 = (undefined *)(unaff_s2 + unaff_s3);
        do {
          *puVar5 = (char)unaff_s4;
          puVar5 = puVar5 + 1;
          param_12 = (int *)((int)param_12 + -1);
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar15 < (int)param_12);
        puVar9 = (uchar *)(unaff_s3 + unaff_s2);
      }
      memmove(puVar9,(uchar *)piVar16,uVar15);
      unaff_s2 = unaff_s2 + uVar15;
      in_stack_00000220 = ppiVar17;
      if ((int)uVar15 < (int)param_12) {
        puVar5 = (undefined *)(unaff_s2 + unaff_s3);
        do {
          *puVar5 = (char)unaff_s4;
          puVar5 = puVar5 + 1;
          uVar15 = uVar15 + 1;
          unaff_s2 = unaff_s2 + 1;
        } while ((int)uVar15 < (int)param_12);
      }
    }
    else {
SPRINTF_OBJ_764:
      *(char *)(unaff_s3 + unaff_s2) = (char)uVar11;
      unaff_s2 = unaff_s2 + 1;
    }
  }
SPRINTF_OBJ_824:
  *(undefined *)(unaff_s3 + unaff_s2) = 0;
  return unaff_s2;
}



int strlen(char *param_1)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)&LAB_000000a0)();
  return iVar1;
}



void * memchr(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



void * memmove(uchar *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  uchar uVar2;
  void *pvVar3;
  uchar *puVar4;
  int iVar5;
  uchar *puVar6;
  
  if (param_1 < param_2) {
    iVar5 = param_3 + -1;
    if (0 < param_3) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        bVar1 = 0 < iVar5;
        param_1 = param_1 + 1;
        iVar5 = iVar5 + -1;
      } while (bVar1);
    }
  }
  else {
    iVar5 = param_3 + -1;
    if (0 < param_3) {
      puVar6 = param_1 + iVar5;
      puVar4 = param_2 + iVar5;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + -1;
        *puVar6 = uVar2;
        bVar1 = 0 < iVar5;
        puVar6 = puVar6 + -1;
        iVar5 = iVar5 + -1;
      } while (bVar1);
      pvVar3 = (void *)MEMMOVE_OBJ_64(param_1);
      return pvVar3;
    }
  }
  return param_1;
}



undefined4 MEMMOVE_OBJ_64(undefined4 param_1)

{
  return param_1;
}



u_short LoadTPage(u_long *pix,int tp,int abr,int x,int y,int w,int h)

{
  u_short uVar1;
  uint uVar2;
  undefined uVar3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffe4;
  
  if (tp == 1) {
    uVar1 = EXT_OBJ_A8();
    return uVar1;
  }
  uVar3 = (undefined)x;
  if (tp < 2) {
    if (tp != 0) {
      uVar2 = EXT_OBJ_AC((short *)&stack0xffffffe0,(char)tp,(char)abr,uVar3,uVar3,in_stack_ffffffe4,
                         unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_retaddr);
      return (u_short)uVar2;
    }
    uVar1 = EXT_OBJ_A8();
    return uVar1;
  }
  if (tp != 2) {
    uVar2 = EXT_OBJ_AC((short *)&stack0xffffffe0,(char)tp,(char)abr,uVar3,uVar3,in_stack_ffffffe4,
                       unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_retaddr);
    return (u_short)uVar2;
  }
  LoadImage((RECT *)&stack0xffffffe0,pix);
  uVar1 = GetTPage(2,abr,x,y);
  return uVar1;
}



u_short EXT_OBJ_A8(void)

{
  u_short uVar1;
  u_long *in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  LoadImage((RECT *)&stack0x00000010,in_t0);
  uVar1 = GetTPage(unaff_s0,unaff_s2,unaff_s1,unaff_s3);
  return uVar1;
}



uint EXT_OBJ_AC(short *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  u_short uVar1;
  u_long *in_t0;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  LoadImage((RECT *)param_1,in_t0);
  uVar1 = GetTPage(unaff_s0,unaff_s2,unaff_s1,unaff_s3);
  return (uint)uVar1;
}



u_short LoadClut(u_long *clut,int x,int y)

{
  u_short uVar1;
  RECT local_18;
  
  local_18.w = 0x100;
  local_18.x = (short)x;
  local_18.y = (short)y;
  local_18.h = 1;
  LoadImage(&local_18,clut);
  uVar1 = GetClut(x,y);
  return uVar1;
}



uint LoadClut2(u_long *param_1,int param_2,uint param_3)

{
  u_short uVar1;
  RECT local_18;
  
  local_18.w = 0x10;
  local_18.x = (short)param_2;
  local_18.y = (short)param_3;
  local_18.h = 1;
  LoadImage(&local_18,param_1);
  uVar1 = GetClut(param_2,param_3);
  return (uint)uVar1;
}



DRAWENV * SetDefDrawEnv(DRAWENV *env,int x,int y,int w,int h)

{
  int iVar1;
  DRAWENV *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_retaddr;
  
  pDVar2 = env;
  iVar3 = x;
  iVar4 = y;
  iVar5 = w;
  iVar1 = FUN_8001e884();
  (env->clip).x = (short)x;
  (env->clip).y = (short)y;
  (env->clip).w = (short)w;
  (env->tw).x = 0;
  (env->tw).y = 0;
  (env->tw).w = 0;
  (env->tw).h = 0;
  env->r0 = '\0';
  env->g0 = '\0';
  env->b0 = '\0';
  env->dtd = '\x01';
  (env->clip).h = (short)h;
  if (iVar1 != 0) {
    pDVar2 = (DRAWENV *)
             EXT_OBJ_234((char)pDVar2,(char)iVar3,(char)iVar4,(char)iVar5,unaff_s0,unaff_s1,unaff_s2
                         ,unaff_s3,unaff_s4,unaff_retaddr);
    return pDVar2;
  }
  env->dfe = h < 0x101;
  env->ofs[0] = (short)x;
  env->ofs[1] = (short)y;
  iVar3 = GetGraphType();
  if (iVar3 != 1) {
    GetGraphType();
  }
  env->tpage = 10;
  env->isbg = '\0';
  return env;
}



void EXT_OBJ_234(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  undefined in_v0;
  int iVar1;
  int unaff_s1;
  undefined2 unaff_s3;
  undefined2 unaff_s4;
  
  *(undefined *)(unaff_s1 + 0x17) = in_v0;
  *(undefined2 *)(unaff_s1 + 8) = unaff_s3;
  *(undefined2 *)(unaff_s1 + 10) = unaff_s4;
  iVar1 = GetGraphType();
  if (iVar1 != 1) {
    GetGraphType();
  }
  *(undefined2 *)(unaff_s1 + 0x14) = 10;
  *(undefined *)(unaff_s1 + 0x18) = 0;
  return;
}



DISPENV * SetDefDispEnv(DISPENV *env,int x,int y,int w,int h)

{
  (env->disp).x = (short)x;
  (env->disp).y = (short)y;
  (env->disp).w = (short)w;
  (env->screen).x = 0;
  (env->screen).y = 0;
  (env->screen).w = 0;
  (env->screen).h = 0;
  env->isrgb24 = '\0';
  env->isinter = '\0';
  env->pad1 = '\0';
  env->pad0 = '\0';
  (env->disp).h = (short)h;
  return env;
}



void SetDumpFnt(int id)

{
  if ((-1 < id) && (id <= DAT_80031e3c)) {
    PTR_printf_80032890 = FntPrint;
    DAT_80031e40 = id;
  }
  return;
}



void FntLoad(int tx,int ty)

{
  uint uVar1;
  
  uVar1 = LoadClut2(&DAT_80031e44,tx,ty + 0x80);
  DAT_80036eb0 = (undefined2)uVar1;
  DAT_80036eac = LoadTPage((u_long *)&DAT_80032044,0,0,tx,ty,0x80,0x20);
  DAT_80031e3c = 0;
  memset("",'\0',0x180);
  return;
}



int FntOpen(int x,int y,int w,int h,int isbg,int n)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_s0;
  SPRT_8 *p;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffc0;
  undefined in_stack_ffffffc4;
  undefined in_stack_ffffffc8;
  undefined in_stack_ffffffcc;
  undefined in_stack_ffffffd0;
  undefined in_stack_ffffffd4;
  
  if (7 < DAT_80031e3c) {
    iVar1 = FONT_OBJ_36C((char)x,(char)y,(char)w,(char)h,in_stack_ffffffc0,in_stack_ffffffc4,
                         in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,
                         unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_s6,unaff_s7,
                         unaff_retaddr);
    return iVar1;
  }
  if (DAT_80031e3c == 0) {
    DAT_80032844 = 0;
  }
  iVar1 = DAT_80032844;
  iVar2 = DAT_80031e3c * 0x30;
  *(uint *)(&DAT_80031ce8 + iVar2) = (uint)(w == 0);
  if (0x400 < n + iVar1) {
    n = 0x400 - iVar1;
  }
  SetDrawMode((DR_MODE *)(&UNK_80031ccc + iVar2),0,0,(uint)DAT_80036eac,(RECT *)&stack0xffffffc8);
  if (isbg != 0) {
    SetTile((TILE *)(&DAT_80031cbc + DAT_80031e3c * 0x30));
    (&DAT_80031cc0)[DAT_80031e3c * 0x30] = 0;
    (&DAT_80031cc1)[DAT_80031e3c * 0x30] = 0;
    (&DAT_80031cc2)[DAT_80031e3c * 0x30] = 0;
    SetSemiTrans(&DAT_80031cbc + DAT_80031e3c * 0x30,(uint)(isbg == 2));
  }
  iVar1 = DAT_80032844;
  iVar2 = DAT_80031e3c * 0x30;
  *(short *)(&DAT_80031cc4 + iVar2) = (short)x;
  *(short *)(&DAT_80031cc6 + iVar2) = (short)y;
  *(short *)(&DAT_80031cc8 + iVar2) = (short)w;
  *(short *)(&DAT_80031cca + iVar2) = (short)h;
  *(int *)(&DAT_80031cd8 + iVar2) = n;
  *(undefined4 *)(&DAT_80031ce4 + iVar2) = 0;
  *(undefined1 **)(&DAT_80031ce0 + iVar2) = &DAT_80032aac + iVar1;
  *(undefined **)(&DAT_80031cdc + iVar2) = &DAT_80032eac + iVar1 * 0x10;
  **(undefined **)(&DAT_80031ce0 + iVar2) = 0;
  p = *(SPRT_8 **)(&DAT_80031cdc + DAT_80031e3c * 0x30);
  iVar1 = 0;
  if (0 < n) {
    do {
      SetSprt8(p);
      iVar1 = iVar1 + 1;
      p->clut = DAT_80036eb0;
      p = p + 1;
    } while (iVar1 < n);
  }
  iVar1 = DAT_80031e3c;
  DAT_80032844 = n + DAT_80032844;
  DAT_80031e3c = DAT_80031e3c + 1;
  return iVar1;
}



void FONT_OBJ_36C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  return;
}



u_long * FntFlush(int id)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  u_long *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  u_long *puVar8;
  int iVar9;
  u_long *ot;
  void *in_a1;
  u_long *puVar10;
  undefined in_a3;
  undefined4 unaff_s0;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 unaff_s1;
  int iVar13;
  undefined4 unaff_s2;
  void *p;
  void *pvVar14;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  int iVar15;
  undefined4 unaff_s6;
  int iVar16;
  undefined4 unaff_s7;
  int iVar17;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffa8;
  u_long *p_00;
  undefined in_stack_ffffffac;
  short sVar18;
  int iVar19;
  undefined in_stack_ffffffb4;
  undefined in_stack_ffffffb8;
  undefined in_stack_ffffffbc;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  iVar20 = 0x80;
  iVar21 = 0x80;
  iVar19 = 0;
  uVar22 = 0x80;
  if (((id < 0) || (iVar3 = id << 1, DAT_80031e3c <= id)) &&
     (iVar3 = DAT_80031e40 << 1, id = DAT_80031e40,
     *(int *)(&DAT_80031ce0 + DAT_80031e40 * 0x30) == 0)) {
    puVar4 = (u_long *)
             FONT_OBJ_68C((char)DAT_80031e40,(char)in_a1,0x80,in_a3,in_stack_ffffffa8,
                          in_stack_ffffffac,0,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,
                          unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_s6,unaff_s7,
                          unaff_s8,unaff_retaddr);
    return puVar4;
  }
  iVar5 = (iVar3 + id) * 0x10;
  puVar4 = (u_long *)(&UNK_80031ccc + iVar5);
  pbVar11 = *(byte **)(&DAT_80031ce0 + iVar5);
  iVar3 = *(int *)(&DAT_80031cd8 + iVar5);
  iVar13 = (int)*(short *)(&DAT_80031cc4 + iVar5);
  iVar15 = (int)*(short *)(&DAT_80031cc6 + iVar5);
  puVar8 = (u_long *)(iVar15 + *(short *)(&DAT_80031cca + iVar5));
  p = *(void **)(&DAT_80031cdc + iVar5);
  iVar16 = *(int *)(&DAT_80031ce8 + iVar5);
  iVar17 = iVar13 + *(short *)(&DAT_80031cc8 + iVar5);
  puVar10 = puVar4;
  ot = puVar4;
  TermPrim(puVar4);
  bVar1 = *pbVar11;
  for (; (p_00 = ot, bVar1 != 0 && (iVar3 != 0)); iVar3 = iVar3 + -1) {
    bVar1 = *pbVar11;
    bVar2 = false;
    pvVar14 = p;
    pbVar12 = pbVar11;
    if (bVar1 == 0x20) {
FONT_OBJ_5C8:
      iVar13 = iVar13 + 8;
      if ((iVar17 <= iVar13) && (iVar16 == 0)) {
FONT_OBJ_5E0:
        bVar2 = true;
      }
    }
    else {
      if (bVar1 < 0x21) {
        if (bVar1 == 9) {
          puVar4 = (u_long *)FONT_OBJ_5CC();
          return puVar4;
        }
        if (bVar1 != 10) {
          puVar6 = FONT_OBJ_538();
          return puVar6;
        }
        goto FONT_OBJ_5E0;
      }
      if (bVar1 != 0x7e) {
        if (*pbVar11 - 0x61 < 0x1a) {
          puVar6 = FONT_OBJ_568((char)puVar4,(char)in_a1,(char)puVar10,in_a3,ot,in_stack_ffffffac,
                                (char)iVar19,in_stack_ffffffb4,(char)puVar8,in_stack_ffffffbc,
                                (char)iVar20,(char)iVar21,(char)uVar22);
          return puVar6;
        }
        iVar9 = *pbVar11 - 0x20;
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = *pbVar11 - 0x11;
        }
        *(char *)((int)p + 0xc) = ((char)iVar9 + (char)(iVar7 >> 4) * -0x10) * '\b';
        *(char *)((int)p + 0xd) = (char)((iVar7 >> 4) << 3);
        *(short *)((int)p + 8) = (short)iVar13;
        *(short *)((int)p + 10) = (short)iVar15;
        *(char *)((int)p + 4) = (char)iVar20;
        *(char *)((int)p + 5) = (char)iVar21;
        puVar10 = (u_long *)(uVar22 & 0xff);
        *(char *)((int)p + 6) = (char)uVar22;
        pvVar14 = (void *)((int)p + 0x10);
        AddPrim(ot,p);
        puVar4 = ot;
        in_a1 = p;
        goto FONT_OBJ_5C8;
      }
      pbVar12 = pbVar11 + 1;
      if (pbVar11[1] == 99) {
        iVar20 = (pbVar11[2] - 0x30) * 0x10;
        iVar21 = (pbVar11[3] - 0x30) * 0x10;
        uVar22 = (pbVar11[4] - 0x30) * 0x10;
        pbVar12 = pbVar11 + 4;
      }
    }
    if (bVar2) {
      iVar15 = iVar15 + 8;
      if (iVar19 < iVar13) {
        iVar19 = iVar13;
      }
      iVar13 = (int)*(short *)(&DAT_80031cc4 + iVar5);
      puVar10 = puVar8;
      if ((int)puVar8 <= iVar15) break;
    }
    pbVar11 = pbVar12 + 1;
    bVar1 = *pbVar11;
    p = pvVar14;
    ot = p_00;
  }
  sVar18 = (short)iVar19;
  if (((&DAT_80031cc3)[iVar5] != '\0') && (AddPrim(p_00,&DAT_80031cbc + iVar5), iVar16 != 0)) {
    *(short *)(&DAT_80031cc8 + iVar5) = sVar18 - *(short *)(&DAT_80031cc4 + iVar5);
    *(short *)(&DAT_80031cca + iVar5) = (short)iVar15 - (*(short *)(&DAT_80031cc6 + iVar5) + -8);
  }
  DrawOTag(p_00);
  *(undefined4 *)(&DAT_80031ce4 + iVar5) = 0;
  **(undefined **)(&DAT_80031ce0 + iVar5) = 0;
  return p_00;
}



uint * FONT_OBJ_538(void)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  u_long *in_a0;
  void *in_a1;
  void *p;
  uint in_a2;
  undefined in_a3;
  byte *unaff_s0;
  byte *pbVar5;
  int unaff_s1;
  void *unaff_s2;
  void *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  u_long *in_stack_00000010;
  undefined in_stack_00000014;
  undefined uVar6;
  int in_stack_00000018;
  undefined in_stack_0000001c;
  undefined uVar7;
  uint in_stack_00000020;
  undefined in_stack_00000024;
  char in_stack_00000028;
  char in_stack_00000030;
  undefined uVar8;
  uint in_stack_00000038;
  
code_r0x80023424:
  p = unaff_s2;
  if (*unaff_s0 - 0x61 < 0x1a) {
    puVar2 = FONT_OBJ_568((char)in_a0,(char)in_a1,(char)in_a2,in_a3,in_stack_00000010,
                          in_stack_00000014,uVar6,in_stack_0000001c,uVar7,in_stack_00000024,
                          in_stack_00000028,in_stack_00000030,uVar8);
    return puVar2;
  }
  iVar4 = *unaff_s0 - 0x20;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = *unaff_s0 - 0x11;
  }
  *(char *)((int)p + 0xc) = ((char)iVar4 + (char)(iVar3 >> 4) * -0x10) * '\b';
  *(char *)((int)p + 0xd) = (char)((iVar3 >> 4) << 3);
  *(short *)((int)p + 8) = (short)unaff_s1;
  *(short *)((int)p + 10) = (short)unaff_s5;
  *(char *)((int)p + 4) = in_stack_00000028;
  *(char *)((int)p + 5) = in_stack_00000030;
  in_a2 = in_stack_00000038 & 0xff;
  *(undefined *)((int)p + 6) = uVar8;
  unaff_s2 = (void *)((int)p + 0x10);
  in_a0 = in_stack_00000010;
  AddPrim(in_stack_00000010,p);
FONT_OBJ_5C8:
  unaff_s1 = unaff_s1 + 8;
  if (unaff_s1 < unaff_s7) goto FONT_OBJ_5E4;
  if (unaff_s6 != 0) goto FONT_OBJ_5E4;
  do {
    unaff_s4 = 1;
FONT_OBJ_5E4:
    pbVar5 = unaff_s0;
    if (unaff_s4 != 0) {
      unaff_s5 = unaff_s5 + 8;
      if (in_stack_00000018 < unaff_s1) {
        in_stack_00000018 = unaff_s1;
      }
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      in_a2 = in_stack_00000020;
      if ((int)in_stack_00000020 <= unaff_s5) goto FONT_OBJ_62C;
    }
    unaff_s0 = pbVar5 + 1;
    unaff_s8 = unaff_s8 + -1;
    if ((*unaff_s0 == 0) || (unaff_s8 == 0)) {
FONT_OBJ_62C:
      if ((*(char *)((int)unaff_s3 + 7) != '\0') &&
         (AddPrim(in_stack_00000010,unaff_s3), unaff_s6 != 0)) {
        *(short *)((int)unaff_s3 + 0xc) = (short)in_stack_00000018 - *(short *)((int)unaff_s3 + 8);
        *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
      }
      DrawOTag(in_stack_00000010);
      *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
      **(undefined **)((int)unaff_s3 + 0x24) = 0;
      return in_stack_00000010;
    }
    bVar1 = *unaff_s0;
    unaff_s4 = 0;
    if (bVar1 == 0x20) goto FONT_OBJ_5C8;
    if (0x20 < bVar1) {
      in_a1 = p;
      if (bVar1 != 0x7e) goto code_r0x80023424;
      unaff_s0 = pbVar5 + 2;
      if (pbVar5[2] == 99) {
        in_stack_00000028 = pbVar5[3] * '\x10';
        in_stack_00000030 = pbVar5[4] * '\x10';
        in_stack_00000038 = (pbVar5[5] - 0x30) * 0x10;
        unaff_s0 = pbVar5 + 5;
      }
      goto FONT_OBJ_5E4;
    }
    if (bVar1 == 9) {
      puVar2 = (uint *)FONT_OBJ_5CC();
      return puVar2;
    }
    if (bVar1 != 10) {
      puVar2 = FONT_OBJ_538();
      return puVar2;
    }
  } while( true );
}



uint * FONT_OBJ_568(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                   u_long *param_5,undefined param_6,undefined param_7,undefined param_8,
                   undefined param_9,undefined param_10,char param_11,char param_12,byte param_13)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int in_v1;
  u_long *puVar4;
  uint uVar5;
  byte *unaff_s0;
  byte *pbVar6;
  int unaff_s1;
  void *unaff_s2;
  void *pvVar7;
  void *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  undefined3 in_stack_00000019;
  undefined3 in_stack_00000021;
  
  _param_13 = (uint)param_13;
code_r0x80023454:
  iVar3 = in_v1;
  if (in_v1 < 0) {
    iVar3 = in_v1 + 0xf;
  }
  *(char *)((int)unaff_s2 + 0xc) = ((char)in_v1 + (char)(iVar3 >> 4) * -0x10) * '\b';
  *(char *)((int)unaff_s2 + 0xd) = (char)((iVar3 >> 4) << 3);
  *(short *)((int)unaff_s2 + 8) = (short)unaff_s1;
  *(short *)((int)unaff_s2 + 10) = (short)unaff_s5;
  *(char *)((int)unaff_s2 + 4) = param_11;
  *(char *)((int)unaff_s2 + 5) = param_12;
  uVar5 = _param_13 & 0xff;
  *(byte *)((int)unaff_s2 + 6) = param_13;
  pvVar7 = (void *)((int)unaff_s2 + 0x10);
  puVar4 = param_5;
  AddPrim(param_5,unaff_s2);
FONT_OBJ_5C8:
  unaff_s1 = unaff_s1 + 8;
  if (unaff_s1 < unaff_s7) goto FONT_OBJ_5E4;
  if (unaff_s6 != 0) goto FONT_OBJ_5E4;
  do {
    unaff_s4 = 1;
FONT_OBJ_5E4:
    pbVar6 = unaff_s0;
    if (unaff_s4 != 0) {
      unaff_s5 = unaff_s5 + 8;
      if (_param_7 < unaff_s1) {
        _param_7 = unaff_s1;
      }
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      uVar5 = _param_9;
      if ((int)_param_9 <= unaff_s5) goto FONT_OBJ_62C;
    }
    unaff_s0 = pbVar6 + 1;
    unaff_s8 = unaff_s8 + -1;
    if ((*unaff_s0 == 0) || (unaff_s8 == 0)) {
FONT_OBJ_62C:
      if ((*(char *)((int)unaff_s3 + 7) != '\0') && (AddPrim(param_5,unaff_s3), unaff_s6 != 0)) {
        *(short *)((int)unaff_s3 + 0xc) = (short)_param_7 - *(short *)((int)unaff_s3 + 8);
        *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
      }
      DrawOTag(param_5);
      *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
      **(undefined **)((int)unaff_s3 + 0x24) = 0;
      return param_5;
    }
    bVar1 = *unaff_s0;
    unaff_s4 = 0;
    if (bVar1 == 0x20) goto FONT_OBJ_5C8;
    if (0x20 < bVar1) {
      if (bVar1 != 0x7e) {
        if (*unaff_s0 - 0x61 < 0x1a) {
          puVar2 = FONT_OBJ_568((char)puVar4,(char)unaff_s2,(char)uVar5,param_4,param_5,param_6,
                                param_7,param_8,param_9,param_10,param_11,param_12,param_13);
          return puVar2;
        }
        in_v1 = *unaff_s0 - 0x20;
        unaff_s2 = pvVar7;
        goto code_r0x80023454;
      }
      unaff_s0 = pbVar6 + 2;
      if (pbVar6[2] == 99) {
        param_11 = pbVar6[3] * '\x10';
        param_12 = pbVar6[4] * '\x10';
        _param_13 = (pbVar6[5] - 0x30) * 0x10;
        unaff_s0 = pbVar6 + 5;
      }
      goto FONT_OBJ_5E4;
    }
    if (bVar1 == 9) {
      puVar2 = (uint *)FONT_OBJ_5CC();
      return puVar2;
    }
    if (bVar1 != 10) {
      puVar2 = FONT_OBJ_538();
      return puVar2;
    }
  } while( true );
}



u_long * FONT_OBJ_5CC(void)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  u_long *in_a0;
  void *in_a1;
  uint in_a2;
  undefined in_a3;
  byte *unaff_s0;
  byte *pbVar6;
  int unaff_s1;
  void *pvVar7;
  void *unaff_s2;
  void *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  u_long *in_stack_00000010;
  undefined in_stack_00000014;
  undefined uVar8;
  int in_stack_00000018;
  undefined in_stack_0000001c;
  undefined uVar9;
  uint in_stack_00000020;
  undefined in_stack_00000024;
  char in_stack_00000028;
  char in_stack_00000030;
  undefined uVar10;
  uint in_stack_00000038;
  
code_r0x800234b8:
  if (unaff_s1 < unaff_s7) goto FONT_OBJ_5E4;
  if (unaff_s6 != 0) goto FONT_OBJ_5E4;
  do {
    unaff_s4 = 1;
FONT_OBJ_5E4:
    pbVar6 = unaff_s0;
    if (unaff_s4 != 0) {
      unaff_s5 = unaff_s5 + 8;
      if (in_stack_00000018 < unaff_s1) {
        in_stack_00000018 = unaff_s1;
      }
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      in_a2 = in_stack_00000020;
      if ((int)in_stack_00000020 <= unaff_s5) goto FONT_OBJ_62C;
    }
    unaff_s0 = pbVar6 + 1;
    unaff_s8 = unaff_s8 + -1;
    if ((*unaff_s0 == 0) || (unaff_s8 == 0)) {
FONT_OBJ_62C:
      if ((*(char *)((int)unaff_s3 + 7) != '\0') &&
         (AddPrim(in_stack_00000010,unaff_s3), unaff_s6 != 0)) {
        *(short *)((int)unaff_s3 + 0xc) = (short)in_stack_00000018 - *(short *)((int)unaff_s3 + 8);
        *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
      }
      DrawOTag(in_stack_00000010);
      *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
      **(undefined **)((int)unaff_s3 + 0x24) = 0;
      return in_stack_00000010;
    }
    bVar1 = *unaff_s0;
    unaff_s4 = 0;
    pvVar7 = unaff_s2;
    if (bVar1 == 0x20) {
FONT_OBJ_5C8:
      unaff_s1 = unaff_s1 + 8;
      unaff_s2 = pvVar7;
      goto code_r0x800234b8;
    }
    if (0x20 < bVar1) {
      if (bVar1 != 0x7e) {
        if (*unaff_s0 - 0x61 < 0x1a) {
          puVar2 = FONT_OBJ_568((char)in_a0,(char)in_a1,(char)in_a2,in_a3,in_stack_00000010,
                                in_stack_00000014,uVar8,in_stack_0000001c,uVar9,in_stack_00000024,
                                in_stack_00000028,in_stack_00000030,uVar10);
          return puVar2;
        }
        iVar5 = *unaff_s0 - 0x20;
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = *unaff_s0 - 0x11;
        }
        *(char *)((int)unaff_s2 + 0xc) = ((char)iVar5 + (char)(iVar4 >> 4) * -0x10) * '\b';
        *(char *)((int)unaff_s2 + 0xd) = (char)((iVar4 >> 4) << 3);
        *(short *)((int)unaff_s2 + 8) = (short)unaff_s1;
        *(short *)((int)unaff_s2 + 10) = (short)unaff_s5;
        *(char *)((int)unaff_s2 + 4) = in_stack_00000028;
        *(char *)((int)unaff_s2 + 5) = in_stack_00000030;
        in_a2 = in_stack_00000038 & 0xff;
        *(undefined *)((int)unaff_s2 + 6) = uVar10;
        pvVar7 = (void *)((int)unaff_s2 + 0x10);
        in_a0 = in_stack_00000010;
        AddPrim(in_stack_00000010,unaff_s2);
        in_a1 = unaff_s2;
        goto FONT_OBJ_5C8;
      }
      unaff_s0 = pbVar6 + 2;
      if (pbVar6[2] == 99) {
        in_stack_00000028 = pbVar6[3] * '\x10';
        in_stack_00000030 = pbVar6[4] * '\x10';
        in_stack_00000038 = (pbVar6[5] - 0x30) * 0x10;
        unaff_s0 = pbVar6 + 5;
      }
      goto FONT_OBJ_5E4;
    }
    if (bVar1 == 9) {
      uVar3 = FONT_OBJ_5CC();
      return (u_long *)uVar3;
    }
    if (bVar1 != 10) {
      puVar2 = FONT_OBJ_538();
      return puVar2;
    }
  } while( true );
}



uint * FONT_OBJ_5E4(byte param_1,byte param_2,byte param_3,undefined param_4,u_long *param_5,
                   undefined param_6,int param_7,undefined param_8,uint param_9,undefined param_10,
                   undefined4 param_11,undefined4 param_12,uint param_13)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  u_long *puVar5;
  void *pvVar6;
  uint uVar7;
  byte *unaff_s0;
  byte *pbVar8;
  int unaff_s1;
  void *pvVar9;
  void *unaff_s2;
  void *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  uVar7 = (uint)param_3;
  pvVar6 = (void *)(uint)param_2;
  puVar5 = (u_long *)(uint)param_1;
code_r0x800234d0:
  do {
    pbVar8 = unaff_s0;
    if (unaff_s4 != 0) {
      unaff_s5 = unaff_s5 + 8;
      if (param_7 < unaff_s1) {
        param_7 = unaff_s1;
      }
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      uVar7 = param_9;
      if ((int)param_9 <= unaff_s5) goto FONT_OBJ_62C;
    }
    unaff_s0 = pbVar8 + 1;
    unaff_s8 = unaff_s8 + -1;
    if ((*unaff_s0 == 0) || (unaff_s8 == 0)) {
FONT_OBJ_62C:
      if ((*(char *)((int)unaff_s3 + 7) != '\0') && (AddPrim(param_5,unaff_s3), unaff_s6 != 0)) {
        *(short *)((int)unaff_s3 + 0xc) = (short)param_7 - *(short *)((int)unaff_s3 + 8);
        *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
      }
      DrawOTag(param_5);
      *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
      **(undefined **)((int)unaff_s3 + 0x24) = 0;
      return param_5;
    }
    bVar1 = *unaff_s0;
    unaff_s4 = 0;
    pvVar9 = unaff_s2;
    if (bVar1 == 0x20) break;
    if (bVar1 < 0x21) {
      if (bVar1 == 9) {
        puVar2 = (uint *)FONT_OBJ_5CC();
        return puVar2;
      }
      if (bVar1 != 10) {
        puVar2 = FONT_OBJ_538();
        return puVar2;
      }
      goto FONT_OBJ_5E0;
    }
    if (bVar1 != 0x7e) {
      if (*unaff_s0 - 0x61 < 0x1a) {
        puVar2 = FONT_OBJ_568((char)puVar5,(char)pvVar6,(char)uVar7,param_4,param_5,param_6,
                              (undefined)param_7,param_8,(undefined)param_9,param_10,(char)param_11,
                              (char)param_12,(undefined)param_13);
        return puVar2;
      }
      iVar4 = *unaff_s0 - 0x20;
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = *unaff_s0 - 0x11;
      }
      *(char *)((int)unaff_s2 + 0xc) = ((char)iVar4 + (char)(iVar3 >> 4) * -0x10) * '\b';
      *(char *)((int)unaff_s2 + 0xd) = (char)((iVar3 >> 4) << 3);
      *(short *)((int)unaff_s2 + 8) = (short)unaff_s1;
      *(short *)((int)unaff_s2 + 10) = (short)unaff_s5;
      *(char *)((int)unaff_s2 + 4) = (char)param_11;
      *(char *)((int)unaff_s2 + 5) = (char)param_12;
      uVar7 = param_13 & 0xff;
      *(undefined *)((int)unaff_s2 + 6) = (undefined)param_13;
      pvVar9 = (void *)((int)unaff_s2 + 0x10);
      puVar5 = param_5;
      AddPrim(param_5,unaff_s2);
      pvVar6 = unaff_s2;
      break;
    }
    unaff_s0 = pbVar8 + 2;
    if (pbVar8[2] == 99) {
      param_11._0_1_ = pbVar8[3] * '\x10';
      param_12._0_1_ = pbVar8[4] * '\x10';
      param_13 = (pbVar8[5] - 0x30) * 0x10;
      unaff_s0 = pbVar8 + 5;
    }
  } while( true );
  unaff_s1 = unaff_s1 + 8;
  unaff_s2 = pvVar9;
  if ((unaff_s7 <= unaff_s1) && (unaff_s6 == 0)) {
FONT_OBJ_5E0:
    unaff_s4 = 1;
    unaff_s2 = pvVar9;
  }
  goto code_r0x800234d0;
}



void FONT_OBJ_68C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  return;
}



int FntPrint(void)

{
  int iVar1;
  byte *in_a0;
  byte bVar2;
  byte *in_a1;
  uint uVar3;
  size_t in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  byte *pbVar4;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_retaddr;
  byte *local_res0;
  undefined in_stack_fffffdd8;
  undefined in_stack_fffffddc;
  undefined in_stack_fffffde0;
  undefined in_stack_fffffde4;
  undefined in_stack_fffffde8;
  undefined in_stack_fffffdec;
  
  if ((((-1 < (int)in_a0) && (pbVar4 = in_a1, local_res0 = in_a0, (int)in_a0 < DAT_80031e3c)) ||
      (local_res0 = DAT_80031e40, pbVar4 = in_a0,
      *(int *)(&DAT_80031ce0 + (int)DAT_80031e40 * 0x30) != 0)) &&
     (iVar1 = (int)local_res0 * 0x30,
     *(int *)(&DAT_80031ce4 + iVar1) <= *(int *)(&DAT_80031cd8 + iVar1))) {
    bVar2 = *pbVar4;
    while( true ) {
      if (bVar2 == 0) {
        *(undefined *)(*(int *)(&DAT_80031ce0 + iVar1) + *(int *)(&DAT_80031ce4 + iVar1)) = 0;
        return *(int *)(&DAT_80031ce4 + iVar1);
      }
      if (bVar2 == 0x25) {
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar4;
        uVar3 = (uint)bVar2;
        if (uVar3 != 0x25) {
          iVar1 = FONT_OBJ_82C(in_a0,uVar3,in_a2,uVar3 == 0x30);
          return iVar1;
        }
      }
      in_a0 = *(byte **)(&DAT_80031ce4 + iVar1);
      *(byte **)(&DAT_80031ce4 + iVar1) = in_a0 + 1;
      in_a0[*(int *)(&DAT_80031ce0 + iVar1)] = bVar2;
      pbVar4 = pbVar4 + 1;
      if (*(int *)(&DAT_80031cd8 + iVar1) < *(int *)(&DAT_80031ce4 + iVar1)) break;
      bVar2 = *pbVar4;
    }
    iVar1 = FONT_OBJ_A78((char)in_a0,bVar2,(char)in_a2,in_a3,in_stack_fffffdd8,in_stack_fffffddc,
                         in_stack_fffffde0,in_stack_fffffde4,in_stack_fffffde8,in_stack_fffffdec,
                         unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_retaddr);
    return iVar1;
  }
  iVar1 = FONT_OBJ_A78((char)in_a0,(char)in_a1,(char)in_a2,in_a3,in_stack_fffffdd8,in_stack_fffffddc
                       ,in_stack_fffffde0,in_stack_fffffde4,in_stack_fffffde8,in_stack_fffffdec,
                       unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_s4,unaff_s5,unaff_retaddr);
  return iVar1;
}



undefined4 FONT_OBJ_82C(char *param_1,uint param_2,size_t param_3,char param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  undefined uVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  int unaff_s1;
  int unaff_s2;
  byte *unaff_s3;
  byte *pbVar11;
  uint unaff_s4;
  uint unaff_s5;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  char **in_stack_00000210;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  while (param_2 - 0x30 < 10) {
    unaff_s2 = unaff_s2 * 10 + -0x30 + param_2;
    unaff_s3 = unaff_s3 + 1;
    param_2 = (uint)*unaff_s3;
  }
  pcVar10 = &stack0x00000210;
  if (unaff_s2 < 1) {
    unaff_s2 = 1;
  }
  switch(param_2) {
  case 0x58:
  case 0x78:
    param_3 = 0;
    pcVar3 = *in_stack_00000210;
    do {
      do {
        pcVar10 = pcVar10 + -1;
        uVar6 = (uint)pcVar3 & 0xf;
        pcVar3 = (char *)((uint)pcVar3 >> 4);
        param_3 = param_3 + 1;
        *pcVar10 = "0123456789ABCDEF"[uVar6];
      } while (param_3 == 0);
    } while (pcVar3 != (char *)0x0);
    param_1 = (char *)0x0;
    if (param_4 != '\0') {
      if ((int)param_3 < unaff_s2) {
        do {
          pcVar10 = pcVar10 + -1;
          param_3 = param_3 + 1;
          *pcVar10 = '0';
        } while ((int)param_3 < unaff_s2);
        uVar1 = FONT_OBJ_9B0(0,param_2,param_3);
        return uVar1;
      }
      goto FONT_OBJ_9F8;
    }
    break;
  case 99:
    uVar1 = FONT_OBJ_9AC(param_1,param_2,1);
    return uVar1;
  case 100:
    pcVar3 = *in_stack_00000210;
    iVar7 = 0;
    if ((int)pcVar3 < 0) {
      pcVar3 = (char *)-(int)pcVar3;
      iVar7 = 0x2d;
    }
    param_3 = 0;
    do {
      do {
        pcVar9 = pcVar10;
        sVar8 = param_3;
        pcVar10 = pcVar9 + -1;
        param_3 = sVar8 + 1;
        pcVar2 = (char *)(ZEXT48(pcVar3) * (ulonglong)unaff_s4 >> 0x23);
        *pcVar10 = (char)pcVar3 + (char)pcVar2 * -10 + '0';
        pcVar3 = pcVar2;
      } while (param_3 == 0);
    } while (pcVar2 != (char *)0x0);
    param_1 = (char *)0x0;
    if (iVar7 != 0) {
      pcVar9[-2] = (char)iVar7;
      uVar1 = FONT_OBJ_9AC(0,iVar7,sVar8 + 2);
      return uVar1;
    }
    break;
  case 0x73:
    pcVar10 = *in_stack_00000210;
    param_1 = pcVar10;
    param_3 = strlen(pcVar10);
  }
  if ((int)param_3 < unaff_s2) {
    uVar5 = 0x20;
    do {
      param_1 = *(char **)(unaff_s1 + 0x28);
      *(char **)(unaff_s1 + 0x28) = param_1 + 1;
      param_1[*(int *)(unaff_s1 + 0x24)] = ' ';
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
    } while ((int)param_3 < unaff_s2);
  }
FONT_OBJ_9F8:
  uVar5 = 0xff;
  do {
    param_3 = param_3 - 1;
    if (param_3 == 0xffffffff) {
      do {
        pbVar11 = unaff_s3 + 1;
        bVar4 = *pbVar11;
        if (bVar4 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar4 == unaff_s5) {
          pbVar11 = unaff_s3 + 2;
          bVar4 = *pbVar11;
          uVar6 = (uint)bVar4;
          if (uVar6 != unaff_s5) {
            uVar1 = FONT_OBJ_82C(param_1,uVar6,0xffffffff,uVar6 == 0x30);
            return uVar1;
          }
        }
        param_1 = *(char **)(unaff_s1 + 0x28);
        *(char **)(unaff_s1 + 0x28) = param_1 + 1;
        param_1[*(int *)(unaff_s1 + 0x24)] = bVar4;
        unaff_s3 = pbVar11;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A78((char)param_1,bVar4,0xff,param_4,in_stack_00000010,in_stack_00000014,
                           in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                           in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                           in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar1;
    }
    param_1 = *(char **)(unaff_s1 + 0x28);
    *(char **)(unaff_s1 + 0x28) = param_1 + 1;
    param_1[*(int *)(unaff_s1 + 0x24)] = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_748:
  uVar1 = FONT_OBJ_A78((char)param_1,uVar5,(char)param_3,param_4,in_stack_00000010,in_stack_00000014
                       ,in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                       in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar1;
}



undefined4
FONT_OBJ_874(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined param_5,undefined param_6,undefined param_7,undefined param_8,
            undefined param_9,undefined param_10,uint *param_11)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *unaff_s0;
  char *pcVar9;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar10;
  uint unaff_s4;
  uint unaff_s5;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  uVar3 = *param_11;
  iVar6 = 0;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
    iVar6 = 0x2d;
  }
  iVar8 = 0;
  do {
    do {
      pcVar9 = unaff_s0;
      iVar7 = iVar8;
      unaff_s0 = pcVar9 + -1;
      iVar8 = iVar7 + 1;
      uVar2 = (uint)((ulonglong)uVar3 * (ulonglong)unaff_s4 >> 0x23);
      *unaff_s0 = (char)uVar3 + (char)uVar2 * -10 + '0';
      uVar3 = uVar2;
    } while (iVar8 == 0);
  } while (uVar2 != 0);
  if (iVar6 != 0) {
    pcVar9[-2] = (char)iVar6;
    uVar1 = FONT_OBJ_9AC(0,iVar6,iVar7 + 2);
    return uVar1;
  }
  iVar6 = 0;
  if (iVar8 < unaff_s2) {
    uVar5 = 0x20;
    do {
      iVar6 = *(int *)(unaff_s1 + 0x28);
      *(int *)(unaff_s1 + 0x28) = iVar6 + 1;
      *(undefined *)(*(int *)(unaff_s1 + 0x24) + iVar6) = 0x20;
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
    } while (iVar8 < unaff_s2);
  }
  uVar5 = 0xff;
  iVar8 = iVar7;
  while( true ) {
    if (iVar8 == -1) {
      pbVar10 = (byte *)(unaff_s3 + 1);
      do {
        bVar4 = *pbVar10;
        if (bVar4 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar4 == unaff_s5) {
          pbVar10 = pbVar10 + 1;
          bVar4 = *pbVar10;
          uVar3 = (uint)bVar4;
          if (uVar3 != unaff_s5) {
            uVar1 = FONT_OBJ_82C(iVar6,uVar3,0xffffffff,uVar3 == 0x30);
            return uVar1;
          }
        }
        iVar6 = *(int *)(unaff_s1 + 0x28);
        *(int *)(unaff_s1 + 0x28) = iVar6 + 1;
        *(byte *)(*(int *)(unaff_s1 + 0x24) + iVar6) = bVar4;
        pbVar10 = pbVar10 + 1;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A78((char)iVar6,bVar4,0xff,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                           in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar1;
    }
    iVar6 = *(int *)(unaff_s1 + 0x28);
    *(int *)(unaff_s1 + 0x28) = iVar6 + 1;
    *(char *)(*(int *)(unaff_s1 + 0x24) + iVar6) = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) break;
    iVar8 = iVar8 + -1;
  }
FONT_OBJ_748:
  uVar1 = FONT_OBJ_A78((char)iVar6,uVar5,(char)iVar8,param_4,param_5,param_6,param_7,param_8,param_9
                       ,param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                       in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar1;
}



undefined4
FONT_OBJ_8F4(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined param_5
            ,undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10,uint *param_11)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  char *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar9;
  uint unaff_s5;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  uVar3 = *param_11;
  iVar8 = 0;
  do {
    do {
      iVar7 = iVar8;
      unaff_s0 = unaff_s0 + -1;
      uVar1 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      iVar8 = iVar7 + 1;
      *unaff_s0 = "0123456789ABCDEF"[uVar1];
    } while (iVar8 == 0);
  } while (uVar3 != 0);
  iVar4 = 0;
  if (param_4 == '\0') {
    if (iVar8 < unaff_s2) {
      uVar6 = 0x20;
      do {
        iVar4 = *(int *)(unaff_s1 + 0x28);
        *(int *)(unaff_s1 + 0x28) = iVar4 + 1;
        *(undefined *)(*(int *)(unaff_s1 + 0x24) + iVar4) = 0x20;
        unaff_s2 = unaff_s2 + -1;
        if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
      } while (iVar8 < unaff_s2);
    }
  }
  else if (iVar8 < unaff_s2) {
    do {
      unaff_s0 = unaff_s0 + -1;
      iVar8 = iVar8 + 1;
                    // Possible PsyQ macro: setPolyG3()
      *unaff_s0 = '0';
    } while (iVar8 < unaff_s2);
    uVar2 = FONT_OBJ_9B0(0,param_2,iVar8);
    return uVar2;
  }
  uVar6 = 0xff;
  iVar8 = iVar7;
  while( true ) {
    if (iVar8 == -1) {
      pbVar9 = (byte *)(unaff_s3 + 1);
      do {
        bVar5 = *pbVar9;
        if (bVar5 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar5 == unaff_s5) {
          pbVar9 = pbVar9 + 1;
          bVar5 = *pbVar9;
          uVar3 = (uint)bVar5;
          if (uVar3 != unaff_s5) {
            uVar2 = FONT_OBJ_82C(iVar4,uVar3,0xffffffff,uVar3 == 0x30);
            return uVar2;
          }
        }
        iVar4 = *(int *)(unaff_s1 + 0x28);
        *(int *)(unaff_s1 + 0x28) = iVar4 + 1;
        *(byte *)(*(int *)(unaff_s1 + 0x24) + iVar4) = bVar5;
        pbVar9 = pbVar9 + 1;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar2 = FONT_OBJ_A78((char)iVar4,bVar5,0xff,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                           in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar2;
    }
    iVar4 = *(int *)(unaff_s1 + 0x28);
    *(int *)(unaff_s1 + 0x28) = iVar4 + 1;
    *(char *)(*(int *)(unaff_s1 + 0x24) + iVar4) = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) break;
    iVar8 = iVar8 + -1;
  }
FONT_OBJ_748:
  uVar2 = FONT_OBJ_A78((char)iVar4,uVar6,(char)iVar8,param_4,param_5,param_6,param_7,param_8,param_9
                       ,param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                       in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar2;
}



void FONT_OBJ_96C(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined *param_11)

{
  int unaff_s0;
  
  *(undefined *)(unaff_s0 + -1) = *param_11;
  FONT_OBJ_9AC(param_1,param_2,1);
  return;
}



undefined4
FONT_OBJ_98C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined param_5,undefined param_6,undefined param_7,undefined param_8,
            undefined param_9,undefined param_10,char **param_11)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  undefined uVar5;
  uint uVar6;
  char *pcVar7;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar8;
  uint unaff_s5;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  pcVar7 = *param_11;
  pcVar3 = pcVar7;
  iVar2 = strlen(pcVar7);
  if (iVar2 < unaff_s2) {
    uVar5 = 0x20;
    do {
      pcVar3 = *(char **)(unaff_s1 + 0x28);
      *(char **)(unaff_s1 + 0x28) = pcVar3 + 1;
      pcVar3[*(int *)(unaff_s1 + 0x24)] = ' ';
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
    } while (iVar2 < unaff_s2);
  }
  uVar5 = 0xff;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == -1) {
      pbVar8 = (byte *)(unaff_s3 + 1);
      do {
        bVar4 = *pbVar8;
        if (bVar4 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar4 == unaff_s5) {
          pbVar8 = pbVar8 + 1;
          bVar4 = *pbVar8;
          uVar6 = (uint)bVar4;
          if (uVar6 != unaff_s5) {
            uVar1 = FONT_OBJ_82C(pcVar3,uVar6,0xffffffff,uVar6 == 0x30);
            return uVar1;
          }
        }
        pcVar3 = *(char **)(unaff_s1 + 0x28);
        *(char **)(unaff_s1 + 0x28) = pcVar3 + 1;
        pcVar3[*(int *)(unaff_s1 + 0x24)] = bVar4;
        pbVar8 = pbVar8 + 1;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A78((char)pcVar3,bVar4,0xff,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                           in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar1;
    }
    pcVar3 = *(char **)(unaff_s1 + 0x28);
    *(char **)(unaff_s1 + 0x28) = pcVar3 + 1;
    pcVar3[*(int *)(unaff_s1 + 0x24)] = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_748:
  uVar1 = FONT_OBJ_A78((char)pcVar3,uVar5,(char)iVar2,param_4,param_5,param_6,param_7,param_8,
                       param_9,param_10,in_stack_00000218,in_stack_0000021c,in_stack_00000220,
                       in_stack_00000224,in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar1;
}



undefined4 FONT_OBJ_9AC(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  undefined in_a3;
  undefined *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar5;
  uint unaff_s5;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  if (param_3 < unaff_s2) {
    uVar3 = 0x20;
    do {
      param_1 = *(int *)(unaff_s1 + 0x28);
      *(int *)(unaff_s1 + 0x28) = param_1 + 1;
      *(undefined *)(*(int *)(unaff_s1 + 0x24) + param_1) = 0x20;
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
    } while (param_3 < unaff_s2);
  }
  param_3 = param_3 + -1;
  uVar3 = 0xff;
  while( true ) {
    if (param_3 == -1) {
      pbVar5 = (byte *)(unaff_s3 + 1);
      do {
        bVar2 = *pbVar5;
        if (bVar2 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar2 == unaff_s5) {
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar5;
          uVar4 = (uint)bVar2;
          if (uVar4 != unaff_s5) {
            uVar1 = FONT_OBJ_82C(param_1,uVar4,0xffffffff,uVar4 == 0x30);
            return uVar1;
          }
        }
        param_1 = *(int *)(unaff_s1 + 0x28);
        *(int *)(unaff_s1 + 0x28) = param_1 + 1;
        *(byte *)(*(int *)(unaff_s1 + 0x24) + param_1) = bVar2;
        pbVar5 = pbVar5 + 1;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A78((char)param_1,bVar2,0xff,in_a3,in_stack_00000010,in_stack_00000014,
                           in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                           in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                           in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar1;
    }
    param_1 = *(int *)(unaff_s1 + 0x28);
    *(int *)(unaff_s1 + 0x28) = param_1 + 1;
    *(undefined *)(*(int *)(unaff_s1 + 0x24) + param_1) = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) break;
    param_3 = param_3 + -1;
  }
FONT_OBJ_748:
  uVar1 = FONT_OBJ_A78((char)param_1,uVar3,(char)param_3,in_a3,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                       in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar1;
}



undefined4 FONT_OBJ_9B0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int in_v0;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  undefined in_a3;
  undefined *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte *pbVar5;
  uint unaff_s5;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined in_stack_00000020;
  undefined in_stack_00000024;
  undefined4 in_stack_00000218;
  undefined4 in_stack_0000021c;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000230;
  
  if (in_v0 != 0) {
    uVar3 = 0x20;
    do {
      param_1 = *(int *)(unaff_s1 + 0x28);
      *(int *)(unaff_s1 + 0x28) = param_1 + 1;
                    // Possible PsyQ macro: setPolyF3()
      *(undefined *)(*(int *)(unaff_s1 + 0x24) + param_1) = 0x20;
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) goto FONT_OBJ_748;
    } while (param_3 < unaff_s2);
  }
  param_3 = param_3 + -1;
  uVar3 = 0xff;
  while( true ) {
    if (param_3 == -1) {
      pbVar5 = (byte *)(unaff_s3 + 1);
      do {
        bVar2 = *pbVar5;
        if (bVar2 == 0) {
          *(undefined *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (bVar2 == unaff_s5) {
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar5;
          uVar4 = (uint)bVar2;
          if (uVar4 != unaff_s5) {
            uVar1 = FONT_OBJ_82C(param_1,uVar4,0xffffffff,uVar4 == 0x30);
            return uVar1;
          }
        }
        param_1 = *(int *)(unaff_s1 + 0x28);
        *(int *)(unaff_s1 + 0x28) = param_1 + 1;
        *(byte *)(*(int *)(unaff_s1 + 0x24) + param_1) = bVar2;
        pbVar5 = pbVar5 + 1;
      } while (*(int *)(unaff_s1 + 0x28) <= *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A78((char)param_1,bVar2,0xff,in_a3,in_stack_00000010,in_stack_00000014,
                           in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                           in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                           in_stack_00000228,in_stack_0000022c,in_stack_00000230);
      return uVar1;
    }
    param_1 = *(int *)(unaff_s1 + 0x28);
    *(int *)(unaff_s1 + 0x28) = param_1 + 1;
    *(undefined *)(*(int *)(unaff_s1 + 0x24) + param_1) = *unaff_s0;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) < *(int *)(unaff_s1 + 0x28)) break;
    param_3 = param_3 + -1;
  }
FONT_OBJ_748:
  uVar1 = FONT_OBJ_A78((char)param_1,uVar3,(char)param_3,in_a3,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000218,in_stack_0000021c,in_stack_00000220,in_stack_00000224,
                       in_stack_00000228,in_stack_0000022c,in_stack_00000230);
  return uVar1;
}



void FONT_OBJ_A78(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined param_9,undefined param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  return;
}



u_short GetTPage(int tp,int abr,int x,int y)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_retaddr;
  int iVar8;
  
  uVar5 = (undefined)abr;
  uVar4 = (undefined)tp;
  iVar2 = x;
  iVar8 = y;
  iVar1 = GetGraphType();
  uVar7 = (undefined)iVar8;
  uVar6 = (undefined)iVar2;
  if (iVar1 != 1) {
    iVar2 = GetGraphType();
    if (iVar2 != 2) {
      return (ushort)((tp & 3U) << 7) | (ushort)((abr & 3U) << 5) | (ushort)((int)(y & 0x100U) >> 4)
             | (ushort)((int)(x & 0x3ffU) >> 6) | (ushort)((y & 0x200U) << 2);
    }
  }
  uVar3 = PRIM_OBJ_A4(uVar4,uVar5,uVar6,uVar7,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_retaddr);
  return (u_short)uVar3;
}



uint PRIM_OBJ_A4(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0;
}



u_short GetClut(int x,int y)

{
  return (ushort)(y << 6) | (ushort)(x >> 4) & 0x3f;
}



void DumpTPage(u_short tpage)

{
  undefined uVar1;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  undefined in_stack_fffffff4;
  
  iVar2 = GetGraphType();
  if (iVar2 != 1) {
    iVar2 = GetGraphType();
    if (iVar2 != 2) {
      (*(code *)PTR_printf_80032890)
                ("tpage: (%d,%d,%d,%d)\n",tpage >> 7 & 3,tpage >> 5 & 3,(tpage & 0x1f) << 6,
                 (tpage & 0x10) * 0x10 + (tpage >> 2 & 0x200));
      return;
    }
  }
  uVar3 = 0xf4;
  bVar4 = (byte)(tpage >> 9) & 3;
  bVar5 = (byte)(tpage >> 7) & 3;
  uVar6 = (undefined)((tpage & 0x1f) << 6);
  uVar1 = 0;
  (*(code *)PTR_printf_80032890)();
  PRIM_OBJ_19C(uVar3,bVar4,bVar5,uVar6,uVar1,in_stack_fffffff4,unaff_s0,unaff_retaddr);
  return;
}



void PRIM_OBJ_19C(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8)

{
  return;
}



void DumpClut(u_short clut)

{
  (*(code *)PTR_printf_80032890)("clut: (%d,%d)\n",(clut & 0x3f) << 4,clut >> 6);
  return;
}



void * NextPrim(void *p)

{
                    // WARNING: Load size is inaccurate
                    // Probable PsyQ macro: nextPrim(), with pattern: *pPrim & 0xffffff |
                    // 0x80000000.
  return (void *)(*p & 0xffffff | 0x80000000);
}



int IsEndPrim(void *p)

{
                    // WARNING: Load size is inaccurate
  return (uint)((*p & 0xffffff) == 0xffffff);
}



void AddPrim(void *ot,void *p)

{
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
                    // Probable PsyQ macro: addPrim().
  *(uint *)p = *p & 0xff000000 | *ot & 0xffffff;
                    // WARNING: Load size is inaccurate
  *(uint *)ot = *ot & 0xff000000 | (uint)p & 0xffffff;
  return;
}



void AddPrims(void *ot,void *p0,void *p1)

{
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
                    // Probable PsyQ macro: addPrim().
  *(uint *)p1 = *p1 & 0xff000000 | *ot & 0xffffff;
                    // WARNING: Load size is inaccurate
  *(uint *)ot = *ot & 0xff000000 | (uint)p0 & 0xffffff;
  return;
}



void CatPrim(void *p0,void *p1)

{
                    // WARNING: Load size is inaccurate
  *(uint *)p0 = *p0 & 0xff000000 | (uint)p1 & 0xffffff;
  return;
}



void TermPrim(void *p)

{
                    // WARNING: Load size is inaccurate
  *(uint *)p = *p | 0xffffff;
  return;
}



void SetSemiTrans(void *p,int abe)

{
  if (abe != 0) {
    PRIM_OBJ_2FC((int)p);
    return;
  }
  *(byte *)((int)p + 7) = *(byte *)((int)p + 7) & 0xfd;
  return;
}



void PRIM_OBJ_2FC(int param_1)

{
  undefined in_v0;
  
  *(undefined *)(param_1 + 7) = in_v0;
  return;
}



void SetShadeTex(void *p,int tge)

{
  if (tge != 0) {
    PRIM_OBJ_324((int)p);
    return;
  }
  *(byte *)((int)p + 7) = *(byte *)((int)p + 7) & 0xfe;
  return;
}



void PRIM_OBJ_324(int param_1)

{
  undefined in_v0;
  
  *(undefined *)(param_1 + 7) = in_v0;
  return;
}



void SetPolyF3(POLY_F3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
                    // Possible PsyQ macro: setPolyF3()
  p->code = ' ';
  return;
}



void SetPolyFT3(POLY_FT3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 7;
                    // Possible PsyQ macro: setPolyFT3()
  p->code = '$';
  return;
}



void SetPolyG3(POLY_G3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 6;
                    // Possible PsyQ macro: setPolyG3()
  p->code = '0';
  return;
}



void SetPolyGT3(POLY_GT3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
                    // Possible PsyQ macro: setPolyGT3()
  p->code = '4';
  return;
}



void SetPolyF4(POLY_F4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 5;
                    // Possible PsyQ macro: setPolyF4()
  p->code = '(';
  return;
}



void SetPolyFT4(POLY_FT4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
                    // Possible PsyQ macro: setPolyFT4()
  p->code = ',';
  return;
}



void SetPolyG4(POLY_G4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 8;
                    // Possible PsyQ macro: setPolyG4()
  p->code = '8';
  return;
}



void SetPolyGT4(POLY_GT4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 0xc;
                    // Possible PsyQ macro: setPolyGT4()
  p->code = '<';
  return;
}



void SetSprt8(SPRT_8 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
                    // Possible PsyQ macro: setSprt8()
  p->code = 't';
  return;
}



void SetSprt16(SPRT_16 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
                    // Possible PsyQ macro: setSprt16()
  p->code = '|';
  return;
}



void SetSprt(SPRT *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
                    // Possible PsyQ macro: setSprt()
  p->code = 'd';
  return;
}



void SetTile1(TILE_1 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
                    // Possible PsyQ macro: setTile1()
  p->code = 'h';
  return;
}



void SetTile8(TILE_8 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
                    // Possible PsyQ macro: setTile16()
  p->code = 'p';
  return;
}



void SetTile16(TILE_16 *p)

{
  *(undefined *)((int)&p->tag + 3) = 2;
                    // Possible PsyQ macro: setTile8()
  p->code = 'x';
  return;
}



void SetTile(TILE *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
                    // Possible PsyQ macro: setTile()
  p->code = '`';
  return;
}



void SetLineF2(LINE_F2 *p)

{
  *(undefined *)((int)&p->tag + 3) = 3;
                    // Possible PsyQ macro: setLineF2()
  p->code = '@';
  return;
}



void SetLineG2(LINE_G2 *p)

{
  *(undefined *)((int)&p->tag + 3) = 4;
                    // Possible PsyQ macro: setLineG2()
  p->code = 'P';
  return;
}



void SetLineF3(LINE_F3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 5;
                    // Possible PsyQ macro: setLineF3()
  p->code = 'H';
  p->pad = 0x55555555;
  return;
}



void SetLineG3(LINE_G3 *p)

{
  *(undefined *)((int)&p->tag + 3) = 7;
                    // Possible PsyQ macro: setLineG3()
  p->code = 'X';
  p->pad = 0x55555555;
  return;
}



void SetLineF4(LINE_F4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 6;
                    // Possible PsyQ macro: setLineF4()
  p->code = 'L';
  p->pad = 0x55555555;
  return;
}



void SetLineG4(LINE_G4 *p)

{
  *(undefined *)((int)&p->tag + 3) = 9;
                    // Possible PsyQ macro: setLineG4()
  p->code = '\\';
  p->pad = 0x55555555;
  return;
}



void SetBlockFill(int param_1)

{
  *(undefined *)(param_1 + 3) = 3;
  *(undefined *)(param_1 + 7) = 2;
  return;
}



void SetDrawMove(DR_MOVE *p)

{
  *(undefined *)((int)&p->tag + 3) = 5;
  *(undefined *)((int)&p->code + 3) = 1;
  p->code2 = 0x80000000;
  return;
}



void SetDrawTPage(DR_TPAGE *p,int dfe,int dtd,int tpage)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  undefined uVar6;
  undefined uVar7;
  undefined uVar9;
  uint uVar11;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_retaddr;
  DR_TPAGE *pDVar5;
  int iVar8;
  int iVar10;
  
  *(undefined *)((int)&p->tag + 3) = 1;
  pDVar5 = p;
  iVar2 = dfe;
  iVar8 = dtd;
  iVar10 = tpage;
  iVar1 = GetGraphType();
  uVar9 = (undefined)iVar10;
  uVar7 = (undefined)iVar8;
  uVar6 = (undefined)iVar2;
  uVar4 = SUB41(pDVar5,0);
  if ((iVar1 != 1) && (iVar2 = GetGraphType(), iVar2 != 2)) {
    uVar11 = 0xe1000000;
    if (dtd != 0) {
      uVar11 = 0xe1000200;
    }
    uVar3 = tpage & 0x9ff;
    if (dfe != 0) {
      uVar3 = uVar3 | 0x400;
    }
    p->code[0] = uVar11 | uVar3;
    return;
  }
  PRIM_OBJ_5C0(uVar4,uVar6,uVar7,uVar9,unaff_s0,unaff_s1,unaff_s2,unaff_s3,unaff_retaddr);
  return;
}



void PRIM_OBJ_5C0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 in_v0;
  int unaff_s3;
  
  *(undefined4 *)(unaff_s3 + 4) = in_v0;
  return;
}



void SetDrawLoad(DR_LOAD *p,RECT *rect)

{
  int iVar1;
  char cVar2;
  
  iVar1 = ((int)rect->w * (int)rect->h + 1) / 2;
  cVar2 = (char)iVar1 + '\x04';
  if (10 < iVar1 - 1U) {
    cVar2 = '\0';
  }
  p->code[0] = 0x1000000;
  *(char *)((int)&p->tag + 3) = cVar2;
  p->code[1] = 0xa0000000;
  p->code[2] = *(u_long *)rect;
  p->code[3] = *(u_long *)&rect->w;
  return;
}



int MargePrim(void *p0,void *p1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)p0 + 3) + (uint)*(byte *)((int)p1 + 3) + 1;
  if (uVar2 < 0x21) {
    *(char *)((int)p0 + 3) = (char)uVar2;
    *(undefined4 *)p1 = 0;
    iVar1 = PRIM_OBJ_678();
    return iVar1;
  }
  return -1;
}



void PRIM_OBJ_678(void)

{
  return;
}



void DumpDrawEnv(DRAWENV *env)

{
  ushort uVar1;
  undefined uVar2;
  int iVar3;
  undefined uVar4;
  byte bVar5;
  byte bVar6;
  undefined uVar7;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  undefined in_stack_fffffff4;
  
  (*(code *)PTR_printf_80032890)
            ("clip (%3d,%3d)-(%d,%d)\n",(int)(env->clip).x,(int)(env->clip).y,(int)(env->clip).w,
             (int)(env->clip).h);
  (*(code *)PTR_printf_80032890)("ofs  (%3d,%3d)\n",(int)env->ofs[0],(int)env->ofs[1]);
  (*(code *)PTR_printf_80032890)
            ("tw   (%d,%d)-(%d,%d)\n",(int)(env->tw).x,(int)(env->tw).y,(int)(env->tw).w,
             (int)(env->tw).h);
  (*(code *)PTR_printf_80032890)("dtd   %d\n",env->dtd);
  (*(code *)PTR_printf_80032890)("dfe   %d\n",env->dfe);
  iVar3 = GetGraphType();
  if ((iVar3 != 1) && (iVar3 = GetGraphType(), iVar3 != 2)) {
    uVar1 = env->tpage;
    (*(code *)PTR_printf_80032890)
              ("tpage: (%d,%d,%d,%d)\n",uVar1 >> 7 & 3,uVar1 >> 5 & 3,(uVar1 & 0x1f) << 6,
               (uVar1 & 0x10) * 0x10 + (uVar1 >> 2 & 0x200));
    return;
  }
  uVar4 = 0xf4;
  uVar1 = env->tpage;
  bVar5 = (byte)(uVar1 >> 9) & 3;
  bVar6 = (byte)(uVar1 >> 7) & 3;
  uVar7 = (undefined)((uVar1 & 0x1f) << 6);
  uVar2 = 0;
  (*(code *)PTR_printf_80032890)();
  PRIM_OBJ_7EC(uVar4,bVar5,bVar6,uVar7,uVar2,in_stack_fffffff4,unaff_s0,unaff_retaddr);
  return;
}



void PRIM_OBJ_7EC(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8)

{
  return;
}



void DumpDispEnv(DISPENV *env)

{
  (*(code *)PTR_printf_80032890)
            ("disp   (%3d,%3d)-(%d,%d)\n",(int)(env->disp).x,(int)(env->disp).y,(int)(env->disp).w,
             (int)(env->disp).h);
  (*(code *)PTR_printf_80032890)
            ("screen (%3d,%3d)-(%d,%d)\n",(int)(env->screen).x,(int)(env->screen).y,
             (int)(env->screen).w,(int)(env->screen).h);
  (*(code *)PTR_printf_80032890)("isinter %d\n",env->isinter);
  (*(code *)PTR_printf_80032890)("isrgb24 %d\n",env->isrgb24);
  return;
}



int ResetGraph(int mode)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  uint uVar5;
  undefined4 unaff_retaddr;
  
  uVar5 = mode & 7;
  if ((uVar5 != 0) && (uVar5 != 3)) {
    if (1 < DAT_80032896) {
      (*(code *)PTR_printf_80032890)("ResetGraph(%d)...\n");
    }
    iVar1 = _reset(1);
    return iVar1;
  }
  printf("ResetGraph:jtb=%08x,env=%08x\n",&PTR_s__Id__sys_c_v_1_120_1996_05_01_12_8003284c,
         &DAT_80032894);
  memset(&DAT_80032894,'\0',0x80);
  ResetCallback();
  GPU_cw();
  uVar5 = _reset((uint)(uVar5 != 0));
  DAT_80032894 = (undefined)uVar5;
  DAT_80032895 = 1;
  DAT_80032898 = *(undefined2 *)(&DAT_80032914 + (uVar5 & 0xff) * 4);
  DAT_8003289a = *(undefined2 *)(&DAT_80032928 + (uVar5 & 0xff) * 4);
  memset("",0xff,0x5c);
  uVar2 = 0;
  uVar3 = 0xff;
  uVar4 = 0x14;
  memset((uchar *)&DAT_80032900,0xff,0x14);
  iVar1 = SYS_OBJ_140(uVar2,uVar3,uVar4,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
  return iVar1;
}



void SYS_OBJ_140(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  return;
}



int SetGraphReverse(int mode)

{
  uint uVar1;
  int iVar2;
  char in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  uVar3 = (uint)DAT_80032897;
  if (1 < DAT_80032896) {
    in_a1 = (char)mode;
    (*(code *)PTR_printf_80032890)("SetGraphReverse(%d)...\n");
  }
  DAT_80032897 = (char)mode;
  uVar1 = _getctl(8);
  if (DAT_80032897 != '\0') {
    iVar2 = SYS_OBJ_1E4(uVar1,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_retaddr);
    return iVar2;
  }
  _ctl(uVar1 | 0x8000000);
  if (DAT_80032894 == '\x02') {
    uVar1 = 0x20000504;
    if (DAT_80032897 != '\0') {
      uVar1 = 0x20000501;
    }
    _ctl(uVar1);
  }
  return uVar3;
}



void SYS_OBJ_1E4(uint param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint in_v0;
  uint uVar1;
  
  _ctl(param_1 | in_v0);
  if (DAT_80032894 == '\x02') {
    uVar1 = 0x20000504;
    if (DAT_80032897 != '\0') {
      uVar1 = 0x20000501;
    }
    _ctl(uVar1);
  }
  return;
}



int SetGraphDebug(int level)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_80032896;
  DAT_80032896 = (byte)level;
  if ((level & 0xffU) != 0) {
    (*(code *)PTR_printf_80032890)
              ("SetGraphDebug:level:%d,type:%d reverse:%d\n",level & 0xff,DAT_80032894,DAT_80032897)
    ;
  }
  return uVar1;
}



int SetGraphQueue(int mode)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_80032895;
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("SetGrapQue(%d)...\n",mode);
  }
  if (mode != (uint)DAT_80032895) {
    _reset(1);
    DAT_80032895 = (byte)mode;
    DMACallback();
  }
  return uVar1;
}



undefined GetGraphType(void)

{
  return DAT_80032894;
}



int GetGraphDebug(void)

{
  return (uint)DAT_80032896;
}



u_long DrawSyncCallback(func *func)

{
  u_long uVar1;
  
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("DrawSyncCallback(%08x)...\n",func);
  }
  uVar1 = (u_long)DAT_800328a0;
  DAT_800328a0 = func;
  return uVar1;
}



void SetDispMask(int mask)

{
  uint uVar1;
  
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("SetDispMask(%d)...\n",mask);
  }
  if (mask == 0) {
    memset((uchar *)&DAT_80032900,0xff,0x14);
  }
  uVar1 = 0x3000001;
  if (mask != 0) {
    uVar1 = 0x3000000;
  }
  _ctl(uVar1);
  return;
}



int DrawSync(int mode)

{
  int extraout_v0;
  
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("DrawSync(%d)...\n",mode);
  }
  _sync();
  return extraout_v0;
}



// WARNING: Possible PIC construction at 0x80024770: Changing call to branch
// WARNING: Possible PIC construction at 0x80024808: Changing call to branch
// WARNING: Removing unreachable block (ram,0x80024770)
// WARNING: Removing unreachable block (ram,0x80024808)

void checkRECT(char *CallerName,RECT *recp)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (DAT_80032896 == '\x01') {
    iVar3 = (int)recp->w;
    if ((iVar3 <= DAT_80032898) && (iVar3 + recp->x <= (int)DAT_80032898)) {
      iVar1 = (int)recp->y;
      if (((iVar1 <= DAT_8003289a) &&
          (((iVar1 + recp->h <= (int)DAT_8003289a && (0 < iVar3)) && (-1 < recp->x)))) &&
         ((-1 < iVar1 && (0 < recp->h)))) {
        return;
      }
    }
    pcVar2 = "%s:bad RECT";
  }
  else {
    if (DAT_80032896 != '\x02') {
      return;
    }
    pcVar2 = "%s:";
  }
  (*(code *)PTR_printf_80032890)(pcVar2,CallerName);
  (*(code *)PTR_printf_80032890)
            ("(%d,%d)-(%d,%d)\n",(int)recp->x,(int)recp->y,(int)recp->w,(int)recp->h);
  return;
}



int ClearImage(RECT *rect,u_char r,u_char g,u_char b)

{
  uint uVar1;
  
  checkRECT("ClearImage",rect);
  uVar1 = _addque2();
  return uVar1;
}



int LoadImage(RECT *rect,u_long *p)

{
  uint uVar1;
  
  checkRECT("LoadImage",rect);
  uVar1 = _addque2();
  return uVar1;
}



int StoreImage(RECT *rect,u_long *p)

{
  uint uVar1;
  
  checkRECT("StoreImage",rect);
  uVar1 = _addque2();
  return uVar1;
}



int MoveImage(RECT *rect,int x,int y)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  RECT *pRVar4;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_retaddr;
  
  uVar3 = 0x10;
  pRVar4 = rect;
  iVar2 = y;
  checkRECT("MoveImage",rect);
  uVar1 = 0xffffffff;
  if (rect->w != 0) {
    if (rect->h == 0) {
      iVar2 = SYS_OBJ_834(uVar3,(char)pRVar4,(char)iVar2,in_a3,unaff_s0,unaff_s1,unaff_s2,
                          unaff_retaddr);
      return iVar2;
    }
    DAT_80032948 = y << 0x10 | x & 0xffffU;
    DAT_80032944._0_2_ = rect->x;
    DAT_80032944._2_2_ = rect->y;
    DAT_8003294c._0_2_ = rect->w;
    DAT_8003294c._2_2_ = rect->h;
    uVar1 = _addque2();
  }
  return uVar1;
}



void SYS_OBJ_834(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  return;
}



u_long * ClearOTag(u_long *ot,int n)

{
  int iVar1;
  
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("ClearOTag(%08x,%d)...\n",ot,n);
  }
  for (iVar1 = n + -1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined *)((int)ot + 3) = 0;
    *ot = *ot & 0xff000000 | (uint)(ot + 1) & 0xffffff;
    ot = ot + 1;
  }
  *ot = 0x32950;
  return ot;
}



u_long * ClearOTagR(u_long *ot,int n)

{
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("ClearOTagR(%08x,%d)...\n",ot,n);
  }
  _otc((int)ot,n);
  *ot = 0x32950;
  return ot;
}



void DrawPrim(void *p)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)((int)p + 3);
  _sync();
  _cwb((dword *)((int)p + 4),(int)uVar1);
  return;
}



void DrawOTag(u_long *p)

{
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("DrawOTag(%08x)...\n",p);
  }
  _addque2();
  return;
}



DRAWENV * PutDrawEnv(DRAWENV *env)

{
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("PutDrawEnv(%08x)...\n",env);
  }
  SetDrawEnv(&env->dr_env,env);
  (env->dr_env).tag = (env->dr_env).tag | 0xffffff;
  _addque2();
  memcpy("",(uchar *)env,0x5c);
  return env;
}



void DrawOTagEnv(uint param_1,undefined4 *param_2)

{
  if (1 < DAT_80032896) {
    (*(code *)PTR_printf_80032890)("DrawOTagEnv(%08x,&08x)...\n",param_1,param_2);
  }
  SetDrawEnv((DR_ENV *)(param_2 + 7),(DRAWENV *)param_2);
  param_2[7] = param_2[7] & 0xff000000 | param_1 & 0xffffff;
  _addque2();
  memcpy("",(uchar *)param_2,0x5c);
  return;
}



DRAWENV * GetDrawEnv(DRAWENV *env)

{
  memcpy((uchar *)env,"",0x5c);
  return env;
}



DISPENV * PutDispEnv(DISPENV *env)

{
  short sVar1;
  bool bVar2;
  DISPENV *pDVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined in_a1;
  undefined in_a2;
  uint uVar11;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  uint uVar12;
  undefined4 unaff_s2;
  uint uVar13;
  undefined4 unaff_s3;
  uint uVar14;
  undefined4 unaff_retaddr;
  
  uVar14 = 0x8000000;
  if (1 < DAT_80032896) {
    pDVar3 = env;
    (*(code *)PTR_printf_80032890)("PutDispEnv(%08x)...\n");
    in_a1 = SUB41(pDVar3,0);
  }
  if (DAT_80032894 - 1 < 2) {
    get_dx((short *)env);
    pDVar3 = (DISPENV *)SYS_OBJ_CFC();
    return pDVar3;
  }
  uVar8 = ((ushort)(env->disp).y & 0x3ff) << 10 | (ushort)(env->disp).x & 0x3ff | 0x5000000;
  _ctl(uVar8);
  uVar7 = (undefined)uVar8;
  if (((((env->screen).x == 0) && ((env->screen).y == 0)) && ((env->screen).w == 0)) &&
     ((env->screen).h == 0)) goto SYS_OBJ_F54;
  uVar4 = FUN_8001e884();
  sVar1 = (env->screen).x;
  env->pad0 = (u_char)uVar4;
  iVar5 = sVar1 * 10;
  uVar8 = iVar5 + 0x260;
  iVar9 = (int)(env->screen).y;
  uVar12 = iVar9 + 0x13;
  if (env->pad0 == '\0') {
    uVar12 = iVar9 + 0x10;
  }
  iVar6 = (int)(env->screen).w;
  if (iVar6 != 0) {
    pDVar3 = (DISPENV *)SYS_OBJ_DE8(iVar9,uVar8,uVar8 + iVar6 * 10);
    return pDVar3;
  }
  uVar11 = iVar5 + 0xc60;
  iVar5 = (int)(env->screen).h;
  uVar13 = uVar12 + iVar5;
  if (iVar5 == 0) {
    uVar13 = uVar12 + 0xf0;
  }
  uVar10 = 500;
  if ((499 < (int)uVar8) && (uVar10 = uVar8, 0xcda < (int)uVar8)) {
    uVar10 = 0xcda;
  }
  uVar8 = uVar10 + 0x50;
  if (((int)(uVar10 + 0x50) <= (int)uVar11) && (uVar8 = uVar11, 0xcda < (int)uVar11)) {
    uVar8 = 0xcda;
  }
  if ((int)uVar12 < 0x10) {
    uVar12 = 0x10;
  }
  else {
    if (env->pad0 == '\0') {
      if ((int)uVar12 < 0x101) {
        pDVar3 = (DISPENV *)SYS_OBJ_E9C(uVar12,uVar10,uVar8);
        return pDVar3;
      }
    }
    else if ((int)uVar12 < 0x137) {
      pDVar3 = (DISPENV *)SYS_OBJ_E9C(uVar12,uVar10,uVar8);
      return pDVar3;
    }
    uVar12 = 0x100;
    if (env->pad0 != '\0') {
      pDVar3 = (DISPENV *)SYS_OBJ_E9C(0x136,uVar10,uVar8);
      return pDVar3;
    }
  }
  uVar11 = uVar12 + 2;
  if ((int)(uVar12 + 2) <= (int)uVar13) {
    if (env->pad0 == '\0') {
      uVar11 = uVar13;
      if ((int)uVar13 < 0x103) goto code_r0x80025130;
    }
    else if ((int)uVar13 < 0x139) {
      pDVar3 = (DISPENV *)SYS_OBJ_EF8(uVar12,uVar10,uVar8);
      return pDVar3;
    }
    uVar11 = 0x102;
    if (env->pad0 != '\0') {
      pDVar3 = (DISPENV *)SYS_OBJ_EF8(uVar12,uVar10,uVar8);
      return pDVar3;
    }
  }
code_r0x80025130:
  _ctl((uVar8 & 0xfff) << 0xc | uVar10 & 0xfff | 0x6000000);
  in_a2 = (undefined)uVar8;
  in_a1 = 0x4c;
  uVar8 = (uVar11 & 0x3ff) << 10 | uVar12 | 0x7000000;
  _ctl(uVar8);
  uVar7 = (undefined)uVar8;
SYS_OBJ_F54:
  iVar5._0_1_ = env->isinter;
  iVar5._1_1_ = env->isrgb24;
  iVar5._2_1_ = env->pad0;
  iVar5._3_1_ = env->pad1;
  if ((((iVar5 != 0) || ((env->disp).x != 0)) || ((env->disp).y != 0)) ||
     (((env->disp).w != 0 || ((env->disp).h != 0)))) {
    uVar4 = FUN_8001e884();
    env->pad0 = (u_char)uVar4;
    if (env->pad0 == '\x01') {
      uVar14 = 0x8000008;
    }
    if (env->isrgb24 != '\0') {
      uVar14 = uVar14 | 0x10;
    }
    if (env->isinter != '\0') {
      uVar14 = uVar14 | 0x20;
    }
    if (DAT_80032897 != '\0') {
      uVar14 = uVar14 | 0x80;
    }
    sVar1 = (env->disp).w;
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        pDVar3 = (DISPENV *)
                 SYS_OBJ_1088(uVar7,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_s3,
                              unaff_retaddr);
        return pDVar3;
      }
      if (sVar1 < 0x191) {
        pDVar3 = (DISPENV *)
                 SYS_OBJ_1088(uVar7,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_s3,
                              unaff_retaddr);
        return pDVar3;
      }
      if (sVar1 < 0x231) {
        pDVar3 = (DISPENV *)
                 SYS_OBJ_1088(uVar7,in_a1,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,unaff_s3,
                              unaff_retaddr);
        return pDVar3;
      }
      uVar14 = uVar14 | 3;
    }
    sVar1 = (env->disp).h;
    bVar2 = sVar1 < 0x121;
    if (env->pad0 == '\0') {
      bVar2 = sVar1 < 0x101;
    }
    if (!bVar2) {
      uVar14 = uVar14 | 0x24;
    }
    _ctl(uVar14);
  }
  memcpy((uchar *)&DAT_80032900,(uchar *)env,0x14);
  return env;
}



void SYS_OBJ_CFC(void)

{
  short sVar1;
  bool bVar2;
  uint in_v0;
  undefined4 uVar3;
  uint in_v1;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined in_a1;
  undefined in_a2;
  uint uVar8;
  undefined in_a3;
  short *unaff_s0;
  uint uVar9;
  uint uVar10;
  uint unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  uVar5 = in_v0 | in_v1;
  _ctl(uVar5);
  uVar4 = (undefined)uVar5;
  if ((((unaff_s0[4] == 0) && (unaff_s0[5] == 0)) && (unaff_s0[6] == 0)) && (unaff_s0[7] == 0))
  goto SYS_OBJ_F54;
  uVar3 = FUN_8001e884();
  *(char *)(unaff_s0 + 9) = (char)uVar3;
  uVar5 = unaff_s0[4] * 10 + 0x260;
  iVar6 = (int)unaff_s0[5];
  uVar9 = iVar6 + 0x13;
  if (*(char *)(unaff_s0 + 9) == '\0') {
    uVar9 = iVar6 + 0x10;
  }
  if (unaff_s0[6] != 0) {
    SYS_OBJ_DE8(iVar6,uVar5,uVar5 + unaff_s0[6] * 10);
    return;
  }
  uVar8 = unaff_s0[4] * 10 + 0xc60;
  uVar10 = uVar9 + (int)unaff_s0[7];
  if (unaff_s0[7] == 0) {
    uVar10 = uVar9 + 0xf0;
  }
  uVar7 = 500;
  if ((499 < (int)uVar5) && (uVar7 = uVar5, 0xcda < (int)uVar5)) {
    uVar7 = 0xcda;
  }
  uVar5 = uVar7 + 0x50;
  if (((int)(uVar7 + 0x50) <= (int)uVar8) && (uVar5 = uVar8, 0xcda < (int)uVar8)) {
    uVar5 = 0xcda;
  }
  if ((int)uVar9 < 0x10) {
    uVar9 = 0x10;
  }
  else {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      if ((int)uVar9 < 0x101) {
        SYS_OBJ_E9C(uVar9,uVar7,uVar5);
        return;
      }
    }
    else if ((int)uVar9 < 0x137) {
      SYS_OBJ_E9C(uVar9,uVar7,uVar5);
      return;
    }
    uVar9 = 0x100;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_E9C(0x136,uVar7,uVar5);
      return;
    }
  }
  uVar8 = uVar9 + 2;
  if ((int)(uVar9 + 2) <= (int)uVar10) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar8 = uVar10;
      if ((int)uVar10 < 0x103) goto code_r0x80025130;
    }
    else if ((int)uVar10 < 0x139) {
      SYS_OBJ_EF8(uVar9,uVar7,uVar5);
      return;
    }
    uVar8 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_EF8(uVar9,uVar7,uVar5);
      return;
    }
  }
code_r0x80025130:
  _ctl((uVar5 & 0xfff) << 0xc | uVar7 & 0xfff | 0x6000000);
  in_a2 = (undefined)uVar5;
  in_a1 = 0x4c;
  uVar5 = (uVar8 & 0x3ff) << 10 | uVar9 | 0x7000000;
  _ctl(uVar5);
  uVar4 = (undefined)uVar5;
SYS_OBJ_F54:
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001e884();
    *(char *)(unaff_s0 + 9) = (char)uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_80032897 != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1088(uVar4,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1088(uVar4,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1088(uVar4,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80032900,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_DE8(undefined4 param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  uint uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined in_a3;
  short *unaff_s0;
  uint unaff_s1;
  uint uVar11;
  uint unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  uVar11 = unaff_s1 + (int)unaff_s0[7];
  if (unaff_s0[7] == 0) {
    uVar11 = unaff_s1 + 0xf0;
  }
  uVar7 = 500;
  if ((499 < (int)param_2) && (uVar7 = param_2, 0xcda < (int)param_2)) {
    uVar7 = 0xcda;
  }
  uVar4 = uVar7 + 0x50;
  if (((int)(uVar7 + 0x50) <= (int)param_3) && (uVar4 = param_3, 0xcda < (int)param_3)) {
    uVar4 = 0xcda;
  }
  if ((int)unaff_s1 < 0x10) {
    uVar8 = 0x10;
  }
  else {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      if ((int)unaff_s1 < 0x101) {
        SYS_OBJ_E9C(unaff_s1,uVar7,uVar4);
        return;
      }
    }
    else if ((int)unaff_s1 < 0x137) {
      SYS_OBJ_E9C(unaff_s1,uVar7,uVar4);
      return;
    }
    uVar8 = 0x100;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_E9C(0x136,uVar7,uVar4);
      return;
    }
  }
  uVar5 = uVar8 + 2;
  if ((int)(uVar8 + 2) <= (int)uVar11) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar5 = uVar11;
      if ((int)uVar11 < 0x103) goto code_r0x80025130;
    }
    else if ((int)uVar11 < 0x139) {
      SYS_OBJ_EF8(uVar8,uVar7,uVar4);
      return;
    }
    uVar5 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_EF8(uVar8,uVar7,uVar4);
      return;
    }
  }
code_r0x80025130:
  _ctl((uVar4 & 0xfff) << 0xc | uVar7 & 0xfff | 0x6000000);
  uVar10 = (undefined)uVar4;
  uVar9 = 0x4c;
  uVar11 = (uVar5 & 0x3ff) << 10 | uVar8 | 0x7000000;
  _ctl(uVar11);
  uVar6 = (undefined)uVar11;
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001e884();
    *(char *)(unaff_s0 + 9) = (char)uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_80032897 != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1088(uVar6,uVar9,uVar10,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1088(uVar6,uVar9,uVar10,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1088(uVar6,uVar9,uVar10,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80032900,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_E9C(uint param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined uVar6;
  undefined uVar7;
  undefined in_a3;
  short *unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint uVar5;
  
  uVar5 = param_1 + 2;
  if ((int)(param_1 + 2) <= (int)unaff_s2) {
    if (*(char *)(unaff_s0 + 9) == '\0') {
      uVar5 = unaff_s2;
      if ((int)unaff_s2 < 0x103) goto code_r0x80025130;
    }
    else if ((int)unaff_s2 < 0x139) {
      SYS_OBJ_EF8(param_1,param_2,param_3);
      return;
    }
    uVar5 = 0x102;
    if (*(char *)(unaff_s0 + 9) != '\0') {
      SYS_OBJ_EF8(param_1,param_2,param_3);
      return;
    }
  }
code_r0x80025130:
  _ctl((param_3 & 0xfff) << 0xc | param_2 & 0xfff | 0x6000000);
  uVar7 = (undefined)param_3;
  uVar6 = 0x4c;
  uVar5 = (uVar5 & 0x3ff) << 10 | param_1 & 0x3ff | 0x7000000;
  _ctl(uVar5);
  uVar4 = (undefined)uVar5;
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001e884();
    *(char *)(unaff_s0 + 9) = (char)uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_80032897 != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80032900,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_EF8(undefined4 param_1,uint param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  uint in_v1;
  undefined uVar4;
  undefined uVar6;
  undefined uVar7;
  undefined in_a3;
  short *unaff_s0;
  uint unaff_s1;
  uint unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint uVar5;
  
  _ctl((param_3 & 0xfff) << 0xc | param_2 & 0xfff | 0x6000000);
  uVar7 = (undefined)param_3;
  uVar6 = 0x4c;
  uVar5 = (in_v1 & 0x3ff) << 10 | unaff_s1 & 0x3ff | 0x7000000;
  _ctl(uVar5);
  uVar4 = (undefined)uVar5;
  if ((((*(int *)(unaff_s0 + 8) != 0) || (*unaff_s0 != 0)) || (unaff_s0[1] != 0)) ||
     ((unaff_s0[2] != 0 || (unaff_s0[3] != 0)))) {
    uVar3 = FUN_8001e884();
    *(char *)(unaff_s0 + 9) = (char)uVar3;
    if (*(char *)(unaff_s0 + 9) == '\x01') {
      unaff_s3 = unaff_s3 | 8;
    }
    if (*(char *)((int)unaff_s0 + 0x11) != '\0') {
      unaff_s3 = unaff_s3 | 0x10;
    }
    if (*(char *)(unaff_s0 + 8) != '\0') {
      unaff_s3 = unaff_s3 | 0x20;
    }
    if (DAT_80032897 != '\0') {
      unaff_s3 = unaff_s3 | 0x80;
    }
    sVar1 = unaff_s0[2];
    if (0x118 < sVar1) {
      if (sVar1 < 0x161) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x191) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      if (sVar1 < 0x231) {
        SYS_OBJ_1088(uVar4,uVar6,uVar7,in_a3,in_stack_00000010,in_stack_00000014,in_stack_00000018,
                     in_stack_0000001c,in_stack_00000020);
        return;
      }
      unaff_s3 = unaff_s3 | 3;
    }
    bVar2 = unaff_s0[3] < 0x121;
    if (*(char *)(unaff_s0 + 9) == '\0') {
      bVar2 = unaff_s0[3] < 0x101;
    }
    if (!bVar2) {
      unaff_s3 = unaff_s3 | 0x24;
    }
    _ctl(unaff_s3);
  }
  memcpy((uchar *)&DAT_80032900,(uchar *)unaff_s0,0x14);
  return;
}



void SYS_OBJ_1088(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  bool bVar1;
  uchar *unaff_s0;
  uint unaff_s3;
  
  bVar1 = *(short *)(unaff_s0 + 6) < 0x121;
  if (unaff_s0[0x12] == '\0') {
    bVar1 = *(short *)(unaff_s0 + 6) < 0x101;
  }
  if (!bVar1) {
    unaff_s3 = unaff_s3 | 0x24;
  }
  _ctl(unaff_s3);
  memcpy((uchar *)&DAT_80032900,unaff_s0,0x14);
  return;
}



DISPENV * GetDispEnv(DISPENV *env)

{
  memcpy((uchar *)env,(uchar *)&DAT_80032900,0x14);
  return env;
}



uint GetODE(void)

{
  dword dVar1;
  
  dVar1 = _status();
  return dVar1 >> 0x1f;
}



void SetTexWindow(DR_TWIN *p,RECT *tw)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_tw((byte *)tw);
  p->code[0] = uVar1;
  p->code[1] = 0;
  return;
}



void SetDrawArea(DR_AREA *p,RECT *r)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_cs(r->x,r->y);
  p->code[0] = uVar1;
  uVar1 = get_ce(r->x + r->w + -1,r->y + r->h + -1);
  p->code[1] = uVar1;
  return;
}



void SetDrawOffset(DR_OFFSET *p,u_short *ofs)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_ofs((int)(short)*ofs,(int)(short)ofs[1]);
  p->code[0] = uVar1;
  p->code[1] = 0;
  return;
}



void SetPriority(DR_PRIO *p,int pbc,int pbw)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = 0xe6000000;
  if (pbc != 0) {
    uVar1 = 0xe6000002;
  }
  p->code[0] = uVar1 | pbw != 0;
  p->code[1] = 0;
  return;
}



void SetDrawMode(DR_MODE *p,int dfe,int dtd,int tpage,RECT *tw)

{
  uint uVar1;
  
  *(undefined *)((int)&p->tag + 3) = 2;
  uVar1 = get_mode(dfe,dtd,tpage & 0xffff);
  p->code[0] = uVar1;
  uVar1 = get_tw((byte *)tw);
  p->code[1] = uVar1;
  return;
}



void SetDrawEnv(DR_ENV *dr_env,DRAWENV *env)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  u_long uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  undefined uVar11;
  uint uVar12;
  undefined uVar13;
  uint uVar14;
  undefined in_a3;
  char cVar15;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  
  uVar10 = get_cs((env->clip).x,(env->clip).y);
  dr_env->code[0] = uVar10;
  uVar10 = get_ce((env->clip).w + (env->clip).x + -1,(env->clip).y + (env->clip).h + -1);
  dr_env->code[1] = uVar10;
  uVar10 = get_ofs((int)env->ofs[0],(int)env->ofs[1]);
  dr_env->code[2] = uVar10;
  uVar12 = (uint)env->dtd;
  uVar14 = (uint)env->tpage;
  uVar10 = get_mode((uint)env->dfe,uVar12,uVar14);
  uVar13 = (undefined)uVar14;
  uVar11 = (undefined)uVar12;
  dr_env->code[3] = uVar10;
  uVar10 = get_tw((byte *)&env->tw);
  dr_env->code[4] = uVar10;
  dr_env->code[5] = 0xe6000000;
  cVar15 = '\a';
  if (env->isbg != '\0') {
    uVar2 = (env->clip).x;
    sVar3 = (env->clip).y;
    uVar6._0_2_ = (env->clip).x;
    uVar6._2_2_ = (env->clip).y;
    uVar4 = (env->clip).w;
    sVar8 = (env->clip).h;
    uVar7 = 0;
    if ((-1 < (short)uVar4) && (uVar7 = uVar4, DAT_80032898 + -1 < (int)(short)uVar4)) {
      uVar7 = (ushort)(DAT_80032898 + -1);
    }
    if (sVar8 < 0) {
      sVar8 = 0;
    }
    else if (DAT_8003289a + -1 < (int)sVar8) {
      SYS_OBJ_1454((char)(DAT_8003289a + -1),uVar11,uVar13,in_a3,uVar6,CONCAT22(sVar8,uVar7));
      return;
    }
    if (((uVar2 & 0x3f) != 0) || ((uVar7 & 0x3f) != 0)) {
      sVar9 = uVar2 - env->ofs[0];
      sVar5 = env->ofs[1];
      bVar1 = env->r0;
      dr_env->code[6] = (uint)env->b0 << 0x10 | (uint)env->g0 << 8 | 0x60000000 | (uint)bVar1;
      dr_env->code[7] = CONCAT22(sVar3 - sVar5,sVar9);
      dr_env->code[8] = CONCAT22(sVar8,uVar7);
      SYS_OBJ_1570(bVar1,(char)(dr_env->code + 7),(char)(dr_env->code + 6),in_a3,
                   (char)sVar9 + (char)env->ofs[0],(char)uVar7,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    cVar15 = '\n';
    dr_env->code[6] = (uint)env->b0 << 0x10 | (uint)env->g0 << 8 | 0x2000000 | (uint)env->r0;
    dr_env->code[7] = uVar6;
    dr_env->code[8] = CONCAT22(sVar8,uVar7);
  }
  *(char *)((int)&dr_env->tag + 3) = cVar15 + -1;
  return;
}



void SYS_OBJ_1454(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 uint param_5,undefined4 param_6)

{
  byte bVar1;
  undefined2 in_v0;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int in_t0;
  int unaff_s0;
  int unaff_s1;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  param_6 = CONCAT22(in_v0,(ushort)param_6);
  if (((param_5 & 0x3f) == 0) && (((ushort)param_6 & 0x3f) == 0)) {
    *(uint *)(in_t0 * 4 + unaff_s1) =
         (uint)*(byte *)(unaff_s0 + 0x1b) << 0x10 |
         (uint)*(byte *)(unaff_s0 + 0x1a) << 8 | 0x2000000 | (uint)*(byte *)(unaff_s0 + 0x19);
    *(uint *)((in_t0 + 1) * 4 + unaff_s1) = param_5;
    *(undefined4 *)((in_t0 + 2) * 4 + unaff_s1) = param_6;
    *(char *)(unaff_s1 + 3) = (char)in_t0 + '\x02';
    return;
  }
  puVar4 = (uint *)(in_t0 * 4 + unaff_s1);
  sVar2 = (short)param_5 - *(short *)(unaff_s0 + 8);
  param_5 = CONCAT22(param_5._2_2_ - *(short *)(unaff_s0 + 10),sVar2);
  bVar1 = *(byte *)(unaff_s0 + 0x19);
  *puVar4 = (uint)*(byte *)(unaff_s0 + 0x1b) << 0x10 |
            (uint)*(byte *)(unaff_s0 + 0x1a) << 8 | 0x60000000 | (uint)bVar1;
  puVar3 = (undefined4 *)((in_t0 + 1) * 4 + unaff_s1);
  *puVar3 = param_5;
  *(undefined4 *)((in_t0 + 2) * 4 + unaff_s1) = param_6;
  param_5._0_1_ = (char)sVar2 + (char)*(undefined2 *)(unaff_s0 + 8);
  SYS_OBJ_1570(bVar1,(char)puVar3,(char)puVar4,param_4,(char)param_5,(undefined)param_6,
               in_stack_00000018,in_stack_0000001c,in_stack_00000020);
  return;
}



void SYS_OBJ_1570(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  char in_t0;
  int unaff_s1;
  
  *(char *)(unaff_s1 + 3) = in_t0 + -1;
  return;
}



uint get_mode(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_80032894 - 1 < 2) {
    uVar2 = 0xe1000000;
    if (param_2 != 0) {
      uVar2 = 0xe1000800;
    }
    uVar1 = param_3 & 0x27ff;
    if (param_1 != 0) {
      uVar2 = SYS_OBJ_15E4();
      return uVar2;
    }
  }
  else {
    uVar2 = 0xe1000000;
    if (param_2 != 0) {
      uVar2 = 0xe1000200;
    }
    uVar1 = param_3 & 0x9ff;
    if (param_1 != 0) {
      uVar1 = uVar1 | 0x400;
    }
  }
  return uVar2 | uVar1;
}



uint SYS_OBJ_15E4(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0;
}



uint get_cs(short param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar1 = 0;
  if ((-1 < (int)uVar3) && (uVar1 = uVar3, (int)((int)DAT_80032898 - 1U) < (int)uVar3)) {
    uVar1 = (int)DAT_80032898 - 1U;
  }
  uVar2 = (uint)param_2;
  uVar3 = 0;
  if ((-1 < (int)uVar2) && (uVar3 = uVar2, (int)((int)DAT_8003289a - 1U) < (int)uVar2)) {
    uVar3 = (int)DAT_8003289a - 1U;
  }
  if (DAT_80032894 - 1 < 2) {
    return (uVar3 & 0xfff) << 0xc | uVar1 & 0xfff | 0xe3000000;
  }
  uVar1 = SYS_OBJ_16A8();
  return uVar1;
}



uint SYS_OBJ_16A8(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe3000000;
}



uint get_ce(short param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar1 = 0;
  if ((-1 < (int)uVar3) && (uVar1 = uVar3, (int)((int)DAT_80032898 - 1U) < (int)uVar3)) {
    uVar1 = (int)DAT_80032898 - 1U;
  }
  uVar2 = (uint)param_2;
  uVar3 = 0;
  if ((-1 < (int)uVar2) && (uVar3 = uVar2, (int)((int)DAT_8003289a - 1U) < (int)uVar2)) {
    uVar3 = (int)DAT_8003289a - 1U;
  }
  if (DAT_80032894 - 1 < 2) {
    return (uVar3 & 0xfff) << 0xc | uVar1 & 0xfff | 0xe4000000;
  }
  uVar1 = SYS_OBJ_1774();
  return uVar1;
}



uint SYS_OBJ_1774(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe4000000;
}



uint get_ofs(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (1 < DAT_80032894 - 1) {
    uVar1 = SYS_OBJ_17BC();
    return uVar1;
  }
  return (param_2 & 0xfff) << 0xc | param_1 & 0xfff | 0xe5000000;
}



uint SYS_OBJ_17BC(void)

{
  uint in_v0;
  uint in_v1;
  
  return in_v1 | in_v0 | 0xe5000000;
}



uint get_tw(byte *param_1)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = SYS_OBJ_1844();
    return uVar1;
  }
  return (uint)(param_1[2] >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
         ((int)(-(int)*(short *)(param_1 + 6) & 0xffU) >> 3) << 5 |
         (int)(-(int)*(short *)(param_1 + 4) & 0xffU) >> 3;
}



void SYS_OBJ_1844(void)

{
  return;
}



int get_dx(short *param_1)

{
  int iVar1;
  
  if (DAT_80032894 == '\x01') {
    if (DAT_80032897 != '\0') {
      iVar1 = SYS_OBJ_1904();
      return iVar1;
    }
    return (int)*param_1;
  }
  if (DAT_80032894 != '\x02') {
    iVar1 = SYS_OBJ_1900(param_1);
    return iVar1;
  }
  if (DAT_80032897 != '\0') {
    iVar1 = SYS_OBJ_189C();
    return iVar1;
  }
  iVar1 = SYS_OBJ_1904();
  return iVar1;
}



void SYS_OBJ_189C(void)

{
  SYS_OBJ_1904();
  return;
}



int SYS_OBJ_1900(short *param_1)

{
  return (int)*param_1;
}



void SYS_OBJ_1904(void)

{
  return;
}



dword _status(void)

{
  return GPU_REG1;
}



dword _otc(int param_1,dword param_2)

{
  int iVar1;
  
  DMA_DPCR = DMA_DPCR | 0x8000000;
  DMA_OTC_MADR = param_1 + param_2 * 4 + -4;
  DMA_OTC_CHCR = 0x11000002;
  DMA_OTC_BCR = param_2;
  set_alarm();
  do {
    if ((DMA_OTC_CHCR & 0x1000000) == 0) {
      return param_2;
    }
    iVar1 = get_alarm();
  } while (iVar1 == 0);
  return 0xffffffff;
}



undefined4 _clr(undefined4 *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  
  sVar1 = *(short *)(param_1 + 1);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  else if (DAT_80032898 + -1 < (int)sVar1) {
    uVar2 = SYS_OBJ_1A68();
    return uVar2;
  }
  sVar4 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar1;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else if (DAT_8003289a + -1 < (int)sVar4) {
    uVar2 = SYS_OBJ_1AAC();
    return uVar2;
  }
  *(short *)((int)param_1 + 6) = sVar4;
  if (((*(ushort *)param_1 & 0x3f) == 0) && ((*(ushort *)(param_1 + 1) & 0x3f) == 0)) {
    DAT_80036eb4 = 0x4ffffff;
    DAT_80036eb8 = 0xe6000000;
    DAT_80036ebc = param_2 & 0xffffff | 0x2000000;
    DAT_80036ec0 = *param_1;
    DAT_80036ec4 = param_1[1];
    _cwc((dword)&DAT_80036eb4);
    return 0;
  }
  uVar6 = 0xff;
  uVar7 = 0xd4;
  DAT_80036eb4 = 0x7036ed4;
  DAT_80036ec4 = 0xe6000000;
  DAT_80036ec8 = param_2 & 0xffffff | 0x60000000;
  DAT_80036eb8 = 0xe3000000;
  DAT_80036ebc = 0xe4ffffff;
  DAT_80036ec0 = 0xe5000000;
  DAT_80036ecc = *param_1;
  uVar8 = 0xff;
  DAT_80036ed0 = param_1[1];
  DAT_80036ed4 = 0x3ffffff;
  uVar3 = _param(3);
  DAT_80036ed8 = uVar3 | 0xe3000000;
  uVar3 = _param(4);
  DAT_80036edc = uVar3 | 0xe4000000;
  uVar5 = 5;
  uVar3 = _param(5);
  DAT_80036ee0 = uVar3 | 0xe5000000;
  uVar2 = SYS_OBJ_1BF8(uVar5,uVar6,uVar7,uVar8,unaff_s0,unaff_s1,unaff_retaddr);
  return uVar2;
}



undefined4 SYS_OBJ_1A68(void)

{
  ushort in_v0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 *in_t0;
  uint in_t1;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  uVar3 = *(ushort *)((int)in_t0 + 6);
  *(ushort *)(in_t0 + 1) = in_v0;
  if ((short)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (DAT_8003289a + -1 < (int)(short)uVar3) {
    uVar1 = SYS_OBJ_1AAC();
    return uVar1;
  }
  *(ushort *)((int)in_t0 + 6) = uVar3;
  if (((*(ushort *)in_t0 & 0x3f) == 0) && ((*(ushort *)(in_t0 + 1) & 0x3f) == 0)) {
    DAT_80036eb4 = 0x4ffffff;
    DAT_80036eb8 = 0xe6000000;
    DAT_80036ebc = in_t1 & 0xffffff | 0x2000000;
    DAT_80036ec0 = *in_t0;
    DAT_80036ec4 = in_t0[1];
    _cwc((dword)&DAT_80036eb4);
    return 0;
  }
  uVar5 = 0xff;
  uVar6 = 0xd4;
  DAT_80036eb4 = 0x7036ed4;
  DAT_80036ec4 = 0xe6000000;
  DAT_80036ec8 = in_t1 & 0xffffff | 0x60000000;
  DAT_80036eb8 = 0xe3000000;
  DAT_80036ebc = 0xe4ffffff;
  DAT_80036ec0 = 0xe5000000;
  DAT_80036ecc = *in_t0;
  uVar7 = 0xff;
  DAT_80036ed0 = in_t0[1];
  DAT_80036ed4 = 0x3ffffff;
  uVar2 = _param(3);
  DAT_80036ed8 = uVar2 | 0xe3000000;
  uVar2 = _param(4);
  DAT_80036edc = uVar2 | 0xe4000000;
  uVar4 = 5;
  uVar2 = _param(5);
  DAT_80036ee0 = uVar2 | 0xe5000000;
  uVar1 = SYS_OBJ_1BF8(uVar4,uVar5,uVar6,uVar7,in_stack_00000010,in_stack_00000014,in_stack_00000018
                      );
  return uVar1;
}



undefined4 SYS_OBJ_1AAC(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort in_v1;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined4 *in_t0;
  uint in_t1;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(ushort *)((int)in_t0 + 6) = in_v1;
  if (((*(ushort *)in_t0 & 0x3f) == 0) && ((*(ushort *)(in_t0 + 1) & 0x3f) == 0)) {
    DAT_80036eb4 = 0x4ffffff;
    DAT_80036eb8 = 0xe6000000;
    DAT_80036ebc = in_t1 & 0xffffff | 0x2000000;
    DAT_80036ec0 = *in_t0;
    DAT_80036ec4 = in_t0[1];
    _cwc((dword)&DAT_80036eb4);
    return 0;
  }
  uVar4 = 0xff;
  uVar5 = 0xd4;
  DAT_80036eb4 = 0x7036ed4;
  DAT_80036ec4 = 0xe6000000;
  DAT_80036ec8 = in_t1 & 0xffffff | 0x60000000;
  DAT_80036eb8 = 0xe3000000;
  DAT_80036ebc = 0xe4ffffff;
  DAT_80036ec0 = 0xe5000000;
  DAT_80036ecc = *in_t0;
  uVar6 = 0xff;
  DAT_80036ed0 = in_t0[1];
  DAT_80036ed4 = 0x3ffffff;
  uVar1 = _param(3);
  DAT_80036ed8 = uVar1 | 0xe3000000;
  uVar1 = _param(4);
  DAT_80036edc = uVar1 | 0xe4000000;
  uVar3 = 5;
  uVar1 = _param(5);
  DAT_80036ee0 = uVar1 | 0xe5000000;
  uVar2 = SYS_OBJ_1BF8(uVar3,uVar4,uVar5,uVar6,in_stack_00000010,in_stack_00000014,in_stack_00000018
                      );
  return uVar2;
}



undefined4
SYS_OBJ_1BF8(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  _cwc((dword)&DAT_80036eb4);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x80025fd8)

undefined4 _dws(int param_1,dword *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffd0;
  undefined in_stack_ffffffd4;
  undefined in_stack_ffffffd8;
  undefined in_stack_ffffffdc;
  
  set_alarm();
  sVar5 = *(short *)(param_1 + 4);
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  else if (DAT_80032898 < sVar5) {
    uVar2 = SYS_OBJ_1C94();
    return uVar2;
  }
  sVar1 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 4) = sVar5;
  if (sVar1 < 0) {
    sVar5 = 0;
  }
  else {
    in_a2 = 0x9a;
    sVar5 = sVar1;
    if (DAT_8003289a < sVar1) {
      uVar2 = SYS_OBJ_1CDC(DAT_8003289a);
      return uVar2;
    }
  }
  *(short *)(param_1 + 6) = sVar5;
  iVar3 = (int)*(short *)(param_1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar3 / 2;
  iVar3 = iVar3 - (iVar3 >> 0x1f) >> 5;
  if (0 < iVar6) {
    iVar6 = iVar6 + iVar3 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(param_1 + 4);
        while (iVar6 = iVar6 + -1, iVar6 != -1) {
          GPU_REG0 = *param_2;
          param_2 = param_2 + 1;
        }
        if (iVar3 != 0) {
          GPU_REG1 = 0x4000002;
          DMA_GPU_BCR = iVar3 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000201;
          DMA_GPU_MADR = (dword)param_2;
        }
        return 0;
      }
      iVar4 = get_alarm();
    } while (iVar4 == 0);
    return 0xffffffff;
  }
  uVar2 = SYS_OBJ_1E50((char)iVar6,(char)sVar1,in_a2,in_a3,in_stack_ffffffd0,in_stack_ffffffd4,
                       in_stack_ffffffd8,in_stack_ffffffdc,unaff_s0,unaff_s1,unaff_s2,unaff_s3,
                       unaff_s4,unaff_s5,unaff_retaddr);
  return uVar2;
}



undefined4 SYS_OBJ_1C94(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 in_v1;
  short sVar5;
  int iVar6;
  undefined in_a2;
  undefined in_a3;
  int unaff_s1;
  dword *unaff_s2;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  sVar1 = *(short *)(unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 4) = in_v1;
  if (sVar1 < 0) {
    sVar5 = 0;
  }
  else {
    in_a2 = 0x9a;
    sVar5 = sVar1;
    if (DAT_8003289a < sVar1) {
      uVar2 = SYS_OBJ_1CDC(DAT_8003289a);
      return uVar2;
    }
  }
  *(short *)(unaff_s1 + 6) = sVar5;
  iVar3 = (int)*(short *)(unaff_s1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar3 / 2;
  iVar3 = iVar3 - (iVar3 >> 0x1f) >> 5;
  if (0 < iVar6) {
    iVar6 = iVar6 + iVar3 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(unaff_s1 + 4);
        while (iVar6 = iVar6 + -1, iVar6 != -1) {
          GPU_REG0 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
        }
        if (iVar3 != 0) {
          GPU_REG1 = 0x4000002;
          DMA_GPU_BCR = iVar3 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000201;
          DMA_GPU_MADR = (dword)unaff_s2;
        }
        return 0;
      }
      iVar4 = get_alarm();
    } while (iVar4 == 0);
    return 0xffffffff;
  }
  uVar2 = SYS_OBJ_1E50((char)iVar6,(char)sVar1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                       in_stack_00000038);
  return uVar2;
}



undefined4 SYS_OBJ_1CDC(undefined2 param_1)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  int unaff_s1;
  dword *unaff_s2;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  *(undefined2 *)(unaff_s1 + 6) = param_1;
  iVar1 = (int)*(short *)(unaff_s1 + 4) * (in_v0 >> 0x10) + 1;
  iVar4 = iVar1 / 2;
  iVar1 = iVar1 - (iVar1 >> 0x1f) >> 5;
  if (iVar4 < 1) {
    uVar2 = SYS_OBJ_1E50((char)iVar4,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                         in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                         in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
                         in_stack_00000038);
    return uVar2;
  }
  iVar4 = iVar4 + iVar1 * -0x10;
  do {
    if ((GPU_REG1 & 0x4000000) != 0) {
      GPU_REG1 = 0x4000000;
      GPU_REG0 = *(dword *)(unaff_s1 + 4);
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        GPU_REG0 = *unaff_s2;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar1 != 0) {
        GPU_REG1 = 0x4000002;
        DMA_GPU_BCR = iVar1 << 0x10 | 0x10;
        DMA_GPU_CHCR = 0x1000201;
        DMA_GPU_MADR = (dword)unaff_s2;
      }
      return 0;
    }
    iVar3 = get_alarm();
  } while (iVar3 == 0);
  return 0xffffffff;
}



void SYS_OBJ_1E50(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  return;
}



undefined4 _drs(int param_1,dword *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_retaddr;
  undefined in_stack_ffffffd8;
  undefined in_stack_ffffffdc;
  undefined in_stack_ffffffe0;
  undefined in_stack_ffffffe4;
  
  set_alarm();
  sVar5 = *(short *)(param_1 + 4);
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  else if (DAT_80032898 < sVar5) {
    uVar2 = SYS_OBJ_1EE4();
    return uVar2;
  }
  sVar1 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 4) = sVar5;
  if (sVar1 < 0) {
    sVar5 = 0;
  }
  else {
    in_a2 = 0x9a;
    sVar5 = sVar1;
    if (DAT_8003289a < sVar1) {
      uVar2 = SYS_OBJ_1F2C(DAT_8003289a);
      return uVar2;
    }
  }
  *(short *)(param_1 + 6) = sVar5;
  iVar3 = (int)*(short *)(param_1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar3 / 2;
  iVar3 = iVar3 - (iVar3 >> 0x1f) >> 5;
  if (0 < iVar6) {
    iVar6 = iVar6 + iVar3 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(param_1 + 4);
        do {
          iVar4 = get_alarm();
          if (iVar4 != 0) {
            return 0xffffffff;
          }
        } while ((GPU_REG1 & 0x8000000) == 0);
        while (iVar6 = iVar6 + -1, iVar6 != -1) {
          *param_2 = GPU_REG0;
          param_2 = param_2 + 1;
        }
        if (iVar3 != 0) {
          GPU_REG1 = 0x4000003;
          DMA_GPU_BCR = iVar3 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000200;
          DMA_GPU_MADR = (dword)param_2;
        }
        return 0;
      }
      iVar4 = get_alarm();
    } while (iVar4 == 0);
    return 0xffffffff;
  }
  uVar2 = SYS_OBJ_20F0((char)iVar6,(char)sVar1,in_a2,in_a3,in_stack_ffffffd8,in_stack_ffffffdc,
                       in_stack_ffffffe0,in_stack_ffffffe4,unaff_s0,unaff_s1,unaff_s2,unaff_s3,
                       unaff_s4,unaff_retaddr);
  return uVar2;
}



undefined4 SYS_OBJ_1EE4(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 in_v1;
  short sVar5;
  int iVar6;
  undefined in_a2;
  undefined in_a3;
  int unaff_s1;
  dword *unaff_s2;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  sVar1 = *(short *)(unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 4) = in_v1;
  if (sVar1 < 0) {
    sVar5 = 0;
  }
  else {
    in_a2 = 0x9a;
    sVar5 = sVar1;
    if (DAT_8003289a < sVar1) {
      uVar2 = SYS_OBJ_1F2C(DAT_8003289a);
      return uVar2;
    }
  }
  *(short *)(unaff_s1 + 6) = sVar5;
  iVar3 = (int)*(short *)(unaff_s1 + 4) * (int)sVar5 + 1;
  iVar6 = iVar3 / 2;
  iVar3 = iVar3 - (iVar3 >> 0x1f) >> 5;
  if (0 < iVar6) {
    iVar6 = iVar6 + iVar3 * -0x10;
    do {
      if ((GPU_REG1 & 0x4000000) != 0) {
        GPU_REG1 = 0x4000000;
        GPU_REG0 = *(dword *)(unaff_s1 + 4);
        do {
          iVar4 = get_alarm();
          if (iVar4 != 0) {
            return 0xffffffff;
          }
        } while ((GPU_REG1 & 0x8000000) == 0);
        while (iVar6 = iVar6 + -1, iVar6 != -1) {
          *unaff_s2 = GPU_REG0;
          unaff_s2 = unaff_s2 + 1;
        }
        if (iVar3 != 0) {
          GPU_REG1 = 0x4000003;
          DMA_GPU_BCR = iVar3 << 0x10 | 0x10;
          DMA_GPU_CHCR = 0x1000200;
          DMA_GPU_MADR = (dword)unaff_s2;
        }
        return 0;
      }
      iVar4 = get_alarm();
    } while (iVar4 == 0);
    return 0xffffffff;
  }
  uVar2 = SYS_OBJ_20F0((char)iVar6,(char)sVar1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                       in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
  return uVar2;
}



undefined4 SYS_OBJ_1F2C(undefined2 param_1)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  int unaff_s1;
  dword *unaff_s2;
  undefined in_stack_00000010;
  undefined in_stack_00000014;
  undefined in_stack_00000018;
  undefined in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  
  *(undefined2 *)(unaff_s1 + 6) = param_1;
  iVar1 = (int)*(short *)(unaff_s1 + 4) * (in_v0 >> 0x10) + 1;
  iVar4 = iVar1 / 2;
  iVar1 = iVar1 - (iVar1 >> 0x1f) >> 5;
  if (iVar4 < 1) {
    uVar2 = SYS_OBJ_20F0((char)iVar4,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014,
                         in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
                         in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
    return uVar2;
  }
  iVar4 = iVar4 + iVar1 * -0x10;
  do {
    if ((GPU_REG1 & 0x4000000) != 0) {
      GPU_REG1 = 0x4000000;
      GPU_REG0 = *(dword *)(unaff_s1 + 4);
      do {
        iVar3 = get_alarm();
        if (iVar3 != 0) {
          return 0xffffffff;
        }
      } while ((GPU_REG1 & 0x8000000) == 0);
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        *unaff_s2 = GPU_REG0;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar1 != 0) {
        GPU_REG1 = 0x4000003;
        DMA_GPU_BCR = iVar1 << 0x10 | 0x10;
        DMA_GPU_CHCR = 0x1000200;
        DMA_GPU_MADR = (dword)unaff_s2;
      }
      return 0;
    }
    iVar3 = get_alarm();
  } while (iVar3 == 0);
  return 0xffffffff;
}



void SYS_OBJ_20F0(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined param_7,undefined param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  return;
}



void _ctl(uint param_1)

{
  GPU_REG1 = param_1;
  (&DAT_80036ef4)[param_1 >> 0x18] = (char)param_1;
  return;
}



undefined _getctl(int param_1)

{
  return (&DAT_80036ef4)[param_1];
}



undefined4 _cwb(dword *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  GPU_REG1 = 0x4000000;
  if (param_2 != 0) {
    do {
      GPU_REG0 = *param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}



void _cwc(dword param_1)

{
  GPU_REG1 = 0x4000002;
  DMA_GPU_MADR = param_1;
  DMA_GPU_BCR = 0;
  DMA_GPU_CHCR = 0x1000401;
  return;
}



uint _param(uint param_1)

{
  GPU_REG1 = param_1 | 0x10000000;
  return GPU_REG0 & 0xffffff;
}



void _addque(void)

{
  _addque2();
  return;
}



uint _addque2(void)

{
  uint uVar1;
  
  set_alarm();
  uVar1 = SYS_OBJ_228C();
  return uVar1;
}



uint SYS_OBJ_228C(void)

{
  word wVar1;
  undefined2 extraout_var;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  undefined uVar7;
  undefined4 in_a2;
  int iVar8;
  undefined uVar9;
  undefined4 in_a3;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  code *unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  while( true ) {
    uVar9 = (undefined)in_a3;
    uVar7 = (undefined)in_a2;
    if ((DAT_80032998 + 1 & 0x3f) != DAT_8003299c) break;
    iVar8 = get_alarm();
    if (iVar8 != 0) {
      return 0xffffffff;
    }
    _exeque();
  }
  wVar1 = SetIntrMask(0);
  DAT_800329a0 = CONCAT22(extraout_var,wVar1);
  DAT_8003289c = 1;
  if ((DAT_80032895 != '\0') &&
     (((DAT_80032998 != DAT_8003299c || ((DMA_GPU_CHCR & 0x1000000) != 0)) || (DAT_800328a0 != 0))))
  {
    DMACallback();
    iVar8 = 0;
    if (unaff_s1 == 0) {
      *(undefined4 **)(&DAT_8003f0c0 + DAT_80032998 * 0x60) = unaff_s0;
      *(undefined4 *)(&DAT_8003f0c4 + DAT_80032998 * 0x60) = unaff_s2;
      *(code **)(&DAT_8003f0bc + DAT_80032998 * 0x60) = unaff_s3;
      DAT_80032998 = DAT_80032998 + 1 & 0x3f;
      SetIntrMask((word)DAT_800329a0);
      _exeque();
      return DAT_80032998 - DAT_8003299c & 0x3f;
    }
    while( true ) {
      iVar3 = unaff_s1;
      if (unaff_s1 < 0) {
        iVar3 = unaff_s1 + 3;
      }
      iVar4 = iVar8 * 4;
      if (iVar3 >> 2 <= iVar8) break;
      uVar6 = *unaff_s0;
      unaff_s0 = unaff_s0 + 1;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(&DAT_8003f0c8 + iVar4 + DAT_80032998 * 0x60) = uVar6;
    }
    *(undefined **)(&DAT_8003f0c0 + DAT_80032998 * 0x60) = &DAT_8003f0c8 + DAT_80032998 * 0x60;
    uVar2 = SYS_OBJ_2470();
    return uVar2;
  }
  do {
  } while ((GPU_REG1 & 0x4000000) == 0);
  uVar6 = unaff_s2;
  (*unaff_s3)();
  uVar5 = (undefined)uVar6;
  uVar6 = DAT_800329a0;
  DAT_80032988 = unaff_s3;
  DAT_8003298c = unaff_s0;
  DAT_80032990 = unaff_s2;
  SetIntrMask((word)DAT_800329a0);
  uVar2 = SYS_OBJ_2504((char)uVar6,uVar5,uVar7,uVar9,in_stack_00000010,in_stack_00000014,
                       in_stack_00000018,in_stack_0000001c,in_stack_00000020);
  return uVar2;
}



void SYS_OBJ_23B4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  int in_t0;
  int unaff_s1;
  
  while( true ) {
    if (in_v0 < 0) {
      in_v0 = in_v0 + 3;
    }
    iVar1 = param_3 * 4;
    if (in_v0 >> 2 <= param_3) break;
    uVar2 = *param_4;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    *(undefined4 *)(iVar1 + DAT_80032998 * 0x60 + in_t0) = uVar2;
    in_v0 = unaff_s1;
  }
  *(undefined **)(&DAT_8003f0c0 + DAT_80032998 * 0x60) = &DAT_8003f0c8 + DAT_80032998 * 0x60;
  SYS_OBJ_2470();
  return;
}



uint SYS_OBJ_2470(void)

{
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  *(undefined4 *)(&DAT_8003f0c4 + DAT_80032998 * 0x60) = unaff_s2;
  *(undefined4 *)(&DAT_8003f0bc + DAT_80032998 * 0x60) = unaff_s3;
  DAT_80032998 = DAT_80032998 + 1 & 0x3f;
  SetIntrMask((word)DAT_800329a0);
  _exeque();
  return DAT_80032998 - DAT_8003299c & 0x3f;
}



void SYS_OBJ_2504(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  return;
}



uint _exeque(void)

{
  word wVar1;
  uint uVar2;
  undefined2 extraout_var;
  
  uVar2 = 1;
  if ((DMA_GPU_CHCR & 0x1000000) == 0) {
    wVar1 = SetIntrMask(0);
    DAT_800329a4 = CONCAT22(extraout_var,wVar1);
    if (DAT_80032998 != DAT_8003299c) {
      do {
        if ((DMA_GPU_CHCR & 0x1000000) != 0) break;
        if (((DAT_8003299c + 1 & 0x3f) == DAT_80032998) && (DAT_800328a0 == (code *)0x0)) {
          DMACallback();
        }
        do {
        } while ((GPU_REG1 & 0x4000000) == 0);
        (**(code **)(&DAT_8003f0bc + DAT_8003299c * 0x60))
                  (*(undefined4 *)(&DAT_8003f0c0 + DAT_8003299c * 0x60),
                   *(undefined4 *)(&DAT_8003f0c4 + DAT_8003299c * 0x60));
        DAT_80032988 = *(undefined4 *)(&DAT_8003f0bc + DAT_8003299c * 0x60);
        DAT_8003298c = *(undefined4 *)(&DAT_8003f0c0 + DAT_8003299c * 0x60);
        DAT_80032990 = *(undefined4 *)(&DAT_8003f0c4 + DAT_8003299c * 0x60);
        DAT_8003299c = DAT_8003299c + 1 & 0x3f;
      } while (DAT_80032998 != DAT_8003299c);
    }
    SetIntrMask((word)DAT_800329a4);
    if ((((DAT_80032998 == DAT_8003299c) && ((DMA_GPU_CHCR & 0x1000000) == 0)) &&
        (DAT_8003289c != 0)) && (DAT_800328a0 != (code *)0x0)) {
      DAT_8003289c = 0;
      (*DAT_800328a0)();
    }
    uVar2 = DAT_80032998 - DAT_8003299c & 0x3f;
  }
  return uVar2;
}



undefined4 _reset(uint param_1)

{
  word wVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  undefined uVar3;
  undefined in_a1;
  undefined uVar4;
  undefined in_a2;
  undefined uVar5;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  uVar3 = 0;
  wVar1 = SetIntrMask(0);
  DAT_800329a8 = CONCAT22(extraout_var,wVar1);
  DAT_8003299c = 0;
  DAT_80032998 = 0;
  if ((param_1 & 7) == 0) {
    DMA_GPU_CHCR = 0x401;
    DMA_DPCR = DMA_DPCR | 0x800;
    GPU_REG1 = 0;
    memset("",'\0',0x100);
    uVar3 = 0xbc;
    uVar4 = 0;
    uVar5 = 0;
    memset("",'\0',0x1800);
    uVar2 = SYS_OBJ_2924(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_retaddr);
    return uVar2;
  }
  if ((param_1 & 7) != 1) {
    uVar2 = SYS_OBJ_2924(uVar3,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return uVar2;
  }
  DMA_GPU_CHCR = 0x401;
  DMA_DPCR = DMA_DPCR | 0x800;
  GPU_REG1 = 0x1000000;
  SetIntrMask(wVar1);
  uVar2 = 0;
  if ((param_1 & 7) == 0) {
    uVar2 = _version(param_1);
  }
  return uVar2;
}



undefined4
SYS_OBJ_2924(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  SetIntrMask((word)DAT_800329a8);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = _version(unaff_s0);
  }
  return uVar1;
}



void _sync(void)

{
  int in_a0;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  uint uVar1;
  undefined4 unaff_retaddr;
  
  if (in_a0 == 0) {
    set_alarm();
    SYS_OBJ_2994();
    return;
  }
  uVar1 = DAT_80032998 - DAT_8003299c & 0x3f;
  if (uVar1 != 0) {
    _exeque();
  }
  if ((((DMA_GPU_CHCR & 0x1000000) != 0) || ((GPU_REG1 & 0x4000000) == 0)) && (uVar1 == 0)) {
    SYS_OBJ_2A90((char)in_a0,in_a1,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return;
  }
  return;
}



undefined4 SYS_OBJ_297C(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined in_a0;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  _exeque();
  iVar1 = get_alarm();
  if (iVar1 == 0) {
    if (DAT_80032998 != DAT_8003299c) {
      uVar2 = SYS_OBJ_297C();
      return uVar2;
    }
    do {
      if (((DMA_GPU_CHCR & 0x1000000) == 0) && ((GPU_REG1 & 0x4000000) != 0)) {
        uVar2 = SYS_OBJ_2A90(in_a0,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014);
        return uVar2;
      }
      iVar1 = get_alarm();
    } while (iVar1 == 0);
  }
  return 0xffffffff;
}



undefined4 SYS_OBJ_2994(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined in_a0;
  undefined in_a1;
  undefined in_a2;
  undefined in_a3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (DAT_80032998 != DAT_8003299c) {
    uVar1 = SYS_OBJ_297C();
    return uVar1;
  }
  while (((DMA_GPU_CHCR & 0x1000000) != 0 || ((GPU_REG1 & 0x4000000) == 0))) {
    iVar2 = get_alarm();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = SYS_OBJ_2A90(in_a0,in_a1,in_a2,in_a3,in_stack_00000010,in_stack_00000014);
  return uVar1;
}



void SYS_OBJ_2A90(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6)

{
  return;
}



void set_alarm(void)

{
  int iVar1;
  
  iVar1 = VSync(-1);
  DAT_800329ac = iVar1 + 0xf0;
  DAT_800329b0 = 0;
  return;
}



undefined4 get_alarm(void)

{
  int iVar1;
  word wVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined4 uVar7;
  undefined uVar8;
  undefined4 uVar9;
  undefined4 unaff_retaddr;
  undefined uVar10;
  dword dVar11;
  undefined in_stack_fffffff4;
  
  iVar3 = VSync(-1);
  iVar1 = DAT_800329b0;
  if ((iVar3 <= DAT_800329ac) && (DAT_800329b0 = DAT_800329b0 + 1, iVar1 < 0xf0001)) {
    return 0;
  }
  dVar11 = DMA_GPU_MADR;
  printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x,",DAT_80032998 - DAT_8003299c & 0x3f,
         GPU_REG1,DMA_GPU_CHCR);
  uVar10 = (undefined)dVar11;
  uVar4 = DAT_80032988;
  uVar7 = DAT_8003298c;
  uVar9 = DAT_80032990;
  printf("func=(%08x)(%08x,%08x)\n");
  uVar8 = (undefined)uVar9;
  uVar6 = (undefined)uVar7;
  uVar5 = (undefined)uVar4;
  wVar2 = SetIntrMask(0);
  uVar4 = CONCAT22(extraout_var,wVar2);
  DAT_8003299c = 0;
  DAT_80032998 = 0;
  DMA_GPU_CHCR = 0x401;
  DMA_DPCR = DMA_DPCR | 0x800;
  GPU_REG1 = 0x1000000;
  DAT_800329a8 = uVar4;
  SetIntrMask(wVar2);
  uVar4 = SYS_OBJ_2C34((char)uVar4,uVar5,uVar6,uVar8,uVar10,in_stack_fffffff4,unaff_retaddr);
  return uVar4;
}



void SYS_OBJ_2C34(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5,undefined param_6,undefined4 param_7)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x80026f04)
// WARNING: Removing unreachable block (ram,0x80026f0c)
// WARNING: Removing unreachable block (ram,0x80026f14)

undefined4 _version(uint param_1)

{
  undefined4 uVar1;
  
  GPU_REG1 = 0x10000007;
  if ((GPU_REG0 & 0xffffff) != 2) {
    GPU_REG0 = 0xe1001007;
    uVar1 = SYS_OBJ_2D18();
    return uVar1;
  }
  if ((param_1 & 8) == 0) {
    return 3;
  }
  GPU_REG1 = 0x9000001;
  uVar1 = SYS_OBJ_2D18();
  return uVar1;
}



void SYS_OBJ_2D18(void)

{
  return;
}



void * memset(uchar *param_1,uchar param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_3 + -1);
  if (param_3 != 0) {
    do {
      *param_1 = param_2;
      pvVar1 = (void *)((int)pvVar1 + -1);
      param_1 = param_1 + 1;
    } while (pvVar1 != (void *)0xffffffff);
  }
  return pvVar1;
}



void GPU_cw(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void * memcpy(uchar *param_1,uchar *param_2,int param_3)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)&LAB_000000a0)();
  return pvVar1;
}



int OpenTIM(u_long *addr)

{
  DAT_80036ff4 = addr;
  return 0;
}



TIM_IMAGE * ReadTIM(TIM_IMAGE *timimg)

{
  int iVar1;
  TIM_IMAGE *pTVar2;
  undefined uVar3;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_retaddr;
  
  iVar1 = get_tim_addr(DAT_80036ff4,&timimg->mode);
  if (iVar1 != -1) {
    uVar3 = SUB41(DAT_80036ff4,0);
    DAT_80036ff4 = DAT_80036ff4 + iVar1;
    pTVar2 = (TIM_IMAGE *)TMD_OBJ_64(uVar3,(char)timimg,in_a2,in_a3,unaff_s0,unaff_retaddr);
    return pTVar2;
  }
  return (TIM_IMAGE *)0x0;
}



void TMD_OBJ_64(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined4 param_5,undefined4 param_6)

{
  return;
}



int OpenTMD(u_long *tmd,int obj_no)

{
  DAT_80037004 = get_tmd_addr(tmd,obj_no,&DAT_80037000,&DAT_80036ff8,&DAT_80036ffc);
  return DAT_80037004;
}



TMD_PRIM * ReadTMD(TMD_PRIM *tmdprim)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  TMD_PRIM *pTVar4;
  
  iVar3 = unpack_packet(DAT_80037000,&tmdprim->id);
  pTVar4 = (TMD_PRIM *)0x0;
  if (-1 < iVar3) {
    tmdprim->v_ofs = (SVECTOR *)0x0;
    tmdprim->n_ofs = (SVECTOR *)0x0;
    uVar1 = tmdprim->norm0;
    (tmdprim->n0).vx = *(short *)((uint)tmdprim->norm0 * 8);
    uVar2 = tmdprim->norm0;
    (tmdprim->n0).vy = *(short *)((uint)uVar1 * 8 + 2);
    uVar1 = tmdprim->norm1;
    (tmdprim->n0).vz = *(short *)((uint)uVar2 * 8 + 4);
    uVar2 = tmdprim->norm1;
    (tmdprim->n1).vx = *(short *)((uint)uVar1 * 8);
    uVar1 = tmdprim->norm1;
    (tmdprim->n1).vy = *(short *)((uint)uVar2 * 8 + 2);
    uVar2 = tmdprim->norm2;
    (tmdprim->n1).vz = *(short *)((uint)uVar1 * 8 + 4);
    uVar1 = tmdprim->norm2;
    (tmdprim->n2).vx = *(short *)((uint)uVar2 * 8);
    uVar2 = tmdprim->norm2;
    (tmdprim->n2).vy = *(short *)((uint)uVar1 * 8 + 2);
    uVar1 = tmdprim->norm3;
    (tmdprim->n2).vz = *(short *)((uint)uVar2 * 8 + 4);
    DAT_80037000 = (uint *)(iVar3 + (int)DAT_80037000);
    (tmdprim->n3).vx = *(short *)((uint)uVar1 * 8);
    uVar1 = tmdprim->norm3;
    (tmdprim->n3).vy = *(short *)((uint)tmdprim->norm3 * 8 + 2);
    uVar2 = tmdprim->vert0;
    (tmdprim->n3).vz = *(short *)((uint)uVar1 * 8 + 4);
    uVar1 = tmdprim->vert0;
    (tmdprim->x0).vx = *(short *)((uint)uVar2 * 8);
    uVar2 = tmdprim->vert0;
    (tmdprim->x0).vy = *(short *)((uint)uVar1 * 8 + 2);
    uVar1 = tmdprim->vert1;
    (tmdprim->x0).vz = *(short *)((uint)uVar2 * 8 + 4);
    uVar2 = tmdprim->vert1;
    (tmdprim->x1).vx = *(short *)((uint)uVar1 * 8);
    uVar1 = tmdprim->vert1;
    (tmdprim->x1).vy = *(short *)((uint)uVar2 * 8 + 2);
    uVar2 = tmdprim->vert2;
    (tmdprim->x1).vz = *(short *)((uint)uVar1 * 8 + 4);
    uVar1 = tmdprim->vert2;
    (tmdprim->x2).vx = *(short *)((uint)uVar2 * 8);
    uVar2 = tmdprim->vert2;
    (tmdprim->x2).vy = *(short *)((uint)uVar1 * 8 + 2);
    uVar1 = tmdprim->vert3;
    (tmdprim->x2).vz = *(short *)((uint)uVar2 * 8 + 4);
    (tmdprim->x3).vx = *(short *)((uint)uVar1 * 8);
    uVar1 = tmdprim->vert3;
    (tmdprim->x3).vy = *(short *)((uint)tmdprim->vert3 * 8 + 2);
    (tmdprim->x3).vz = *(short *)((uint)uVar1 * 8 + 4);
    pTVar4 = tmdprim;
  }
  return pTVar4;
}



int get_tim_addr(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined in_a2;
  undefined in_a3;
  undefined4 unaff_s0;
  uint *puVar3;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_retaddr;
  
  if (*param_1 != 0x10) {
    iVar1 = TMD_OBJ_468((char)param_1,(char)param_2,in_a2,in_a3,unaff_s0,unaff_s1,unaff_s2,
                        unaff_retaddr);
    return iVar1;
  }
  puVar3 = (uint *)(param_1 + 2);
  *param_2 = param_1[1];
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("id  =%08x\n",0x10);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("mode=%08x\n",*param_2);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("timaddr=%08x\n",puVar3);
  }
  if ((*param_2 & 8) != 0) {
    uVar2 = *puVar3;
    param_2[1] = (uint)(param_1 + 3);
    param_2[2] = (uint)(param_1 + 5);
    iVar1 = TMD_OBJ_448(uVar2 >> 2);
    return iVar1;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = *puVar3;
  param_2[3] = (uint)(param_1 + 3);
  param_2[4] = (uint)(param_1 + 5);
  return (uVar2 >> 2) + 2;
}



int TMD_OBJ_448(int param_1)

{
  uint uVar1;
  uint *unaff_s0;
  int unaff_s1;
  
  uVar1 = *unaff_s0;
  *(uint **)(unaff_s1 + 0xc) = unaff_s0 + 1;
  *(uint **)(unaff_s1 + 0x10) = unaff_s0 + 3;
  return param_1 + (uVar1 >> 2) + 2;
}



void TMD_OBJ_468(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  return;
}



int get_tmd_addr(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("analizing TMD...\n");
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("\tid=%08X, flags=%d, nobj=%d, objid=%d\n",*param_1,param_1[1],param_1[2],param_2);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("\tvert=%08X, nvert=%d\n",param_1[param_2 * 7 + 3],(param_1 + param_2 * 7 + 3)[1]);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("\tnorm=%08X, nnorm=%d\n",param_1[param_2 * 7 + 5],param_1[param_2 * 7 + 6]);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf("\tprim=%08X, nprim=%d\n",param_1[param_2 * 7 + 7],param_1[param_2 * 7 + 8]);
  }
  piVar2 = param_1 + param_2 * 7 + 3;
  *param_4 = (int)param_1 + *piVar2 + 0xc;
  *param_5 = (int)param_1 + piVar2[2] + 0xc;
  *param_3 = (int)param_1 + piVar2[4] + 0xc;
  return piVar2[5];
}



void unpack_packet(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined in_a3;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_retaddr;
  
  uVar4 = 0;
  uVar5 = 0x78;
  memset((uchar *)param_2,'\0',0x78);
  uVar3 = 9;
  uVar2 = *param_1 & 0xfdffffff;
  *param_2 = *param_1;
  if (uVar2 == 0x2d010709) {
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 4;
      printf("FT4 ");
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
    *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
    *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
    *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
    *(undefined *)((int)param_2 + 0x1e) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 0x1f) = *(undefined *)((int)param_1 + 0x11);
    *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 5);
    *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 0x15);
    *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 0x16);
    *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 5);
    *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 0x15);
    *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 0x16);
    *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 5);
    *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0x15);
    *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0x16);
    *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 5);
    *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 0x15);
    *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 0x16);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1a);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 7);
    *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x1e);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (0x2d010709 < uVar2) {
    if (uVar2 == 0x35010809) {
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xd4;
        printf("GT3 ");
      }
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
      *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
      *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
      *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
      *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 7);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1e);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 8);
      *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 4);
      *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 0x11);
      *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 0x12);
      *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 5);
      *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 0x15);
      *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 0x16);
      *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 6);
      *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0x19);
      *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0x1a);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 < 0x3501080a) {
      if (uVar2 == 0x31010506) {
        iVar1 = GetGraphDebug();
        if (iVar1 == 2) {
          uVar3 = 200;
          printf("G3 ");
        }
        *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
        *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
        *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
        *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 2);
        *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 9);
        *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 10);
        *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 3);
        *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0xd);
        *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0xe);
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 4);
        *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 5);
        TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
        return;
      }
      if (uVar2 < 0x31010507) {
        if (uVar2 != 0x30000406) {
          TMD_OBJ_1768();
          return;
        }
        iVar1 = GetGraphDebug();
        if (iVar1 == 2) {
          uVar3 = 0xac;
          printf("G3L ");
        }
        *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
        *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
        *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
        *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
        *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
        *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
        *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
        *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
        *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
        *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0xe);
        *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 2);
        *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 3);
        *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 4);
        TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
        return;
      }
      if (uVar2 != 0x34000609) {
        TMD_OBJ_1768();
        return;
      }
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xbc;
        printf("GT3L ");
      }
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
      *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
      *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
      *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
      *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x12);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1a);
      *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 5);
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 6);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 == 0x39010608) {
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0;
        printf("G4 ");
      }
      *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 2);
      *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 9);
      *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 10);
      *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 3);
      *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0xd);
      *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0xe);
      *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 4);
      *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 0x11);
      *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 0x12);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 5);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x1a);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 < 0x39010609) {
      if (uVar2 != 0x38000508) {
        TMD_OBJ_1768();
        return;
      }
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xe4;
        printf("G4L ");
      }
      *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 6);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0xe);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x12);
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x16);
      *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)((int)param_2 + 0x76) = *(undefined2 *)(param_1 + 5);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 == 0x3c00080c) {
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xf4;
        printf("GT4L ");
      }
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
      *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
      *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
      *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
      *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
      *(undefined *)((int)param_2 + 0x1e) = *(undefined *)(param_1 + 4);
      *(undefined *)((int)param_2 + 0x1f) = *(undefined *)((int)param_1 + 0x11);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x16);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x1a);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1e);
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x22);
      *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 5);
      *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 7);
      *(undefined2 *)((int)param_2 + 0x76) = *(undefined2 *)(param_1 + 8);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 != 0x3d010a0c) {
      TMD_OBJ_1768();
      return;
    }
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 0xc;
      printf("GT4 ");
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
    *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
    *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
    *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
    *(undefined *)((int)param_2 + 0x1e) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 0x1f) = *(undefined *)((int)param_1 + 0x11);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 9);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x26);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0x2a);
    *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 5);
    *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 0x15);
    *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 0x16);
    *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 6);
    *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 0x19);
    *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 0x1a);
    *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 7);
    *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0x1d);
    *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0x1e);
    *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 8);
    *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 0x21);
    *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 0x22);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (uVar2 == 0x25010607) {
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 0xcc;
      printf("FT3 ");
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
    *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
    *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
    *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
    *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 0x11);
    *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 0x12);
    *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 0x11);
    *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 0x12);
    *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 0x11);
    *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 0x12);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 5);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 0x16);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 6);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (0x25010607 < uVar2) {
    if (uVar2 == 0x29010305) {
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xfc;
        printf("F4 ");
      }
      *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 6);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)((int)param_1 + 0xe);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 < 0x29010306) {
      if (uVar2 != 0x28000405) {
        TMD_OBJ_1768();
        return;
      }
      iVar1 = GetGraphDebug();
      if (iVar1 == 2) {
        uVar3 = 0xdc;
        printf("F4L ");
      }
      *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
      *(undefined *)(param_2 + 4) = *(undefined *)(param_1 + 1);
      *(undefined *)((int)param_2 + 0x11) = *(undefined *)((int)param_1 + 5);
      *(undefined *)((int)param_2 + 0x12) = *(undefined *)((int)param_1 + 6);
      *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
      *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0xe);
      *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)((int)param_2 + 0x76) = *(undefined2 *)(param_1 + 2);
      TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
      return;
    }
    if (uVar2 != 0x2c000709) {
      TMD_OBJ_1768();
      return;
    }
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 0xec;
      printf("FT4L ");
    }
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
    *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
    *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
    *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
    *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
    *(undefined *)((int)param_2 + 0x1e) = *(undefined *)(param_1 + 4);
    *(undefined *)((int)param_2 + 0x1f) = *(undefined *)((int)param_1 + 0x11);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x16);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x1a);
    *(undefined2 *)((int)param_2 + 0x6e) = *(undefined2 *)(param_1 + 7);
    *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 5);
    *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 5);
    *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 5);
    *(undefined2 *)((int)param_2 + 0x76) = *(undefined2 *)(param_1 + 5);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (uVar2 == 0x21010304) {
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 0xc4;
      printf("F3 ");
    }
    *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
    *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
    *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 3);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (uVar2 < 0x21010305) {
    if (uVar2 != 0x20000304) {
      TMD_OBJ_1768();
      return;
    }
    iVar1 = GetGraphDebug();
    if (iVar1 == 2) {
      uVar3 = 0xa4;
      printf("F3L ");
    }
    *(undefined *)(param_2 + 1) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 5) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 6) = *(undefined *)((int)param_1 + 6);
    *(undefined *)(param_2 + 2) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 9) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 10) = *(undefined *)((int)param_1 + 6);
    *(undefined *)(param_2 + 3) = *(undefined *)(param_1 + 1);
    *(undefined *)((int)param_2 + 0xd) = *(undefined *)((int)param_1 + 5);
    *(undefined *)((int)param_2 + 0xe) = *(undefined *)((int)param_1 + 6);
    *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 10);
    *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)(param_1 + 3);
    *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0xe);
    *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 2);
    TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
    return;
  }
  if (uVar2 != 0x24000507) {
    TMD_OBJ_1768();
    return;
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    uVar3 = 0xb4;
    printf("FT3L ");
  }
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)((int)param_1 + 10);
  *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 6);
  *(undefined *)(param_2 + 6) = *(undefined *)(param_1 + 1);
  *(undefined *)((int)param_2 + 0x19) = *(undefined *)((int)param_1 + 5);
  *(undefined *)((int)param_2 + 0x1a) = *(undefined *)(param_1 + 2);
  *(undefined *)((int)param_2 + 0x1b) = *(undefined *)((int)param_1 + 9);
  *(undefined *)(param_2 + 7) = *(undefined *)(param_1 + 3);
  *(undefined *)((int)param_2 + 0x1d) = *(undefined *)((int)param_1 + 0xd);
  *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)((int)param_2 + 0x6a) = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)((int)param_1 + 0x16);
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)param_2 + 0x72) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(param_1 + 4);
  TMD_OBJ_1784(uVar3,uVar4,uVar5,in_a3,unaff_s0,unaff_s1,unaff_retaddr);
  return;
}



undefined4 TMD_OBJ_1768(void)

{
  uint in_v0;
  uint *unaff_s1;
  
  printf("unsupported type (%08x)\n",*unaff_s1 & (in_v0 | 0xffff));
  return 0xffffffff;
}



void TMD_OBJ_1784(undefined param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  return;
}



void _card_info(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void _card_load(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void _card_auto(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&LAB_000000a0)();
  return;
}



void _card_status(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void _card_clear(void)

{
  _new_card();
  _card_write();
  return;
}



void _card_write(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void _new_card(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void init_card_earlysafe(void)

{
  ChangeClearPAD();
  EnterCriticalSection();
  InitCARD();
  early_card_irq_patch();
  patch_card_specific_delay();
  ExitCriticalSection();
  return;
}



void StartCARD_earlysafe(void)

{
  EnterCriticalSection();
  StartCARD();
  ChangeClearPAD();
  ExitCriticalSection();
  return;
}



// Possible SSINIT_C.OBJ/SsInit
// Possible SSINIT_H.OBJ/SsInitHot

void StopCARD_earlysafe(void)

{
  StopCARD();
  patch_card_specific_delay();
  patch_uninstall_early_card_irq_handler();
  return;
}



void InitCARD(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StartCARD(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void StopCARD(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)&SUB_000000b0)();
  return;
}



void early_card_irq_patch(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *unaff_retaddr;
  
  early_card_irq_patchReturnAddress = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar4 = &DAT_800288c4;
  puVar2 = (undefined4 *)
           (*(int *)(*(int *)(iVar1 + 0x18) + 0x70) * 0x10000 +
            (*(uint *)(*(int *)(iVar1 + 0x18) + 0x74) & 0xffff) + 0x28);
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    EndPtrEarlyCardIRQHander = (undefined *)(puVar2 + 1);
    *puVar2 = uVar3;
    puVar2 = (undefined4 *)EndPtrEarlyCardIRQHander;
  } while (puVar4 != (undefined4 *)&UNK_800288d8);
  FlushCache();
  return;
}



void patch_card_specific_delay(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *unaff_retaddr;
  
  early_card_irq_patchReturnAddress = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  puVar3 = &DAT_800289a4;
  do {
    uVar2 = *puVar3;
    puVar4 = puVar3 + 1;
    *puVar3 = *(undefined4 *)(iVar1 + 0x9c8);
    *(undefined4 *)(iVar1 + 0x9c8) = uVar2;
    iVar1 = iVar1 + 4;
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)&UNK_800289b8);
  FlushCache();
  return;
}



void patch_uninstall_early_card_irq_handler(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *unaff_retaddr;
  
  patch_uninstall_early_card_irq_handlerReturnAddress = unaff_retaddr;
  EnterCriticalSection();
  iVar1 = (*(code *)&SUB_000000b0)();
  puVar3 = &DAT_80028acc;
  iVar1 = *(int *)(iVar1 + 0x18);
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
    iVar1 = iVar1 + 4;
  } while (puVar3 != (undefined4 *)&UNK_80028ad8);
  FlushCache();
  ExitCriticalSection();
  return;
}



void FUN_80040934(void)

{
  DrawSync(0);
  DrawSync(0);
  SetDispMask(0);
  FUN_80017b4c();
  FUN_80019448();
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void FUN_800409a4(void)

{
  BATTLE_ENTRY_DEPRECATED();
  return;
}



void Get_BATTLE_BIN(void)

{
  Get_DAT_BIN_as_File(1000,0x178000,FUN_80067000);
  FUN_800409a4();
  return;
}



void Initialise_GameState(void)

{
  int iVar1;
  
  DAT_80045978 = 0;
  do {
    StartingInventory();
    if (DAT_80045978 != 5) {
      FUN_80042690();
    }
    iVar1 = Get_OPEN_CDROM_to_RAM();
    if (iVar1 == 0) {
      DAT_800473a0 = '\x01';
      DAT_80045978 = 0;
    }
    else {
      DAT_800473a0 = '\0';
    }
    do {
      if (DAT_800473a0 == '\0') {
        DAT_80045978 = Open_WORLD_WLDCORE(1);
      }
      if (DAT_80045978 == 5) break;
      Get_BATTLE_BIN();
      FUN_80079a98();
      FUN_800440cc();
      DAT_800473a0 = '\0';
      if (DAT_800a778c == 2) {
        FUN_80040934();
        break;
      }
    } while (DAT_800a778c != 3);
    if (DAT_800a778c == 3) {
      FUN_800440cc();
      FUN_80043f00();
      FUN_8013b644();
      FUN_8013b644();
      Get_OPEN_CDROM_to_RAM2();
      Get_BATTLE_BIN();
      Get_ZODIAC_CDROM_to_FrameBuffer();
      FUN_80079a98();
      FUN_80040934();
    }
  } while( true );
}



void main(void)

{
  FUN_80010ad0();
  Initialise_Game_Environment();
  Put_Stack_Pointer(&DAT_80047608);
  Initialise_GameState();
  PadStop();
  StopCallback();
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void BuildNowLoadingImages(int shouldDisp,short x_pos,short y_pos)

{
  u_char uVar1;
  u_char uVar2;
  u_char uVar3;
  u_char uVar4;
  short sVar5;
  short sVar6;
  u_char uVar7;
  u_char uVar8;
  u_short uVar9;
  u_long *puVar10;
  POLY_FT4 *pPVar11;
  u_long uVar12;
  u_long uVar13;
  u_long uVar14;
  POLY_FT4 *pPVar15;
  POLY_FT4 *pPVar16;
  POLY_FT4 *pPVar17;
  u_long *puVar18;
  POLY_FT4 *pPVar19;
  int iVar20;
  
                    // WARNING: Read-only address (ram,0x8004d723) is written
  NowLoadingBlock0.tag._3_1_ = 9;
                    // WARNING: Read-only address (ram,0x8004d727) is written
  NowLoadingBlock0.code = ',';
  DAT_8004e5b8 = 0;
                    // WARNING: Read-only address (ram,0x8004d724) is written
  NowLoadingBlock0.r0 = 0x80;
                    // WARNING: Read-only address (ram,0x8004d725) is written
  NowLoadingBlock0.g0 = 0x80;
                    // WARNING: Read-only address (ram,0x8004d726) is written
  NowLoadingBlock0.b0 = 0x80;
  DAT_8004760c = shouldDisp;
  SetSemiTrans(&NowLoadingBlock0,0);
  iVar20 = 1;
                    // WARNING: Read-only address (ram,0x8004d736) is written
  NowLoadingBlock0.tpage = 0x1f;
                    // WARNING: Read-only address (ram,0x8004d72e) is written
  NowLoadingBlock0.clut = 0x7887;
  pPVar19 = &NowLoadingBlock0;
  do {
    pPVar19 = pPVar19 + 1;
    pPVar16 = &NowLoadingBlock0;
    pPVar11 = pPVar19;
    do {
      pPVar17 = pPVar11;
      pPVar15 = pPVar16;
      uVar1 = pPVar15->r0;
      uVar2 = pPVar15->g0;
      uVar3 = pPVar15->b0;
      uVar4 = pPVar15->code;
      sVar5 = pPVar15->x0;
      sVar6 = pPVar15->y0;
      uVar7 = pPVar15->u0;
      uVar8 = pPVar15->_2;
      uVar9 = pPVar15->clut;
      pPVar17->tag = pPVar15->tag;
      pPVar17->r0 = uVar1;
      pPVar17->g0 = uVar2;
      pPVar17->b0 = uVar3;
      pPVar17->code = uVar4;
      pPVar17->x0 = sVar5;
      pPVar17->y0 = sVar6;
      pPVar17->u0 = uVar7;
      pPVar17->_2 = uVar8;
      pPVar17->clut = uVar9;
      pPVar16 = (POLY_FT4 *)&pPVar15->x1;
      pPVar11 = (POLY_FT4 *)&pPVar17->x1;
    } while (&pPVar15->x1 != &NowLoadingBlock0.x3);
    uVar1 = pPVar15->u1;
    uVar2 = pPVar15->_3;
    uVar9 = pPVar15->tpage;
    pPVar17->x1 = 0;
    pPVar17->y1 = 0;
    pPVar17->u1 = uVar1;
    pPVar17->_3 = uVar2;
    pPVar17->tpage = uVar9;
    iVar20 = iVar20 + 1;
  } while (iVar20 < 7);
  NowLoadingBlock0.x0 = x_pos + 0xa0;
  NowLoadingBlock0.y0 = y_pos + 200;
  NowLoadingBlock0.x1 = x_pos + 0xac;
                    // WARNING: Read-only address (ram,0x8004d72a) is written
                    // WARNING: Read-only address (ram,0x8004d732) is written
  NowLoadingBlock0.y2 = y_pos + 0xd0;
                    // WARNING: Read-only address (ram,0x8004d728) is written
                    // WARNING: Read-only address (ram,0x8004d738) is written
                    // WARNING: Read-only address (ram,0x8004d73a) is written
                    // WARNING: Read-only address (ram,0x8004d742) is written
                    // WARNING: Read-only address (ram,0x8004d730) is written
                    // WARNING: Read-only address (ram,0x8004d740) is written
                    // WARNING: Read-only address (ram,0x8004d72d) is written
  NowLoadingBlock0._2 = 0x9b;
                    // WARNING: Read-only address (ram,0x8004d735) is written
  NowLoadingBlock0._3 = 0x9b;
                    // WARNING: Read-only address (ram,0x8004d72c) is written
  NowLoadingBlock0.u0 = 0xe4;
                    // WARNING: Read-only address (ram,0x8004d734) is written
  NowLoadingBlock0.u1 = 0xf0;
                    // WARNING: Read-only address (ram,0x8004d73c) is written
  NowLoadingBlock0.u2 = 0xe4;
                    // WARNING: Read-only address (ram,0x8004d73d) is written
  NowLoadingBlock0.v2 = 0xa3;
                    // WARNING: Read-only address (ram,0x8004d744) is written
  NowLoadingBlock0.u3 = 0xf0;
                    // WARNING: Read-only address (ram,0x8004d745) is written
  NowLoadingBlock0.v3 = 0xa3;
  pPVar19 = &NowLoadingBlock0;
  puVar10 = &DAT_8004d838;
  NowLoadingBlock0.y1 = NowLoadingBlock0.y0;
  NowLoadingBlock0.x2 = NowLoadingBlock0.x0;
  NowLoadingBlock0.x3 = NowLoadingBlock0.x1;
  NowLoadingBlock0.y3 = NowLoadingBlock0.y2;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock0.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = 0;
  puVar18[5] = uVar12;
  NowLoadingBlock1.x0 = x_pos + 0xab;
  NowLoadingBlock1.y0 = y_pos + 200;
  NowLoadingBlock1.x3 = x_pos + 0xb2;
  NowLoadingBlock1.y3 = y_pos + 0xd0;
  NowLoadingBlock1._2 = 0xa3;
  NowLoadingBlock1._3 = 0xa3;
  NowLoadingBlock1.u0 = 0xe4;
  NowLoadingBlock1.u1 = 0xeb;
  NowLoadingBlock1.u2 = 0xe4;
  NowLoadingBlock1.v2 = 0xab;
  NowLoadingBlock1.u3 = 0xeb;
  NowLoadingBlock1.v3 = 0xab;
  pPVar19 = &NowLoadingBlock1;
  puVar10 = &DAT_8004d860;
  NowLoadingBlock1.x1 = NowLoadingBlock1.x3;
  NowLoadingBlock1.y1 = NowLoadingBlock1.y0;
  NowLoadingBlock1.x2 = NowLoadingBlock1.x0;
  NowLoadingBlock1.y2 = NowLoadingBlock1.y3;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock1.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = NowLoadingBlock1._32_4_;
  puVar18[5] = uVar12;
  NowLoadingBlock2.x0 = x_pos + 0xb7;
  NowLoadingBlock2.y0 = y_pos + 200;
  NowLoadingBlock2.x3 = x_pos + 0xc3;
  NowLoadingBlock2.y3 = y_pos + 0xd0;
  NowLoadingBlock2._2 = 'U';
  NowLoadingBlock2._3 = 'U';
  NowLoadingBlock2.u0 = 0xad;
  NowLoadingBlock2.u1 = 0xb9;
  NowLoadingBlock2.u2 = 0xad;
  NowLoadingBlock2.v2 = ']';
  NowLoadingBlock2.u3 = 0xb9;
  NowLoadingBlock2.v3 = ']';
  pPVar19 = &NowLoadingBlock2;
  puVar10 = &DAT_8004d888;
  NowLoadingBlock2.x1 = NowLoadingBlock2.x3;
  NowLoadingBlock2.y1 = NowLoadingBlock2.y0;
  NowLoadingBlock2.x2 = NowLoadingBlock2.x0;
  NowLoadingBlock2.y2 = NowLoadingBlock2.y3;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock2.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = NowLoadingBlock2._32_4_;
  puVar18[5] = uVar12;
  NowLoadingBlock3.x0 = x_pos + 0xc3;
  NowLoadingBlock3.y0 = y_pos + 200;
  NowLoadingBlock3.x1 = x_pos + 200;
                    // WARNING: Read-only address (ram,0x8004d7a2) is written
                    // WARNING: Read-only address (ram,0x8004d7aa) is written
  NowLoadingBlock3.y2 = y_pos + 0xd0;
                    // WARNING: Read-only address (ram,0x8004d7a0) is written
                    // WARNING: Read-only address (ram,0x8004d7b0) is written
                    // WARNING: Read-only address (ram,0x8004d7b2) is written
                    // WARNING: Read-only address (ram,0x8004d7ba) is written
                    // WARNING: Read-only address (ram,0x8004d7a8) is written
                    // WARNING: Read-only address (ram,0x8004d7b8) is written
                    // WARNING: Read-only address (ram,0x8004d7a5) is written
  NowLoadingBlock3._2 = '`';
                    // WARNING: Read-only address (ram,0x8004d7ad) is written
  NowLoadingBlock3._3 = '`';
                    // WARNING: Read-only address (ram,0x8004d7a4) is written
  NowLoadingBlock3.u0 = 0xd1;
                    // WARNING: Read-only address (ram,0x8004d7ac) is written
  NowLoadingBlock3.u1 = 0xd6;
                    // WARNING: Read-only address (ram,0x8004d7b4) is written
  NowLoadingBlock3.u2 = 0xd1;
                    // WARNING: Read-only address (ram,0x8004d7b5) is written
  NowLoadingBlock3.v2 = 'h';
                    // WARNING: Read-only address (ram,0x8004d7bc) is written
  NowLoadingBlock3.u3 = 0xd6;
                    // WARNING: Read-only address (ram,0x8004d7bd) is written
  NowLoadingBlock3.v3 = 'h';
  pPVar19 = &NowLoadingBlock3;
  puVar10 = &DAT_8004d8b0;
  NowLoadingBlock3.y1 = NowLoadingBlock3.y0;
  NowLoadingBlock3.x2 = NowLoadingBlock3.x0;
  NowLoadingBlock3.x3 = NowLoadingBlock3.x1;
  NowLoadingBlock3.y3 = NowLoadingBlock3.y2;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock3.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = 0;
  puVar18[5] = uVar12;
  NowLoadingBlock4.x0 = x_pos + 199;
  NowLoadingBlock4.y0 = y_pos + 200;
  NowLoadingBlock4.x1 = x_pos + 0xca;
                    // WARNING: Read-only address (ram,0x8004d7ca) is written
                    // WARNING: Read-only address (ram,0x8004d7d2) is written
  NowLoadingBlock4.y2 = y_pos + 0xd0;
                    // WARNING: Read-only address (ram,0x8004d7c8) is written
                    // WARNING: Read-only address (ram,0x8004d7d8) is written
                    // WARNING: Read-only address (ram,0x8004d7da) is written
                    // WARNING: Read-only address (ram,0x8004d7e2) is written
                    // WARNING: Read-only address (ram,0x8004d7d0) is written
                    // WARNING: Read-only address (ram,0x8004d7e0) is written
                    // WARNING: Read-only address (ram,0x8004d7cd) is written
  NowLoadingBlock4._2 = 'R';
                    // WARNING: Read-only address (ram,0x8004d7d5) is written
  NowLoadingBlock4._3 = 'R';
                    // WARNING: Read-only address (ram,0x8004d7cc) is written
  NowLoadingBlock4.u0 = '|';
                    // WARNING: Read-only address (ram,0x8004d7d4) is written
  NowLoadingBlock4.u1 = '\x7f';
                    // WARNING: Read-only address (ram,0x8004d7dc) is written
  NowLoadingBlock4.u2 = '|';
                    // WARNING: Read-only address (ram,0x8004d7dd) is written
  NowLoadingBlock4.v2 = 'Z';
                    // WARNING: Read-only address (ram,0x8004d7e4) is written
  NowLoadingBlock4.u3 = '\x7f';
                    // WARNING: Read-only address (ram,0x8004d7e5) is written
  NowLoadingBlock4.v3 = 'Z';
  pPVar19 = &NowLoadingBlock4;
  puVar10 = &DAT_8004d8d8;
  NowLoadingBlock4.y1 = NowLoadingBlock4.y0;
  NowLoadingBlock4.x2 = NowLoadingBlock4.x0;
  NowLoadingBlock4.x3 = NowLoadingBlock4.x1;
  NowLoadingBlock4.y3 = NowLoadingBlock4.y2;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock4.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = 0;
  puVar18[5] = uVar12;
  NowLoadingBlock5.x0 = x_pos + 0xc9;
  NowLoadingBlock5.y0 = y_pos + 200;
  NowLoadingBlock5.x1 = x_pos + 0xce;
                    // WARNING: Read-only address (ram,0x8004d7f2) is written
                    // WARNING: Read-only address (ram,0x8004d7fa) is written
  NowLoadingBlock5.y2 = y_pos + 0xd0;
                    // WARNING: Read-only address (ram,0x8004d7f0) is written
                    // WARNING: Read-only address (ram,0x8004d800) is written
                    // WARNING: Read-only address (ram,0x8004d802) is written
                    // WARNING: Read-only address (ram,0x8004d80a) is written
                    // WARNING: Read-only address (ram,0x8004d7f8) is written
                    // WARNING: Read-only address (ram,0x8004d808) is written
                    // WARNING: Read-only address (ram,0x8004d7f5) is written
  NowLoadingBlock5._2 = 0xcc;
                    // WARNING: Read-only address (ram,0x8004d7fd) is written
  NowLoadingBlock5._3 = 0xcc;
                    // WARNING: Read-only address (ram,0x8004d7f4) is written
  NowLoadingBlock5.u0 = 0xce;
                    // WARNING: Read-only address (ram,0x8004d7fc) is written
  NowLoadingBlock5.u1 = 0xd3;
                    // WARNING: Read-only address (ram,0x8004d804) is written
  NowLoadingBlock5.u2 = 0xce;
                    // WARNING: Read-only address (ram,0x8004d805) is written
  NowLoadingBlock5.v2 = 0xd4;
                    // WARNING: Read-only address (ram,0x8004d80c) is written
  NowLoadingBlock5.u3 = 0xd3;
                    // WARNING: Read-only address (ram,0x8004d80d) is written
  NowLoadingBlock5.v3 = 0xd4;
  pPVar19 = &NowLoadingBlock5;
  puVar10 = &DAT_8004d900;
  NowLoadingBlock5.y1 = NowLoadingBlock5.y0;
  NowLoadingBlock5.x2 = NowLoadingBlock5.x0;
  NowLoadingBlock5.x3 = NowLoadingBlock5.x1;
  NowLoadingBlock5.y3 = NowLoadingBlock5.y2;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock5.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = 0;
  puVar18[5] = uVar12;
  NowLoadingBlock6.x0 = x_pos + 0xcd;
  NowLoadingBlock6.y0 = y_pos + 0xca;
  NowLoadingBlock6.x1 = x_pos + 0xd2;
                    // WARNING: Read-only address (ram,0x8004d81a) is written
                    // WARNING: Read-only address (ram,0x8004d822) is written
  NowLoadingBlock6.y2 = y_pos + 0xd2;
                    // WARNING: Read-only address (ram,0x8004d818) is written
                    // WARNING: Read-only address (ram,0x8004d828) is written
                    // WARNING: Read-only address (ram,0x8004d82a) is written
                    // WARNING: Read-only address (ram,0x8004d832) is written
                    // WARNING: Read-only address (ram,0x8004d820) is written
                    // WARNING: Read-only address (ram,0x8004d830) is written
                    // WARNING: Read-only address (ram,0x8004d81d) is written
  NowLoadingBlock6._2 = 0xa4;
                    // WARNING: Read-only address (ram,0x8004d825) is written
  NowLoadingBlock6._3 = 0xa4;
                    // WARNING: Read-only address (ram,0x8004d81c) is written
  NowLoadingBlock6.u0 = 0xeb;
                    // WARNING: Read-only address (ram,0x8004d824) is written
  NowLoadingBlock6.u1 = 0xf0;
                    // WARNING: Read-only address (ram,0x8004d82c) is written
  NowLoadingBlock6.u2 = 0xeb;
                    // WARNING: Read-only address (ram,0x8004d82d) is written
  NowLoadingBlock6.v2 = 0xac;
                    // WARNING: Read-only address (ram,0x8004d834) is written
  NowLoadingBlock6.u3 = 0xf0;
                    // WARNING: Read-only address (ram,0x8004d835) is written
  NowLoadingBlock6.v3 = 0xac;
  pPVar19 = &NowLoadingBlock6;
  puVar10 = &DAT_8004d928;
  NowLoadingBlock6.y1 = NowLoadingBlock6.y0;
  NowLoadingBlock6.x2 = NowLoadingBlock6.x0;
  NowLoadingBlock6.x3 = NowLoadingBlock6.x1;
  NowLoadingBlock6.y3 = NowLoadingBlock6.y2;
  do {
    puVar18 = puVar10;
    pPVar16 = pPVar19;
    uVar12 = *(u_long *)&pPVar16->r0;
    uVar13 = *(u_long *)&pPVar16->x0;
    uVar14 = *(u_long *)&pPVar16->u0;
    *puVar18 = pPVar16->tag;
    puVar18[1] = uVar12;
    puVar18[2] = uVar13;
    puVar18[3] = uVar14;
    pPVar19 = (POLY_FT4 *)&pPVar16->x1;
    puVar10 = puVar18 + 4;
  } while (&pPVar16->x1 != &NowLoadingBlock6.x3);
  uVar12 = *(u_long *)&pPVar16->u1;
  puVar18[4] = 0;
  puVar18[5] = uVar12;
  LoadClut2(&NowLoadingPalette,0x70,0x1e2);
  return;
}



void Build_Now_Loading_x128(uint *param_1)

{
  POLY_FT4 *pPVar1;
  int iVar2;
  
  if (DAT_8004760c != 0) {
    if ((DAT_8004e5b8 / 0x3c & 1) == 0) {
      iVar2 = 0;
      pPVar1 = &NowLoadingBlock0;
      do {
        iVar2 = iVar2 + 1;
        AddPrim(param_1,pPVar1 + DAT_8004597c * 7);
        pPVar1 = pPVar1 + 1;
      } while (iVar2 < 7);
    }
    DAT_8004e5b8 = DAT_8004e5b8 + 1;
  }
  return;
}



void Get_EFC_FNT(void)

{
  bool bVar1;
  u_long *addr;
  int iVar2;
  TIM_IMAGE *pTVar3;
  TIM_IMAGE TStack_28;
  
  bVar1 = false;
                    // WARNING: Read-only address (ram,0x80022f5c) is written
  uRam80022f5c = 0x7f;
  FntLoad(0x280,0);
  do {
    addr = (u_long *)Get_BIN_as_TIM(57000,0x8800);
    if (addr == (u_long *)0x0) {
      VSync(0);
      Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
    }
    else {
      iVar2 = OpenTIM(addr);
      if ((iVar2 == 0) && (pTVar3 = ReadTIM(&TStack_28), pTVar3 != (TIM_IMAGE *)0x0)) {
        bVar1 = true;
        LoadTPage(TStack_28.paddr,0,0,0x280,0,(int)(TStack_28.prect)->w << 2,
                  (int)(TStack_28.prect)->h);
        LoadClut2(TStack_28.caddr,0x280,0x7f);
      }
      Call_BIN_Free_FFT((int)addr);
    }
  } while (!bVar1);
  iVar2 = FntOpen(0x88,0x10,0x100,0x100,0,0x200);
  SetDumpFnt(iVar2);
  DrawSync(0);
  DrawSync(0);
  return;
}



void FUN_80041598(int param_1,int param_2,undefined4 param_3,u_char param_4,u_char param_5,
                 u_char param_6)

{
  uint y;
  
  y = -(uint)(param_2 != 0x1e0) & 0xf0;
  SetDispMask(0);
  FUN_8001d1a8(param_1 / 2,param_2 / 2);
  FUN_8001d1c8(param_3);
  SetDefDrawEnv(&DRAWENV1,0,0,param_1,param_2);
  SetDefDispEnv(&DISPENV1,0,y,param_1,param_2);
  SetDefDrawEnv(&DRAWENV2,0,y,param_1,param_2);
  SetDefDispEnv(&DISPENV2,0,0,param_1,param_2);
                    // WARNING: Read-only address (ram,0x8004ea86) is written
  DRAWENV2.dtd = '\0';
                    // WARNING: Read-only address (ram,0x8004ea2a) is written
  DRAWENV1.dtd = '\0';
                    // WARNING: Read-only address (ram,0x8004ea88) is written
  DRAWENV2.isbg = '\x01';
                    // WARNING: Read-only address (ram,0x8004ea2c) is written
  DRAWENV1.isbg = '\x01';
                    // WARNING: Read-only address (ram,0x8004ea2d) is written
                    // WARNING: Read-only address (ram,0x8004ea89) is written
                    // WARNING: Read-only address (ram,0x8004ea2e) is written
  DRAWENV1.g0 = param_5;
                    // WARNING: Read-only address (ram,0x8004ea2f) is written
  DRAWENV1.b0 = param_6;
                    // WARNING: Read-only address (ram,0x8004ea8a) is written
  DRAWENV2.g0 = param_5;
                    // WARNING: Read-only address (ram,0x8004ea8b) is written
  DRAWENV2.b0 = param_6;
  DRAWENV1.r0 = param_4;
  DRAWENV2.r0 = param_4;
  PutDispEnv(&DISPENV1 + DAT_8004597c);
  PutDrawEnv(&DRAWENV1 + DAT_8004597c);
  return;
}



uint FUN_80041774(u_long *param_1)

{
  uint uVar1;
  u_long *in_a1;
  RECT local_18;
  
  DAT_8004597c = (uint)(DAT_8004597c == 0);
  DrawSync(0);
  uVar1 = VSync(0);
  PutDispEnv(&DISPENV1 + DAT_8004597c);
  PutDrawEnv(&DRAWENV1 + DAT_8004597c);
  local_18.x = 0x46;
  local_18.w = 0xb4;
  local_18.h = 0x10;
  local_18.y = (&DRAWENV1)[DAT_8004597c].clip.y + 0x70;
  LoadImage(&local_18,in_a1);
  DrawOTag(param_1);
  FntFlush(-1);
  return uVar1;
}



void FUN_80041890(void)

{
  int iVar1;
  u_long *ot;
  u_char uVar2;
  int iVar3;
  POLY_F4 local_78;
  u_long local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  DR_MODE local_48;
  u_long local_3c;
  u_long local_38;
  u_long local_34;
  u_long auStack_30 [4];
  RECT local_20;
  
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0;
  local_20.h = 0;
  iVar3 = 0xf8;
  FUN_80041598(0x140,0xf0,0x200,0,0,0);
  SetPolyF4(&local_78);
  local_78._4_4_ = local_78._4_4_ & 0xff000000;
  local_78.x0 = 0;
  local_78.y0 = 0;
  local_78.x1 = 0x140;
  local_78.y1 = 0;
  local_78.x2 = 0;
  local_78.y2 = 0x100;
  local_78.x3 = 0x140;
  local_78.y3 = 0x100;
  SetSemiTrans(&local_78,1);
  local_60 = local_78.tag;
  local_5c = local_78._4_4_;
  local_58._0_2_ = local_78.x0;
  local_58._2_2_ = local_78.y0;
  local_54._0_2_ = local_78.x1;
  local_54._2_2_ = local_78.y1;
  local_50._0_2_ = local_78.x2;
  local_50._2_2_ = local_78.y2;
  local_4c._0_2_ = local_78.x3;
  local_4c._2_2_ = local_78.y3;
  SetDrawMode(&local_48,0,0,0x40,&local_20);
  local_3c = local_48.tag;
  local_38 = local_48.code[0];
  local_34 = local_48.code[1];
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0x100;
  local_20.h = 0x1e0;
  ClearImage(&local_20,'\0','\0','\0');
  DrawSync(0);
  SetDispMask(1);
  iVar1 = 0;
  do {
    VSync(0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xf);
  do {
    ot = auStack_30 + DAT_8004597c * 2;
    ClearOTag(ot,2);
    uVar2 = (u_char)iVar3;
    (&local_78)[DAT_8004597c].r0 = uVar2;
    (&local_78)[DAT_8004597c].g0 = uVar2;
    (&local_78)[DAT_8004597c].b0 = uVar2;
    AddPrim(ot,&local_78 + DAT_8004597c);
    AddPrim(ot,&local_48 + DAT_8004597c);
    FUN_80041774(ot);
    iVar3 = iVar3 + -8;
  } while (-1 < iVar3 * 0x10000);
  DrawSync(0);
  DrawSync(0);
  return;
}



void FUN_80041b1c(void)

{
  int iVar1;
  u_long *ot;
  u_char uVar2;
  int iVar3;
  POLY_F4 local_78;
  u_long local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  DR_MODE local_48;
  u_long local_3c;
  u_long local_38;
  u_long local_34;
  u_long auStack_30 [4];
  RECT local_20;
  
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0;
  local_20.h = 0;
  iVar3 = 0;
  SetPolyF4(&local_78);
  local_78._4_4_ = local_78._4_4_ & 0xff000000;
  local_78.x0 = 0;
  local_78.y0 = 0;
  local_78.x1 = 0x140;
  local_78.y1 = 0;
  local_78.x2 = 0;
  local_78.y2 = 0x100;
  local_78.x3 = 0x140;
  local_78.y3 = 0x100;
  SetSemiTrans(&local_78,1);
  local_60 = local_78.tag;
  local_5c = local_78._4_4_;
  local_58._0_2_ = local_78.x0;
  local_58._2_2_ = local_78.y0;
  local_54._0_2_ = local_78.x1;
  local_54._2_2_ = local_78.y1;
  local_50._0_2_ = local_78.x2;
  local_50._2_2_ = local_78.y2;
  local_4c._0_2_ = local_78.x3;
  local_4c._2_2_ = local_78.y3;
  SetDrawMode(&local_48,0,0,0x40,&local_20);
  local_3c = local_48.tag;
  local_38 = local_48.code[0];
  local_34 = local_48.code[1];
  iVar1 = 0;
  do {
    if (0xf7 < iVar1 >> 0x10) {
      iVar3 = 0xff;
    }
    ot = auStack_30 + DAT_8004597c * 2;
    ClearOTag(ot,2);
    uVar2 = (u_char)iVar3;
    (&local_78)[DAT_8004597c].r0 = uVar2;
    (&local_78)[DAT_8004597c].g0 = uVar2;
    (&local_78)[DAT_8004597c].b0 = uVar2;
    AddPrim(ot,&local_78 + DAT_8004597c);
    AddPrim(ot,&local_48 + DAT_8004597c);
    FUN_80041774(ot);
    iVar3 = iVar3 + 8;
    iVar1 = iVar3 * 0x10000;
  } while (iVar3 * 0x10000 >> 0x10 < 0x100);
  DrawSync(0);
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0x100;
  local_20.h = 0x1e0;
  ClearImage(&local_20,'\0','\0','\0');
  DrawSync(0);
  return;
}



uint FUN_80041d80(u_long *param_1)

{
  uint uVar1;
  u_long *in_a1;
  RECT local_18;
  
  DAT_8004597c = (uint)(DAT_8004597c == 0);
  DrawSync(0);
  uVar1 = VSync(0);
  PutDispEnv(&DISPENV1 + DAT_8004597c);
  PutDrawEnv(&DRAWENV1 + DAT_8004597c);
  local_18.x = 0;
  local_18.w = 0x140;
  local_18.h = 0x20;
  local_18.y = (&DRAWENV1)[DAT_8004597c].clip.y + 0x68;
  LoadImage(&local_18,in_a1);
  DrawOTag(param_1);
  FntFlush(-1);
  return uVar1;
}



void FUN_80041e98(void)

{
  u_long *puVar1;
  u_char uVar2;
  int iVar3;
  int iVar4;
  POLY_F4 local_78;
  u_long local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  DR_MODE local_48;
  u_long local_3c;
  u_long local_38;
  u_long local_34;
  u_long auStack_30 [4];
  RECT local_20;
  
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0;
  local_20.h = 0;
  FUN_80041598(0x140,0xf0,0x200,0,0,0);
  iVar4 = 0;
  Get_DAT_BIN_as_File(0xc6,0x5000,&DAT_801df000);
  SetPolyF4(&local_78);
  local_78._4_4_ = local_78._4_4_ & 0xff000000;
  local_78.x0 = 0;
  local_78.y0 = 0;
  local_78.x1 = 0x140;
  local_78.y1 = 0;
  local_78.x2 = 0;
  local_78.y2 = 0xf0;
  local_78.x3 = 0x140;
  local_78.y3 = 0xf0;
  SetSemiTrans(&local_78,1);
  local_60 = local_78.tag;
  local_5c = local_78._4_4_;
  local_58._0_2_ = local_78.x0;
  local_58._2_2_ = local_78.y0;
  local_54._0_2_ = local_78.x1;
  local_54._2_2_ = local_78.y1;
  local_50._0_2_ = local_78.x2;
  local_50._2_2_ = local_78.y2;
  local_4c._0_2_ = local_78.x3;
  local_4c._2_2_ = local_78.y3;
  SetDrawMode(&local_48,0,0,0x40,&local_20);
  local_3c = local_48.tag;
  local_38 = local_48.code[0];
  local_34 = local_48.code[1];
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0x140;
  local_20.h = 0x1e0;
  ClearImage(&local_20,'\0','\0','\0');
  DrawSync(0);
  SetDispMask(1);
  do {
    VSync(0);
    iVar4 = iVar4 + 1;
    iVar3 = 0xf8;
  } while (iVar4 < 0xf);
  do {
    puVar1 = auStack_30 + DAT_8004597c * 2;
    ClearOTag(puVar1,2);
    uVar2 = (u_char)iVar3;
    (&local_78)[DAT_8004597c].r0 = uVar2;
    (&local_78)[DAT_8004597c].g0 = uVar2;
    (&local_78)[DAT_8004597c].b0 = uVar2;
    AddPrim(puVar1,&local_78 + DAT_8004597c);
    AddPrim(puVar1,&local_48 + DAT_8004597c);
    FUN_80041d80(puVar1);
    iVar3 = iVar3 + -8;
  } while (-1 < iVar3 * 0x10000);
  iVar4 = 0;
  do {
    VSync(0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xb4);
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (0xf7 < iVar4 >> 0x10) {
      iVar3 = 0xff;
    }
    puVar1 = auStack_30 + DAT_8004597c * 2;
    ClearOTag(puVar1,2);
    uVar2 = (u_char)iVar3;
    (&local_78)[DAT_8004597c].r0 = uVar2;
    (&local_78)[DAT_8004597c].g0 = uVar2;
    (&local_78)[DAT_8004597c].b0 = uVar2;
    AddPrim(puVar1,&local_78 + DAT_8004597c);
    AddPrim(puVar1,&local_48 + DAT_8004597c);
    FUN_80041d80(puVar1);
    iVar3 = iVar3 + 8;
    iVar4 = iVar3 * 0x10000;
  } while (iVar3 * 0x10000 >> 0x10 < 0x100);
  DrawSync(0);
  local_20.x = 0;
  local_20.y = 0;
  local_20.w = 0x140;
  local_20.h = 0x1e0;
  ClearImage(&local_20,'\0','\0','\0');
  DrawSync(0);
  return;
}



void FUN_80042284(int param_1,int param_2,undefined4 param_3,u_char param_4,u_char param_5,
                 u_char param_6)

{
  int id;
  uint y;
  RECT local_30;
  
  local_30.x = 0;
  local_30.y = 0;
  local_30.w = 0x400;
  local_30.h = 0x200;
  y = -(uint)(param_2 != 0x1e0) & 0xf0;
  SetDispMask(0);
  ResetGraph(0);
  InitGeom();
  FUN_8001d1a8(param_1 / 2,param_2 / 2);
  FUN_8001d1c8(param_3);
  SetDefDrawEnv(&DRAWENV1,0,0,param_1,param_2);
  SetDefDispEnv(&DISPENV1,0,y,param_1,param_2);
  SetDefDrawEnv(&DRAWENV2,0,y,param_1,param_2);
  SetDefDispEnv(&DISPENV2,0,0,param_1,param_2);
                    // WARNING: Read-only address (ram,0x8004ea86) is written
  DRAWENV2.dtd = '\0';
                    // WARNING: Read-only address (ram,0x8004ea2a) is written
  DRAWENV1.dtd = '\0';
                    // WARNING: Read-only address (ram,0x8004ea88) is written
  DRAWENV2.isbg = '\0';
                    // WARNING: Read-only address (ram,0x8004ea2c) is written
  DRAWENV1.isbg = '\0';
                    // WARNING: Read-only address (ram,0x8004ea2d) is written
                    // WARNING: Read-only address (ram,0x8004ea89) is written
                    // WARNING: Read-only address (ram,0x8004ea2e) is written
  DRAWENV1.g0 = param_5;
                    // WARNING: Read-only address (ram,0x8004ea2f) is written
  DRAWENV1.b0 = param_6;
                    // WARNING: Read-only address (ram,0x8004ea8a) is written
  DRAWENV2.g0 = param_5;
                    // WARNING: Read-only address (ram,0x8004ea8b) is written
  DRAWENV2.b0 = param_6;
  DRAWENV1.r0 = param_4;
  DRAWENV2.r0 = param_4;
  ClearImage(&local_30,'\0','\0','\0');
  DrawSync(0);
  FntLoad(0x280,0);
  id = FntOpen(0x28,0x10,0x200,0x100,0,0x200);
  SetDumpFnt(id);
  PutDispEnv(&DISPENV1 + DAT_8004597c);
  PutDrawEnv(&DRAWENV1 + DAT_8004597c);
  return;
}



void Reset_CDROM_CPURAM(void)

{
  SetMem();
  CdInit();
  CdSetDebug(0);
  Reset_Pause_CDROM((int)&fileOpenDesc_8004eaf4);
                    // WARNING: Read-only address (ram,0x8004eaf8) is written
  fileOpenDesc_8004eaf4.busy = 0;
  return;
}



void Get_ZODIAC_CDROM_to_FrameBuffer(void)

{
  u_long *p;
  RECT local_10;
  
  local_10.x = 0x280;
  local_10.y = 0;
  local_10.w = 0x80;
  local_10.h = 0x100;
  p = (u_long *)Get_BIN_as_TIM(0xec61,0x10000);
  LoadImage(&local_10,p);
  DrawSync(0);
  BIN_Free_FFT((int)p);
  Get_FRAME_CDROM_to_FrameBuffer();
  return;
}



void Initialise_Game_Environment(void)

{
  FUN_80044670();
  ResetCallback();
  DAT_800459c4 = 0;
  DAT_800459c0 = 0;
  DAT_800459bc = 0;
  DAT_800459b8 = 0;
  VSyncCallback(FUN_800434dc);
  DrawSyncCallback(FUN_800435ac);
  CdReadyCallback(FUN_800435b4);
  CdReadCallback(FUN_800435bc);
  ResetGraph(0);
  SetGraphDebug(0);
  PadInit(0);
  FUN_800186c4();
  Reset_CDROM_CPURAM();
  FUN_80042284(0x100,0xf0,0x200,0,0,0);
  FUN_80041e98();
  FUN_80041890();
  Initialise_MEMCARD_events();
  Open_Permanent_SoundFiles();
  Get_ZODIAC_CDROM_to_FrameBuffer();
  srand(1);
  FUN_80041b1c();
  DAT_8004d9b4 = 0;
  return;
}



void FUN_80042690(void)

{
  int iVar1;
  
  if (DAT_8004d9b4 != 0) {
    FUN_80044670();
    FUN_80043f00();
    DAT_800459c4 = 0;
    DAT_800459c0 = 0;
    DAT_800459bc = 0;
    DAT_800459b8 = 0;
    ResetGraph(1);
    SetGraphDebug(0);
    SsUtReverbOn();
    Reset_CDROM_CPURAM();
    FUN_80042284(0x100,0xf0,0x200,0,0,0);
    FUN_80041890();
    Open_Permanent_SoundFiles();
    Get_ZODIAC_CDROM_to_FrameBuffer();
  }
  FUN_80044acc();
  Initialize_Status_Check_Data();
  FUN_800452ec();
  FUN_80045514();
  if (DAT_8004d9b4 != 0) {
    iVar1 = 0;
    do {
      VSync(0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x3c);
    FUN_80041b1c();
  }
  DAT_8004d9b4 = 1;
  return;
}



undefined4 Open_ENTD_withEventID(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_80047600 == 0) {
    uVar2 = 1;
  }
  else {
    if (DAT_80047600 < 0x80) {
      DAT_80047604 = BIN_Malloc_FFT(0x14000);
      uVar2 = 0xebc1;
    }
    else if (DAT_80047600 < 0x100) {
      DAT_80047604 = BIN_Malloc_FFT(0x14000);
      uVar2 = 0xebe9;
    }
    else if (DAT_80047600 < 0x180) {
      DAT_80047604 = BIN_Malloc_FFT(0x14000);
      uVar2 = 0xec11;
    }
    else {
      DAT_80047604 = BIN_Malloc_FFT(0x14000);
      uVar2 = 0xec39;
    }
    iVar1 = Call_CalcFileHead_NNL(uVar2,0x14000,DAT_80047604);
    uVar2 = 1;
    if (iVar1 != 0) {
      Call_BIN_Free_FFT((int)DAT_80047604);
      uVar2 = 0;
    }
  }
  return uVar2;
}



int Get_Current_ENTD_Data_Pointer(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (DAT_80047600 != 0) {
    iVar2 = Check_File_Still_Loading();
    iVar1 = 0;
    if (iVar2 == 0) {
      if (DAT_80047600 < 0x80) {
        iVar1 = DAT_80047600 * 0x280 + DAT_80047604;
      }
      else {
        iVar1 = DAT_80047600 + -0x80;
        if (0xff < DAT_80047600) {
          if (DAT_80047600 < 0x180) {
            iVar1 = DAT_80047600 + -0x100;
          }
          else {
            iVar1 = DAT_80047600 + -0x180;
          }
        }
        iVar1 = iVar1 * 0x280 + DAT_80047604;
      }
    }
  }
  return iVar1;
}



void FUN_80042930(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_80047600 = param_1;
  while (iVar1 = Open_ENTD_withEventID(), iVar1 == 0) {
    VSync(0);
    Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
  }
  while( true ) {
    iVar1 = Get_Current_ENTD_Data_Pointer();
    if (iVar1 == -1) {
      return;
    }
    if (iVar1 != 0) break;
    VSync(0);
    Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
  }
  iVar2 = 0;
  Initialize_Party_ID_to_Neg1();
  do {
    Unit_Initialization(iVar1,iVar2,0,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  Call_BIN_Free_FFT(DAT_80047604);
  return;
}



void StartingInventory(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0xff;
  puVar1 = &DAT_800597df;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  DAT_800597d0 = 5;
  DAT_800597d1 = 2;
  DAT_800597d2 = 1;
  DAT_800597d3 = 1;
  DAT_800597d4 = 1;
  DAT_800597d5 = 1;
  DAT_800597d6 = 1;
  DAT_800597d7 = 2;
  DAT_800597d8 = 1;
  DAT_800597d9 = 1;
  DAT_800597da = 1;
  DAT_800597db = 1;
  DAT_800597dc = 1;
  DAT_800597dd = 2;
  return;
}



void NewGame_Setup(int param_1)

{
  FUN_8010656c();
  Initialize_Party_ID_to_Neg1();
  if (param_1 == 0) {
    Generate_Unit_in_Empty_PartySlot(2);
  }
  else if (param_1 == 2) {
    FUN_80042930(0xfe);
  }
  StartingInventory();
  FUN_800ef25c(0x2c,2000);
  return;
}



void Store_1_5_words(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



void FUN_800434dc(void)

{
  rand();
  DAT_800459b8 = DAT_800459b8 + 1;
  if (0x3b < DAT_800459b8) {
    DAT_800459b8 = 0;
    DAT_800459bc = DAT_800459bc + 1;
    if (0x3b < DAT_800459bc) {
      DAT_800459bc = 0;
      DAT_800459c0 = DAT_800459c0 + 1;
      if (0x3b < DAT_800459c0) {
        DAT_800459c0 = 0;
        if (DAT_800459c4 < 1000) {
          DAT_800459c4 = DAT_800459c4 + 1;
        }
      }
    }
  }
  DAT_80057718 = DAT_80057718 + 1;
  return;
}



void FUN_800435ac(void)

{
  return;
}



void FUN_800435b4(void)

{
  return;
}



void FUN_800435bc(void)

{
  return;
}



bool FUN_800439c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_8004d98c + param_1;
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    FUN_8001216c((int **)(&DAT_8004d970)[param_1]);
    (&DAT_8004d970)[param_1] = 0;
    SMD_Realloc_FFT(*piVar2);
    *piVar2 = 0;
  }
  return iVar1 != 0;
}



bool FUN_80043a38(void)

{
  bool bVar1;
  
  bVar1 = DAT_8004d960 != 0;
  if (bVar1) {
    FUN_80012338(DAT_8004d960);
    DAT_8004d95c = 0;
    DAT_8004d964 = 0;
    DAT_8004d960 = 0;
  }
  return bVar1;
}



undefined4 FUN_80043d80(short param_1)

{
  if (DAT_8004d96c != 0) {
    if ((DAT_8004d96c & 0x80) == 0) {
      FUN_80012f08(*(int *)(&DAT_8004d978 + (DAT_8004d96c & 0x3f) * 4),0,param_1);
    }
    else {
      DAT_8004d96c = 0;
    }
  }
  return 1;
}



void FUN_80043f00(void)

{
  FUN_80043a38();
  FUN_800439c0(1);
  FUN_800439c0(2);
  FUN_80043d80(0);
  return;
}



void __builtin_delete_a(void)

{
  if (DAT_8004599c != 0) {
    FUN_80012560(DAT_8004599c);
  }
  return;
}



void __builtin_delete(uint param_1)

{
  if (param_1 != 0) {
    FUN_80012560(param_1);
  }
  return;
}



void FUN_800440cc(void)

{
  DAT_8004599c = 0;
  FUN_80012860();
  return;
}



void Open_Permanent_SoundFiles(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_80017920(0);
  SMD_Free_FFT();
  puVar1 = (undefined4 *)Get_File(0x14c0f,0x79000,FUN_80067000);
  FUN_80017c8c(puVar1);
  iVar2 = Get_File(0x14c0a,0x2800,&DAT_80047610);
  FUN_80017e7c(iVar2);
  iVar2 = Get_File(85000,0x1000,&DAT_8004d9b8);
  FUN_80017e7c(iVar2);
  iVar2 = 6;
  puVar1 = &DAT_8004d98c;
  DAT_8004d964 = 0;
  DAT_8004d96c = 0;
  DAT_8004d970 = 0;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  DAT_8004599c = 0;
  DAT_8004d998 = Get_SMD(0x14d82,0x800);
  DAT_8004d99c = Get_SMD(0x14d83,0x800);
  DAT_8004d9a0 = Get_SMD(0x14d84,0x800);
  DAT_8004d9a4 = Get_SMD(0x14d85,0x800);
  DAT_8004d9a8 = Get_SMD(0x14d86,0x800);
  return;
}



undefined * SMD_Malloc_FFT(uint param_1)

{
  undefined *puVar1;
  uint in_v1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar5 = param_1 >> 0xb;
  uVar6 = 1;
  if ((param_1 & 0x7ff) != 0) {
    uVar5 = uVar5 + 1;
  }
  uVar3 = 0;
  do {
    uVar2 = (uint)(byte)(&DAT_8004e5c0)[uVar3];
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        in_v1 = uVar3;
      }
      uVar4 = uVar4 + 1;
      if (uVar5 <= uVar4) goto LAB_8004433c;
    }
    else {
      uVar4 = 0;
      if (uVar6 <= uVar2) {
        uVar6 = uVar2 + 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  puVar1 = (undefined *)0x0;
  if (uVar5 <= uVar4) {
LAB_8004433c:
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        (&DAT_8004e5c0)[in_v1 + uVar5] = (char)uVar6;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    puVar1 = &DAT_8004eb18 + in_v1 * 0x800;
  }
  return puVar1;
}



undefined4 SMD_Realloc_FFT(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = param_1 + 0x7ffb14e8U >> 0xb;
  cVar1 = (&DAT_8004e5c0)[uVar4];
  uVar2 = 0;
  if (uVar4 == 0 || cVar1 != (&DAT_8004e5bf)[uVar4]) {
    pcVar3 = &DAT_8004e5c0 + uVar4;
    do {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
      uVar2 = 1;
    } while (*pcVar3 == cVar1);
  }
  return uVar2;
}



void SMD_Free_FFT(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0xf;
  puVar1 = &DAT_8004e5cf;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}



undefined * BIN_Malloc_FFT(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_t0;
  
  uVar4 = 0;
  uVar5 = param_1 >> 0xb;
  uVar6 = 1;
  if ((param_1 & 0x7ff) != 0) {
    uVar5 = uVar5 + 1;
  }
  uVar3 = 0;
  do {
    uVar2 = (uint)(byte)(&DAT_8004e9d4)[uVar3];
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        in_t0 = uVar3;
      }
      uVar4 = uVar4 + 1;
      if (uVar5 <= uVar4) goto LAB_80044494;
    }
    else {
      uVar4 = 0;
      if (uVar6 <= uVar2) {
        uVar6 = uVar2 + 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  puVar1 = (undefined *)0x0;
  if (uVar5 <= uVar4) {
LAB_80044494:
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        (&DAT_8004e9d4)[in_t0 + uVar5] = (char)uVar6;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    puVar1 = &DAT_801df000 + in_t0 * 0x800;
  }
  return puVar1;
}



undefined * BIN_Realloc_FFT(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_1 + 0x7fe21000;
  uVar3 = 1;
  if ((int)puVar1 < 0) {
    puVar1 = param_1 + 0x7fe217ff;
  }
  uVar5 = (int)puVar1 >> 0xb;
  uVar4 = param_2 >> 0xb;
  if ((param_2 & 0x7ff) != 0) {
    uVar4 = uVar4 + 1;
  }
  if ((&UNK_801defff < param_1) && (param_1 < &UNK_801ff000)) {
    do {
      uVar2 = 0;
      do {
        if ((byte)(&DAT_8004e9d4)[uVar2] == uVar3) {
          uVar3 = uVar3 + 1;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x40);
    } while (uVar2 != 0x40);
    for (uVar2 = uVar5; (uVar2 < uVar5 + uVar4 && ((&DAT_8004e9d4)[uVar2] == '\0'));
        uVar2 = uVar2 + 1) {
    }
    if (uVar2 == uVar5 + uVar4) {
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          (&DAT_8004e9d4)[uVar5 + uVar2] = (char)uVar3;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
      return &DAT_801df000 + uVar5 * 0x800;
    }
  }
  return (undefined *)0x0;
}



undefined4 BIN_Free_FFT(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = param_1 + 0x7fe21000U >> 0xb;
  cVar1 = (&DAT_8004e9d4)[uVar4];
  uVar2 = 0;
  if (uVar4 == 0 || cVar1 != (&DAT_8004e9d3)[uVar4]) {
    pcVar3 = &DAT_8004e9d4 + uVar4;
    do {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
      uVar2 = 1;
    } while (*pcVar3 == cVar1);
  }
  return uVar2;
}



void FUN_80044670(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0x3f;
  puVar1 = &DAT_8004ea13;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}



void Call_CalcFileHead_NNL(int param_1,uint param_2,undefined4 param_3)

{
  Calculate_File_Header_NNL(&fileOpenDesc_8004eaf4.field0_0x0,param_1,param_2 >> 0xb,param_3);
  return;
}



// Possible GS_125.OBJ/GsGetWorkBase

int Check_File_Still_Loading(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x8004476c)
// WARNING: Removing unreachable block (ram,0x80044770)

undefined * Get_SMD(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = SMD_Malloc_FFT(param_2);
  if (puVar1 == (undefined *)0x0) {
    ERROREXCEPTION_DEPRECATED();
  }
  while (iVar2 = Calculate_File_Header_NNL
                           (&fileOpenDesc_8004eaf4.field0_0x0,param_1,param_2 >> 0xb,puVar1),
        iVar2 != 0) {
    VSync(0);
    FUN_800449ec();
    Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
  }
  return puVar1;
}



// WARNING: Removing unreachable block (ram,0x80044850)
// WARNING: Removing unreachable block (ram,0x80044854)

undefined * Get_TIM(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = BIN_Malloc_FFT(param_2);
  if (puVar1 == (undefined *)0x0) {
    ERROREXCEPTION_DEPRECATED();
  }
  while (iVar2 = Calculate_File_Header_NNL
                           (&fileOpenDesc_8004eaf4.field0_0x0,param_1,param_2 >> 0xb,puVar1),
        iVar2 != 0) {
    VSync(0);
    FUN_800449ec();
    Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
  }
  return puVar1;
}



// WARNING: Removing unreachable block (ram,0x80044908)

undefined4 Get_File(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  while (iVar1 = Calculate_File_Header_NNL
                           (&fileOpenDesc_8004eaf4.field0_0x0,param_1,param_2 >> 0xb,param_3),
        iVar1 != 0) {
    VSync(0);
    FUN_800449ec();
    Open_File_to_RAM_Centre((int)&fileOpenDesc_8004eaf4);
  }
  return param_3;
}



int Get_DAT_BIN_as_File(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Get_File(param_1,param_2,param_3);
  if (iVar1 == 0) {
    ERROREXCEPTION_DEPRECATED();
  }
  return iVar1;
}



undefined * Get_BIN_as_TIM(int param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = Get_TIM(param_1,param_2);
  if (puVar1 == (undefined *)0x0) {
    ERROREXCEPTION_DEPRECATED();
  }
  return puVar1;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void Call_BIN_Free_FFT(int param_1)

{
  BIN_Free_FFT(param_1);
  return;
}



void FUN_800449ec(void)

{
  return;
}



void FUN_800449f8(void)

{
  return;
}



void FUN_80044a00(void)

{
  return;
}



void ERROREXCEPTION_DEPRECATED(void)

{
  FUN_800449f8();
  DAT_8004c6c4 = 0;
  return;
}



void FUN_80044a34(undefined4 param_1)

{
  FUN_80044a00(0,param_1);
  DAT_8004c6c4 = 0;
  return;
}



undefined4 Get_OTAG_List(void)

{
  return *(undefined4 *)(DAT_8011a2d4 + 0xe5b4);
}



void FUN_80044a7c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_800fc55c;
  if (DAT_8011a2d4 == &DAT_800fc55c) {
    puVar1 = &DAT_8010b384;
  }
  DAT_8011a2d4 = puVar1;
  ClearOTagR(*(u_long **)(puVar1 + 0xe5b4),0x180);
  return;
}



void FUN_80044acc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xff;
  puVar1 = &DAT_80057b18;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  DAT_800473a2 = 4;
  DAT_800473a5 = 4;
  DAT_800473a6 = 4;
  DAT_800577d4 = 1;
  DAT_800577d8 = 1;
  DAT_800473a1 = 0xe;
  DAT_800473a3 = 10;
  DAT_800473a4 = 0x20;
  DAT_800473a7 = 1;
  DAT_800473a8 = 0;
  DAT_800473ac = 0x201648;
  return;
}



undefined4 FUN_80044b68(void)

{
  undefined4 uVar1;
  
  if (DAT_80057b18 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_8014a81c();
  }
  return uVar1;
}



void FUN_80044ba0(int param_1,short *param_2,short *param_3,char *param_4,short *param_5,int param_6
                 )

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  u_short uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = (int)*(short *)(param_4 + 8) * (int)*param_5;
  iVar11 = (int)*(short *)(param_4 + 10) * (int)param_5[1];
  iVar12 = (int)*(short *)(param_4 + 4) * (int)*param_5;
  iVar13 = (int)*(short *)(param_4 + 6) * (int)param_5[1];
  iVar6 = iVar10;
  if (iVar10 < 0) {
    iVar6 = iVar10 + 0xfff;
  }
  iVar7 = iVar11;
  if (iVar11 < 0) {
    iVar7 = iVar11 + 0xfff;
  }
  iVar8 = iVar12;
  if (iVar12 < 0) {
    iVar8 = iVar12 + 0xfff;
  }
  iVar9 = iVar13;
  if (iVar13 < 0) {
    iVar9 = iVar13 + 0xfff;
  }
  sVar1 = (short)(iVar6 >> 0xc) + (ushort)(0x7ff < iVar10 + (iVar6 >> 0xc) * -0x1000);
  sVar2 = (short)(iVar7 >> 0xc) + (ushort)(0x7ff < iVar11 + (iVar7 >> 0xc) * -0x1000);
  iVar6 = (iVar8 >> 0xc) + (uint)(0x7ff < iVar12 + (iVar8 >> 0xc) * -0x1000);
  iVar10 = (iVar9 >> 0xc) + (uint)(0x7ff < iVar13 + (iVar9 >> 0xc) * -0x1000);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar10 < 0) {
    iVar10 = -iVar10;
  }
  uVar5 = GetTPage(1,0,(int)*param_2,(ushort)param_2[1] & 0xf00);
  *(u_short *)(param_1 + 0x16) = uVar5;
  *(char *)(param_1 + 0xc) = *param_4;
  *(char *)(param_1 + 0xd) = param_4[2];
  *(char *)(param_1 + 0x14) = *param_4 + param_4[4];
  *(char *)(param_1 + 0x15) = param_4[2];
  *(char *)(param_1 + 0x1c) = *param_4;
  *(char *)(param_1 + 0x1d) = param_4[2] + param_4[6];
  sVar3 = (short)iVar6 + 0x100;
  *(char *)(param_1 + 0x24) = *param_4 + param_4[4];
  sVar4 = (short)iVar10 + 0x78;
  *(char *)(param_1 + 0x25) = param_4[2] + param_4[6];
  *(short *)(param_1 + 8) = *param_3 + sVar1 + *(short *)(param_6 + 8) + 0x100;
  *(short *)(param_1 + 10) = param_3[1] + sVar2 + *(short *)(param_6 + 10) + 0x78;
  *(short *)(param_1 + 0x10) = *param_3 + sVar1 + *(short *)(param_6 + 8) + sVar3;
  *(short *)(param_1 + 0x12) = param_3[1] + sVar2 + *(short *)(param_6 + 10) + 0x78;
  *(short *)(param_1 + 0x18) = *param_3 + sVar1 + *(short *)(param_6 + 8) + 0x100;
  *(short *)(param_1 + 0x1a) = param_3[1] + sVar2 + *(short *)(param_6 + 10) + sVar4;
  *(short *)(param_1 + 0x20) = *param_3 + sVar1 + *(short *)(param_6 + 8) + sVar3;
  *(short *)(param_1 + 0x22) = param_3[1] + sVar2 + *(short *)(param_6 + 10) + sVar4;
  return;
}



void Build_ZODIAC_Image(uint **param_1,POLY_FT4 *param_2)

{
  u_short uVar1;
  int iVar2;
  uint uVar3;
  u_char *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 local_38;
  undefined2 local_36;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  puVar4 = &param_2->b0;
  do {
    SetPolyFT4(param_2);
    uVar1 = GetClut(0,0x1fd);
    *(u_short *)(puVar4 + 8) = uVar1;
    puVar4[-2] = *(u_char *)(param_1 + 1);
    puVar4[-1] = *(u_char *)(param_1 + 1);
    *puVar4 = *(u_char *)(param_1 + 1);
    SetSemiTrans(param_2,1);
    SetShadeTex(param_2,0);
    iVar8 = (int)*(short *)((int)&DAT_80047520 + iVar5) * (int)*(short *)(param_1 + 3);
    iVar9 = (int)*(short *)((int)&DAT_80047522 + iVar5) * (int)*(short *)((int)param_1 + 0xe);
    iVar2 = iVar8;
    if (iVar8 < 0) {
      iVar2 = iVar8 + 0xfff;
    }
    if (0x7ff < iVar8 + (iVar2 >> 0xc) * -0x1000) {
      iVar8 = iVar8 + 1;
    }
    iVar2 = iVar9;
    if (iVar9 < 0) {
      iVar2 = iVar9 + 0xfff;
    }
    if (0x7ff < iVar9 + (iVar2 >> 0xc) * -0x1000) {
      iVar9 = iVar9 + 1;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xfff;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xfff;
    }
    local_38 = (undefined2)(iVar8 >> 0xc);
    local_36 = (undefined2)(iVar9 >> 0xc);
    FUN_80044ba0(param_2,&DAT_800473bc,&DAT_800473b4,&DAT_800473c4 + iVar7,&local_38,param_1 + 6);
    iVar7 = iVar7 + 0xc;
    if (param_1[2] != (uint *)0x0) {
      puVar4 = puVar4 + 0x28;
      param_2->tag = param_2->tag & 0xff000000 | **param_1 & 0xffffff;
      uVar3 = (uint)param_2 & 0xffffff;
      param_2 = param_2 + 1;
      **param_1 = **param_1 & 0xff000000 | uVar3;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 0x1d);
  SetPolyF4((POLY_F4 *)param_2);
  param_2->r0 = '\b';
  param_2->g0 = '\b';
  param_2->b0 = '\b';
  SetSemiTrans(param_2,1);
  SetShadeTex(param_2,0);
  param_2->x0 = 0;
  param_2->y0 = 0;
  param_2->x1 = 0xff;
  param_2->y1 = 0;
  param_2->x2 = 0;
  param_2->y2 = 0xff;
  param_2->x3 = 0xff;
  param_2->y3 = 0xff;
  param_2->tag = param_2->tag & 0xff000000 | **param_1 & 0xffffff;
  **param_1 = **param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}



// Possible GS_106.OBJ/GsSetProjection
// Possible _OP_VDEL.OBJ/__builtin_vec_delete
// Possible _OP_VNEW.OBJ/__builtin_vec_new
// Possible SCNOFF.OBJ/SsSetNoiseOff
// Possible SSQUIT.OBJ/SsQuit

void Call_Build_ZODIAC(void)

{
  Build_ZODIAC_Image();
  return;
}



void Get_FRAME_CDROM_to_FrameBuffer(void)

{
  undefined *puVar1;
  
  puVar1 = Get_BIN_as_TIM(0xe68,0x9800);
  LoadImage(&FRAMETW1,(u_long *)(puVar1 + 0x1000));
  LoadImage(&FRAMETW2,(u_long *)(puVar1 + 0x9000));
  LoadImage(&FRAMETW3,(u_long *)(puVar1 + 0x9200));
  DrawSync(0);
  Call_BIN_Free_FFT((int)puVar1);
  return;
}



void Open_WORLD_WLDCORE(int param_1)

{
  Open_WORLD_File(0x14849,0xdc,FUN_80067000,0);
  if (param_1 != 0) {
    Open_WORLD_File(0x14925,0x1e0,FUN_800e0000,1);
  }
  FUN_800672f8();
  return;
}



void OPEN_WORLD(int param_1)

{
  Open_WORLD_File(0x14925,0x1e0,FUN_800e0000,param_1 + -1);
  return;
}



// WARNING: Removing unreachable block (ram,0x800452b4)

void Open_WORLD_File(int param_1,int param_2,u_long *param_3,int param_4)

{
  _Calculate_File_Header(&fileOpenDesc_8004eaf4,param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Removing unreachable block (ram,0x800453e0)
// WARNING: Removing unreachable block (ram,0x8004542c)

void FUN_800452ec(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar4 = 0;
  puVar2 = &DAT_80059594;
  iVar6 = 0;
  do {
    *(undefined2 *)((int)puVar2 + 0x26) = 0xffff;
    *(undefined2 *)(puVar2 + 9) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x22) = 0xffff;
    *(undefined2 *)(puVar2 + 8) = 0xffff;
    *(undefined2 *)((int)puVar2 + 0x1e) = 0xffff;
    *(undefined2 *)((int)&DAT_800595ae + iVar6) = 0xffff;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2a) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined2 *)((int)&DAT_800595a2 + iVar6) = 0;
    *(undefined4 *)((int)&DAT_800595c8 + iVar6) = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
    puVar2 = puVar2 + 0xe;
    *(undefined2 *)((int)&DAT_800595a6 + iVar6) = 0;
    *(undefined **)((int)&DAT_80059594 + iVar6) = &DAT_800d0bbc;
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x38;
  } while (iVar4 < 5);
  puVar8 = &DAT_80057f34;
  puVar2 = &DAT_800454d0;
  DAT_800595aa = 0x10;
  DAT_800595e2 = 0x10;
  DAT_8005961a = 0;
  DAT_80059652 = 0;
  DAT_8005968a = 0x10;
  do {
    uVar3 = puVar2[1];
    uVar5 = puVar2[2];
    uVar7 = puVar2[3];
    *puVar8 = *puVar2;
    puVar8[1] = uVar3;
    puVar8[2] = uVar5;
    puVar8[3] = uVar7;
    puVar2 = puVar2 + 4;
    puVar8 = puVar8 + 4;
  } while (puVar2 != (undefined4 *)&UNK_80045510);
  iVar4 = 0x27;
  puVar2 = &DAT_80059410;
  do {
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  iVar4 = 1;
  puVar2 = &DAT_80059814;
  do {
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  iVar4 = 0x5f;
  puVar1 = &DAT_80057d83;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  DAT_80057ce8 = 0;
  DAT_8004d950 = 0;
  return;
}



void FUN_80045514(void)

{
  DAT_80057b26 = 6;
  DAT_80057b28 = 8;
  DAT_80057b2a = 10;
  DAT_80057b20 = 0;
  DAT_80057b21 = 1;
  DAT_80057b22 = 2;
  DAT_80057b23 = 3;
  DAT_80057b24 = 4;
  DAT_80057b25 = 5;
  DAT_80057b27 = 7;
  DAT_80057b29 = 9;
  DAT_80057b2b = 0xff;
  DAT_80057b2c = 0;
  DAT_80057b2d = 1;
  DAT_80057b2e = 2;
  DAT_80057b2f = 4;
  DAT_80057b30 = 5;
  DAT_80057b31 = 7;
  DAT_80057b32 = 9;
  DAT_80057b33 = 0xff;
  DAT_80057b34 = 0;
  DAT_80057b35 = 1;
  DAT_80057b36 = 2;
  DAT_80057b37 = 3;
  DAT_80057b38 = 4;
  DAT_80057b39 = 5;
  DAT_80057b3a = 0xff;
  DAT_80057b3c = 0;
  DAT_80057b3d = 1;
  DAT_80057b3e = 2;
  DAT_80057b3f = 5;
  DAT_80057b40 = 0xff;
  DAT_80057b44 = 0;
  DAT_80057b45 = 1;
  DAT_80057b48 = 0xff;
  DAT_80057b52 = 0xff;
  DAT_80057b58 = 0xff;
  DAT_80057b46 = 2;
  DAT_80057b4e = 2;
  DAT_80057b56 = 2;
  DAT_80057b4d = 1;
  DAT_80057b55 = 1;
  DAT_80057b47 = 5;
  DAT_80057b4c = 0;
  DAT_80057b4f = 3;
  DAT_80057b50 = 4;
  DAT_80057b51 = 5;
  DAT_80057b54 = 0;
  DAT_80057b57 = 5;
  DAT_80057b5c = 0xff;
  DAT_80057be8 = 0xff;
  DAT_80057c08 = 0xff;
  DAT_80057c30 = 0xff;
  DAT_80057c54 = 0xff;
  memset("",'\0',0x100);
  return;
}



void Initialise_MEMCARD_events(void)

{
  int iVar1;
  
  if (DAT_80057c6b == '\0') {
    iVar1 = 0;
    EnterCriticalSection();
    DAT_800596c0 = OpenEvent();
    DAT_800596c4 = OpenEvent();
    DAT_800596c8 = OpenEvent();
    DAT_800596cc = OpenEvent();
    DAT_800596d0 = OpenEvent();
    DAT_800596d4 = OpenEvent();
    DAT_800596d8 = OpenEvent();
    DAT_800596dc = OpenEvent();
    init_card_earlysafe();
    StartCARD_earlysafe();
    ChangeClearPAD();
    _bu_init();
    _card_auto();
    do {
      iVar1 = iVar1 + 1;
      EnableEvent();
    } while (iVar1 < 8);
    ExitCriticalSection();
    DAT_80057c6b = '\x01';
  }
  return;
}



void Get_OPEN_CDROM_to_RAM(void)

{
  Get_DAT_BIN_as_File(86000,0x36800,FUN_80067000);
  FUN_800670f0();
  return;
}



void Get_OPEN_CDROM_to_RAM2(void)

{
  Get_DAT_BIN_as_File(86000,0x36800,FUN_80067000);
  FUN_8006720c();
  return;
}



void Initialize_Status_Check_Data(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  Data_Null(&DAT_80059414,0x80);
  Data_Null(&DAT_800662d0,0x37);
  uVar6 = 0;
  iVar7 = 0;
  do {
    bVar1 = (&DAT_80065de8)[iVar7];
    bVar2 = (&DAT_80065de9)[iVar7];
    uVar4 = uVar6;
    if ((int)uVar6 < 0) {
      uVar4 = uVar6 + 7;
    }
    iVar5 = (int)uVar4 >> 3;
    bVar3 = (byte)(0x80 >> (uVar6 & 7));
    if ((bVar1 & 1) != 0) {
      (&DAT_800662d0)[iVar5] = bVar3 | (&DAT_800662d0)[iVar5];
    }
    if ((bVar1 & 2) != 0) {
      (&DAT_800662d5)[iVar5] = bVar3 | (&DAT_800662d5)[iVar5];
    }
    if ((bVar1 & 4) != 0) {
      (&DAT_800662da)[iVar5] = bVar3 | (&DAT_800662da)[iVar5];
    }
    if ((bVar1 & 0x80) != 0) {
      (&DAT_800662df)[iVar5] = bVar3 | (&DAT_800662df)[iVar5];
    }
    if ((bVar2 & 0x80) != 0) {
      (&DAT_800662e4)[iVar5] = bVar3 | (&DAT_800662e4)[iVar5];
    }
    if ((bVar2 & 1) != 0) {
      (&DAT_800662e9)[iVar5] = bVar3 | (&DAT_800662e9)[iVar5];
    }
    if ((bVar2 & 2) != 0) {
      (&DAT_800662ee)[iVar5] = bVar3 | (&DAT_800662ee)[iVar5];
    }
    if ((bVar2 & 4) != 0) {
      (&DAT_800662f3)[iVar5] = bVar3 | (&DAT_800662f3)[iVar5];
    }
    if ((bVar2 & 8) != 0) {
      (&DAT_800662f8)[iVar5] = bVar3 | (&DAT_800662f8)[iVar5];
    }
    iVar7 = iVar7 + 0x10;
    if ((bVar2 & 0x10) != 0) {
      (&DAT_800662fd)[iVar5] = bVar3 | (&DAT_800662fd)[iVar5];
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x28);
  DAT_80066302 = 0x60;
  DAT_80066303 = 0x85;
  DAT_80066304 = 0xe;
  DAT_80066306 = 0x20;
  return;
}



void Initialize_Party_ID_to_Neg1(void)

{
  int iVar1;
  
  iVar1 = 0x1300;
  do {
    (&DAT_80057f75)[iVar1] = 0xff;
    iVar1 = iVar1 + -0x100;
  } while (-1 < iVar1);
  return;
}



undefined1 * Get_Party_Data_Pointer(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 < 0x14) {
    puVar1 = &DAT_80057f74 + param_1 * 0x100;
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined4 Unit_Initialization(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined uStack_1d0;
  undefined local_1cf;
  undefined local_1ce;
  undefined local_4d;
  undefined local_46;
  
  DAT_80066238 = (char *)(param_1 + param_2 * 0x28);
  if (*DAT_80066238 == '\0') {
    uVar1 = 0xfffffffe;
  }
  else {
    local_1cf = 0x20;
    local_46 = 0xff;
    local_4d = 1;
    local_1ce = 0xff;
    BATTLE_Initialize_UnitGen(&uStack_1d0,DAT_80066238,param_4,0);
    uVar1 = Save_unit_to_Party(&uStack_1d0,param_3);
  }
  return uVar1;
}



undefined4 Save_unit_to_Party(byte *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_18 [8];
  
  bVar3 = param_1[6] & 1;
  if ((0x7f < *param_1) || (param_2 == 0)) {
    bVar3 = 0;
  }
  uVar5 = (uint)param_1[2];
  if ((bVar3 == 0) && (uVar5 - 0x10 < 4)) {
    Remove_Unit();
    bVar3 = 0;
  }
  else if (uVar5 < 0x15) {
    Find_Free_Party_Slot(0,local_18);
    goto LAB_80059c58;
  }
  uVar5 = Find_Free_Party_Slot(bVar3,local_18);
  if (uVar5 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_80059c58:
  pbVar4 = (byte *)Get_Party_Data_Pointer(uVar5);
  bVar3 = *param_1;
  pbVar4[1] = (byte)uVar5;
  *pbVar4 = bVar3;
  pbVar4[2] = param_1[3];
  if ((int)uVar5 < 0x10) {
    pbVar4[3] = local_18[0];
    bVar3 = param_1[6] & 0xfa;
  }
  else {
    pbVar4[3] = param_1[4];
    bVar3 = param_1[6] & 0xfb;
  }
  pbVar4[4] = bVar3;
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 8);
  pbVar4[5] = (byte)(uVar1 & 0x1ff);
  pbVar4[6] = (byte)((uVar1 & 0x1ff) >> 8) | (byte)((ushort)uVar2 >> 8) & 0xf0;
  StoreArg1_IntoArg2_(param_1 + 0x13,pbVar4 + 7,0x10);
  pbVar4[0x17] = param_1[0x23];
  pbVar4[0x18] = param_1[0x25];
  StoreArg1_IntoArg2_(param_1 + 0x72,pbVar4 + 0x19,0xf);
  StoreArg1_IntoArg2_(param_1 + 0x96,pbVar4 + 0x28,0xa6);
  pbVar4[0xce] = param_1[0x16c];
  uVar2 = *(undefined2 *)(param_1 + 0x16c);
  pbVar4[0xd0] = 0;
  pbVar4[0xd2] = 0;
  pbVar4[0xcf] = (byte)((ushort)uVar2 >> 8);
  return 0;
}



uint Find_Free_Party_Slot(int param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_60 [20];
  
  iVar5 = 0;
  piVar3 = local_60;
  *param_2 = 0;
  do {
    iVar1 = Get_Party_Data_Pointer(iVar5);
    *piVar3 = iVar1;
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 < 0x14);
  uVar2 = 0x10;
  if (param_1 == 0) {
    uVar2 = 0;
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x14;
  }
  if (uVar2 < uVar4) {
    piVar3 = local_60 + uVar2;
    do {
      if (*(char *)(*piVar3 + 1) == -1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < (int)uVar4);
  }
  return 0xffffffff;
}



int Create_MonsterEgg(undefined param_1,uint param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Generate_Unit_in_Empty_PartySlot(3);
  iVar3 = -1;
  if (iVar2 != -1) {
    iVar3 = Get_Party_Data_Pointer(iVar2);
    *(undefined *)(iVar3 + 2) = param_1;
    *(undefined *)(iVar3 + 0xd2) = param_3;
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 4;
    if (0x16d < (param_2 & 0xffff)) {
      param_2 = 1;
    }
    cVar1 = Calculate_Zodiac_Sign(param_2 & 0xffff);
    *(char *)(iVar3 + 5) = (char)param_2;
    *(byte *)(iVar3 + 6) = ((byte)(param_2 >> 8) & 1) + cVar1 * '\x10';
    iVar3 = iVar2;
  }
  return iVar3;
}



int Generate_Unit_in_Empty_PartySlot(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_68 [20];
  
  iVar3 = 0;
  piVar2 = local_68;
  do {
    iVar1 = Get_Party_Data_Pointer(iVar3);
    *piVar2 = iVar1;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x14);
  iVar3 = 0;
  piVar2 = local_68;
  do {
    if (*(char *)(*piVar2 + 1) == -1) {
      *(char *)(*piVar2 + 1) = (char)iVar3;
      *(undefined *)(*piVar2 + 3) = 0;
      WORLD_UnitGeneration_(*piVar2,param_1);
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x10);
  return -1;
}



int Find_Units_Party_Data_Location(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = &DAT_80057f74;
  while ((pbVar1[1] == 0xff || (*pbVar1 != param_1))) {
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x100;
    if (0x13 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}



void Remove_Unit(int param_1)

{
  (&DAT_80057f75)[param_1 * 0x100] = 0xff;
  return;
}



void WORLD_UnitGeneration_(byte *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 == 0) {
    iVar11 = 0x4100;
    iVar10 = 0x100;
    bVar3 = 0x80;
    *param_1 = 0x80;
  }
  else {
    iVar11 = 0x4200;
    if (param_2 == 1) {
      iVar10 = 0x200;
      *param_1 = 0x81;
      bVar3 = 0x40;
    }
    else {
      iVar11 = 0x4000;
      if (param_2 != 3) {
        param_2 = 2;
        iVar10 = 0;
        *param_1 = 1;
        param_1[4] = 0x80;
        param_1[2] = 1;
        goto LAB_8005a0b4;
      }
      iVar11 = 0x4300;
      iVar10 = 0x300;
      *param_1 = 0x82;
      bVar3 = 0x20;
    }
  }
  param_1[4] = bVar3;
  param_1[2] = 0x4a;
LAB_8005a0b4:
  iVar5 = rand();
  iVar5 = iVar5 * 0x16d;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x7fff;
  }
  uVar8 = (iVar5 >> 0xf) + 1;
  cVar2 = Calculate_Zodiac_Sign(uVar8 & 0xffff);
  param_1[5] = (byte)uVar8;
  param_1[6] = ((byte)(uVar8 >> 8) & 1) + cVar2 * '\x10';
  if (param_2 == 2) {
    bVar3 = 0x46;
    param_1[0x17] = 0x46;
  }
  else {
    iVar5 = rand();
    iVar5 = iVar5 * 0x1f;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x7fff;
    }
    param_1[0x17] = (char)(iVar5 >> 0xf) + 0x28;
    iVar5 = rand();
    iVar5 = iVar5 * 0x1f;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x7fff;
    }
    bVar3 = (char)(iVar5 >> 0xf) + 0x28;
  }
  param_1[0x18] = bVar3;
  Data_Null(param_1 + 7,7);
  Unit_RawStatPrep(param_1,param_2);
  param_1[0x16] = 1;
  param_1[0x15] = 0;
  Data_Null(param_1 + 0x28,0x96);
  bVar3 = param_1[4];
  if ((bVar3 & 0xc0) != 0) {
    iVar5 = 0;
    pbVar9 = param_1;
    do {
      if (((iVar5 != 0x11) || ((bVar3 & 0x40) == 0)) && ((iVar5 != 0x12 || ((bVar3 & 0x80) == 0))))
      {
        iVar6 = rand();
        iVar6 = iVar6 * 100;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x7fff;
        }
        bVar4 = (char)(iVar6 >> 0xf) + 100;
        pbVar9[0x96] = bVar4;
        pbVar9[0x6e] = bVar4;
        param_1[iVar5 / 2 + 100] = 0x11;
      }
      iVar5 = iVar5 + 1;
      pbVar9 = pbVar9 + 2;
    } while (iVar5 < 0x14);
  }
  if ((bVar3 & 0x80) != 0) {
    param_1[0x6d] = 1;
  }
  if ((bVar3 & 0x40) != 0) {
    param_1[0x6c] = 0x10;
  }
  bVar3 = *param_1;
  param_1[0x28] = 0x80;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    param_1[iVar5 + 0xe] = (&DAT_8005e911)[param_2 * 0xc + iVar5];
    iVar5 = iVar6;
  } while (iVar6 < 7);
  if (param_2 == 2) {
    uVar8 = 1;
  }
  else {
    param_1[0xce] = 0xff;
    param_1[0xcf] = (byte)((uint)iVar10 >> 8);
    do {
      bVar1 = true;
      iVar5 = rand();
      iVar5 = iVar5 * 0xff;
      iVar6 = 0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x7fff;
      }
      uVar8 = iVar10 + (iVar5 >> 0xf);
      pbVar9 = &DAT_80057f74;
      do {
        if (((pbVar9[1] != 0xff) && ((*pbVar9 & (char)*pbVar9 >> 7) == (bVar3 & (char)bVar3 >> 7)))
           && ((uint)*(ushort *)(pbVar9 + 0xce) == (uVar8 & 0xffff))) {
          bVar1 = false;
          break;
        }
        iVar6 = iVar6 + 1;
        pbVar9 = pbVar9 + 0x100;
      } while (iVar6 < 0x10);
    } while (!bVar1);
  }
  param_1[0xce] = (byte)uVar8;
  param_1[0xcf] = (byte)(uVar8 >> 8);
  uVar7 = FUN_800e6edc(iVar11 + (uVar8 & 0xff));
  Move_Data(uVar7,param_1 + 0xbe,0x10);
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  if (param_2 == 2) {
    param_1[0x2b] = 4;
  }
  return;
}



void Unit_RawStatPrep(int param_1)

{
  Make_Unit_BaseRawStats(param_1 + 0x19);
  return;
}



void RawStatPrep(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 6) & 0x80) == 0) {
    uVar1 = 3;
    if ((*(byte *)(param_1 + 6) & 0x40) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  Make_Unit_BaseRawStats(param_1 + 0x72,uVar1);
  return;
}



void Make_Unit_BaseRawStats(undefined *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = 0;
  pbVar5 = &DAT_8005e90c + param_2 * 0xc;
  do {
    bVar1 = *pbVar5;
    iVar2 = rand();
    iVar3 = iVar4 + param_2 * 5;
    pbVar5 = pbVar5 + 1;
    iVar4 = iVar4 + 1;
    iVar3 = (uint)bVar1 * 0x4000 + (int)(iVar2 * (uint)(byte)(&DAT_8005e93c)[iVar3]) / 2;
    *param_1 = (char)iVar3;
    param_1[1] = (char)((uint)iVar3 >> 8);
    param_1[2] = (char)((uint)iVar3 >> 0x10);
    param_1 = param_1 + 3;
  } while (iVar4 < 5);
  return;
}



void JobGrowthMult_to_Unit(int param_1)

{
  StoreArg1_IntoArg2_(&DAT_800610c5 + (uint)*(byte *)(param_1 + 3) * 0x30,param_1 + 0x81,10);
  return;
}



uint Get_Abiltity_from_Skillset(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0xb0) {
    if (0x15 < param_2) {
      return 0;
    }
    iVar3 = param_2;
    if (param_2 < 0) {
      iVar3 = param_2 + 7;
    }
    uVar2 = (uint)(byte)(&UNK_80064a94)[(iVar3 >> 3) + param_1 * 0x19] <<
            (param_2 + (iVar3 >> 3) * -8 + 1U & 0x1f);
    bVar1 = (&UNK_80064a94)[param_2 + param_1 * 0x19 + 3];
  }
  else {
    if (0xdf < param_1) {
      return 0;
    }
    if (3 < param_2) {
      return 0;
    }
    iVar3 = param_2;
    if (param_2 < 0) {
      iVar3 = param_2 + 7;
    }
    uVar2 = (uint)(byte)(&UNK_80065854)[(iVar3 >> 3) + param_1 * 5] <<
            (param_2 + (iVar3 >> 3) * -8 + 1U & 0x1f);
    bVar1 = (&UNK_80065854)[param_2 + param_1 * 5 + 1];
  }
  return (uint)bVar1 | uVar2 & 0x100;
}



undefined2 * Store_SkillsetAbilities(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  
  if (0xff < param_1) {
    param_1 = 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  puVar6 = &DAT_80066204;
  do {
    uVar1 = Get_Abiltity_from_Skillset(param_1,iVar5);
    uVar2 = param_2 & 1;
    if (((0x1a5 < uVar1) && (uVar2 = param_2 & 2, 0x1c5 < uVar1)) &&
       (uVar2 = param_2 & 8, 0x1e6 < uVar1)) {
      uVar2 = param_2 & 4;
    }
    iVar4 = iVar4 + 1;
    if (uVar2 == 0) {
      uVar1 = 0;
    }
    *puVar6 = uVar1;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 0x18);
  if (iVar4 < 0x18) {
    puVar3 = &DAT_80066204 + iVar4;
    do {
      *puVar3 = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x18);
  }
  return &DAT_80066204;
}



undefined4 Get_AbilityPointers_and_Type(uint param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 0x1ff;
  *param_2 = &DAT_8005ebf0 + param_1 * 8;
  if (param_1 < 0x170) {
    *param_3 = (int)&PTR_gte_ldv0_8005fbf0 + param_1 * 0xe;
    uVar1 = 0;
  }
  else if (param_1 < 0x17e) {
    *param_3 = (int)(&UNK_80060ea0 + param_1);
    uVar1 = 1;
  }
  else if (param_1 < 0x18a) {
    *param_3 = (int)(&UNK_80060ea2 + param_1);
    uVar1 = 2;
  }
  else if (param_1 < 0x196) {
    *param_3 = (int)(&UNK_80060d18 + param_1 * 2);
    uVar1 = 3;
  }
  else if (param_1 < 0x19e) {
    *param_3 = (int)(&UNK_80060d18 + param_1 * 2);
    uVar1 = 4;
  }
  else if (param_1 < 0x1a6) {
    *param_3 = (int)(&UNK_80060eb6 + param_1);
    uVar1 = 5;
  }
  else if (param_1 < 0x1c6) {
    *param_3 = (int)(&UNK_80060eb6 + param_1);
    uVar1 = 6;
  }
  else if (param_1 < 0x1e6) {
    *param_3 = (int)(&UNK_80060eb6 + param_1);
    uVar1 = 7;
  }
  else {
    *param_3 = (int)(&UNK_80060eb6 + param_1);
    uVar1 = 8;
  }
  return uVar1;
}



undefined * Get_Item_DataPointer(uint param_1)

{
  return &UNK_80062eb8 + (param_1 & 0xff) * 0xc;
}



undefined1 * Get_Job_DataPointer(int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 < 0xa0) {
    puVar1 = &DAT_800610b8 + param_1 * 0x30;
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined4 Initialize_Unit_JobData(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_80066200 = param_3;
  iVar1 = Get_Party_Data_Pointer(param_2);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 1) == -1)) {
    uVar2 = 0xffffffff;
  }
  else {
    Initialize_Unit_JobLevel(iVar1 + 0x96,iVar1 + 100);
    uVar2 = Calc_Unlocked_Jobs(iVar1 + 100,*(undefined *)(iVar1 + 4));
    Store_1_5_halves(iVar1 + 0x28,uVar2);
    Initialize_ENTD_UnitTargettingData(param_1);
    *(char *)(param_1 + 2) = (char)param_2;
    Initialize_Unit_BattleData(param_1,iVar1);
    Transfer_JobData_to_Unit(param_1);
    Enable_Unit_RSM(param_1);
    Calculate_Stat_Real(param_1,0);
    Female_Equip_setting(param_1);
    Equipment_MoveJump_BonusGen(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 BATTLE_Initialize_UnitGen(int param_1,byte *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  DAT_80066200 = param_3;
  if (param_4 != 0x82) {
    Initialize_ENTD_UnitTargettingData();
    iVar1 = ENTD_Data_Calculation(param_1,param_2);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  if ((param_4 != 0) || (((param_2[1] & 8) == 0 && ((3 < *param_2 || (param_2[4] != 0)))))) {
    CreateUnitJob_From_ENTD(param_1,param_2);
    Calculate_Unit_Abilities(param_1,param_2);
    Enable_Unit_RSM(param_1);
    RawStatPrep(param_1);
    JobGrowthMult_to_Unit(param_1);
    if (*(char *)(param_1 + 2) == -1) {
      *(undefined *)(param_1 + 2) = 0xfe;
    }
    Calculate_Stat_Real(param_1,0);
    if (*(char *)(param_1 + 2) == -2) {
      *(undefined *)(param_1 + 2) = 0xff;
    }
    Female_Equip_setting(param_1);
    if ((param_4 != 0x82) && (0x13 < *(byte *)(param_1 + 2))) {
      Create_Unit_Equip_From_ENTD(param_1,param_2);
    }
    Equipment_MoveJump_BonusGen(param_1);
    Store_Ramza_PlayerStats(param_1);
  }
  return 0;
}



void Equipment_MoveJump_BonusGen(undefined4 param_1)

{
  Equipment_Stat_Calc();
  Equipment_Attr_Calc(param_1,1);
  MoveJumpBonusCalc(param_1,0);
  Generate_Unit_Name(param_1);
  return;
}



void Store_Ramza_PlayerStats(byte *param_1)

{
  ushort uVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*param_1 < 4) {
    do {
      pbVar2 = (byte *)Get_Party_Data_Pointer(iVar4);
      if ((pbVar2[1] != 0xff) && (*pbVar2 < 4)) {
        uVar1 = *(ushort *)(param_1 + 8);
        uVar3 = (ushort)pbVar2[5] + (ushort)pbVar2[6] * 0x100 & 0x1ff;
        *(ushort *)(param_1 + 8) = uVar1 & 0xfe00 | uVar3;
        *(ushort *)(param_1 + 8) = uVar1 & 0xe00 | uVar3 | (ushort)(pbVar2[6] >> 4) << 0xc;
        StoreArg1_IntoArg2_(pbVar2 + 0xbe,param_1 + 300,0x10);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x14);
  }
  return;
}



undefined4 ENTD_Data_Calculation(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 unaff_s4;
  
  param_1[4] = param_2[0x17];
  param_1[5] = param_2[0x18];
  param_1[0x1ba] = param_2[0x18];
  bVar4 = param_2[1];
  if ((bVar4 & 8) == 0) {
    iVar2 = 0;
    if ((3 < *param_2) || (param_2[4] != 0)) goto LAB_8005ad90;
    iVar2 = 0;
    do {
      pbVar1 = (byte *)Get_Party_Data_Pointer(iVar2);
      if ((pbVar1[1] != 0xff) && (*pbVar1 < 4)) {
        *pbVar1 = *param_2;
        bVar4 = pbVar1[7];
        if (pbVar1[2] < 3) {
          pbVar1[2] = *param_2;
        }
        if (((bVar4 == 0x19) || (bVar4 == 0x1a)) || (bVar4 == 0x1b)) {
          pbVar1[7] = (&DAT_800610b8)[(uint)*param_2 * 0x30];
        }
        unaff_s4 = Initialize_Unit_JobData_Prep(param_1,param_2);
        bVar4 = 8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  }
  else {
    unaff_s4 = Initialize_Unit_JobData_Prep();
  }
  iVar2 = 0;
LAB_8005ad90:
  do {
    iVar3 = iVar2 + 1;
    param_1[iVar2 + 0x165] = *(byte *)(DAT_80066238 + iVar2 + 0x21);
    iVar2 = iVar3;
  } while (iVar3 < 7);
  if ((bVar4 & 8) == 0) {
    param_1[6] = bVar4;
    bVar4 = *param_2;
    param_1[2] = 0xff;
    *param_1 = bVar4;
    uVar6 = (uint)param_2[3];
    if ((uVar6 == 0) || (uVar6 == 0xfe)) {
      uVar6 = (uint)DAT_80066308;
      bVar4 = DAT_80066308 >> 3;
      iVar2 = rand();
      iVar2 = (bVar4 + 1) * iVar2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      uVar6 = (uVar6 - bVar4) + (iVar2 >> 0xf);
    }
    else if (99 < uVar6) {
      uVar6 = uVar6 + DAT_80066308 + 0x9c;
    }
    if ((uVar6 & 0xff) == 0) {
      uVar6 = 1;
    }
    bVar4 = (byte)uVar6;
    if (99 < (uVar6 & 0xff)) {
      bVar4 = 99;
    }
    param_1[0x22] = bVar4;
    uVar6 = (uint)param_2[4];
    uVar5 = (ushort)param_2[5];
    if (((uVar6 == 0) || (0xc < uVar6)) || ((uVar5 == 0 || (0x1f < uVar5)))) {
      iVar2 = rand();
      iVar2 = iVar2 * 0x16d;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      uVar5 = (short)(iVar2 >> 0xf) + 1;
    }
    else {
      uVar5 = *(short *)(&DAT_800661ce + uVar6 * 2) + uVar5;
    }
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfe00 | uVar5 & 0x1ff;
    uVar6 = Calculate_Zodiac_Sign();
    uVar5 = *(ushort *)(param_1 + 8);
    *(ushort *)(param_1 + 8) = uVar5 & 0xfff | (ushort)((uVar6 & 0xffff) << 0xc);
    if (param_2[10] == 0x97) {
      *(ushort *)(param_1 + 8) = uVar5 & 0xfff | 0xc000;
    }
    bVar4 = param_2[6];
    if (100 < bVar4) {
      iVar2 = rand();
      iVar2 = iVar2 * 0x1e;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      bVar4 = (char)(iVar2 >> 0xf) + 0x2d;
    }
    param_1[0x24] = bVar4;
    param_1[0x23] = bVar4;
    bVar4 = param_2[7];
    if (100 < bVar4) {
      iVar2 = rand();
      iVar2 = iVar2 * 0x1e;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      bVar4 = (char)(iVar2 >> 0xf) + 0x2d;
    }
    param_1[0x26] = bVar4;
    param_1[0x25] = bVar4;
    bVar4 = param_2[0x1c];
    if (99 < bVar4) {
      iVar2 = rand();
      uVar6 = iVar2 * 100;
      bVar4 = (byte)(uVar6 >> 0xf);
      if ((int)uVar6 < 0) {
        bVar4 = (byte)(uVar6 + 0x7fff >> 0xf);
      }
    }
    param_1[0x21] = bVar4;
    unaff_s4 = 0;
    *(ushort *)(param_1 + 0x16c) = (ushort)param_2[2];
  }
  return unaff_s4;
}



undefined4 Initialize_Unit_JobData_Prep(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  iVar1 = Find_Units_Party_Data_Location(*param_2);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    Initialize_Unit_JobData(param_1,iVar1,DAT_80066200);
    bVar3 = *(byte *)(param_1 + 6) & 0xee;
    *(byte *)(param_1 + 6) = bVar3;
    *(byte *)(param_1 + 6) = bVar3 | param_2[1] & 0x11;
    *(undefined *)(param_1 + 5) = param_2[0x18];
    uVar2 = 0;
    *(undefined *)(param_1 + 0x1ba) = param_2[0x18];
  }
  return uVar2;
}



void Initialize_Unit_BattleData(byte *param_1,byte *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  
  bVar3 = 8;
  if (*param_2 < 4) {
    bVar3 = 0xb;
  }
  param_1[5] = bVar3;
  param_1[0x1ba] = bVar3;
  *param_1 = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  bVar3 = param_2[3];
  if (param_2[1] < 0x10) {
    bVar3 = 0;
  }
  param_1[4] = bVar3;
  param_1[6] = param_2[4];
  uVar1 = *(ushort *)(param_1 + 8);
  uVar4 = (ushort)param_2[5] + (ushort)param_2[6] * 0x100 & 0x1ff;
  *(ushort *)(param_1 + 8) = uVar1 & 0xfe00 | uVar4;
  *(ushort *)(param_1 + 8) = uVar1 & 0xe00 | uVar4 | (ushort)(param_2[6] >> 4) << 0xc;
  param_1[0x13] = param_2[7];
  *(ushort *)(param_1 + 0x14) = (ushort)param_2[8] + (ushort)param_2[9] * 0x100;
  *(ushort *)(param_1 + 0x16) = (ushort)param_2[10] + (ushort)param_2[0xb] * 0x100;
  *(ushort *)(param_1 + 0x18) = (ushort)param_2[0xc] + (ushort)param_2[0xd] * 0x100;
  StoreArg1_IntoArg2_(param_2 + 0xe,param_1 + 0x1a,7);
  param_1[0x21] = param_2[0x15];
  param_1[0x22] = param_2[0x16];
  bVar3 = param_2[0x17];
  param_1[0x24] = bVar3;
  param_1[0x23] = bVar3;
  bVar3 = param_2[0x18];
  param_1[0x26] = bVar3;
  param_1[0x25] = bVar3;
  StoreArg1_IntoArg2_(param_2 + 0x19,param_1 + 0x72,0xf);
  iVar6 = 0;
  pbVar5 = param_1;
  do {
    iVar2 = iVar6 + 0x28;
    iVar6 = iVar6 + 1;
    pbVar5[0x96] = param_2[iVar2];
    pbVar5 = param_1 + iVar6;
  } while (iVar6 < 3);
  StoreArg1_IntoArg2_(param_2 + 0x2b,param_1 + 0x99,0x39);
  StoreArg1_IntoArg2_(param_2 + 100,param_1 + 0xd2,10);
  StoreArg1_IntoArg2_(param_2 + 0x6e,param_1 + 0xdc,0x50);
  StoreArg1_IntoArg2_(param_2 + 0xbe,param_1 + 300,0x10);
  *(ushort *)(param_1 + 0x16c) = (ushort)param_2[0xce] + (ushort)param_2[0xcf] * 0x100;
  Data_Null(param_1 + 0x165,7);
  return;
}



void CreateUnitJob_From_ENTD(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar4;
  
  Data_Null((undefined *)(param_1 + 0xd2),10);
  uVar6 = 0;
  if (param_2 == 0) {
    Transfer_JobData_to_Unit(param_1);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 6) = 0x20;
    Store_1_5_halves(param_1 + 0x96,0);
  }
  else {
    bVar2 = *(byte *)(param_2 + 1);
    if ((bVar2 & 0x20) == 0) {
      bVar5 = *(byte *)(param_2 + 8);
      uVar7 = (uint)bVar5;
      if (uVar7 < 0x14) {
        uVar4 = *(byte *)(param_2 + 9) & 0xf;
        uVar3 = (undefined)uVar4;
        if ((bVar5 & 1) == 0) {
          uVar3 = (undefined)(uVar4 << 4);
        }
        *(undefined *)(param_1 + (uint)(bVar5 >> 1) + 0xd2) = uVar3;
        iVar8 = 0;
        pbVar10 = &DAT_800660ba + uVar7 * 10;
        do {
          if (uVar7 == 0) {
            bVar5 = 1;
            if (iVar8 != 0) {
              bVar5 = 0x11;
            }
          }
          else {
            bVar5 = *pbVar10;
          }
          iVar9 = param_1 + iVar8;
          bVar5 = bVar5 | *(byte *)(iVar9 + 0xd2);
          if ((bVar5 & 0xf) == 0) {
            bVar5 = bVar5 | 1;
          }
          pbVar10 = pbVar10 + 1;
          if ((bVar5 & 0xf0) == 0) {
            bVar5 = bVar5 | 0x10;
          }
          iVar8 = iVar8 + 1;
          *(byte *)(iVar9 + 0xd2) = bVar5;
        } while (iVar8 < 10);
        if ((bVar2 & 0x40) != 0) {
          *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) & 0xf0;
        }
        if ((bVar2 & 0x80) != 0) {
          *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) & 0xf;
        }
        uVar6 = Calc_Unlocked_Jobs(param_1 + 0xd2,bVar2);
      }
    }
    Store_1_5_halves(param_1 + 0x96,uVar6);
    *(undefined *)(param_1 + 3) = *(undefined *)(param_2 + 10);
    Transfer_JobData_to_Unit(param_1);
    cVar1 = *(char *)(param_2 + 0x1d);
    if ((cVar1 != -1) && (cVar1 != '\0')) {
      *(char *)(param_1 + 0x12) = cVar1;
      *(undefined *)(param_1 + 0x189) = 0xff;
    }
    if (*(char *)(param_2 + 0xb) == -2) {
      if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
        bVar2 = Get_Random_UnlockedJob(param_1);
        if (bVar2 != 0) {
          bVar2 = (&DAT_800610b8)[(uint)bVar2 * 0x30];
        }
        if (bVar2 == *(byte *)(param_1 + 0x12)) {
          bVar2 = 0;
        }
        *(byte *)(param_1 + 0x13) = bVar2;
      }
      else {
        *(undefined *)(param_1 + 0x13) = 0;
      }
    }
    else {
      *(char *)(param_1 + 0x13) = *(char *)(param_2 + 0xb);
    }
  }
  return;
}



byte Get_Random_UnlockedJob(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte local_20 [24];
  
  uVar6 = 0x800000;
  iVar8 = 0;
  iVar5 = 0;
  pbVar7 = local_20;
  bVar3 = param_1[0x96];
  bVar1 = param_1[0x97];
  bVar2 = param_1[0x98];
  do {
    if (((uint)bVar3 * 0x10000 + (uint)bVar1 * 0x100 + (uint)bVar2 & uVar6) != 0) {
      bVar4 = (char)iVar5 + 0x4a;
      if ((iVar5 == 0) && (bVar4 = *param_1, 0x7f < bVar4)) {
        bVar4 = 0x4a;
      }
      *pbVar7 = bVar4;
      pbVar7 = pbVar7 + 1;
      iVar8 = iVar8 + 1;
    }
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 / 2;
  } while (iVar5 < 0x13);
  bVar3 = 0;
  if (iVar8 != 0) {
    iVar5 = rand();
    uVar6 = iVar5 * iVar8;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 0x7fff;
    }
    bVar3 = local_20[uVar6 >> 0xf & 0xff];
  }
  return bVar3;
}



void Transfer_JobData_to_Unit(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  if (*param_1 < 0x4a) {
    param_1[0x162] = (&DAT_800610b8)[(uint)*param_1 * 0x30];
  }
  else {
    param_1[0x162] = 0;
  }
  iVar4 = (uint)param_1[3] * 0x30;
  param_1[0x12] = (&DAT_800610b8)[iVar4];
  StoreArg1_IntoArg2_(&DAT_800610b9 + iVar4,param_1 + 10,8);
  StoreArg1_IntoArg2_(&DAT_800610c1 + iVar4,param_1 + 0x4a,4);
  StoreArg1_IntoArg2_(&DAT_800610c5 + iVar4,param_1 + 0x81,10);
  param_1[0x3a] = (&DAT_800610cf)[iVar4];
  param_1[0x3b] = (&DAT_800610d0)[iVar4] & 0x7f;
  if (((&DAT_800610d0)[iVar4] & 0x80) == 0) {
    uVar3 = *(ushort *)(param_1 + 0x48) & 0xbfff;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x48) | 0x4000;
  }
  *(ushort *)(param_1 + 0x48) = uVar3;
  StoreArg1_IntoArg2_(&UNK_800610d2 + iVar4,param_1 + 0x4e,0xf);
  bVar1 = param_1[5];
  bVar2 = param_1[6];
  if (((bVar1 & 4) != 0) && (iVar6 = 0, (bVar2 & 9) != 0)) {
    pbVar5 = param_1 + 0x53;
    do {
      if ((bVar1 & 4) != 0) {
        *pbVar5 = *pbVar5 | (&DAT_800662e9)[iVar6];
      }
      if ((bVar2 & 9) != 0) {
        *pbVar5 = *pbVar5 | (&DAT_800662ee)[iVar6];
      }
      iVar6 = iVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (iVar6 < 5);
  }
  StoreArg1_IntoArg2_(&UNK_800610e1 + iVar4,param_1 + 0x6d,4);
  param_1[0x71] = 0;
  param_1[0x15f] = (&DAT_800610e5)[iVar4];
  param_1[0x160] = (&DAT_800610e6)[iVar4];
  param_1[0x15e] = (&DAT_800610e7)[iVar4];
  return;
}



void Enable_Unit_RSM(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  Data_Null((undefined *)(param_1 + 0x8b),0xb);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    puVar1 = (undefined2 *)(iVar2 + 10);
    iVar2 = iVar2 + 2;
    iVar3 = iVar3 + 1;
    EnableRSM(param_1,*puVar1);
  } while (iVar3 < 4);
  EnableRSM(param_1,*(undefined2 *)(param_1 + 0x14));
  EnableRSM(param_1,*(undefined2 *)(param_1 + 0x16));
  EnableRSM(param_1,*(undefined2 *)(param_1 + 0x18));
  return;
}



void EnableRSM(int param_1,ushort param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  uVar1 = param_2 - 0x1a6;
  if (uVar1 < 0x58) {
    if (param_2 < 0x1c6) {
      *(ushort *)(param_1 + 0x14) = param_2;
    }
    pbVar2 = (byte *)(param_1 + 0x8b + (uint)(uVar1 >> 3));
    *pbVar2 = *pbVar2 | (byte)(0x80 >> (uVar1 & 7));
  }
  return;
}



void Calculate_Stat_Real(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar4;
  
  uVar13 = 100;
  uVar12 = 999;
  uVar11 = param_2 & 1;
  if ((*(byte *)(param_1 + 6) & 4) != 0) {
    uVar13 = 10;
    uVar12 = 0xffff;
  }
  uVar9 = 0;
  pbVar10 = (byte *)(param_1 + 0x81);
  bVar1 = *(byte *)(param_1 + 0x22);
  pbVar8 = (byte *)(param_1 + 0x72);
  do {
    uVar5 = (uint)*pbVar8 + (uint)pbVar8[1] * 0x100 + (uint)pbVar8[2] * 0x10000;
    if ((param_2 == 0) && (*(char *)(param_1 + 2) == -2)) {
      uVar7 = (uint)*pbVar10;
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      iVar6 = 2;
      if (1 < bVar1) {
        iVar2 = uVar7 + 2;
        do {
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 + uVar5 / (iVar2 - 1U);
          iVar2 = uVar7 + iVar6;
        } while (iVar6 <= (int)(uint)bVar1);
      }
    }
    if (0xffffff < uVar5) {
      uVar5 = 0xffffff;
    }
    pbVar8[1] = (byte)(uVar5 >> 8);
    *pbVar8 = (byte)uVar5;
    pbVar8[2] = (byte)(uVar5 >> 0x10);
    uVar7 = 100;
    if (1 >= (int)uVar9) {
      uVar7 = uVar13;
    }
    uVar5 = (uVar5 * pbVar10[1]) / uVar7 >> 0xe;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    uVar7 = uVar5;
    if ((1 < (int)uVar9) || (uVar7 = uVar12, uVar12 < uVar5)) {
      uVar5 = uVar7;
    }
    if ((uVar9 == 2) && (0x32 < uVar5)) {
      uVar5 = 0x32;
    }
    if ((2 < (int)uVar9) && (99 < uVar5)) {
      uVar5 = 99;
    }
    if (uVar9 < 5) {
      uVar3 = (undefined)uVar5;
      uVar4 = (undefined2)uVar5;
      switch(uVar9) {
      case 0:
        *(undefined2 *)(param_1 + 0x2a) = uVar4;
        if (param_2 == 0) {
          *(undefined2 *)(param_1 + 0x28) = uVar4;
        }
        break;
      case 1:
        *(undefined2 *)(param_1 + 0x2e) = uVar4;
        if (param_2 == 0) {
          *(undefined2 *)(param_1 + 0x2c) = uVar4;
        }
        break;
      case 2:
        if (uVar11 == 0) {
          *(undefined *)(param_1 + 0x32) = uVar3;
        }
        break;
      case 3:
        if (uVar11 == 0) {
          *(undefined *)(param_1 + 0x30) = uVar3;
        }
        break;
      case 4:
        if (uVar11 == 0) {
          *(undefined *)(param_1 + 0x31) = uVar3;
        }
      }
    }
    pbVar10 = pbVar10 + 2;
    uVar9 = uVar9 + 1;
    pbVar8 = pbVar8 + 3;
  } while ((int)uVar9 < 5);
  return;
}



void Calculate_Unit_Abilities(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  bVar1 = *(byte *)(param_1 + 3);
  bVar2 = *(byte *)(param_1 + 6);
  if (param_2 == 0) {
    Data_Null((undefined *)(param_1 + 0x14),6);
  }
  else {
    cVar3 = *(char *)(param_2 + 0x1d);
    if ((cVar3 == -1) || (cVar3 == '\0')) {
      *(undefined1 *)(param_1 + 0x12) = (&DAT_800610b8)[(uint)bVar1 * 0x30];
    }
    else {
      *(char *)(param_1 + 0x12) = cVar3;
    }
    if ((bVar2 & 0xc0) != 0) {
      Data_Null((undefined *)(param_1 + 0x99),0x39);
      iVar9 = 0;
      iVar11 = 0;
      iVar10 = param_1;
      do {
        bVar4 = *(byte *)(param_1 + iVar9 + 0xd2);
        if ((iVar9 != 9) || (sVar5 = 0, (bVar2 & 0x80) == 0)) {
          if (bVar4 >> 4 == 0) {
            iVar7 = rand();
            iVar7 = iVar7 * 100;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x7fff;
            }
            sVar5 = (short)(iVar7 >> 0xf) + 100;
          }
          else {
            iVar7 = rand();
            iVar7 = iVar7 * 100;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x7fff;
            }
            sVar5 = *(short *)(&DAT_80066182 + (uint)(bVar4 >> 4) * 2) + (short)(iVar7 >> 0xf);
          }
        }
        *(short *)(iVar10 + 0x104) = sVar5;
        *(short *)(iVar10 + 0xdc) = sVar5;
        Calc_Learned_Abilities(param_1,iVar11 + 0x4a,param_2);
        if ((iVar9 != 8) || (sVar5 = 0, (bVar2 & 0x40) == 0)) {
          if ((bVar4 & 0xf) == 0) {
            iVar7 = rand();
            iVar7 = iVar7 * 100;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x7fff;
            }
            sVar5 = (short)(iVar7 >> 0xf) + 100;
          }
          else {
            iVar7 = rand();
            iVar7 = iVar7 * 100;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 0x7fff;
            }
            sVar5 = *(short *)(&DAT_80066182 + (bVar4 & 0xf) * 2) + (short)(iVar7 >> 0xf);
          }
        }
        *(short *)(iVar10 + 0x106) = sVar5;
        *(short *)(iVar10 + 0xde) = sVar5;
        if (iVar9 == 9) break;
        Calc_Learned_Abilities(param_1,iVar11 + 0x4b,param_2);
        iVar10 = iVar10 + 4;
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 2;
      } while (iVar9 < 10);
      if ((*(char *)(param_2 + 0x1d) != '\0') && (*(char *)(param_2 + 0x1d) != -1)) {
        *(undefined *)(param_1 + 0x99) = 0xff;
        *(undefined *)(param_1 + 0x9a) = 0xff;
        *(undefined *)(param_1 + 0x9b) = 0xff;
      }
    }
    iVar9 = 0;
    iVar10 = param_1;
    do {
      iVar7 = iVar9 * 2;
      iVar8 = param_1 + iVar9;
      iVar11 = iVar9 + (uint)bVar1 * 0x30;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + (uint)bVar1 * 0x30;
      *(ushort *)(iVar10 + 10) =
           (ushort)(byte)(&DAT_800610b8)[iVar7 + 1] +
           (ushort)(byte)(&DAT_800610b8)[iVar7 + 2] * 0x100;
      *(undefined1 *)(iVar8 + 0x4a) = (&DAT_800610b8)[iVar11 + 9];
      iVar10 = iVar10 + 2;
    } while (iVar9 < 4);
    uVar6 = Calculate_RSM(param_1,*(undefined2 *)(param_2 + 0xc),2,param_2);
    *(undefined2 *)(param_1 + 0x14) = uVar6;
    uVar6 = Calculate_RSM(param_1,*(undefined2 *)(param_2 + 0xe),4,param_2);
    *(undefined2 *)(param_1 + 0x16) = uVar6;
    uVar6 = Calculate_RSM(param_1,*(undefined2 *)(param_2 + 0x10),8,param_2);
    *(undefined2 *)(param_1 + 0x18) = uVar6;
  }
  return;
}



void Monster_Equipment_Storing(int param_1,int param_2)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_2 + 0x15);
  *(undefined *)(param_1 + 0x1e) = 0xff;
  *(undefined *)(param_1 + 0x1d) = uVar1;
  uVar1 = *(undefined *)(param_2 + 0x16);
  *(undefined *)(param_1 + 0x20) = 0xff;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  *(undefined *)(param_1 + 0x1a) = *(undefined *)(param_2 + 0x12);
  *(undefined *)(param_1 + 0x1b) = *(undefined *)(param_2 + 0x13);
  *(undefined *)(param_1 + 0x1c) = *(undefined *)(param_2 + 0x14);
  return;
}



void Create_Unit_Equip_From_ENTD(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
    bVar2 = *(byte *)(param_2 + 0x15);
    bVar1 = *(byte *)(param_1 + 0x91);
    if (bVar2 == 0xfe) {
      if ((bVar1 & 2) != 0) {
        bVar2 = Create_Random_Equip(param_1,0x80,4,0xff);
      }
      if ((bVar2 == 0xfe) && ((bVar1 & 1) != 0)) {
        bVar2 = Create_Random_Equip(param_1,0x80,8,0xff);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x8f);
    uVar4 = (uint)bVar2;
    if (bVar2 == 0xfe) {
      if ((bVar1 & 0x20) != 0) {
        bVar2 = Create_Random_Equip(param_1,0x80,0,3);
      }
      uVar4 = (uint)bVar2;
      if (bVar2 == 0xfe) {
        if ((bVar1 & 0x10) != 0) {
          bVar2 = Create_Random_Equip(param_1,0x80,0,5);
        }
        uVar4 = (uint)bVar2;
        if (bVar2 == 0xfe) {
          if ((bVar1 & 8) != 0) {
            bVar2 = Create_Random_Equip(param_1,0x80,0,0xb);
          }
          uVar4 = (uint)bVar2;
          if (bVar2 == 0xfe) {
            if ((bVar1 & 4) != 0) {
              bVar2 = Create_Random_Equip(param_1,0x80,0,0xf);
            }
            uVar4 = (uint)bVar2;
            if (bVar2 == 0xfe) {
              if ((bVar1 & 2) != 0) {
                bVar2 = Create_Random_Equip(param_1,0x80,0,6);
              }
              uVar4 = (uint)bVar2;
              if (bVar2 == 0xfe) {
                if ((bVar1 & 1) != 0) {
                  bVar2 = Create_Random_Equip(param_1,0x80,0,10);
                }
                uVar4 = (uint)bVar2;
                if (bVar2 == 0xfe) {
                  bVar2 = Create_Random_Equip(param_1,0x80,0,0xff);
                  uVar4 = (uint)bVar2;
                  if (uVar4 == 0xfe) {
                    bVar2 = 0xff;
                    uVar4 = 0xff;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (((&DAT_80062ebb)[uVar4 * 0xc] & 0x40) == 0) {
      *(byte *)(param_1 + 0x1d) = bVar2;
      *(undefined *)(param_1 + 0x1e) = 0xff;
    }
    else {
      *(byte *)(param_1 + 0x1e) = bVar2;
      *(undefined *)(param_1 + 0x1d) = 0xff;
    }
    bVar2 = *(byte *)(param_2 + 0x16);
    if ((*(byte *)(param_1 + 0x1d) != 0xff) &&
       ((((&DAT_80063ab9)[(uint)(byte)(&DAT_80062ebc)[(uint)*(byte *)(param_1 + 0x1d) * 0xc] * 8] &
         1) != 0 || ((*(byte *)(param_1 + 0x91) & 2) != 0)))) {
      bVar2 = 0xff;
    }
    if ((bVar2 == 0xfe) && ((*(byte *)(param_1 + 0x91) & 1) != 0)) {
      bVar2 = Create_Random_Equip(param_1,0x80,8,0xff);
    }
    if (bVar2 == 0xfe) {
      if ((*(byte *)(param_1 + 0x4c) & 0x10) == 0) {
        bVar2 = 0xff;
      }
      else {
        bVar2 = Create_Random_Equip(param_1,0x40,0,0xff);
      }
    }
    if (((&DAT_80062ebb)[(uint)bVar2 * 0xc] & 0x80) == 0) {
      *(byte *)(param_1 + 0x20) = bVar2;
      *(undefined *)(param_1 + 0x1f) = 0xff;
    }
    else {
      *(byte *)(param_1 + 0x1f) = bVar2;
      *(undefined *)(param_1 + 0x20) = 0xff;
    }
    cVar3 = *(char *)(param_2 + 0x12);
    bVar2 = *(byte *)(param_1 + 0x8f);
    if (cVar3 == -2) {
      cVar3 = -2;
      if ((bVar2 & 0x80) != 0) {
        cVar3 = Create_Random_Equip(param_1,0x20,0,0x14);
      }
      if ((cVar3 == -2) && (cVar3 = Create_Random_Equip(param_1,0x20,0,0xff), cVar3 == -2)) {
        cVar3 = -1;
      }
    }
    *(char *)(param_1 + 0x1a) = cVar3;
    cVar3 = *(char *)(param_2 + 0x13);
    if (cVar3 == -2) {
      cVar3 = -2;
      if ((bVar2 & 0x40) != 0) {
        cVar3 = Create_Random_Equip(param_1,0x10,0,0x17);
      }
      if ((cVar3 == -2) && (cVar3 = Create_Random_Equip(param_1,0x10,0,0xff), cVar3 == -2)) {
        cVar3 = -1;
      }
    }
    *(char *)(param_1 + 0x1b) = cVar3;
    cVar3 = *(char *)(param_2 + 0x14);
    if ((cVar3 == -2) && (cVar3 = Create_Random_Equip(param_1,8,0,0xff), cVar3 == -2)) {
      cVar3 = -1;
    }
    *(char *)(param_1 + 0x1c) = cVar3;
    iVar5 = 0;
    iVar6 = param_1;
    do {
      iVar5 = iVar5 + 1;
      if (*(char *)(iVar6 + 0x1a) == '\0') {
        *(undefined *)(iVar6 + 0x1a) = 0xff;
      }
      iVar6 = param_1 + iVar5;
    } while (iVar5 < 7);
  }
  else {
    Monster_Equipment_Storing();
  }
  return;
}



void Female_Equip_setting(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x8f);
  if ((bVar1 & 0x80) != 0) {
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 9;
  }
  if ((bVar1 & 0x40) != 0) {
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 0x10;
  }
  if ((bVar1 & 0x20) != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
  }
  if ((bVar1 & 0x10) != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 4;
  }
  if ((bVar1 & 8) != 0) {
    *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 0x10;
  }
  if ((bVar1 & 4) != 0) {
    *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 1;
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 2;
  }
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 0x20;
  }
  if ((*(byte *)(param_1 + 6) & 0x40) != 0) {
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 0x42;
    *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) | 1;
  }
  return;
}



void Equipment_Stat_Calc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  Data_Null((undefined *)(param_1 + 0x3c),0xb);
  *(undefined *)(param_1 + 0x43) = (&DAT_800610d1)[(uint)*(byte *)(param_1 + 3) * 0x30];
  if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
    iVar2 = (uint)*(byte *)(param_1 + 0x1c) * 0xc;
    if (((&DAT_80062ebb)[iVar2] & 8) != 0) {
      bVar1 = (&DAT_80062ebc)[iVar2];
      *(undefined *)(param_1 + 0x40) = (&DAT_80063f58)[(uint)bVar1 * 2];
      *(undefined *)(param_1 + 0x44) = (&DAT_80063f59)[(uint)bVar1 * 2];
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x1e) * 0xc;
    if (((&DAT_80062ebb)[iVar2] & 0x40) != 0) {
      bVar1 = (&DAT_80062ebc)[iVar2];
      *(undefined *)(param_1 + 0x41) = (&DAT_80063eb8)[(uint)bVar1 * 2];
      *(undefined *)(param_1 + 0x45) = (&DAT_80063eb9)[(uint)bVar1 * 2];
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x20) * 0xc;
    if (((&DAT_80062ebb)[iVar2] & 0x40) != 0) {
      bVar1 = (&DAT_80062ebc)[iVar2];
      *(undefined *)(param_1 + 0x42) = (&DAT_80063eb8)[(uint)bVar1 * 2];
      *(undefined *)(param_1 + 0x46) = (&DAT_80063eb9)[(uint)bVar1 * 2];
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x1d) * 8;
    if (((&DAT_80062ebb)[(uint)*(byte *)(param_1 + 0x1d) * 0xc] & 0x80) != 0) {
      *(undefined *)(param_1 + 0x3c) = (&DAT_80063abc)[iVar2];
      *(undefined *)(param_1 + 0x3e) = (&DAT_80063abd)[iVar2];
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x1f) * 8;
    if (((&DAT_80062ebb)[(uint)*(byte *)(param_1 + 0x1f) * 0xc] & 0x80) != 0) {
      *(undefined *)(param_1 + 0x3d) = (&DAT_80063abc)[iVar2];
      *(undefined *)(param_1 + 0x3f) = (&DAT_80063abd)[iVar2];
    }
  }
  return;
}



void Equipment_Attr_Calc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  
  Data_Null((byte *)(param_1 + 0x33),3);
  Calculate_Stat_Real(param_1,param_2 + 1);
  *(undefined *)(param_1 + 0x184) = 0;
  if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
    iVar9 = 0;
    iVar6 = param_1;
    do {
      uVar4 = (uint)*(byte *)(iVar6 + 0x1a);
      if (uVar4 == 0x20) {
        *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) | 4;
      }
      if ((uVar4 < 0x80) && ((byte)(&DAT_80062ebd)[uVar4 * 0xc] - 3 < 2)) {
        *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) | 8;
      }
      if (uVar4 != 0xff) {
        iVar2 = uVar4 * 0xc;
        iVar6 = (uint)(byte)(&DAT_80062ebf)[iVar2] * 0x19;
        pbVar8 = &DAT_800642c4 + iVar6;
        pbVar5 = pbVar8;
        pbVar7 = (byte *)(param_1 + 0x33);
        do {
          uVar4 = (uint)*pbVar5 + (uint)*pbVar7;
          pbVar5 = pbVar5 + 1;
          if (0xff < uVar4) {
            uVar4 = 0xff;
          }
          *pbVar7 = (byte)uVar4;
          pbVar7 = pbVar7 + 1;
        } while ((int)pbVar7 < param_1 + 0x36);
        uVar4 = (uint)(byte)(&DAT_800642c7)[iVar6] + (uint)*(byte *)(param_1 + 0x3a);
        if (0xfd < uVar4) {
          uVar4 = 0xfd;
        }
        *(char *)(param_1 + 0x3a) = (char)uVar4;
        uVar4 = (uint)(byte)(&DAT_800642c8)[iVar6] + (uint)*(byte *)(param_1 + 0x3b);
        iVar6 = 0;
        if (7 < uVar4) {
          uVar4 = 7;
        }
        *(char *)(param_1 + 0x3b) = (char)uVar4;
        pbVar5 = (byte *)(param_1 + 0x4e);
        do {
          iVar3 = iVar6 + 5;
          iVar6 = iVar6 + 1;
          *pbVar5 = pbVar8[iVar3] | *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (iVar6 < 0xf);
        iVar6 = 0;
        pbVar5 = (byte *)(param_1 + 0x6d);
        do {
          iVar3 = iVar6 + 0x14;
          iVar6 = iVar6 + 1;
          *pbVar5 = pbVar8[iVar3] | *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (iVar6 < 5);
        if (((&DAT_80062ebb)[iVar2] & 0x30) != 0) {
          bVar1 = (&DAT_80062ebc)[iVar2];
          uVar4 = (uint)*(ushort *)(param_1 + 0x2a) + (uint)(byte)(&DAT_80063ed8)[(uint)bVar1 * 2];
          if (999 < uVar4) {
            uVar4 = 999;
          }
          *(short *)(param_1 + 0x2a) = (short)uVar4;
          uVar4 = (uint)*(ushort *)(param_1 + 0x2e) + (uint)(byte)(&DAT_80063ed9)[(uint)bVar1 * 2];
          if (999 < uVar4) {
            uVar4 = 999;
          }
          *(short *)(param_1 + 0x2e) = (short)uVar4;
        }
      }
      iVar9 = iVar9 + 1;
      iVar6 = param_1 + iVar9;
    } while (iVar9 < 7);
  }
  if (*(ushort *)(param_1 + 0x2a) < *(ushort *)(param_1 + 0x28)) {
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x2a);
  }
  pbVar5 = (byte *)(param_1 + 0x30);
  if (*(ushort *)(param_1 + 0x2e) < *(ushort *)(param_1 + 0x2c)) {
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
  }
  do {
    uVar4 = (uint)pbVar5[3] + (uint)*pbVar5;
    if ((int)pbVar5 < param_1 + 0x32) {
      if (99 < uVar4) {
        uVar4 = 99;
      }
    }
    else if (0x32 < uVar4) {
      uVar4 = 0x32;
    }
    pbVar5[6] = (byte)uVar4;
    pbVar5 = pbVar5 + 1;
  } while ((int)pbVar5 < param_1 + 0x33);
  return;
}



void MoveJumpBonusCalc(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x2a);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x3a);
  bVar1 = *(byte *)(param_1 + 0x93);
  uVar2 = (uint)*(byte *)(param_1 + 0x3b);
  if ((bVar1 & 0x80) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((bVar1 & 0x40) != 0) {
    uVar3 = uVar3 + 2;
  }
  if ((bVar1 & 0x20) != 0) {
    uVar3 = uVar3 + 3;
  }
  if ((bVar1 & 0x10) != 0) {
    uVar2 = uVar2 + 1;
  }
  if ((bVar1 & 8) != 0) {
    uVar2 = uVar2 + 2;
  }
  if ((bVar1 & 4) != 0) {
    uVar2 = uVar2 + 3;
  }
  if (0xfc < uVar3) {
    uVar3 = 0xfc;
  }
  *(char *)(param_1 + 0x3a) = (char)uVar3;
  if (7 < uVar2) {
    uVar2 = 7;
  }
  *(char *)(param_1 + 0x3b) = (char)uVar2;
  return;
}



void Generate_Unit_Name(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  
  pcVar11 = (code *)&UNK_80132824;
  if (DAT_80066200 != 0) {
    pcVar11 = FUN_800e6edc;
  }
  if (*(char *)(param_1 + 2) == -1) {
    uVar8 = (uint)*(byte *)(param_1 + 0x16c);
    iVar9 = 0x4000;
    if (uVar8 == 0xff) {
      bVar1 = *(byte *)(param_1 + 6);
      if ((bVar1 & 0x80) == 0) {
        iVar9 = 0x4200;
        if ((bVar1 & 0x40) == 0) {
          iVar9 = 0x4300;
          iVar10 = 0x300;
        }
        else {
          iVar10 = 0x200;
        }
      }
      else {
        iVar9 = 0x4100;
        iVar10 = 0x100;
      }
      do {
        bVar2 = true;
        iVar3 = rand();
        iVar3 = iVar3 * 0xff;
        iVar7 = 0;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x7fff;
        }
        uVar8 = iVar10 + (iVar3 >> 0xf);
        puVar6 = &DAT_80057f74;
        do {
          if (((puVar6[1] != -1) && ((bVar1 & 0xe0) == (puVar6[4] & 0xe0))) &&
             ((uint)*(ushort *)(puVar6 + 0xce) == (uVar8 & 0xffff))) {
            bVar2 = false;
            break;
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 0x100;
        } while (iVar7 < 0x14);
        iVar3 = 0;
        puVar5 = &DAT_801908cc;
        do {
          if (((bVar1 & 0xe0) == (puVar5[6] & 0xe0)) &&
             ((uint)*(ushort *)(puVar5 + 0x16c) == (uVar8 & 0xffff))) {
            bVar2 = false;
            break;
          }
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 0x1c0;
        } while (iVar3 < 0x15);
      } while (!bVar2);
      *(short *)(param_1 + 0x16c) = (short)uVar8;
    }
    iVar9 = (*pcVar11)(iVar9 + (uVar8 & 0xff));
  }
  else {
    iVar9 = Get_Party_Data_Pointer();
    iVar9 = iVar9 + 0xbe;
  }
  Move_Data(iVar9,param_1 + 300,0x10);
  uVar4 = (*pcVar11)(*(byte *)(param_1 + 3) | 0x3000);
  Move_Data(uVar4,param_1 + 0x13c,0x10);
  uVar4 = (*pcVar11)(*(byte *)(param_1 + 0x12) | 0x1000);
  Move_Data(uVar4,param_1 + 0x14c,8);
  uVar4 = (*pcVar11)(*(byte *)(param_1 + 0x13) | 0x1000);
  Move_Data(uVar4,param_1 + 0x154,8);
  Data_Null((undefined *)(param_1 + 0x1a7),10);
  return;
}



byte Get_Highest_PlayerUnit_Level(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = Get_Party_Data_Pointer(iVar2);
    iVar2 = iVar2 + 1;
    if ((*(char *)(iVar1 + 1) != -1) && (bVar3 < *(byte *)(iVar1 + 0x16))) {
      bVar3 = *(byte *)(iVar1 + 0x16);
    }
  } while (iVar2 < 0x14);
  if (99 < bVar3) {
    bVar3 = 99;
  }
  DAT_80066308 = bVar3;
  return bVar3;
}



void Move_Data(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



undefined Create_Random_Equip(int param_1,byte param_2,byte param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  undefined local_88 [128];
  
  if (param_2 == 0x20) {
    uVar4 = 0x90;
    uVar7 = 0xac;
    goto LAB_8005cd24;
  }
  if (param_2 < 0x21) {
    if (param_2 == 8) {
      uVar4 = 0xd0;
      uVar7 = 0xf0;
      goto LAB_8005cd24;
    }
    uVar4 = 0xac;
    if (param_2 == 0x10) {
      uVar7 = 0xd0;
      goto LAB_8005cd24;
    }
  }
  else {
    uVar4 = 0x80;
    if (param_2 == 0x40) {
      uVar7 = 0x90;
      goto LAB_8005cd24;
    }
    if (param_2 == 0x80) {
      uVar4 = 1;
      uVar7 = 0x80;
      goto LAB_8005cd24;
    }
  }
  uVar4 = 0;
  uVar7 = 0x100;
LAB_8005cd24:
  uVar5 = 0;
  bVar1 = *(byte *)(param_1 + 0x22);
  bVar9 = 0;
  if (uVar4 < uVar7) {
    iVar8 = uVar4 * 0xc;
    do {
      if (((&DAT_80062ebb)[iVar8] & 2) == 0) {
        bVar2 = (&DAT_80062ebd)[iVar8];
        if (((((param_4 & 0xff) == 0xff) || ((uint)bVar2 == (param_4 & 0xff))) &&
            (((uint)*(byte *)(param_1 + (uint)(bVar2 >> 3) + 0x4a) & 0x80 >> (bVar2 & 7)) != 0)) &&
           ((param_3 == 0 ||
            ((param_3 & (&DAT_80063ab9)[(uint)(byte)(&DAT_80062ebc)[iVar8] * 8]) != 0)))) {
          bVar2 = (&DAT_80062eba)[iVar8];
          if (bVar2 <= bVar1) {
            uVar6 = uVar5;
            if (bVar9 < bVar2) {
              uVar6 = 0;
              bVar9 = bVar2;
            }
            uVar5 = uVar6 + 1;
            local_88[uVar6 & 0xff] = (char)uVar4;
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 0xc;
    } while ((int)uVar4 < (int)uVar7);
  }
  uVar3 = 0xfe;
  if ((uVar5 & 0xff) != 0) {
    iVar8 = rand();
    uVar4 = iVar8 * (uVar5 & 0xff);
    if ((int)uVar4 < 0) {
      uVar4 = uVar4 + 0x7fff;
    }
    uVar3 = local_88[uVar4 >> 0xf & 0xff];
  }
  return uVar3;
}



void Calc_Learned_Abilities(byte *param_1,uint param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  bVar1 = false;
  uVar7 = param_2 - 0x4a;
  if (param_2 == 0x4a) {
    if (1 < (byte)(*param_1 + 0x80)) {
      if (*param_1 == 0x82) {
        param_2 = (uint)param_1[3];
      }
      else {
        param_2 = (uint)*param_1;
      }
    }
  }
  else if (((uint)param_1[0x96] * 0x10000 + (uint)param_1[0x97] * 0x100 + (uint)param_1[0x98] &
           0x800000 >> (uVar7 & 0x1f)) == 0) {
    return;
  }
  if (((param_2 != 0x5b) || ((param_1[6] & 0x40) == 0)) &&
     ((param_2 != 0x5c || ((param_1[6] & 0x80) == 0)))) {
    if (param_2 == param_1[3]) {
      bVar9 = param_1[0x12];
      if (*(char *)(param_3 + 0x1d) == '\0') {
        bVar1 = true;
      }
    }
    else {
      bVar9 = (&DAT_800610b8)[param_2 * 0x30];
    }
    iVar8 = 0;
    iVar3 = uVar7 * 3 + 0x99;
    do {
      bVar2 = false;
      uVar4 = Get_Abiltity_from_Skillset(bVar9,iVar8);
      iVar6 = (uVar4 & 0xffff) * 8;
      if ((uVar4 & 0xffff) != 0) {
        if (bVar1) {
          bVar2 = true;
        }
        else {
          iVar5 = PassFail_Roll(100,(&DAT_8005ebf2)[iVar6]);
          if ((iVar5 == 0) &&
             (*(ushort *)(&DAT_8005ebf0 + iVar6) <= *(ushort *)(param_1 + uVar7 * 2 + 0xdc))) {
            *(ushort *)(param_1 + uVar7 * 2 + 0xdc) =
                 *(short *)(param_1 + uVar7 * 2 + 0xdc) - *(ushort *)(&DAT_8005ebf0 + iVar6);
            iVar6 = iVar8;
            if (iVar8 < 0) {
              iVar6 = iVar8 + 7;
            }
            bVar2 = true;
            param_1[(iVar6 >> 3) + iVar3] =
                 param_1[(iVar6 >> 3) + iVar3] | (byte)(0x80 >> (iVar8 + (iVar6 >> 3) * -8 & 0x1fU))
            ;
          }
        }
        if (bVar2) {
          iVar6 = iVar8;
          if (iVar8 < 0) {
            iVar6 = iVar8 + 7;
          }
          param_1[(iVar6 >> 3) + iVar3] =
               param_1[(iVar6 >> 3) + iVar3] | (byte)(0x80 >> (iVar8 + (iVar6 >> 3) * -8 & 0x1fU));
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x18);
  }
  return;
}



ushort Calculate_RSM(byte *param_1,ushort param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint in_t1;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort auStack_20410 [65536];
  ushort local_410 [480];
  ushort local_50 [4];
  byte local_48;
  uint local_40;
  int local_3c;
  byte *local_38;
  uint local_34;
  int local_30;
  
  if ((0x1fd < param_2) && (param_2 = 0, (param_1[6] & 0x20) == 0)) {
    iVar11 = 0;
    puVar5 = local_410;
    pbVar7 = param_1;
    do {
      puVar1 = (ushort *)(pbVar7 + 10);
      pbVar7 = pbVar7 + 2;
      iVar11 = iVar11 + 1;
      puVar5[0x1e0] = *puVar1;
      puVar5 = puVar5 + 1;
    } while (iVar11 < 4);
    iVar13 = 0;
    iVar11 = 1;
    uVar8 = (uint)param_1[0x13];
    iVar12 = 0;
    pbVar7 = param_1;
    do {
      uVar10 = 0;
      bVar2 = true;
      if (iVar12 == 0x13) {
        if ((iVar11 != 0) && (uVar8 != 0)) {
          bVar2 = false;
          uVar10 = uVar8;
          goto code_r0x8005d1cc;
        }
      }
      else {
        in_t1 = iVar12 + 0x4a;
        if (iVar12 == 0) {
          if (1 < (*param_1 - 0x80 & 0xff)) {
            in_t1 = (uint)*param_1;
          }
          if ((*(char *)(param_4 + 0x1d) != '\0') && (*(char *)(param_4 + 0x1d) != -1)) {
            uVar10 = (uint)*(byte *)(param_4 + 0x1d);
          }
        }
code_r0x8005d1cc:
        if (uVar10 == 0) {
          if ((in_t1 & 0xff) == 0) goto LAB_8005d34c;
          uVar10 = (uint)(byte)(&DAT_800610b8)[(in_t1 & 0xff) * 0x30];
        }
        if (uVar10 == uVar8) {
          iVar11 = 0;
        }
        iVar9 = 0x10;
        if (bVar2) {
          local_48 = pbVar7[0x9b];
        }
        uVar14 = (uint)local_48;
        do {
          if (bVar2) {
            iVar6 = iVar9;
            if (iVar9 < 0) {
              iVar6 = iVar9 + 7;
            }
            if ((uVar14 & 0x80 >> (iVar9 + (iVar6 >> 3) * -8 & 0x1fU)) != 0) goto LAB_8005d250;
          }
          else {
LAB_8005d250:
            local_40 = uVar8;
            local_3c = iVar11;
            local_38 = param_1;
            local_34 = in_t1;
            local_30 = param_4;
            uVar4 = Get_Abiltity_from_Skillset(uVar10 & 0xff,iVar9);
            param_4 = local_30;
            in_t1 = local_34;
            param_1 = local_38;
            iVar11 = local_3c;
            uVar8 = local_40;
            if ((((uVar4 != 0x1a9) && (uVar4 != local_50[0])) && (uVar4 != local_50[1])) &&
               ((uVar4 != local_50[2] && (uVar4 != local_50[3])))) {
              bVar3 = (param_3 & 2) != 0 && (ushort)(uVar4 - 0x1a6) < 0x20;
              if (((param_3 & 4) != 0) && ((ushort)(uVar4 - 0x1c6) < 0x20)) {
                bVar3 = true;
              }
              if (((param_3 & 8) != 0) && (0x1e5 < uVar4)) {
                bVar3 = true;
              }
              if (bVar3) {
                local_410[iVar13] = uVar4;
                iVar13 = iVar13 + 1;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x16);
      }
LAB_8005d34c:
      iVar12 = iVar12 + 1;
      pbVar7 = pbVar7 + 3;
    } while (iVar12 < 0x14);
    param_2 = 0;
    if (iVar13 != 0) {
      iVar11 = rand();
      iVar11 = iVar11 * iVar13;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 0x7fff;
      }
      param_2 = local_410[iVar11 >> 0xf];
    }
  }
  return param_2;
}



uint Find_Skillset_JobID(char param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  uVar1 = 0;
  do {
    if ((&DAT_800610b8)[uVar1 * 0x30] == param_1) {
      return uVar1;
    }
    bVar2 = bVar2 + 1;
    uVar1 = (uint)bVar2;
  } while (bVar2 < 0x9f);
  return 0;
}



void Status_Initialization(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x1bb) = *(byte *)(iVar1 + 0x58) & ~*(byte *)(iVar1 + 0x4e);
  } while (iVar2 < 5);
  Initialize_DeathCounter(param_1);
  CurrentStatusCT(param_1);
  return;
}



void Initialize_DeathCounter(int param_1)

{
  undefined uVar1;
  
  Data_Null((undefined *)(param_1 + 0x5d),0x10);
  uVar1 = 0xff;
  if (((*(byte *)(param_1 + 5) & 4) == 0) && (uVar1 = 0xff, (*(byte *)(param_1 + 6) & 9) == 0)) {
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 7) = uVar1;
  return;
}



void CurrentStatusCT(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((*(byte *)(param_1 + 0x95) & 8) != 0) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 0x40;
  }
  do {
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(byte *)(iVar2 + 0x53) = *(byte *)(iVar2 + 0x53) & ~*(byte *)(iVar2 + 0x4e);
    *(byte *)(iVar2 + 0x58) = *(byte *)(iVar2 + 0x4e) | *(byte *)(iVar2 + 0x1bb);
  } while (iVar3 < 5);
  uVar4 = 0x18;
  do {
    uVar1 = uVar4;
    if ((int)uVar4 < 0) {
      uVar1 = uVar4 + 7;
    }
    if ((((uint)*(byte *)(param_1 + ((int)uVar1 >> 3) + 0x1bb) & 0x80 >> (uVar4 & 7)) != 0) &&
       (*(char *)(param_1 + uVar4 + 0x45) == '\0')) {
      Status_CT_Set(param_1,uVar4,0);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x28);
  return;
}



void Equipment_StatusRSM_Prep1(undefined4 param_1)

{
  Equipment_StatusRSM(param_1,1,0);
  return;
}



void Equipment_StatusRSM_Prep_LevelUp(undefined4 param_1)

{
  Equipment_StatusRSM(param_1,0,0);
  return;
}



void Equipment_StatusRSM_Prep3(undefined4 param_1)

{
  Equipment_StatusRSM(param_1,0,1);
  return;
}



void Equipment_StatusRSM(int param_1,int param_2,int param_3)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined local_28 [5];
  undefined auStack_23 [3];
  byte local_20 [8];
  
  Store_Current_Statuses();
  iVar9 = 0;
  puVar8 = local_28;
  pbVar7 = local_20;
  do {
    iVar5 = param_1 + iVar9;
    iVar9 = iVar9 + 1;
    *pbVar7 = *(byte *)(iVar5 + 0x58);
    pbVar7 = pbVar7 + 1;
    *puVar8 = *(undefined *)(iVar5 + 0x1bb);
    puVar8 = puVar8 + 1;
  } while (iVar9 < 5);
  iVar9 = (uint)*(byte *)(param_1 + 3) * 0x30;
  *(undefined *)(param_1 + 0x3a) = (&DAT_800610cf)[iVar9];
  *(byte *)(param_1 + 0x3b) = (&DAT_800610d0)[iVar9] & 0x7f;
  Move_Data(&DAT_800610c1 + iVar9,param_1 + 0x4a,4);
  Move_Data(&UNK_800610d2 + iVar9,param_1 + 0x4e,0xf);
  Move_Data(&UNK_800610e1 + iVar9,param_1 + 0x6d,4);
  *(undefined *)(param_1 + 0x71) = 0;
  Enable_Unit_RSM(param_1);
  MoveJumpBonusCalc(param_1,1);
  Equipment_Stat_Calc(param_1);
  Equipment_Attr_Calc(param_1,0);
  Female_Equip_setting(param_1);
  puVar8 = local_28;
  iVar9 = param_1;
  do {
    if (param_3 == 0) {
      *(undefined *)(iVar9 + 0x1bb) = *puVar8;
    }
    else {
      *(undefined *)(iVar9 + 0x1bb) = *(undefined *)(iVar9 + 0x58);
    }
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 + 1;
  } while ((int)puVar8 < (int)auStack_23);
  uVar1 = *(undefined *)(param_1 + 2);
  *(undefined *)(param_1 + 2) = 0xff;
  CurrentStatusCT(param_1);
  *(undefined *)(param_1 + 2) = uVar1;
  Store_Current_Statuses(param_1);
  if (param_2 == 0) {
    if (*(ushort *)(param_1 + 0x2a) / 5 < (uint)*(ushort *)(param_1 + 0x28)) {
      bVar2 = *(byte *)(param_1 + 0x1bd) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1bd) | 1;
    }
    *(byte *)(param_1 + 0x1bd) = bVar2;
    Store_Current_Statuses(param_1);
    uVar10 = 0;
    do {
      uVar3 = uVar10;
      if ((int)uVar10 < 0) {
        uVar3 = uVar10 + 7;
      }
      uVar6 = 0x80 >> (uVar10 & 7);
      uVar4 = *(byte *)(param_1 + ((int)uVar3 >> 3) + 0x58) & uVar6;
      if ((param_3 != 0) || ((local_20[(int)uVar3 >> 3] & uVar6) != uVar4)) {
        if ((uVar4 != 0) && (param_3 != 0)) {
          Status_CT_Set(param_1,uVar10,0);
        }
        FUN_8018e9bc();
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x28);
  }
  return;
}



undefined4 CheckUnit_LevelUp(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (99 < *(byte *)(param_1 + 0x21)) {
    bVar1 = *(byte *)(param_1 + 0x22);
    if (bVar1 < 99) {
      LevelUp_Section(param_1,0);
      uVar2 = 1;
      *(undefined *)(param_1 + 0x21) = 0;
      *(byte *)(param_1 + 0x22) = bVar1 + 1;
    }
    else {
      *(undefined *)(param_1 + 0x21) = 99;
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint LevelUp_Unit(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar4 = (uint)*(byte *)(param_1 + 0x16) + param_2;
  if (99 < uVar4) {
    uVar4 = 99;
  }
  iVar7 = uVar4 - *(byte *)(param_1 + 0x16);
  if (0 < iVar7) {
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        pbVar3 = (byte *)(param_1 + 0x19);
        pbVar5 = &DAT_800610c5 + (uint)bVar1 * 0x30;
        do {
          uVar4 = (uint)*pbVar3 + (uint)pbVar3[1] * 0x100 + (uint)pbVar3[2] * 0x10000;
          if (*pbVar5 == 0) {
            uVar2 = *(byte *)(param_1 + 0x16) + 1;
          }
          else {
            uVar2 = (uint)*(byte *)(param_1 + 0x16) + (uint)*pbVar5;
          }
          uVar4 = uVar4 + uVar4 / uVar2;
          pbVar5 = pbVar5 + 2;
          if (0xffffff < uVar4) {
            uVar4 = 0xffffff;
          }
          pbVar3[1] = (byte)(uVar4 >> 8);
          *pbVar3 = (byte)uVar4;
          pbVar3[2] = (byte)(uVar4 >> 0x10);
          pbVar3 = pbVar3 + 3;
        } while ((int)pbVar3 < param_1 + 0x28);
        iVar6 = iVar6 + 1;
        *(char *)(param_1 + 0x16) = *(char *)(param_1 + 0x16) + '\x01';
      } while (iVar6 < iVar7);
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x16);
  }
  return uVar4;
}



void LevelUp_Section(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + 0x72);
  pbVar4 = (byte *)(param_1 + 0x81);
  bVar1 = *(byte *)(param_1 + 0x22);
  do {
    uVar3 = (uint)*pbVar4;
    uVar2 = (uint)*pbVar5 + (uint)pbVar5[1] * 0x100 + (uint)pbVar5[2] * 0x10000;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + bVar1;
    rand();
    if (param_2 == 0) {
      uVar3 = uVar2 / uVar3;
    }
    else {
      uVar3 = -(uVar2 / uVar3);
    }
    uVar2 = uVar2 + uVar3;
    pbVar4 = pbVar4 + 2;
    if (0xffffff < uVar2) {
      uVar2 = 0xffffff;
    }
    pbVar5[1] = (byte)(uVar2 >> 8);
    *pbVar5 = (byte)uVar2;
    pbVar5[2] = (byte)(uVar2 >> 0x10);
    pbVar5 = pbVar5 + 3;
  } while ((int)pbVar5 < param_1 + 0x81);
  Equipment_StatusRSM_Prep_LevelUp(param_1);
  if (*(ushort *)(param_1 + 0x2a) < *(ushort *)(param_1 + 0x28)) {
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_1 + 0x2a);
  }
  if (*(ushort *)(param_1 + 0x2e) < *(ushort *)(param_1 + 0x2c)) {
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
  }
  return;
}



undefined4 Status_CT_Set(int param_1,int param_2,int param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 2) {
    uVar1 = 0xff;
    if (((*(byte *)(param_1 + 5) & 4) == 0) && (uVar1 = 0xff, (*(byte *)(param_1 + 6) & 9) == 0)) {
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 7) = uVar1;
  }
  uVar3 = param_2 - 0x18;
  uVar2 = 0;
  if (uVar3 < 0x10) {
    if (param_3 == 0) {
      if ((uVar3 != 0xf) || (uVar2 = 0xffffffff, *(char *)(param_1 + 0x6c) == '\0')) {
        uVar2 = 0;
        *(undefined *)(param_1 + uVar3 + 0x5d) = (&DAT_80065de7)[param_2 * 0x10];
      }
    }
    else {
      *(undefined *)(param_1 + uVar3 + 0x5d) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint Calc_Unlocked_Jobs(undefined *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte local_18 [10];
  undefined auStack_e [14];
  
  pbVar3 = local_18;
  do {
    *pbVar3 = *param_1;
    pbVar3 = pbVar3 + 1;
    param_1 = param_1 + 1;
  } while ((int)pbVar3 < (int)auStack_e);
  if ((param_2 & 0x40) != 0) {
    local_18[8] = local_18[8] | 0xf;
  }
  if ((param_2 & 0x80) != 0) {
    local_18[9] = local_18[9] | 0xf0;
  }
  uVar2 = 0;
  if ((param_2 & 0x20) == 0) {
    uVar6 = 0x800000;
    uVar2 = 0x800000;
    iVar7 = 0;
    pbVar3 = &DAT_800660c4;
    do {
      uVar6 = (int)uVar6 >> 1;
      bVar1 = false;
      pbVar4 = local_18;
      pbVar5 = pbVar3;
      do {
        if (((*pbVar4 & 0xf0) < (*pbVar5 & 0xf0)) || ((*pbVar4 & 0xf) < (*pbVar5 & 0xf))) {
          bVar1 = true;
          break;
        }
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while ((int)pbVar4 < (int)auStack_e);
      pbVar3 = pbVar3 + 10;
      if (!bVar1) {
        uVar2 = uVar2 | uVar6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x13);
    if ((param_2 & 0x80) != 0) {
      uVar2 = uVar2 & 0xffffd0;
    }
    if ((param_2 & 0x40) != 0) {
      uVar2 = uVar2 & 0xffffb0;
    }
  }
  return uVar2;
}



undefined4 Proposition_GiveJP(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (-1 < param_2) {
    if (0x13 < param_1) {
      return 0xffffffff;
    }
    iVar1 = Get_Party_Data_Pointer();
    if (*(char *)(iVar1 + 1) == -1) {
      return 0xffffffff;
    }
    if ((*(byte *)(iVar1 + 4) & 0x20) == 0) {
      uVar8 = 0;
      if (*(byte *)(iVar1 + 2) - 0x4a < 0x14) {
        uVar8 = *(byte *)(iVar1 + 2) - 0x4a;
      }
      iVar7 = iVar1 + uVar8 * 2;
      iVar5 = (uint)*(byte *)(iVar7 + 0x6e) + (uint)*(byte *)(iVar7 + 0x6f) * 0x100 + param_2;
      if (9999 < iVar5) {
        iVar5 = 9999;
      }
      *(char *)(iVar7 + 0x6e) = (char)iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(char *)(iVar7 + 0x6f) = (char)((uint)iVar5 >> 8);
      uVar6 = (uint)*(byte *)(iVar7 + 0x96) + (uint)*(byte *)(iVar7 + 0x97) * 0x100 + param_2;
      if (9999 < (int)uVar6) {
        uVar6 = 9999;
      }
      *(char *)(iVar7 + 0x96) = (char)uVar6;
      uVar2 = uVar6;
      if ((int)uVar6 < 0) {
        uVar2 = uVar6 + 0xff;
      }
      *(char *)(iVar7 + 0x97) = (char)(uVar2 >> 8);
      uVar6 = Calc_Job_Level(uVar6 & 0xffff);
      bVar4 = *(byte *)(iVar1 + (int)uVar8 / 2 + 100);
      if ((uVar8 & 1) == 0) {
        bVar4 = bVar4 & 0xf | (byte)((uVar6 & 0xff) << 4);
      }
      else {
        bVar4 = (char)uVar6 + (bVar4 & 0xf0);
      }
      *(byte *)(iVar1 + (int)uVar8 / 2 + 100) = bVar4;
      uVar3 = Calc_Unlocked_Jobs(iVar1 + 100,*(undefined *)(iVar1 + 4));
      Store_1_5_halves(iVar1 + 0x28,uVar3);
      return 0;
    }
  }
  return 0xffffffff;
}



void Store_1_5_halves(undefined *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)param_2;
  return;
}



int Calc_Job_Level(ushort param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  puVar2 = &DAT_80066184;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    if (uVar1 <= param_1) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return iVar4;
}



void Initialize_Unit_JobLevel(undefined2 *param_1,byte *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar3 = Calc_Job_Level(*param_1);
    puVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    bVar2 = Calc_Job_Level(*puVar1);
    *param_2 = (byte)(iVar3 << 4) | bVar2;
    param_2 = param_2 + 1;
  } while (iVar4 < 10);
  return;
}



void Initialize_ENTD_UnitTargettingData(int param_1)

{
  *(undefined *)(param_1 + 0x1b8) = 0;
  *(undefined *)(param_1 + 0x1b9) = 0;
  *(undefined *)(param_1 + 0x39) = 0;
  *(undefined *)(param_1 + 0x186) = 0;
  *(undefined *)(param_1 + 0x189) = 0;
  *(undefined *)(param_1 + 0x15d) = 0xff;
  *(undefined *)(param_1 + 0x182) = 0;
  *(undefined *)(param_1 + 0x15c) = 0;
  return;
}



void Initialize_Enemy_ENTD(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined *)(param_1 + 0x38) = 1;
  }
  if (param_2 != 0) {
    *(undefined *)(param_1 + 0x163) = 0;
    *(undefined *)(param_1 + 0x164) = 0;
  }
  Status_Initialization();
  return;
}



undefined Get_Ability_Range(uint param_1)

{
  undefined uVar1;
  
  if ((param_1 & 0xffff) < 0x170) {
    uVar1 = *(undefined *)((int)&PTR_gte_ldv0_8005fbf0 + (param_1 & 0xffff) * 0xe);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined Get_Ability_AOE(uint param_1)

{
  undefined uVar1;
  
  if ((param_1 & 0xffff) < 0x170) {
    uVar1 = *(undefined *)((int)&PTR_gte_ldv0_8005fbf0 + (param_1 & 0xffff) * 0xe + 1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined Get_Portrait(int param_1,undefined *param_2)

{
  undefined uVar1;
  
  uVar1 = Get_Unit_Portrait();
  *(undefined *)(param_1 + 0x15f) = uVar1;
  *(undefined *)(param_1 + 0x160) = *param_2;
  return uVar1;
}



bool PassFail_Roll(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = rand();
  iVar1 = iVar1 * param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fff;
  }
  return param_2 <= iVar1 >> 0xf;
}



uint Get_Unit_Portrait(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar2 = (uint)param_1[3];
  uVar1 = (uint)*param_1;
  if (uVar2 - 0x5c < 2) {
    uVar2 = uVar2 - 1;
  }
  if (0x7f < uVar1) {
    if (uVar1 == 0x80) {
      uVar1 = (uVar2 & 0xff) * 2 - 0x34 & 0xfe;
    }
    else if (uVar1 == 0x81) {
      uVar1 = (uVar2 & 0xff) * 2 - 0x33 & 0xff;
    }
    else if (uVar1 == 0x82) {
      *param_2 = param_1[0x160];
      uVar1 = (uint)param_1[0x15f];
    }
    else {
      uVar1 = uVar2 + 0x28 & 0xff;
    }
  }
  return uVar1;
}



undefined4 Check_HasStatus(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = &DAT_800662d0 + param_2 * 5;
  do {
    if ((*(byte *)(param_1 + iVar2 + 0x58) & *pbVar1) != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 1;
  } while (iVar2 < 5);
  return 0;
}



uint GetKnownAbilities(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 3;
  return (uint)*(byte *)(param_1 + 0x99) * 0x10000 + (uint)*(byte *)(param_1 + 0x9a) * 0x100 |
         (uint)*(byte *)(param_1 + 0x9b);
}



void BATTLE_Unit_Targetting_to_Temp(undefined *param_1,undefined *param_2)

{
  undefined uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  } while (uVar2 < 0x14);
  return;
}



void StoreArg1_IntoArg2_(undefined *param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



uint Get_Equip_Quantity(byte param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  uVar8 = (uint)(byte)(&DAT_800596e0)[param_1];
  do {
    iVar2 = Get_Party_Data_Pointer(iVar7);
    if ((*(char *)(iVar2 + 1) != -1) && ((*(byte *)(iVar2 + 4) & 0x20) == 0)) {
      bVar1 = false;
      if (param_2 != 0) {
        iVar4 = 0;
        puVar6 = &DAT_801908cc;
        do {
          if (((puVar6[0x183] != -1) && ((puVar6[6] & 0x20) == 0)) &&
             (puVar6[2] == *(char *)(iVar2 + 1))) {
            bVar1 = true;
            break;
          }
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 0x1c0;
        } while (iVar4 < 0x15);
        if (bVar1) goto LAB_8005e398;
      }
      iVar5 = 0;
      iVar4 = iVar2;
      do {
        iVar5 = iVar5 + 1;
        if ((uint)*(byte *)(iVar4 + 0xe) == (uint)param_1) {
          uVar8 = uVar8 + 1;
        }
        iVar4 = iVar2 + iVar5;
      } while (iVar5 < 7);
    }
LAB_8005e398:
    iVar7 = iVar7 + 1;
    if (0x13 < iVar7) {
      if (param_2 != 0) {
        iVar7 = 0;
        puVar6 = &DAT_801908cc;
        do {
          if (((puVar6[0x183] != -1) && ((puVar6[6] & 0x20) == 0)) &&
             (((puVar6[0x1ba] & 0x30) == 0 && (puVar6[3] != ']')))) {
            iVar2 = 0;
            puVar3 = puVar6;
            do {
              iVar2 = iVar2 + 1;
              if (puVar3[0x1a] == param_1) {
                uVar8 = uVar8 + 1;
              }
              puVar3 = puVar6 + iVar2;
            } while (iVar2 < 7);
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 0x1c0;
        } while (iVar7 < 0x15);
      }
      return uVar8;
    }
  } while( true );
}



void Initialize_ENTD_UnitPos(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  *(undefined *)(param_1 + 0x47) = *(undefined *)(param_2 + 0x19);
  *(undefined *)(param_1 + 0x48) = *(undefined *)(param_2 + 0x1a);
  uVar1 = *(ushort *)(param_1 + 0x48);
  uVar2 = *(ushort *)(param_2 + 0x1a) & 0x8000;
  *(ushort *)(param_1 + 0x48) = uVar1 & 0x7fff | uVar2;
  uVar3 = *(ushort *)(param_2 + 0x1a) & 0x300;
  *(ushort *)(param_1 + 0x48) = uVar1 & 0x70ff | uVar2 | uVar3;
  *(ushort *)(param_1 + 0x48) =
       uVar1 & 0x40ff | uVar2 | uVar3 | *(ushort *)(param_2 + 0x1a) & 0x3000;
  *(undefined *)(param_1 + 0x163) = *(undefined *)(param_2 + 0x1e);
  *(undefined *)(param_1 + 0x164) = *(undefined *)(param_2 + 0x1f);
  return;
}



int Get_Highest_Priority_Status(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar8 = 0xffffffff;
  iVar5 = 0;
  uVar4 = 0;
  pbVar7 = &DAT_80065de6;
  iVar6 = 0;
  do {
    uVar1 = uVar4;
    if ((int)uVar4 < 0) {
      uVar1 = uVar4 + 7;
    }
    uVar2 = 0x80 >> (uVar4 & 7);
    if ((((*(byte *)(param_1 + ((int)uVar1 >> 3) + 0x20) & uVar2) != 0) &&
        (uVar3 = (uint)*pbVar7, (int)uVar8 < (int)uVar3)) &&
       (iVar5 = uVar4 + 0x81, uVar8 = uVar3, ((&DAT_80065de9)[iVar6] & 8) != 0)) {
      iVar5 = uVar4 + 0x181;
    }
    if ((((uVar2 & *(byte *)(param_1 + ((int)uVar1 >> 3) + 0x1b)) != 0) &&
        (uVar1 = (uint)*pbVar7, (int)uVar8 < (int)uVar1)) &&
       (iVar5 = uVar4 + 1, uVar8 = uVar1, ((&DAT_80065de9)[iVar6] & 8) != 0)) {
      iVar5 = uVar4 + 0x101;
    }
    pbVar7 = pbVar7 + 0x10;
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 0x10;
  } while ((int)uVar4 < 0x28);
  return iVar5;
}



uint Calculate_Zodiac_Sign(ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  puVar1 = &DAT_800661e8;
  do {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (param_1 < *puVar1 ^ 1);
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0xc);
  return (iVar2 + 9) % 0xc & 0xffff;
}



void Data_Null(undefined *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}



void Increment_CasualtyInjure_Counters(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x62;
  if ((*(byte *)(param_1 + 0x1ba) & 0x30) != 0) {
    uVar1 = 0x61;
  }
  FUN_8013b590(uVar1);
  FUN_8013b644();
  return;
}



void Inflicted_Status_Changes(int param_1,int param_2,byte param_3,int param_4)

{
  int iVar1;
  byte in_t0;
  
  if (param_4 == 1) {
    param_3 = *(byte *)(param_1 + param_2 + 0x1bb) & ~param_3;
  }
  else if (param_4 < 2) {
    if (param_4 != 0) goto LAB_8005e730;
    param_3 = *(byte *)(param_1 + param_2 + 0x1bb) | param_3;
  }
  else if (param_4 != 2) goto LAB_8005e730;
  in_t0 = param_3;
LAB_8005e730:
  iVar1 = param_1 + param_2;
  *(byte *)(iVar1 + 0x1bb) = in_t0;
  *(byte *)(iVar1 + 0x58) = in_t0 | *(byte *)(iVar1 + 0x4e);
  return;
}



void Store_Current_Statuses(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(byte *)(iVar1 + 0x58) = *(byte *)(iVar1 + 0x4e) | *(byte *)(iVar1 + 0x1bb);
  } while (iVar2 < 5);
  return;
}



void Transfer_Last_Ability_Used_CT(int param_1)

{
  *(byte *)(param_1 + 0x18b) = (&DAT_8005fbfc)[*(short *)(param_1 + 0x170) * 0xe] & 0x7f;
  return;
}



void Status_InflictionRemoval(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte unaff_s1;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  bVar1 = *(byte *)(param_1 + 0x58);
  if (param_2 == 0xff) {
    param_2 = (bVar1 & 1) << 3;
  }
  if (param_2 < 9) {
                    // WARNING: Could not recover jumptable at 0x8005e808. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_80059830)[param_2])();
    return;
  }
  Inflicted_Status_Changes(param_1,0,unaff_s1,0);
  Inflicted_Status_Changes(param_1,0,unaff_s1 ^ 0xf,1);
  uVar4 = 8;
  bVar2 = *(byte *)(param_1 + 0x58);
  iVar3 = 5;
  do {
    if (((bVar1 ^ bVar2) & uVar4) != 0) {
      FUN_8018e9bc();
    }
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 >> 1;
  } while (iVar3 < 9);
  return;
}



void FUN_8005e8e8(undefined4 param_1)

{
  FUN_80044a00(3,param_1);
  return;
}



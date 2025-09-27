
void Play2_Sound(uint sxf_1,uint sfx_2)

{
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    always2 = 2;
    Play_Sound_Worker(0x2000,sxf_1,0x6000,0x4000);
    Play_Sound_Worker(0x2002,sfx_2,0x6000,0x4000);
  }
  return;
}


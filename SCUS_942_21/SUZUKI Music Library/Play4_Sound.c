
void Play4_Sound(uint sfx_1,uint sfx_2,uint sfx_3,uint sfx_4)

{
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    always2 = 2;
    Play_Sound_Worker(0x2000,sfx_1,0x6000,0x4000);
    Play_Sound_Worker(0x2002,sfx_2,0x6000,0x4000);
    Play_Sound_Worker(0x2004,sfx_3,0x6000,0x4000);
    Play_Sound_Worker(0x2006,sfx_4,0x6000,0x4000);
  }
  return;
}


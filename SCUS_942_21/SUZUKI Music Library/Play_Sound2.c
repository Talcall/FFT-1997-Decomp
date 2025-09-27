
void Play_Sound2(uint sfx_ID)

{
  if ((SuzukiInstrHalf & MusicPlayable) != Off) {
    always2 = 2;
    Play_Sound_Worker(0x6004,sfx_ID,0x6000,0x4000);
  }
  return;
}


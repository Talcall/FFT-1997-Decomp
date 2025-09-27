
void Toggle_Music_Playing(int onOff)

{
  if (onOff == 0) {
    PauseActiveMUS();
    SuzukiInstrHalf = SuzukiInstrHalf & ~MusicPlayable;
  }
  else {
    SuzukiInstrHalf = SuzukiInstrHalf | MusicPlayable;
  }
  return;
}


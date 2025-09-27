
MusDataAll * PutPlayMUS(SMDDataAll *SMDPtr)

{
  MusDataAll *MusicData;
  
  MusicData = FindSpaceForSMDMUS((uint)(SMDPtr->HeaderData).NumChannels * 0x160 + 0xb8);
  (MusicData->HeaderData).TransferAddr = SMDPtr;
  TransferMusicData(&MusicData->HeaderData);
  FUN_800138ac(MusicData);
  *(undefined4 *)&(MusicData->HeaderData).field_0x5c = 0;
  PlayMus(MusicData);
  return MusicData;
}


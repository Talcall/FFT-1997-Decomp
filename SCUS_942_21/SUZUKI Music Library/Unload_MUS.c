
void Unload_MUS(MusDataAll *MusData)

{
  int _t;
  
  if (((int)(short)(MusData->HeaderData)._0_cmdfield & 0x8000U) != 0) {
    Deallocate_Mus_Channels(MusData);
  }
  _t = Remove_Mus_From_Queue(MusData);
  if (_t == 0) {
    Remove_Mus_From_Queue_Forward(&MusData->HeaderData);
    Deallocate_Mus_RAM((uint *)MusData);
  }
  return;
}


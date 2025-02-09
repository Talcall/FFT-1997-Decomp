
/* WARNING: Removing unreachable block (ram,0x80010b10) */

void SetGameRunning(void)

{
  if (IsGameRunning == 0) {
    IsGameRunning = 1;
  }
  return;
}


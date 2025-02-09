#   ROUTINE: LOAD DATA FROM DISC (0x11bd0)
#       Calls Load Data From Disc (0x11bf4) with fifth parameter set to -1.
#       Parameters:
#           r4          = (ptr1) Pointer (Sometimes 0x8004eaf4)
#           r5          = (lba) LBA Sector of data
#           r6          = (numSectors) Number of sectors to load
#           r7          = (locationPtr) Location to load the data into RAM

80011bd0: 27bdffe0 addiu r29,r29,-0x0020
80011bd4: 2402ffff addiu r2,r0,-0x0001
80011bd8: afbf0018 sw r31,0x0018(r29)
80011bdc: 0c0046fd jal 0x80011bf4                   #   return Load Data From Disc (0x11bf4) (ptr1, lba, numSectors, locationPtr, -1);
80011be0: afa20010 sw r2,0x0010(r29)
80011be4: 8fbf0018 lw r31,0x0018(r29)
80011be8: 27bd0020 addiu r29,r29,0x0020
80011bec: 03e00008 jr r31
80011bf0: 00000000 nop
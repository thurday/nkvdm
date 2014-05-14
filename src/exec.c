/* Copyright 2012-2014 Neko. */

#include "nxvmsrc/utils.h"

#include "nxvmsrc/device/device.h"
#include "nxvmsrc/machine.h"

#include "exec.h"

int exec(int argc, char **argv) {
    machineInit();
#if GLOBAL_PLATFORM == GLOBAL_VAR_WIN32
    deviceConnectFloppyInsert("d:/fd.img");
    deviceConnectHardDiskInsert("d:/hd.img");
#else
    deviceConnectFloppyInsert("/Users/xha/fd.img");
    deviceConnectHardDiskInsert("/Users/xha/hd.img");
#endif
    while (1) {
        machineReset();
        machineResume();
    }
    machineFinal();
    return 0;
}

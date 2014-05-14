#define PRODUCT "Neko's Virtual DOS Machine [0.0.0000]\n\
Copyright (c) 2013-2014 Neko.\n"

#define USAGE "INFO: command-line usage\n\
nkvdm [<dos-executable> <arg1> <arg2> ...]"

/*
 * main.c: version statement
 * exec.ch: main entry to execute program
 * doskrnl.ch: dos kernel, interrupt handler hub
 *  int20.ch
 *  int21.ch
 *  ...
 *  int2f.ch
 * basicio.ch: dos basic io, standard device drivers
 *  drvpic.ch
 *  drvdma.ch
 *  ...
 * 
 * step 1: hack dos disk int service
 * step 2: hack command interpreter
 * step 3: hack dos kernel
 * step 4: hack dos io device drivers
 *
 */

#include "nxvmsrc/utils.h"
#include "exec.h"

int main(int argc, char **argv) {
    PRINTF("%s\n", PRODUCT);
    PRINTF("Built on %s at %s.\n", __DATE__, __TIME__);
    if (argc < 2) {
        PRINTF("%s\n", USAGE);
        return 1;
    }
    return exec(argc - 1, argv + 1);
}

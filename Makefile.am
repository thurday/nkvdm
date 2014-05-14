AUTOMAKE_OPTIONS = subdir-objects
bin_PROGRAMS = nkvdm
nkvdm_SOURCES = src/main.c src/exec.c src/exec.h \
	src/nxvmsrc/machine.c src/nxvmsrc/machine.h \
	src/nxvmsrc/utils.c src/nxvmsrc/utils.h \
	src/nxvmsrc/xasm32/aasm32.c src/nxvmsrc/xasm32/aasm32.h \
	src/nxvmsrc/xasm32/dasm32.c src/nxvmsrc/xasm32/dasm32.h \
	src/nxvmsrc/platform/platform.c src/nxvmsrc/platform/platform.h \
	src/nxvmsrc/platform/linux/linux.c src/nxvmsrc/platform/linux/linux.h \
	src/nxvmsrc/platform/linux/linuxcon.c src/nxvmsrc/platform/linux/linuxcon.h \
	src/nxvmsrc/device/vglobal.h \
	src/nxvmsrc/device/device.c src/nxvmsrc/device/device.h \
	src/nxvmsrc/device/vmachine.c src/nxvmsrc/device/vmachine.h \
	src/nxvmsrc/device/vport.c src/nxvmsrc/device/vport.h \
	src/nxvmsrc/device/vbios.c src/nxvmsrc/device/vbios.h \
	src/nxvmsrc/device/vcmos.c src/nxvmsrc/device/vcmos.h \
	src/nxvmsrc/device/vcpu.c src/nxvmsrc/device/vcpu.h \
	src/nxvmsrc/device/vcpuins.c src/nxvmsrc/device/vcpuins.h \
	src/nxvmsrc/device/vdebug.c src/nxvmsrc/device/vdebug.h \
	src/nxvmsrc/device/vdma.c src/nxvmsrc/device/vdma.h \
	src/nxvmsrc/device/vfdc.c src/nxvmsrc/device/vfdc.h \
	src/nxvmsrc/device/vfdd.c src/nxvmsrc/device/vfdd.h \
	src/nxvmsrc/device/vhdc.c src/nxvmsrc/device/vhdc.h \
	src/nxvmsrc/device/vhdd.c src/nxvmsrc/device/vhdd.h \
	src/nxvmsrc/device/vkbc.c src/nxvmsrc/device/vkbc.h \
	src/nxvmsrc/device/vpic.c src/nxvmsrc/device/vpic.h \
	src/nxvmsrc/device/vpit.c src/nxvmsrc/device/vpit.h \
	src/nxvmsrc/device/vram.c src/nxvmsrc/device/vram.h \
	src/nxvmsrc/device/vvadp.c src/nxvmsrc/device/vvadp.h \
	src/nxvmsrc/device/qdx/qdx.c src/nxvmsrc/device/qdx/qdx.h \
	src/nxvmsrc/device/qdx/qdcga.c src/nxvmsrc/device/qdx/qdcga.h \
	src/nxvmsrc/device/qdx/qddisk.c src/nxvmsrc/device/qdx/qddisk.h \
	src/nxvmsrc/device/qdx/qdkeyb.c src/nxvmsrc/device/qdx/qdkeyb.h
nkvdm_LDFLAGS = -lpthread -lncurses

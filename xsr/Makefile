#
#   Makefile for eXtended Sector Remapper (XSR) driver
#
#   Copyright(c) 2004-2006, Samsung Electronics, Co., Ltd.
#

#EXTRA_CFLAGS	+= -I$(PRJROOT)/modules/xsr/Inc \
#		   -I$(PRJROOT)/modules/xsr -DXSR_NW 


ifeq ($(CONFIG_RFS_XSR_DEBUG),y)
#EXTRA_CFLAGS	+= -D_RFS_INTERNAL_RESET
#EXTRA_CFLAGS	+= -D_RFS_INTERNAL_STAT_BH
#EXTRA_CFLAGS	+= -DOAM_DBGMSG_ENABLE
endif


# All blocks of OneNAND are locked by Cold reset(Power OFF/ON) or Warm reset in suspend/resume.
# This flag unlocks locked partitions when resuming OneNAND device.
EXTRA_CFLAGS	+= -DUNLOCK_PARTITIONS_IN_RESUME

# Note: The following options are only used for development purpose
#	We don't guarantee these options on production
#EXTRA_CFLAGS	+= -D__RFS_INTERNAL_BLOCK_IO
#EXTRA_CFLAGS	+= -DBML_DEBUG -DOAM_DBGMSG_ENABLE

# For test suspend/resume
#EXTRA_CFLAGS	+= -D__BML_INTERNAL_PM_TEST__ 

# Kernel gcov
ifeq ($(CONFIG_GCOV_PROFILE),y)
ifeq ($(PATCHLEVEL),4)
include Makefile.gcov
else
include $(srctree)/drivers/xsr/Makefile.gcov
endif
endif

#
# RFS Flash Devices (XSR)
#
#EXTAR_CFLAGS	+= -DCONFIG_RFS_XSR_INT 
EXTRA_CFLAGS	+= -DCONFIG_RFS_STL_DELETE
#EXTAR_CFLAGS	+= -DCONFIG_RFS_XSR_STL_BENCHMARK
#EXTRA_CFLAGS	+= -DCONFIG_RFS_XSR_STATIC_PARTITIONS
#EXTAR_CFLAGS	+= -DCONFIG_XSR_DUAL_DEVICE
EXTRA_CFLAGS 	+= -DCONFIG_XSR_FLASH_PHYS_ADDR0=0x20000000
EXTRA_CFLAGS 	+= -DCONFIG_XSR_FLASH_PHYS_ADDR1=0x70100000
EXTRA_CFLAGS 	+= -DCONFIG_RFS_XSR_STL_SAM=100

# XSR base module
obj-m			+= xsr.o

# Should keep the build sequence. (xsr_base -> bml_block)
xsr-objs		:= xsr_base.o bml_block.o bml_blkdev.o

# This objects came from XSR, It will be never modified.
xsr-objs		+= Core/BML/BMLInterface.o Core/BML/BadBlkMgr.o Core/BML/SWEcc.o
xsr-objs		+= OAM/Linux/LinuxOAM.o
xsr-objs		+= LLD/OCLD/OCLD.o
xsr-objs		+= LLD/OCLD/OCLD_asm.o
xsr-objs		+= PAM/S3C6410/s3c6410.o

# XSR STL module
obj-m			+= xsr_stl.o

xsr_stl-objs	:= Core/STL/GarbageQueue.o Core/STL/OpQueue.o \
				   Core/STL/ReadyQueue.o Core/STL/SamBufMgr.o \
				   Core/STL/SectorMap.o Core/STL/VirtualNand.o \
				   Core/STL/STLInterface.o \
				   stl_block.o stl_blkdev.o

obj-m			+= xsr_debug.o

xsr_debug-objs	:= debug.o

CURDIR=$(KDIR)/../../modules/xsr

EXTRA_CFLAGS   += -I$(CURDIR)/Inc \
                  -I$(CURDIR) -DXSR_NW 

all:
	@echo "$(MAKE) --no-print-directory -C $(KDIR) SUBDIRS=$(CURDIR) modules"
	@$(MAKE) --no-print-directory -C $(KDIR) \
		SUBDIRS=$(CURDIR) modules

clean:
	rm -rf *.ko *.mod.c *.mod.o *~ .*.cmd .*.o.cmd Module.symvers modules.order .tmp_versions .*.o.d 
	mv Core/BML/BMLInterface.o Core/BML/BMLInterface.o.back
	find . -name "*.o" | xargs rm -f
	mv Core/BML/BMLInterface.o.back Core/BML/BMLInterface.o
	find . -name .*.cmd | xargs rm -f

install:
	@$(MAKE) --no-print-directory -C $(KDIR) \
		SUBDIRS=$(CURDIR) modules_install

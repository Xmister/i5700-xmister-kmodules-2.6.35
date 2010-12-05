#
# Makefile for the linux rfs-filesystem
#

ifeq ($(CONFIG_GCOV_PROFILE),y)
ifeq ($(PATCHLEVEL),4)
include Makefile.gcov
else
include $(srctree)/fs/rfs/Makefile.gcov
endif
# In profile mode, we always turn on log replay test without power-off
EXTRA_CFLAGS	+= -D_RFS_INTERNAL_RECOVERY_TEST
endif

#
# RFS internal configurations
#

# trace writing block
#EXTRA_CFLAGS += -D_RFS_INTERNAL_STAT_BH

# support quota, it is experimental feature
#EXTRA_CFLAGS += -D_RFS_INTERNAL_QUOTA

# Flush user cache
#EXTRA_CFLAGS	+= -D_RFS_INTERNAL_FLUSH_CACHE

# check sanity of pool
#EXTRA_CFLAGS += -D_RFS_INTERNAL_SANITY_CHECK

# log debug
#EXTRA_CFLAGS += -D_RFS_INTERNAL_LOG_DEBUG

# read-only mount
EXTRA_CFLAGS += -DRFS_RDONLY_MOUNT

# display debug information when symlink invokes
#EXTRA_CFLAGS += -D_RFS_INTERNAL_SYMLINK_DEBUG

# dump log file when log file was crashed
EXTRA_CFLAGS += -D_RFS_INTERNAL_PRINT_ON_LOG_CRASH

# check sanity of log
#EXTRA_CFLAGS += -D_RFS_INTERNAL_SANITY_CHECK_MOUNT_LOG ## mount-time check

# runtime check sanity of log
#EXTRA_CFLAGS += -D_RFS_INTERNAL_SANITY_CHECK_LOG       ## run-time check

# remount read-only on error
EXTRA_CFLAGS += -DRFS_ERRORS_RDONLY

# panic on error
#EXTRA_CFLAGS += -DRFS_ERRORS_PANIC

# bugs on error
EXTRA_CFLAGS += -DRFS_ERRORS_BUG

# crash on error : break PBR if filesystem detects pool corruption
#EXTRA_CFLAGS += -DRFS_ERRORS_CRASH_PBR

# notify on cluster allocation change
#EXTRA_CFLAGS += -DRFS_CLUSTER_CHANGE_NOTIFY

# xattr R2 debug xattr alloc
#EXTRA_CFLAGS += -DRFS_INTERNAL_R2_DEBUG_XATTR_ALLOC

# xattr R2 debug xattr set
#EXTRA_CFLAGS += -DRFS_INTERNAL_R2_DEBUG_XATTR_SET

# internal proc for hot/cold data mgnt 
#EXTRA_CFLAGS += -DRFS_INTERNAL_PROC_HOT_BOUNDARY

# Mount time optimization
EXTRA_CFLAGS += -D_RFS_INTERNAL_MOUNT_OPT

#
# RFS Filesystem
#
#CONFIG_RFS_FS=m
EXTRA_CFLAGS += -DCONFIG_RFS_VFAT
EXTRA_CFLAGS += -DCONFIG_RFS_NLS
EXTRA_CFLAGS += -DCONFIG_RFS_DEFAULT_CODEPAGE=\"utf8\"
EXTRA_CFLAGS += -DCONFIG_RFS_SYNC_ON_CLOSE
EXTRA_CFLAGS += -DCONFIG_RFS_POSIX_ATTR
EXTRA_CFLAGS += -DCONFIG_RFS_FS_XATTR
#EXTRA_CFLAGS += -DCONFIG_RFS_FS_SECURITY
EXTRA_CFLAGS += -DCONFIG_RFS_UID_BITS=8
EXTRA_CFLAGS += -DCONFIG_RFS_FAT_DEBUG
EXTRA_CFLAGS += -DCONFIG_RFS_FAT_DEBUG_VERBOSE=0
EXTRA_CFLAGS += -DCONFIG_RFS_MAPDESTROY
EXTRA_CFLAGS += -DCONFIG_RFS_PRE_ALLOC=50
EXTRA_CFLAGS += -DCONFIG_RFS_VERSION=\"RFS_1.3.1_b072_RTM\"

#
# Makefile for the linux rfs-filesystem (kernel 2.6)
#

#obj-$(CONFIG_RFS_FS)	+= rfs.o
obj-m					+= rfs.o

rfs-y		+= fcache.o cluster.o code_convert.o dos.o
rfs-y		+= dir.o file.o inode_26.o inode.o namei.o super.o
rfs-y		+= log.o log_replay.o
rfs-y		+= rfs_26.o
#ifdef CONFIG_PROC_FS
rfs-y		+= misc.o
#endif
#ifdef CONFIG_RFS_FS_XATTR
rfs-y		+= xattr.o xattr_user.o xattr_trusted.o
#endif
#ifdef CONFIG_RFS_FS_POSIX_ACL
rfs-y		+= 
#endif
#ifdef CONFIG_RFS_FS_SECURITY
#rfs-y		+= xattr_security.o
#endif

all:
	@echo "$(MAKE) --no-print-directory -C $(KDIR) SUBDIRS=$(CURDIR) modules"
	@$(MAKE) --no-print-directory -C $(KDIR) \
		SUBDIRS=$(CURDIR) modules

clean:
	rm -rf *.ko *.mod.c *.mod.o *~ .*.cmd Module.symvers modules.order .*.o.d  .tmp_versions *.o

install:
	@$(MAKE) --no-print-directory -C $(KDIR) \
		SUBDIRS=$(CURDIR) modules_install

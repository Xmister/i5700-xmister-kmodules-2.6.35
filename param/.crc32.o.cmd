cmd_/home/spica/i5700.2/modules_cyanogen/param/crc32.o := /opt/ctng-5700/bin/arm-spica-linux-uclibcgnueabi-gcc -Wp,-MD,/home/spica/i5700.2/modules_cyanogen/param/.crc32.o.d  -nostdinc -isystem /opt/ctng/lib/gcc/arm-spica-linux-uclibcgnueabi/4.4.3/include -I/home/spica/i5700.2/kernel/cyanogen/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c64xx/include -Iarch/arm/plat-samsung/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O3 -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -I/modules/xsr/Inc  -DMODULE -O3 -marm -mfpu=vfp -mtune=arm1176jzf-s -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(crc32)"  -D"KBUILD_MODNAME=KBUILD_STR(crc32)"  -c -o /home/spica/i5700.2/modules_cyanogen/param/crc32.o /home/spica/i5700.2/modules_cyanogen/param/crc32.c

deps_/home/spica/i5700.2/modules_cyanogen/param/crc32.o := \
  /home/spica/i5700.2/modules_cyanogen/param/crc32.c \

/home/spica/i5700.2/modules_cyanogen/param/crc32.o: $(deps_/home/spica/i5700.2/modules_cyanogen/param/crc32.o)

$(deps_/home/spica/i5700.2/modules_cyanogen/param/crc32.o):

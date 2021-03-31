#!/bin/bash

ARCH=arm
CROSS_COMPILE=arm-linux-gnueabihf-

KERNEL_TOP_PATH=$(cd ~; pwd)
OUTPUT="$KERNEL_TOP_PATH/Desktop/kernel/out"
echo $OUTPUT

cd $KERNEL_TOP_PATH/Desktop/kernel/linux

make ARCH=$ARCH CROSS_COMPILE=$CROSS_COMPILE O=$OUTPUT modules_install
scp $OUTPUT/arch/arm/boot/dts/*.dtb pi@192.168.219.106:/home/pi/temp/boot
scp $OUTPUT/arch/arm/boot/dts/overlays/*.dtb* pi@192.168.219.106:/home/pi/temp/boot/overlays
# scp $OUTPUT/arch/arm/boot/dts/overlays/README pi@192.168.219.106:/home/pi/temp/boot/overlays
scp $OUTPUT/arch/arm/boot/zImage pi@192.168.219.106:/home/pi/temp/boot/kernel7.img






















































































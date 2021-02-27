#!/bin/bash

ARCH=arm
CROSS_COMPILE=arm-linux-gnueabihf-

echo "configure build out path"

KERNEL_TOP_PATH=$(pwd)
OUTPUT="$KERNEL_TOP_PATH/out"
echo "$OUTPUT"

KERNEL=kernel7
BUILD_LOG="$KERNEL_TOP_PATH/rpi_build_log.txt"

echo "move kernel source"
cd linux

echo "make defconfig"
make ARCH=$ARCH CROSS_COMPILE=$CROSS_COMPILE O=$OUTPUT bcm2709_defconfig

echo "kernel build"
make ARCH=$ARCH CROSS_COMPILE=$CROSS_COMPILE O=$OUTPUT zImage modules dtbs -j8 2>&1 | tee $BUILD_LOG

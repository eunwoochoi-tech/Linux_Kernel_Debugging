KDIR=/root/kernel_source/raspberrypi-linux
ARCH=arm
CROSS_COMPILE=arm-linux-gnueabihf-

obj-m := list_head.o

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) M=`pwd` modules
clean:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) M=`pwd` clean
send:
	scp -P 6666 list_head.ko pi@112.155.213.28:/home/pi

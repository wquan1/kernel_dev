#
# Makefile for Task 01 of the Eudyptula Challenge
# refer to http://www.tldp.org/LDP/lkmpg/2.6/lkmpg.pdf Example 2-2
#
ifneq ($(KDIR),)
	obj-m += task01.o
else
	obj-m += task01.o
	KDIR ?= /lib/modules/$(shell uname -r)/build
	PWD	:= $(shell pwd)

default:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean

endif

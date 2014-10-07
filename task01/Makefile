#
# Makefile for Task 01 of the Eudyptula Challenge
# refer to http://www.tldp.org/LDP/lkmpg/2.6/lkmpg.pdf Example 2-2
#

obj-m += task1.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

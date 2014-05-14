KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m += main.o
main-objs := ./src/main.o ./src/echo.o

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean

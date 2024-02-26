CC = gcc
CFLAGS = -Wall -O2
SRC_FILES =   Aop.c if1.c 0.1.c  if2.c  01.c 0.2.c file.c looop.c str.c 0.3.c   globalocal.c switch01.c     

all: $(SRC_FILES:.c=)

%: %.c
        $(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -f Aop if1 0.1  if2  01 0.2 file looop str 0.3   globalocal   Makefile   switch01
	

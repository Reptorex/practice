CC = gcc
CFLAGS = -Wall -O2
SRC_FILES = Aop.c asop.c bop.c lop.c rop.c tanaryop.c

all: $(SRC_FILES:.c=)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -f Aop asop bop lop rop tanaryop



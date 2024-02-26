CC = gcc
CFLAGS = -g -Wno-unused-variable -Wno-unused-function

SRC_FILES = stct.c 1stct.c 2stct.c 3stct.c

all: $(SRC_FILES:.c=)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -f	stct	1stct	2stct	3stct


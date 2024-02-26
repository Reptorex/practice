CC = gcc
CFLAGS = -W
SRC_FILES = arr1.c arrsort.c arr2.c arr3.c arr4.c arrlen.c arrRev.c

all: $(SRC_FILES:.c=)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -f arr1 arrsort arr2 arr3 arrlen arrRev

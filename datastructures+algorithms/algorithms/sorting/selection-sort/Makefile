CFLAGS=-std=c99 -g -Wall  
CC=gcc
UNITY=../../unity

all: init test

init:
	mkdir -p build

unity.o: $(UNITY)/unity.c $(UNITY)/unity.h
	$(CC) $(CFLAGS) -c $(UNITY)/unity.c -o build/unity.o

selection-sort.o: selection-sort.h selection-sort.c
	$(CC) $(CFLAGS) -c selection-sort.c -o build/selection-sort.o

test.o: test.c
	$(CC) $(CFLAGS) -I $(UNITY) -c test.c -o build/test.o

test: init unity.o selection-sort.o test.o
	$(CC) $(CFLAGS) build/unity.o build/selection-sort.o build/test.o -o build/test
	build/test

clean:
	rm -rf build/

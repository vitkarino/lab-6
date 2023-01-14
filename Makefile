CC=gcc
CFLAGS=-c -Wall

all: main

main: main.o lib.o
	$(CC) main.o lib.o -o main

main.o: main.c lib.h
	$(CC) $(CFLAGS) main.c

lib.o: lib.c lib.h
	$(CC) $(CFLAGS) lib.c
	
clean:
	rm -rf *o main


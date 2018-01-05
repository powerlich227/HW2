#makefile for iterate.c

CFLAGS = -g -O -Wall
LIBS = -lm
CC = gcc

iterate.o: iterate.c
    $(CC) $(CFLAGS) -c -o iterate.o iterate.c

iterate: iterate.o
    $(CC) $(CFLAGS) $(LIBS) -o iterate iterate.o

clean:
    rm *.o
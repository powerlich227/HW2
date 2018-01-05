#makefile for copy.c

CFLAGS = -g -O -Wall
LIBS = -lm
CC = gcc

copy.o: copy.c
    $(CC) $(CFLAGS) -c -o copy.o copy.c

copy: copy.o
    $(CC) $(CFLAGS) $(LIBS) -o copy copy.o

clean:
    rm *.o
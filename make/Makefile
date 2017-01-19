CC=gcc
CFLAGS=-Wall
RM=/bin/rm -f

all: main

main.o: include.h main.c 
	${CC} ${CFLAGS} -c $^
aux.o: aux.c 
	${CC} ${CFLAGS} -c $^

main: main.o aux.o
	${CC} ${CFLAGS} -o $@ $^

.PHONY: clean
clean:
	-${RM} *.o main

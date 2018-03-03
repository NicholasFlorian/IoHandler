CC = gcc
CFLAGS = -Wall -g -Iinclude -std=c11

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 
#main-> DES.a pqueue.a


all: main

main: lib/libioHandler.a scaffold.o
	$(CC) $(CFLAGS) scaffold.o -o bin/main -L./lib/ -lioHandler

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 
#ioHandler -> ioHandler.c


ioHandler: lib/libioHandler.a

lib/libioHandler.a: ioHandler.o
	ar cr lib/libioHandler.a ioHandler.o

ioHandler.o: src/ioHandler.c
	$(CC) $(CFLAGS) -c src/ioHandler.c

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 
#scaffold -> ioHandler.h


scaffold: scaffold.o

scaffold.o: src/scaffold.c
	$(CC) $(CFLAGS) -c src/scaffold.c

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

#Utility Funtions


clean:
	rm *.o
	rm lib/*.a
	rm bin/main

run:
	./bin/main

cclear:
	clear
	clear

r: cclear clean main run


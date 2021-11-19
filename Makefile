CC = gcc
CC_FLAGS = -Wall -Wextra -pedantic -std=c99

EXEC = main

build: main.o
	$(CC) main.o -o $(EXEC) $(CC_FLAGS)

main.o:
	$(CC) -c main.c

clean:
	rm *.o main
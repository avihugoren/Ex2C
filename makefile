CFLAGS = -Wall -g

all: main

main: main.o myBank.o
	gcc $(CFLAGS)  main.o myBank.o -o main

main.o: main.c myBank.h
	gcc $(CFLAGS) -c main.c 

myBank.o: myBank.c myBank.h
	gcc $(CFLAGS) -c myBank.c 

.PHONY: clean all

clean :  
	rm -f *.o main
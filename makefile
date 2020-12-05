CC=gcc
AR=ar

FLAGS= -Wall -g

all: mymathd  maind 	

maind: main.o myBank.o myBank.h mymathd
	$(CC) $(FLAGS) -o maind libmyMath.a main.o myBank.o

mymathd: myBank.o 
	$(AR) -rcs libmyMath.a myBank.o	
myBank.o: myBank.c myBank.h  
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so .out maind

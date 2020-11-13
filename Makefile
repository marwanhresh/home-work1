CC=gcc
FLAGS =-Wall -g
AR =ar

all: 	libmyMath.so libmyMath.a maind mains	

#static
mains: main.o power.o basicMath.o
	$(CC) $(FLAGS) -o mains main.o power.o basicMath.o

#dynamic
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

#static libary creator 
libmyMath.a : basicMath.o power.o
	$(AR) -rcs libmylib.a basicMath.o power.o

#dynamic libary creator
libmyMath.so: basicMath.o power.o 
	$(CC) -shared -o libmyMath.so basicMath.o power.o 

main.o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c 

basicMath.o: basicMath.c myMath.h 
	$(CC) $(FLAGS) -c basicMath.c 

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

.PHONY: clean

clean: 
	rm -f *.o *.so *.a maind mains 

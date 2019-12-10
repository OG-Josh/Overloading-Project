CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Invoice.o Time.o ExtendedTime.o

all: main

main: main.cpp Invoice.o Time.o ExtendedTime.o
	$(CC) $(FLAGS) main.cpp -o main $(OBJS)

Invoice.o: Invoice.cpp Invoice.h
	$(CC) $(FLAGS) -c Invoice.cpp -o Invoice.o

Time.o: Time.cpp Time.h
	$(CC) $(FLAGS) -c Time.cpp -o Time.o

ExtendedTime.o: ExtendedTime.cpp ExtendedTime.h
	$(CC) $(FLAGS) -c ExtendedTime.cpp -o ExtendedTime.o

clean:
	rm *.o main main.tar

tar:
	tar cf main.tar main.scr makefile main.cpp Invoice.cpp Invoice.h Time.cpp Time.h ExtendedTime.cpp ExtendedTime.h

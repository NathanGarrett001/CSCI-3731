GXX = g++
CFLAGS = -O2

all: main

distance.o: distance.cpp distance.h
	$(GXX) -c -Wall -Werror distance.cpp $(CFLAGS)

main.o: main.cpp distance.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o distance.o
	$(GXX) -o main main.o distance.o

clean:
	rm -f *.o
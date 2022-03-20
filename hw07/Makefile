GXX = g++
CFLAGS = -O2

all: main

vector.o: vector.cpp vector.h
	$(GXX) -c -Wall -Werror vector.cpp $(CFLAGS)

main.o: main.cpp vector.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o vector.o
	$(GXX) -o main main.o vector.o

clean:
	rm -f *.o

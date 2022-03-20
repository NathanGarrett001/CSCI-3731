GXX = g++
CFLAGS = -O2

all: main

vector.o: vector.cpp vector.h
	$(GXX) -c -Wall -Werror vector.cpp $(CFLAGS)

hw07.o: hw07.cpp vector.h
	$(GXX) -c -Wall -Werror hw07.cpp $(CLFAGS)

main: hw07.o vector.o
	$(GXX) -o main hw07.o vector.o

clean:
	rm -f *.o

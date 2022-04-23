GXX = g++
CFLAGS = -O2

all: main

Pattern.o: Pattern.cpp Pattern.h
	$(GXX) -c -Wall -Werror Pattern.cpp $(CFLAGS)

main.o: main.cpp Pattern.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o Pattern.o
	$(GXX) -o main main.o Pattern.o

clean:
	rm -f *.o


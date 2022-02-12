GXX = g++
CFLAGS = -O2

all: main

wavRead.o: wavRead.cpp wavRead.h
	$(GXX) -c -Wall -Werror wavRead.cpp $(CFLAGS)

main.o: main.cpp wavRead.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o wavRead.o
	$(GXX) -o main main.o wavRead.o

clean:
	rm -f *.o

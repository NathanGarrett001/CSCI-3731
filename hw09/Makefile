GXX = g++
CFLAGS = -O2

all: main

FileStreamBuf.o: FileStreamBuf.cpp FileStreamBuf.h
	$(GXX) -c -Wall -Werror FileStreamBuf.cpp $(CFLAGS)

main.o: main.cpp FileStreamBuf.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o FileStreamBuf.o
	$(GXX) -o main main.o FileStreamBuf.o

clean:
	rm -f *.o

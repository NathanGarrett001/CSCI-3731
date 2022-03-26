GXX = g++
CFLAGS = -O2

all: main

vector.o: vector.cpp vector.h
	$(GXX) -c -Wall -Werror vector.cpp $(CFLAGS)
  
planet.o: planet.cpp planet.h
	$(GXX) -c -Wall -Werror planet.cpp $(CFLAGS)
  
satellite.o: satellite.cpp satellite.h
	$(GXX) -c -Wall -Werror satellite.cpp $(CFLAGS)

main.o: main.cpp vector.h planet.h satellite.h
	$(GXX) -c -Wall -Werror main.cpp $(CLFAGS)

main: main.o vector.o planet.o satellite.o
	$(GXX) -o main main.o vector.o planet.o satellite.o

clean:
	rm -f *.o

CC=g++
CFLAGS=-c
LDFLAGS=-I/usr/local/Cellar/boost/1.56.0/include

all: VLForces

DT: VLForces.o
	$(CC) VLForces.o -o VLForces

VLForces.o: VLForces.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) VLForces.cpp

clean:
	rm -rf *.o VLForces 

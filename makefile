# File:     makefile
# Author:   Brook Tilahun
# Date: 10/07/2021

# Description
# This makefile will make the program of a unit class

CC=g++ 
CFLAGS=-fno-diagnostics-color
LFLAGS=
OBJECTS=main.o unit.o
EXE=prog4

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o: 	main.cpp unit.h
		$(CC) $(CFLAGS) -c main.cpp
unit.o:         unit.cpp unit.h
		$(CC) $(CFLAGS) -c unit.cpp
clean:
		rm -rf *.o *~ $(EXE)

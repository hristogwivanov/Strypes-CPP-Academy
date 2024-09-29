CC = g++
CFLAGS = -Wall -c
TARGET = program

$(TARGET): program.o swap.o
	$(CC) program.o swap.o -o $(TARGET)

program.o: program.cpp swap.h
	$(CC) $(CFLAGS) program.cpp

swap.o: swap.cpp swap.h
	$(CC) $(CFLAGS) swap.cpp

clean:
	rm -f *.o $(TARGET)

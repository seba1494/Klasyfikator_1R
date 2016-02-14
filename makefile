CFLAGS=-c -Wall
CC= g++

all: klasyfikator



klasyfikator: main.o Klas.o Klasyfikator1R.o
		$(CC)   main.o Klas.o Klasyfikator1R.o -o klasyfikator
		
main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp
		
Klas.o: Klas.cpp Klas.h
	$(CC) $(CFLAGS)  Klas.cpp
	
Klasyfikator1R.o: Klasyfikator1R.cpp Klasyfikator1R.h
	$(CC) $(CFLAGS)  Klasyfikator1R.cpp

	
clean:
	rm -rf *o klasyfikator


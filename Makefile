CXXFLAGS = -g -Wall --std=c++11

all: main.o funcs.o

	g++ $(CXXFLAGS) -o main main.o funcs.o

main: main.o funcs.o

	g++ $(CXXFLAGS) -o main main.o funcs.o


tests: tests.o funcs.o

	g++ $(CXXFLAGS) -o tests tests.o funcs.o


main.o: main.cpp

funcs.o: funcs.cpp funcs.h

tests.o: tests.cpp doctest.h

clean:
	rm -f *.o

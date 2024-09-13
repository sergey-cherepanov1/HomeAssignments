task-1: main.o hello.o
	g++ main.o hello.o -o task-1

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp hello.h
	g++ -c hello.cpp

clean:
	rm *.o task-1

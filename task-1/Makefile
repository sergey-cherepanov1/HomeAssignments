task-1: main.o hello.o
	g++ main.o hello.o -o task-1

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp hello.h
	g++ -c hello.cpp

clean:
	rm *.o task-1

## Хороший makefile. Но будь твой проект больше, было бы жутко муторно все это
## писать. Есть варианты поудобнее, которые можно вставить в почти любой проект
## и оно будет собираться, глянь на них

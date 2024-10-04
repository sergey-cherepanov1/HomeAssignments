CPP = g++
RUN = Assignment2b
OBJS = main.o

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) -c $<

clean:
	rm *.o $(RUN)

cleanall:
	rm *.o *.cpp $(RUN)

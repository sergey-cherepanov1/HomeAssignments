CPP = g++
RUN = Assignment2a
OBJS = main.o

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) -c $<

clean:
	rm *.o output $(RUN)

cleanall:
	rm *.o *.cpp $(RUN)

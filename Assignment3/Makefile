CPP = g++
RUN = Assignment3
OBJS = Car.o Transformer.o main.o

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) -c $<

clean:
	rm *.o $(RUN)

cleanall:
	rm *.o *.cpp $(RUN)

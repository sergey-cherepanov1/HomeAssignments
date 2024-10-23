CPP = g++
RUN = Assignment3
OBJS = Dinobot.o Decepticon.o Autobot.o Core.o Gun.o Transformer.o main.o

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) -c $<

clean:
	rm *.o $(RUN)

cleanall:
	rm *.o *.cpp $(RUN)

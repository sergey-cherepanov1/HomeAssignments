CPP = g++
RUN = Assignment3
OBJS = tests.o Dinobot.o Decepticon.o Autobot.o Core.o Gun.o Transformer.o

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@ -lgtest -lgtest_main -pthread

%.o: %.cpp
	$(CPP) -c $<

clean:
	rm *.o $(RUN)

cleanall:
	rm *.o *.cpp $(RUN)

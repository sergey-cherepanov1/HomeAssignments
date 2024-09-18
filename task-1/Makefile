CPP = g++
RUN = task-1
OBJS = main.o hello.o 

all: $(RUN)

$(RUN): $(OBJS)
	$(CPP) $(OBJS) -o $@

%.o: %.cpp %.h
	$(CPP) -c $<

clean:
	rm *.o $(RUN)

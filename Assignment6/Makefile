CXX = g++
FLAGS = -Werror -Wpedantic -Wall
RUN = Assignment6
SRC = $(wildcard *.cpp)
OBJDIR = objs
OBJS = $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(RUN)

$(RUN): $(OBJS)
	$(CXX) $(OBJS) -o $@ -lgtest -lgtest_main -pthread

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) -c $< $(FLAGS) -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR) $(RUN)

cleanall: clean
	rm -rf $(OBJDIR) $(RUN)

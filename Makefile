#CXX := g++-17
CXXFLAGS += -O2
CXXFLAGS += -std=c++20
FILTER = | grep -ve nopw -e nopl

all :: t.o

all :: t.dis

t.dis : t.o
	objdump --no-show-raw-insn -d t.o $(FILTER) | c++filt | tee $@

clean :
	rm t.o t.dis

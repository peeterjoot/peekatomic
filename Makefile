#CXX := g++-17
CXXFLAGS += -O2
CXXFLAGS += -std=c++20

all :: t.o

all :: t.dis

t.dis : t.o
	objdump -d t.o | c++filt | tee $@

clean :
	rm t.o t.dis

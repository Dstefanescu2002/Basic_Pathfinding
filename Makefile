# Compiler
CXX ?= g++

# Compiler flags
CXXFLAGS ?= --std=c++11 -pedantic -g

test: probability_grid.exe
	./probability_grid.exe

probability_grid.exe: probability_grid.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Disable built-in Makefile rules
.SUFFIXES:

clean:
	rm -rvf *.exe *.out.txt *.out.ppm *.dSYM *.stackdump

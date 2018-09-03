SRC =  problem01.cpp problem01_main.cpp

all: Problem01

Problem01: problem01.o problem01_main.o
	g++ -L. problem01.o problem01_main.o -o Problem01

.cpp.o:
	g++ -std=c++11 -c $< -o $@

clean:
	rm *.o -f
	rm Problem01 -f

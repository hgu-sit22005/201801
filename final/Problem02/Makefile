all: Problem02

Problem02: problem02.o problem02_main.o
	g++ -L. problem02.o problem02_main.o -o Problem02

.cpp.o:
	g++ -std=c++11 -c $< -o $@

clean:
	rm *.o -f
	rm Problem02 -f

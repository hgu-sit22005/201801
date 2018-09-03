all: Problem03

Problem03: problem03.o problem03_main.o
	g++ -L. problem03.o problem03_main.o -o Problem03

.cpp.o:
	g++ -std=c++11 -c $< -o $@

clean:
	rm *.o -f
	rm Problem03 -f

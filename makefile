all: hw
	./hw

hw: hw.o Link.o
	g++ -std=c++17 -Wall -Wextra -o hw hw.o Link.o

hw.o: hw.cpp Link.h
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

Link.o: Link.cpp Link.h
	g++ -std=c++17 -Wall -Wextra -c Link.cpp

clean:
	rm -f *.o hw

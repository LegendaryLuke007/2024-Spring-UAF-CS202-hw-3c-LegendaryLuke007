all: hw
	./hw

hw: hw.o Link.o LinkedList.o
	g++ -std=c++17 -Wall -Wextra -o hw hw.o Link.o LinkedList.o

hw.o: hw.cpp Link.h LinkedList.h
	g++ -std=c++17 -Wall -Wextra -c hw.cpp

Link.o: Link.cpp Link.h
	g++ -std=c++17 -Wall -Wextra -c Link.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -std=c++17 -Wall -Wextra -c LinkedList.cpp

clean:
	rm -f *.o hw

build: main.o
	g++ -Wall -o game main.o player.o

player: player.cpp
	g++ -Wall -c player.cpp library.h

main: main.cpp
	g++ -Wall -c main.cpp library.h

clean:
	rm player.o main.o game
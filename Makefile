main: main.o Critter.o Ant.o Doodlebug.o Grid.o
	g++ main.o Critter.o Ant.o Doodlebug.o Grid.o -o main

main.o: main.cpp
	g++ -c main.cpp

Critter.o: Critter.cpp Critter.hpp
	g++ -c Critter.cpp

Ant.o: Ant.cpp Ant.hpp
	g++ -c Ant.cpp

Doodlebug.o: Doodlebug.cpp Doodlebug.hpp
	g++ -c Doodlebug.cpp

Grid.o: Grid.cpp Grid.hpp
	g++ -c Grid.cpp

clean:
	rm *.o main

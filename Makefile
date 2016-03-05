CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

tablica: obj obj/main.o obj/tablica.o
	g++ -Wall -pedantic -std=c++11 -o tablica obj/main.o obj/tablica.o

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

clean:
	rm -f obj/*.o tablica

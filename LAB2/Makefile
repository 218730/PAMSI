CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

program: obj obj/main.o obj/tablica.o obj/stoper.o obj/test.o
	g++ -Wall -pedantic -std=c++11 -o program obj/main.o obj/tablica.o obj/stoper.o obj/test.o

obj:
	 mkdir obj

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

obj/test.o: src/test.cpp inc/test.hh
	g++ -c ${CXXFLAGS} -o obj/test.o src/test.cpp

clean:
	rm -f obj/*.o program

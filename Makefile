CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

tablica: obj obj/main.o obj/tablica.o obj/stoper.o obj/test.o obj/lista.o obj/kolejka.o obj/stos.o obj/wartosc.o
	g++ -Wall -pedantic -std=c++11 -o tablica obj/main.o obj/tablica.o obj/stoper.o obj/test.o obj/lista.o obj/kolejka.o obj/stos.o obj/wartosc.o

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

obj/test.o: src/test.cpp inc/test.hh
	g++ -c ${CXXFLAGS} -o obj/test.o src/test.cpp

obj/lista.o: src/lista.cpp inc/lista.hh
	g++ -c ${CXXFLAGS} -o obj/lista.o src/lista.cpp

obj/kolejka.o: src/kolejka.cpp inc/kolejka.hh
	g++ -c ${CXXFLAGS} -o obj/kolejka.o src/kolejka.cpp

obj/stos.o: src/stos.cpp inc/stos.hh
	g++ -c ${CXXFLAGS} -o obj/stos.o src/stos.cpp

obj/wartosc.o: src/wartosc.cpp inc/wartosc.hh
	g++ -c ${CXXFLAGS} -o obj/wartosc.o src/wartosc.cpp

clean:
	rm -f obj/*.o tablica

CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

tablica: obj obj/main.o obj/tablica.o obj/runIT.o obj/stoper.o obj/test_tablica.o
	g++ -Wall -pedantic -std=c++11 -o tablica obj/main.o obj/tablica.o obj/runIT.o obj/stoper.o obj/test_tablica.o

obj/main.o: src/main.cpp
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

obj/runIT.o: src/runIT.cpp inc/runIT.hh
	g++ -c ${CXXFLAGS} -o obj/runIT.o src/runIT.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

obj/test_tablica.o: src/test_tablica.cpp inc/test_tablica.hh
	g++ -c ${CXXFLAGS} -o obj/test_tablica.o src/test_tablica.cpp

clean:
	rm -f obj/*.o tablica

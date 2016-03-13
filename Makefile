#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/stoper.o obj/tablica.o
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/stoper.o obj/tablica.o

obj:
	mkdir obj


obj/main.o: src/main.cpp  inc/stoper.hh inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh inc/kolejka.hh
	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

clean:
	rm -f obj/*.o start

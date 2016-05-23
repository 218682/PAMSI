#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/stoper.o obj/graf.o obj/BnB.o inc/lista2s.hh inc/lista.hh obj/graftest.o obj/BnBwEL.o
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/stoper.o obj/graf.o obj/BnB.o obj/graftest.o obj/BnBwEL.o

obj:
	mkdir obj

obj/main.o: src/main.cpp  inc/stoper.hh inc/tablica.hh 
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/graftest.o: src/graftest.cpp inc/ngraf.hh inc/BnB.hh src/BnB.cpp
	g++ -c ${CXXFLAGS} -o obj/graftest.o src/graftest.cpp

obj/BnBwEL.o: src/BnBwEL.cpp inc/BnB.hh
	g++ -c ${CXXFLAGS} -o obj/BnBwEL.o src/BnBwEL.cpp

obj/BnB.o: src/BnB.cpp inc/BnB.hh
	g++ -c ${CXXFLAGS} -o obj/BnB.o src/BnB.cpp

obj/graf.o: src/graf.cpp inc/ngraf.hh
	g++ -c ${CXXFLAGS} -o obj/graf.o src/graf.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp


clean:
	rm -f obj/*.o start

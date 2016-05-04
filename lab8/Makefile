#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/stoper.o obj/graf.o inc/lista2s.hh inc/lista.hh
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/stoper.o obj/graf.o

obj:
	mkdir obj

obj/main.o: src/main.cpp  inc/stoper.hh inc/tablica.hh 
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/graf.o: src/graf.cpp inc/graf.hh inc/ngraf.hh
	g++ -c ${CXXFLAGS} -o obj/graf.o src/graf.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp


clean:
	rm -f obj/*.o start

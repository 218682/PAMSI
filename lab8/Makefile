#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/stoper.o obj/drzewo.o inc/lista2s.hh inc/lista.hh obj/drzewotest.o 
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/stoper.o obj/drzewo.o obj/drzewotest.o

obj:
	mkdir obj


obj/main.o: src/main.cpp  inc/stoper.hh inc/tablica.hh #inc/stos.hh inc/kolejka.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/drzewotest.o: src/drzewotest.cpp inc/drzewotest.hh inc/drzewo.hh
	g++ -c ${CXXFLAGS} -o obj/drzewotest.o src/drzewotest.cpp

obj/drzewo.o: src/drzewo.cpp inc/drzewo.hh inc/idrzewo.hh
	g++ -c ${CXXFLAGS} -o obj/drzewo.o src/drzewo.cpp

#obj/tabzhasztest.o: src/tabzhasztest.cpp  inc/tabzhasztest.hh
#	g++ -c ${CXXFLAGS} -o obj/tabzhasztest.o src/tabzhasztest.cpp

#obj/tabzhasz.o: src/tabzhasz.cpp  inc/tabzhasz.hh
#	g++ -c ${CXXFLAGS} -o obj/tabzhasz.o src/tabzhasz.cpp

#obj/tabasoc.o: src/tabasoc.cpp  inc/tabasoc.hh inc/itabasoc.hh
#	g++ -c ${CXXFLAGS} -o obj/tabasoc.o src/tabasoc.cpp

#obj/listatest.o: src/listatest.cpp  inc/listatest.hh inc/lista2s.hh
#	g++ -c ${CXXFLAGS} -o obj/listatest.o src/listatest.cpp

#obj/kolejka.o: src/kolejka.cpp  inc/kolejka.hh inc/tablica.hh
#	g++ -c ${CXXFLAGS} -o obj/kolejka.o src/kolejka.cpp

#obj/stos.o: src/stos.cpp  inc/stos.hh inc/tablica.hh
#	g++ -c ${CXXFLAGS} -o obj/stos.o src/stos.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp


clean:
	rm -f obj/*.o start

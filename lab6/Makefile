#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/stoper.o obj/stos.o obj/kolejka.o \
	 obj/listatest.o obj/tabasoc.o obj/tabzhasz.o obj/Dictionary.o \
	  obj/tabzhasztest.o inc/lista2s.hh
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/stoper.o obj/stos.o obj/kolejka.o \
	   obj/listatest.o obj/tabzhasz.o obj/tabasoc.o obj/Dictionary.o \
	    obj/tabzhasztest.o

obj:
	mkdir obj


obj/main.o: src/main.cpp  inc/stoper.hh inc/tablica.hh inc/stos.hh inc/kolejka.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/tabzhasztest.o: src/tabzhasztest.cpp  inc/tabzhasztest.hh
	g++ -c ${CXXFLAGS} -o obj/tabzhasztest.o src/tabzhasztest.cpp

obj/tabzhasz.o: src/tabzhasz.cpp  inc/tabzhasz.hh
	g++ -c ${CXXFLAGS} -o obj/tabzhasz.o src/tabzhasz.cpp

obj/tabasoc.o: src/tabasoc.cpp  inc/tabasoc.hh inc/itabasoc.hh
	g++ -c ${CXXFLAGS} -o obj/tabasoc.o src/tabasoc.cpp

obj/listatest.o: src/listatest.cpp  inc/listatest.hh inc/lista2s.hh
	g++ -c ${CXXFLAGS} -o obj/listatest.o src/listatest.cpp

#obj/lista.o: src/lista.cpp  inc/lista.hh inc/tablica.hh
#	g++ -c ${CXXFLAGS} -o obj/lista.o src/lista.cpp

#obj/lista2.o: src/lista2.cpp  inc/lista2.hh inc/strukturalisty.hh
#	g++ -c ${CXXFLAGS} -o obj/lista2.o src/lista2.cpp

obj/Dictionary.o: src/Dictionary.cpp inc/Dictionary.h
	g++ -c ${CXXFLAGS} -o obj/Dictionary.o src/Dictionary.cpp

obj/kolejka.o: src/kolejka.cpp  inc/kolejka.hh inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/kolejka.o src/kolejka.cpp

obj/stos.o: src/stos.cpp  inc/stos.hh inc/tablica.hh
	g++ -c ${CXXFLAGS} -o obj/stos.o src/stos.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

#obj/tablica.o: src/tablica.cpp inc/tablica.hh
#	g++ -c ${CXXFLAGS} -o obj/tablica.o src/tablica.cpp

clean:
	rm -f obj/*.o start

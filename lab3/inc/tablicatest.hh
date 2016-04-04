/*!
\file
\brief plik zawiera testowa klase tablica
*/
#ifndef TABLICATEST_HH
#define TABLICATEST_HH
#include "atp2.hh"
class tablicatest: public atp2, public iRunnable{
/*!
\brief Klasa tablicatest

Klasa ma w swoim skladzie metody sluzace do zarzadzania tablica dynamiczna uzywane przez inne typy danych oraz metody odpowiadajace za jej testowanie*/
private:
  int *tab=new int[rozmiar];
protected:
  tablicatest() {rozmiar=10;}
  tablicatest(int n) {rozmiar=n;}
  void run();
  //void podaj_roz(int M){ this->rozmiar=M;}
  int wyswietl(int n) {return tab[n];}
  void push(int);
  void zwieksz(int);
  void przypisz(int, int);
  void zmniejsz();
  void zdejmij(int);
};
#endif

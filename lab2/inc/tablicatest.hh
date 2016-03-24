/*!
\file
\brief plik zawiera klase tablica
*/
#ifndef TABLICATEST_HH
#define TABLICATEST_HH
#include "atp2.hh"
class tablicatest: public atp2{
/*!
\brief Klasa tablica

Klasa ma w swoim skladzie metody sluzace do zarzadzania tablica dynamiczna uzywane przez inne typy danych*/
private:
  int *tab=new int[rozmiar];
protected:
  tablicatest() {rozmiar=10;}
  tablicatest(int n) {rozmiar=n;}
  //void podaj_roz(int M){ this->rozmiar=M;}
  int wyswietl(int n) {return tab[n];}
  void push(int);
  void zwieksz(int);
  void przypisz(int, int);
  void zmniejsz();
  void zdejmij(int);
};
#endif

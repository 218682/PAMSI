/*!
\file
\brief plik zawiera klase tablica
*/
#ifndef TABLICA_HH
#define TABLICA_HH
#include "atp2.hh"
class tablica: public atp2{
/*!
\brief Klasa tablica

Klasa ma w swoim skladzie metody sluzace do zarzadzania tablica dynamiczna uzywane przez inne typy danych*/
private:
  int *tab=new int[rozmiar];
protected:
  tablica() {rozmiar=10;}
  tablica(int n) {rozmiar=n;}
  //void podaj_roz(int M){ this->rozmiar=M;}
  int wyswietl(int n) {return tab[n];}
  void push(int);
  void zwieksz(int);
  void przypisz(int, int);
  void zmniejsz();
  void zdejmij(int);
  void bubblesort();
};
#endif

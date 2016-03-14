#ifndef TABLICA_HH
#define TABLICA_HH
#include "atp.hh"
#include <iostream>
class tablica: public atp2
{
private:
  int *tab=new int[rozmiar];
public:
  tablica() {rozmiar=10;}
  tablica(int n) {rozmiar=n;}
  //void podaj_roz(int M){ this->rozmiar=M;}
  void wyswietl() {for(int j=0; j<ile_elem; j++) std::cout<<tab[j]<<std::endl;}
  void wyswietl_roz(){std::cout<<rozmiar<<std::endl;}
  void push(int);
  void zwieksz(int);
};
#endif

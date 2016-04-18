/*!
\file
\brief plik zawiera klase lista, ktora jest oparta na jednowymiarowej tablicy dynamicznej
*/
#ifndef LISTA_HH
#define LISTA_HH
#include "tablica.hh"
#include "inlista.hh"
class lista: public tablica, public inLista<int>{
public:
  //! konstruktor bezparametryczny
  //lista();
  void remove(int);
  void remove();
  void add(int, int);
  void add(int);
  int get (int);
  bool isEmpty();
  int size();
};

#endif

/*!
\file
\brief plik zawiera klase lista2, ktora jest zbudowana jak klasyczna lista
*/
#ifndef LISTA2_HH
#define LISTA2_HH
#include "inlista.hh"
#include "strukturalisty.hh"
#include <cstring>
class lista2:  public inLista{
protected:
  StrListy *FIRST;
  int rozmiar;
public:
  //! konstruktor bezparametryczny
  lista2();
  void remove(int);
  void remove();
  void add(int, int);
  void add(int);
  int get (int);
  bool isEmpty();
  class bad_index{};
  class empty{};
};

#endif
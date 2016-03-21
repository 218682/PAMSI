#ifndef LISTA_HH
#define LISTA_HH
#include "tablica.hh"
class lista: public tablica{
public:
  lista();
  void remove(int);
  void remove();
  void add(int, int);
  void add(int);
  int get (int);
};

#endif

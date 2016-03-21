#ifndef STOS_HH
#define STOS_HH
#include "tablica.hh"
class stos: public tablica{
public:
  stos();
  void remove();
  void add(int);
  int get (int);
  int get ();
};

#endif

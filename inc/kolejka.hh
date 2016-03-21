#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "tablica.hh"

class kolejka: public tablica{
public:
  kolejka();
  void remove(int);
  void remove();
  void add(int);
  int get (int);
  int first();
  int last();
};

#endif

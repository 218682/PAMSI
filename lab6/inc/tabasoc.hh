#ifndef TABASOC_HH
#define TABASOC_HH
#include "lista2.hh"
#include <cstring>
class TabAsoc//: public ITabAsoc
{
private:
  lista2 haslo;
  lista2 wartosci;
public:
  int search(std::string);
  void insert(std::string, int);
};

#endif

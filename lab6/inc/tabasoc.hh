#ifndef TABASOC_HH
#define TABASOC_HH
#include "lista.hh"
class TabAsoc: public ITabAsoc
{
private:
  lista klucze;
  lista wartosci;
public:
  int search(std::string);
  void insert(std::string, int);
};

#endif

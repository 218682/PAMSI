#ifndef TABASOC_HH
#define TABASOC_HH
#include "lista2s.hh"
#include "itabasoc.hh"
#include <string>
class TabAsoc: public ITabAsoc{
private:
  lista2s<std::string> haslo;
  lista2s<int> wartosci;
public:
  int search(std::string);
  void insert(std::string, int);
};

#endif

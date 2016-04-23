#ifndef TABASOC_HH
#define TABASOC_HH
#include "lista2s.hh"
#include "lista.hh"
#include "itabasoc.hh"
#include <string>
class TabAsoc: public ITabAsoc{
protected:
  //lista2s<std::string> haslo;
  lista<std::string> *haslo;
  //lista2s<int> wartosci;
  lista<int> *wartosci;
public:
  TabAsoc(){haslo=new lista<std::string>; wartosci= new lista<int>;}
  int search(std::string);
  void insert(std::string, int);
};

#endif

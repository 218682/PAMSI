#ifndef TABASOC_HH
#define TABASOC_HH
#include "lista2s.hh"
#include "lista.hh"
#include "itabasoc.hh"
#include <string>
class TabAsoc: public ITabAsoc{
private:
  lista<std::string> haslo;
  //lista2s<int> wartosci;
  lista<int> wartosci;
public:
  TabAsoc(){std::cout<<"konstruktor TabAsoc"<<std::endl;}
  int search(std::string);
  void insert(std::string, int);
};

#endif

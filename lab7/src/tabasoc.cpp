#include "tabasoc.hh"
#include <iostream>
int TabAsoc::search(std::string klucz)
{
  int pom=-1;
  std::cout<<"szukam "<<haslo.size()<<std::endl;
  std::cout<<"szukam "<<wartosci.size()<<std::endl;
  pom=haslo.find(klucz);
  std::cout<<"hellow3"<<std::endl; 
  return wartosci.get(pom);
  
  
  /*for(int i=0; i<haslo.size() && haslo.get(i)!=klucz; i++)
    {
      pom=wartosci.get(i);
    }
    return pom;*/
}
void TabAsoc::insert(std::string wyraz, int wartosc)
{
  std::cout<<"dodaje "<<haslo.size()<<std::endl;
  this->haslo.add(wyraz);
  this->wartosci.add(wartosc);
  std::cout<<"dodaje "<<wartosci.size()<<std::endl;
}

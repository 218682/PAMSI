#include "tabasoc.hh"

int TabAsoc::search(std::string klucz)
{
  int pom=-1;
  pom=klucz.find(klucz);
  return wartosci.get(pom);
  
  /*
  for(int i=0; i<klucze.size() && klucze.get(i)!=klucz; i++)
    {
      pom=wartosci.get(i);
    }
    return pom;*/
}
void TabAsoc::insert(std::string wyraz, int wartosc)
{
  klucze.add(wyraz);
  wartosci.add(wartosc);
}

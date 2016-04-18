#include "tabasoc.hh"
int TabAsoc::search(std::string klucz)
{
  int pom=-1;
  /*//gdy lista posiada metody odnajdujace element i zwraca ich indeks
  //zwlaszcza przydatne gdy dostep do zadanych elementow nie jest staly
  std::cout<<"szukam "<<haslo.size()<<std::endl;
  std::cout<<"szukam "<<wartosci.size()<<std::endl;
  pom=haslo.find(klucz);
  std::cout<<"hellow3"<<std::endl; 
  return wartosci.get(pom);
  */
  //gdy lista nie ma metod szukajacych i zwracajacych indeks szukanego elementu
  for(int i=0; i<haslo.size() && haslo.get(i)!=klucz; i++)
    {
      pom=wartosci.get(i);
    }
    return pom;
}
void TabAsoc::insert(std::string wyraz, int wartosc)
{
  std::cout<<"dodaje "<<haslo.size()<<std::endl;
  this->haslo.add(wyraz);
  this->wartosci.add(wartosc);
  std::cout<<"dodaje "<<wartosci.size()<<std::endl;
}

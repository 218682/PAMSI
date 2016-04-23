#include "tabasoc.hh"
#include <iostream>
int TabAsoc::search(std::string klucz)
{
  /*
  //gdy lista posiada metody odnajdujace element i zwraca ich indeks
  //zwlaszcza przydatne gdy dostep do zadanych elementow nie jest staly
  std::cout<<"szukam "<<haslo.size()<<std::endl;
  std::cout<<"szukam "<<wartosci.size()<<std::endl;
  pom=haslo.find(klucz); 
  return wartosci.get(pom);
  */
  
  //gdy lista nie ma metod szukajacych i zwracajacych indeks szukanego elementu
  for(int i=0; i<haslo->size(); i++)
    {
      if(haslo->get(i)==klucz)
      return wartosci->get(i);
    }
    return -1;
}
void TabAsoc::insert(std::string wyraz, int wartosc)
{
  haslo->add(wyraz);
  wartosci->add(wartosc);

}

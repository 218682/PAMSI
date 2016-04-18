#ifndef DRZEWO_HH
#define DRZEWO_HH
#include "idrzewo.hh"
#include "tablica.hh"
//template <class typ>
class Drzewo: public iDrzewo//<typ>{
{
private:
  tablica tab(1); //tablica o poczatkowym rozmiarze 1
  int rozmiar;
public:
  Drzewo(){rozmiar=0;}
  //void add(typ);
  //typ get(int);
  void add(int);
  void get(int);
};

void Drzewo::add(int x)
{
  if (rozmiar==0)
    tab.push(x);
  else
    {
      if(x<tab.get()
	{
	  
	}
}
#endif

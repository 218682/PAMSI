#ifndef TABLICAZHASZOWANIEM_HH
#define TABLICAZHASZOWANIEM_HH
#include "itabzhasz.hh"
class TabZHasz: public ITabZHasz
{
private:
  //! ilość kontenerow z danymi
  int ilosc;
  //! zbior tablic asocjacyjnych z odpowiednio ulokowanymi danymi
  TabAsoc *tab= new TabAsoc[ilosc];
  TabAsoc kluczowanie (std::string);
public:
  TabAsoc operator [] (std::string);
  //! konstruktor bezparametryczny, zaklada ze liczba kontenerow = 10
  TabZHasz(){ilosc=10;}
  //! konstruktor z jednym parametrem okreslajacym ilosc kontenerow z danymi
  TabZHasz(int ile){ilosc=ile;}
};

#endif

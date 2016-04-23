#ifndef TABLICAZHASZOWANIEM_HH
#define TABLICAZHASZOWANIEM_HH
#include "itabzhasz.hh"
class TabZHasz: public ITabZHasz
{
private:
  //! ilość kontenerow z danymi
  int ilosc;
  
  //! zbior tablic asocjacyjnych z odpowiednio ulokowanymi danymi
  TabAsoc *tab;

  //!metoda ktora przypisuje do cagu znakow odpowiednia liczbe
  int kluczowanie (std::string);
  
public: 
  //! konstruktor bezparametryczny, zaklada ze liczba kontenerow = 10
  TabZHasz(){ilosc=10; tab= new TabAsoc[ilosc];}
  //! konstruktor z jednym parametrem okreslajacym ilosc kontenerow z danymi
  TabZHasz(int ile){ilosc=ile; tab= new TabAsoc[ilosc];}
  
  TabAsoc & operator [] (std::string);
};

#endif

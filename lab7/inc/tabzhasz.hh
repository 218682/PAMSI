#ifndef TABLICAZHASZOWANIEM_HH
#define TABLICAZHASZOWANIEM_HH
#include "itabzhasz.hh"
class TabZHasz: public ITabZHasz
{
private:
  //! ilość kontenerow z danymi
  int ilosc=10;
  //! zbior tablic asocjacyjnych z odpowiednio ulokowanymi danymi
  TabAsoc *tab= new TabAsoc[ilosc];
  //TabAsoc tab[ilosc];
  //!metoda ktora przypisuje do cagu znakow odpowiednia liczbe
  int kluczowanie (std::string);
public:
  
  //! konstruktor bezparametryczny, zaklada ze liczba kontenerow = 10
  TabZHasz(){ilosc=10; std::cout<<"konstruktor TabZHasz"<<std::endl;}
  ~TabZHasz(){ilosc=10; std::cout<<"destruktor TabZHasz"<<std::endl;}
  //! konstruktor z jednym parametrem okreslajacym ilosc kontenerow z danymi
  TabZHasz(int ile){ilosc=ile;}
  
  TabAsoc operator [] (std::string);
};

#endif

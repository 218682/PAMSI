#ifndef TABLICAZHASZOWANIEM_HH
#define TABLICAZHASZOWANIEM_HH
#include "lista.hh"
#include "TabAsoc"
class TabZHasz: public ITabZHasz
{
private:
  //! ilość kontenerow z danymi
  int n;
  //! zbior tablic asocjacyjnych z odpowiednio ulokowanymi danymi
  TabAsoc tab[n];
  TabAsoc kluczowanie (std::string);
public:
  TabAsoc operator [] (std::string);
  //! konstruktor bezparametryczny, zaklada ze liczba kontenerow = 10
  TabZHasz(){n=10;}
  //! konstruktor z jednym parametrem okreslajacym ilosc kontenerow z danymi
  TabZHasz(int ile){n=ile;}
};

#endif

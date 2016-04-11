#ifndef TABLICAZHASZOWANIEM_HH
#define TABLICAZHASZOWANIEM_HH
#include "lista.hh"
#include "TabAsoc"
class TabZHasz: public ITabZHasz
{
private:
  int n; //!ilość kontenerow z danymi
  TabAsoc tab[n];
public:
  int kluczowanie (std::string);
  int operator [] (std::string);
};

#endif

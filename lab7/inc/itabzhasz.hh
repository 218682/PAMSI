//! /file /brief plik zawiera interfejs wykorzystywany do tablicy z haszowaniem
#ifndef INTABLICAZHASZOWANIEM_HH
#define INTABLICAZHASZOWANIEM_HH
#include "tabasoc.hh"
class ITabZHasz
{
public:
  //!przeciazenie operatora przypisuje ciagowi znakow liczbe
  virtual TabAsoc operator[] (std::string)=0;
};

#endif

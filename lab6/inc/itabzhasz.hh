//! /file /brief plik zawiera interfejs wykorzystywany do tablicy z haszowaniem
#ifndef INTABLICAZHASZOWANIEM_HH
#define INTABLICAZHASZOWANIEM_HH
#include "tabasoc.hh"
class ITabZHasz
{
public:
  //!metoda ktora przypisuje kluczowi odpowiedni indeks po ktorym nastepuje pozniejsze przeszukiwanie 
  virtual TabAsoc kluczowanie (std::string)=0;
  //!przeciazenie operatora
  virtual TabAsoc operator[] (std::string)=0;

};

#endif

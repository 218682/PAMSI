/*!
\file
\brief plik zawiera definicje klasy kolejka
*/
#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "tablica.hh"
#include "inkolejka.hh"
/*!
  \brief Klasa kolejka - jeden z abstrakcyjnych typow danych
  Klasa ma w swoim skladzie metody sluzace do zarzadzania kolejka, wszytskie operacje poza dodaniem nowej danej do pustej kolejki zglaszaja wyjatek*/
class kolejka: private tablica<int>, public inKolejka{
public:
  kolejka();
  void remove();
  void add(int);
  int first();
  int last(); 
};

#endif

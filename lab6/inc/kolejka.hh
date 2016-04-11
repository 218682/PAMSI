/*!
\file
\brief plik zawiera definicje klasy kolejka
*/
#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "tablica.hh"
#include "inkolejka.hh"
class kolejka: private tablica, public inKolejka{
  /*!
\brief Klasa kolejka - jeden z abstrakcyjnych typow danych

Klasa ma w swoim skladzie metody sluzace do zarzadzania kolejka, wszytskie operacje poza dodaniem nowej danej do pustej kolejki zglaszaja wyjatek*/
public:
  kolejka();
  void remove(); //! \brief usuwa pierwsza dana w kolejce
  void add(int); //! \brief dodaje dana na koniec kolejki
  int first(); //! \brief zwraca wartosc pierwszej danej
  int last();  //! \brief zwraca wartosc ostatniej danej
};

#endif

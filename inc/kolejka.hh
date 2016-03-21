/*!
\file
\brief plik zawiera definicje klasy kolejka
*/
#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "tablica.hh"

class kolejka: public tablica{
  /*!
\brief Klasa kolejka - jeden z abstrakcyjnych typow danych

Klasa ma w swoim skladzie metody sluzace do zarzadzania kolejka, wszytskie operacje poza dodaniem nowej danej do pustej kolejki zglaszaja wyjatek*/
public:
  kolejka();
  void remove(); //! \brief usuwa pierwsza dana w kolejce
  void add(int); //! \brief dodaje dana na koniec kolejki
  int get (int); //! \brief zwraca wartosc, mozliwe jest tylko sprawdzenie ostatniej i pierwszej danej w kolejce, by sprawdzic ostatnia, jako argument podaj ind() lub skorzystaj z metod first() i last()
  int first(); //! \brief zwraca wartosc pierwszej danej
  int last();  //! \brief zwraca wartosc ostatniej danej
};

#endif

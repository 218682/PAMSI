/*!
\file
\brief plik zawiera testowa klase lista
*/
#ifndef LISTATEST_HH
#define LISTATEST_HH
#include "tablicatest.hh"
class listatest: public tablicatest, public::iRunnable{
public:
  listatest();
  void run();
  void remove(int); //! \brief usuwa dana o podanym indeksie, a nastepnie przestawia zmienne
  void remove();  //! \brief usuwa ostatnia dana w kolejce
  void add(int, int); //! \brief dodaje dana na miejscu o podanym indeksie, jezeli nie moze byc tam wstawiona zglosi wyjatek, gdy miejsce jest zajete przestawia dane
  void add(int); //! \brief dodaje dana na koniec listy
  int get (int); //! \brief zwraca wartosc na podanym indeksie, jezeli nie moze tego zrobic, zwroci wyjatek
};

#endif

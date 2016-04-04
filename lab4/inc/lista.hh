/*!
\file
\brief plik zawiera klase lista
*/
#ifndef LISTA_HH
#define LISTA_HH
#include "tablica.hh"
#include "inlista.hh"
class lista: public tablica, public inLista{
public:
  lista();
  void remove(int); //! \brief usuwa dana o podanym indeksie, a nastepnie przestawia zmienne
  void remove();  //! \brief usuwa ostatnia dana w kolejce
  void add(int, int); //! \brief dodaje dana na miejscu o podanym indeksie, jezeli nie moze byc tam wstawiona zglosi wyjatek, gdy miejsce jest zajete przestawia dane
  void add(int); //! \brief dodaje dana na koniec listy
  int get (int); //! \brief zwraca wartosc na podanym indeksie, jezeli nie moze tego zrobic, zwroci wyjatek
};

#endif

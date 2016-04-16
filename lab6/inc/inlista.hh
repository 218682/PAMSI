/*!
\file
\brief plik zawiera interfejs uzywany w listach
*/
#ifndef INLISTA_HH
#define INLISTA_HH
class inLista{
public:
  //! \brief usuwa dana o podanym indeksie, a nastepnie przestawia zmienne
  virtual void remove(int)=0;
  //! \brief usuwa ostatnia dana w kolejce
  virtual void remove()=0;
  //! \brief dodaje dana na miejscu o podanym indeksie, jezeli nie moze byc tam wstawiona zglosi wyjatek, gdy miejsce jest zajete przestawia dane
  virtual void add(int, int)=0;
  //! \brief dodaje dana na koniec listy
  virtual void add(int)=0;
  //! \brief zwraca wartosc na podanym indeksie, jezeli nie moze tego zrobic, zwroci wyjatek
  virtual int get (int)=0;
  virtual bool isEmpty();
};
#endif

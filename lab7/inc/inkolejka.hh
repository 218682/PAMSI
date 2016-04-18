#ifndef INKOLEJKA_HH
#define INKOLEJKA_HH
class inKolejka{
public:
  //! \brief usuwa pierwsza dana w kolejce
  virtual void remove()=0;
  //! \brief dodaje dana na koniec kolejki
  virtual void add(int)=0;
  //! \brief zwraca wartosc pierwszej danej
  virtual int last ()=0;
  //! \brief zwraca wartosc ostatniej danej
  virtual int first ()=0;
};
#endif

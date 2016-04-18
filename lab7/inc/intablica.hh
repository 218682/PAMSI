/*!
\file
\brief plik zawiera interfejs do klasy tablica
*/
#ifndef INTABLICA_HH
#define INTABLICA_HH
//! class inTablica- interfejs do tablicy dynamicznie realokujacej miejsce
class inTablica{
public:
  //! \brief metoda dodajaca dana na ostatnie wolne miejsce tablicy
  virtual void push(int)=0;
  
  //! \brief przypisuje podana dana na konkretnym miejscu tablicy, pierwszym parametrem jest dana, a drugim miejsce na ktorym ma byc zapisana
  virtual void przypisz(int, int)=0;
  
  //! \brief usuwa ostatni element tablicy
  virtual void zdejmij(int)=0;

  //! \brief metoda zwraca ilosc zaalokowanego miejsca
  virtual int size()=0;
  
  //! \brief metoda zwraca ideks na ktorym jest ostatnia dana w kontenerze
  virtual int ind()=0;

  //! \brief metoda sprawdza czy kontener jest pusty
  virtual bool isEmpty()=0;
};
#endif

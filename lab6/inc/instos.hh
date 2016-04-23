#ifndef INSTOS_HH
#define INSTOS_HH
class inStos{
public:
  
  //! \brief metoda remove()- nie przyjmuje wartosci, usuwa najwyzej polozona na stosie dana
  virtual void remove()=0;
  
  //! \brief metoda add(int)- przyjmuje wartosc int, bedaca nowa liczba do dodania na szczyt stosu
  virtual void add(int)=0;

  //! \brief metoda get bez parametru- zwraca wartosc ostatniej liczby na stosie
  virtual int get ()=0;
};
#endif

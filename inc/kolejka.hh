#ifndef KOLEJKA_HH
#define KOLEJKA_HH
class kolejka{
protected:
  int rozmiar;
public:
  virtual void wyswietl()=0;
  virtual void push(int dana)=0;
};
#endif

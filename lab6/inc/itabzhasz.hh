#ifndef INTABLICAZHASZOWANIEM_HH
#define INTABLICAZHASZOWANIEM_HH
class ITabZHasz
{
public:
  //metoda ktora przypisuje kluczowi odpowiedni indeks po ktorym nastepuje pozniejsze przeszukiwanie 
  virtual int kluczowanie (std::string)=0;
  //przeciazenie operatora
  virtual int operator[] (std::string)=0;

};

#endif

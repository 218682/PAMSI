//! /file /brief plik zawiera interfejs wykorzystywany do tablicy asocjacyjnej
#ifndef INTABASOC_HH
#define INTABASOC_HH
class ITabAsoc
{
public:
  //! szukanie wartosci dla frazy
  virtual int search(std::string)=0;
  //! wstawienie wyrazu, o przypisanej pewnej wartosci calkowitej
  virtual void insert(std::string, int)=0;

};
#endif

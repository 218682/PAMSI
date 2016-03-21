/*!
\file
\brief plik zawiera definicje klasy wirtualnej atp2 z ktorej skladaja sie
zaimplementowane abstrakcyjne typy danych
*/
#ifndef ATP2_HH
#define ATP2_HH
#include "atp.hh"
class atp2: public atp{
protected:
  int rozmiar;
  int ile_elem;
public:
  class empty{};
  class bad_index{};
  int size() {return rozmiar;} //! \brief metoda zwraca ilosc zaalokowanego miejsca
  int ind(){return ile_elem-1;} //! \brief metoda zwraca ideks na ktorym jest ostatnia dana w kontenerze 
  bool isEmpty() {if(ile_elem!=0) return false; else return true;} //! \brief metoda sprawdza czy kontener jest pusty 
};
#endif

/*!
\file
\brief plik zawiera klase tablica
*/
#ifndef TABLICA_HH
#define TABLICA_HH
#include "intablica.hh"

/*!
\brief Klasa tablica
Klasa ma w swoim skladzie metody sluzace do zarzadzania tablica dynamiczna uzywane przez inne typy danych, moze byc tez uzywana samodzielnie*/
class tablica: public inTablica{
private:
  int *tab=new int[rozmiar];
  void zwieksz(int);//! \brief zwieksza ilosc zaalokowanej pamieci
  int rozmiar;
public:
  int ile_elem; //ToDo: przerobic klasy tak by ile_elem i zmniejsz() byly prywatne
  //! \brief zmniejsza ilosc zaalokowanej pamieci
  void zmniejsz();
  //! \brief konstruktor bezparametryczny, tworzy tablice o 10 polach
  tablica() {rozmiar=10; ile_elem=0;}
  tablica(int n) {rozmiar=n; ile_elem=0;} //! \brief konstruktor, tworzy tablice o podanej przez urzytkownika ilosci pol
  //void podaj_roz(int M){ this->rozmiar=M;}
  int wyswietl(int n) {return tab[n];}
  //! \brief metoda dodajaca dana na ostatnie wolne miejsce tablicy
  void push(int);
  //! \brief przypisuje podana dana na konkretnym miejscu tablicy, pierwszym parametrem jest dana, a drugim miejsce na ktorym ma byc zapisana
  void przypisz(int, int); 
   //! \brief usuwa ostatni element tablicy
  void zdejmij(int);
  //! \brief sortowanie bombelkowe
  void bubblesort(); 
  //! \brief metoda zwraca ilosc zaalokowanego miejsca
  int size() {return rozmiar;} 
  //! \brief metoda zwraca ideks na ktorym jest ostatnia dana w kontenerze
  int ind(){return ile_elem-1;} 
  //! \brief metoda sprawdza czy kontener jest pusty
  bool isEmpty() {if(ile_elem!=0) return false; else return true;}
  //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi proba odzialywania na dane ktorych kontener nie posiada
  class empty{};
   //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi odwolanie do danych o zlym indeksie
  class bad_index{};
};
#endif

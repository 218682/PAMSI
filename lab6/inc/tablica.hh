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
  //! \brief konstruktor, tworzy tablice o podanej przez urzytkownika ilosci pol
  tablica(int n) {rozmiar=n; ile_elem=0;} 
  //void podaj_roz(int M){ this->rozmiar=M;}
  int wyswietl(int n) {return tab[n];}
  void push(int);
  void przypisz(int, int); 
  void zdejmij(int);
  //! \brief sortowanie bombelkowe
  void bubblesort(); 
  int size() {return rozmiar;} 
  int ind(){return ile_elem-1;} 
  bool isEmpty() {if(ile_elem!=0) return false; else return true;}
  //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi proba odzialywania na dane ktorych kontener nie posiada
  class empty{};
   //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi odwolanie do danych o zlym indeksie
  class bad_index{};
};
#endif

/*!
\file
\brief plik zawiera definicje klasy stos
*/
#ifndef STOS_HH
#define STOS_HH
#include "tablica.hh"
class stos: public tablica{
/*!
\brief Klasa stos - jeden z abstrakcyjnych typow danych

Klasa ma w swoim skladzie metody sluzace do zarzadzania stosem, mozliwe jest jedynie manipulowanie najwyzej polozonym elementem na stosie, inne operacje poza dodaniem nowej danej do niego na pustym stosie zglaszaja wyjatek*/
public:
  stos(); //! \brief konstruktor bezparametryczny 
  void remove(); //! \brief metoda remove()- nie przyjmuje wartosci, usuwa najwyzej polozona na stosie dana
  void add(int); //! \brief metoda add(int)- przyjmuje wartosc int, bedaca nowa liczba do dodania na szczyt stosu
  int get (int=0); //! \brief metoda get z parametrem int nie powinna byc uzywana, mozliwe jest uzycie jedynie zerowego indeklu, wszystkie inne zwracaja wyjatek,bezpieczniej jest uzywac get()
  int get (); //! \brief metoda get bez parametru- zwraca wartosc ostatniej liczby na stosie
};

#endif

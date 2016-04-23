/*!
\file
\brief plik zawiera definicje klasy stos
*/
#ifndef STOS_HH
#define STOS_HH
#include "tablica.hh"
#include "instos.hh"

/*!
\brief Klasa stos - jeden z abstrakcyjnych typow danych

Klasa ma w swoim skladzie metody sluzace do zarzadzania stosem, mozliwe jest jedynie manipulowanie najwyzej polozonym elementem na stosie, inne operacje poza dodaniem nowej danej do niego na pustym stosie zglaszaja wyjatek*/

class stos: private tablica<int>, public inStos{
public:
  //! \brief konstruktor bezparametryczny 
  stos(); 
  void remove(); 
  void add(int); 
  int get (); 
};

#endif

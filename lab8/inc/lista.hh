/*!
\file
\brief plik zawiera klase lista, ktora jest oparta na jednowymiarowej tablicy dynamicznej
*/
#ifndef LISTA_HH
#define LISTA_HH
#include "tablica.hh"
#include "inlista.hh"
template <class typ>
class lista: public inLista<typ>{
protected:
  tablica<typ> *Tab;
public:
  //! konstruktor bezparametryczny
  lista(){Tab=new tablica<typ>;};
  void remove(int);
  void remove();
  void add(typ, int);
  void add(typ);
  typ get (int);
  bool isEmpty();
  int size();


    //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi proba odzialywania na dane ktorych kontener nie posiada
  class empty{};
  
   //! \brief obiekt zwracany podczas wystapienia wyjatku wystepujacego gdy nastapi odwolanie do danych o zlym indeksie
  class bad_index{};
};

//====================================================================//
template <class typ>
void lista<typ>::add(typ x)
{
    Tab->push (x);
}
//====================================================================//
template <class typ>
void lista<typ>::add(typ x, int index)
{
  if(index<Tab->ind())
    Tab->przypisz (x, index);
  else
    throw bad_index();
}
//====================================================================//
template <class typ>
void lista<typ>::remove(int i)
{
  if(Tab->isEmpty()==true)
    throw empty();
  else if(i>Tab->ind())
    throw bad_index();
  else
    Tab->zdejmij(i);
}
//====================================================================//
template <class typ>
void lista<typ>::remove()
{
  if(Tab->isEmpty()==true)
    throw empty();
  else
    Tab->zdejmij(Tab->ind());
}
//====================================================================//
template <class typ>
typ lista<typ>::get(int i)
{
  if(Tab->isEmpty()==true)
    throw empty();
  else if (i>Tab->ind())
    throw bad_index();
  else
    return Tab->get(i); 
}
//====================================================================//
template <class typ>
bool lista<typ>::isEmpty()
{
  return Tab->isEmpty();
}
//=============================================================//
template <class typ>
int lista<typ>::size()
{
  return Tab->ind()+1;
}
//=============================================================//
#endif

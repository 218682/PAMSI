/*!
\file
\brief plik zawiera szablon klasy kolejka, ktora jest zbudowana jak klasyczna lista
*/
#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "inkolejka.hh"
#include "strukturalistyT.hh"
#include <iostream>
template <class typ> class kolejka: public inKolejka<typ>
{
protected:
  StrListyT <typ> *FIRST;
  StrListyT <typ> *LAST;
  int rozmiar=0;
public:
  //! konstruktor bezparametryczny
  kolejka(){FIRST=NULL; LAST=NULL; rozmiar=0;};
  void dequeue();
  void enqueue(typ);
  typ front ();
  typ back();
  //typ* getp (int);
  bool isEmpty();
  int size();
  int find(typ);
  class bad_index{};
  class empty{};
};
//-------------------------------------------------//
template <class typ>
void kolejka<typ>::enqueue(typ x)  
{
  StrListyT <typ> *NEW  = new StrListyT<typ>;
  NEW->dana=x;
  NEW->NEXT = NULL;
  if(rozmiar==0)
    {
      FIRST=NEW;
      LAST=NEW;
    }
  else
    {
      StrListyT<typ> *tmp = LAST;
      tmp->NEXT = NEW;
      LAST=NEW;
    }
  this->rozmiar++;
}
//-------------------------------------------------//
template <class typ>
void kolejka<typ>::dequeue()
{
  if(rozmiar==0)
    throw empty();
  else
    {
      StrListyT <typ> *tmp = FIRST;
      delete FIRST;  //zwalnianie pamieci
      FIRST=tmp->NEXT;       
      /*for(int j=0; tmp && j+1!=rozmiar; j++)
      tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      delete tmp->NEXT;             //zwalnianie pamieci
      tmp->NEXT=NULL;*/
      this->rozmiar--;
    }
}
//-------------------------------------------------//
template <class typ>
typ kolejka<typ>::front()
{
  if(rozmiar==0)
    throw empty();
  else
    return FIRST->dana;
}
//-------------------------------------------------//
template <class typ>
typ kolejka<typ>::back()
{
  if(rozmiar==0)
    throw empty();
  else
    return LAST->dana;
}
//-------------------------------------------------//
/*
template <class typ>
typ* lista2s<typ>::getp(int i)
{
  if (i>rozmiar || i<0)
    throw bad_index();
  else
    {
      StrListyT <typ> *tmp = FIRST;
      for(int j=0; j!=i; j++)
	tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      return &(tmp->dana);
    }
    }*/
//-------------------------------------------------//
template <class typ>
bool kolejka<typ>::isEmpty()
{
  if(rozmiar==0)
    return true;
  else return false;
}
//-------------------------------------------------//
template <class typ>
int kolejka<typ>::size()
{
  return rozmiar;
}
//-------------------------------------------------//
template <class typ>
int kolejka<typ>::find(typ x)
{
  if(rozmiar==0)
    throw empty();
  else
    {
      int j=0;
      StrListyT <typ> *tmp = FIRST;
      for(j=0; tmp->dana!=x && tmp->NEXT!=NULL; j++)
	tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      if (tmp!=NULL)
	return j;
      else
	throw empty();
    }
}

#endif

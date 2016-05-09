/*!
\file
\brief plik zawiera szablon klasy lista2s, ktora jest zbudowana jak klasyczna lista
*/
#ifndef LISTA2s_HH
#define LISTA2s_HH
#include "inlista.hh"
#include "strukturalistyT.hh"
template <class typ> class lista2s: public inLista<typ>
{
protected:
  StrListyT <typ> *FIRST;
  int rozmiar=0;
public:
  //! konstruktor bezparametryczny
  lista2s(){FIRST=NULL; rozmiar=0;};
  void remove(int);
  void remove();
  void add(typ , int);
  void add(typ);
  typ get (int);
  //typ* getp (int);
  bool isEmpty();
  int size();
  int find(typ);
  class bad_index{};
  class empty{};
};
//-------------------------------------------------//
//template <class typ>
//lista2s<typ>::lista2s<typ>(){FIRST=NULL; rozmiar=0;}
//-------------------------------------------------//
template <class typ>
void lista2s<typ>::add(typ x)  
{
  StrListyT <typ> *NEW  = new StrListyT<typ>;
  NEW->dana=x;
  NEW->NEXT=FIRST;
  FIRST=NEW;
  this->rozmiar++;
  }
//-------------------------------------------------//
template <class typ>
void lista2s<typ>::add(typ x, int i)
{
  if(i==rozmiar)
    add(x);
  else if(i<rozmiar)
    {
      StrListyT <typ> *NEW=new StrListyT <typ>;
      StrListyT <typ> *tmp= FIRST;
      NEW=FIRST;
      for(int j=0; j+1!=i;j++)
	tmp=tmp->NEXT;
      NEW->dana=x;
      NEW->NEXT=tmp;
      tmp->NEXT=NEW;
      this->rozmiar++;
    }
  else
    throw bad_index();
}
//-------------------------------------------------//
template <class typ>
void lista2s<typ>::remove(int i)
{
  if(i>rozmiar)
    throw bad_index();
  else
    {
      StrListyT <typ> *tmp = FIRST;
      if(i==0)
	{
	  FIRST=tmp->NEXT;
	  //delete tmp;
	}
      else if(i>=1)
	{
	  for(int j=0; tmp && j+1!=i; j++) 
	    tmp = tmp->NEXT;          //przeskakiwanie do odpowiedniego elementu
	  if (tmp->NEXT->NEXT==NULL)
	    {
	      //delete tmp->NEXT;
	      tmp->NEXT=NULL;
	    }
	  else
	    {
	      // delete tmp->NEXT; //zwalnianie pamieci
	      tmp->NEXT=tmp->NEXT->NEXT;
	    }
	}
     this->rozmiar--;
    }
}
//-------------------------------------------------//
template <class typ>
void lista2s<typ>::remove()
{
  
  if(rozmiar==0)
    throw empty();
  else
    {
      StrListyT <typ> *tmp = FIRST;
      FIRST=tmp->NEXT;
      //delete tmp;         //zwalnianie pamieci
      /*for(int j=0; tmp && j+1!=rozmiar; j++)
      tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      delete tmp->NEXT;             //zwalnianie pamieci
      tmp->NEXT=NULL;*/
      this->rozmiar--;
    }
}
//-------------------------------------------------//
template <class typ>
typ lista2s<typ>::get(int i)
{
  if(rozmiar==0)
    throw empty();
  else if (i>rozmiar || i<0)
    throw bad_index();
  else
    {
      StrListyT <typ> *tmp = FIRST;
      for(int j=0; j!=i; j++)
	tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      return tmp->dana;
    }
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
bool lista2s<typ>::isEmpty()
{
  if(rozmiar==0)
    return true;
  else return false;
}
//-------------------------------------------------//
template <class typ>
int lista2s<typ>::size()
{
  return rozmiar;
}
//-------------------------------------------------//
template <class typ>
int lista2s<typ>::find(typ x)
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

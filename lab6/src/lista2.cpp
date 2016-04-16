#include "lista2.hh"

lista2::lista2(){FIRST=NULL; rozmiar=0;}

void lista2::add(int x)
{
  StrListy *NEW  = new StrListy;
  NEW->dana=x;
  if(FIRST==NULL)
    {
      FIRST=NEW;
    }
  else
    {
      StrListy *tmp = FIRST;
      while (tmp->NEXT) //przeskakiwanie do ostatniego elementu
	{
	  tmp=tmp->NEXT;
	}
      tmp->NEXT = NEW;
      NEW->NEXT = NULL;
      rozmiar++;
    }
}

//dobra i prosta metoda ale bardziej nadaje sie do stosu niz listy
/*void lista2::add(int x)  
{
  StrListy *NEW  = new StrListy;
  NEW->dana=x;
  NEW->NEXT= FIRST;
  FIRST=NEW;
  rozmiar++;
  }*/
void lista2::add(int x, int index)
{
  if(index==rozmiar)
    add(x);
  else if(index<rozmiar)
    {
      StrListy *NEW = new StrListy;
      StrListy *tmp = FIRST;
      NEW=FIRST;
      for(int j=0; j+1!=index; j++)//przeskakiwanie do odpowiedniego elementu
	tmp = tmp->NEXT;
      NEW->dana=x;
      NEW->NEXT=tmp;
      tmp->NEXT=NEW;
      rozmiar++;
    }
  else
    throw bad_index();
}
void lista2::remove(int i)
{
  if(rozmiar==0)
    throw empty();
  else if(i>rozmiar)
    throw bad_index();
  else
    {
      StrListy *tmp = FIRST;
      if(i==0)
	{
	  FIRST=tmp->NEXT;
	}
      else if(i>=1)
	{
	  for(int j=0; tmp && j+1!=i; j++)
	    tmp = tmp->NEXT;          //przeskakiwanie do odpowiedniego elementu
	  if (tmp->NEXT->NEXT==NULL)
	    tmp->NEXT=NULL;
	  else
	    tmp->NEXT=tmp->NEXT->NEXT;
	}
      rozmiar--;
    }

}
void lista2::remove()
{
  if(rozmiar==0)
    throw empty();
  else
    {
      StrListy *tmp = FIRST;
      for(int j=0; tmp && j+1!=rozmiar; j++)
	tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      tmp->NEXT=NULL;
      rozmiar--;
    }
}
int lista2::get(int i)
{
  if(rozmiar==0)
    throw empty();
  else if (i>rozmiar)
    throw bad_index();
  else
    {
      StrListy *tmp = FIRST;
      for(int j=0; j!=i; j++)
	tmp = tmp->NEXT;              //przeskakiwanie do odpowiedniego elementu
      return tmp->dana;
    }
}
bool lista2::isEmpty()
{
  if(rozmiar==0)
    return true;
  else return false;
}

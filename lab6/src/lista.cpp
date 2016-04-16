#include "lista.hh"
void lista::add(int x)
{
    push (x);
}
void lista::add(int x, int index)
{
  if(index<=ile_elem)
    przypisz (x, index);
  else
    throw bad_index();
}
void lista::remove(int i)
{
  if(tablica::isEmpty()==true)
    throw empty();
  else if(i>ind())
    throw bad_index();
  else
    zdejmij(i);
}
void lista::remove()
{
  if(tablica::isEmpty()==true)
    throw empty();
  else
    zdejmij(ind());
}
int lista::get(int i)
{
  if(tablica::isEmpty()==true)
    throw empty();
  else if (i>ind())
    throw bad_index();
  else
    return wyswietl(i); 
}

bool lista::isEmpty()
{
  return tablica::isEmpty();
}

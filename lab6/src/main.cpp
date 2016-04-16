#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include "kolejka.hh"
#include "stos.hh"
#include "stoper.hh"
#include "lista.hh"
#include "sort.hh"
#include "tabasoc.hh"
#include "listatest.hh"
#include "lista2.hh"
int main (void)
{
  int i=0;
  listatest l;
  lista2 rozmiary;
  for(int j=0; j<10; j++)
    {
      rozmiary.add(10);
      rozmiary.add(100);
      rozmiary.add(1000);
      rozmiary.add(1000000);
      rozmiary.add(100000000);
      /*-----------------------*/
      while(rozmiary.isEmpty()==false)
	{
	  std::cout<<rozmiary.get(i)<<std::endl;
	  l.run(rozmiary.get(i));	
	  rozmiary.remove(i);
	}
    }
  return 0;
}

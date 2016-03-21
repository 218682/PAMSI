#include<iostream>
#include<cstring>
#include "kolejka.hh"
#include "stos.hh"
#include "stoper.hh"
#include "lista.hh"
int main (void)
{
  //  int N=10;
  //int ile_el=10;
  lista list;
  list.add(2);
  list.add(0);
  list.add(1);
  std::cout<<list.get(0)<<std::endl;
  std::cout<<list.get(1)<<std::endl;
  std::cout<<list.get(2)<<std::endl;
  list.remove();
  list.remove(0);
  list.remove();
  //stoper s;
  //std::string dane="pomiary2";
  /* for(int j=0; j<10; j++)
    {
      for(ile_el=10; ile_el<1000001; ile_el=ile_el*10)
	{
	  tablica t;
	  s.start();
	  for(int i=0;i<ile_el; i++)
	    t.push(i);
	  s.stop();
	  //std::cout<<s.getTime()<<std::endl;
	  //  s.getElapsedTime();
	   s.dumpToFile(dane);
	}
	}*/
  return 0;
}

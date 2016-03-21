#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include "kolejka.hh"
#include "stos.hh"
#include "stoper.hh"
#include "lista.hh"
int main (void)
{
  //  int N=10;
  int ile_el=100000000;
  srand(time(NULL));
  lista lis;
  for(int i=0;i<ile_el; i++)
    lis.add(i);
  stoper s;
  int pom=0;
  std::string dane="pomiary3";
   for(int j=0; j<10; j++)
    {
      for(ile_el=10; ile_el<100000001; ile_el=ile_el*10)
	{
	  int losowana=(std::rand()%ile_el);
	  s.start();
	  for(int i=0; pom==losowana && i<ile_el; i++)
	    {
	      pom=lis.get(i);
	    }
	  s.stop();
	  // std::cout<<s.getTime().count()<<std::endl;
	  s.dumpToFile(dane);
	  std::cout<<losowana<<std::endl;
	}
    }

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

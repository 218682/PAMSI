#include<iostream>
#include<cstring>
#include "tablica.hh"
#include "stoper.hh"
int main (void)
{
  //  int N=10;
  int ile_el=10;

  stoper s;
  std::string dane="pomiary2";
  //  t.podaj_N(N);
  for(int j=0; j<10; j++)
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
    }
  return 0;
}

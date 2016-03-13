#include<iostream>
#include<cstring>
#include "tablica.hh"
#include "stoper.hh"
int main (void)
{
  //  int N=10;
  int ile_el=10;
  tablica t;
  stoper s;
  std::string dane="dane";
  //  t.podaj_N(N);
  for(int j; j<10; j++)
    {
      s.start();
      for(int i=0;i<ile_el; i++)
	t.push(i);
      s.stop();
      //  s.getElapsedTime();
      s.dumpToFile(dane);
    }
  return 0;
}

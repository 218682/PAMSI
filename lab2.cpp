#include<iostream>
#include "tablica.hh"
#include "stoper.hh"
int main (void)
{
  int N=10;
  int ile_el=1000000;
  tablica t;
  stoper s;
  t.podaj_N(N);
  s.start();
  for(int i=0;i<ile_el; i++)
    t.nowa_dana(i);
  s.stop();
  s.getElapsedTime("dane");
  return 0;
}

#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include "kolejka.hh"
#include "stos.hh"
#include "stoper.hh"
#include "lista.hh"
#include "sort.hh"
int main (void)
{
  int n=50;
  srand(time(NULL));
  int tab[n];
  for(int i=0; i<=n; i++)
    {
      tab[i]=rand()%50+1;
    }
  for(int i=0; i<=n; i++)
    {
      std::cout<<tab[i]<<std::endl;
    }
  bubblesort(tab,n);
  std::cout<<std::endl;
  for(int i=0; i<=n; i++)
    {
      std::cout<<tab[i]<<std::endl;
    }
  return 0;
}

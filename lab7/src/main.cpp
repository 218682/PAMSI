#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include <sstream>
#include <string>
#include "lista2s.hh"
#include "lista.hh"
#include "tabzhasztest.hh"
int main (void)
{
  // TabZHasz h;
  int i=0;
  TabZHaszTest l;
  lista2s<int> rozmiary;
  for(int j=0; j<10; j++)
    {
      std::cout<<"tutaj "<<std::endl;
      rozmiary.add(10);
      rozmiary.add(100);
      //rozmiary.add(1000);
      //rozmiary.add(1000000);
      //rozmiary.add(100000000);
      //-----------------------
      while(rozmiary.isEmpty()==false)
	{
	  std::cout<<rozmiary.get(i)<<std::endl;
	  l.run(rozmiary.get(i));
	  rozmiary.remove();
	}
      std::cout<<std::endl;
      }
  return 0;
}

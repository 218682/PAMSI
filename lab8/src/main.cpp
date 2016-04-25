#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include <sstream>
#include <string>
#include "lista2s.hh"
#include "lista.hh"
#include "drzewotest.hh"
int main (void)
{
  int i=0;
  lista2s<int> rozmiary;
  srand(time(NULL));
  for(int j=0; j<10; j++)
    {
      std::cout<<"tutaj "<<std::endl;
      rozmiary.add(10);
      rozmiary.add(100);
      rozmiary.add(1000);
      rozmiary.add(1000000);
      rozmiary.add(100000000);
      //-----------------------
      
      while(rozmiary.isEmpty()==false)
	{
	  DrzewoTest *D;
	  D=new DrzewoTest;
	  std::cout<<rozmiary.get(i)<<std::endl;
	  D->run(rozmiary.get(i));
	  rozmiary.remove();
	  delete D;
	}
	std::cout<<std::endl;
      }
  return 0;
}

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
  /*
std::fstream plik;
 std::string znaki;
 std::string wyraz;
 int dlugosc;
 plik.open("dictionary.txt", std::ios::app);
 for(int j=0; j<1000000; j++)
   {
     wyraz="";
     znaki="qwertyuioplkjhgfdsazxcvbnm!@#$%^&*_+=-1234567890";
     dlugosc=rand()%11+4;//max rozmiar = 15 znakow
     for(int i=0; i<dlugosc; i++)
       {
	 wyraz=wyraz+znaki[rand()%znaki.length()];
       }
     std::cout<<wyraz<<std::endl;
     plik<<wyraz<<std::endl;
     }*/
  //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
   int i=0;
  lista2s<int> rozmiary;
  TabZHaszTest l;
  srand(time(NULL));
  for(int j=0; j<10; j++)
    {
      std::cout<<"tutaj "<<std::endl;
      rozmiary.add(10);
      rozmiary.add(100);
      rozmiary.add(1000);
      rozmiary.add(100000);
      rozmiary.add(1000000);
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

#include "tabzhasztest.hh"
#include <iostream>
#include <sstream>
#include <string>
void TabZHaszTest::run(int il)
{
  stoper s;
  int pom=-1;
  TabZHasz Hasz(il/10);
  int i;
  std::stringstream ss;
  std::string str;
  ss << il;
  ss >> str;
  std::string dane="przeszukiwanie tabzhasz "+str;
  std::fstream plikzn;
  plikzn.open("dictionary.txt");
  //-----------------------------------------------//
  std::string *slowa= new std::string[il];
  for(i=0; i<il; i++)
      plikzn>>slowa[i];
  std::cout<<"skonczylem losowac slowa"<<std::endl; 
  s.start();
  for(i=0; i<il; i++)
    {
       Hasz[slowa[i]].insert(slowa[i], i);
    }
  s.stop();
  std::cout<<"skonczylem zapisywac slowa"<<std::endl;
  //------------------------------------------------------------------------
  s.dumpToFile("zapis "+str);
  i=rand()%il;
  s.start();
  pom=Hasz[slowa[i]].search(slowa[i]);
  s.stop();
    std::cout<<"skonczylem wyszukiwac wylosowane haslo"<<std::endl; 
   std::cout<<s.getTime().count()<<std::endl;
  s.dumpToFile(dane);  
}

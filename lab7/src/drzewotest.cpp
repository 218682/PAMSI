#include "drzewotest.hh"
#include <iostream>
#include <sstream>
#include <string>
void DrzewoTest::run(int il)
{
  stoper s;
  wezeldrzewa *pom;
  int i;
  std::stringstream ss;
  std::string str;
  ss << il;
  ss >> str;
  std::string dane="przeszukiwanie drzewa "+str;
  //-----------------------------------------------//
  for(i=0; i<il; i++)
    add(i+1);
  std::cout<<"skonczylem tworzyc drzewo"<<std::endl; 
  //------------------------------------------------------------------------
  i=rand()%il+1;
  s.start();
  pom=get(i);
  s.stop();
  std::cout<<"skonczylem wyszukiwac wylosowane haslo "<<i<<" "<<pom->key<<std::endl; 
   std::cout<<s.getTime().count()<<std::endl;
  s.dumpToFile(dane);  
}

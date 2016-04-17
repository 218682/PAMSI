#include "tabzhasztest.hh"
#include <iostream>
#include <sstream>
#include <string>
void TabZHaszTest::run(int il)
{
  stoper s;
  int pom=-1;
  TabZHasz Hasz(1);
  Dictionary dict; 
  int i;
  std::stringstream ss;
  std::string str;
  
  ss << il;
  ss >> str;
  std::string dane="przeszukiwanie tabzhasz "+str;
  //-----------------------------------------------//
  std::string *slowa= new std::string[il]; 
  //**********************************************************************
  dict.setWords();		      	//kod zaporzyczony z poprzedniego
  for (i=0; i<il;i++)                  //cwiczenia dotyczacego sortowania
    {                                 //
      slowa[i]=dict.RandomWords();   //
    }                               //__________________________________
  //************************************************************************
  s.start();
  for(i=0; i<il; i++)
    {
      Hasz[slowa[i]].insert(slowa[i], i);
    }
  s.stop(); 
  //------------------------------------------------------------------------
  s.dumpToFile("zapis "+str);
  i=rand()%il;
  s.start();
  //pom=Hasz[slowa[i]].search(slowa[i]);
  s.stop();
    std::cout<<"hellow4"<<std::endl; 
  // std::cout<<s.getTime().count()<<std::endl;
  s.dumpToFile(dane);
  std::cout<<slowa[pom]<<std::endl;   
}

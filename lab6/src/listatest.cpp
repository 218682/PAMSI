#include "listatest.hh"
#include <sstream>
void listatest::run(int il)
{
  stoper s;
  int pom=-1;
  std::stringstream ss;
  std::string str;
  ss << il;
  ss >> str;
  std::string dane="przeszukiwanie listy"+str;
  int losowana=(std::rand()%il);
  s.start();
  for(int i=0; i<=il; i++)
    {
      add(i);
    }
  s.stop();
  s.dumpToFile("zapis"+str);
  s.start();
  for(int i=0; pom!=losowana && i<il; i++)
    {
      pom=get(i);
    }
  s.stop();
  // std::cout<<s.getTime().count()<<std::endl;
  s.dumpToFile(dane);
  std::cout<<losowana<<std::endl;
  std::cout<<pom<<std::endl;     
}


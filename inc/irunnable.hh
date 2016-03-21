#ifndef IRUN_HH
#define IRUN_HH
#include "stoper.hh"
#include <cstdlib>
class iRunnable
{
private:
  int ileOkrazen;
  int ileDanych;
public:
  bool run()
  {
    stoper s;
    int x;
    int pom=0;
    int ile_el=100000000;
    srand(time(NULL));
    lista lis;
    std::cout<<"Przeprowadzic testy 1 czy 2?"<<std::endl;
    std::cin>>x;
    switch(x)
    case 1:
      {
	std::string dane="pomiary21";
	for(int j=0; j<10; j++)
	  {
	    for(ile_el=10; ile_el<1000001; ile_el=ile_el*10)
	      {
		tablica t;
		s.start();
		for(int i=0;i<ile_el; i++)
		  t.push(i);
		s.stop();
		//std::cout<<s.getTime()<<std::endl;
		//  s.getElapsedTime();
		s.dumpToFile(dane);
	      }
	  }
	break;
      }
  case 2:
    {
      std::string dane="pomiary3";
      for(int j=0; j<10; j++)
	{
	  for(ile_el=10; ile_el<100000001; ile_el=ile_el*10)
	    {
	      int losowana=(std::rand()%ile_el);
	      s.start();
	      for(int i=0; pom==losowana && i<ile_el; i++)
		{
		  pom=lis.get(i);
		}
	      s.stop();
	      // std::cout<<s.getTime().count()<<std::endl;
	      s.dumpToFile(dane);
	      std::cout<<losowana<<std::endl;
	    }
	}
      break;
    }
  }
  bool prepare();
};

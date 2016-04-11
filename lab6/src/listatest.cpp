#include "lista.hh"
void lista::add(int x)
{
    push (x);
}
void lista::add(int x, int index)
{
  if(index<=ile_elem)
    przypisz (x, index);
  else
    throw bad_index();
}
void lista::remove(int i)
{
  if(isEmpty()==true)
    throw empty();
  else if(i>ind())
    throw bad_index();
  else
    zdejmij(i);
}
void lista::remove()
{
  if(isEmpty()==true)
    throw empty();
  else
    zdejmij(ind());
}
int lista::get(int i)
{
  if(isEmpty()==true)
    throw empty();
  else if (i>ind())
    throw bad_index();
  else
    return wyswietl(i); 
}

void listatest::run()
{
  stoper s;
  int pom=-1;
  srand(time(NULL));
  std::string dane="pomiary3";
  for(int j=0; j<ileOkrazen; j++)
    {
      for(int il=10; il<ileDanych; il=il*10)
	{
	  int losowana=(std::rand()%il);
	  s.start();
	  for(int i=0; pom==losowana && i<ile_el; i++)
	    {
	      pom=get(i);
	    }
	  s.stop();
	  // std::cout<<s.getTime().count()<<std::endl;
	  s.dumpToFile(dane);
	  std::cout<<losowana<<std::endl;
	}
    }
}

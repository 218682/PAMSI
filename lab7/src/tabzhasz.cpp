#include "tabzhasz.hh"
#include <sstream>
#include <iostream>
int TabZHasz::kluczowanie(std::string haslo)
{
  /*
  std::stringstream ss;
  int x;
  int klucz=0;
  ss<<haslo;
  ss>>x;
  klucz=x%ilosc;*/
  int klucz=-1;
  std::string alfabet="abcdefghijklmnopqrstuwvxyz";
  if(ilosc<alfabet.size())
    for(int i=ilosc-1; i>=0 && haslo[0]<alfabet[(alfabet.size())*i/ilosc]; i--)
    {
      klucz=i;
      };
  return klucz;
}
TabAsoc TabZHasz::operator [](std::string haslo)
{
  return tab[kluczowanie(haslo)];
}

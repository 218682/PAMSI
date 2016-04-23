#include "tabzhasz.hh"
#include <sstream>
int TabZHasz::kluczowanie(std::string haslo)
{
  unsigned int klucz = 666;
  const char *litery=haslo.c_str();
  klucz=klucz*(ilosc+ilosc*litery[0]);
  if(haslo[1]!=NULL)
    {
      klucz=klucz/(litery[1]*litery[0]);
      if(haslo[2]!=NULL)
	klucz=(klucz+klucz*litery[2]*litery[0])/litery[2];
    }
  klucz=klucz%ilosc;
  return klucz;
}
TabAsoc &TabZHasz::operator [](const std::string haslo)
{
  return tab[kluczowanie(haslo)];
}

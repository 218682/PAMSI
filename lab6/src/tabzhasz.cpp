#include "tabzhasz.hh"
TabAsoc TabZHasz::kluczowanie(std::string haslo)
{
  int klucz=0;
  std::string alfabet="abcdefghijklmnopqrstuwvxyz";
  if(n<size)
  for(int i=n-1; i>=0 || haslo>alfabet[(size)*i/n]; i--)
    {
      if(haslo>alfabet[(size)*i/n])
      klucz=i;
    }
  return tab[klucz];
}
TabAsoc TabZHasz::operator [](std::string haslo)
{
  return TabZHasz::kluczowanie(haslo);
}

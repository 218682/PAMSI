#include "tabzhasz.hh"

int TabZHasz::kluczowanie(std::string klucz)
{
  return 0;
}
int TabZHasz::operator [](std::string klucz)
{
  return TabZHasz::kluczowanie(klucz);
}

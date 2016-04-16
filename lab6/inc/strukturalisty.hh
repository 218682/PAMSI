/*!
\file
\brief plik zawiera strukture potrzebna do dzialania listy
*/
#ifndef STRLISTY_HH
#define STRLISTY_HH
#include "inlista.hh"
#include <string>
struct StrListy{
public:
  //std::string dana;
  int dana;
  StrListy *NEXT;
  StrListy(){NEXT=NULL;}
};
#endif

/*!
\file
\brief plik zawiera klase listatest odpowiadajaca za testowanie listy
*/
#ifndef LISTAT_HH
#define LISTAT_HH
#include "lista2.hh"
#include "irunnable.hh"
class listatest: public iRunnable, public lista2{
public:
  void run(int);
};

#endif

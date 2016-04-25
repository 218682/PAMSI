#ifndef EDGE_HH
#define EDGE_HH
//#include lista.hh
#include "vertex.hh"
struct edge{
public:
  //! wskaznik do wieszcholka 
  vertex *A;
  //! wskaznik do wieszcholka
  vertex *B;
  //! waga wieszcholka
  int waga;
}

#endif

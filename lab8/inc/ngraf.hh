#ifndef NGRAF_HH
#define NGRAF_HH
//#include "edge.hh"
#include "lista.hh"

namespace graf
{
  struct vertex;
  struct edge;
  class Graf;
}

struct graf::vertex{
public:
  vertex(){edges=new lista<edge>;}
  int lp;
  lista<edge> *edges;
};
struct graf::edge{
public:
  //! wskaznik do wieszcholka 
  vertex *A;
  //! wskaznik do wieszcholka
  vertex *B;
  //! waga wieszcholka
  int waga;
};
#endif

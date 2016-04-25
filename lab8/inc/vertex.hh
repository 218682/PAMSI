#ifndef VERTEX_HH
#define VERTEX_HH
#include "lista.hh"
#include "edge.hh"
struct vertex{
public:
  lista<edge> *edges;
  int lp;
}

#endif

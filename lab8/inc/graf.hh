//! plik zawiera klase graf
#ifndef GRAF_HH
#define GRAF_HH
#include "ingraf.hh"

class Graf: public inGraf{
private:
  lista2s<edge> *E;
  lista2s<vertex> *V;
public:
  Graf();
  void addVertex(int);
  void addEdge(int, int);
  void removeVertex(int);
  void removeEdge(int,int);
};
Graf::Graf()
{
  E = new lista<edge>;
  V = new lista<vertex>;
}
#endif

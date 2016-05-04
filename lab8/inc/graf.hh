//! plik zawiera klase graf
#ifndef GRAF_HH
#define GRAF_HH
#include "ingraf.hh"
#include "lista2s.hh"
//#include "ngraf.hh"
class graf::Graf: public inGraf{
private:
  lista <edge> *E;
  lista <vertex> *V;
public:
  Graf();
  void addVertex(int);
  void addEdge(int, int, int);
  void removeVertex(int);
  void removeEdge(int,int);
};
#endif

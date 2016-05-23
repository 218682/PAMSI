#ifndef NGRAF_HH
#define NGRAF_HH
//#include "edge.hh"
#include "lista.hh"
#include "lista2s.hh"
#include "kolejka.hh"
#include "ingraf.hh"
namespace graf
{
  struct vertex;
  struct edge;
  class Graf;
  class DFS;
  class BFS;
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
class graf::Graf: public inGraf{
private:
  lista <edge> *E;
  lista <vertex> *V;
public:
  Graf();
  void addVertex(int);
  void addEdge(int, int, int=0);
  void removeVertex(int);
  void removeEdge(int,int);
  int getSizeVertex();
  int getSizeEdge();
  vertex getVertex(int);
  edge getEdge();
  vertex getNextVertex(const vertex&,const  edge);
  lista<vertex> getNeighbors(int);
  lista<edge> getIncydentEdges(vertex&);
};
class graf::DFS
{
private:
  bool *odwiedzone;
  lista2s<int> *S;
public:
  DFS(Graf);
  lista2s<int>* path(Graf, int, int);
};
class graf::BFS
{
private:
  char *kolor;
  //int *odleglosc;
  int *rodzic;
  kolejka<int> *Q;
  kolejka<int> *p;
public:
  BFS(Graf);
  kolejka<int>* path(Graf, int, int);
};
#endif

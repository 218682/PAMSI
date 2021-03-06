#include "ngraf.hh"
#include <iostream>
lista2s<int>* graf::DFS::path(Graf G, int V, int A)
{
  vertex w;
  lista<vertex> sasiedzi;
  odwiedzone[V]=true;
  S->add(V);
  if(V==A)
    return S;
  sasiedzi=G.getNeighbors(V);
  for(int i=0; i<sasiedzi.size(); i++)
    {
      w=sasiedzi.get(i);
      if(odwiedzone[w.lp]==false)
	path(G, w.lp, A);
    }
  //S->remove();
  return S;
}
graf::DFS::DFS(Graf G)
{
  int miejsce=G.getSizeVertex();
  odwiedzone = new bool[miejsce];
  for(int i=0; i< miejsce; i++)
    odwiedzone[i]=false;
  S=new lista2s<int>;
}

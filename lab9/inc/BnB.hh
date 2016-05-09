#ifndef BnB_HH
#define BnB_HH
void BnB(Graf G, vertex A, vertex B)
{
  edge shorter;
  //1. zapisz punkt startowy
  //2. wybierz najkrotsza krawedz z punktu startowego
  //3. jezeli nastepny wieszcholek = B, sprawdzaj tylko krotsze
  //4. gdy wszystkie sprawdzone zwroc najkrotsza scierzke
  Graf C;
  C.addVertex(A); // zapisz
  BnB(G, C, A, B) //dodaj galezie do grafu
  //wybierz najkrotszy
  
}
void BnB(Graf G, Graf &C, vertex Z, vertex B)
{
  lista<edge> inc;
  inc=G.getIncydentEdges(Z);
  for(int i=0, i<inc.size();i++)
    {
      C.addEdge(inc.get(i).waga);
      C.addVertex(getNextVertex(Z, inc.get(i)));
    }
}
#endif

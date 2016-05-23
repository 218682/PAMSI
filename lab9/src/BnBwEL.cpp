#include "BnB.hh"
BranchNBoundExL::BranchNBoundExL(graf::Graf G)
{
  int miejsce=G.getSizeVertex();
  odwiedzone = new bool[miejsce];
  odleglosc = new int[miejsce];
  rodzic = new int[miejsce];
  for(int i=0; i< miejsce; i++)
    {
      odwiedzone[i]=false; // kolor bialy
      odleglosc[i]=-1;//-1 jako nieskonczonosc 
      rodzic[i]=-1; //bo wszystkie wieszcholki numerowane od 0
    }
  Q=new std::priority_queue <BnBs, std::vector<BnBs>, PorownajBnBs>;
  p=new kolejka<int>;
  this->licznik=0;
}
kolejka<int>* BranchNBoundExL::BnBwEL(graf::Graf G, graf::vertex A, graf::vertex B)
{
  //  std::cout<<"rozpoczynam szukanie drogi "<<std::endl;
  graf::vertex u;
  int x;
  BnBs pom;
  odwiedzone[A.lp]=true;//kolorujemy wieszcholek na szaro
  pom.V=A;
  pom.dlugosc=0;
  Q->push(pom);
  p->enqueue(A.lp);
  if(A.lp==B.lp)
    return p;
  while(BnBwEL(G, pom, B)==false)
    {
      pom=Q->top();
    }
  p->dequeue();
  x=B.lp;
  p->enqueue(x);
  // while(rodzic[x]!=-1)
  // {
  //   x=rodzic[x];
  //  p->enqueue(x);
  //}
  return p;
}
bool BranchNBoundExL::BnBwEL(graf::Graf G, BnBs Z, graf::vertex B)
{
  BnBs pom;
  lista<graf::edge> inc;
  if(Z.V.lp==B.lp)
    return true;
  Q->pop();
  inc=G.getIncydentEdges(Z.V);
  for(int i=0; i<inc.size(); i++)
    {
      pom.V=G.getNextVertex(Z.V, inc.get(i));
      pom.dlugosc=((inc.get(i).waga)+(Z.dlugosc));
      if(odwiedzone[pom.V.lp]==false
	 ||odleglosc[pom.V.lp]>pom.dlugosc)
	{
	  
	  this->licznik++;
	  //std::cout<<"Wierzcholek: "<<pom.V.lp<<" odleglosc: "<<pom.dlugosc<<std::endl;
	  odwiedzone[pom.V.lp]=true;
	  odleglosc[pom.V.lp]=Z.dlugosc+pom.dlugosc;
	  rodzic[pom.V.lp]=Z.V.lp;
	  Q->push(pom);
	}
    }
  return false;
}

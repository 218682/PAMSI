#include "graf.hh"

graf::Graf::Graf()
{
  E = new lista<edge>;
  V = new lista<vertex>;
}
void graf::Graf::addVertex(int i)
{
  vertex Ve;
  Ve.lp=i;
  V->add(Ve, i);
}
void graf::Graf::addEdge(int X, int Y, int w)
{
  edge Ed;
  Ed.A=V->getp(X);
  Ed.B=V->getp(Y);
  Ed.waga=w;
  E->add(Ed);
  
  /*wersja z dodanym przeciazeniem operatora ()
  V(X)->edges->add(E);
  V(Y)->edges->add(E); */
  
  //na wskaznikach
  V->getp(X)->edges->add(Ed); //dodaje krawedz do wieszcholkow X i Y
  V->getp(Y)->edges->add(Ed);
}
void graf::Graf::removeVertex(int i)
{
  edge *pom;
  int j; //zmienna pomocnicza
  int roz;
  //usuniecie krawedzi prowadzacych do usuwanego wieszcholka
  while( V->getp(i)->edges->isEmpty()==false)
    {
      j=0;
      roz=V->getp(i)->edges->size();
      pom=V->getp(i)->edges->getp(roz);
      if(pom->A!=V->getp(i)) //jezeli A nie wskazuje na usuwany wieszcholek
	{
	  do //usuwa polaczenie wieszchoka A z krawedzia prowadzaca do usuwanego wieszcholka
	    {
	      if(pom->A->edges->getp(j)==pom)
		pom->A->edges->remove(j);
	      j++;
	    }
	  while(pom->A->edges->getp(j-1)!=pom);
	}
      else
	do //usuwa polaczenie wieszchoka B z krawedzia prowadzaca do usuwanego wieszcholka
	  {
	    if(pom->B->edges->getp(j)==pom)
	      pom->B->edges->remove(j);
	    j++;
	  }
	while(pom->B->edges->getp(j-1)!=pom);
      j=0;// wyzerowanie zmiennej pomocniczej
      //usuniecie krawedzi z wieszcholka
      V->getp(i)->edges->remove(roz);
      //usuniecie krawedzi z listy krawedzi
      do
	{
	  if(E->getp(j)==pom)
	    E->remove(j);
	  j++;
	}
      while(E->getp(j-1)!=pom);
    }
  //usuniecie wieszcholka
  V->remove(i); 
}
void graf::Graf::removeEdge(int X,int Y)
{
  vertex *pom1;
  vertex *pom2;
  edge *tmp;
  int i, j, k=0;
  int ilosc= E->size();
  i=0;
  do {pom1=V->getp(i); i++;}
  while(V->getp(i-1)->lp!=X);
  
  i=0;
  do{pom2=V->getp(i);i++;}
  while(V->getp(i-1)->lp!=Y);
	
  for(i=0;i<=ilosc; i++)
    for(j=0; j<=ilosc; j++)
      {
	if(pom1->edges->getp(i)==pom2->edges->getp(j))
	  {
	    tmp=pom1->edges->getp(i);
	    pom1->edges->remove(i);
	    pom2->edges->remove(j);
	    do
	      {
		if(E->getp(k)==tmp)
		  E->remove(k);
		k++;
	      }
	    while(E->getp(k-1)!=tmp);
	  }
      }
}

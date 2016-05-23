#include "graftest.hh"
#include <sstream>
#include <string>
void GrafTest::run(int ile)
{
  stoper st;
  kolejka<int> *k;
  //lista2s<int> *l;
  int p1, p2;
  BranchNBound *B;
  BranchNBoundExL *C;
  std::fstream plik;
  lista<graf::vertex> *s;
  graf::vertex w, pom1, pom2;
  graf::Graf G;
  std::stringstream ss;
  std::string str;
  ss << ile;
  ss >> str;
  std::string dane="przeszukiwanie grafu "+str;
  /* przyklad przerabiany na zajeciach
   for(int i=0; i<=8; i++)
    {
      G.addVertex(i);
    }
 G.addEdge(0,1,3);
 G.addEdge(0,2,3);
 G.addEdge(1,2,5);
 G.addEdge(1,3,2);
 G.addEdge(2,4,2);
 G.addEdge(3,5,3);
 G.addEdge(3,7,4);
 G.addEdge(4,5,3);
 G.addEdge(5,7,1);
 G.addEdge(2,6,4);
 G.addEdge(6,8,5);
 G.addEdge(8,7,7);
 
  */
   for(int i=0; i<=ile; i++)
    {
      G.addVertex(i);
    }
  std::cout<<"dodano wieszcholki"<<std::endl;
  for(int i=0; i<ile; i++)
    G.addEdge(i,i+1,rand()%10+10);
  
  for(int i=0; i<ile; i++)
    {
      p1=rand()%ile;
      p2=rand()%ile/2;
      if(p1!=p2)
	G.addEdge(p1,p2,rand()%10+10);
    }
  
  
  B=new BranchNBound(G);
  //C=new BranchNBoundExL(G);
  pom1=G.getVertex(0);
  //pom2=G.getVertex(7);
  pom2=G.getVertex(ile-1);
  st.start();
   k=B->BnB(G, pom1, pom2);
   //k=C->BnBwEL(G, pom1, pom2);
  st.stop();
  st.dumpToFile(dane+" BnB");
  
  /* while(k->isEmpty()==false)
    {
      p1=k->front();
      std::cout<<p1<<" ";
      k->dequeue();
      }*/
  plik.open(dane+" ilosc scierzek BnB", std::ios::app);
  plik<<B->licznik<<std::endl;
  plik.close();
  //delete C;
}

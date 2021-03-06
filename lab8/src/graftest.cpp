#include "graftest.hh"
#include <sstream>
#include <string>
void GrafTest::run(int ile)
{
  stoper st;
  kolejka<int> *k;
  lista2s<int> *l;
  int pom;
  lista<graf::vertex> s;
  graf::vertex w;
  graf::Graf G;
  std::stringstream ss;
  std::string str;
  ss << ile;
  ss >> str;
  std::string dane="przeszukiwanie grafu "+str;
  for(int i=0; i<=ile; i++)
    {
      G.addVertex(i);
    }
  std::cout<<"dodano wieszcholki"<<std::endl;
  for(int i=0; i<ile; i++)
    G.addEdge(i,i+1);
  
  for(int i=0; i<ile/5; i++)
    G.addEdge(rand()%ile,rand()%ile/2+1);
  
  // graf::BFS B(G);
  graf::DFS D(G);
  //   std::cout<<"pomiar bfs"<<std::endl;
  //st.start();
  //k=B.path(G, 1, ile);
  //st.stop();
  //st.dumpToFile(dane+" BFS");
  std::cout<<"pomiar dfs"<<std::endl;
  st.start();
  l=D.path(G, 1, ile);
  st.stop();
  st.dumpToFile(dane+" DFS");
}

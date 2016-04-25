//! plik zawiera interfejs do obsługi grafu
#ifndef INGRAF_HH
#define INGRAF_HH
#include "edge.hh"
class inGraf{
public:
  //! dodaje wieszcholek grafu
  void addVertex(int);
  //! dodaje krawedz miedzy zadanymi wieszcholkami grafu o zadanej wadze  
  void addEdge(int, int, int);
  //! usuwa wieszcholek grafu
  void removeVertex(int);
  //! usuwa krawedz grafu miedzy podanymi wieszcholkami
  void removeEdge(int, int);
  
  //edge  *findPath(int, int);
  
};

#endif

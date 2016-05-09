//! plik zawiera interfejs do obsługi grafu
#ifndef INGRAF_HH
#define INGRAF_HH
#include "ngraf.hh"
class inGraf{
public:
  //! dodaje wieszcholek grafu
  void addVertex(int);
  //! dodaje krawedz miedzy zadanymi wieszcholkami grafu o zadanej wadze (domyslnie 0, gdy zadna nie zostanie podana)
  void addEdge(int, int, int=0);
  //! usuwa wieszcholek grafu
  void removeVertex(int);
  //! usuwa krawedz grafu miedzy podanymi wieszcholkami
  void removeEdge(int, int);
  
  //edge  *findPath(int, int);
  
};

#endif

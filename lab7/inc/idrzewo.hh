#ifndef iDRZEWO_HH
#define iDRZEWO_HH
#include "strdrzewa.hh"
//template <class typ>
class iDrzewo{
public:
  virtual void add(int)=0;
  virtual wezeldrzewa *get(int)=0;
};
#endif

#ifndef TABZHASZT_HH
#define TABZHASZT_HH
#include "tabzhasz.hh"
#include "irunnable.hh"
#include "Dictionary.h"
class TabZHaszTest: public TabZHasz, public iRunnable{
public:
  void run(int);
};

#endif

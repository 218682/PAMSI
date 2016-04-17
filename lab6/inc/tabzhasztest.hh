#ifndef TABZHASZT_HH
#define TABZHASZT_HH
#include "tabzhasz.hh"
#include "TabAsoc"
#include "irunnable.hh"
class TabZHaszTest: public TabZHasz, public iRunnable
{
public:
  void run(int);
};

#endif

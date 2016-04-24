#ifndef DRZEWOTEST_HH
#define DRZEWOTEST_HH
#include "drzewo.hh"
#include "irunnable.hh"
class DrzewoTest: public Drzewo, public iRunnable
{
public:
  void run(int);
};
#endif

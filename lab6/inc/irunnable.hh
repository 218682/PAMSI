//! \file irunnable.hh zawira interfejs do testowania zaimplementowanych algorytmow
#ifndef IRUN_HH
#define IRUN_HH
#include "stoper.hh"
#include <cstdlib>
class iRunnable{
protected:
  int ileOkrazen=10;
  int ileDanych=100000000;
public:
  virtual void run(int)=0;
  void prepare(int, int);
};
#endif

#ifndef IRUN_HH
#define IRUN_HH
#include "stoper.hh"
#include <cstdlib>
class iRunnable
{
private:
  int ileOkrazen=10;
  int ileDanych=100000000;
public:
  virtual void run()=0;
  void prepare(int, int);
};

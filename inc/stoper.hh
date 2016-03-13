#ifndef STOPER_HH
#define STOPER_HH
#include <cstdio>
#include <ctime>
#include <cstring>
#include <iostream>
#include <fstream>
class stoper{
private:
  float cstart;
  float cstop;
  float ElapsedTime;
public:
  void start();
  void stop();
  float getElapsedTime();
  float getTime();
  bool dumpToFile (const std::string);
};
      

#endif

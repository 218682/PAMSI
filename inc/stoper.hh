#ifndef STOPER_HH
#define STOPER_HH
#include <cstdio>
#include <ctime>
#include <cstring>
#include <iostream>
#include <fstream>
#include <chrono>
class stoper{
private:
  std::chrono::duration<double> ElapsedTime;
  std::chrono::time_point<std::chrono::high_resolution_clock> cstart, cstop;
public:
  void start();
  void stop();
  std::chrono::duration<double> getElapsedTime();
  std::chrono::duration<double> getTime();
  bool dumpToFile (std::string);
};
      

#endif

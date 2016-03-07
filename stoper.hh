#ifndef STOPER_HH
#define STOPER_HH
#include <cstdio>
#include <ctime>
class stoper{
private:
  float start;
  float stop;
  float ElapsedTime;
public:
  void start()
  {
    time_t czasStart=clock();
    this->start=czasStart/(CLOCKS_PER_SEC*1.0);
  }
  void stop()
  {
    time_t czasStop=clock();
    this->start=czasStop/(CLOCKS_PER_SEC*1.0);
  }
  float getElapsedTime()
  {
    this->ElapsedTime=stop-start;
    start();
  }
  void dumpToFile (const char nazwaPliku)
  {
    std::fstream nazwaPliku;
    nazwaPliku.open(nazwaPliku, std::ios::out);
    nazwaPliku<<ElapsedTime<<std::endl;
  }
};
    
    
  

#endif

#include "stoper.hh"
using namespace std;
void stoper::start()
{
  time_t czasStart=clock();
  this->cstart=czasStart/(CLOCKS_PER_SEC*1.0);
}
void stoper::stop()
{
  time_t czasStop=clock();
  this->cstart=czasStop/(CLOCKS_PER_SEC*1.0);
}
float stoper::getElapsedTime()
{
  this->ElapsedTime=cstop-cstart;
  start();
  return ElapsedTime;
}
bool stoper::dumpToFile (const std::string Nazwa)
{
  std::fstream plik;
  plik.open(Nazwa, std::ios::app);
  //std::ofstream plik(Nazwa);
  if (!plik.is_open()) {
    std::cerr << 
      ":(  Nie powiodlo sie otwarcie pliku: " << Nazwa << std::endl;
    return false;
  }
  else
    if( plik.good() == true )
      {
	plik<<getElapsedTime()<<std::endl;
	return true;
      } else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
  return false;
}

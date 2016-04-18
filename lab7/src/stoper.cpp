#include "stoper.hh"
using namespace std;
void stoper::start()
{
  cstart = std::chrono::high_resolution_clock::now();
}
void stoper::stop()
{
  cstop = std::chrono::high_resolution_clock::now();
}
std::chrono::duration<double> stoper::getElapsedTime()
{
  stop();
  this->ElapsedTime=cstop-cstart;
  start();
  return ElapsedTime;
}
std::chrono::duration<double> stoper::getTime()
{
  this->ElapsedTime=cstop-cstart;
  return ElapsedTime;
}
bool stoper::dumpToFile (std::string Nazwa)
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
	getTime();
	plik<<ElapsedTime.count()<<std::endl;
	return true;
      } else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
  return false;
}

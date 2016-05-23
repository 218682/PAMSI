#ifndef BnB_HH
#define BnB_HH
#include "ngraf.hh"
#include <queue>
struct BnBs
{
  graf::vertex V;
  int dlugosc;
  bool koniec=false;
  bool operator <(const BnBs & B)
  {
    if (this->dlugosc<B.dlugosc)
      return true;
    return false;
  }
  bool operator >(const BnBs & B)
  {
    if (this->dlugosc>B.dlugosc)
      return true;
    return false;
  }
  bool operator == (const BnBs & B)
  {
    if(this->dlugosc==B.dlugosc && this->V.lp==B.V.lp)
      return true;
    return false;
  }
};
struct PorownajBnBs
{
  bool operator()(const BnBs & B, const BnBs & C)
  {
    if(B.koniec==true) return false;
    if(B.dlugosc>C.dlugosc) return true;
    return false;
  }
};
/*class BranchNBound{
private:
  std::priority_queue <BnBs, std::vector<BnBs>, PorownajBnBs> *galezie;
  lista<graf::vertex> *path;
  bool BnB(graf::Graf, BnBs, graf::vertex);
public:
  lista<graf::vertex>* BnB(graf::Graf, graf::vertex, graf::vertex);
  BranchNBound(graf::Graf);
  int licznik;
  };*/
class BranchNBoundExL{
  private:
  bool *odwiedzone;
  int *odleglosc;
  int *rodzic;
  std::priority_queue <BnBs, std::vector<BnBs>, PorownajBnBs> *Q;
  kolejka<int> *p;
  bool BnBwEL(graf::Graf, BnBs, graf::vertex);
public:
  kolejka<int>* BnBwEL(graf::Graf, graf::vertex, graf::vertex);
  BranchNBoundExL(graf::Graf);
  int licznik;
};
class BranchNBound{
  private:
  int *rodzic;
  std::priority_queue <BnBs, std::vector<BnBs>, PorownajBnBs> *Q;
  kolejka<int> *p;
  bool BnB(graf::Graf, BnBs, graf::vertex);
public:
  kolejka<int>* BnB(graf::Graf, graf::vertex, graf::vertex);
  BranchNBound(graf::Graf);
  int licznik;
};
#endif

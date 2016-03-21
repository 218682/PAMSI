#ifndef ATP2_HH
#define ATP2_HH
class atp2: public atp{
protected:
  int rozmiar;
  int ile_elem;
public:
  int size() {return rozmiar;}
  bool isEmpty() {if(ile_elem!=0) return false; else return true;}
};
#endif

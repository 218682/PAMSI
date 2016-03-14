#ifndef STOS_HH
#define STOS_HH
class stos: public tablica{
private:
  tablica tab;
public:
  stos();
  void push(int);
  void remove(int);
  void add(int, int);
  void get (int);
};

#endif

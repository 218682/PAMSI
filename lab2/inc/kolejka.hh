#ifndef KOLEJKA_HH
#define KOLEJKA_HH
class kolejka: public tablica{
private:
  tablica tab;
public:
  kolejka();
  void push(int);
  void remove(int);
  void add(int, int);
  void get (int);
};

#endif

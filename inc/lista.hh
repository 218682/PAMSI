#ifndef LISTA_HH
#define LISTA_HH
class lista: public atp2{
private:
  int dana;
  lista *NEXT;
public:
  lista();
  void push(int);
  void remove(int);
  void add(int, int);
  void get (int);
};

#endif

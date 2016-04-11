#ifndef INLISTA_HH
#define INLISTA_HH
class inLista{
public:
  virtual void remove(int)=0;
  virtual void remove()=0;
  virtual void add(int, int)=0;
  virtual void add(int)=0;
  virtual int get (int)=0;
};
#endif

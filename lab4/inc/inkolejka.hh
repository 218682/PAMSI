#ifndef INKOLEJKA_HH
#define INKOLEJKA_HH
class inKolejka{
public:
  virtual void remove()=0;
  virtual void add(int)=0;
  virtual int last ()=0;
  virtual int first ()=0;
};
#endif

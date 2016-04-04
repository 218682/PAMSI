#ifndef INTABLICA_HH
#define INTABLICA_HH
class inTablica{
public:
  virtual void push(int)=0;
  virtual void przypisz(int, int)=0;
  virtual void zdejmij(int)=0;
  virtual int size()=0;
  virtual int ind()=0;
  virtual bool isEmpty()=0;
};
#endif

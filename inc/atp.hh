#ifndef ATP_HH
#define ATP_HH
class atp{
public:
  virtual void remove()=0;
  virtual void add(int dana)=0;
  virtual int get (int index)=0;
  virtual bool isEmpty()=0;
  virtual int size()=0;
};
#endif

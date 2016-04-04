/*!
 *\file atp.hh zawiera interfejs dla kolejki, listy i stosu
 */
#ifndef ATP_HH
#define ATP_HH
class atp{
public:
  virtual void remove()=0; //!\brief usuwa element
  virtual void add(int dana)=0;//!\brief dodaje element
  virtual int get (int index)=0;//!\brief zwraca element
  virtual bool isEmpty()=0; //!\brief sprawdza czy sa elementy \return true gdy sa elementy false gdy nie ma elementow
  virtual int size()=0; //!\brief zwraca ilosc elementow \return ilosc elementow
};
#endif

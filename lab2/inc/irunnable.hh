#ifndef IRUN_HH
#define IRUN_HH
class iRunnable
{
private:
  int ileOkrazen;
  int ileDanych;
public:
  bool run();
  bool prepare();
};

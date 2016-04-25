#ifndef DRZEWO_HH
#define DRZEWO_HH
#include "idrzewo.hh"
//template <class typ>
class Drzewo: public iDrzewo//<typ>{
{
private:
  //! wskaznik na perwszy element drzewa
  wezeldrzewa *korzen;
  //! wezel straznika
  wezeldrzewa straznik;
  //! zamienia galezie
  void RotWLew(wezeldrzewa *);
  //! zamienia galezie
  void RotWPr(wezeldrzewa *);
public:
  Drzewo();
  //void add(typ);
  //typ get(int);
  void add(int);
  wezeldrzewa *get(int);
};

#endif

#ifndef STRDRZEWA_HH
#define STRDRZEWA_HH

struct wezeldrzewa{
public:
  //! wskaznik na gorna galaz/ ojca 
  wezeldrzewa *Ojciec;
  //! wskaznik na lewa galaz/ lewego syna
  wezeldrzewa *Lewy;
  //! wskaznik na prawa galaz/ prawego syna
  wezeldrzewa *Prawy;
  //! klucz
  int key;
  //! kolor galezi
  char kolor;
};
#endif

#ifndef TABLICA_HH
#define TABLICA_HH
class tablica{
private:
  int N;
  int i {this->i=0};
  int *tab=new int[N];
public:
  void podaj_N(int M){ this->N=M;}
  void wyswietl() {for(int j=0; j<i; j++) std::cout<<tab[j]<<std::endl;}
  void wyswietl_N(){std::cout<<N<<std::endl;}
  void nowa_dana(int dana)
  {
    if(i<N)
      this->tab[i]=dana; //dopisuje dana na pierwsze wolne miejsce tablicy 
    else
      zwieksz(dana);
    this->i++; //nalicza ilosc zapisanych danych
  }
  void zwieksz(int dana)
  {
    //std::cout<<"zwiekszam "<<i<<std::endl;
    int p=N;           // zmienna pomocnicza, zapamietuje poprzedni rozmiar tab.
    this->N=N*2;       // nowy rozmiar tablicy
    int *tmp= new int[N]; //tworzy tablice tymczasowa
    for(int j=0; j<p; j++)
      tmp[j]=tab[j];   //kopiuje zawartosc tablicy
    delete[] tab;      //zwalnia tablice
    tmp[i]=dana; //dopisuje dana na pierwsze wolne miejsce tablicy
    this->tab=tmp;     //przypisuje tablice tymczasowowa do tablicy orginalnej 
  }

};
#endif

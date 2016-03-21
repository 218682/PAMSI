#include "tablica.hh"
void tablica::push(int dana)
  {
    if(ile_elem<rozmiar)
      this->tab[ile_elem]=dana;//dopisuje dana na pierwsze wolne miejsce tablicy 
    else
      zwieksz(dana);
    this->ile_elem++; //nalicza ilosc zapisanych danych
  }
void tablica::zwieksz(int dana)
  {
    //std::cout<<"zwiekszam "<<i<<std::endl;
    int p=rozmiar;     // zmienna pomocnicza, zapamietuje poprzedni rozmiar tab.
    this->rozmiar=rozmiar*2;       // nowy rozmiar tablicy
    int *tmp= new int[rozmiar];   //tworzy tablice tymczasowa
    for(int j=0; j<p; j++)
      tmp[j]=tab[j];   //kopiuje zawartosc tablicy
    delete[] tab;     //zwalnia tablice
    tmp[ile_elem]=dana;     //dopisuje dana na pierwsze wolne miejsce tablicy
    this->tab=tmp;  //przypisuje tablice tymczasowowa do tablicy orginalnej 
  }

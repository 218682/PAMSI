# Lab2 - tablica dynamiczna

Sposób pomiaru czasu nie jest właściwy.
``static_cast <double>(clock()) /CLOCKS_PER_SEC;``
Proszę korzystać z ``gettimeofday()`` http://linux.die.net/man/2/gettimeofday

Ocena: 3,5

# Lab3 - projektowanie obiektowe

IRunnable powinno być INTERFEJSEM.
Kod napisany chaotycznie, komentarze wpisywane inline, dziedziczenie kolejki po tablicy.
Jezeli w klasie kolejka potrzebna jest tablica, to w takim przypadku lepiej umiescic
tablice jako pole w klasie kolejka.

Ocena: 3,5


# Lab4 - ADT, lista / kolejka / stos

Wykresy umieszczone w sprawozdaniu są dla mnie niezrozumiałe.
Proszę powtórnie wykonać wykresy. Na wykresie powinny znaleźc się:
- na osi OX rozmiar problemu
- na osi OY czas wykonania zadania
- poszczególne algorytmy lub rodzaj sprawdzanych zadań - osobne serie danych, róznymi kolorami.

Twierdzenie "czas przeszukiwania listy jest stały" jest nieprawdziwe.

Sprawozdanie poprawione, ale nadal zawiera błędy.

``W drugim przypadku badanie wykazało O(n 2 ).
Przyczyną tego jest fakt, że algorytm przeszukujący został napisany poza strukturą listy, operując
jedynie na jej metodach, więc badanie zależało również od czasu dostępu do poszczególnych pól z
danymi, co w przypadku listy zbudowanej przy użyciu wskaźników wynosi O(n), a w przypadku
tablic O(1).``

To błędne wytłumaczenie przyczyny zależności kwadratowej.

Program buduje sie, ale main() zawiera tylko jedna instrukcje
```
int main (void)
{
  return 0;
}
```

Ocena: 2.0

# Lab6 tablica asocjacyjna

Sprawozdanie poprawne, kod napisany niestarannie. Wykazana w sprawozdaniu zlozonosc
implementacji odbiega znaczaco od oczekiwanej zlozonosci teoretycznej.

Ocena: 4,5

# Lab7 drzewa binarne

Ocena: 5

# Lab8 grafy (dfs,bfs)

Ocena: 5

# Lab9 grafy (branch & bound)

brak sprawozdania

Ocena: 2

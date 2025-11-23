# Program do obliczania największej różnicy między elementami – Lab 6

Prosty program, który pobiera od użytkownika ciąg liczb całkowitych i oblicza największą różnicę między kolejnymi elementami tablicy.

## Opis działania

Program prosi użytkownika o podanie liczby elementów.

* Jeśli liczba elementów jest mniejsza niż 2, program kończy działanie z komunikatem, że nie można policzyć różnicy.
* Następnie użytkownik podaje elementy tablicy, a program oblicza i wyświetla różnicę między kolejnymi elementami oraz największą różnicę.

### Kompilacja

```
gcc -Wall -Wextra main.c -o MaxDiff
```

### Uruchomienie

Linux/macOS:

```
./MaxDiff
```

Windows:

```
chcp 65001 
.\MaxDiff.exe
```

### Dane testowe

#### Dane 1:
```
Program do obliczania najwiekszej roznicy pomiedzy elementami
Podaj liczbe elementow do porownania: 10
7 5 2 3 1 14 3 2 1 6 
|7-5| = 2
|5-2| = 3
|2-3| = 1
|3-1| = 2
|1-14| = 13
|14-3| = 11
|3-2| = 1
|2-1| = 1
|1-6| = 5
Maksymalna roznica to: 13
```

#### Dane 2
```
Program do obliczania najwiekszej roznicy pomiedzy elementami
Podaj liczbe elementow do porownania: 1
za mało danych, aby policzyć różnice
```

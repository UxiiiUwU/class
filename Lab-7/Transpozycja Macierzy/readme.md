# Transpozycja Macierzy– Lab 7

Prosty program, który transponuje macierz podaną przez uzytkownika

## Opis działania

Program prosi użytkownika o podanie wymiarów macierzy w formacie `x y`, gdzie `x` to liczba wierszy, a `y` to liczba kolumn a następnie o wartości w macierzy.
Wartości macierzy moga być przyjmowane w ciągu znaków: 
```
1 2 3 4 5 6
``` 
albo oddzielone klawiszem `ENTER`:
```
1 2 3
4 5 6
```
Klawisz `ENTER` przy podawaniu danych nie ma wpływu na działanie programu (pod warunkiem, ze ma sie conajmniej jedną wartość do wstawienia)

### Kompilacja

```
gcc -Wall -Wextra main.c -o Transpozycja
```

### Uruchomienie

Linux/macOS:

```
./Transpozycja
```

Windows:

```
chcp 65001 
.\Transpozycja.exe
```

### Dane testowe

#### Dane 1:
```
Podaj wymiary macierzy wejściowej (wiersze kolumny):
5 3
Wymiary macierzy: 5x3
9 8 7
1 2 3
5 5 5
2 2 2
0 0 0

Macierz po transpozycji: 3x5
9 1 5 2 0 
8 2 5 2 0 
7 3 5 2 0 

```

#### Dane 2
```
Podaj wymiary macierzy wejściowej (wiersze kolumny):
1 2    
Wymiary macierzy: 1x2
7 4

Macierz po transpozycji: 2x1
7 
4 
```

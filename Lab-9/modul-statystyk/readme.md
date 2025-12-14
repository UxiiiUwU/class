# Moduł statystyk – funkcja get_stats

Prosty program który wylicza statystyki dotyczące zbioru liczb podanego przez użytkownika

## Opis działania

Program prosi użytkownika o ilośc liczb dla których chce on wyliczyć statystyki
Następnie prosi on o podanie liczb oddzielonych spacją np: `1 2 3 4 10 5 7`
Wylicza on dla zbioru liczb statystyki `Min`, `Max`, `Average` i wyświetla je użytkownikowi

### Kompilacja
```
cd src
gcc -Wall -Wextra main.c -o modul-statystyk
```
### Uruchomienie
```
Linux/macOS:

./modul-statystyk
```
Windows:
```
chcp 65001
.\modul-statystyk.exe
```
### Przykładowe dane testowe

#### Dane 1
Input:
`10101001011010`
Output:
```
Podaj ilość liczb dla których chcesz wyliczyć statystyki: 10101001011010
Error in attempting to allocate memory
```

#### Dane 2
Input:
`-1`
Output:
```
Podaj ilość liczb dla których chcesz wyliczyć statystyki: -1
Error in attempting to allocate memory

```

#### Dane 3
Input:
`5`, `0 3 4 1 2`

Output:
```
Podaj ilość liczb dla których chcesz wyliczyć statystyki: 5
Podaj liczby: 0 3 4 1 2
Min: 0
Max: 4
Average: 2.00
```

#### Dane 4
Input:
`Nie`

Output:
```
Podaj ilość liczb dla których chcesz wyliczyć statystyki: Nie
Podaj liczby: Min: 0
Max: 0
Average: -nan
```

#### Dane 5
Input:
`5`, `a b c d e`

Output:
```
Podaj ilość liczb dla których chcesz wyliczyć statystyki: 5
Podaj liczby: a b c d e
Min: 0
Max: 0
Average: 0.00
```

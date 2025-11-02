# Kalkulator marży BMI

Prosty program, który wyświetla kalendarz w formacie ASCII na podstawie danych podanych przez użytkownika

## Opis działania

Program prosi o ilość dni w miesiącu i dzień w którym zaczyna się tydzięń
### Przyjmowane formaty liczb

Liczby naturalne takie jak `1`, `5500` są przyjmowane
### Problemy z kodowaniem znaków

Jeśli w programie nie wyświetlają się polskie znaki (zazwyczaj w systemie windows), należy włączyć kodowanie UTF-8 za pomocą polecenia `chcp 65001` na systemie windows.

### Kompilacja
(po zainstalowaniu kompilatora gcc)
```
cd src
gcc -Wall main.c -o prosty-kalendarz
```

### Uruchomienie

Linux/macOS:
```
./prosty-kalendarz
```
Windows:
```
.\prosty-kalendarz.exe
```
### Przykładowe dane testowe
#### Dane 1
Dni miesiąca `30`
dzień startowy `1`

Output:
```
  1  2  3  4  5  6  7
  8  9 10 11 12 13 14
 15 16 17 18 19 20 21
 22 23 24 25 26 27 28
 29 30
```
#### Dane 2

Dni miesiąca `31`
dzień startowy `5`

Output:
```
                 1  2
  3  4  5  6  7  8  9
 10 11 12 13 14 15 16
 17 18 19 20 21 22 23
 24 25 26 27 28 29 30
 31
 ```

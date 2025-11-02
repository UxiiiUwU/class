# Podzielne przez k

Prosty program, który wyświetla liczby, które są podzielne  przez wartość `k` podaną przez użytkownika w zakresie 50-100

## Opis działania

Program prosi o liczbę k
### Przyjmowane formaty liczb

Liczby naturalne takie jak `4` lub `30` są przyjmowane
### Problemy z kodowaniem znaków

Jeśli w programie nie wyświetlają się polskie znaki (zazwyczaj w systemie windows), należy włączyć kodowanie UTF-8 za pomocą polecenia `chcp 65001` na systemie windows.

### Kompilacja
(po zainstalowaniu kompilatora gcc)
```
cd src
gcc -Wall main.c -o podzielne-przez-k
```

### Uruchomienie

Linux/macOS:
```
./podzielne-przez-k
```
Windows:
```
.\podzielne-przez-k
```
### Przykładowe dane testowe
#### Dane 1
k: `10`

Output:
```
50, 60, 70, 80, 90, 100, 
```
#### Dane 2
k: `-1`
Output:
```
Wpisano niepoprawne dane
```

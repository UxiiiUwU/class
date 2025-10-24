# Kalkulator marży BMI

Prosty program, który liczy wartość na skali Beauforta

## Opis działania

Program prosi o prędkość wiatru w `m/s`, aby obliczyć i zwrócić odpowiednią skalę.
### Przyjmowane formaty liczb

Liczby naturalne takie jak `1`, `5500` są przyjmowane
W przypadku liczb z miejscami po prcecinku trzeba przecinek zapisać jako kropkę np. `19.5` lub `4999.99`
Niepoprawny zapis: `20%`, `20,55`, `20,5`
### Problemy z kodowaniem znaków

Jeśli w programie nie wyświetlają się polskie znaki (zazwyczaj w systemie windows), należy włączyć kodowanie UTF-8 za pomocą polecenia `chcp 65001` na systemie windows.

### Kompilacja
(po zainstalowaniu kompilatora gcc)
```
cd src
gcc -Wall main.c -o skala-beauforta
```

### Uruchomienie

Linux/macOS:
```
./skala-beauforta
```
Windows:
```
.\skala-beauforta.exe
```
### Przykładowe dane testowe

| Wejście (m/s) | Węzły (kn) | Wynik Beaufort (B) | Opis |
|--------------:|-----------:|:------------------:|------|
| 0.2           | ~0.39      | 0                  | Calm |
| 5.0           | ~9.72      | 3                  | Gentle Breeze |
| 20.0          | ~38.88     | 8                  | Gale |
| 33.0          | ~64.14     | 12                 | Hurricane |

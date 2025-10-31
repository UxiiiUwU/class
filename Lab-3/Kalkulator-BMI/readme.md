# Kalkulator marży BMI

Prosty program, który liczy wartość i klasyfikację BMI

## Opis działania

Program prosi o Wagę i wzrost, oraz zwraca wartość i klasyfikację BMI
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
gcc -Wall main.c -o kalkulator-bmi
```

### Uruchomienie

Linux/macOS:
```
./kalkulator-bmi
```
Windows:
```
.\kalkulator-bmi.exe
```
### Przykładowe dane testowe

| Waga (kg) | Wzrost (m) | BMI (wynik) | Klasyfikacja |
|---------:|-----------:|------------:|--------------|
| 45       | 1.65       | ~16.5       | niedowaga |
| 68       | 1.75       | ~22.2       | prawidłowa |
| 90       | 1.80       | ~27.8       | nadwaga |
| 110      | 1.70       | ~38.1       | otyłość |

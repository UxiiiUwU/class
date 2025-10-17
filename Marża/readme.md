# Kalkulator marży w %

Prosty program, który dolicza marżę do ceny produktu

## Opis działania

Program prosi o cenę bazową produktu i o marżę, i liczy finalną cenę produktu
### Przyjmowane formaty liczb

Liczby naturalne takie jak `1`, `5500` są przyjmowane
W przypadku liczb z miejscami po prcecinku trzeba przecinek zapisać jako kropkę np. `19.5` lub `4999.99`
Niepoprawny zapis: `20%`, `20,55`, `20,5`
### Problemy z kodowaniem znaków

Jeśli w programie nie wyświetlają się polskie znaki (zazwyczaj w systemie windows), należy włączyć kodowanie UTF-8 za pomocą polecenia `chcp 65001` na systemie windows.

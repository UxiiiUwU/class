# Konwerter walut PLN -> USD

Prosty program, który przelicza kwotę PLN (zł) na USD ($)

## Opis działania

Program prosi o wartość PLN i aktualny kurs USD/PLN, aby dokonać konwersji, po czym wyświetla przekonwertowaną wartość w dolarach.

### Przyjmowane formaty liczb

**Uwaga:** Należy używać **kropki (`.`)** jako separatora dziesiętnego, a nie przecinka (`,`).  
Niepoprawny zapis: `3,756663`  
Poprawny zapis: `3.756663`

### Problemy z kodowaniem znaków

Jeśli w programie nie wyświetlają się polskie znaki (zazwyczaj w systemie windows), należy włączyć kodowanie UTF-8 za pomocą polecenia `chcp 65001` na systemie windows.

### Kompilacja
cd src
gcc main.c -o konwersja-walut

### Uruchomienie

Linux/macOS:
```
./konwersja-walut
```
Windows:
```
.\konwersja-walut.exe
```

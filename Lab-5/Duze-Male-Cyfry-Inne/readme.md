# Duże, Małe, Cyfry, Inne

Prosty program, wyświela ilośc użytych znaków danego typu w podanym przez użytkownika tekście

## Opis działania

Program prosi o tekst do przeanalizowania
### Przyjmowane formaty znaków
Znaki z zakresu ASCII sa przyjmowane. Program wspiera częściowo również zakres UTF-8 (zapisuje te znaki jako **INNE**)
### Kompilacja
(po zainstalowaniu kompilatora gcc)
```
cd src
gcc -Wall -Wextra main.c -o Duze-Male-Cyfry-Inne
```

### Uruchomienie

Linux/macOS:
```
./Duze-Male-Cyfry-Inne
```
Windows:
```
chcp 65001 
.\Duze-Male-Cyfry-Inne.exe
```
### Przykładowe dane testowe
#### Dane 1
Tekst: `Śląsk`

Output:
```
DUŻE: 0, MAŁE: 3, CYFRY: 0, INNE: 4
```
#### Dane 2
Tekst: `Czekolada`

Output:
```
DUŻE: 1, MAŁE: 8, CYFRY: 0, INNE: 0
```

#### Dane 3
Tekst: `Admin123.!`

Output:
```
DUŻE: 1, MAŁE: 4, CYFRY: 3, INNE: 2
```

#### Dane 4
Tekst: `\n` (brak tekstu)

Output:
```
DUŻE: 0, MAŁE: 0, CYFRY: 0, INNE: 0
```

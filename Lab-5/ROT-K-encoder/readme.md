# Enkoder ROT-K

Prosty program, który obfuskuje tekst na podstawie szyfru rotacyjnego

## Opis działania

Program prosi o przesunięcie znaków `k`, oraz tekst do obfuskacji.
### Przyjmowane formaty znaków
Dla wartości `k` przyjmowane są liczby naturalne takie jak np: `10`, `5`. Gdy wartośc k wyskoczy poza 25, program jest zamykany
Dla tekstu przyjmowane są wartości wewnątrz zakresu ASCII takich jak np: `fQpX2!?<`, `Tomek`, `Podatki_Drogie`
### Kompilacja
(po zainstalowaniu kompilatora gcc)
```
cd src
gcc -Wall -Wextra main.c -o rot-k
```

### Uruchomienie

Linux/macOS:
```
./rot-k
```
Windows:
```
chcp 65001 
.\rot-k.exe
```
### Przykładowe dane testowe
#### Dane 1
k: `0`
Tekst: `Admin123.!`

Output:
```
Szyfr: Admin123.!
KUCZ = 0
```
#### Dane 2

k: `4`
Tekst: `Admin123.!`

Output:
```
Szyfr: Ehqmr123.!
KUCZ = 4
```

#### Dane 3

k: `1984`
Tekst: `Admin123.!`

Output:
```
K nie może wynosić więcej niż 26
```

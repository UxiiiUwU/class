# Własna funkcja my_strlen

Prosty program imitujący działanie funkcji `strlen()` z biblioteki `c` Wraz z implementacją tej funkcji

## Opis działania

Program pyta się użytkownika o tekst, po czym oblicza jego długość zwracając ją użytkownikowi w formie tekstu.

### Kompilacja
```
cd src
gcc -Wall -Wextra main.c -o my-strlen
```
### Uruchomienie
```
Linux/macOS:

./my-strlen
```
Windows:
```
chcp 65001
.\my-strlen.exe
```
### Przykładowe dane testowe

#### Dane 1
```
Podaj tekst: adam skoczyl na czekoladki
Dlugosc twojego tekstu to: 26 znaków.
```

#### Dane 2
```
Podaj tekst: a niech cie karakanie!
Dlugosc twojego tekstu to: 22 znaków.
```

#### Dane 3
```
Podaj tekst: Pe-ppe-terodaktyl?
Dlugosc twojego tekstu to: 18 znaków.

```

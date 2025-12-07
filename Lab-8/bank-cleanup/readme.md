# System Kont Bankowych Refactor -- Lab 8

Prosty program symulujący obsługę 100 kont bankowych. Użytkownik wybiera
numer konta i wykonuje operacje takie jak wpłata, wypłata, sprawdzenie
salda lub zakończenie programu.

Program został niewielki rewrite kodu, aby ułatwić jego czytelność

## Opis działania

Program rozpoczyna się od pobrania numeru konta (0--99).

### Menu operacji
```
0 – zakończ program
1 – wpłata (DEPOSIT)
2 – wypłata (WITHDRAW)
3 – wyświetlenie salda (SHOW)
```
Program działa w pętli aż do wybrania opcji `0`.
### Kompilacja
```
cd src
gcc -Wall -Wextra main.c -o Bank-System2
```
### Uruchomienie
```
Linux/macOS:

./Bank-System2
```
Windows:
```
chcp 65001
.\Bank-System2.exe
```
### Przykładowe dane testowe

#### Dane 1
`-1`
```
Witaj w banku Standuper Polska! Podaj numer konta, aby kontynuować! 
-1
Takie konto nie istnieje
Zamykanie programu...
```

#### Dane 2
`20` `1` `100` `3` `2` `50` `0`
```
Witaj w banku Standuper Polska! Podaj numer konta, aby kontynuować! 
20      

Wybierz akcje:
0 - zakończ program,
1 - wpłata (DEPOSIT),
2 - wypłata (WITHDRAW),
3 - wyświetlenie salda (SHOW)
1
Wypisz kwotę do wpłaty: 100
Pomyślnie wpłacono kwotę na konto, twoje aktualne saldo to:
Twoje saldo to: 100.00zł

Wybierz akcje:
0 - zakończ program,
1 - wpłata (DEPOSIT),
2 - wypłata (WITHDRAW),
3 - wyświetlenie salda (SHOW)
3
Nr konta: 20
Twoje saldo to: 100.00zł

Wybierz akcje:
0 - zakończ program,
1 - wpłata (DEPOSIT),
2 - wypłata (WITHDRAW),
3 - wyświetlenie salda (SHOW)
2
Wypisz kwotę do wypłaty: 50
Pomyślnie wypłacono kwotę z konta, twoje aktualne saldo to:
Twoje saldo to: 50.00zł

Wybierz akcje:
0 - zakończ program,
1 - wpłata (DEPOSIT),
2 - wypłata (WITHDRAW),
3 - wyświetlenie salda (SHOW)
0
Zamykanie programu...
```

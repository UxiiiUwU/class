#include <stdio.h>
#define LICZBA_KONT 100
int main(void) {
    int accountNum;
    double accountBalance[LICZBA_KONT] = {0};
    double selectMoney;
    int selectMode;
    printf("Witaj w banku Standuper Polska! Podaj numer konta, aby kontynuować! \n");
    scanf("%d",&accountNum);
    if ((accountNum > LICZBA_KONT-1) || (accountNum < 0)) {
        printf("Takie konto nie istnieje\n");
        goto quit;
    }
    selectloop:
    printf("\nWybierz akcje:\n");
    printf("0 - zakończ program,\n");
    printf("1 - wpłata (DEPOSIT),\n");
    printf("2 - wypłata (WITHDRAW),\n");
    printf("3 - wyświetlenie salda (SHOW)\n");
    scanf("%d", &selectMode);
    if (selectMode == 1) {
        printf("Wypisz kwotę do wpłaty: ");
        scanf("%lf", &selectMoney);
        accountBalance[accountNum] = accountBalance[accountNum] + selectMoney;
        printf("Pomyślnie wpłacono kwotę na konto, twoje aktualne saldo to:\n");
        goto saldo;
    }

    if (selectMode == 2) {
        printf("Wypisz kwotę do wypłaty: ");
        scanf("%lf", &selectMoney);
        if (accountBalance[accountNum] < selectMoney) {
            printf("Niewystarczająca ilość środków na koncie\n");
            goto selectloop;
        }
        accountBalance[accountNum] = accountBalance[accountNum] - selectMoney;
        printf("Pomyślnie wypłacono kwotę z konta, twoje aktualne saldo to:\n");
        goto saldo;
    }

    if (selectMode == 3) {
        printf("Nr konta: %d\n", accountNum);
        saldo:
        printf("Twoje saldo to: %.2fzł\n", accountBalance[accountNum]);
        goto selectloop;
    }
    if (selectMode == 0) {
        quit:
        printf("Zamykanie programu...\n");
        return 0;
    }
    printf("Błąd wprowadzania danych. Spróbuj ponownie\n");
    goto selectloop;
    
}

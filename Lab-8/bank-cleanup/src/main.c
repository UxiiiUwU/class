#include <stdio.h>

#define MAX_ACCOUNTS 100

//fn prototypes

void print_menu(void);
void deposit(double saldo[], int acc);
void withdraw(double saldo[], int acc);
void show_balance(const double saldo[], int acc);

int main(void) {
    double accountBalance[MAX_ACCOUNTS] = {0};
    int accountNum;
    int selectMode;

    printf("Witaj w banku Standuper Polska! Podaj numer konta, aby kontynuować! \n");
    scanf("%d", &accountNum);

    if (accountNum < 0 || accountNum >= MAX_ACCOUNTS) {
        printf("Takie konto nie istnieje\n");
        printf("Zamykanie programu...\n");
        return 0;
    }

    while (1) {
        print_menu();
        scanf("%d", &selectMode);

        switch (selectMode) {
            case 1:
                deposit(accountBalance, accountNum);
                break;

            case 2:
                withdraw(accountBalance, accountNum);
                break;

            case 3:
                show_balance(accountBalance, accountNum);
                break;

            case 0:
                printf("Zamykanie programu...\n");
                return 0;

            default:
                printf("Błąd wprowadzania danych. Spróbuj ponownie\n");
                break;
        }
    }

    return 0;
}

//fn implementations

void print_menu(void) {
    printf("\nWybierz akcje:\n");
    printf("0 - zakończ program,\n");
    printf("1 - wpłata (DEPOSIT),\n");
    printf("2 - wypłata (WITHDRAW),\n");
    printf("3 - wyświetlenie salda (SHOW)\n");
}

//deposit
void deposit(double saldo[], int acc) {
    double amount;

    printf("Wypisz kwotę do wpłaty: ");
    scanf("%lf", &amount);

    saldo[acc] += amount;
    printf("Pomyślnie wpłacono kwotę na konto, twoje aktualne saldo to:\n");
    printf("Twoje saldo to: %.2fzł\n", saldo[acc]);
}

//withdraw
void withdraw(double saldo[], int acc) {
    double amount;

    printf("Wypisz kwotę do wypłaty: ");
    scanf("%lf", &amount);

    if (saldo[acc] < amount) {
        printf("Niewystarczająca ilość środków na koncie\n");
        return;
    }

    saldo[acc] -= amount;
    printf("Pomyślnie wypłacono kwotę z konta, twoje aktualne saldo to:\n");
    printf("Twoje saldo to: %.2fzł\n", saldo[acc]);
}

//balance
void show_balance(const double saldo[], int acc) {
    printf("Nr konta: %d\n", acc);
    printf("Twoje saldo to: %.2fzł\n", saldo[acc]);
}

#include <stdio.h>

int main(void) {
    float amountPLN, rate, amountUSD;
    printf("Witaj w konwerterze walut PLN -> USD\n");
    printf("Podaj kwotę PLN do skonwertowania (użyj kropkę zamiast przecinka np. 4999.99)\n");
    scanf("%f", &amountPLN);
    printf("Podaj kurs USD/PLN z dzisiejszej tableli NBP (użyj kropkę zamiast przecinka np. 3.6467)\n");
    scanf("%f", &rate);
    if (amountPLN < 0 || rate < 0) {
        printf("Błąd. Wpisano niepoprawne dane\n");
        return 0;
        amountUSD= amountPLN/rate;
    }
    printf("%.2f USD\n", amountUSD);
}
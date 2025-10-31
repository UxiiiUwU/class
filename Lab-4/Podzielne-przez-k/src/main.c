#include <stdio.h>

int main(void) {
    int k, i;
    int foundNums = 0;
    printf("Kalkulator liczb podzielnych przez k 1.0\n");
    printf("Podaj liczbę k\n");
    scanf("%d", &k);
    if (k > 0) {

    } else {
        printf("Wpisano niepoprawne dane\n");
        return 0;
    }
    printf("Wynik:\n");
    for (i=50;i<101;i++) {
        if (i % k == 0) {
            foundNums++;
            printf("%d, ",i);
        }
    }
    if (foundNums == 0) {
        printf("Nie znaleziono liczb podzielnych przez %d w zakresie 50-100", k);
    }
    printf("\n");

}
#include <stdio.h>

int main(void) {
    int arrayLen;
    int maxDifference = 0;
    int currentDiff;

    printf("Program do obliczania najwiekszej roznicy pomiedzy elementami\n");
    printf("Podaj liczbe elementow do porownania: ");
    scanf("%d", &arrayLen);
    if (arrayLen < 2) {
        printf("za mało danych, aby policzyć różnice");
        return 0;
    }
    int arr[arrayLen]; 

    for (int i = 0; i < arrayLen; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrayLen - 1; i++) {
        currentDiff = arr[i] - arr[i+1];
        printf("|%d-%d| = ", arr[i], arr[i+1]);
        if (currentDiff < 0) currentDiff = -currentDiff;
        printf("%d\n", currentDiff);
        if (currentDiff > maxDifference) {
            maxDifference = currentDiff;
        }
    }

    printf("Maksymalna roznica to: %d\n", maxDifference);
    return 0;
}

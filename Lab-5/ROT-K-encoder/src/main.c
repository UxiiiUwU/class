#include <stdio.h>

int main(void) {
    int k, usrText;
    int loopcount = 0;
    printf("Szyfrowanie ROK-k 1.0\n");
    printf("Proszę podać przesunięcie znaków k\n");
    printf("k=");
    scanf("%d", &k);
    if (k > 25) {
        printf("K nie może wynosić więcej niż 26\n");
        return 0;
    }
    getchar();
    printf("Proszę podać tekst do zaszyfrowania\n");
    printf("Tekst: ");

    while(1) {
        usrText = getchar();
        loopcount++;
        if (loopcount == 1) {
            printf("Szyfr: ");
        }
        if (usrText == '\n')
            break;           
        if (usrText >= 'A' && usrText <= 'Z') {
            usrText = ((usrText - 'A' + k) % 26) + 'A';
        } else if (
            usrText >= 'a' && usrText <= 'z') {
            usrText = ((usrText - 'a' + k) % 26) + 'a';
        }
        putchar(usrText);
    }
    printf("\n");
    printf("KUCZ = %d\n", k);

}

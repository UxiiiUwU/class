#include <stdio.h>

int main(void) {
    int userText;
    int countBig = 0;
    int countSmall = 0;
    int countNumber = 0;
    int countOther = 0;
    printf("Duze-Male-Cyfry-Inne 1.0\n");
    printf("Wpisz tekst\n");
    while(1) {
        userText = getchar();
        
        if (userText == '\n') {
            printf("\n");
            break;
        }

        if (userText >= 'A' && userText <= 'Z') {
            countBig++;
            continue;
        }

        if (userText >= 'a' && userText <= 'z') {
            countSmall++;
            continue;
        }

        if (userText >= '0' && userText <= '9') {
            countNumber++;
            continue;
        }
        countOther++;
    }

    printf("DUŻE: %d, MAŁE: %d, CYFRY: %d, INNE: %d\n", countBig, countSmall, countNumber, countOther);
}
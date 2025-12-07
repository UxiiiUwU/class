#include <stdio.h>

int my_strlen(const char s[]) {
    int strlength = 0;
    while (s[strlength] != '\0' && s[strlength] != '\n') {
        strlength++;
    }
    return strlength;
}

int main(void) {
    char buffer[100];

    printf("Podaj tekst: ");
    fgets(buffer, sizeof(buffer), stdin);

    int dlugosc = my_strlen(buffer);

    printf("Dlugosc twojego tekstu to: %d znaków.\n", dlugosc);

    return 0;
}

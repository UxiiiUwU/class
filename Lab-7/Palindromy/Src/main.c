#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char buffer[100];
    int buffer_len;
    int i;

    printf("Podaj tekst do sprawdzenia czy nie jest palindromem: \n");
    fgets(buffer, 100, stdin);

    buffer[strcspn(buffer, "\n")] = '\0';

    buffer_len = strlen(buffer);

    for (i = 0; i < buffer_len; i++) {
        if (toupper(buffer[i]) != toupper(buffer[buffer_len - i - 1])) {
            printf("Nie jest palindromem\n");
            break;    // ← ZOSTAJE
        }
    }
    if (i == buffer_len)
        printf("Jest palindromem\n");

    return 0;
}

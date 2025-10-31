#include <stdio.h>

int main(void) {
    int liczbaDni, dzienStartowy;
    int i;
    char emptyText[4] = "";
    int i2;
    printf("Generator kalendarza ASCII 1.0\n");
    printf("Podaj ilość dni miesiąca, które ma zawierać twój kalendarz.\n");
    scanf("%d", &liczbaDni);
    printf("Podaj od którego dnia tygodnia ma się zaczynać podany miesiąc (1 - Poniedziałek, 7 - Niedziela)\n");
    scanf("%d", &dzienStartowy);
    printf("Oto twój kalendarz w ASCII\n");

    for (i = 0; i < liczbaDni + dzienStartowy - 1; i++) {
        if (i % 7 == 0) {
            printf("\n");
        }
        if (i < dzienStartowy - 1) {
            printf("%3s", emptyText);
        } else {
            int dzien = i - dzienStartowy + 2;
            if (dzien <= liczbaDni) {
                printf("%3d", dzien);
            }
        }
    }

    printf("\n");
}

#include <stdio.h>

int main(void) {
    int arr_x;
    int arr_y;

    printf("Podaj wymiary macierzy wejściowej (wiersze kolumny):\n");
    scanf("%d %d", &arr_y, &arr_x);
    printf("Wymiary macierzy: %dx%d\n", arr_y, arr_x);
    int base_array[arr_y][arr_x];
    for (int i = 0; i < arr_y; i++) {
        for (int j = 0; j < arr_x; j++) {
            scanf("%d", &base_array[i][j]);
        }
    }
    int converted_array[arr_x][arr_y];
    for (int i = 0; i < arr_x; i++) {
        for (int j = 0; j < arr_y; j++) {
            converted_array[i][j] = base_array[j][i];
        }
    }
    printf("\nMacierz po transpozycji: %dx%d\n", arr_x, arr_y);
    for (int i = 0; i < arr_x; i++) {
        for (int j = 0; j < arr_y; j++) {
            printf("%d ", converted_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void get_stats(const int *tab, int n, int *min, int *max, double *avg) {
    //Max
    *max = *tab;
    for (int i=0;i<n;i++) {
        if (*(tab+i) > *max) {
            *max = *(tab+i);
        }
    }

    //Min
    *min = *tab;
    for (int i=0;i < n;i++) {
        if (*(tab+i) < *min) {
            *min = *(tab+i);
        }
    }

    //Avg
    *avg =0;
    for (int i=0; i < n; i++) {
        *avg += *(tab + i);
    }
    *avg = *avg / n;
}

int main(void) {
    int n;
    printf("Statystyki 1.0\n");
    printf("Podaj ilość liczb dla których chcesz wyliczyć statystyki: ");
    scanf("%d", &n);

    //Table memory allocation
    int *data = (int *)malloc(n * sizeof(int));
    if (data == NULL) {
        printf("Error in attempting to allocate memory\n");
        return 1;
    }

    //Reading input 
    printf("Podaj liczby: ");
    for (int i=0;i < n; i++) {
        scanf("%d", &data[i]);
    }

    int min, max;
    double avg;
    get_stats(data, n, &min, &max, &avg);

    //Printing Result
    printf("Min: %d\n",min);
    printf("Max: %d\n",max);
    printf("Average: %.2f\n",avg);

    free(data);

    return 0;
}

#include <stdio.h>

int main(void) {
    float purchaseNet, marginPercent, sellingPrice;
    printf("=== Kalkulator marży 1.0 ===\n");
    printf("Podaj cenę zakupu netto, na którą chciałbyś nałożyć marżę\n");
    scanf("%f", &purchaseNet);
    printf("Podaj wartość planowanej marży w procentach (bez znaku %% np. 50)\n");
    scanf("%f", &marginPercent);
        if (purchaseNet < 0 || marginPercent < 0) {
        printf("Błąd. Wpisano niepoprawne dane\n");
        return 0;}
    sellingPrice = purchaseNet * (1+(marginPercent/100));
    
    printf("Cena produktu po nałożeniu marży to: %.2f\n", sellingPrice);
}
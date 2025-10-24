#include <stdio.h>

int main(void) {
    float kg, m, bmi;
    char bmi_classification[4][20] = {
        "niedowaga",
        "prawidłowa",
        "nadwaga",
        "otyłość"
};
    printf("Kalkulator BMI 1.0\n");
    printf("Podaj wagę (kg)\n");
    scanf("%f", &kg);
    printf("Podaj wzrost (m)\n");
    scanf("%f", &m);
    bmi = kg / (m * m);
    
    if (kg < 0 || m < 0) {
        printf("Niepoprawne dane wejściowe\n");
        return 0;
    }
//Niedowaga
    if (bmi < 18.5) {
        printf("BMI: %.1f. Klasyfikacja: %s\n",bmi,bmi_classification[0]);
        return 0;
    }

//Prawidłowa
    if (bmi < 25) {
        printf("BMI: %.1f. Klasyfikacja: %s\n",bmi,bmi_classification[1]);
        return 0;
    }

//Nadwaga
    if (bmi < 30) {
        printf("BMI: %.1f. Klasyfikacja: %s\n",bmi,bmi_classification[2]);
        return 0;
    }

//Otyłość
    if (bmi >= 30.0) {
        printf("BMI: %.1f. Klasyfikacja: %s\n",bmi,bmi_classification[3]);
        return 0;
    }
    
}
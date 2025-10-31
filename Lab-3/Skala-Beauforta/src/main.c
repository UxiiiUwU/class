#include <stdio.h>

int main(void) {
    float v_ms, knots, scale_out;
    char beaufort_scale[13][20] = {
    "Calm",             // < 1
    "Light air",        // 1–3
    "Light breeze",     // 4–6
    "Gentle breeze",    // 7–10
    "Moderate breeze",  // 11–16
    "Fresh breeze",     // 17–21
    "Strong breeze",    // 22–27
    "Near gale",        // 28–33
    "Gale",             // 34–40
    "Strong gale",      // 41–47
    "Storm",           // 48–55
    "Violent storm",   // 56–63
    "Hurricane"        // ≥ 64
};
    printf("Konwerter prędkości wiatru na Skale Beauforta 1.0\n");
    printf("Podaj prędkość wiatru w m/s (np: 20.5)\n");
    scanf("%f", &v_ms);
    knots = v_ms * 1.94384;
    if (knots < 0) {
        printf("Błąd, niepoprawne dane wejściowe\n");
        return 0;
    }
//Calm
    if (knots < 1) {
        printf("Siła wiatru: 0 w skali Beauforta %s\n", beaufort_scale[0]);
        return 0;
    }
//Light air
    if (knots <= 3) {
        printf("Siła wiatru: 1 w skali Beauforta %s\n", beaufort_scale[1]);
        return 0;
    }
//Light breeze
    if (knots <= 6) {
        printf("Siła wiatru: 2 w skali Beauforta %s\n", beaufort_scale[2]);
        return 0;
    }
//Gentle breeze
    if (knots <= 10) {
        printf("Siła wiatru: 3 w skali Beauforta %s\n", beaufort_scale[3]);
        return 0;
    }
//Moderate breeze
    if (knots <= 16) {
        printf("Siła wiatru: 4 w skali Beauforta %s\n", beaufort_scale[4]);
        return 0;
    }
//Fresh breeze
    if (knots <= 21) {
        printf("Siła wiatru: 5 w skali Beauforta %s\n", beaufort_scale[5]);
        return 0;
    }
//Strong breeeze
    if (knots <= 27) {
        printf("Siła wiatru: 6 w skali Beauforta %s\n", beaufort_scale[6]);
        return 0;
    }
//Near Gale
    if (knots <= 33) {
        printf("Siła wiatru: 7 w skali Beauforta %s\n", beaufort_scale[7]);
        return 0;
    }
//Gale
    if (knots <= 40) {
        printf("Siła wiatru: 8 w skali Beauforta %s\n", beaufort_scale[8]);
        return 0;
    }
//Strong Gale
    if (knots <= 47) {
        printf("Siła wiatru: 9 w skali Beauforta %s\n", beaufort_scale[9]);
        return 0;
    }
//Storm
    if (knots <= 55) {
        printf("Siła wiatru: 10 w skali Beauforta %s\n", beaufort_scale[10]);
        return 0;
    }
//Violent Storm
    if (knots <= 63) {
        printf("Siła wiatru: 11 w skali Beauforta %s\n", beaufort_scale[11]);
        return 0;
    }
//Hurricane
    if (knots >= 64) {
        printf("Siła wiatru: 12 w skali Beauforta %s\n", beaufort_scale[12]);
        return 0;
    }
}
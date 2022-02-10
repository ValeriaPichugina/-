#include <stdio.h>

int main() {
    float d = 2.54;
    float res, cm;

    printf("Enter your height in cm: ");
    scanf("%f", &cm);

    res = cm / d;

    printf("Your height in inches: %f\n", res);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float res;

    printf("Enter 1 number: ");
    scanf("%d", &a);

    printf("Enter 2 number: ");
    scanf("%d", &b);

    printf("Enter 3 number: ");
    scanf("%d", &c);

    printf("Enter 4 number: ");
    scanf("%d", &d);

    printf("Enter 5 number: ");
    scanf("%d", &e);

    res = (a + b + c + d + e)/(float)5;

    printf("Average: %f\n", res);

    return 0;
}
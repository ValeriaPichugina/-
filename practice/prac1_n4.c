#include <stdio.h>

int main() {
    double k = 45.3;
    double num, a;

    printf("Enter value: ");
    scanf("%le", &num);
    while (num < k) {
        printf("Enter value: ");
        scanf("%le", &num);
        if (num > k) {
            a = num;
            break;
        }
    }

    printf("Value: %f\n", a);

    return 0;
}
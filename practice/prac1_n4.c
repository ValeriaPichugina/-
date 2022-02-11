#include <stdio.h>

int main() {
    double k = 45.3;
    double num, a;
    int c;

    printf("Enter value: ");
    scanf("%le", &num);
    c = 1;

    while (num < k) {
        printf("Enter value: ");
        scanf("%le", &num);
        c++;

        if (num > k) {
            a = num;
            break;
        }
    }

    printf("Number of place: %d\n", c);

    return 0;
}
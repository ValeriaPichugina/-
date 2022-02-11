#include <stdio.h>

int main() {
    int a, b, i;
    int count;

    printf("Enter number of values: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        b = 0;
        printf("Enter value: ");
        scanf("%d", &b);
        count += b;
    }

    printf("Sum = %d\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, i;
    int count, min;

    printf("Enter number of values: ");
    scanf("%d", &a);

    printf("Enter value: ");
    scanf("%d", &b);
    
    min = b;

    for (i = 0; i < a-1; i++) {
        b = 0;
        printf("Enter value: ");
        scanf("%d", &b);
        if (b < min) {
            min = b;
        }
    }

    printf("Minimum = %d\n", min);

    return 0;
}
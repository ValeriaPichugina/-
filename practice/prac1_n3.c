#include <stdio.h>

int main() {
    int k = 0, sum = 0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    int val;

    while ((scanf("%d", &val)) & (val != EOF)) {
        k ++;
        sum += val;
    }

    printf("k = %d\nsum = %d\n", k, sum);

    return 0;
}
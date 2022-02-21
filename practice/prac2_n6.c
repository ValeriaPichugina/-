#include <stdio.h>

int main() {
    int l = 0, r = 0;

    printf("Enter first number: ");
    scanf("%d", &l);

    int s = 0, k = 1;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while ((scanf("%d", &r)) & (r != EOF)) {
        k ++;
        if (r < l) {
            printf("index: %d\n", k);
            s ++;
        }
        l = r;
    }

    printf("sum: %d\n", s);

    return 0;
}
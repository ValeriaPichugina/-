#include <stdio.h>

int main() {
    int a = 0, b = 0;
    
    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while ((scanf("%d", &a)) & (a != EOF)) {
        if (a < b) {
            printf("Не является\n");
            return 1;
        }
        else {
            b = a;
            a = 0;
        }
    }
    
    printf("Является\n");

    return 0;
}
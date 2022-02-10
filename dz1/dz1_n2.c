#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("Number is even\n");

        return 0;
    }
    else {
        printf("Number is odd\n");

        return 0;
    }
}
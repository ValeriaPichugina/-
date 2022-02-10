#include <stdio.h>

int main() {
    int days = 365;
    int num, res;

    printf("Enter yor age: ");
    scanf("%d", &num);

    res = days * num;

    printf("Your age : %d years or %d days\n", num, res);

    return 0;
}
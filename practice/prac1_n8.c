#include <stdio.h>

int main() {
    int tmp = 0;
    int count = 0;
    int entry, max=0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while((scanf("%d", &entry)) & (entry != EOF)) {
        if ((entry-tmp)%2==0) {
            count++;
            tmp = entry;
        }
        else if (count>max) {
            max = count;
            count = 0;
        }

        }
    if (count>max) {
        max = count;
        }

    printf("Максимальное количество подряд идущих четных элементов: %d",max);

    return 0;
}
#include <stdio.h>

int main() {
    double min, tmp, en;
    int count = 1;
    int i = 0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while((scanf("%lf", &en)) & (en != EOF)) {
        if (i==0){
            i=1;
            min = en;
        }
        if (min > en){
            printf("\n%d\n",count-1);
            return 0;
        }
        else
            count++;

    }

    return 0;
}
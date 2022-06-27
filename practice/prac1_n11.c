#include <stdio.h>

int main() {
    int tmp = 0;
    int count = 0;
    int entry, max=0,flag = 0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while((scanf("%d",&entry))&(entry != EOF)){
        if (flag == 0){
            flag = 1;
            tmp = entry;
        }
        if (entry==tmp) count++;
        else{
            tmp = entry;
            count = 1;
            if (count>max) max = count;
        }
    }
    if (count>max) {
        max = count;
            }

    printf("Max equal numbers sequence length: %d",max);

    return 0;
}
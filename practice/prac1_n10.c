#include <stdio.h>

int main() {
    int tmp = 0;
    int count = 0;
    int entry, total = 0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while((scanf("%d",&entry))&(entry != EOF)){
        if(entry-tmp>0){
            tmp = entry;
            count++;
        }
        else{
            tmp = entry;
            total++;
            printf("[%d] Sequence length: %d\n",total,count);
            count = 1;
        }
    }
    if (total!=0){
        total++;
        printf("[%d] Sequence length: %d\n",total,count);
        printf("Total: %d\n",total);
    }
    else printf("Total: %d\n",total);

    return 0;
}
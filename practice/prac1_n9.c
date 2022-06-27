#include <stdio.h>

int main() {
    int tmp = 0;
    int count = 0;
    int entry, flag = 0;

    puts("Enter value.");
    puts("Enter the EOF character to end input." );

    while((scanf("%d", &entry)) & (entry != EOF)){
        if (flag == 0){
            flag = 1;
            if (entry%2!=0) tmp = 1;
        }
        if ((entry-tmp)%2==0){
            count++;
            tmp = entry;
        }
        else {
            if (tmp%2 == 0) printf("Even sequence length: %d\n",count); else printf("Odd sequence length: %d\n",count);
            count = 1;
            tmp = entry;
        }
    }
    if (tmp%2 == 0) printf("Even sequence length: %d\n",count); else printf("Odd sequence length: %d\n",count);
    return 0;

}

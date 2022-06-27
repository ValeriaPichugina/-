#include <stdio.h>
#include <math.h>

int distance() {

    double x1,y1,x2,y2,dis;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("%lf",sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));

    return 0;
}

int gcd() {

    int x1,x2;

    printf("Enter 1 number: ");
    scanf("%d",&x1);

    printf("Enter 2 number: ");
    scanf("%d",&x2);

    while(x1!=x2){
        if(x1>x2) x1-=x2;
        else x2 -= x1;
    }

    printf("\n%d",x1);

    return 0;

}

int func3() {

    int x1, count=0, r;

    printf("Enter a number: ");

    scanf("%d",&x1);

    r=x1;

    while(x1!=0){
        x1 = x1 / 10;
        count++;
    };
    printf("%d\n",count);
    int m[count], i;
    for (i=0;i<=count;i++){
        m[i] = r%10;
        r = r/10;
    }
    for(i=0;i<count;i++) printf("%d ",m[i]);

    return 0;
}

int func4() {

    int entry,res;

    printf("Enter a number: ");

    scanf("%d",&entry);

    int i;

    for (i = 1; i < entry; i++){
        if (entry % i == 0){
            res = i;
        }
    }
    if (res > 1){
        puts("non prime");
        return 1;
    }
    else{
        puts("prime");
        return 0;

    }
}


int main() {
    
   func4();

    return 0;
}
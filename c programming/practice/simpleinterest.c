#include<stdio.h>
int main(){

    int p,r,t;
    printf("pricipal amount :");
    scanf("%d",&p);
    printf("pricipal rate;");
    scanf("%d",&r);
    printf("pricipal time :");
    scanf("%d",&t);
    int SI;
    SI = p*r*t/100;
    printf("simple interest is :%d",SI);
    return 0;

    
}
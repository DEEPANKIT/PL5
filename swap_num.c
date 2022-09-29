#include <stdio.h>
#include <math.h>
    int main(){
    //swapping without using third variable
    printf("enter 2 no.s-\n");
    int a,b;
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the swapped no.s are-%d%d\n",a,b);
    return 0;
}
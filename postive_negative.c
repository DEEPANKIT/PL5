#include <stdio.h>
#include <math.h>
    int main(){
    printf("Enter a number to check\n");
    int num;
    scanf("%d",&num);
    num<0?printf("Negative"):printf("Positive");
    return 0;
}
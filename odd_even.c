#include <stdio.h>
#include <math.h>
    int main(){
    //to find whether a number is odd or even using turnery operator
    printf("Enter the number to check\n");
    int num;
    scanf("%d",&num);
    (num%2)==0?printf("Even"):printf("Odd");
    return 0;
}
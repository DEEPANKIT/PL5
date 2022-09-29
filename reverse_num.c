#include <stdio.h>
#include <math.h>
    int main(){
    printf("enter a 5 digit number-\n");
    int num;
    scanf("%d",&num);
    int reverse , count = 5;
    while(num!=0){
        int m = num%10;
        reverse+= m*pow(10,--count);
        num/=10;
    }
    printf("the reverse of a number is-%d\n",reverse);
    return 0;
}
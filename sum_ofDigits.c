#include <stdio.h>
#include <math.h>
    int main(){
        // we have to find sum of first and last digit of a number 
    printf("Enter a number-\n");
    int num;
    scanf("%d",&num);
    int temp = num;
    int length;
    while(temp!=0){
        int m=temp%10;
        length++;
        temp/=10;
    }
    int sum=0;
    for(int i =1; num!=0; i++)
    {
        int m = num%10;
        if(i==1 || i==length-1)
        sum+=m;
        num/=10;

    }
    printf("The sum of first and last digit is-%d\n",sum);
    return 0;
}
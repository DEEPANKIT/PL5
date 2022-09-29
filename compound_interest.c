#include <stdio.h>
#include <math.h>
    int main(){
     printf("Enter the principal amount,rate,time- \n");
    float p,r;
    int time;
    scanf("%f%f",&p,&r);
    scanf("%d",&time);
    float ci = p*(pow(1+r/100,time)-1);
     printf("the compund interest for your amount is-%f\n",ci);
    return 0;
}
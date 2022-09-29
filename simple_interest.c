#include <stdio.h>
#include <math.h>
    int main(){
    printf("Enter the principal amount,rate,time- \n");
    float p,r;
    int time;
    scanf("%f%f",&p,&r);
    scanf("%d",&time);
    float si = (p*r*time)/100;
    printf("the simple interest for your amount is-%f\n",si);
    return 0;
}
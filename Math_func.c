#include <stdio.h>
#include <math.h>
#define Pi 3.14
    int main(){
    printf("Enter some value\n");
    float num;
    scanf("%f",&num);
    //sin takes value in radians
    printf("The value of sin is-%f\n",sin((num*Pi)/180));
    printf("The value of cos is-%f\n",cos((num*Pi)/180));
    printf("The value of log is-%f\n",log(num));
    printf("The value of sqrt is-%f\n",sqrt(num));
    printf("The value of pow is-%f\n",pow(num,2));
    return 0;
}
#include <stdio.h>
#include <math.h>
    int main(){
    printf("A quadratic equation is in the form of ax2 + bx + c\n");
    printf("Give the values of a,b,c\n");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    //we have to find the value D
    float x1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    float x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("The roots of the equation are-\n%.1f%.1f",x1,x2);
    return 0;
}
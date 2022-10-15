#include <stdio.h>
#include <math.h>
int main(){
    float basic;
    printf("Enter basic salary of the user-\n");
    scanf("%f",&basic);
    float da = (10*basic)/100;
    float ta = (12*basic)/100;
    float gross_salary = basic+da+ta;
    printf("The gross salary of the user is-%.2f\n",gross_salary);
    return 0;
}

int main(){

    int side;


    printf("Side of square:  ");
    scanf("%d", &side);

    int area;

    area= side*side;

    printf("The area is: %d", area);

    

    return 0;
}


#include <stdio.h>
#include <math.h>
    int main(){
    //checking whether a given year is a leap year or not
    //if year is divisible by 4 it should not be divisible by 100
    //if year is divisible by 4 and 100 both then it should also be div by 400
    printf("Enter the year\n");
    int year;
    scanf("%d",&year);

    if(year%4==0){
        if(year%100!=0)
        printf("Leap year");
        else if(year%400==0)
        printf("Leap year");
        else
        printf("Not a leap year");
    }
    else
    printf("Not a leap year");
    return 0;
}
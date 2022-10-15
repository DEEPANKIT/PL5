#include <stdio.h>
#include <math.h>
    int main(){
    printf("To get the grade of steel Enter the following values\n");
    printf("Hardness--\n");
    int hd;
    scanf("%d",&hd);
    printf("Carbon Content--\n");
    float cc;
    scanf("%f",&cc);
    printf("Tensile Strength--\n");
    int ts;
    scanf("%d",&ts);
    // using nested if else
    if(hd>50){
        if(cc<0.7 && ts>5600)
        printf("Grade 10");
        if(cc<0.7 && ts<5600)
        printf("Grade 9");
        if(ts>5600 && cc>0.7)
        printf("Grade 7");
        if(cc>0.7 && ts<5600)
        printf("Grade 6");
    }
    else{
        if(cc<0.7 && ts>5600)
        printf("Grade 8");
        else
        printf("Grade 6");

        printf("Grade 5");
    }
    return 0;
}
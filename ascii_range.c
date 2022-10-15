#include <stdio.h>
#include <math.h>
    int main(){
    printf("Enter what you wanna check\n");
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Character is a Capital letter\n");
    else if(ch>=97 && ch<=122)
        printf("Character is a Small letter\n");
    else if(ch>=48 && ch<=57)
        printf("Character is a Digit\n");
    else
        printf("Character is a special symbol");
    return 0;
}
#include <stdio.h>
#include <math.h>
    int main(){
    // you can initialize a string using char *s = "abc123"
    //use the type casting functions of string 
    // char *str = "Hello";
    // char str1[] = "Hello";
    //taking string input in c
    printf("Give what you wanna convert to float\n");
    char str[20];
    gets(str);
    //converting string to float
    printf("%f\n",atof(str));
    //coverting string to int
    printf("%d\n",atoi(str));
    //converting string to long
    printf("%ld\n",atol(str));
    //converting int to string
    printf("%s\n",itoa(atof(str)));
    //converting long to string
    printf("%s\n",ltoa(atol(str)));
    return 0;
}
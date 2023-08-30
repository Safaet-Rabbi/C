//lower to uppercase using library function
#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter any lowercase : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("Uppercase letter = %c",upper);
    }

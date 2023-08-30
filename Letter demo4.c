//upper to lowercase using library function
#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter any uppercase : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("lowercase letter = %c",lower);
    }


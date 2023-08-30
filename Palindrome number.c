#include<stdio.h>
int main()
{
    int m,n,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        m=temp%10;
        sum=sum*10 + m;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}

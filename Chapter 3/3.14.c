#include<stdio.h>
int main()
{
    int a,m,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    a=m%n;

    if(a==0)
    {
        printf("m is the multiple of n");
    }
    else
    {
        printf("m is not the multiple of n");
    }


}

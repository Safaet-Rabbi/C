#include<stdio.h>
int main()
{
    int x,y,z,n;
    printf("Enter any number: ");
    scanf("%d",&n);

    x=n%1000;
    y=x%100;
    z=y%10;
    printf("%d\n",n);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
}

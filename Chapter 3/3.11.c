#include<stdio.h>
int main()
{
    int n,sum,sum1=0,sum2=0,sum3=0,sum4=0;
    printf("Enter number : ");
    scanf("%d",&n);
    sum1=n%10;
    n=n/10;
     sum2=n%10;
    n=n/10;
     sum3=n%10;
    n=n/10;
     sum4=n%10;
    n=n/10;
    sum=(sum1+sum2+sum3+sum4);
    printf("The sum is: %d",sum);
}

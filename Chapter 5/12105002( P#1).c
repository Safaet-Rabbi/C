#include<stdio.h>
int main()
{
 int D,remainder,sum=0;
 printf("Enter a given integer Number:");
 scanf("%d",&D);
 while(D>0)
 {
    remainder=D%10;
    sum=sum+remainder;
    D=D/10;
 }
 printf("sum of given digits=%d",sum);
 return 0;
}


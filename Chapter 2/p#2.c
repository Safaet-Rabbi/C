#include<stdio.h>
int main()
{
 int i,fact=1,m;
 printf("Enter a integer number: ");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
     fact=fact*i;
 }
 printf("%d",fact);
 return 0;
}

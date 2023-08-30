#include<stdio.h>
#include<conio.h>
void main()
{
int x,a,b,c;
a=x%1000;
b=a%100;
c=b%10;
printf("Enter a four digit number: ");
scanf("%d",&x);
a=x%1000;
b=a%100;
c=b%10;
printf("%d\n",x);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
getch();
}

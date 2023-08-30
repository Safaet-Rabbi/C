#include<stdio.h>
int main()
{
    int a,b,c;
    float s,area;
    a=b=c=s=0;

    printf("Enter a,b,c = ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is: %.2f",area);
}

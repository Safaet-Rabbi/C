#include<stdio.h>
int main()
{
    int a,b,c,sum,sub,mul;
    float div;

    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("The Sum is = %d\n",sum);
    printf("The Sub is = %d\n",sub);
    printf("The Mul is = %d\n",mul);
    printf("The Div is = %f\n",div);
    return 0;

}


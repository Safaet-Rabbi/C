#include<stdio.h>
int main()
{
    int num,sum=0,temp,value;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        value=temp%10;
        temp=temp/10;
        sum=sum+value;
    }
    printf("The sum is %d\n",sum);
}

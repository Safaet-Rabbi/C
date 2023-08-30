#include<stdio.h>
int main()
{
    int num,i,count=0,temp,binary[10],dig;

    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        dig=temp%2;
        temp=temp/2;
        binary[count]=dig;
        count++;
    }


    for(i=(count-1);i>=0;i--)
    {
        printf("%d",binary[i]);
    }


}

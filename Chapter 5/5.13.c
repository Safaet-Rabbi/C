#include<stdio.h>
int main()
{
    int sum=0,count=0,i;
    for(i=0;i<=100;i++)
    {
        if(i%6==0 && i%4!=0)
        {
            sum+=i;
            count++;
            printf("%d ",i);
        }
    }
    printf("Sum of number is %d\n",sum);
    printf("Count of number is %d\n",count);
}








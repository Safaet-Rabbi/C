#include<stdio.h>
int main()
{
    int sum=0,num,count=0;
    for(num=101;num<200;num++)
    {
        if(num%7==0)
        {
            count++;
            sum+=num;
        }
    }
    printf("Count = %d\n",count);
    printf("Sum = %d\n",sum);
}

#include<stdio.h>
int main()
{
    float a,avg,sum=0;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            sum=sum+a;
            count++;

        }
    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
}

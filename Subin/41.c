#include<stdio.h>
int main()
{
    int i,j,k,n,T;
    double sum,fact;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=1;j<=n;j++)
        {
            fact=1;
            for(k=1;k<=j;k++)
            {
                fact=fact*k;
            }
            sum=sum+(double)j/fact;

        }
        printf("%.4lf\n",sum);
    }
    return 0;
}

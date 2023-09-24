#include<stdio.h>
int main()
{
    int n,i,count;
    double x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        count=0;
        while(x>=1)
        {

            x=x/2;
            count++;
        }
         printf("%d days\n",count);


    }
    return 0;
}

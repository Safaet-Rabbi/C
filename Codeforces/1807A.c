#include<stdio.h>
int main()
{
    int t,n,i;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int dig[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&dig[i]);
        }
        int min=dig[0];
        for(i=1;i<n;i++)
        {
            if(dig[i]<min)
            {
                min=dig[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(dig[i]==min)
            {
                dig[i]+=1;
                break;
            }
        }
       long long product=1;
        for(i=0;i<n;i++)
        {
            product*=dig[i];
        }
        printf("%lld\n",product);


    }
}

#include<stdio.h>
int main()
{
    int i,j,n,s,t,arr[100],found;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=1;j<=n;j++)
        {
            found=0;
            for(i=0;i<=n;i++)
            {
                if(j==arr[i])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                printf("%d\n", j);
            }
        }
    }
    return 0;
}

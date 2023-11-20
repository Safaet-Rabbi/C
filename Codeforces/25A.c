#include<stdio.h>
int main()
{
    int n,i,j,k1,k2,arr[100],even=0,odd=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
            k1=i;
        }
        else
        {
            odd++;
            k2=i;
        }
    }
    if(even>odd)
    {
        printf("%d\n",k2);
    }
    else
    {
        printf("%d\n",k1);
    }
    return 0;

}

#include<stdio.h>
int main()
{
    int a,b,m,n;
    scanf("%d %d",&n,&m);
        int count=0;
    for(a=0;a<=n;a++)
    {
        for(b=0;b<=m;b++)
        {
            if((a*a+b==n)&&(a+b*b==m))
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
}

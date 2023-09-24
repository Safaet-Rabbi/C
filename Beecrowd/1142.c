#include<stdio.h>
int main()
{
    int n,count,i;
    scanf("%d",&n);
    count=1;
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d PUM\n",count,count+1,count+2);
        count+=4;
    }
}

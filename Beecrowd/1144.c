#include<stdio.h>
int main()
{
    int i,j,n,count=1,sq,cb;
    scanf("%d",&n);
    sq=i*i;
    cb=i*i*i;
    for(i=1;i<=n;i++)
    {
         sq=i*i;
    cb=i*i*i;
        printf("%d %d %d\n",i,sq,cb);
        printf("%d %d %d\n",i,sq+1,cb+1);
    }
}

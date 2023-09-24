#include<stdio.h>
int main()
{
    int x,y,z,n,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&x,&y,&z);
        for(i=1;i<=z;i++)
        {
            if(i%x==0 && i%y==0)
            {
                printf("%d\n",i);
            }
        }
    }
}

#include<stdio.h>
int main()
{
    int n,count=0,p,v,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2)
        {
            count++;
        }

    }
     printf("%d\n",count);

}

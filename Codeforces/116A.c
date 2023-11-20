#include<stdio.h>
int main()
{
    int a,b,i,n,cap=0,pass=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        pass=pass+(b-a);
        if(pass>cap)
        {
            cap=pass;
        }
    }
    printf("%d\n",cap);
}

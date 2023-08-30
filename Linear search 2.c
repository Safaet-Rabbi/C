#include<stdio.h>
int main()
{
    int i,a[]={10,20,30,45,234,456},n,x;
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    i=-1;
    return 0;
}

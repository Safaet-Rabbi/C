#include<stdio.h>
int main()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        x=n;
        while(n>=3)
        {
            n=n-2;
            x+=1;
        }
        if(n==2)
        x+=1;
        printf("%d\n",x);

    }
}//Safaet47

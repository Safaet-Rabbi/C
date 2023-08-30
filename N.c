#include<stdio.h>
int main()
{
   long long a,b,c,d;
    scanf("%lld %lld",&d,&c);

    if(d%2==0)
    {
        b=d/2;
    }
    else
    {
        b=d/2+1;
    }
    if(c<=b)
    {
       a=(c*2)-1;
    }
    else
    {
       a=(c-b)*2;
    }
    printf("%lld\n",a);
}

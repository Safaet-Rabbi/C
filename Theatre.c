/*#include<stdio.h>
int main()
{
    long long int x,y,z;
    scanf("%lld %lld %lld",&x,&y,&z);
    printf("%.1lld\n",((x+z-1)/z)*((y+z-1)/z));
//Safaet47
}
*/



#include<stdio.h>
int main()
{
    long long int p,q,r,s,t;
    scanf("%lld %lld %lld",&p,&q,&r);
    if(p%r==0)
    {
        s=p/r;
    }
    else
    {
        s=p/r+1;
    }
    if(q%r==0)
    {
        t=q/r;
    }
    else
    {
        t=q/r+1;
    }
    printf("%.1lld\n",s*t);
    //Safaet47
}


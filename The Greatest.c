#include<stdio.h>
int main()
{
    int a,b,c,grt;
    scanf("%d %d %d",&a,&b,&c);
    grt=a;
    if(a<b || a<c)
    {
        if(b<c)
        {
            grt=c;
        }
        else
        {
            grt=b;
        }
    }
    printf("%d eh o maior\n",grt);

}

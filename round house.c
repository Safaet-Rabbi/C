/*#include<stdio.h>
int main()
{
    int num,a,b,d;
    scanf("%d %d %d",&num,&a,&b);
//Safaet
    if(b>=0)
    {
        b=b%num;
        if((num-a)>=b)
        {
            d=b+a;
        }
        else
        {
            d=b-(num-a);
        }
    }
    else
    {
        b=abs(b);
        b=b%num;
        if((a-1)>=b)
        {
            d=a-b;
        }
        else
        {
            d=num-(b-a);
        }
    }
    printf("%d\n",d);
}
*/

#include<stdio.h>
int main()
{
//Safaet47
        int a,b,num,c,res;
    while(scanf("%d %d %d",&num,&a,&b)!=EOF)
    {
        if(b>=0)
        {
            if(b<=(num-a))
            {
                res=a+b;
            }
            else
            {
                res=(b+a-1)%num+1;
            }
        }
        else if(b<0)
        {
            b=-b;
            if(b<a)
            {
                res=a-b;
            }
            else if(b>=a)
            {
                c=(b-a)%num;
                res=num-c;
            }
        }
        printf("%d\n",res);
    }
}

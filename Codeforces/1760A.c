#include<stdio.h>
int main()
{
    int t,a,b,c,mid;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b && c>a)||(a>c && b>a))
        {
            mid=a;
        }
        else if ((b>a && c>b)||(b>c && a>b))
        {
            mid=b;
        }
        else
        {
            mid=c;
        }
        printf("%d\n",mid);


    }

}

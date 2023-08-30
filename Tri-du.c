#include<stdio.h>
int main()
{//Safaet47
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
    if(a>b)
    {
        printf("%d\n",a);
    }
    else if(a<b)
    {
        printf("%d\n",b);
    }
    else if(a==b)
    {
        printf("%d\n",a);

    }
    }
}

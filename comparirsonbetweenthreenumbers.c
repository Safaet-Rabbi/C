#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three nambers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("max=%d mid=%d min=%d",a,b,c);
    }
    else if(b>a && a>c)
    {
        printf("max=%d mid=%d min=%d",b,a,c);
    }
    else if(c>a && b>a)
    {
        printf("max=%d mid=%d min=%d",c,b,a);
    }
    return 0;

}

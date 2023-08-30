#include<stdio.h>
int main()
{
    int a,x,i;

    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,a,i*a);
    }
}

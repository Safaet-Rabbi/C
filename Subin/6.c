#include<stdio.h>
int main()
{
    int a,b,c,n,sum,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        b=a%10;
        c=a/10000;
        sum=b+c;
         printf("Sum = %d\n",sum);
    }
    return 0;


}

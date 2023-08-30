#include<stdio.h>
int main()
{
    int a,b,c,m,i=1,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n>1)
    {
        printf("%d ",b);
    }
    do
    {
        c=a+b;
        a=b;
        b=c;
        i=i+1;
        printf("%d ",c);

    }while(i<=n-1);
}

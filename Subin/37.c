#include<stdio.h>
int main()
{
    int rev,n,t;
    scanf("%d",&t);
    while(t--)
    {
        rev=0;
        scanf("%d",&n);
       while(n!=0)
       {
            rev=rev*10;
        rev+=n%10;
        n/=10;
       }
        printf("%d\n",rev);

    }
    return 0;

}

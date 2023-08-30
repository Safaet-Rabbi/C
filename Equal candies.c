#include<stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    char str1[30];
    scanf("%d",&a);

    while(a--)
    {
        scanf("%d",&b);

        for(i=0;i<b;i++)
        {
            scanf("%s",str1[i]);
            c=c-str1[i];
        }
        for(i=0;i<b;i++)
        {
            ans+=str1[i]-c;
        }
        printf("%d\n",ans);
    }
}

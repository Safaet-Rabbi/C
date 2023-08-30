#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int i,n,len;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&s1);
        len=strlen(s1);
        if(len>10)
        {
            printf("%c%d%c\n",s1[0],len-2,s1[len-1]);
        }
        else
        {
            printf("%s",s1);
        }
    }
}

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char str[100];
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        gets(str);
        len=strlen(str);
         for(i=len-1;i>=0;i--)
                {
                 printf("%c",str[i]);
                }
            printf("\n");

    }



}

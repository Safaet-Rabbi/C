#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=1;
    char str[200];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        count=1;
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }
        printf("Count = %d\n",count);

    }

}

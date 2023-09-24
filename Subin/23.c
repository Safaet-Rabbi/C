#include<stdio.h>
int main()
{
    int i,n;
    char str[100];
    scanf("%d",&n);

    while(n--)
    {
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf("%d",str[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}

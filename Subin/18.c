#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,count=0;;
    char str[100];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        count=0;
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
               || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               {
                   printf("%c",str[i]);
               }
        }
        printf("\n");
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]!='a' && str[j]!='e' && str[j]!='i' && str[j]!='o' && str[j]!='u' && str[j]!=' ')
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");


    }
}

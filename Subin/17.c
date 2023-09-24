#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    char str[1001];
    scanf("%d", &n);
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
                count++;
            }
        }
         printf("Number of vowels: %d\n",count);

    }
    return 0;

}

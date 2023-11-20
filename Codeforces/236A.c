#include<stdio.h>
#include<string.h>
#define MAX_CHAR 26
int main()
{
    int i;
    char username[100];
    scanf("%s",username);
    char count[MAX_CHAR]={0};
    int l=strlen(username);
    for(i=0;i<l;i++)
    {
       count[username[i]-'a']=1;
    }
    int distinctcount=0;
    for(i=0;i<MAX_CHAR;i++)
    {
        if(count[i]==1)
        {
            distinctcount++;
        }
    }
    if(distinctcount%2==0)
    {
        printf("CHAT WITH HER!\n");

    }
    else
    {
        printf("IGNORE HIM!\n");
    }


}

#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];

    int i=0,j,k,length=0;
    scanf("%s",&str1);

    while(str1[i]!='\0')
    {
        i++;
        length++;

    }

    for(j=0,i=length-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]!='\0';

    k=strcmp(str1,str2);

    if(k==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

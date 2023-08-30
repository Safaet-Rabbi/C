#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    gets(str);
    int len,i;
    len= strlen(str);
//Safaet47
    for(i=0;i<len;i++)
    {
        if(str[i]=='.')
        {
            printf("0");

        }
        else if(str[i]=='-' && str[i+1]=='.')
        {
            printf("1");
            i++;
        }

          else if(str[i]=='-' && str[i+1]=='-')
        {
            printf("2");
            i++;
        }

    }

}

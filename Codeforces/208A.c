#include<stdio.h>
#include<string.h>
int main()
{
    char in[300],out[300];
    scanf("%s",in);
    int len=strlen(in),i,j=0;
    for(i=0;i<len;i++)
    {
        if(i<len-2 && in[i]=='W'&&in[i+1]=='U'
           &&in[i+2]=='B')
        {
            i=i+2;
            if(j>0 && out[j-1]!=' ')
            {
                out[j++]=' ';
            }
        }
        else
        {
            out[j++]=in[i];
        }
    }
    while(j>0 && out[j-1]==' ')
    {
        j--;
    }
    out[j]='\0';
    printf("%s\n",out);
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n;
    char s1[100],s2[100],s3[100];
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1>='A' && s1[i]<='Z')
            {
                s2[i]=s1[i]+32;
            }
    else
    {
        s2[i]=s1[i];
    }
        }
        s2[i]='\0';
        for(j=0,k=0;j<l;j++)
        {
            if(s2[j]!='a' && s2[j]!='e' && s2[j]!='i' && s2[j]!='o' && s2[j]!='u' && s2[j]!='y')
            {
                s3[k]=s2[j];
                k++;
            }
        }
        s3[k]='\0';
        for(n=0;n<k;n++)
        {
            printf(".%c",s3[n]);
        }
        printf("\n");
   return 0;
}

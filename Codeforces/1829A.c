#include<stdio.h>
#include<string.h>
int main()
{
    int t,diff,i;
    char str[100];
    char target[]="codeforces";
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        diff=0;
        for(i=0;i<10;i++)
        {
            if(str[i]!=target[i])
            {
                diff++;
            }
        }
        printf("%d\n",diff);

    }
}

#include<stdio.h>
int main()
{
    int t;
    char card[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",card);
        if((card[0]='a'&& card[1]=='b'&&card[2]=='c')
            ||
            (card[0]='a'&& card[1]=='c'&&card[2]=='b')
           ||
            (card[0]='b'&& card[1]=='a'&&card[2]=='c')
           ||
           (card[0]='c'&& card[1]=='b'&&card[2]=='a'))
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }

    }
}

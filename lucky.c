/*#include<stdio.h>
int main()
{
    int i,n,j[50],sum1=0,sum2=0;

    scanf("%d",&n);

    for(i=0;i<3;i++)
    {
        sum1=j[i];
    }
    if(sum1==sum2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
*/



#include<stdio.h>
int main()
{
     char s[50];
    scanf("%s",&s);

    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


}

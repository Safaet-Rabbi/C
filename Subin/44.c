/*#include<stdio.h>
int main()
{
    int j,n,r,t,row,c;
    scanf("%d",&t);
    while (t--)
    {
      scanf("%d",&row);
      for(n=0;n<=row;n++)
      {
        for(r=0;r<=n;r++)
        {
            if(n==0||r==0)
            {
                c=1;
                printf("%d ",c);
            }
            else
            {
                c=c*(n-r+1)/r;
                printf("%d ",c);
            }
        }
        printf("\n");
      }
    }

}
*/
#include<stdio.h>
int main()
{
    int n,c,r,row,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&row);
        for(n=0;n<=row;n++)
        {
            for(r=0;r<=n;r++)
            {
                if(n==0 || r==0)
                {
                    c=1;
                    printf("%d ",c);
                }
                else
                {
                    c=c*(n-r+1)/r;
                    printf("%d ",c);
                }
            }
            printf("\n");
        }
    }
}

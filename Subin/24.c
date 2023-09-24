#include<stdio.h>
int main()
{
    int arr[1000];
    int a,m,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%d",&a);
         for(j=1;j<=a;j++)
    {
        scanf("%d",&arr[j]);

      }
       for(m=1;m<=a;m=m+2)
    {
        printf("%d ",arr[m]);
        }
         printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int matrix[n][n],i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i==n-1-j||i==n/2 || j==n/2)
            {
                sum+=matrix[i][j];
            }
        }
    }
    printf("%d\n",sum);
}

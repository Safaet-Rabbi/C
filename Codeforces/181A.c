#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d %d",&n,&m);
    char map[n][m];
    int rowcount[n];
    int colcount[m];
    for(i=0;i<n;i++)
    {
        scanf("%s",map[i]);
        rowcount[i]=0;
    }
    for(j=0;j<m;j++)
    {
        colcount[j]=0;
        for(i=0;i<n;i++)
        {
            if(map[i][j]=='*')
            {
                rowcount[i]++;
                colcount[j]++;
            }
        }
    }
    int forthrow,forthcol;
    for(i=0;i<n;i++)
    {
        if(rowcount[i]==1)
        {
            forthrow=i+1;
            break;
        }
    }
    for(j=0;j<m;j++)
    {
        if(colcount[j]==1)
        {
            forthcol=j+1;
            break;
        }
    }
    printf("%d %d\n",forthrow,forthcol);
}

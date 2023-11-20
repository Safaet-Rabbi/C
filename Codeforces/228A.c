#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
     int shoe[10]={a,b,c,d};
     int count=0;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(shoe[i]==shoe[j])
            {
                count++;
                shoe[j]=-1;
                break;
            }
        }
    }
    printf("%d\n",count);
}

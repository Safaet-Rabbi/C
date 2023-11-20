#include<stdio.h>
int main()
{
    int n,i,j,k,adv=0;
    scanf("%d %d",&n,&k);
    int scores[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }
    int k_scr=scores[k-1];
    for(i=0;i<n;i++)
    {
        if(scores[i]>=k_scr && scores[i]>0)
        {
            adv++;
        }
    }
    printf("%d\n",adv);
}

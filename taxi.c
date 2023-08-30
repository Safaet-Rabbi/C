#include<stdio.h>
int main()
{
    int i,j,n,seat=0,a[5]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[j]++;
    }
    seat=a[4];
    seat=seat+a[3];
    a[1]=a[1]-a[3];
    if(a[1]<0)

        a[1]=0;
        seat=seat+a[2]/2;


    if(a[2]%2==0)

        a[2]=0;

    else

        a[2]=1;
        a[1]=a[1]+a[2]*2;

    if(a[1]%4==0)

        seat=seat+a[1]/4;

    else

        seat=seat+a[1]/4+1;

    printf("%d\n",seat);
}//Safaet47

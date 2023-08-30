#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{//Safaet47
    int n,i;
    double a,b,r,area1,area2;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&a);
            r=a/5;
            b=(a*6)/10;
            area1=PI*r*r;
            area2=(a*b)-area1;
            printf("%.2lf %.2lf\n",area1,area2);
        }
    }
}
/*
#include<stdio.h>
#define PI acos(-1)
int main()
{
    int t,i;
    double l,w,r,areac, arearec;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            r=l/5;
            w=(l*6)/10;
            areac=PI*r*r;
            arearec=(l*w)-areac;
            printf("%.2lf %.2lf\n",areac,arearec);
        }
    }

}
*/

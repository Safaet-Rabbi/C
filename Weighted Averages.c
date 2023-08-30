#include<stdio.h>
int main()
{
    float a,b,c,sum,avg;
    int i,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
    sum=(a*2+b*3+c*5);
    avg=sum/(2+3+5);
    printf("%.1f\n",avg);

    }

}

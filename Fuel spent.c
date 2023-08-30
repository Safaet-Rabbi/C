#include<stdio.h>
int main()
{
    double time,speed,avg;
    scanf("%lf %lf",&time,&speed);
    avg=(time*speed)/12;
    printf("%.3lf\n",avg);

}

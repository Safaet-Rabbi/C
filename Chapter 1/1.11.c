#include<stdio.h>
#define PI 3.1416
int main()
{
    int x1,x2,y1,y2;
    float rad,circum,area;
    printf("Enter x1,x2,y1,y2 = ");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    rad=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    circum=2*PI*rad;
    area=PI*rad*rad;
    printf("D = %f\n area is:%f ",circum,area);
}

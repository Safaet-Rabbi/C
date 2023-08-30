#include<stdio.h>
int main()
{
    int x,y,z,temp;
    printf("Enter the value of x,y,z : ");
    scanf("%d %d %d",&x,&y,&z);
    temp=x;
    x=y;
    y=z;
    z=temp;

    printf("x=%d\n y=%d\n z=%d\n",x,y,z);

}

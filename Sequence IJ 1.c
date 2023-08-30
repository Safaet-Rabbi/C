#include<stdio.h>
int main()
{
    int a,b,i,j;
    for(i=1,j=60;i<100,j>=0; i+=3,j-=5)
    {
        printf("I=%d J=%d\n",i,j);
    }
}

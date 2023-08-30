#include<stdio.h>
int main()
{
    int stone,give1,give2;
    scanf("%d",&stone);
    give1=stone/3*2;
    give2=stone/3*2+1;
//Safaet47
    if(stone%3==0)
    {
        printf("%d",give1);
    }
    else
    {
        printf("%d",give2);
    }
}

#include<stdio.h>
int main()
{
    int up,down,temp;
    while(scanf("%d %d",&up,&down)!=EOF &&up!=-1 &&down!=-1)
    {
        if(up>down)
        {
           temp=up;
           up=down;
           down=temp;
        }
        if(down-up<=50)
        {
            printf("%d\n",down-up);
        }
        else
        {
            printf("%d\n",100-down+up);
        }

//Safaet47
    }
}

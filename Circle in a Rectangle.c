#include<stdio.h>
int main()
{
    int H,r,W,x,y;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    W=W-r;
    H=H-r;

    if(r<=x && r<=y && x<=W && y<=H)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");//Safaet47
    }
}

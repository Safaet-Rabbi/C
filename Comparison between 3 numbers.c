#include<stdio.h>
int main()
{
    int c,d,e;
    printf("Enter 3 values:\n");
    scanf("%d %d %d",&c,&d,&e);

    if(c>d && d>e)
    {
        printf("Large:%d Middle:%d Small:%d",c,d,e);
    }
    else if(d>c &&c>e)
    {
        printf("Large:%d Middle:%d Small:%d",d,c,e);
    }
     else if(e>c &&c>d)
    {
        printf("Large:%d Middle:%d Small:%d",e,c,d);
    }

       else if(d>e &&e>c)
    {
        printf("Large:%d Middle:%d Small:%d",d,e,c);
    }
       else if(c>e &&e>d)
    {
        printf("Large:%d Middle:%d Small:%d",c,e,d);
    }
}



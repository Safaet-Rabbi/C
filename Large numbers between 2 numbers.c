#include<stdio.h>
int main()
{
    int c,d;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&c,&d);

    if(c>d)
    printf("Large:%d\n",c);

    else if(c<d)
        printf("Large:%d\n",d);
    else
        printf("Equal");
}

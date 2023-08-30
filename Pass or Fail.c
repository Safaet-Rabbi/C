#include<stdio.h>
int main()
{
    int mark;
    printf("Enter Mark: ");
    scanf("%d",&mark);

    if(mark>33)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
}

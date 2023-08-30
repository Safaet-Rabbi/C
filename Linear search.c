#include<stdio.h>
int main()
{
    int i,a[]={10,20,30,40,50,60,70};
    int value,pos=0;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {

        if(value==a[i])
        {
             pos=i+1;
        break;
        }

    }
    if(pos==0)
    {
        printf("Value not found");
    }
    else
    {
        printf("The value is found at position %d",pos);
    }


}

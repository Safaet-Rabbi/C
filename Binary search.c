#include<stdio.h>
int main()
{
   int a[]={1,3,5,6,7,8,9,78,80,100},left=0,right=9,mid;
   int item = 6;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==item)
        {
            printf("Item found at index:%d\n",mid);
            break;
        }
        else if(a[mid]< item)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    printf("Item not found\n");

}

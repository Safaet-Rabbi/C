#include<stdio.h>
int main()
{
    int a[]={12,23,35,45,65,4,6},i,j,n,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if( a[j] > a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;

            }
        }
    }

}

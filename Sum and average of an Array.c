#include<stdio.h>
int main()
{
    int a[5],sum=0,i,n;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
  /*  a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;    */

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is:%d\n",sum);
    printf("The average is:%.2f\n",(float) sum/n);
}

/*#include<stdio.h>
int main()
{
    int q,w,fact=1;
    printf("Enter any positive number: ");
    scanf("%d",&q);
    w=q;
    while(w>0)
    {
        fact=fact*w;
        w=w-1;
    }
    printf("factorial of %d is %d",q,fact);

}
*/

#include<stdio.h>
int main()
{
 int i,fact=1,n;
 printf("Enter any positive number:") ;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fact=fact*i;
 }
 printf("%d",fact);
 return 0;
}


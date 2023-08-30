#include <stdio.h>
int main(){
    int n,i;
    float x,term =1,sum=1,fact=1;

    printf("Enter the value of x: ");
    scanf("%f",&x);

    printf("Enter the number of n terms: ");
    scanf("%d",&n);

    // evaluate the power series
    for (i = 1;i <= n;i++) {
        term=term*(x/i);
        fact=fact*i;
        sum=sum+(term/fact);
    }

    printf("e^%.2f = %.2f\n",x,sum);

    return 0;
}

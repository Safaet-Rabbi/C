#include<stdio.h>
int main(){

        float a,b,c;
        printf("Enter three values:");
        scanf("%f %f %f",&a,&b,&c);
        printf("\nEnter largest value");
        if(a>b)
        {
            if(a>c)
                printf("%f\n",a);
            else printf("%f\n",c);
        }
        else
        {
            if(c>b)
                printf("%f\n",c);
            else printf("%f\n",b);
        }

        }

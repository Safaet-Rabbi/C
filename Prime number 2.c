#include<stdio.h>
int main()
{
    int i,count,num,temp;
    count=0;
    i=2;
    printf("Enter a number:");
    scanf("%d",&num);

    Loop:
        temp=num%i;

        if(temp==0)
            count=count+1;
        i=i+1;
        if(i<=num)
            goto Loop;
            if(count==1)
            printf("Number %d is prime",num);
                else
                    printf("Number %d is not prime",num);



                    	}


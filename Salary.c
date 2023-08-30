#include<stdio.h>
int main()
{
    int number,hour;
    float salary,amount;
    scanf("%d %d %f",&number,&hour,&amount);
    salary=hour*amount;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$%0.2f\n",salary);
}

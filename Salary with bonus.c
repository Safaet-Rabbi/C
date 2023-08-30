#include<stdio.h>
int main()
{
    char ch;
    double salary,value,total;

    scanf("%s %lf %lf",&ch,&salary,&value);
    total=(salary+value*0.15);
    printf("TOTAL = R$ %.2lf\n",total);

}

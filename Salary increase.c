#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);

    if(a>0 && a<=400.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(a+(a*.15)),(a*.15));
    else if(a<=800.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(a+(a*.12)),(a*.12));
    else if(a<=1200.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(a+(a*.10)),(a*.10));
        else if(a<=2000.0)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(a+(a*.07)),(a*.07));
        else
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(a+(a*.04)),(a*.04));
}

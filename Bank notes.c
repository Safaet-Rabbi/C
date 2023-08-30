#include<stdio.h>
int main()
{
    int notes,sum;
    scanf("%d",&notes);

    printf("%d\n",notes);
    printf("%d nota(s) de R$ 100,00\n",notes/100);
    sum=(notes%100);
    printf("%d nota(s) de R$ 50,00\n",sum/50);
    sum=(sum%50);
    printf("%d nota(s) de R$ 20,00\n",sum/20);
    sum=(sum%20);
    printf("%d nota(s) de R$ 10,00\n",sum/10);
    sum=(sum%10);
    printf("%d nota(s) de R$ 5,00\n",sum/5);
    sum=(sum%5);
    printf("%d nota(s) de R$ 2,00\n",sum/2);
    sum=(sum%2);
    printf("%d nota(s) de R$ 1,00\n",sum/1);
    sum=(sum%1);

}

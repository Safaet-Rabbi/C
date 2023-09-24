#include<stdio.h>
int main()
{
    int alc=0,gas=0,die=0,fuel;

    while(1)
    {
        scanf("%d",&fuel);
        if(fuel==1)
        {
            alc++;
        } if(fuel==2)
        {
            gas++;
        } if(fuel==3)
        {
            die++;
        } if(fuel==4)
        {
            break;
        }
        else
        {
            continue;

        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);

}

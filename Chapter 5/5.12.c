#include<stdio.h>
    int main(){
    int Units;
    float charge;
    char name[10];
    printf("Enter name of user: \n");
    scanf("%s",&name);

    printf("Enter total unit consumed: \n ");
    scanf("%d",&Units);

    if(Units>0 && Units<=200)
        charge=100+(Units*0.8);
        else if(Units>200 && Units<=300)
            charge=100+(Units*0.9);
        else if(Units>300 && Units<=400)
            charge=100+Units;
            else
                charge=(100+Units)+(100+Units)*15;
                printf("Name Units Charge\n");
                printf("%s %d %.2f",name,Units,charge);

    }





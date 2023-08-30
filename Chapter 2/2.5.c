#include<stdio.h>
int main()
{
    float rice,sugar;
    printf("Enter Rice price: ");
    scanf("%f",&rice);
    printf("Enter Sugar price: ");
    scanf("%f",&sugar);

    printf(" ***LIST OF ITEMS***\n");
    printf("Item Price\n");
    printf("Rice Rs %.2f\n",rice);
    printf("Sugar Rs %.2f\n",sugar);

}

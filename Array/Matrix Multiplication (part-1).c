#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;

    printf("Enter row and col for first matrix:  ");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and col for second matrix:  ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!!");

         printf("Enter row and col for first matrix:  ");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and col for second matrix:  ");
    scanf("%d %d",&r2,&c2);
    }

    //taking input for first matrix
    printf("\nEnter elements for first matrix:\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
             printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
    }


    //taking input for second matrix
    printf("\nEnter elements for second matrix:\n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
             printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    //printing first matrix
    printf("\n\nFirst matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");

        for(j=0;j<c1;j++)

            printf("%d ",first[i][j]);
            printf("\n");

    }

    //printing second matrix
    printf("\n\nSecond matrix:\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)

        printf("%d ",second[i][j]);
            printf("\n");

    }
}

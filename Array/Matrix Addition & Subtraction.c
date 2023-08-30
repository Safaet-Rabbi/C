#include<stdio.h>
int main()
{
    int i,j,nrow,ncol;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows and cols: ");
    scanf("%d %d",&nrow,&ncol);

    //scanning a matrix
    printf("Enter element for A matrix=\n");
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //scanning b matrix
    printf("\n\nEnter element for B matrix= \n");
    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //printing a matrix
    printf("A = ");
     for(i=0;i<nrow;i++)
    {
        printf("\t");
        for(j=0;j<ncol;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



    //printing b matrix
    printf("B = ");
     for(i=0;i<nrow;i++)
    {
        printf("\t");
        for(j=0;j<ncol;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

     //adding the matrix

     for(i=0;i<nrow;i++)
    {

        for(j=0;j<ncol;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }

     //printing c matrix
    printf("\A+B = ");
     for(i=0;i<nrow;i++)
    {
        printf("\t");
        for(j=0;j<ncol;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

  /*   //substracting the matrix

     for(i=0;i<nrow;i++)
    {

        for(j=0;j<ncol;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
        }
    }

*/
}


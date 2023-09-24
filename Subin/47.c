#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        int array1[n1];
        for(int i=0; i<n1; i++)
        {
            scanf("%d",&array1[i]);
        }


        int n2;
        scanf("%d",&n2);
        int array2[n2];
        for(int i=0; i<n2; i++)
        {
            scanf("%d",&array2[i]);
        }

        int mergeArray[n1+n2];
        int i=0,j=0,k=0;

        while(i<n1 && j<n2)
        {
            if(array1[i]<=array2[j])
            {
                mergeArray[k]=array1[i];
                k++;
                i++;
            }
            else
            {
                mergeArray[k]=array2[j];
                k++;
                j++;
            }
        }
        while(i<n1)
        {
            mergeArray[k]=array1[i];
            k++;
            i++;

        }

        while(j<n2)
        {
            mergeArray[k]=array2[j];
            k++;
            j++;

        }

        for(int i=0; i<(n1+n2); i++)
        {
            printf("%d ",mergeArray[i]);
        }
        printf("\n");

    }
    return 0;
}

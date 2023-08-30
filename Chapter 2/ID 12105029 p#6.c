#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the name of the students: ");
    scanf("%d",&n);
    printf("Enter the number of subjects : ");
    scanf("%d",&m);
    int marks[n][m];
    for(int i=0;i<n;i++)
    {
        printf("Enter marks for students %d: \n",i+1);
        for(int j=0;j<m;j++)
        {
            printf("Enter marks for subject %d: ",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    int total_marks[n];
    for(int i=0;i<n;i++)
    {
       int total=0;
       for(int j=0;j<m;j++)
       {
           total=total+marks[i][j];
       }
       total_marks[i]=total;
    }
    for(int i=0;i<n;i++)
    {
        printf("total marks obtained by student %d: %d\n",i+1,total_marks[i]);
    }
    return 0;
}

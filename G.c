#include<stdio.h>
int main()
    {
//Safaet47
          int i,t,a,b;
          scanf("%d",&t);
            for(i=1;i<=t;i++)
            {
                scanf("%d %d",&a,&b);


        if(a>b)
        {
            printf(">\n",a);
        }
        else if(a<b)
        {
            printf("<\n",b);
        }
        else
        {
            printf("=\n",a,b);
        }
            }


        return 0;
    }

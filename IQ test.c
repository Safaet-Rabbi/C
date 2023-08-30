/*#include<stdio.h>
int main()
{
    int i,k,l,m,n,ans,ans1,ans2;
    k=l=0;
    for(i=0;i<n;i++)
    {
        if(m%2==0)
        {
            k++;
            ans1=i+1;
        }
        else
        {
            l++;
            ans2=i+1;
        }
        if(k==1)
        {
            ans=ans1/ans2;
        }
    }
    printf("%d\n",ans);
}

*/
//  printf("%d\n",k==1?ans1:ans2);
/*
#include<stdio.h>
int main()
{
     int a,n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans1 = 0, ans2 = 0, x, y;
        for(int i=0; i<n; i++){

            if(a=1) {
                ans1 ++;
                x = i+1;
            }
            else{
                ans2 ++;
                y = i+1;
            }
        }
        if(ans1>ans2) printf("%d",y);
        else printf("%d",x);
    }

}*/
//https://codeforces.com/contest/25/problem/A

/*

#include<stdio.h>
int main()
{
    int t,i,even=0,odd=0,res=0;
    int a[t];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(even>odd)
        {
            for(i=0;i<t;i++)
            {
                if(a[i]%2!=0)
                {
                    res=i+1;
                    break;
                }
            }
        }
        else
        {
            for(i=0;i<t;i++)
            {
               if(a[i]%2==0)
                {
                    res=i+1;
                    break;
                }
            }
        }
    }
    printf("%d",res);
}

*/
#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0,res1=0,res2=0;
//Safaet47
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
            res1=i;
        }
        else
        {
            odd++;
            res2=i;
        }

    }
    if(odd>even)
    {
        printf("%d",res1);
    }
    else
    {
        printf("%d",res2);
    }

}

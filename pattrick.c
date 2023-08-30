/*#include<stdio.h>
#include<math.h>
int main()
{
    int d1,d2,d3,res,sub1,sub2,m,n,x,y;
    scanf("%d %d %d",&d1,&d2,&d3);//10,20,30,1,1,5
    m=d1+d2+d3;//60,7
    n=d1*2+d2*2;//20+40=60,2+2=4
    x=(d1*2+d3*2);//20+60=80,2+10=12
    y=(d2*2+d3*2);//40+60=100,2+10=12
    sub1=(x-m);//60-60=0,7-4=3
    sub2=(y-n);//80-100=-20,12-12=0
    res=(sub2-sub1);//0+20=20,3-0=3

    printf("%d\n",res);
}
*/
/* 7,4,12,12
12-7=x-m=sub1,12-4=y-n=sub2,sub2-sub1=3
#include<stdio.h>
long long d1,d2,d3,ans;
int main(){

    scanf("%lld%lld%lld",&d1,&d2,&d3);
    ans=min(min(d1*2+d3*2,d2*2+d3*2),min(d1+d2+d3,d1*2+d2*2));
    printf("%d",ans);
    return 0;
}
*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int d1,d2,d3,res,sub1,sub2,m,n,x,y;
    scanf("%d %d %d",&d1,&d2,&d3);//10,20,30,1,1,5
    m=d1+d2+d3;//60,7
    n=d1*2+d2*2;//20+40=60,2+2=4
    x=(d1*2+d3*2);//20+60=80,2+10=12
    y=(d2*2+d3*2);//40+60=100,2+10=12
    sub1=(x,m);//60-60=0,7-4=3
    sub2=min(y,n);//80-100=-20,12-12=0
    res=min(sub1,sub2);//0+20=20,3-0=3

    printf("%d\n",res);
}
*/

#include<stdio.h>
int main()
{
    int d1,d2,d3,sum;
    scanf("%d %d %d",&d1,&d2,&d3);
    sum=d1+d2+d3;
    if(d1>d2+d3)
    {
        printf("%d\n",d2*2+d3*2);
    }
    else if(d2>d1+d3)
    {
        printf("%d\n",d1*2+d3*2);
    }

      else if(d3>d1+d2)
    {
        printf("%d\n",d1*2+d2*2);
    }
    else
    {
        printf("%d\n",sum);
    }
}//Safaet47

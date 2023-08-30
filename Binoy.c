#include<stdio.h>
int main(){

    int count=0,i,n,a[]={102,20,3,40,50,20,49,60,23,10,55,23,23};

    n=9;
    for(i=0;i<20;i++)
    {
        if(a[i]==n){
            printf("NUMBER=%d \t INDEX=%d\n",n,i);
            count=count+1;
        }

    }
    if(count>0){
        printf("count=%d",count);
    }
    else{printf("not found");}

    }

#include<stdio.h>
int main()
{
   int i,len1,len2;
   char s[50]="erase";
   char t[50];
   scanf("%s",&t);

   len1=strlen(s);
   len2=strlen(t);

   for(i=0;i<=len2;i++)
   {
       s[len1+i]=t[i];
   }
   if(s==t)
   {
       printf("Yes\n");

   }
   else
   {
       printf("No\n");
   }


}

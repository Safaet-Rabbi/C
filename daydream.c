#include<stdio.h>
#include<string.h>
int main()//Safaet47
{

  char s[100000];
  scanf("%s",&s);
  int len=strlen(s);
  while(1)
  {
      if(len==0)
      {
          printf("YES\n");
          break;
      }
      else if(len<4)
      {
          printf("NO\n");
          break;
      }
       if(strncmp(s+len-5,"dream",5)==0)
        {
          len=len-5;
        }
     else if(strncmp(s+len-5,"erase",5)==0)
      {
          len=len-5;
      }
      else if(len>=6 && strncmp(s+len-6,"eraser",6)==0)
      {
          len=len-6;
      }
      else if(len>=7 && strncmp(s+len-7,"dreamer",7)==0)
      {
          len=len-7;
      }
      else
      {
          printf("NO\n");
          break;
      }
  }

}







/*

#include<stdio.h>
int main()
{
    char s[30]="dream";
    char t[30]="eraser";
    int i=0,j=0,len1=01,len2=01;
    while(s[i]!='\0')
{
     i++;
     len1++;
}
    while(t[j]!='\0')
{
   // j++;
    //len2++;
    s[len1+j]=t[j];
    j++;
}
    if(len1=len2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
      /*  if(len1==len2)
        {
            printf ("Yes");
        }

        else
        {
            printf("No");

        }
}

*/

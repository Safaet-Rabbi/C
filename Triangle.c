#include<stdio.h>
int main()
{
    float a,b,c,area,perimeter;
    scanf("%f %f %f",&a,&b,&c);
    perimeter=(a+b+c);
    area=0.5*(a+b)*c;

   if( (a+b)>c && (b+c) > a && (c+a)>b )
   {
       printf("Perimetro = %.1f\n",perimeter);
   }
   else
   {
       printf("Area = %.1f\n",area);
   }
}

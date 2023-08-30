#include<stdio.h>
#include<conio.h>
void main()
{
int Num,Sum,Sum1,Sum2,Sum3,Sum4;
Sum1=Sum2=Sum3=Sum4=0;
Sum1= Num%10;
Num=Num/10
Sum1= Num%10;
Num=Num/10
Sum1= Num%10;
Num=Num/10
START
Read Num &
Sum1=Sum2=Sum3=Sum4=0
END
Sum1=Num%10
Num=Num/10
Display Sum
Sum=0;
clrscr();
printf("Enter a Four Digits Number\n",&Num);
scanf("%d",&Num);
Sum1=Num%10;
Num=Num/10;
Sum2=Num%10;
Num=Num/10;
Sum3=Num%10;
Num=Num/10;
Sum4=Num%10;
Num=Num/10;
Sum=Sum1+Sum2+Sum3+Sum4;
printf("\nSum of Digits are :-- %d\n",Sum);
getch();
}

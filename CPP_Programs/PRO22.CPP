#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("the value of a =");
scanf("%d",&a);
if (a>0)
{
 printf("a is a positive number.");
}
else if(a<0)
{
printf("a is a negative number.");
}
else if(a==0)
{
printf("the value of a is zero.");
}
getch();
}
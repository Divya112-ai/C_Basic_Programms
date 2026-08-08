#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("the value of a=");
scanf("%d",&a);
if(a%2==0)
{
printf("a is an even number.");
}
else
{
printf("a is an odd numver.");
}
getch();
}
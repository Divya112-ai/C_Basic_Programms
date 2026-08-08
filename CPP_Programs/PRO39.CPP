#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
a>0? printf("a is a positive number."):printf("a is a negative number.");
getch();
}
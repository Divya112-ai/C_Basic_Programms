#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("year :");
scanf("%d",&year);
if (year%4==0&&(year%400==0 || year%100!=0))
{
printf("this is leap year.");
}
else
{
printf("this is not a leap year.");
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("year :");
scanf("%d",&year);
if(year%4==0)
{
	if(year%100!=0)
	{
	printf("your year is a leap year.");
	}
	else
	{
	printf("your year is not a leap year.");
	}
}
else
{
	if(year%400==0)
	{
	printf("your year is a leap year.");
	}
	else
	{
	printf("your year is not a leap year.");
	}
}
getch();
}
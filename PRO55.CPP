#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter the value of year:");
scanf("%d",&year);
year%4==0? year%100!=0? printf("your year is leap year."): printf("your year is not leap year."):year%4==0? printf("your year is leap year."):printf("your year is not leap year.");
getch();
}
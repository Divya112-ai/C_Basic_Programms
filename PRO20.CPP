#include<stdio.h>
#include<conio.h>
void main()
{
int n,a;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
a=n%10;
printf("\nthe last digit of n=%d",a);
getch();
}
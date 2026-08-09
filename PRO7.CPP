#include<stdio.h>
#include<conio.h>
void main()
{
int days=155,month,rd;
clrscr();
printf("there are %d days here",days);
month=days/30;
rd=days%30;
printf("\n%d month and %d days.",month,rd);
getch();
}
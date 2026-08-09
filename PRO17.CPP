#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("your age :");
scanf("%d",&a);
if(a>18)
{
printf("you can vote.");
}
else
{
printf("you cannot vote.");
}
getch();
}
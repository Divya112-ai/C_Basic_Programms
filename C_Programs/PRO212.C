#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int *p1,*p2,*p3;
clrscr();
p1=&a;
p2=&b;
printf("Enter two value:");
scanf("%d%d",p1,p2);
p3=&c;
p3=&c;
*p3=*p1+*p2;
printf("\nSum of two no is:>>%d",*p3);
getch();
}
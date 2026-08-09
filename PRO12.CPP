#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,si;
clrscr();
printf("enter principal :");
scanf("%d",&p);
printf("enter rate :");
scanf("%d",&r);
printf("enter year :");
scanf("%d",&t);
si=p*r*t/100;
printf("\nsimple intrest :%d",si);
getch();
}
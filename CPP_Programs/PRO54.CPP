#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
a>b? a>c? printf("a is the biggest number."):printf("c is the biggest number."):b>c? printf("b is the biggest number."):printf("c is the biggest nummber.");
getch();
}

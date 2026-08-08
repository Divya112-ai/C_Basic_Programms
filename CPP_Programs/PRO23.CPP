#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("the value of a=");
scanf("%d",&a);
printf("the value of b=");
scanf("%d",&b);
printf("the value of c=");
scanf("%d",&c);
if (a>b&&a>c)
{
printf("a is the biggest number.");
}
else if (b>a&&b>c)
{
printf("b is the biggest number.");
}
else if (c>a&&c>b)
{
printf("c is the biggest number.");
}
getch();
}
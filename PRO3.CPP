#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a=");
scanf("%d",&a);
if(a%2==0)
{
	if(a>0)
	{
	printf("a is an even and positive number.");
	}
	else
	{
	printf("a is an even and negative number.");
	}
}
else
{	if(a>0)
	{
	printf("a is an odd and positive number.");
	}
	else
	{
	printf("a is an odd and negative number.");
	}
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,d;
char c;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
fflush(stdin);
scanf("%c",&c);
switch(c)
{
	case '+':
	{
	d=a+b;
	printf("a+b=%d",d);
	break;
	}
	case '-':
	{
	d=a-b;
	printf("a-b=%d");
	break;
	}
	case '*':
	{
	d=a*b;
	printf("a*b=%d",d);
	break;
	}
	case '/':
	{
	d=a/b;
	printf("a/b=%d",d);
	break;
	}
	case '%':
	{
	d=a%b;
	printf("a moules b=%d",d);
	break;
	}
	default :
	{
	printf("enter the proper value of c.");
	}
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int c;
int p,r,t,si,a,b;
clrscr();
printf("ENTER THE VALUE OF C:");
scanf("%d",&c);
switch(c)
{
	 case 1:
	 {
	 printf("principal:");
	 scanf("%d",&p);
	 printf("rate:");
	 scanf("%d",&r);
	 printf("year:");
	 scanf("%d",&t);
	 si=p*r*t/100;
	 printf("simple intrest:%d",si);
	 break;
	 }
	 case 2:
	 {
	 printf("enter the value of a=");
	 scanf("%d",&a);
	 printf("enter the value of b=");
	 scanf("%d",&b);
	 a=a-b;
	 b=a+b;
	 a=b-a;
	 printf("after swapping a=%d",a);
	 printf("\nafter swapping b=%d",b);
	 break;
	 }
	 default :
	 {
	 printf("\nenter the proper value");
	 break;
	 }
}
getch();
}

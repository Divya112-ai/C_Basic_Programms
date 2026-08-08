#include<stdio.h>
#include<conio.h>
void main()
{
int a=100,b=200;
clrscr();
printf("\nbefore swapping a=%d",a);
printf("\nbefore swapping b=%d",b);
a=a-b;
b=a+b;
a=b-a;
printf("\nafter swapping a=%d",a);
printf("\nafter swapping b=%d",b);
getch();
}
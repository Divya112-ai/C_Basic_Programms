#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("the value of a before swapping :");
scanf("%d",&a);
printf("the value of b before swapping :");
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("\nafter swapping a :%d",a);
printf("\nafter swapping b :%d",b);
getch();
}
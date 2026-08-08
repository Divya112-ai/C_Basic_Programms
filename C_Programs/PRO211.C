#include<stdio.h>
#include<conio.h>
void main()
{
int p;
int *ptr;
clrscr();
ptr=&p;
printf("enter value:");
scanf("%d",ptr);
*ptr=*ptr+5;
printf("\nValue of p is:%d",p);
printf("\nValue of *ptr:%d",*ptr);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float pi=3.14,area;
clrscr();
printf("radius of circle :");
scanf("%d",&r);
printf("\nthe value of pi :%f",pi);
area=pi*r*r;
printf("\nthe area of circle :%f",area);
getch();
}
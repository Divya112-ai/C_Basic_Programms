#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=n;
do
{
	printf("%d ",i);
	i--;
}while(i>=1);
getch();
}
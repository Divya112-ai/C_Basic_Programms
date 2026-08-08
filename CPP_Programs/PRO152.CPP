#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=1;
do
{
	printf("%d ",i);
	i++;
}while(i<=n);
getch();
}
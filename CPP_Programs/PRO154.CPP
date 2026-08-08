#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=1;
do
{
	sum=sum+i;
	i++;
}while(i<=n);
printf("sum of n:%d",sum);
getch();
}
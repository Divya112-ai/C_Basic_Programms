#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=1;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=1;
while(i<=n)
{
	sum=sum*i;
	i++;
}
printf("factorial of n:%d",sum);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0,a=2,b=1;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=3;i<=n;i++)
{
	sum=a+b;
	printf("%d ",sum);
	a=b;
	b=sum;
}
getch();
}
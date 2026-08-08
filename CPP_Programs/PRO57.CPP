#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=1;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum=i*i;
	printf("square of %d : %d\n",i,sum);
}
getch();
}
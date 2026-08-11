#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=1;
while(i<=n)
{
	printf("%d ",i);
	i++;
}
getch();
}
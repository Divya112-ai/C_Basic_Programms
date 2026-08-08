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
	printf("%d x %d = %d\n",n,i,i*n);
	i++;
}while(i<=10);
getch();
}

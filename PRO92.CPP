#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char a='A';
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{

		printf("%c ",a++);
	}
	printf("\n");
}
getch();
}
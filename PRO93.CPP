#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char a='A'-1;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%c ",a+j);
	}
	printf("\n");
}
getch();
}
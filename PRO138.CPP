#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char a='A'-1;
clrscr();
i=1;
while(i<=5)
{
	j=1;
	while(j<=i)
	{
		printf("%c ",a+j);
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
i=1;
while(i<=5)
{
	j=1;
	while(j<=i)
	{
		printf("* ");
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
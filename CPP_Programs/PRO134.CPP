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
	while(j<=5)
	{
		if((i==2&&(j==2||j==4))||(i==4&&(j==2||j==4)))
		{
			printf("  ");
		}
		else
		{
			printf("* ");
		}
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
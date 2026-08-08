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
		if(j%2==0)
		{
			printf("0 ");
		}
		else
		{
			printf("1 ");
		}
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
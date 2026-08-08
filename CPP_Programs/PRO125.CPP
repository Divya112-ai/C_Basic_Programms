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
		if(i%2==0)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
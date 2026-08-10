#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		if(i%2==0&&j%2!=1)
		{
			printf("0 ");
		}
		else
		{
			printf("1 ");
		}

	}
	printf("\n");
}
getch();
}
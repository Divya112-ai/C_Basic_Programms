#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
i=5;
while(i>=1)
{
	j=1;
	while(j<=i)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i--;
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
i=1;
while(i<=5)
{
	j=i;
	while(j<=5)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
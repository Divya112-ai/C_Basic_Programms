#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
i=5;
while(i>=1)
{
	k=i;
	while(k>=1)
	{
		printf("  ");
		k--;
	}
	j=i;
	while(j<=5)
	{
		printf("%d ",j);
		j++;
	}
	printf("\n");
	i--;
}
getch();
}
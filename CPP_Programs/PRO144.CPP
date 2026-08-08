#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
i=1;
while(i<=5)
{
	k=5;
	while(k>=i)
	{
		printf("  ");
		k--;
	}
	j=i;
	while(j>=1)
	{
		printf("%d ",j);
		j--;
	}
	printf("\n");
	i++;
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n=1;
clrscr();
i=1;
while(i<=4)
{
	k=4;
	while(k>=i)
	{
		printf(" ");
		k--;
	}
	j=1;
	while(j<=i)
	{
		printf(" %d",n++);
		j++;
	}
	printf("\n");
	i++;
}
getch();
}
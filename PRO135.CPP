#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n=1;
clrscr();
i=1;
while(i<=5)
{
	j=1;
	while(j<=i)
	{
		printf("%d ",n++);
		j++;
	}
	printf("\n");
	i++;
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("enter the matrix elements :\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("\n");
}
printf("printing the matrix...\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d  ",a[i][j]);
	}
	printf("\n");
}
printf("printing the transpose matrix...\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d  ",a[j][i]);
	}
	printf("\n");
}
getch();
}
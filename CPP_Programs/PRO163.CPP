#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5];
clrscr();
printf("enter the array elements:\n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("printing array elements...\n");
for(i=0;i<5;i++)
{
	printf("%d ",a[i]);
}
getch();
}

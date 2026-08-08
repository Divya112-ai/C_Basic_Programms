#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,max=0;
clrscr();
printf("enter the array elements:\n");
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
	if(a[i]>max)
	{
		max=a[i];
	}
}
printf("maximum=%d",max);
getch();
}

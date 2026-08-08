#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,sum=0;
clrscr();
printf("enter the array elements:\n");
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
	sum=sum+a[i];
}
printf("sum of these elements=%d",sum);
getch();
}
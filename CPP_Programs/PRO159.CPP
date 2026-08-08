#include<stdio.h>
#include<conio.h>
void main()
{
int  num[10],i,sum=0;
clrscr();
printf("enter the 10 number:\n");
for(i=0;i<10;i++)
{
	scanf("%d",&num[i]);
	sum+=num[i];
}
printf("sum=%d",sum);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
i=1;
while(i<=n)
{
	if(i%2==0)
	{
		sum=sum+i;
		printf("\nsum of even=%d",sum);
	}
	else
	{
		sum=sum+i;
		printf("\nsum of odd=%d",sum);
	}
	i++;
}
getch();
}
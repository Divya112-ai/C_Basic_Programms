#include<stdio.h>
#include<conio.h>
void main()
{
int num[10],i,max=0,n;
clrscr();
printf("how many elements?\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&num[i]);
	if(num[i]>max)
	{
		max=num[i];
	}
}
printf("maximum=%d",max);
getch();
}
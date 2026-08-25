#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,pos=0,neg=0,zero=0,n;
clrscr();
printf("how many elements?\n");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	if(a[i]>0)
	{
		pos++;
	}
	else if(a[i]<0)
	{
		neg++;
	}
	else
	{
		zero++;
	}
}
printf("positive elements=%d\n",pos);
printf("negative elements=%d\n",neg);
printf("zero elements=%d\n",zero);
getch();
}


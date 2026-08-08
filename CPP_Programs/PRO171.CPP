#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],ins,i,n,pos;
clrscr();
printf("how many elements?\n");
scanf("%d",&n);
printf("enter the %d elements\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the number to be inserted:");
scanf("%d",&ins);
printf("enter the position to be inserted:");
scanf("%d",&pos);
for(i=n;i>pos;i--)
{
	a[i]=a[i-1];
}
a[pos]=ins;
n++;
printf("\n array after insertation\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
getch();
}
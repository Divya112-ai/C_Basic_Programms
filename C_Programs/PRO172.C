#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,del,pos;
clrscr();
printf("how many elements?\n");
scanf("%d",&n);
printf("enter the %d elements:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the number to be deleted:\n");
scanf("%d",&del);
for(i=0;i<n;i++)
{
	if(a[i]==del)
	break;
}
for(j=i;j<n;j++)
{
	a[j]=a[j+1];
}
n--;
printf("after deletion\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
if(i%2!=0)
{
sum=sum+i;
}
printf("sum of odd =%d",sum);
getch();
}
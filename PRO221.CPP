#include<stdio.h>
#include<conio.h>
struct item
{
 int code;
 char name[20];
 int qty;
};
void main()
{
 item it[10],t;
 int n,i,j;
 clrscr();
 printf("How many items?");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	printf("item#%d\n",i);
	printf("code,name,Quantity:");
	scanf("%d%s%d",&it[i].code,it[i].name,&it[i].qty);
 }
 for(i=0;i<n-1;i++)
 {
	for(j=i+1;j<n;j++)
	{
		if(it[i].code>it[j].code)
		{
			t=it[i];
			it[i]=it[j];
			it[j]=t;
		}
	}
 }
 printf("After sorting on code\n");
 for(i=0;i<n;i++)
 {
	printf("%d\t%s\t%d\n",it[i].code,it[i].name,it[i].qty);
 }
 getch();
 }
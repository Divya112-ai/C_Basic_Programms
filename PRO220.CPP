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
 item it[10];
 int n,i,icode,flag=0;
 clrscr();
 printf("How many item?");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	printf("item#%d\n",i);
	printf("code,Name,Quantity:");
	scanf("%d%s%d",&it[i].code,it[i].name,&it[i].qty);
 }
 printf("Enter item code for the item you want to view:");
 scanf("%d",&icode);
 for(i=0;i<n;i++)
 {
	if(it[i].code==icode)
	{
		flag=1;
		printf("name:%s\t Quantity:%d\n",it[i].name,it[i].qty);
		break;
	}
 }
 if(flag==0)
 {
	printf("Item not found...");
 }
 getch();
 }

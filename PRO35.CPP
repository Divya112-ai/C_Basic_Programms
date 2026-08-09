#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,n,i,basic,hra,da,pf,netsal,a,b,c;
int choice;
clrscr();
printf("\n1.intrest \n2.netsal");
printf("\n ENTER THE VALUE OF CHOICE:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	{
		printf("\nprincipal:");
		scanf("%f",&p);
		printf("\nrate:");
		scanf("%f",&r);
		printf("\nyear:");
		scanf("%f",&n);
		i=p*r*n/100;
		printf("\n simple intrest:%f",i);
		break;
	}
	case 2:
	{
		printf("enter the value of basic:");
		scanf("%f",&basic);
		printf("enter the value of a:");
		scanf("%f",&a);
		printf("enter the value of b:");
		scanf("%f",&b);
		printf("enter the value of c:");
		scanf("%f",&c);
		hra=basic*a;
		da=basic*b;
		pf=basic*c;
		netsal=basic+hra+da+pf;
		printf("netsalary:%f",netsal);
		break;
	}
	default:
	{
		printf("invalid case");
	}
}
getch();
}
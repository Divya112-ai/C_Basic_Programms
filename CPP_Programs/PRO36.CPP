#include<stdio.h>
#include<conio.h>
void main()
{
int choice,ch1,ch2;
clrscr();
printf("\n1.pen\n2.fruits");
printf("\nenter the value of choice:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	{
		printf("\n1.micro\n2.renold\n3.cello");
		printf("\nenter the value of ch1:");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:
			{
				printf("\n micro");
				break;
			}
			case 2:
			{
				printf("\n renold");
				break;
			}
			case 3:
			{
				printf("\n cello");
				break;
			}
			default :
			{
				printf("invalid case");
			}
		}
		break;
	}
	case 2:
	{
		printf("\n1.mango\n2.orange\n3.pineapple");
		printf("\nenter the value of ch2:");
		scanf("%d",&ch2);
		switch(ch2)
		{
			case 1:
			{
				printf("\n mango");
				break;
			}
			case 2:
			{
				printf("\n orange");
				break;
			}
			case 3:
			{
				printf("\n pineapple");
				break;
			}
			default :
			{
				printf("invalid case");
			}
		}
	break;
	}
	default :
	{
		printf("invalid case");
	}
}
getch();
}


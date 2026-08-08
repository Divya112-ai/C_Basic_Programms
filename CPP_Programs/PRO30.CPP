#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("ENTER YOUR NUMBER :");
scanf("%d",&a);
switch(a)
{
	  case 1:
	  {
	  printf("\nmonday");
	  break;
	  }
	  case 2:
	  {
	  printf("\ntuesday");
	  break;
	  }
	  case 3:
	  {
	  printf("\nwednesday");
	  break;
	  }
	  case 4:
	  {
	  printf("\nthursday");
	  break;
	  }
	  case 5:
	  {
	  printf("\nfriday");
	  break;
	  }
	  case 6:
	  {
	  printf("\nsaturday");
	  break;
	  }
	  case 7:
	  {
	  printf("\nsunday");
	  break;
	  }
}
getch();
}
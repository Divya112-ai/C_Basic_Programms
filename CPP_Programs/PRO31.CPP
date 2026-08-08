#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("the value of a=");
scanf("%d",&a);
printf("the value of b=");
scanf("%d",&b);
printf("the value of c=");
scanf("%d",&c);
switch(c)
{
	    case 1:
	    {
	    d=a+b;
	    printf("a+b:%d",d);
	    break;
	    }
	    case 2:
	    {
	    d=a-b;
	    printf("a-b=%d",d);
	    break;
	    }
	    case 3:
	    {
	    d=a*b;
	    printf("a*b=%d",d);
	    break;
	    }
	    case 4:
	    {
	    d=a/b;
	    printf("a/b=%d",d);
	    break;
	    }
	    case 5:
	    {
	    d=a%b;
	    printf("a modules b=%d",d);
	    break;
	    }
	    default :
	    {
	    printf("enter the proper value of c");
	    }
}
getch();
}
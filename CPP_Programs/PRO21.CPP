#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b;
float c;
clrscr();
printf("ther value of a :");
scanf("%d",&a);
b=sqrt(a);
c=a/b;
printf("the value of b :%d\n\n",b);
if(b==c)
{
printf("a is a perfect no.");
}
else
{
printf("a is not a perfect no.");
}
getch();
}
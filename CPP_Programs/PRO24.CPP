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
if(c==1)
{
d=a+b;
printf("a+b=%d",d);
}
else if(c==2)
{
d=a-b;
printf("a-b=%d",d);
}
else if (c==3)
{
d=a*b;
printf("a*b=%d",d);
}
else if (c==4)
{
d=a/b;
printf("a/b=%d",d);
}
else if(c==5)
{
d=a%b;
printf("a modules b=%d",d);
}
getch();
}

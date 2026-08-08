#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float b,c;
clrscr();
printf("paisa=");
scanf("%d",&a);
b=a/100;
c=a%100;
printf("\nrupee=%f",b);
printf("\nremaining paisa=%f",c);
getch();
}
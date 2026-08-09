#include<stdio.h>
#include<conio.h>
void main()
{
int len=0,counter=1;
char a[40];
clrscr();
printf("enter the string:");
gets(a);
while(a[len]!='\0')
{
	len++;
	if(a[len]==' ')
	counter++;
}
printf("the length of string is:%d",len);
printf("\nThis string containes %d words ",counter);
getch();
}
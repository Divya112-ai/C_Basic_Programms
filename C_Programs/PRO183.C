#include<stdio.h>
#include<conio.h>
void main()
{
int len=0,counter=1;
char a[40];
clrscr();
printf("enter a string:");
gets(a);
while(a[len]!='\0')
{
	len++;
	if(a[len]==' ')counter++;
}
printf("the length of this string is=%d",len);
printf("\nthis string has %d words.\n",counter);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
char arr[100],copy[100];
int len=0,i;
clrscr();
printf("Enter the string:");
fflush(stdin);
gets(arr);
while(arr[len]!='\0')
{
	len++;
}
for(i=0;i<=len;i++)
{
	copy[i]=arr[i];
}
printf("Copy string:");
puts(copy);
getch();
}
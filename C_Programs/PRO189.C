#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char name[20];
clrscr();
printf("Enter a string:>>");
gets(name);
for(i=0;i<strlen(name);i++)
{
	printf("%c\t%d\n",name[i],name[i]);
}
getch();
}
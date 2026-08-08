#include<stdio.h>
#include<conio.h>
void main()
{
char name[]="Cdac Computer Education";
char *p;
clrscr();
p=name;
while(*p!='\0')
{
	printf("%c",*p);
	p++;
}
getch();
}
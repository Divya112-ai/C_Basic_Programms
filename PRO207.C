#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],sstr[100];
int pos,l,c=0;
clrscr();
printf("\n\nExtract a substring from a given string:\n");
printf("---------------------------------------------------------------\n");
printf("input the string:");
gets(str);
printf("input the position to start extraction:");
scanf("%d",&pos);
printf("input the length of substring:");
scanf("%d",&l);
while(c<l)
{
	sstr[c]=str[pos+c-1];
	c++;
}
sstr[c]='\0';
printf("The substring retrieve from the string is:\"%s\"\n\n",sstr);
getch();
}
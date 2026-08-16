#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,c=0;
char s[25],dis;
clrscr();
printf("Enter the string:>>");
gets(s);
printf("\nEnter the character U want to find:>>");
scanf("%c",&dis);
printf("\nThe position U want to find are as below:>>");
for(i=0;s[i]!='\0';i++)
{
	if(s[i]==dis)
	{
		printf("\n%d",i);
		c++;
	}
}
printf("\nNumber of time occurrence:%d",c);
getch();
}
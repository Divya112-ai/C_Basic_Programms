#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[20];
int i,j,flag=0;
clrscr();
printf("enter a string:");
gets(s);
for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
{
	if(s[i]!=s[j])
	{
		flag=1;
		break;
	}
}
if(flag==0)
printf("\npalindrome");
else
printf("\nNot palindrome");
getch();
}

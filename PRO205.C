#include<stdio.h>
#include<conio.h>
#include<string.h>
# define MAX_SIZE 100 //Maximum string size
void main()
{
char str[MAX_SIZE];
int i,len;
int freq[26];
clrscr();
/* input string from user */
printf("Enter any string:");
gets(str);
len=strlen(str);
/* initialize frequency of each character to 0 */
for(i=0;i<26;i++)
{
	freq[i]=0;
}
/* Find total number of occurrencess of each character */
for(i=0;i<len;i++)
{
	/* if the current character is lowercase alphabet */
	if(str[i]>='a'&&str[i]<='z')
	{
		freq[str[i]-97]++;
	}
	else if(str[i]>='A'&& str[i]<='Z')
	{
		freq[str[i]-65]++;
	}
}
/* print the frequency of all characters in the string */
printf("\nFrequency of all characters in the given string:\n");
for(i=0;i<26;i++)
{
	/* if current character exists in given string */
	if(freq[i]!=0)
	{
		printf("%c= %d\n",(i+97),freq[i]);
	}
}
getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char str[10],tmp;
int i,j,len=0;
clrscr();
printf("ENTER ANY STRING [MAX 10 CHARACTERS]:\n");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
	for(j=i+1;j<len;j++)
	{
		if(str[i]>str[j])
		{
			tmp=str[j];
			str[j]=str[i];
			str[i]=tmp;
		}
	}
}
printf("STRING IN THE ALPHABETICAL ORDER IS:\n");
puts(str);
getch();
}
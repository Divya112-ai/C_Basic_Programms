#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],i,j,a,b=0;
clrscr();
printf("Enter any name:>>");
gets(str);
a=strlen(str);
for(i=0;i<a;i++)
{
	for(j=0;j<a;j++)
	{
		if(str[i]==str[j])
		b++;
	}
	printf("%c=%d",str[i],b);
	b=0;
		printf("\n");
}
getch();
}
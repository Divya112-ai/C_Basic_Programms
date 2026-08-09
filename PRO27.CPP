#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("ENTER YOUR CHARACTER :");
scanf("%c",&a);
if (a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
{
printf("your character is vovel.");
}
else
{
printf("your character is not a vovel.");
}
getch();
}
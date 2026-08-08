#include<stdio.h>
#include<conio.h>
struct student
{
 int rollno;
 char name[20];
};
void main()
{
 student s[10];
 int i,n;
 clrscr();
 printf("How many Students?");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	printf("Student#%d:Rollno and name?",i);
	scanf("%d%s",&s[i].rollno,s[i].name);
 }
 printf("You have entered\n");
 for(i=0;i<n;i++)
 {
	printf("student#%d:rollno:%dname:%s\n",i,s [i].rollno,s[i].name);
 }
 getch();
 }

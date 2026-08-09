#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("make your choice.");
scanf("%d",&a);
switch(a)
{
	 case 1:
	 {
	 printf("\nvivo");
	 break;
	 }
	 case 2:
	 {
	 printf("\nsamsung");
	 break;
	 }
	 case 3:
	 {
	 printf("\noppo");
	 break;
	 }
	 case 4:
	 {
	 printf("\npoco");
	 break;
	 }
	 case 5:
	 {
	 printf("\nrealmi");
	 break;
	 }
	 default:
	 {
	 printf("\niphone");
	 }
}
getch();
}
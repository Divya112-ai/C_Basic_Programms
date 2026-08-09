#include<stdio.h>
#include<conio.h>
void main()
{
int paisa=250;
float rupee,rd;
clrscr();
printf("paisa=%d",paisa);
rupee=paisa/100;
rd=paisa%100;
printf("\nrupee=%f",rupee);
printf("\nremaining paisa=%f",rd);
getch();
}
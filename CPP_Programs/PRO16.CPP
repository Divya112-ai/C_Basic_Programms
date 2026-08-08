#include<stdio.h>
#include<conio.h>
void main()
{
float maths,science;
float english;
float total,pr;
clrscr();
printf("maths :");
scanf("%f",&maths);
printf("science :");
scanf("%f",&science);
printf("english :");
scanf("%f",&english);
total=maths+science+english;
printf("\ntotal:%f",total);
pr=total/3;
printf("\npersentage :%f",pr);
getch();
}
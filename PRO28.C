#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
intgraph(&gd,&gm,"c:\\turboc3\\bgi");
outtextxy(23,23,"welcome to cdac graphics");
line(20,32,215,32);
getch();
closegraph();
}
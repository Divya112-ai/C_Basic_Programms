#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
circle(300,220,150);
circle(230,158,30);
circle(370,158,30);
arc(300,220,200,340,120);
line(188,262,412,262);
/*line(280,280,220,330);
line(330,280,380,330);
arc(300,220,234,306,140);
line(270,265,270,300);
line();*/
sound(700);
delay(2000);
nosound();
getch();
closegraph();
}

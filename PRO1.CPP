//simple write operation
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
int main()
{
	ofstream fout;
	clrscr();
	fout.open("sample.txt");
	fout<<"This is first program";
	getch();
	return 0;







}


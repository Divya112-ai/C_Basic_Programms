//program to read from text file and display it
#include<fstream.h>
#include<conio.h>
int main()
{
	ifstream fin;
	fin.open("sample.txt");
	char ch;
	while(fin.eof())
	{
		fin.get(ch);
		cout<<ch;

	}
	fin.close();
	getch();
	return 0;
}
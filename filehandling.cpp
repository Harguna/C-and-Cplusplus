#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int  main()
{
	//file handling
	char ch;
	fstream file;
	file.open("text.txt",ios::out);
	file<<"This line has been written"<<endl;
	file<<"My name is Harguna Sood"<<endl;
	cout<<"Writing successfull!";
	cout<<endl<<"Now reading begins: ";
	file.seekg(0);
	while((file.eof())==0)
	{
	cout<<"Entered loop";
	file.get(ch);
	cout<<ch;
	file.close();
	return 0;
    }
}

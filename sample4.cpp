#include<iostream>
#include<string.h>
using namespace std;

int main()

{	char *str=new char[10];
	str="test";
		
	int num=strlen(str);
	cout<<num;
	delete str;
	
	
	
    char *str2=new char[7];
	cin>>str2;
	cout<<str2<<endl;
	
	delete str2;
	
	cout<<str2;
return 0;	
}

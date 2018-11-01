#include<iostream>
using namespace std;

int main(){
	int *p=new int(20);
	cout<<p<<"\n";
	cout<<*p;
	int x=10;
	int *q=&x;
	cout<<"\n"<<q;
	cout<<"\n"<<*q;
	return 1;
}


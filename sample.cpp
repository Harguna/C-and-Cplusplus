#include<iostream>
using namespace std;

class sample
{	public:
		static int num;
		void func();
		
}a,b,c;

int sample::num;

void sample::func()
	{	static int num=4;
		cout<<num;
		num++; cout<<num ;
	}
	
int main()
{	sample s;
	s.func();
	
	cout<<&s.num;
	
	a.num=10;
	cout<<b.num;
	
	return 0;
}

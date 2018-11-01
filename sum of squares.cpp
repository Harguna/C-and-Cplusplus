#include<iostream>
#include<math.h>
using namespace std;

// recursion question assignment 8

int sqr(int n)
{
if (n>0)
	{
		return (pow(n,2) + sqr(n-1));
	}
}

int main()
{int num;
	home:
	cout<<"Enter the number of terms for sum of squares :";
	cin>>num;
	
	if (num<=0)
		{
			cout<<"Enter a number greater than 0"<<endl;
			goto home;
		}
	
	    else 
	    	{
	    		cout<< sqr(num);
			}
return 0;			
}

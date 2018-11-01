#include<iostream>
using namespace std;

class sample	
{
 public: 
 		static int num;
 				
};
int sample::num;

int main()
{ int *i= new int(10);
	sample s;
		s.num=2;
		
 		int *p=&s.num;
 		cout<<p<<endl;
 		
 		p++;
 		cout<<p;
 		
 		p++;
 		cout<<endl<<p<<endl<<*i;
 		
 		delete i;
 		 cout<<endl<<*i;
 		 
 		 cout<<endl<<"trying array now ";
 		 
 		 int *a= new int[2];
 		 for(int b=0;b<2;b++)
 		 	{
 		 	     cin>>a[b]>>endl;
 		 	     
			}
	    for(b=0;b<2;b++)
 		 	{
 		 	     cout<<endl<<a[b];    
			}
			
		delete a;
		for(b=0;b<2;b++)
 		 	{
 		 	     cout<<endl<<a[b];    
			}
		
 		
 				
				
return 0;		
}

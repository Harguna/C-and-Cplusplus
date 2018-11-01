#include<iostream>
using namespace std;

int main()
{
	 cout<<endl<<"trying array now ";
 		 
 		 int *a= new int[2];
 		 
 		 for(int b=0;b<2;b++)
 		 	{
 		 	     cin>>a[b];
 		 	     
			}
	    for(int c=0;c<2;c++)
 		 	{
 		 	     cout<<endl<<a[c];    
			}
			
		delete a;
		for(int d=0;d<2;d++)
 		 	{
 		 	     cout<<endl<<a[d];    
			}
		
return 0;	
}

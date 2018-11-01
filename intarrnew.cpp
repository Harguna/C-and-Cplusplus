#include<iostream>
using namespace std;
 //dynamic array:integers
 int main()
{int num;
 cout<<"Enter the number of terms in array:";
	 cin>>num;
  int *arr = new int[num];
  
  for(int i=0;i<num;i++)
  	{ cout<<"Enter term number "<<i+1<<": ";
  		cin>>arr[i];
    }
    
 cout<<endl<<"Elements stored are:"<<endl;
  for(int i=0;i<num;i++)
    {
  		cout<<arr[i]<<endl;
    }
    
 cout<<endl<<"Finding the average of entered numbers...";
 
 float average;
 int sum=0;
 for(int i=0;i<num;i++) 
	{
	   sum =sum + arr[i];
	}
 average=sum/num;	
 cout<<endl<<endl<<endl<<"Average of entered numbers is:"<<average;

delete []arr		
;}


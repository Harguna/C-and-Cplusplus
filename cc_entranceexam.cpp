#include<iostream>
#include <algorithm>
#include <functional>  
using namespace std;

int main(){
	int t;
	long long arr[4], n, k, e, m ;
	cin>>t;
	
	for(int i=0;i<t;i++){
		for(int j=0;j<4; j++){
			cin>>arr[j];
		}
		n=arr[0];
		k=arr[1];
		e=arr[2];
		m=arr[3];
		
		long long marks[n]={0};
		
		for(int j=0; j<n-1; j++){
			for(int k=0; k<e; k++){
				long long x;
				cin>>x;
				marks[j]= marks[j]+x;
			}
		}
		
		for(int j=0; j<e-1; j++){
			long long x;
			cin>>x;
			marks[n-1]= marks[n-1]+x;
		}
		
		std::sort(marks, marks+(n-1));
		long long req;
		req= marks[n-2-(k-1)];
		if((req-marks[n-1])<0){
			cout<<'0'<<endl;
		}
		else if ((req-marks[n-1])<m){
			cout<<(req-marks[n-1]+1)<<endl;
		}
		else{
			cout<<"Impossible"<<endl;
		}
	}
	
	return 0;
}

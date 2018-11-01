#include <iostream>
using namespace std;

int main(){
	int cases, arr[26], sum;
	string str;
	cin>>cases;
	for(int i=0;i<cases;i++){
		for(int j=0; j<26; j++){
			cin >> arr[j];
		}
		cin >> str;
		int temp[26]={0};
		for(int j=0; j<str.length();j++){
			temp[str[j]-'a']++;
		}
		sum=0;
		for(int j=0; j<26; j++){
			if(temp[j]==0){
				sum=sum+arr[j];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int time[5], time_u=2, time_s=5, j=0, temp1, tat[5]=0;
	char pname[5], type[5], temp, temp2;	

	for(int i=0; i<3; i++){
		cin>>pname[i];
		cin>>type[i];
		cin>>time[i];	
	}
	
	for (int i=0; i<3; i++){
		if (type[i]=='s'){
			temp= type[i];
			type[i]= type[j];
			type[j]=temp;

			temp1= time[i];
			time[i]= time[j];
			time[j]=temp1;

			temp2= pname[i];
			pname[i]= pname[j];
			pname[j]=temp2;
			j=j+1;
		}
	}

	for(int i=0; i<3; i++){
		cout<<pname[i];
		cout<<type[i];
		cout<<time[i];
	}	
	
	for(int i=0; i<3; i++){
		if (type[i]=='s'){
			if((time[i]-time_s)<0 && time[i]>0){
				processing_time[i]=tat[i]+(time[i]-time_s);
				time[i]= time[i]-time_s;
				cout<<pname[i];
			}

			if ((time[i]-time_s)>0 && time[i]>0){
						tat[i]=tat[i]+time_s;
						time[i]= time[i]-time_s;
						cout<<pname[i];
			}
		}

		if (type[i]=='u'){
			if((time[i]-time_u)<0 && time[i]>0){
				tat[i]=tat[i]+(time[i]-time_u);
				time[i]= time[i]-time_u;
				cout<<pname[i];
			}

			if ((time[i]-time_u)>0 && time[i]>0){
						tat[i]=tat[i]+time_u;
						time[i]= time[i]-time_u;
						cout<<pname[i];
			}
		}
		
	}
	return 0;
}
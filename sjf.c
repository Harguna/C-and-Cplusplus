
#include<stdio.h>

int main(){
	int at[3], bt[3], ct[3], tat[3], wt[3], temp,i,j;

	for(i=0; i<3; i++){
		scanf("%d", &at[i]);
		scanf("%d", &bt[i]);
	}
	
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			if (bt[i]>bt[i+1]){
				temp=bt[i];
				bt[i]=bt[i+1];
				bt[i+1]= temp;		
			}
		}
	}

	ct[0]= at[0]+bt[0];

	for (i=1; i<3; i++){
		ct[i]=	ct[i-1]+bt[i];
	}
	
	for(i=0; i<3; i++){
		tat[i]=ct[i]-at[i];
		wt[i]= tat[i]-bt[i];	
	}			
	
	for (i=0; i<3; i++){
		printf("Arrival:%d Burst:%d Completion:%d Turnaround:%d Waiting:%d",at[i] ,bt[i] ,ct[i], tat[i], wt[i]);
		printf("\n");
	}

	return 0;
}




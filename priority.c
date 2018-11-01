#include<stdio.h>

int main(){
	int at[3], bt[3], ct[3], tat[3], wt[3], temp, pr[3],i,j;

	for(i=0; i<3; i++){
		scanf("%d", &at[i]);
		scanf("%d", &bt[i]);
		scanf("%d", &pr[i]);
	}
	
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			if (pr[i]>pr[i+1]){
				temp=pr[i];
				pr[i]=pr[i+1];
				pr[i+1]= temp;
				
				temp=at[i];
				at[i]=at[i+1];
				at[i+1]= temp;

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
		printf("Arrival:%d Burst:%d Priority:%d Completion:%d Turnaround:%d Waiting:%d",at[i] ,bt[i], pr[i] ,ct[i], tat[i], wt[i]);
		printf("\n");
	}

	return 0;
}

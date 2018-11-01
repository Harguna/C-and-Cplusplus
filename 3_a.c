#include <stdio.h>
int main() {
        int arr_u[5], bt_u[5], n=4, wt_u[5], tat_u[5], sum_bt=0, sum_tat=0, sum_wt=0, u=0, s=0,time=0,i,k;
        int arr_s[5], bt_s[5], wt_s[5], tat_s[5], prev_s[5], prev_u[5], ttl_bt=0, no_u[5], no_s[5];
        char type;

        for (i=0; i<n; i++){
                printf("\nType: ");
                scanf(" %c",&type);
 
                if (type=='u'){
                        printf("\nProcess number: ");
                        scanf("%d",&(no_u[u]));
                        printf("\nArrival time: ");
                        scanf("%d",&(arr_u[u]));
                        printf("\nBurst time: ");
                        scanf("%d",&(bt_u[u]));
                        ttl_bt+=bt_u[u];
                        u++;    
                }
                
                else{
                        printf("\nProcess number: ");
                        scanf("%d",&(no_s[s]));
                        printf("\nArrival time: ");
                        scanf("%d",&(arr_s[s]));
                        printf("\nBurst time: ");
                        scanf("%d",&(bt_s[s]));
                        ttl_bt+=bt_s[i];   
                        s++; 
                }
        }
               
        for (k=0; k<s; k++){
                prev_s[k]=arr_s[k];
                wt_s[k]=0;
        }
               
        for (i=0; i<u; i++){
                prev_u[i]=arr_u[i];
                wt_u[i]=0;
        }
               
        while(sum_bt<ttl_bt){
                for (i=0; i<s; i++){
                        if(bt_s[i]>0  && arr_s[i]<=time){
                                if(bt_s[i]<=5){
                                        printf("\nProcess Number : %d", no_s[i]);
                                        printf("Time: %d-%d", time, (time+bt_s[i]));
                                        wt_s[i]+= time-prev_s[i];
                                        sum_bt+= bt_s[i];
                                        time+= bt_s[i];
                                        tat_s[i]= time-arr_s[i];
                                        bt_s[i]=0;
                                        sum_wt+= wt_s[i];
                                        sum_tat+= tat_s[i];
                                }

                                else{
                                        printf("\nProcess Number : %d", no_s[i]);
                                        printf("Time: %d-%d", time, (time+5));
                                        wt_s[i]+= time-prev_s[i];
                                        sum_bt+= 5;
                                        bt_s[i]-=5;
                                        time= time+5;
                                        prev_s[i]= time;                                                               
                                }             
                        }
                }
                               
                for(i = 0; i < u; ++i){
                        if(bt_u[i]>0 && arr_u[i]<=time){
                                if(bt_u[i]<=2){
                                        printf("\nProcess Number : %d", no_u[i]);
                                        printf("Time: %d-%d", time, (time+bt_u[i]));
                                        wt_u[i]+= time-prev_u[i];
                                        sum_bt+= bt_u[i];
                                        time+= bt_u[i];
                                        tat_u[i]= time-arr_u[i];
                                        bt_u[i]=0;
                                        sum_wt+= wt_u[i];
                                        sum_tat+= tat_u[i];  
                                }
                                
                                else{
                                        printf("\nProcess Number : %d", no_u[i]);
                                        printf("Time: %d-%d", time, (time+2));
                                        wt_u[i] += time-prev_u[i];
                                        sum_bt += 2;
                                        bt_u[i]-=2;
                                        time=time+2;
                                        prev_u[i]=time;                                                                               
                                }
                        }             
                }
               
        }             
 
        printf("\nWaiting time (User Processes): ");
        for (i=0; i<u; i++){
                printf("\n %d: %d", no_u[i], wt_u[i]);
        }

        printf("\nWaiting time (System Processes): ");
        for (i=0; i<s; i++){
                printf("\n %d: %d", no_s[i], wt_s[i]);
        }
 
        printf("\nTurnAround time (User Processes): ");
        for (i=0; i<u; i++){
                printf("\n %d: %d", i+1, tat_u[i]);
        }
               
        printf("\nTurnAround time (System Processes): ");
        for (i=0; i<s; i++) {
                printf("\n %d: %d", i+1, tat_s[i]);
        }
               
        printf("\nAverage Waiting Time: %d\n",sum_wt/n);
        printf("Average Turnaround Time: %d",sum_tat/n);
        return 0;
}

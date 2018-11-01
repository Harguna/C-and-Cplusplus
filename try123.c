#include<stdio.h>
 
int main()
{
      int n=4, ttl=0, x, i, count=0, quantum=3;
      int wt= 0, tat=0, arr[4], bt[4], temp[4];
      float avg_wt, avg_tat;
      x=n;
      for(i=0; i<n; i++){
            printf("\nProcess[%d]\n", i+1);
            printf("Arrival Time:\t");
            scanf("%d", &arr[i]);
            printf("Burst Time:\t");
            scanf("%d", &bt[i]);
            temp[i]= bt[i];
      }

      for(ttl=0, i=0; x!=0;){

            if(temp[i]<=quantum && temp[i]>0){
                  ttl= ttl+temp[i];
                  temp[i]= 0;
                  count= 1;
            }

            else if(temp[i]>0){
                  temp[i]= temp[i]-quantum;
                  ttl= ttl+quantum;
            }

            if(temp[i]==0 && count==1){
                  x--;
                  wt= wt+ttl-arr[i]-bt[i];
                  tat= tat+ttl-arr[i];
                  count= 0;
                  printf("\nProcess[%d]\n", i+1);
                  printf("Burst time: %d \n", bt[i]);
                  printf("Turnaround time: %d \n", ttl-arr[i]);
                  printf("Waiting time: %d \n", ttl-arr[i]-bt[i]);
            }

            if(i==n-1){
                  i=0;
            }

            else if(arr[i+1]<=ttl){
                  i++;
            }

            else{
                  i=0;
            }
      }

      avg_wt= wt*1.0/n;
      avg_tat= tat*1.0/n;
      
      printf("\nAverage Waiting Time: %f \n", avg_wt);
      printf("Average Turnaround Time: %f", avg_tat);
      
      return 0;
}

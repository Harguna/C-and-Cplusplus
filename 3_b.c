#include <stdio.h> 
int main(){
      int arr[3], bt[3], temp[3], i, smallest, count=0, time, n=3;
      double wt= 0, tat= 0, end;
      float avg_wt, avg_tat;

      for(i=0; i<n; i++){
            printf("\nArrival Time:\t");
            scanf("%d", &arr[i]);
            printf("Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }
      bt[3] = 9999;  
      for(time=0; count!=n; time++){
            smallest=3;
            for(i=0; i<n; i++){
                  if(arr[i]<=time && bt[i]<bt[smallest] && bt[i]>0){
                        smallest = i;
                  }
            }
            bt[smallest]--;
            
            if(bt[smallest] == 0)
            {
                  count++;
                  end= time+1;
                  wt= wt+end-arr[smallest]-temp[smallest];
                  tat= tat+end-arr[smallest];
            }
      }
      avg_wt= wt/n; 
      avg_tat= tat/n;
      printf("\nAverage Waiting Time:\t %lf", avg_wt);
      printf("\nAverage Turnaround Time:\t %lf", avg_tat);

      return 0;
}

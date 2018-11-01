#include<stdio.h>
 
int main()
{
      int n=4, ttl=0, x, count=0, quantum=3;
      int wt= 0, tat=0, arr[4], bt[4], temp[4];
      float avg_wt, avg_tat;
      x = n;
      for(int i = 0; i < n; i++)
      {
            printf("\nProcess[%d]\n", i + 1);
            printf("Arrival Time:\t");
            scanf("%d", &arr[i]);
            printf("Burst Time:\t");
            scanf("%d", &bt[i]);
            temp[i] = bt[i];
      }

      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(ttl=0, int i=0; x!=0;)
      {
            if(temp[i]<=quantum && temp[i]>0)
            {
                  ttl=ttl+temp[i];
                  temp[i]=0;
                  count=1;
            }
            else if(temp[i]>0)
            {
                  temp[i]=temp[i]-quantum;
                  ttl=ttl+quantum;
            }
            if(temp[i]==0 && count==1)
            {
                  x--;
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i+1, bt[i], ttl-arr[i], ttl-arr[i]-bt[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i];
                  turnaround_time = turnaround_time + total - arrival_time[i];
                  counter = 0;
            }
            if(i == n-1)
            {
                  i = 0;
            }
            else if(arrival_time[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
      average_wait_time = wait_time * 1.0 / limit;
      average_turnaround_time = turnaround_time * 1.0 / limit;
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time);
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time);
      return 0;
}

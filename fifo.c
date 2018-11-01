#include<stdio.h>
 
int main()
{
      int temp[10], ref[10], faults = 0, i, j, s, num, frames;
      printf("\nEnter Total Number of Pages:\t");
      scanf("%d", &num);
      printf("\nEnter values:\n");
      for(i = 0; i < num; i++){
            scanf("%d", &ref[i]);
      }
      printf("\nEnter Total Number of Frames:\t");
      scanf("%d", &frames);
      for(i = 0; i < frames; i++){
            temp[i] = 0;
      }
      for(i = 0; i < num; i++){
            s = 0;
            for(j = 0; j < frames; j++){
                  if(ref[i] == temp[j]){
                        s++;
                        faults--;
                  }
            }     
            faults++;
            if((faults <= frames) && (s == 0)){
                  temp[i] = ref[i];
            }   
            else if(s == 0){
                  temp[(faults - 1) % frames] = ref[i];
            }
            printf("\n");
            for(j = 0; j < frames; j++){     
                  printf("%d\t", temp[j]);
            }
      } 
      printf("\nTotal Page Faults:\t%d\n", faults);
      return 0;
}

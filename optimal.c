#include<stdio.h>

int main(){
      int ref[25], frames[25], interval[25], pages, total, faults = 0, i, j, temp, flag, found, pos, max, prev = -1;
      printf("\nEnter Total Number of Pages: ");
      scanf("%d", &pages);
      printf("\nEnter Values: ");
      for(i = 0; i < pages; i++){ 
            scanf("%d", &ref[i]);
      }
      printf("\nEnter Total Number of Frames:\t");
      scanf("%d", &total);
      for(i = 0; i < total; i++){
            frames[i] = 0;
      }
      for(i = 0; i < pages; i++){
            flag = 0;
            for(j = 0; j < total; j++){
                  if(frames[j] == ref[i]){
                        flag = 1;
                        printf("\t");
                        break;
                  }
            }
            if(flag == 0) {
                  if (prev == total- 1){
                        for(j = 0; j < total; j++){      
                              for(temp = i + 1; temp < pages; temp++){      
                                    interval[j] = 0;
                                    if (frames[j] == ref[temp]){      
                                          interval[j] = temp-i;
                                          break;
                                    }
                              }
                        }
                        found = 0;
                        for(j = 0; j < total; j++){
                              if(interval[j] == 0){                 
                                    pos = j;
                                    found = 1;
                                    break;
                              }            
                        }
                  }
                  else{
                        pos = ++prev;
                        found = 1;
                  }
                  if(found == 0){
                        max = interval[0];
                        pos= 0;
                        for(j = 1; j < total; j++){
                              if(max < interval[j]){
                                    max = interval[j];
                                    pos = j;
                              }
                        }
                   }     
                   frames[pos] = ref[i];
                   faults++;
            }
            for(j = 0; j < total; j++){
                  if(frames[j] != 0){
                        printf("%d\t", frames[j]);
                  }
            }
            printf("\n");
      }
      printf("\nTotal Number of Page Faults:\t%d\n", faults);
      return 0;
}

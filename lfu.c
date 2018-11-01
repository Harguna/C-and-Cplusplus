#include<stdio.h>

int main(){
      int frames, pages, hit=0;
      int page[25], frame[10], arr[25], time[25];
      int i, j, flag, k, min, temp;
      printf("Enter Total Number of Pages: ");
      scanf("%d", &pages); 
      printf("\nEnter Total Number of Frames: ");
      scanf("%d", &frames);
      for(i = 0; i < frames; i++){
            frame[i] = 0;
      }
      for(i = 0; i < 25; i++){
            arr[i] = 0;
      }
      printf("Enter Values:\n");
      for(i = 0; i < pages; i++){
            scanf("%d", &page[i]);
      }
      printf("\n");
      for(i = 0; i < pages; i++){
            arr[page[i]]++;
            time[page[i]] = i;
            flag = 1;
            k = frame[0];
            for(j = 0; j < frames; j++){
                  if(frame[j] == 0 || frame[j] == page[i]){
                        if(frame[j] != 0){
                              hit++;
                        }
                        flag = 0;
                        frame[j] = page[i];
                        break;
                  }
                  if(arr[k] > arr[frame[j]]){
                        k = frame[j];
                  }
            }
            if(flag){
                  min = 25;
                  for(j = 0; j < frames; j++){
                        if(arr[frame[j]] == arr[k] && time[frame[j]] < min){
                              temp = j;
                              min = time[frame[j]];
                        }
                  }
                  arr[frame[temp]] = 0;
                  frame[temp] = page[i];
            }
            for(j = 0; j < frames; j++){
                  printf("%d\t", frame[j]);
            }
            printf("\n");
      }
      printf("Page Hit:%d\n", hit);
      return 0;
}

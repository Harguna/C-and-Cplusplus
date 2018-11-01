#include<stdio.h>
 
int LRU(int time[], int n){
    int i, min=time[0], pos=0;
 	for(i = 1; i < n; i++){
        if(time[i] < min){
            min = time[i];
            pos = i;
        }
    }
    return pos;
}
 
int main(){
    int num_f, num_p, frames[10], pages[30], count = 0, time[10], flag1, flag2, i, j, pos, faults = 0;
    printf("Enter number of frames: ");
    scanf("%d", &num_f);
    printf("Enter number of pages: ");
    scanf("%d", &num_p);
    printf("Enter values: ");
    for(i = 0; i < num_p; i++){
        scanf("%d", &pages[i]);
    }
    for(i = 0; i < num_f; i++){
        frames[i] = 0;
    }
    for(i = 0; i < num_p; i++){
        flag1 = flag2 = 0;
        
        for(j = 0; j < num_f; j++){
            if(frames[j] == pages[i]){
                count++;
                time[j] = count;
                   flag1 = flag2 = 1;
                   break;
               }
        }
        
        if(flag1 == 0){
            for(j = 0; j < num_f; j++){
                if(frames[j] == 0){
                    count++;
                    faults++;
                    frames[j] = pages[i];
                    time[j] = count;
                    flag2 = 1;
                    break;
                }
            }    
        }
        
        if(flag2 == 0){
            pos = LRU(time, num_f);
            count++;
            faults++;
            frames[pos] = pages[i];
            time[pos] = count;
        }
        
        printf("\n");
        
        for(j = 0; j < num_f; ++j){
            printf("%d\t", frames[j]);
        }
    }
    
    printf("\n\nTotal Page Faults = %d", faults);
    
    return 0;
}

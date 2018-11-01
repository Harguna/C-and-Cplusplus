#include<stdio.h>
int main(){
    int head, i, j, num, temp, disks[20], k, atr[20], tot, p, tracks[20], sum=0;
    printf("\nEnter the total number of tracks: ");
    scanf("%d'",&num);
    printf("\nEnter the values: \n");
    for(i=2;i<num+2;i++){
        scanf("%d",&tracks[i]);
    }
    printf("\nEnter the initial position of head: ");
    scanf("%d",&head);
    tracks[0]=0;
    tracks[1]=head;
	for(i=0;i<num+2;i++){
        for(j=0;j<(num+2)-i-1;j++){
            if(tracks[j]>tracks[j+1]){
                temp=tracks[j];
                tracks[j]=tracks[j+1];
                tracks[j+1]=temp;
            }
        }
    }
    printf("\nSorted: \n");
    for(i=1;i<num+2;i++){
        printf("%d ",tracks[i]);
    }
    for(i=0;i<num+2;i++){
        if(tracks[i]==head){
            j=i;
            k=i;
            p=0;
        }
    }
    while(tracks[j]!=0){
        atr[p]=tracks[j];
        j--;
        p++;
    }
    atr[p]=tracks[j];
    for(p=k+1;p<num+2;p++,k++){
        atr[p]=tracks[k+1];
    }
    for(j=0;j<num+1;j++){
        if(atr[j]>atr[j+1]){
            disks[j]=atr[j]-atr[j+1];
        }
        else{
            disks[j]=atr[j+1]-atr[j];
        }
        sum+=disks[j];
    }
    printf("\nTotal movement: %d",sum);
    printf("\nAverage movement: %f",(float)sum/num);
}

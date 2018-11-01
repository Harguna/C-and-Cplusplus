#include<stdio.h>
int main(){
    int queue[30],size,head,i,seek=0,diff;
    float avg;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    printf("Enter the values: ");
    for(i=1;i<=size;i++){
        scanf("%d",&queue[i]);
    }
    printf("Enter the initial position of Head pointer: ");
    scanf("%d",&head);
    queue[0]=head;
    printf("\n");
    for(i=0;i<=size-1;i++){
        diff=abs(queue[i+1]-queue[i]);
        seek+=diff;
        printf("Moves from %d to %d is: %d\n",queue[i],queue[i+1],diff);
    }
    printf("\nTotal Seek Time is: %d",seek);
    avg=seek/(float)size;
    printf("\nAverage Seek Time is: %f",avg);
}

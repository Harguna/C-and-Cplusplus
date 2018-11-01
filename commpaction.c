#include<stdio.h>
int main()
{
    int mem, size, blocks,num, memory[10],compact=0;
    int i, d, p=0;
    printf("Enter the total memory: ");
    scanf("%d",&mem);
    printf("Enter the block size: ");
    scanf("%d", &size);
    blocks=mem/size;
    printf("\nTotal number of blocks: %d", blocks);
    compact+=mem-(blocks*size);
    printf("\nEnter the number of processes: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("Enter memory for process number %d: ",i+1);
        scanf("%d",&memory[i]);
    }
    printf("\n\nPROCESS\tMEMORY REQUIRED\t\tSTATUS\tUNUSED");
    for(i=0;i<num && p<blocks;i++){
        printf("\n %d\t\t%d",i+1,memory[i]);
        if(memory[i] > size){
            printf("\t\tNO ");
            compact+=size;
        }
        else{
            printf("\t\tYES\t%d",size-memory[i]);
            compact=compact+size-memory[i];
            p++;
        }
    }
    if(i<num)
        printf("\nMemory is Full");
    d=compact/size;
    printf("\n%d blocks can be re-created (compaction). \nTotal remaining memory is: %d",d,compact);
    return 0;
}

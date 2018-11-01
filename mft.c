#include<stdio.h>
int main(){
	int memory[10], mem, size, i, num, file;
	printf("Enter total memory: ");
	scanf("%d", &mem);
	printf("Enter partition size: ");
	scanf("%d", &size);
	printf("Enter number of inputs: ");
	scanf("%d", &num);
	for(i=0; i<10; i++){
		memory[i]=size;
	}
	if(num>(mem/size)){
		printf("Number of processes cannot be more than number of blocks!\n");
	}
	else{
		for(i=0; i<num; i++){
			printf("Enter size of allocation number %d: ", i+1);
			scanf("%d", &file);
			if(file>size){
				printf("No block big enough. Allocation unsuccessful \n");
				i=i-1;
			}
			else{
				memory[i]=memory[i]-file;
			}
		}
	}
	printf("\n\n Allocation (allocated/total): ");
	for(i=0;i<10;i++){
		printf("\n %d/%d", (size-memory[i]), size);
	}
	return 0;
}

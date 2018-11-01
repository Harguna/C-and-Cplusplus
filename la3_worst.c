#include<stdio.h>
int main(){
	int  num, size[30], temp[30], i, j, min, min_i, file;
	printf("Enter number of inputs: ");
	scanf("%d", &num);
	for(i=0; i<num; i++){
		printf("Enter block size for block number %d: ", i+1);
		scanf("%d", &size[i]);
	}
	for(i=0;i<30; i++){
		temp[i]=size[i];
	}
	for(i=0; i<num; i++){
		printf("Enter size of file number %d: ", i+1);
		scanf("%d", &file);
		min= size[0];
		for(j=0; j<num; j++){
			if (size[j]<min && size[i]>=file){
				min= size[j];
				min_i=j;
			}
		}
		if(file>min){
			printf("Cannot allocate.\n");
			i=i-1;
		}
		else{
			size[min_i]=size[min_i]-file;
			printf("Allocation successful.\n");
		}
	}
	
	printf("\n\n Allocation (allocated/total): \n");
	for(i=0;i<num;i++){
		printf("\n %d/%d", (temp[i]-size[i]), temp[i]);
	}
	return 0;
}

#include<stdio.h>
int main(){
	int  num, size[30], temp[30], i, j, min, min_j, file;
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
		j=0;
		while(size[j]<file){
			j=j+1;
		}
		size[j]=size[j]-file;
		printf("Allocation successful.\n");
	}
	
	printf("\n\n Allocation (allocated/total): \n");
	for(i=0;i<num;i++){
		printf("\n %d/%d", (temp[i]-size[i]), temp[i]);
	}
	return 0;
}

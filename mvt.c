#include<stdio.h>

int main(){
	int memory[30], use=0, total=30, i, num, len, last=0, j;
	
	for(i=0; i<30; i++){
		memory[i]=0;
	}
	
	printf("Enter number of inputs: ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		printf("Enter the length %d input: ", i+1);
		scanf("%d", &len);
		
		if(len<=total){
			for(j=0; j<len; j++){
				memory[last+j]=i+1;						
			}
		}	
		total=total-len;
		last=last+j;
		j=0;
	}
	
	for(i=0; i<30; i++){
		printf("%d", memory[i]);	
	}	
	
	
	return 0;
}

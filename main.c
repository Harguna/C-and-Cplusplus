#include <stdio.h>
void consume(int* last, int buffer[]) {
	int temp;
	if ((*last)>0){
		temp = buffer[--(*last)];
		printf("\n%d",temp);
		printf("\nSuccessfully consumed!");
	} 
	else{
		printf("\nUnsuccessful.");
	}
}

void produce(int size, int* last, int buffer[]) {
	int temp;
	if ((*last)<size) {
		printf("\nEnter the product : ");
		scanf("%d", &temp);
		buffer[(*last)++] = temp;
		printf("\nSuccessfully produced!");
	} else {
		printf("\nUnsuccessful.");
	}
}

int main() {
	int buffer[20], size, last=0, count=1, choice;
	printf("\nEnter the size of the buffer: ");
	scanf("%d", &size);

	while (count==1){
		printf("\n1:Produce \n2:Consume\n:");
		scanf("%d", &choice);

		if (choice==1) {
			produce(size,&last,buffer);
		} 
		if(choice==2){
			consume(&last,buffer);
		} 

		printf("\nContinue? (1/0) : ");
		scanf("%d", &count);
	} 
	return 0;
}

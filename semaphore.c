#include <stdio.h>

void wait(int* turn) {
	(*turn)--;
}

void signal(int* turn) {
	(*turn)++;
}

void consume(int* turn, int* empty, int* filled, int buffer[]) {
	int temp;
	wait(filled);
	wait(turn);
	temp = buffer[(*filled)];
	signal(turn);
	signal(empty);
	printf("\n%d",temp);
}

void produce(int* turn, int* empty, int* filled, int buffer[]) {
	int temp;
	printf("\nenter the number : ");
	scanf("%d", &temp);
	wait(empty);
	wait(turn);
	buffer[(*filled)] = temp;
	signal(turn);
	signal(filled);
}

int main() {
	int buffer[20], turn=1, empty=0, filled=0, count=1, choice;
	printf("Enter buffer size: ");
	scanf("%d", &empty);

	while (count==1){
		printf("\n1:Produce \n2:Consume\n:");
		scanf("%d", &choice);

		if (choice==1) {
			if (empty!=0 && turn!=0) {
				produce(&turn, &empty, &filled, buffer);
				printf("Successfully produced.");
			} 
			else {
				printf("\nCannot produce");
			}

		} 
		else if (choice==2) {
			if (filled !=0 && turn!=0) {
				consume(&turn, &empty, &filled, buffer);
			} 
			else {
				printf("\nCannot consume");
			}
		}
		printf("\nContinue? (1/0) : ");
		scanf("%d", &count);
	} 
	return 0;
}

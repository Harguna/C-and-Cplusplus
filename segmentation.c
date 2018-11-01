#include <stdio.h>
int main() {
	int segnum, offset, num, count=1, address[10], size[10], i;

	printf("Enter the number of segments: ");
	scanf("%d", &num);
	for (i=0; i < num; i++) {
		printf("\nEnter address & size of segment number %d : ", i+1);
		scanf("%d %d", &address[i], &size[i]);
	}

	while (count==1){
		printf("\nEnter the segment number : ");
		scanf("%d", &segnum);
		if (segnum <= num) {
			printf("\nEnter the offset : ");
			scanf("%d", &offset);
			if (offset < size[segnum-1]) {
				printf("\nAddress translates to: %d", (address[segnum-1] + offset));
			} 
			else {
				printf("\nInvalid Offset");
			}
		} 
		else {
			printf("\nInvalid segment number");
		}

		printf("\nContinue? (1/0) : ");
		scanf("%d", &count);
	} 

	return 0;
}

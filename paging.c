#include <stdio.h>
int main() {
	int page[20], pagenum, size, offset, num, count=1, i;
	printf("\nEnter the number of pages: ");
	scanf("%d", &num);
	printf("\nEnter the page size : ");
	scanf("%d", &size);
	for (i=0; i<num; i++) {
		printf("Enter the address of page number %d: ", i+1);
		scanf("%d", &(page[i]));
	}
	
	while (count==1) {
		printf("\nEnter the page number : ");
		scanf("%d", &pagenum);
		if (pagenum <= num) {

			printf("\nEnter the offset : ");
			scanf("%d", &offset);
			if (offset < size) {
				printf("\nthe address translates to : %d", (page[pagenum-1] + offset));
			} 
			else {
				printf("\nInvalid Offset");
			}

		} 
		else {
				printf("\nInvalid page number");
		}

		printf("\nwant to continue? (1/0) : ");
		scanf("%d", &count);
	} ;

	return 0;
}

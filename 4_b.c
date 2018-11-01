#include<stdio.h>

struct node{
	int data;
	struct node *next;
};
	
int main(){
	int mem=30, length=0, add=0, end=0, num=0, i, count=0;
	struct node *head=	malloc(sizeof(struct node));
	struct node *temp= malloc(sizeof(struct node));	
	
	printf("Enter Starting Address: ");
	scanf("%d",&add);
	
	printf("Enter Ending Address: ");
	scanf("%d",&end);
	
	if(end-add+1 > 30){
		printf("Insufficient Memory");
	}
	
	else{
		for(i=0; i<30 ; i++){
			if (i==0){
				struct node *newnode= malloc(sizeof(struct node));
				newnode->data=0;
				newnode->next=NULL;
				head= newnode;
				temp= newnode;
			}
			else {
				struct node *newnode= malloc(sizeof(struct node));
				newnode->data=0;
				temp->next=newnode;
				temp=newnode;
				newnode->next=NULL;
			}		
		}	
		
		temp=head;
		count=1;

		while (count != add){
			temp=temp->next;
			count++;
		}

		for(i=0; i<=(end-add+1); i++){
			if(i==(end-add+1)){
				temp->data=-1;
			}
			else{
				printf("Enter data:");
				scanf("%d", &temp->data);
				temp=temp->next;
			}
		}
		
		for(i=0; i<30; i++){
			if (i==0){
				printf("%d-", head->data);
				temp= head->next;
			}
			else{
				if(temp->data < 0){
					printf("(%d)", temp->data);
					temp=temp->next;
				}
				else{
					printf("%d-", temp->data);
					temp=temp->next;
				}
			}
		}
	}	
	
	return 0;
}


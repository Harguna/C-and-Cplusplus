#include<stdio.h>

struct node{
	int data;
	struct node *next;
};
	
int main(){
	int mem=30, length=0, address=0, num=0, i;
	struct node *head=	malloc(sizeof(struct node));
	struct node *temp= malloc(sizeof(struct node));
	
	for(i=0; i<=30; i++){
		if (i==0){
			struct node *newnode= malloc(sizeof(struct node));
			newnode->data=0;
			newnode->next=NULL;
			head= newnode;
			temp= newnode;
		}
		else{
			struct node *newnode= malloc(sizeof(struct node));
			newnode->data=0;
			temp->next=newnode;
			temp=newnode;
			newnode->next=NULL;
		}
		
	}
	
	temp=head;
	printf("%d \n%d\n \n \n",temp, temp->data);
	
	for(i=0; i<=30; i++){
		if (i==0){
			printf("%d-", head->data);
			temp= head->next;
		}
		else{
			if(temp->data < 0){
				printf("(%d)", temp->data);
			}
			else{
			printf("%d-", temp->data);
			temp=temp->next;
			}
		}
	}
	
	return 0;
}


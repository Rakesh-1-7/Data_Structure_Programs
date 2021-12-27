#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void enqueue(int d) //Insert elements in Queue
{
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if((r==NULL)&&(f==NULL))
	{
		f = r = n;
		r->next = f;
	}
	else
	{
		r->next = n;
		r = n;
		n->next = f;
	}
} 
void dequeue() // Delete an element from Queue
{
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r){
		printf("Item deleted is %d ",f->data);
		f = r = NULL;
		free(t);
	}
	else{
		printf("Item deleted is %d ",f->data);
		f = f->next;
		r->next = f;

		free(t);
	}
	
	
}
void print(){ // Print the elements of Queue
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("\n%d",t->data);
			t = t->next;
		}while(t != f);
	}
}
int main()
{
	int opt,i,data;
	printf("Enter Your Choice:-");
	while(1)
  {
		printf("\n\n1. Insert Rear\n2. Delete Front \n3. Display\n4. Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter your data : ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				print();
				break;
			default:
				return 0;
		}
	}
}

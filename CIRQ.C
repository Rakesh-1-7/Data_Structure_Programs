#include<stdio.h>
// #inlcude<conio.h>
#define Q_SIZE 5
int item,front = 0, rear = -1, q[Q_SIZE], count = 0;
int deletefront();
void insertrear()
{
	if(count == Q_SIZE)
	{
		printf("Queue Overflow\n");
		return;
	}	
	rear = (rear+1)%Q_SIZE;
	q[rear] = item;
	count++;
}

void displayQ()
{
	int i,f;
	if(count == 0)
	{
		printf("Queue is empty.\n");
		return;
	}
	f = front;
	printf("Contents of Queue : \n");
	for(i=1;i<=count;i++)
	{
		printf("%d\n",q[f]);
		f=(f+1)%Q_SIZE;
	}
}

int main()
{
	int choice;
	// clrscr();
	for(;;)
	{
		printf("\n1Insert rear\n2.DeleteFront\n3.Display\n4.Exit\n");
		printf("Enter the choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the item to be inserted :");
			       scanf("%d",&item);
			       insertrear();
			       break;
			case 2:item = deletefront();
			  	if(item == -1)
				printf("Queue is empty.\n");
				else
				printf("Item deleted = %d\n",item);
				break;
			case 3:displayQ();
				break;
			default:return 0;
		}
	}

}

int deletefront()
{
	if(count == 0)return -1;
	item = q[front];
	front = (front+1)%Q_SIZE;
	count--;
	return item;
}

#include <stdio.h>
#include<conio.h>
#include<process.h>
#define Q_SIZE 5

int item, front = 0, rear = -1, q[10];

void insertrear()
{
  if(rear == Q_SIZE - 1)
  {
    printf("Queue Overflow.\n");
    return;
  }

  q[++rear] = item;
}

int deletefront()
{
  if(front > rear)
  {
    front = 0;
    rear = -1;
    return -1;
  }
  return q[front++];
}

void displayQ()
{
  int i;
  if(front > rear)
  {
    printf("Queus is empty.\n");
    return;
  }
  printf("Contents of queue :\n");
  for(i = front; i <= rear; i++)
  printf("%d\n",q[i]);
}

void main()
{
  int choice;
  clrscr();
  for(;;)
  {
    printf("\n1.Insert Rear\n2.Delete Front\n3.Display\n4.Exit\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:printf("Enter the item to be inserted : ");
	     scanf("%d",&item);
	     insertrear();
	     break;
      case 2:item = deletefront();
	     if(item==-1)
	       printf("Queue s empty.\n");
	     else
	       printf("Item deleted = %d\n", item);
	     break;
      case 3: displayQ();
	      break;
      default: exit(0);
      getch();
    }
  }
}
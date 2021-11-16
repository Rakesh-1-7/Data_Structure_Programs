#include <stdio.h>
#include<conio.h>
#include<process.h>
#define Q_SIZE 5

int item, front = 0, rear = -1, q[10];

void insertrear(int item, int *rear, int q[])
{
  if(*rear == Q_SIZE - 1)
  {
    printf("Queue Overflow.\n");
    return;
  }
  *rear+=1;
  q[*rear] = item;
}

int deletefront(int *front, int *rear, int q[])
{
  int x;
  if(*front > *rear)
    return -1;
  return q[(*front)++];
  //x = q[*front];
  //*front += 1;
  //return x;
}

void displayQ(int front, int rear, int q[])
{
  int i;
  if(front > rear)
  {
    printf("Queue is empty.\n");
    return;
  }
  printf("Contents of queue :\n");
  for(i = front; i <= rear; i++)
  printf("%d\n",q[i]);
}

void main()
{
  int choice,item,front = 0, rear = -1, q[10];
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
	     insertrear(item, &rear,q);
	     break;
      case 2:item = deletefront(&front, &rear, q);
	     if(item==-1)
	       printf("Queue s empty.\n");
	     else
	       printf("Item deleted = %d\n", item);
	     break;
      case 3: displayQ(front, rear, q);
	      break;

      default:exit(0);

    }

  }
}
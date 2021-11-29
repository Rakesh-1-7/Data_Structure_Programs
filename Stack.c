#include<stdio.h>
#include<process.h>
#include<conio.h>
#define STACK_SIZE 5
void push(int item, int s[], int *top)
{
  if(*top == STACK_SIZE-1)
  {
    printf("\nStack overflow\n");
    return;
  }
  *top = *top + 1;
  s[*top] = item;
  return;
}
int pop(int s[], int *top)
{
  int item_deleted;
  if(*top == -1)
  {
    printf("The stack is empty\n");
    return 0;
  }
  item_deleted = s[*top];
  *top -= 1;
  return item_deleted;
}

void display(int top, int s[])
{
  int i;
  if(top == -1)
  {
    printf("Stack is empty\n");
    return;
  }
  printf("Contents of stack : \n");
  for(i = top; i >= 0; i--)
  {
    printf("%d\n", s[i]);
  }
}
int main()
{
  int top = -1;
  int item, s[10];
  int item_deleted;
  int choice;
  clrscr();
  for(;;)
  {
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	printf("Enter the item to be inserted\n");
	scanf("%d",&item);
	push(item,s,&top);
	break;
    case 2:
	item_deleted = pop(s,&top);
	if(item_deleted != 0)
	printf("\nItem deleted is %d\n",item_deleted);
	break;
    case 3:
	display(top,s);
	break;
    default:
	return(0);
    }
  }
}






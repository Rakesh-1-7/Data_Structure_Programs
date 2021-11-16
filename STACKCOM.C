#include <stdio.h>
#include <string.h>
#include <process.h>
#define STACK_SIZE 5
int push( int item, int s[], int *top)
{
  if(*top == STACK_SIZE -1)
  {
    printf("\n Stack Overflow\n");
    return 0;
  }
  *top = *top + 1;
  s[*top] = item;
  return 0;
}

int stack_compare(int x[], int y[])
{
  int i;
  for(i = 0; x[i] != '\0' && y[i] != '\0'; i++)
  {
    if(x[i] != y[i])
     return 0;
  }
  return 1;
}

int main()
{
  int top1 = -1, top2 = -1;
  int item, s1[10], s2[10], choice;
  clrscr();
  for(;;)
  {
    int res;
    printf("\n1.Push to stack 1\n2.Push to stack 2\n3.Compare the stacks\n4.Exit\n");
    printf("Enter the choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
	printf("Enter the item to item to inserted in stack 1 : ");
	scanf("%d", &item);
	push(item,s1,&top1);
	break;
      case 2:
	printf("Enter the item to item to inserted in stack 2 : ");
	scanf("%d", &item);
	push(item,s2,&top2);
	break;
      case 3:
      res = stack_compare(s1,s2);
      if(res == 0)
	printf("\nThe stacks are not equal\n");
      else
	printf("The stacks are equal\n");
      break;
      default:return 0;
      }
    }
}

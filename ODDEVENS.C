#include<stdio.h>
#include<string.h>
#include<process.h>
#define STACK_SIZE 5

int push(int item, int s[], int *top)
{
  if(*top == STACK_SIZE-1)
  {
    printf("\nStack Overflow\n");
    return 0;
  }
  *top = *top + 1;
  s[*top] = item;
  return 0;
}

int display(int top, int s[])
{
  int i;
  if(top==-1)
  {
    printf("None\n");
    return 0;
  }
  for(i = top; i >= 0; i--)
   printf("%d\n",s[i]);
  return 0;
}

int main()
{
  int top1 = -1, top2 = -1;
  int item, s1[5],s2[5];
  int choice,res;
  clrscr();
  for(;;)
  {
    printf("1.number to be pushed to stack\n2.Print the numbers in the stack\n3.Exit\n");
    printf("Enter a choice : ");
    scanf("%d",&choice);
    switch(choice)
    {


    case 1: printf("Enter number to be inserted : \n");
    scanf("%d", &item);
    if(top1 == 5 || top2 == 5)
      {
	printf("\nStack overflow\n");
	printf("The contents of the odd stack are : \n");
	display(top1,s1);
	printf("\nThe contents of even stack stack are : \n");
	display(top2, s2);
      }
	    if(item % 2 != 0)
	      push(item, s1, &top1);
	    else
	      push(item, s2, &top2);
	    break;
   case 2:printf("The contents of the odd stack are : \n");
	display(top1,s1);
	printf("\nThe contents of even stack stack are : \n");
	display(top2, s2);
	break;
   case 3:
   return 0;

   }
}
}
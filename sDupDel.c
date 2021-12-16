#include <stdio.h>
#define S_SIZE 10
void push(int *top,int s[],int item)
{
	if(*top == S_SIZE - 1)
	{
		printf("Stack Full");
		return;
	}
	s[++(*top)] = item;
}
void display(int top,int s[])
{
	if(top == -1)
	{
		printf("Stack empty");
		return;
	}
	printf("Contents of the stack are : ");
	for(int i=0;i<=top;i++)
		printf("%d ",s[i]);
}

void dupdel(int s1[], int s2[],int *top1, int *top2)
{

	for(int i=0;i <= *top1;i++)
	{
		int temp =0;
		for(int j=0 ;j<=*top2 ;j++)
		{
			if(s1[i] == s2[j])
			{
				temp = 1;
				break;
			}
		}
		if(temp != 1)
			push(top2, s2,s1[i]);
	}
}


int main() 
{
  int top1=-1,top2=-1,s1[S_SIZE],s2[S_SIZE],choice,item;

	for(;;)
	{
		printf("\n1.Push\n2.Display\n3.Exit\n");
		printf("Enter a choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter item to be inserted : ");
						 scanf("%d",&item);
						 push(&top1,s1,item);
						 break;
			case 2:dupdel(s1,s2,&top1,&top2);
						display(top2,s2);
						break;
			default:return 0;
		}
	}
}

int fib(int n)
{
  if(n==0)return 0;
  else if(n==1 || n==2)
  return 1;
  else
  return fib(n-1) + fib(n-2);
}

int main()
{
  int n, i;
  clrscr();
  printf("Enter the no. of terms : ");
  scanf("%d", &n);
  printf("The fibonacci series with %d terms is : \n", n);
  for(i = 0;i < n ;i++)
    printf("%d ",fib(i));
  printf("\n");
  getch();
  return 0;

}
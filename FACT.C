int fact(int x)
{
  if(x==0 || x==1)
  return 1;
  else
  return x*fact(x-1);
}

int main()
{
  int n;
  clrscr();
  printf("Enter an integer : ");
  scanf("%d", &n);
  printf("%d! = %d",n, fact(n));
  getch();
  return 0;
}

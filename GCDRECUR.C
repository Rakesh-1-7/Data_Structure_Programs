int gcd(int x, int y)
{
  if(y==0)
  return x;
  else
  return gcd(y, x%y);
}

int main()
{

  int a,b;
  clrscr();
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);
  printf("The gcd of %d, %d is %d.\n", a, b, gcd(a,b));
  getch();
  return 0;
}
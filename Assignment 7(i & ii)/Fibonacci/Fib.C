/* Print Fibonacci series using recursion */

#include<stdio.h>
int fib(int);
main()
{
  int n, i = 0, c;
  printf("Enter the no upto which you want to print the fib series:-");
  scanf("%d",&n);
  printf("Fibonacci series terms are:\n");
  for(c=1;c<=n;c++)
  {
    printf("%d, ",fib(i));
    i++;
  }
}
int fib(int n)
{
  if (n==0 || n==1)
    return n;
  else
    return (fib(n-1)+fib(n-2));
}

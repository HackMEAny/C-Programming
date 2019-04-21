/* Find Factorial using an user defined function without recursion */

#include<stdio.h>
int fact();
main()
{
	int a;
	printf("Enter the value:-");
	scanf("%d",&a);
	fact(a);
	printf("The factorial of %d is %d",a,fact(a));
}
int fact(int b)
{
	int i=1,s=1;
	while(i<=b)
	{
		s=s*i;
		i++;
	}
	return s;
}

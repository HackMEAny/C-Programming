/* Addition & Subtraction using an user defined function */

#include<stdio.h>
int add();
int subt();
main()
{
	int a,b;
	printf("Enter the 1st no:-");
	scanf("%d",&a);
	printf("Enter the 2nd no:-");
	scanf("%d",&b);
	add(a,b);printf("The sum of %d + %d is %d\n",a,b,add(a));
	subt(a,b);printf("The subt of %d - %d is %d\n",a,b,subt(a));
}
int add(a,b)
{
	a+=b;
	return a;
}
int subt(a,b)
{
	a-=b;
	return a;
}

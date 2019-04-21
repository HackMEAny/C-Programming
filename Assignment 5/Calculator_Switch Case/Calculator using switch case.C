/* Calculator using switch case */
#include<stdio.h>
main()
{
	int a,c,d;
	printf("Enter 2 numbers:- ");
	scanf("%d %d",&c,&d);
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Remainder\n");
	printf("6.Exit\n");
	printf("Enter the no which you want to perform:-\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("The Addition of two number is:- %d\n",(c+d));break;
		case 2:printf("The Subtraction of two number is:- %d\n",(c-d));break;
		case 3:printf("The Multilpication of two number is:- %d\n",(c*d));break;
		case 4:printf("The division of two number is:- %d\n",(c/d));break;
		case 5:printf("The remainder of two number is:- %d\n",(c%d));break;
		case 6:break;
		default:
			printf("Invalid input\n");
	}
}

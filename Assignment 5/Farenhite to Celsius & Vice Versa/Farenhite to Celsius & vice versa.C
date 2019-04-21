/* Convert celsius to farenhite & vice versa */
#include<stdio.h>
int farenhit();
int celsius();
main()
{
	int c;
	printf("Convert to\n1.Farenhite\n2.Celsius\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:farenhit();break;
		case 2:celsius();break;
		default:
			printf("Invalid Input");break;
	}
}
int farenhit()
{
	float a,b;
	printf("\nEnter the temp in Celsius:-");
	scanf("%f",&a);
	b=((9*a)/5)+32;
	printf("The temp %.02f C in farenhite is %.02f F\n",a,b);
	return 0;
}
int celsius()
{
	float a,b;
	printf("\nEnter the temp in Farenhite:-");
	scanf("%f",&a);
	b=((a*1.8)+32);
	printf("The temp %.02f F in celsius is %.02f C\n",a,b);
	return 0;
}

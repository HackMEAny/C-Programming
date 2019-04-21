/* Initialization of 1D array */
#include<stdio.h>
main()
{
	int a,arr[a],i;
	printf("Enter the size of the array:-");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("Enter the %d element of the array:- ",i);
		scanf("%d",&arr[i]);
	}
	printf("The elements are:-\n");
	for(i=1;i<=a;i++)
	{
		printf("%d \t",arr[i]);
	}
}

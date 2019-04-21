/* Sum & avg of 1D Array */
#include<stdio.h>
main()
{
	int a,arr[5],i,c=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter the %d element of the array:- ",i);
		scanf("%d",&arr[i]);
	}
	printf("The elements are:-\n");
	for(i=1;i<=5;i++)
	{
		printf("%d \t",arr[i]);
		c+=arr[i];
	}
	printf("\nThe sum is %d.",c);
	c/=5;
	printf("\nThe avg is %d.",c);
}

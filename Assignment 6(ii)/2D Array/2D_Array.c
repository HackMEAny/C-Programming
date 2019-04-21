/* Initialize 2D Array */
#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("Enter the row-size of matrix ");
	scanf("%d",&a);
	printf("Enter the column-size of matrix ");
	scanf("%d",&b);
	int arr[a][b];
	printf("Enter the elements:-");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is:-\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

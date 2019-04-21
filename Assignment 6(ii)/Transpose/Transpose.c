/* Transpose of the given matrix */
#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("Enter the row & column of a matrix:-");
	scanf("%d %d",&a,&b);
	int arr[a][b];
	printf("Enter the elements of matrix:-");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}printf("The given matrix is:-\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",arr[i][j]);
		}printf("\n");
	}printf("The transpose of the matrix is:-\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",arr[j][i]);
		}printf("\n");
	}
}

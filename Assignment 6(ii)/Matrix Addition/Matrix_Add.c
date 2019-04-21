/* Addition of two matrix */
#include<stdio.h>
main()
{
	int a,b,i,j,c,d;
	printf("Enter the row & column size of 1st matrix:- ");
	scanf("%d %d",&a,&b);
	int arr1[a][b];
	printf("Enter the elements of 1st matrix:-");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the row & column size of 2nd matrix:- ");
	scanf("%d %d",&c,&d);
	int arr2[c][d];
	if(a==c && b==d)
	{
		printf("Enter the elements of 2nd matrix:-");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
	}
	else
	{
		printf("Addition is not possible");
		exit (0);
	}
	printf("The 1st matrix is:-\n");
	int e[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("The 2nd matrix is:-\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d\t",arr2[i][j]);
			e[i][j]=arr1[i][j]+arr2[i][j];
		}printf("\n");
	}
	printf("The sum of two matrixs are:-\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",e[i][j]);
		}printf("\n");
	}
}

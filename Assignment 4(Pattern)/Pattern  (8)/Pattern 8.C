#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<4;i++)
	{
		for(k=i-1;k<4;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(k=4;k>i-1;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
